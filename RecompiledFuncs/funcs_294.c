#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_card_E38(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E44(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E50(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E5C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E68(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E74(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E80(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_card_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x60000F54: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x60000F58: beq         $v0, $t6, L_60000F70
    if (ctx->r2 == ctx->r14) {
        // 0x60000F5C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60000F70;
    }
    // 0x60000F5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60000F60:
    // 0x60000F60: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x60000F64: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60000F68: bne         $v0, $t7, L_60000F60
    if (ctx->r2 != ctx->r15) {
        // 0x60000F6C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_60000F60;
    }
    // 0x60000F6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_60000F70:
    // 0x60000F70: jr          $ra
    // 0x60000F74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60000F74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_card_F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F78: blez        $a2, L_60000FDC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x60000F7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60000FDC;
    }
    // 0x60000F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60000F80: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x60000F84: beq         $a3, $zero, L_60000FAC
    if (ctx->r7 == 0) {
        // 0x60000F88: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_60000FAC;
    }
    // 0x60000F88: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_60000F8C:
    // 0x60000F8C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x60000F90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60000F94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60000F98: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60000F9C: bne         $v1, $v0, L_60000F8C
    if (ctx->r3 != ctx->r2) {
        // 0x60000FA0: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_60000F8C;
    }
    // 0x60000FA0: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x60000FA4: beq         $v0, $a2, L_60000FDC
    if (ctx->r2 == ctx->r6) {
        // 0x60000FA8: nop
    
            goto L_60000FDC;
    }
    // 0x60000FA8: nop

L_60000FAC:
    // 0x60000FAC: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x60000FB0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60000FB4: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x60000FB8: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x60000FBC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x60000FC0: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x60000FC4: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x60000FC8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x60000FCC: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x60000FD0: lbu         $t0, -0x1($a1)
    ctx->r8 = MEM_BU(ctx->r5, -0X1);
    // 0x60000FD4: bne         $v0, $a2, L_60000FAC
    if (ctx->r2 != ctx->r6) {
        // 0x60000FD8: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_60000FAC;
    }
    // 0x60000FD8: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
L_60000FDC:
    // 0x60000FDC: jr          $ra
    // 0x60000FE0: nop

    return;
    // 0x60000FE0: nop

;}
RECOMP_FUNC void ovl_menu_card_FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000FE4: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x60000FE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60000FEC: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x60000FF0: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60000FF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60000FF8: addiu       $t9, $t9, 0x3610
    ctx->r25 = ADD32(ctx->r25, 0X3610);
    // 0x60000FFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60001000: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x60001004: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x60001008: andi        $t2, $a0, 0xF0
    ctx->r10 = ctx->r4 & 0XF0;
    // 0x6000100C: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x60001010: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001014: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001018: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x6000101C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x60001020: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001024: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001028: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x6000102C: addu        $t0, $a2, $t8
    ctx->r8 = ADD32(ctx->r6, ctx->r24);
    // 0x60001030: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x60001034: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x60001038: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x6000103C: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x60001040: mflo        $t4
    ctx->r12 = lo;
    // 0x60001044: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x60001048: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x6000104C: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x60001050: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001054: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x60001058: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x6000105C: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
L_60001060:
    // 0x60001060: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x60001064: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001068: multu       $t2, $s0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000106C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001070: mflo        $t1
    ctx->r9 = lo;
    // 0x60001074: addu        $a1, $t1, $s3
    ctx->r5 = ADD32(ctx->r9, ctx->r19);
    // 0x60001078: jal         0x60000F78
    // 0x6000107C: nop

    ovl_menu_card_F78(rdram, ctx);
        goto after_0;
    // 0x6000107C: nop

    after_0:
    // 0x60001080: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001084: bne         $s0, $s4, L_60001060
    if (ctx->r16 != ctx->r20) {
        // 0x60001088: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_60001060;
    }
    // 0x60001088: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x6000108C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001094: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001098: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x6000109C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x600010A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x600010A4: jr          $ra
    // 0x600010A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x600010A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_card_10AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010AC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x600010B0: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x600010B4: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x600010B8: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x600010BC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x600010C0: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x600010C4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x600010C8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x600010CC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x600010D0: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x600010D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_600010D8:
    // 0x600010D8: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x600010DC: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_600010E0:
    // 0x600010E0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x600010E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600010E8: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x600010EC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x600010F0: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x600010F4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600010F8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x600010FC: beq         $t1, $t9, L_60001114
    if (ctx->r9 == ctx->r25) {
        // 0x60001100: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_60001114;
    }
    // 0x60001100: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001104: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x60001108: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x6000110C: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x60001110: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_60001114:
    // 0x60001114: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x60001118: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x6000111C: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x60001120: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x60001124: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x60001128: beq         $t1, $t9, L_60001144
    if (ctx->r9 == ctx->r25) {
        // 0x6000112C: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_60001144;
    }
    // 0x6000112C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x60001130: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x60001134: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x60001138: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x6000113C: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x60001140: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_60001144:
    // 0x60001144: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x60001148: nop

    // 0x6000114C: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x60001150: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x60001154: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x60001158: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x6000115C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60001160: beq         $t1, $t7, L_60001178
    if (ctx->r9 == ctx->r15) {
        // 0x60001164: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_60001178;
    }
    // 0x60001164: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x60001168: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x6000116C: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x60001170: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x60001174: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_60001178:
    // 0x60001178: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x6000117C: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x60001180: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x60001184: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001188: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x6000118C: beq         $t1, $t7, L_600011A8
    if (ctx->r9 == ctx->r15) {
        // 0x60001190: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_600011A8;
    }
    // 0x60001190: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001194: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001198: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x6000119C: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x600011A0: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x600011A4: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_600011A8:
    // 0x600011A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600011AC: bne         $v1, $t4, L_600010E0
    if (ctx->r3 != ctx->r12) {
        // 0x600011B0: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_600010E0;
    }
    // 0x600011B0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x600011B4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x600011B8: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x600011BC: bne         $at, $zero, L_600010D8
    if (ctx->r1 != 0) {
        // 0x600011C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600010D8;
    }
    // 0x600011C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x600011C4: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x600011C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600011CC: bne         $t9, $zero, L_600011F4
    if (ctx->r25 != 0) {
        // 0x600011D0: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_600011F4;
    }
    // 0x600011D0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x600011D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600011D8: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_600011DC:
    // 0x600011DC: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x600011E0: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x600011E4: bne         $t7, $zero, L_600011F4
    if (ctx->r15 != 0) {
        // 0x600011E8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_600011F4;
    }
    // 0x600011E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x600011EC: bne         $a0, $a2, L_600011DC
    if (ctx->r4 != ctx->r6) {
        // 0x600011F0: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_600011DC;
    }
    // 0x600011F0: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_600011F4:
    // 0x600011F4: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x600011F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600011FC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001200: bne         $t6, $zero, L_60001224
    if (ctx->r14 != 0) {
        // 0x60001204: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_60001224;
    }
    // 0x60001204: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x60001208: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_6000120C:
    // 0x6000120C: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x60001210: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x60001214: bne         $t8, $zero, L_60001224
    if (ctx->r24 != 0) {
        // 0x60001218: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_60001224;
    }
    // 0x60001218: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x6000121C: bne         $t0, $a2, L_6000120C
    if (ctx->r8 != ctx->r6) {
        // 0x60001220: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_6000120C;
    }
    // 0x60001220: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_60001224:
    // 0x60001224: bne         $v0, $zero, L_6000123C
    if (ctx->r2 != 0) {
        // 0x60001228: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_6000123C;
    }
    // 0x60001228: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x6000122C: bne         $v1, $zero, L_60001240
    if (ctx->r3 != 0) {
        // 0x60001230: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_60001240;
    }
    // 0x60001230: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x60001234: b           L_600013BC
    // 0x60001238: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_600013BC;
    // 0x60001238: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_6000123C:
    // 0x6000123C: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_60001240:
    // 0x60001240: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x60001244: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x60001248: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x6000124C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60001250: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_60001254:
    // 0x60001254: beq         $t2, $zero, L_600012C4
    if (ctx->r10 == 0) {
        // 0x60001258: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600012C4;
    }
    // 0x60001258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x6000125C: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x60001260: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_60001264:
    // 0x60001264: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x60001268: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x6000126C: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x60001270: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x60001274: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x60001278: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x6000127C: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x60001280: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001284: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x60001288: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x6000128C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x60001290: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001294: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x60001298: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x6000129C: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x600012A0: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x600012A4: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x600012A8: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x600012AC: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x600012B0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x600012B4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600012B8: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x600012BC: bne         $v1, $a2, L_60001264
    if (ctx->r3 != ctx->r6) {
        // 0x600012C0: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_60001264;
    }
    // 0x600012C0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_600012C4:
    // 0x600012C4: beq         $a1, $zero, L_600013B0
    if (ctx->r5 == 0) {
        // 0x600012C8: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_600013B0;
    }
    // 0x600012C8: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x600012CC: blez        $s0, L_60001350
    if (SIGNED(ctx->r16) <= 0) {
        // 0x600012D0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001350;
    }
    // 0x600012D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x600012D4: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x600012D8: beq         $s2, $zero, L_60001310
    if (ctx->r18 == 0) {
        // 0x600012DC: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_60001310;
    }
    // 0x600012DC: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x600012E0: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x600012E4: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x600012E8: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_600012EC:
    // 0x600012EC: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x600012F0: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x600012F4: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x600012F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600012FC: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x60001300: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001304: bne         $s1, $v1, L_600012EC
    if (ctx->r17 != ctx->r3) {
        // 0x60001308: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_600012EC;
    }
    // 0x60001308: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x6000130C: beq         $v1, $s0, L_60001350
    if (ctx->r3 == ctx->r16) {
        // 0x60001310: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_60001350;
    }
L_60001310:
    // 0x60001310: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x60001314: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_60001318:
    // 0x60001318: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x6000131C: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x60001320: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x60001324: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001328: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x6000132C: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x60001330: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x60001334: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x60001338: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x6000133C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001340: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x60001344: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x60001348: bne         $v1, $s0, L_60001318
    if (ctx->r3 != ctx->r16) {
        // 0x6000134C: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_60001318;
    }
    // 0x6000134C: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_60001350:
    // 0x60001350: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60001354: beq         $at, $zero, L_600013B0
    if (ctx->r1 == 0) {
        // 0x60001358: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_600013B0;
    }
    // 0x60001358: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x6000135C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x60001360: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x60001364: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x60001368: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x6000136C: beq         $t8, $zero, L_60001390
    if (ctx->r24 == 0) {
        // 0x60001370: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_60001390;
    }
    // 0x60001370: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x60001374: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x60001378: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_6000137C:
    // 0x6000137C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001380: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x60001384: bne         $t5, $v1, L_6000137C
    if (ctx->r13 != ctx->r3) {
        // 0x60001388: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_6000137C;
    }
    // 0x60001388: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x6000138C: beq         $v1, $a2, L_600013B0
    if (ctx->r3 == ctx->r6) {
        // 0x60001390: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_600013B0;
    }
L_60001390:
    // 0x60001390: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001394:
    // 0x60001394: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001398: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x6000139C: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x600013A0: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x600013A4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x600013A8: bne         $v1, $a2, L_60001394
    if (ctx->r3 != ctx->r6) {
        // 0x600013AC: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001394;
    }
    // 0x600013AC: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_600013B0:
    // 0x600013B0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x600013B4: bne         $t1, $t3, L_60001254
    if (ctx->r9 != ctx->r11) {
        // 0x600013B8: nop
    
            goto L_60001254;
    }
    // 0x600013B8: nop

L_600013BC:
    // 0x600013BC: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x600013C0: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x600013C4: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x600013C8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x600013CC: jr          $ra
    // 0x600013D0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x600013D0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_card_13D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600013D4: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x600013D8: beq         $t6, $zero, L_60001414
    if (ctx->r14 == 0) {
        // 0x600013DC: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_60001414;
    }
    // 0x600013DC: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x600013E0: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x600013E4: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600013E8: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600013EC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x600013F0: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x600013F4: mflo        $t0
    ctx->r8 = lo;
    // 0x600013F8: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x600013FC: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x60001400: nop

    // 0x60001404: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x60001408: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x6000140C: jr          $ra
    // 0x60001410: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x60001410: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_60001414:
    // 0x60001414: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001418: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x6000141C: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x60001420: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x60001424: nop

    // 0x60001428: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x6000142C: mflo        $t9
    ctx->r25 = lo;
    // 0x60001430: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x60001434: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x60001438: nop

    // 0x6000143C: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x60001440: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x60001444: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x60001448: jr          $ra
    // 0x6000144C: nop

    return;
    // 0x6000144C: nop

;}
RECOMP_FUNC void ovl_menu_card_1450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001450: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001454: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60001458: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000145C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x60001460: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001464: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x60001468: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x6000146C: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x60001470: addiu       $s1, $s1, 0x3748
    ctx->r17 = ADD32(ctx->r17, 0X3748);
    // 0x60001474: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60001478: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x6000147C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x60001480: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x60001484: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x60001488: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x6000148C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60001490: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001494: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001498: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x6000149C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600014A0: jal         0x60000FE4
    // 0x600014A4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_card_FE4(rdram, ctx);
        goto after_0;
    // 0x600014A4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x600014A8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x600014AC: jal         0x600010AC
    // 0x600014B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_card_10AC(rdram, ctx);
        goto after_1;
    // 0x600014B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x600014B4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600014B8: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x600014BC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x600014C0: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_600014C4:
    // 0x600014C4: blez        $s5, L_60001548
    if (SIGNED(ctx->r21) <= 0) {
        // 0x600014C8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001548;
    }
    // 0x600014C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600014CC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x600014D0: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600014D4: addiu       $t7, $t7, 0x3748
    ctx->r15 = ADD32(ctx->r15, 0X3748);
    // 0x600014D8: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x600014DC: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x600014E0: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x600014E4: addu        $s3, $t8, $s7
    ctx->r19 = ADD32(ctx->r24, ctx->r23);
L_600014E8:
    // 0x600014E8: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x600014EC: beq         $t9, $zero, L_60001510
    if (ctx->r25 == 0) {
        // 0x600014F0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_60001510;
    }
    // 0x600014F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600014F4: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600014F8: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x600014FC: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x60001500: nop

    // 0x60001504: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x60001508: b           L_60001528
    // 0x6000150C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_60001528;
    // 0x6000150C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_60001510:
    // 0x60001510: sra         $t3, $s0, 1
    ctx->r11 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001514: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x60001518: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x6000151C: nop

    // 0x60001520: sra         $t5, $v0, 4
    ctx->r13 = S32(SIGNED(ctx->r2) >> 4);
    // 0x60001524: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_60001528:
    // 0x60001528: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x6000152C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001530: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x60001534: jal         0x600013D4
    // 0x60001538: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_card_13D4(rdram, ctx);
        goto after_2;
    // 0x60001538: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x6000153C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001540: bne         $s0, $s5, L_600014E8
    if (ctx->r16 != ctx->r21) {
        // 0x60001544: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_600014E8;
    }
    // 0x60001544: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001548:
    // 0x60001548: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x6000154C: bne         $s7, $fp, L_600014C4
    if (ctx->r23 != ctx->r30) {
        // 0x60001550: nop
    
            goto L_600014C4;
    }
    // 0x60001550: nop

    // 0x60001554: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60001558: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x6000155C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x60001560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001564: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001568: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x6000156C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001570: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001574: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x60001578: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x6000157C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x60001580: jr          $ra
    // 0x60001584: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001584: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_card_1588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001588: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x6000158C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x60001590: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001594: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x60001598: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x6000159C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x600015A0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x600015A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x600015A8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x600015AC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x600015B0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x600015B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x600015B8: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x600015BC: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x600015C0: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x600015C4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_600015C8:
    // 0x600015C8: jal         0x60000118
    // 0x600015CC: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_card_118(rdram, ctx);
        goto after_0;
    // 0x600015CC: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x600015D0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600015D4: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x600015D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600015DC: bne         $at, $zero, L_600015C8
    if (ctx->r1 != 0) {
        // 0x600015E0: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_600015C8;
    }
    // 0x600015E0: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x600015E4: jal         0x60000118
    // 0x600015E8: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_card_118(rdram, ctx);
        goto after_1;
    // 0x600015E8: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x600015EC: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x600015F0: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x600015F4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x600015F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600015FC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x60001600: beq         $t6, $at, L_60001690
    if (ctx->r14 == ctx->r1) {
        // 0x60001604: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001690;
    }
    // 0x60001604: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001608: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x6000160C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60001610: addiu       $s2, $s2, 0x37C8
    ctx->r18 = ADD32(ctx->r18, 0X37C8);
    // 0x60001614: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60001618: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x6000161C: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
L_60001620:
    // 0x60001620: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x60001624: bne         $v0, $at, L_60001634
    if (ctx->r2 != ctx->r1) {
        // 0x60001628: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_60001634;
    }
    // 0x60001628: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x6000162C: b           L_6000166C
    // 0x60001630: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_6000166C;
    // 0x60001630: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001634:
    // 0x60001634: jal         0x60000FE4
    // 0x60001638: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_menu_card_FE4(rdram, ctx);
        goto after_2;
    // 0x60001638: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
    // 0x6000163C: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x60001640: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60001644: andi        $t8, $t7, 0xF00
    ctx->r24 = ctx->r15 & 0XF00;
    // 0x60001648: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x6000164C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x60001650: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x60001654: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x60001658: nop

    // 0x6000165C: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x60001660: jal         0x600010AC
    // 0x60001664: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_card_10AC(rdram, ctx);
        goto after_3;
    // 0x60001664: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x60001668: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_6000166C:
    // 0x6000166C: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x60001670: beq         $at, $zero, L_6000167C
    if (ctx->r1 == 0) {
        // 0x60001674: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_6000167C;
    }
    // 0x60001674: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x60001678: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_6000167C:
    // 0x6000167C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x60001680: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001684: bne         $a0, $at, L_60001620
    if (ctx->r4 != ctx->r1) {
        // 0x60001688: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_60001620;
    }
    // 0x60001688: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x6000168C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001690:
    // 0x60001690: andi        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 & 0X1;
    // 0x60001694: beq         $t4, $zero, L_600016A0
    if (ctx->r12 == 0) {
        // 0x60001698: addiu       $fp, $sp, 0x70
        ctx->r30 = ADD32(ctx->r29, 0X70);
            goto L_600016A0;
    }
    // 0x60001698: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x6000169C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_600016A0:
    // 0x600016A0: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x600016A4: nop

    // 0x600016A8: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x600016AC: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600016B0: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x600016B4: mflo        $s0
    ctx->r16 = lo;
    // 0x600016B8: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016BC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x600016C0: jal         0x600000E8
    // 0x600016C4: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_card_E8(rdram, ctx);
        goto after_4;
    // 0x600016C4: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x600016C8: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x600016CC: addiu       $a3, $s2, 0x20
    ctx->r7 = ADD32(ctx->r18, 0X20);
    // 0x600016D0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x600016D4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x600016D8: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x600016DC: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x600016E0: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x600016E4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x600016E8: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x600016EC: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x600016F0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x600016F4: addu        $t4, $fp, $t3
    ctx->r12 = ADD32(ctx->r30, ctx->r11);
    // 0x600016F8: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x600016FC: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x60001700: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x60001704: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x60001708: jal         0x60000F78
    // 0x6000170C: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    ovl_menu_card_F78(rdram, ctx);
        goto after_5;
    // 0x6000170C: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    after_5:
    // 0x60001710: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x60001714: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x60001718: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    // 0x6000171C: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x60001720: sw          $t6, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r14;
    // 0x60001724: blez        $s0, L_60001774
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60001728: addu        $s6, $s4, $t7
        ctx->r22 = ADD32(ctx->r20, ctx->r15);
            goto L_60001774;
    }
    // 0x60001728: addu        $s6, $s4, $t7
    ctx->r22 = ADD32(ctx->r20, ctx->r15);
    // 0x6000172C: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x60001730: beq         $a0, $zero, L_60001750
    if (ctx->r4 == 0) {
        // 0x60001734: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_60001750;
    }
    // 0x60001734: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x60001738: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_6000173C:
    // 0x6000173C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001740: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x60001744: bne         $v1, $s7, L_6000173C
    if (ctx->r3 != ctx->r23) {
        // 0x60001748: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_6000173C;
    }
    // 0x60001748: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x6000174C: beq         $s7, $s0, L_60001770
    if (ctx->r23 == ctx->r16) {
        // 0x60001750: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_60001770;
    }
L_60001750:
    // 0x60001750: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_60001754:
    // 0x60001754: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x60001758: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x6000175C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x60001760: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x60001764: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001768: bne         $s7, $s0, L_60001754
    if (ctx->r23 != ctx->r16) {
        // 0x6000176C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_60001754;
    }
    // 0x6000176C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_60001770:
    // 0x60001770: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001774:
    // 0x60001774: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x60001778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x6000177C: blez        $t8, L_60001840
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001780: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001840;
    }
    // 0x60001780: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001784: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x60001788: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x6000178C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_60001790:
    // 0x60001790: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001794: blez        $t9, L_60001824
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60001798: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001824;
    }
    // 0x60001798: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000179C: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x600017A0: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_600017A4:
    // 0x600017A4: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x600017A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600017AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x600017B0: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x600017B4: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x600017B8: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x600017BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x600017C0: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x600017C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600017C8: jal         0x60001450
    // 0x600017CC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    ovl_menu_card_1450(rdram, ctx);
        goto after_6;
    // 0x600017CC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x600017D0: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x600017D4: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x600017D8: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x600017DC: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x600017E0: bne         $t0, $s2, L_600017F4
    if (ctx->r8 != ctx->r18) {
        // 0x600017E4: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_600017F4;
    }
    // 0x600017E4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x600017E8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600017EC: b           L_60001824
    // 0x600017F0: nop

        goto L_60001824;
    // 0x600017F0: nop

L_600017F4:
    // 0x600017F4: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600017F8: bne         $v1, $at, L_60001810
    if (ctx->r3 != ctx->r1) {
        // 0x600017FC: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_60001810;
    }
    // 0x600017FC: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x60001800: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001804: b           L_60001824
    // 0x60001808: nop

        goto L_60001824;
    // 0x60001808: nop

    // 0x6000180C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
L_60001810:
    // 0x60001810: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001814: bne         $s0, $t4, L_600017A4
    if (ctx->r16 != ctx->r12) {
        // 0x60001818: nop
    
            goto L_600017A4;
    }
    // 0x60001818: nop

    // 0x6000181C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001820: nop

L_60001824:
    // 0x60001824: beq         $t0, $s2, L_60001840
    if (ctx->r8 == ctx->r18) {
        // 0x60001828: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001840;
    }
    // 0x60001828: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x6000182C: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x60001830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001834: bne         $v0, $t5, L_60001790
    if (ctx->r2 != ctx->r13) {
        // 0x60001838: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_60001790;
    }
    // 0x60001838: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x6000183C: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_60001840:
    // 0x60001840: jal         0x60000124
    // 0x60001844: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_card_124(rdram, ctx);
        goto after_7;
    // 0x60001844: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x60001848: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x6000184C: bne         $s7, $s0, L_60001840
    if (ctx->r23 != ctx->r16) {
        // 0x60001850: nop
    
            goto L_60001840;
    }
    // 0x60001850: nop

    // 0x60001854: jal         0x60000124
    // 0x60001858: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_card_124(rdram, ctx);
        goto after_8;
    // 0x60001858: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x6000185C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x60001860: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x60001864: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001868: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000186C: mflo        $a1
    ctx->r5 = lo;
    // 0x60001870: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x60001874: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x60001878: jal         0x60000034
    // 0x6000187C: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    ovl_menu_card_34(rdram, ctx);
        goto after_9;
    // 0x6000187C: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x60001880: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001884: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001888: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x6000188C: jal         0x60000544
    // 0x60001890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_card_544(rdram, ctx);
        goto after_10;
    // 0x60001890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001894: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001898: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x6000189C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x600018A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x600018A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x600018A8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x600018AC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x600018B0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x600018B4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x600018B8: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x600018BC: jr          $ra
    // 0x600018C0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x600018C0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_menu_card_18C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018CC: jal         0x60000550
    // 0x600018D0: nop

    ovl_menu_card_550(rdram, ctx);
        goto after_0;
    // 0x600018D0: nop

    after_0:
    // 0x600018D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600018D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600018DC: jr          $ra
    // 0x600018E0: nop

    return;
    // 0x600018E0: nop

;}
RECOMP_FUNC void ovl_menu_card_18E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600018E8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x600018EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600018F0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x600018F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600018F8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x600018FC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001900: blez        $a1, L_60001A14
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001904: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001A14;
    }
    // 0x60001904: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001908: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x6000190C: addiu       $s3, $s3, 0x3740
    ctx->r19 = ADD32(ctx->r19, 0X3740);
    // 0x60001910: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001914:
    // 0x60001914: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001918: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x6000191C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001920: beq         $t6, $zero, L_6000196C
    if (ctx->r14 == 0) {
        // 0x60001924: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_6000196C;
    }
    // 0x60001924: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60001928: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x6000192C: jal         0x60000538
    // 0x60001930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_538(rdram, ctx);
        goto after_0;
    // 0x60001930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60001934: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001938: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x6000193C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001940: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60001944: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001948: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x6000194C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001950: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001954: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001958: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x6000195C: jal         0x6000055C
    // 0x60001960: nop

    ovl_menu_card_55C(rdram, ctx);
        goto after_1;
    // 0x60001960: nop

    after_1:
    // 0x60001964: b           L_600019EC
    // 0x60001968: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_600019EC;
    // 0x60001968: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_6000196C:
    // 0x6000196C: beq         $t9, $zero, L_600019C8
    if (ctx->r25 == 0) {
        // 0x60001970: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_600019C8;
    }
    // 0x60001970: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60001974: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001978: jal         0x60000F50
    // 0x6000197C: nop

    ovl_menu_card_F50(rdram, ctx);
        goto after_2;
    // 0x6000197C: nop

    after_2:
    // 0x60001980: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001984: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001988: jal         0x60001588
    // 0x6000198C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1588(rdram, ctx);
        goto after_3;
    // 0x6000198C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001990: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60001994: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x60001998: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x6000199C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x600019A0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600019A4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x600019A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600019AC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x600019B0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x600019B4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x600019B8: jal         0x6000055C
    // 0x600019BC: nop

    ovl_menu_card_55C(rdram, ctx);
        goto after_4;
    // 0x600019BC: nop

    after_4:
    // 0x600019C0: b           L_600019EC
    // 0x600019C4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_600019EC;
    // 0x600019C4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_600019C8:
    // 0x600019C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x600019CC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x600019D0: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x600019D4: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x600019D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x600019DC: jal         0x600006B8
    // 0x600019E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_menu_card_6B8(rdram, ctx);
        goto after_5;
    // 0x600019E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x600019E4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x600019E8: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_600019EC:
    // 0x600019EC: nop

    // 0x600019F0: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x600019F4: bne         $t4, $zero, L_60001A08
    if (ctx->r12 != 0) {
        // 0x600019F8: nop
    
            goto L_60001A08;
    }
    // 0x600019F8: nop

    // 0x600019FC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001A00: jal         0x600005A4
    // 0x60001A04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_card_5A4(rdram, ctx);
        goto after_6;
    // 0x60001A04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60001A08:
    // 0x60001A08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001A0C: bne         $s1, $s2, L_60001914
    if (ctx->r17 != ctx->r18) {
        // 0x60001A10: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001914;
    }
    // 0x60001A10: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001A14:
    // 0x60001A14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001A18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001A1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001A20: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001A24: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001A28: jr          $ra
    // 0x60001A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_card_1A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001A34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001A38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001A3C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001A40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001A44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001A48: blez        $a1, L_60001AB0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001A4C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001AB0;
    }
    // 0x60001A4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001A50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001A54:
    // 0x60001A54: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001A58: nop

    // 0x60001A5C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001A60: beq         $t6, $zero, L_60001A7C
    if (ctx->r14 == 0) {
        // 0x60001A64: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60001A7C;
    }
    // 0x60001A64: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60001A68: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001A6C: jal         0x60000550
    // 0x60001A70: nop

    ovl_menu_card_550(rdram, ctx);
        goto after_0;
    // 0x60001A70: nop

    after_0:
    // 0x60001A74: b           L_60001AA8
    // 0x60001A78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001AA8;
    // 0x60001A78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001A7C:
    // 0x60001A7C: beq         $t7, $zero, L_60001A98
    if (ctx->r15 == 0) {
        // 0x60001A80: nop
    
            goto L_60001A98;
    }
    // 0x60001A80: nop

    // 0x60001A84: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001A88: jal         0x600018C4
    // 0x60001A8C: nop

    ovl_menu_card_18C4(rdram, ctx);
        goto after_1;
    // 0x60001A8C: nop

    after_1:
    // 0x60001A90: b           L_60001AA8
    // 0x60001A94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001AA8;
    // 0x60001A94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001A98:
    // 0x60001A98: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001A9C: jal         0x600006AC
    // 0x60001AA0: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_2;
    // 0x60001AA0: nop

    after_2:
    // 0x60001AA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001AA8:
    // 0x60001AA8: bne         $s1, $s2, L_60001A54
    if (ctx->r17 != ctx->r18) {
        // 0x60001AAC: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001A54;
    }
    // 0x60001AAC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001AB0:
    // 0x60001AB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001AB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001AB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001ABC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001AC0: jr          $ra
    // 0x60001AC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001AC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_card_1AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001AD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60001AD4: beq         $a2, $zero, L_60001B00
    if (ctx->r6 == 0) {
        // 0x60001AD8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60001B00;
    }
    // 0x60001AD8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001ADC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x60001AE0: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x60001AE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60001AE8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x60001AEC: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x60001AF0: jal         0x600005B0
    // 0x60001AF4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_card_5B0(rdram, ctx);
        goto after_0;
    // 0x60001AF4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001AF8: b           L_60001B28
    // 0x60001AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001B28;
    // 0x60001AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B00:
    // 0x60001B00: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x60001B04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001B08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60001B0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60001B10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60001B14: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x60001B18: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x60001B1C: jal         0x600005A4
    // 0x60001B20: nop

    ovl_menu_card_5A4(rdram, ctx);
        goto after_1;
    // 0x60001B20: nop

    after_1:
    // 0x60001B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B28:
    // 0x60001B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001B2C: jr          $ra
    // 0x60001B30: nop

    return;
    // 0x60001B30: nop

;}
RECOMP_FUNC void ovl_menu_card_1B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001B34: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x60001B38: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x60001B3C: beq         $v0, $zero, L_60001B6C
    if (ctx->r2 == 0) {
        // 0x60001B40: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_60001B6C;
    }
    // 0x60001B40: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
L_60001B44:
    // 0x60001B44: bne         $a2, $v0, L_60001B54
    if (ctx->r6 != ctx->r2) {
        // 0x60001B48: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60001B54;
    }
    // 0x60001B48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001B4C: b           L_60001B5C
    // 0x60001B50: sb          $a3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r7;
        goto L_60001B5C;
    // 0x60001B50: sb          $a3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r7;
L_60001B54:
    // 0x60001B54: addiu       $t6, $v1, -0x20
    ctx->r14 = ADD32(ctx->r3, -0X20);
    // 0x60001B58: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
L_60001B5C:
    // 0x60001B5C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x60001B60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001B64: bne         $v0, $zero, L_60001B44
    if (ctx->r2 != 0) {
        // 0x60001B68: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_60001B44;
    }
    // 0x60001B68: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_60001B6C:
    // 0x60001B6C: jr          $ra
    // 0x60001B70: nop

    return;
    // 0x60001B70: nop

;}
RECOMP_FUNC void ovl_menu_card_1B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001B74: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x60001B78: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001B7C: beq         $v0, $zero, L_60001BE0
    if (ctx->r2 == 0) {
        // 0x60001B80: addiu       $a3, $a3, 0x3744
        ctx->r7 = ADD32(ctx->r7, 0X3744);
            goto L_60001BE0;
    }
    // 0x60001B80: addiu       $a3, $a3, 0x3744
    ctx->r7 = ADD32(ctx->r7, 0X3744);
    // 0x60001B84: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
L_60001B88:
    // 0x60001B88: bne         $at, $zero, L_60001B9C
    if (ctx->r1 != 0) {
        // 0x60001B8C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60001B9C;
    }
    // 0x60001B8C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001B90: slti        $at, $v0, 0x95
    ctx->r1 = SIGNED(ctx->r2) < 0X95 ? 1 : 0;
    // 0x60001B94: bne         $at, $zero, L_60001BA0
    if (ctx->r1 != 0) {
        // 0x60001B98: nop
    
            goto L_60001BA0;
    }
    // 0x60001B98: nop

L_60001B9C:
    // 0x60001B9C: addiu       $v1, $zero, 0x3B
    ctx->r3 = ADD32(0, 0X3B);
L_60001BA0:
    // 0x60001BA0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x60001BA4: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x60001BA8: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x60001BAC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x60001BB0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60001BB4: sb          $t8, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r24;
    // 0x60001BB8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x60001BBC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60001BC0: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x60001BC4: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x60001BC8: nop

    // 0x60001BCC: sb          $t1, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r9;
    // 0x60001BD0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x60001BD4: nop

    // 0x60001BD8: bne         $v0, $zero, L_60001B88
    if (ctx->r2 != 0) {
        // 0x60001BDC: slti        $at, $v0, 0xF
        ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
            goto L_60001B88;
    }
    // 0x60001BDC: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
L_60001BE0:
    // 0x60001BE0: jr          $ra
    // 0x60001BE4: nop

    return;
    // 0x60001BE4: nop

;}
RECOMP_FUNC void ovl_menu_card_1BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60001BEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001BF0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x60001BF4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001BF8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001BFC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x60001C00: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x60001C04: jal         0x600005A4
    // 0x60001C08: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_card_5A4(rdram, ctx);
        goto after_0;
    // 0x60001C08: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001C0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001C10: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60001C14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001C18: jal         0x60001AC8
    // 0x60001C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_1;
    // 0x60001C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x60001C20: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001C24: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001C28: addiu       $s1, $s1, 0x385C
    ctx->r17 = ADD32(ctx->r17, 0X385C);
    // 0x60001C2C: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60001C30:
    // 0x60001C30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001C34: nop

    // 0x60001C38: beq         $a0, $zero, L_60001C4C
    if (ctx->r4 == 0) {
        // 0x60001C3C: nop
    
            goto L_60001C4C;
    }
    // 0x60001C3C: nop

    // 0x60001C40: jal         0x600006AC
    // 0x60001C44: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_2;
    // 0x60001C44: nop

    after_2:
    // 0x60001C48: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_60001C4C:
    // 0x60001C4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60001C50: bne         $s0, $s1, L_60001C30
    if (ctx->r16 != ctx->r17) {
        // 0x60001C54: nop
    
            goto L_60001C30;
    }
    // 0x60001C54: nop

    // 0x60001C58: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001C5C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x60001C60: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60001C64: jal         0x60001AC8
    // 0x60001C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_3;
    // 0x60001C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001C6C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001C70: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x60001C74: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60001C78: jal         0x60001AC8
    // 0x60001C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_4;
    // 0x60001C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x60001C80: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x60001C84: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x60001C88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60001C8C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60001C90: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x60001C94: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x60001C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001C9C: jal         0x600006A0
    // 0x60001CA0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_5;
    // 0x60001CA0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_5:
    // 0x60001CA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001CA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001CAC: jal         0x60000640
    // 0x60001CB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_6;
    // 0x60001CB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_6:
    // 0x60001CB4: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x60001CB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x60001CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001CC0: jal         0x60000574
    // 0x60001CC4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_card_574(rdram, ctx);
        goto after_7;
    // 0x60001CC4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x60001CC8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60001CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001CD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001CD4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60001CD8: jal         0x60000D30
    // 0x60001CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_8;
    // 0x60001CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x60001CE0: jal         0x60000D3C
    // 0x60001CE4: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_9;
    // 0x60001CE4: nop

    after_9:
    // 0x60001CE8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001CEC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x60001CF0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60001CF4: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60001CF8: jal         0x60001AC8
    // 0x60001CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_10;
    // 0x60001CFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x60001D00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001D04: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x60001D08: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60001D0C: jal         0x60001AC8
    // 0x60001D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_11;
    // 0x60001D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x60001D14: jal         0x600006AC
    // 0x60001D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_12;
    // 0x60001D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x60001D1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001D20: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x60001D24: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001D28: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001D2C: jr          $ra
    // 0x60001D30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60001D30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_menu_card_1D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001D34: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x60001D38: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001D3C: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x60001D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001D44: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x60001D48: beq         $at, $zero, L_60001D74
    if (ctx->r1 == 0) {
        // 0x60001D4C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001D74;
    }
    // 0x60001D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001D50: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001D54: lw          $a0, 0x385C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X385C);
    // 0x60001D58: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x60001D5C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x60001D60: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x60001D64: jal         0x60000574
    // 0x60001D68: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    ovl_menu_card_574(rdram, ctx);
        goto after_0;
    // 0x60001D68: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_0:
    // 0x60001D6C: b           L_60001D90
    // 0x60001D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001D90;
    // 0x60001D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D74:
    // 0x60001D74: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001D78: lw          $a0, 0x385C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X385C);
    // 0x60001D7C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x60001D80: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x60001D84: jal         0x60000574
    // 0x60001D88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_card_574(rdram, ctx);
        goto after_1;
    // 0x60001D88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x60001D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D90:
    // 0x60001D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001D94: jr          $ra
    // 0x60001D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60001D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_card_1D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001D9C: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x60001DA0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001DA4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001DA8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x60001DAC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x60001DB0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x60001DB4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x60001DB8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x60001DBC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x60001DC0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x60001DC4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x60001DC8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x60001DCC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x60001DD0: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60001DD4: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x60001DD8: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60001DDC: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x60001DE0: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001DE4: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60001DE8: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001DEC: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x60001DF0: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001DF4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x60001DF8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001DFC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x60001E00: addiu       $v1, $v1, 0x385C
    ctx->r3 = ADD32(ctx->r3, 0X385C);
    // 0x60001E04: addiu       $v0, $v0, 0x3848
    ctx->r2 = ADD32(ctx->r2, 0X3848);
L_60001E08:
    // 0x60001E08: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001E0C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x60001E10: bne         $at, $zero, L_60001E08
    if (ctx->r1 != 0) {
        // 0x60001E14: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_60001E08;
    }
    // 0x60001E14: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x60001E18: bne         $a0, $zero, L_600031AC
    if (ctx->r4 != 0) {
        // 0x60001E1C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_600031AC;
    }
    // 0x60001E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001E20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001E28: jal         0x60000220
    // 0x60001E2C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_card_220(rdram, ctx);
        goto after_0;
    // 0x60001E2C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x60001E30: jal         0x60000904
    // 0x60001E34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_904(rdram, ctx);
        goto after_1;
    // 0x60001E34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60001E38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001E3C: bne         $v0, $at, L_60001FE8
    if (ctx->r2 != ctx->r1) {
        // 0x60001E40: nop
    
            goto L_60001FE8;
    }
    // 0x60001E40: nop

    // 0x60001E44: jal         0x60000118
    // 0x60001E48: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_card_118(rdram, ctx);
        goto after_2;
    // 0x60001E48: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_2:
    // 0x60001E4C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001E50: lw          $t6, 0x3454($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3454);
    // 0x60001E54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E58: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x60001E5C: sw          $v0, 0x3740($at)
    MEM_W(0X3740, ctx->r1) = ctx->r2;
    // 0x60001E60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60001E64: addiu       $a0, $zero, 0x7A
    ctx->r4 = ADD32(0, 0X7A);
    // 0x60001E68: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x60001E6C: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x60001E70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001E74: jal         0x600006A0
    // 0x60001E78: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_3;
    // 0x60001E78: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    after_3:
    // 0x60001E7C: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x60001E80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001E84: jal         0x60000640
    // 0x60001E88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_4;
    // 0x60001E88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_4:
    // 0x60001E8C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E90: lwc1        $f20, 0x36F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X36F8);
    // 0x60001E94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001E98: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001E9C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60001EA0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60001EA4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60001EA8: jal         0x60000574
    // 0x60001EAC: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_5;
    // 0x60001EAC: nop

    after_5:
    // 0x60001EB0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001EB4: addiu       $s0, $s0, 0x3210
    ctx->r16 = ADD32(ctx->r16, 0X3210);
    // 0x60001EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001EBC: jal         0x600018E4
    // 0x60001EC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_menu_card_18E4(rdram, ctx);
        goto after_6;
    // 0x60001EC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x60001EC4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001EC8: addiu       $s1, $s1, 0x346C
    ctx->r17 = ADD32(ctx->r17, 0X346C);
    // 0x60001ECC: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x60001ED0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001EDC: jal         0x60000D30
    // 0x60001EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_7;
    // 0x60001EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x60001EE4: jal         0x60000D3C
    // 0x60001EE8: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_8;
    // 0x60001EE8: nop

    after_8:
    // 0x60001EEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001EF0: bne         $v0, $at, L_60001FA4
    if (ctx->r2 != ctx->r1) {
        // 0x60001EF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_60001FA4;
    }
    // 0x60001EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001EFC: jal         0x60001AC8
    // 0x60001F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_9;
    // 0x60001F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x60001F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001F0C: jal         0x60001AC8
    // 0x60001F10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_10;
    // 0x60001F10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x60001F14: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x60001F18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001F20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001F24: jal         0x60000D30
    // 0x60001F28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_11;
    // 0x60001F28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x60001F2C: jal         0x60000D3C
    // 0x60001F30: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_12;
    // 0x60001F30: nop

    after_12:
    // 0x60001F34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001F38: bne         $v0, $at, L_60001FA4
    if (ctx->r2 != ctx->r1) {
        // 0x60001F3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_60001FA4;
    }
    // 0x60001F3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001F44: jal         0x60001AC8
    // 0x60001F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_13;
    // 0x60001F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x60001F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60001F54: jal         0x60001AC8
    // 0x60001F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_14;
    // 0x60001F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x60001F5C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60001F60: jal         0x600005A4
    // 0x60001F64: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_card_5A4(rdram, ctx);
        goto after_15;
    // 0x60001F64: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_15:
    // 0x60001F68: jal         0x60000B74
    // 0x60001F6C: nop

    ovl_menu_card_B74(rdram, ctx);
        goto after_16;
    // 0x60001F6C: nop

    after_16:
    // 0x60001F70: beq         $v0, $zero, L_60001F90
    if (ctx->r2 == 0) {
        // 0x60001F74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_60001F90;
    }
    // 0x60001F74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001F80: jal         0x60001AC8
    // 0x60001F84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_17;
    // 0x60001F84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x60001F88: b           L_60001F9C
    // 0x60001F8C: nop

        goto L_60001F9C;
    // 0x60001F8C: nop

L_60001F90:
    // 0x60001F90: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60001F94: jal         0x60001AC8
    // 0x60001F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_18;
    // 0x60001F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
L_60001F9C:
    // 0x60001F9C: jal         0x60000850
    // 0x60001FA0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_card_850(rdram, ctx);
        goto after_19;
    // 0x60001FA0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_19:
L_60001FA4:
    // 0x60001FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001FAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001FB0: jal         0x60000238
    // 0x60001FB4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_card_238(rdram, ctx);
        goto after_20;
    // 0x60001FB4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_20:
    // 0x60001FB8: jal         0x60000208
    // 0x60001FBC: nop

    ovl_menu_card_208(rdram, ctx);
        goto after_21;
    // 0x60001FBC: nop

    after_21:
    // 0x60001FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001FC4: jal         0x60001A30
    // 0x60001FC8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_menu_card_1A30(rdram, ctx);
        goto after_22;
    // 0x60001FC8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_22:
    // 0x60001FCC: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60001FD0: jal         0x600006AC
    // 0x60001FD4: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_23;
    // 0x60001FD4: nop

    after_23:
    // 0x60001FD8: jal         0x60000124
    // 0x60001FDC: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_card_124(rdram, ctx);
        goto after_24;
    // 0x60001FDC: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_24:
    // 0x60001FE0: b           L_600031B0
    // 0x60001FE4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_600031B0;
    // 0x60001FE4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_60001FE8:
    // 0x60001FE8: jal         0x60000118
    // 0x60001FEC: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_card_118(rdram, ctx);
        goto after_25;
    // 0x60001FEC: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_25:
    // 0x60001FF0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FF4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001FF8: sw          $v0, 0x3740($at)
    MEM_W(0X3740, ctx->r1) = ctx->r2;
    // 0x60001FFC: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002000: jal         0x600018E4
    // 0x60002004: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_menu_card_18E4(rdram, ctx);
        goto after_26;
    // 0x60002004: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_26:
    // 0x60002008: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x6000200C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002010: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002014: lw          $a0, 0x3410($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3410);
    // 0x60002018: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x6000201C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002020: jal         0x60000574
    // 0x60002024: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_27;
    // 0x60002024: nop

    after_27:
    // 0x60002028: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000202C: lw          $a0, 0x3410($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3410);
    // 0x60002030: jal         0x60000640
    // 0x60002034: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_card_640(rdram, ctx);
        goto after_28;
    // 0x60002034: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_28:
    // 0x60002038: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000203C: lwc1        $f30, 0x36FC($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X36FC);
    // 0x60002040: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002044: lwc1        $f28, 0x3700($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X3700);
    // 0x60002048: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000204C: lwc1        $f26, 0x3704($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X3704);
    // 0x60002050: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60002054: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002058: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000205C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002060: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002064: lwc1        $f20, 0x3708($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3708);
    // 0x60002068: addiu       $fp, $sp, 0x174
    ctx->r30 = ADD32(ctx->r29, 0X174);
L_6000206C:
    // 0x6000206C: jal         0x60000904
    // 0x60002070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_904(rdram, ctx);
        goto after_29;
    // 0x60002070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
    // 0x60002074: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_60002078:
    // 0x60002078: beq         $s2, $zero, L_60002090
    if (ctx->r18 == 0) {
        // 0x6000207C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002090;
    }
    // 0x6000207C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002080: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002084: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002088: jal         0x60001AC8
    // 0x6000208C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_30;
    // 0x6000208C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
L_60002090:
    // 0x60002090: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
    // 0x60002094: sltiu       $at, $t8, 0xB
    ctx->r1 = ctx->r24 < 0XB ? 1 : 0;
    // 0x60002098: beq         $at, $zero, L_600026AC
    if (ctx->r1 == 0) {
        // 0x6000209C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_600026AC;
    }
    // 0x6000209C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x600020A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020A4: addu        $at, $at, $t8
    gpr jr_addend_600020B0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x600020A8: lw          $t8, 0x370C($at)
    ctx->r24 = ADD32(ctx->r1, 0X370C);
    // 0x600020AC: nop

    // 0x600020B0: jr          $t8
    // 0x600020B4: nop

    switch (jr_addend_600020B0 >> 2) {
        case 0: goto L_600020B8; break;
        case 1: goto L_60002140; break;
        case 2: goto L_600026AC; break;
        case 3: goto L_60002178; break;
        case 4: goto L_600026AC; break;
        case 5: goto L_600026AC; break;
        case 6: goto L_600026AC; break;
        case 7: goto L_600026AC; break;
        case 8: goto L_600026AC; break;
        case 9: goto L_60002388; break;
        case 10: goto L_60002254; break;
        default: switch_error(__func__, 0x600020B0, 0x6000370C);
    }
    // 0x600020B4: nop

L_600020B8:
    // 0x600020B8: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x600020BC: lw          $t9, 0x3468($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3468);
    // 0x600020C0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x600020C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x600020C8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x600020CC: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x600020D0: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600020D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600020D8: jal         0x600006A0
    // 0x600020DC: sw          $t9, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r25;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_31;
    // 0x600020DC: sw          $t9, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r25;
    after_31:
    // 0x600020E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600020E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600020E8: jal         0x60000640
    // 0x600020EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_32;
    // 0x600020EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_32:
    // 0x600020F0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x600020F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600020F8: jal         0x60000574
    // 0x600020FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_card_574(rdram, ctx);
        goto after_33;
    // 0x600020FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x60002100: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60002104: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60002108: addiu       $t1, $t1, 0x34A4
    ctx->r9 = ADD32(ctx->r9, 0X34A4);
    // 0x6000210C: lw          $a3, 0x3458($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3458);
    // 0x60002110: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x60002114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002118: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x6000211C: jal         0x60001BE8
    // 0x60002120: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_card_1BE8(rdram, ctx);
        goto after_34;
    // 0x60002120: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_34:
    // 0x60002124: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60002128: jal         0x600006AC
    // 0x6000212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_35;
    // 0x6000212C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x60002130: bne         $s3, $zero, L_6000317C
    if (ctx->r19 != 0) {
        // 0x60002134: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000317C;
    }
    // 0x60002134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002138: b           L_6000206C
    // 0x6000213C: nop

        goto L_6000206C;
    // 0x6000213C: nop

L_60002140:
    // 0x60002140: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002144: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002148: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000214C: jal         0x60001AC8
    // 0x60002150: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_36;
    // 0x60002150: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_36:
    // 0x60002154: jal         0x60000850
    // 0x60002158: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_card_850(rdram, ctx);
        goto after_37;
    // 0x60002158: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_37:
    // 0x6000215C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002160: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002164: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002168: jal         0x60001AC8
    // 0x6000216C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_38;
    // 0x6000216C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_38:
    // 0x60002170: b           L_6000206C
    // 0x60002174: nop

        goto L_6000206C;
    // 0x60002174: nop

L_60002178:
    // 0x60002178: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000217C: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002180: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002184: jal         0x60001AC8
    // 0x60002188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_39;
    // 0x60002188: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_39:
    // 0x6000218C: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002190: lw          $t2, 0x3458($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3458);
    // 0x60002194: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x60002198: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x6000219C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x600021A0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x600021A4: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600021A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600021AC: jal         0x600006A0
    // 0x600021B0: sw          $t2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r10;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_40;
    // 0x600021B0: sw          $t2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r10;
    after_40:
    // 0x600021B4: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x600021B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600021BC: jal         0x60000640
    // 0x600021C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_41;
    // 0x600021C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_41:
    // 0x600021C4: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600021C8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x600021CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600021D0: jal         0x60000574
    // 0x600021D4: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_42;
    // 0x600021D4: nop

    after_42:
    // 0x600021D8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600021DC: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600021E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600021E4: jal         0x60001AC8
    // 0x600021E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_43;
    // 0x600021E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_43:
    // 0x600021EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600021F0: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x600021F4: addiu       $a0, $a0, 0x34A4
    ctx->r4 = ADD32(ctx->r4, 0X34A4);
    // 0x600021F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600021FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002200: jal         0x60000D30
    // 0x60002204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_44;
    // 0x60002204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_44:
    // 0x60002208: jal         0x60000D3C
    // 0x6000220C: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_45;
    // 0x6000220C: nop

    after_45:
    // 0x60002210: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002214: jal         0x600006AC
    // 0x60002218: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_46;
    // 0x60002218: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_46:
    // 0x6000221C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002220: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002224: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002228: jal         0x60001AC8
    // 0x6000222C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_47;
    // 0x6000222C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x60002230: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002234: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002238: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x6000223C: jal         0x60001AC8
    // 0x60002240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_48;
    // 0x60002240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_48:
    // 0x60002244: bne         $s3, $zero, L_6000317C
    if (ctx->r19 != 0) {
        // 0x60002248: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000317C;
    }
    // 0x60002248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000224C: b           L_6000206C
    // 0x60002250: nop

        goto L_6000206C;
    // 0x60002250: nop

L_60002254:
    // 0x60002254: jal         0x60000CF4
    // 0x60002258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_CF4(rdram, ctx);
        goto after_49;
    // 0x60002258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_49:
    // 0x6000225C: beq         $v0, $zero, L_60002290
    if (ctx->r2 == 0) {
        // 0x60002260: nop
    
            goto L_60002290;
    }
    // 0x60002260: nop

    // 0x60002264: jal         0x60000D24
    // 0x60002268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_D24(rdram, ctx);
        goto after_50;
    // 0x60002268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_50:
    // 0x6000226C: beq         $v0, $zero, L_60002290
    if (ctx->r2 == 0) {
        // 0x60002270: addiu       $s0, $zero, 0x16
        ctx->r16 = ADD32(0, 0X16);
            goto L_60002290;
    }
    // 0x60002270: addiu       $s0, $zero, 0x16
    ctx->r16 = ADD32(0, 0X16);
    // 0x60002274: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002278: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000227C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x60002280: jal         0x60001AC8
    // 0x60002284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_51;
    // 0x60002284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_51:
    // 0x60002288: b           L_600022A8
    // 0x6000228C: nop

        goto L_600022A8;
    // 0x6000228C: nop

L_60002290:
    // 0x60002290: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002294: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
    // 0x60002298: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000229C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x600022A0: jal         0x60001AC8
    // 0x600022A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_52;
    // 0x600022A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_52:
L_600022A8:
    // 0x600022A8: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x600022AC: lw          $t4, 0x3468($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3468);
    // 0x600022B0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x600022B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x600022B8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x600022BC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x600022C0: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600022C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600022C8: jal         0x600006A0
    // 0x600022CC: sw          $t4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r12;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_53;
    // 0x600022CC: sw          $t4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r12;
    after_53:
    // 0x600022D0: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x600022D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600022D8: jal         0x60000640
    // 0x600022DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_54;
    // 0x600022DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_54:
    // 0x600022E0: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600022E4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x600022E8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600022EC: jal         0x60000574
    // 0x600022F0: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_55;
    // 0x600022F0: nop

    after_55:
    // 0x600022F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600022F8: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600022FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60002300: jal         0x60001AC8
    // 0x60002304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_56;
    // 0x60002304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_56:
    // 0x60002308: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000230C: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002310: addiu       $a0, $a0, 0x3530
    ctx->r4 = ADD32(ctx->r4, 0X3530);
    // 0x60002314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002318: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000231C: jal         0x60000D30
    // 0x60002320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_57;
    // 0x60002320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_57:
    // 0x60002324: jal         0x60000D3C
    // 0x60002328: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_58;
    // 0x60002328: nop

    after_58:
    // 0x6000232C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002330: jal         0x600006AC
    // 0x60002334: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_59;
    // 0x60002334: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_59:
    // 0x60002338: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000233C: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002340: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60002344: jal         0x60001AC8
    // 0x60002348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_60;
    // 0x60002348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x6000234C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002350: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002354: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x60002358: jal         0x60001AC8
    // 0x6000235C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_61;
    // 0x6000235C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_61:
    // 0x60002360: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002364: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002368: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x6000236C: jal         0x60001AC8
    // 0x60002370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_62;
    // 0x60002370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_62:
    // 0x60002374: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002378: bne         $s3, $at, L_6000317C
    if (ctx->r19 != ctx->r1) {
        // 0x6000237C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000317C;
    }
    // 0x6000237C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002380: b           L_6000206C
    // 0x60002384: nop

        goto L_6000206C;
    // 0x60002384: nop

L_60002388:
    // 0x60002388: jal         0x60000CF4
    // 0x6000238C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_CF4(rdram, ctx);
        goto after_63;
    // 0x6000238C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_63:
    // 0x60002390: beq         $v0, $zero, L_60002254
    if (ctx->r2 == 0) {
        // 0x60002394: nop
    
            goto L_60002254;
    }
    // 0x60002394: nop

    // 0x60002398: jal         0x60000D24
    // 0x6000239C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_D24(rdram, ctx);
        goto after_64;
    // 0x6000239C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_64:
    // 0x600023A0: beq         $v0, $zero, L_60002254
    if (ctx->r2 == 0) {
        // 0x600023A4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002254;
    }
    // 0x600023A4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600023A8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600023AC: addiu       $s0, $s0, 0x1D34
    ctx->r16 = ADD32(ctx->r16, 0X1D34);
    // 0x600023B0: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600023B4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600023B8: jal         0x60001AC8
    // 0x600023BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_65;
    // 0x600023BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_65:
    // 0x600023C0: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600023C4: lw          $t6, 0x3468($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3468);
    // 0x600023C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x600023CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x600023D0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x600023D4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x600023D8: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600023DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600023E0: jal         0x600006A0
    // 0x600023E4: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_66;
    // 0x600023E4: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    after_66:
    // 0x600023E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600023EC: sw          $v0, 0x385C($at)
    MEM_W(0X385C, ctx->r1) = ctx->r2;
    // 0x600023F0: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x600023F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600023F8: jal         0x60000640
    // 0x600023FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_67;
    // 0x600023FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_67:
    // 0x60002400: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002404: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x60002408: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x6000240C: jal         0x60000574
    // 0x60002410: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_68;
    // 0x60002410: nop

    after_68:
    // 0x60002414: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002418: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000241C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60002420: jal         0x60001AC8
    // 0x60002424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_69;
    // 0x60002424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_69:
    // 0x60002428: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000242C: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002430: addiu       $a0, $a0, 0x34DC
    ctx->r4 = ADD32(ctx->r4, 0X34DC);
    // 0x60002434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000243C: jal         0x60000D30
    // 0x60002440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    ovl_menu_card_D30(rdram, ctx);
        goto after_70;
    // 0x60002440: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_70:
    // 0x60002444: jal         0x60000D3C
    // 0x60002448: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_71;
    // 0x60002448: nop

    after_71:
    // 0x6000244C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002450: jal         0x600006AC
    // 0x60002454: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_72;
    // 0x60002454: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_72:
    // 0x60002458: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000245C: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002460: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002464: jal         0x60001AC8
    // 0x60002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_73;
    // 0x60002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_73:
    // 0x6000246C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002470: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002474: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60002478: jal         0x60001AC8
    // 0x6000247C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_74;
    // 0x6000247C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_74:
    // 0x60002480: jal         0x60000904
    // 0x60002484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_904(rdram, ctx);
        goto after_75;
    // 0x60002484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_75:
    // 0x60002488: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x6000248C: beq         $v0, $at, L_600024AC
    if (ctx->r2 == ctx->r1) {
        // 0x60002490: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_600024AC;
    }
    // 0x60002490: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002494: beq         $v0, $zero, L_60002140
    if (ctx->r2 == 0) {
        // 0x60002498: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60002140;
    }
    // 0x60002498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000249C: bne         $v0, $at, L_60002078
    if (ctx->r2 != ctx->r1) {
        // 0x600024A0: nop
    
            goto L_60002078;
    }
    // 0x600024A0: nop

    // 0x600024A4: b           L_60002140
    // 0x600024A8: nop

        goto L_60002140;
    // 0x600024A8: nop

L_600024AC:
    // 0x600024AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600024B0: bne         $s3, $at, L_6000269C
    if (ctx->r19 != ctx->r1) {
        // 0x600024B4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000269C;
    }
    // 0x600024B4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600024B8: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600024BC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600024C0: jal         0x60001AC8
    // 0x600024C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_76;
    // 0x600024C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_76:
    // 0x600024C8: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600024CC: lw          $t8, 0x3454($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3454);
    // 0x600024D0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x600024D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x600024D8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x600024DC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x600024E0: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600024E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600024E8: jal         0x600006A0
    // 0x600024EC: sw          $t8, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r24;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_77;
    // 0x600024EC: sw          $t8, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r24;
    after_77:
    // 0x600024F0: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x600024F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600024F8: jal         0x60000640
    // 0x600024FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_78;
    // 0x600024FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_78:
    // 0x60002500: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002504: mfc1        $a1, $f30
    ctx->r5 = (int32_t)ctx->f30.u32l;
    // 0x60002508: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x6000250C: jal         0x60000574
    // 0x60002510: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_79;
    // 0x60002510: nop

    after_79:
    // 0x60002514: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002518: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000251C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x60002520: jal         0x60001AC8
    // 0x60002524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_80;
    // 0x60002524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_80:
    // 0x60002528: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000252C: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002530: addiu       $a0, $a0, 0x35A0
    ctx->r4 = ADD32(ctx->r4, 0X35A0);
    // 0x60002534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000253C: jal         0x60000D30
    // 0x60002540: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_81;
    // 0x60002540: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_81:
    // 0x60002544: jal         0x60000D3C
    // 0x60002548: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_82;
    // 0x60002548: nop

    after_82:
    // 0x6000254C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002550: jal         0x600006AC
    // 0x60002554: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_83;
    // 0x60002554: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_83:
    // 0x60002558: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000255C: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002560: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002564: jal         0x60001AC8
    // 0x60002568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_84;
    // 0x60002568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_84:
    // 0x6000256C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002570: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002574: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x60002578: jal         0x60001AC8
    // 0x6000257C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_85;
    // 0x6000257C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_85:
    // 0x60002580: bne         $s3, $zero, L_6000317C
    if (ctx->r19 != 0) {
        // 0x60002584: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000317C;
    }
    // 0x60002584: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002588: jal         0x60000910
    // 0x6000258C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_910(rdram, ctx);
        goto after_86;
    // 0x6000258C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_86:
    // 0x60002590: beq         $v0, $zero, L_6000206C
    if (ctx->r2 == 0) {
        // 0x60002594: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_6000206C;
    }
    // 0x60002594: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002598: beq         $v0, $at, L_600025B8
    if (ctx->r2 == ctx->r1) {
        // 0x6000259C: nop
    
            goto L_600025B8;
    }
    // 0x6000259C: nop

    // 0x600025A0: beq         $v0, $zero, L_60002140
    if (ctx->r2 == 0) {
        // 0x600025A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60002140;
    }
    // 0x600025A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600025A8: bne         $v0, $at, L_6000206C
    if (ctx->r2 != ctx->r1) {
        // 0x600025AC: nop
    
            goto L_6000206C;
    }
    // 0x600025AC: nop

    // 0x600025B0: b           L_60002140
    // 0x600025B4: nop

        goto L_60002140;
    // 0x600025B4: nop

L_600025B8:
    // 0x600025B8: jal         0x60000244
    // 0x600025BC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_card_244(rdram, ctx);
        goto after_87;
    // 0x600025BC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_87:
    // 0x600025C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600025C4: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600025C8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x600025CC: jal         0x60001AC8
    // 0x600025D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_88;
    // 0x600025D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_88:
    // 0x600025D4: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600025D8: lw          $t0, 0x3468($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3468);
    // 0x600025DC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x600025E0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x600025E4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x600025E8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x600025EC: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600025F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600025F4: jal         0x600006A0
    // 0x600025F8: sw          $t0, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r8;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_89;
    // 0x600025F8: sw          $t0, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r8;
    after_89:
    // 0x600025FC: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x60002600: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002604: jal         0x60000640
    // 0x60002608: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_90;
    // 0x60002608: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_90:
    // 0x6000260C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002610: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x60002614: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002618: jal         0x60000574
    // 0x6000261C: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_91;
    // 0x6000261C: nop

    after_91:
    // 0x60002620: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002624: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002628: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x6000262C: jal         0x60001AC8
    // 0x60002630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_92;
    // 0x60002630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_92:
    // 0x60002634: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002638: lw          $a3, 0x1AC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1AC);
    // 0x6000263C: addiu       $a0, $a0, 0x3530
    ctx->r4 = ADD32(ctx->r4, 0X3530);
    // 0x60002640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002648: jal         0x60000D30
    // 0x6000264C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_93;
    // 0x6000264C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_93:
    // 0x60002650: jal         0x60000D3C
    // 0x60002654: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_94;
    // 0x60002654: nop

    after_94:
    // 0x60002658: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x6000265C: jal         0x600006AC
    // 0x60002660: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_95;
    // 0x60002660: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_95:
    // 0x60002664: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002668: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000266C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x60002670: jal         0x60001AC8
    // 0x60002674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_96;
    // 0x60002674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_96:
    // 0x60002678: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000267C: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002680: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x60002684: jal         0x60001AC8
    // 0x60002688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_97;
    // 0x60002688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_97:
    // 0x6000268C: bne         $s3, $zero, L_6000206C
    if (ctx->r19 != 0) {
        // 0x60002690: nop
    
            goto L_6000206C;
    }
    // 0x60002690: nop

    // 0x60002694: b           L_6000317C
    // 0x60002698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_6000317C;
    // 0x60002698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_6000269C:
    // 0x6000269C: bne         $s3, $zero, L_6000317C
    if (ctx->r19 != 0) {
        // 0x600026A0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000317C;
    }
    // 0x600026A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600026A4: b           L_6000206C
    // 0x600026A8: nop

        goto L_6000206C;
    // 0x600026A8: nop

L_600026AC:
    // 0x600026AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600026B0: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    // 0x600026B4: addiu       $a2, $sp, 0x1B8
    ctx->r6 = ADD32(ctx->r29, 0X1B8);
    // 0x600026B8: jal         0x6000091C
    // 0x600026BC: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    ovl_menu_card_91C(rdram, ctx);
        goto after_98;
    // 0x600026BC: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    after_98:
    // 0x600026C0: bne         $v0, $zero, L_60002078
    if (ctx->r2 != 0) {
        // 0x600026C4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_60002078;
    }
    // 0x600026C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x600026C8: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    // 0x600026CC: sw          $zero, 0x198($sp)
    MEM_W(0X198, ctx->r29) = 0;
    // 0x600026D0: jal         0x60000118
    // 0x600026D4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    ovl_menu_card_118(rdram, ctx);
        goto after_99;
    // 0x600026D4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_99:
    // 0x600026D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600026DC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600026E0: sw          $v0, 0x3744($at)
    MEM_W(0X3744, ctx->r1) = ctx->r2;
    // 0x600026E4: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600026E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600026EC: jal         0x60001AC8
    // 0x600026F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_100;
    // 0x600026F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_100:
    // 0x600026F4: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x600026F8: lw          $t2, 0x3468($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3468);
    // 0x600026FC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x60002700: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x60002704: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002708: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x6000270C: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x60002710: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x60002714: jal         0x600006A0
    // 0x60002718: sw          $t2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r10;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_101;
    // 0x60002718: sw          $t2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r10;
    after_101:
    // 0x6000271C: sw          $v0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r2;
    // 0x60002720: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002724: jal         0x60000640
    // 0x60002728: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_102;
    // 0x60002728: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_102:
    // 0x6000272C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002730: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60002734: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002738: jal         0x60000574
    // 0x6000273C: nop

    ovl_menu_card_574(rdram, ctx);
        goto after_103;
    // 0x6000273C: nop

    after_103:
    // 0x60002740: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x60002744: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60002748: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000274C: addiu       $t5, $t5, 0x3848
    ctx->r13 = ADD32(ctx->r13, 0X3848);
    // 0x60002750: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x60002754: sw          $zero, 0x3848($at)
    MEM_W(0X3848, ctx->r1) = 0;
    // 0x60002758: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x6000275C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x60002760: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x60002764: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x60002768: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x6000276C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60002770:
    // 0x60002770: lw          $a2, 0x1B4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B4);
    // 0x60002774: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002778: addiu       $a1, $a1, 0x36D8
    ctx->r5 = ADD32(ctx->r5, 0X36D8);
    // 0x6000277C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002780: bgez        $a2, L_60002790
    if (SIGNED(ctx->r6) >= 0) {
        // 0x60002784: sra         $t6, $a2, 8
        ctx->r14 = S32(SIGNED(ctx->r6) >> 8);
            goto L_60002790;
    }
    // 0x60002784: sra         $t6, $a2, 8
    ctx->r14 = S32(SIGNED(ctx->r6) >> 8);
    // 0x60002788: addiu       $at, $a2, 0xFF
    ctx->r1 = ADD32(ctx->r6, 0XFF);
    // 0x6000278C: sra         $t6, $at, 8
    ctx->r14 = S32(SIGNED(ctx->r1) >> 8);
L_60002790:
    // 0x60002790: jal         0x60000028
    // 0x60002794: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    ovl_menu_card_28(rdram, ctx);
        goto after_104;
    // 0x60002794: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_104:
    // 0x60002798: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x6000279C: jal         0x60001B34
    // 0x600027A0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_105;
    // 0x600027A0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_105:
    // 0x600027A4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600027A8: lw          $a0, 0x3464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3464);
    // 0x600027AC: jal         0x60001B74
    // 0x600027B0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B74(rdram, ctx);
        goto after_106;
    // 0x600027B0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_106:
    // 0x600027B4: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600027B8: lw          $t7, 0x3464($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3464);
    // 0x600027BC: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    // 0x600027C0: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x600027C4: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600027C8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x600027CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x600027D0: jal         0x600006A0
    // 0x600027D4: sw          $t7, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r15;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_107;
    // 0x600027D4: sw          $t7, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r15;
    after_107:
    // 0x600027D8: sw          $v0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r2;
L_600027DC:
    // 0x600027DC: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
L_600027E0:
    // 0x600027E0: jal         0x600005B0
    // 0x600027E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_card_5B0(rdram, ctx);
        goto after_108;
    // 0x600027E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_108:
L_600027E8:
    // 0x600027E8: or          $s5, $s7, $zero
    ctx->r21 = ctx->r23 | 0;
L_600027EC:
    // 0x600027EC: lw          $t8, 0x1BC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1BC);
    // 0x600027F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600027F4: slt         $at, $s5, $t8
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x600027F8: beq         $at, $zero, L_60002BE4
    if (ctx->r1 == 0) {
        // 0x600027FC: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_60002BE4;
    }
    // 0x600027FC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x60002800: sll         $t9, $s3, 5
    ctx->r25 = S32(ctx->r19 << 5);
    // 0x60002804: addiu       $t0, $sp, 0xCC
    ctx->r8 = ADD32(ctx->r29, 0XCC);
    // 0x60002808: addu        $s4, $t9, $t0
    ctx->r20 = ADD32(ctx->r25, ctx->r8);
    // 0x6000280C: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x60002810: addiu       $t1, $sp, 0xB8
    ctx->r9 = ADD32(ctx->r29, 0XB8);
    // 0x60002814: addu        $s0, $s1, $t1
    ctx->r16 = ADD32(ctx->r17, ctx->r9);
    // 0x60002818: jal         0x60000928
    // 0x6000281C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_menu_card_928(rdram, ctx);
        goto after_109;
    // 0x6000281C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_109:
    // 0x60002820: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002824: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002828: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x6000282C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002830: addiu       $a2, $a2, 0x36E4
    ctx->r6 = ADD32(ctx->r6, 0X36E4);
    // 0x60002834: addiu       $a1, $a1, 0x36DC
    ctx->r5 = ADD32(ctx->r5, 0X36DC);
    // 0x60002838: jal         0x60000028
    // 0x6000283C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_card_28(rdram, ctx);
        goto after_110;
    // 0x6000283C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_110:
    // 0x60002840: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002844: jal         0x60001B34
    // 0x60002848: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_111;
    // 0x60002848: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_111:
    // 0x6000284C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002850: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002854: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002858: jal         0x60001B74
    // 0x6000285C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    ovl_menu_card_1B74(rdram, ctx);
        goto after_112;
    // 0x6000285C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_112:
    // 0x60002860: beq         $s2, $zero, L_60002A7C
    if (ctx->r18 == 0) {
        // 0x60002864: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_60002A7C;
    }
    // 0x60002864: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002868: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000286C: beq         $s2, $at, L_600028A4
    if (ctx->r18 == ctx->r1) {
        // 0x60002870: lui         $t2, 0x6000
        ctx->r10 = S32(0X6000 << 16);
            goto L_600028A4;
    }
    // 0x60002870: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002874: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60002878: beq         $s2, $at, L_600028DC
    if (ctx->r18 == ctx->r1) {
        // 0x6000287C: addiu       $t2, $t2, 0x3848
        ctx->r10 = ADD32(ctx->r10, 0X3848);
            goto L_600028DC;
    }
    // 0x6000287C: addiu       $t2, $t2, 0x3848
    ctx->r10 = ADD32(ctx->r10, 0X3848);
    // 0x60002880: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002884: beq         $s2, $at, L_600029D4
    if (ctx->r18 == ctx->r1) {
        // 0x60002888: addu        $s0, $s1, $t2
        ctx->r16 = ADD32(ctx->r17, ctx->r10);
            goto L_600029D4;
    }
    // 0x60002888: addu        $s0, $s1, $t2
    ctx->r16 = ADD32(ctx->r17, ctx->r10);
    // 0x6000288C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002890: beq         $s2, $at, L_60002A0C
    if (ctx->r18 == ctx->r1) {
        // 0x60002894: addiu       $a2, $s5, 0x1
        ctx->r6 = ADD32(ctx->r21, 0X1);
            goto L_60002A0C;
    }
    // 0x60002894: addiu       $a2, $s5, 0x1
    ctx->r6 = ADD32(ctx->r21, 0X1);
    // 0x60002898: sll         $s6, $s3, 4
    ctx->r22 = S32(ctx->r19 << 4);
    // 0x6000289C: b           L_60002A44
    // 0x600028A0: addiu       $s6, $s6, 0x5A
    ctx->r22 = ADD32(ctx->r22, 0X5A);
        goto L_60002A44;
    // 0x600028A0: addiu       $s6, $s6, 0x5A
    ctx->r22 = ADD32(ctx->r22, 0X5A);
L_600028A4:
    // 0x600028A4: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x600028A8: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x600028AC: addiu       $t3, $t3, 0x34A4
    ctx->r11 = ADD32(ctx->r11, 0X34A4);
    // 0x600028B0: lw          $a3, 0x3458($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3458);
    // 0x600028B4: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600028B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x600028BC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x600028C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x600028C4: jal         0x60001BE8
    // 0x600028C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_card_1BE8(rdram, ctx);
        goto after_113;
    // 0x600028C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_113:
    // 0x600028CC: bne         $v0, $zero, L_60003120
    if (ctx->r2 != 0) {
        // 0x600028D0: nop
    
            goto L_60003120;
    }
    // 0x600028D0: nop

    // 0x600028D4: b           L_600027E0
    // 0x600028D8: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
        goto L_600027E0;
    // 0x600028D8: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
L_600028DC:
    // 0x600028DC: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600028E0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x600028E4: jal         0x600005A4
    // 0x600028E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_card_5A4(rdram, ctx);
        goto after_114;
    // 0x600028E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_114:
    // 0x600028EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600028F0: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x600028F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600028F8: jal         0x60001AC8
    // 0x600028FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_115;
    // 0x600028FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_115:
    // 0x60002900: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002904: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002908: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000290C: jal         0x60001AC8
    // 0x60002910: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_116;
    // 0x60002910: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_116:
    // 0x60002914: jal         0x60000850
    // 0x60002918: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_card_850(rdram, ctx);
        goto after_117;
    // 0x60002918: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_117:
    // 0x6000291C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002920: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002924: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002928: jal         0x60001AC8
    // 0x6000292C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_118;
    // 0x6000292C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_118:
    // 0x60002930: lw          $a0, 0x1A8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A8);
    // 0x60002934: jal         0x600006AC
    // 0x60002938: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_119;
    // 0x60002938: nop

    after_119:
    // 0x6000293C: jal         0x60000904
    // 0x60002940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_904(rdram, ctx);
        goto after_120;
    // 0x60002940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_120:
    // 0x60002944: bne         $v0, $zero, L_60002964
    if (ctx->r2 != 0) {
        // 0x60002948: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_60002964;
    }
    // 0x60002948: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000294C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002950: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    // 0x60002954: addiu       $a2, $sp, 0x1B8
    ctx->r6 = ADD32(ctx->r29, 0X1B8);
    // 0x60002958: jal         0x6000091C
    // 0x6000295C: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    ovl_menu_card_91C(rdram, ctx);
        goto after_121;
    // 0x6000295C: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    after_121:
    // 0x60002960: sw          $v0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r2;
L_60002964:
    // 0x60002964: bne         $s2, $zero, L_60002978
    if (ctx->r18 != 0) {
        // 0x60002968: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_60002978;
    }
    // 0x60002968: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x6000296C: lw          $t4, 0x1C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C0);
    // 0x60002970: nop

    // 0x60002974: beq         $t4, $zero, L_600029CC
    if (ctx->r12 == 0) {
        // 0x60002978: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_600029CC;
    }
L_60002978:
    // 0x60002978: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000297C: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002980:
    // 0x60002980: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002984: nop

    // 0x60002988: beq         $a0, $zero, L_6000299C
    if (ctx->r4 == 0) {
        // 0x6000298C: nop
    
            goto L_6000299C;
    }
    // 0x6000298C: nop

    // 0x60002990: jal         0x600006AC
    // 0x60002994: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_122;
    // 0x60002994: nop

    after_122:
    // 0x60002998: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_6000299C:
    // 0x6000299C: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x600029A0: addiu       $t5, $t5, 0x385C
    ctx->r13 = ADD32(ctx->r13, 0X385C);
    // 0x600029A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600029A8: bne         $s0, $t5, L_60002980
    if (ctx->r16 != ctx->r13) {
        // 0x600029AC: nop
    
            goto L_60002980;
    }
    // 0x600029AC: nop

    // 0x600029B0: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600029B4: jal         0x600006AC
    // 0x600029B8: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_123;
    // 0x600029B8: nop

    after_123:
    // 0x600029BC: jal         0x60000124
    // 0x600029C0: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    ovl_menu_card_124(rdram, ctx);
        goto after_124;
    // 0x600029C0: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    after_124:
    // 0x600029C4: b           L_6000206C
    // 0x600029C8: nop

        goto L_6000206C;
    // 0x600029C8: nop

L_600029CC:
    // 0x600029CC: b           L_60002770
    // 0x600029D0: sw          $zero, 0x198($sp)
    MEM_W(0X198, ctx->r29) = 0;
        goto L_60002770;
    // 0x600029D0: sw          $zero, 0x198($sp)
    MEM_W(0X198, ctx->r29) = 0;
L_600029D4:
    // 0x600029D4: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x600029D8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600029DC: addiu       $t6, $t6, 0x34A4
    ctx->r14 = ADD32(ctx->r14, 0X34A4);
    // 0x600029E0: lw          $a3, 0x3458($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3458);
    // 0x600029E4: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x600029E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x600029EC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x600029F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x600029F4: jal         0x60001BE8
    // 0x600029F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_card_1BE8(rdram, ctx);
        goto after_125;
    // 0x600029F8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_125:
    // 0x600029FC: bne         $v0, $zero, L_60003120
    if (ctx->r2 != 0) {
        // 0x60002A00: nop
    
            goto L_60003120;
    }
    // 0x60002A00: nop

    // 0x60002A04: b           L_600027E0
    // 0x60002A08: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
        goto L_600027E0;
    // 0x60002A08: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
L_60002A0C:
    // 0x60002A0C: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60002A10: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60002A14: addiu       $t7, $t7, 0x34A4
    ctx->r15 = ADD32(ctx->r15, 0X34A4);
    // 0x60002A18: lw          $a3, 0x3458($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3458);
    // 0x60002A1C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002A20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60002A24: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002A28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x60002A2C: jal         0x60001BE8
    // 0x60002A30: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_card_1BE8(rdram, ctx);
        goto after_126;
    // 0x60002A30: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_126:
    // 0x60002A34: bne         $v0, $zero, L_60003120
    if (ctx->r2 != 0) {
        // 0x60002A38: nop
    
            goto L_60003120;
    }
    // 0x60002A38: nop

    // 0x60002A3C: b           L_600027E0
    // 0x60002A40: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
        goto L_600027E0;
    // 0x60002A40: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
L_60002A44:
    // 0x60002A44: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002A48: addiu       $a1, $a1, 0x36E8
    ctx->r5 = ADD32(ctx->r5, 0X36E8);
    // 0x60002A4C: jal         0x60000028
    // 0x60002A50: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_card_28(rdram, ctx);
        goto after_127;
    // 0x60002A50: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_127:
    // 0x60002A54: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002A58: jal         0x60001B34
    // 0x60002A5C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_128;
    // 0x60002A5C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_128:
    // 0x60002A60: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A64: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002A68: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002A6C: jal         0x60001B74
    // 0x60002A70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    ovl_menu_card_1B74(rdram, ctx);
        goto after_129;
    // 0x60002A70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_129:
    // 0x60002A74: b           L_60002B8C
    // 0x60002A78: nop

        goto L_60002B8C;
    // 0x60002A78: nop

L_60002A7C:
    // 0x60002A7C: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002A80: addiu       $t8, $t8, 0x3848
    ctx->r24 = ADD32(ctx->r24, 0X3848);
    // 0x60002A84: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002A88: sll         $t9, $s3, 5
    ctx->r25 = S32(ctx->r19 << 5);
    // 0x60002A8C: addiu       $t0, $sp, 0xCC
    ctx->r8 = ADD32(ctx->r29, 0XCC);
    // 0x60002A90: sll         $s6, $s3, 4
    ctx->r22 = S32(ctx->r19 << 4);
    // 0x60002A94: addiu       $s6, $s6, 0x5A
    ctx->r22 = ADD32(ctx->r22, 0X5A);
    // 0x60002A98: addu        $s2, $t9, $t0
    ctx->r18 = ADD32(ctx->r25, ctx->r8);
    // 0x60002A9C: addiu       $a1, $a1, 0x36EC
    ctx->r5 = ADD32(ctx->r5, 0X36EC);
    // 0x60002AA0: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x60002AA4: jal         0x60000028
    // 0x60002AA8: addiu       $a2, $s5, 0x1
    ctx->r6 = ADD32(ctx->r21, 0X1);
    ovl_menu_card_28(rdram, ctx);
        goto after_130;
    // 0x60002AA8: addiu       $a2, $s5, 0x1
    ctx->r6 = ADD32(ctx->r21, 0X1);
    after_130:
    // 0x60002AAC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002AB0: jal         0x60001B34
    // 0x60002AB4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_131;
    // 0x60002AB4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_131:
    // 0x60002AB8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002ABC: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002AC0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002AC4: jal         0x60001B74
    // 0x60002AC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    ovl_menu_card_1B74(rdram, ctx);
        goto after_132;
    // 0x60002AC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_132:
    // 0x60002ACC: addiu       $v0, $sp, 0x174
    ctx->r2 = ADD32(ctx->r29, 0X174);
    // 0x60002AD0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x60002AD4: addiu       $a0, $sp, 0x184
    ctx->r4 = ADD32(ctx->r29, 0X184);
L_60002AD8:
    // 0x60002AD8: lbu         $t1, 0xE($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XE);
    // 0x60002ADC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60002AE0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x60002AE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60002AE8: bne         $at, $zero, L_60002AD8
    if (ctx->r1 != 0) {
        // 0x60002AEC: sb          $t1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r9;
            goto L_60002AD8;
    }
    // 0x60002AEC: sb          $t1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r9;
    // 0x60002AF0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002AF4: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002AF8: sb          $zero, 0x184($sp)
    MEM_B(0X184, ctx->r29) = 0;
    // 0x60002AFC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002B00: jal         0x60001B74
    // 0x60002B04: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    ovl_menu_card_1B74(rdram, ctx);
        goto after_133;
    // 0x60002B04: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    after_133:
    // 0x60002B08: lbu         $t2, 0xA($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0XA);
    // 0x60002B0C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x60002B10: beq         $t2, $zero, L_60002B50
    if (ctx->r10 == 0) {
        // 0x60002B14: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002B50;
    }
    // 0x60002B14: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002B18: sb          $t3, 0x174($sp)
    MEM_B(0X174, ctx->r29) = ctx->r11;
    // 0x60002B1C: lbu         $t4, 0xA($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0XA);
    // 0x60002B20: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002B24: sb          $t4, 0x175($sp)
    MEM_B(0X175, ctx->r29) = ctx->r12;
    // 0x60002B28: lbu         $t5, 0xB($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XB);
    // 0x60002B2C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002B30: sb          $t5, 0x176($sp)
    MEM_B(0X176, ctx->r29) = ctx->r13;
    // 0x60002B34: lbu         $t6, 0xC($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0XC);
    // 0x60002B38: addiu       $a0, $a0, 0x29
    ctx->r4 = ADD32(ctx->r4, 0X29);
    // 0x60002B3C: sb          $t6, 0x177($sp)
    MEM_B(0X177, ctx->r29) = ctx->r14;
    // 0x60002B40: lbu         $t7, 0xD($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XD);
    // 0x60002B44: sb          $zero, 0x179($sp)
    MEM_B(0X179, ctx->r29) = 0;
    // 0x60002B48: jal         0x60001B74
    // 0x60002B4C: sb          $t7, 0x178($sp)
    MEM_B(0X178, ctx->r29) = ctx->r15;
    ovl_menu_card_1B74(rdram, ctx);
        goto after_134;
    // 0x60002B4C: sb          $t7, 0x178($sp)
    MEM_B(0X178, ctx->r29) = ctx->r15;
    after_134:
L_60002B50:
    // 0x60002B50: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x60002B54: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002B58: srl         $t8, $a2, 8
    ctx->r24 = S32(U32(ctx->r6) >> 8);
    // 0x60002B5C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x60002B60: addiu       $a1, $a1, 0x36F0
    ctx->r5 = ADD32(ctx->r5, 0X36F0);
    // 0x60002B64: jal         0x60000028
    // 0x60002B68: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_card_28(rdram, ctx);
        goto after_135;
    // 0x60002B68: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_135:
    // 0x60002B6C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60002B70: jal         0x60001B34
    // 0x60002B74: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_136;
    // 0x60002B74: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_136:
    // 0x60002B78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002B7C: lw          $a0, 0x3460($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3460);
    // 0x60002B80: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x60002B84: jal         0x60001B74
    // 0x60002B88: addiu       $a0, $a0, 0x35
    ctx->r4 = ADD32(ctx->r4, 0X35);
    ovl_menu_card_1B74(rdram, ctx);
        goto after_137;
    // 0x60002B88: addiu       $a0, $a0, 0x35
    ctx->r4 = ADD32(ctx->r4, 0X35);
    after_137:
L_60002B8C:
    // 0x60002B8C: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60002B90: lw          $t9, 0x3460($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3460);
    // 0x60002B94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002B98: sw          $t9, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r25;
    // 0x60002B9C: beq         $a0, $zero, L_60002BAC
    if (ctx->r4 == 0) {
        // 0x60002BA0: nop
    
            goto L_60002BAC;
    }
    // 0x60002BA0: nop

    // 0x60002BA4: jal         0x600006AC
    // 0x60002BA8: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_138;
    // 0x60002BA8: nop

    after_138:
L_60002BAC:
    // 0x60002BAC: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x60002BB0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x60002BB4: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x60002BB8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x60002BBC: jal         0x600006A0
    // 0x60002BC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_139;
    // 0x60002BC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_139:
    // 0x60002BC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002BC8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002BCC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x60002BD0: jal         0x60000574
    // 0x60002BD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_card_574(rdram, ctx);
        goto after_140;
    // 0x60002BD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_140:
    // 0x60002BD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002BDC: jal         0x600005B0
    // 0x60002BE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_card_5B0(rdram, ctx);
        goto after_141;
    // 0x60002BE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_141:
L_60002BE4:
    // 0x60002BE4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60002BE8: slti        $at, $s3, 0x5
    ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
    // 0x60002BEC: bne         $at, $zero, L_600027EC
    if (ctx->r1 != 0) {
        // 0x60002BF0: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_600027EC;
    }
    // 0x60002BF0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60002BF4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002BF8: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002C00: jal         0x60001AC8
    // 0x60002C04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_142;
    // 0x60002C04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_142:
L_60002C08:
    // 0x60002C08: jal         0x60000B20
    // 0x60002C0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_card_B20(rdram, ctx);
        goto after_143;
    // 0x60002C0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_143:
    // 0x60002C10: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x60002C14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60002C18: beq         $t0, $zero, L_60002CD4
    if (ctx->r8 == 0) {
        // 0x60002C1C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_60002CD4;
    }
    // 0x60002C1C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60002C20: lw          $t1, 0x198($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X198);
    // 0x60002C24: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002C28: bne         $t1, $at, L_60002C84
    if (ctx->r9 != ctx->r1) {
        // 0x60002C2C: nop
    
            goto L_60002C84;
    }
    // 0x60002C2C: nop

    // 0x60002C30: lw          $t3, 0x1BC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1BC);
    // 0x60002C34: addu        $t2, $s7, $t1
    ctx->r10 = ADD32(ctx->r23, ctx->r9);
    // 0x60002C38: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x60002C3C: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x60002C40: beq         $at, $zero, L_60002CA0
    if (ctx->r1 == 0) {
        // 0x60002C44: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002C44: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002C48: jal         0x60000244
    // 0x60002C4C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_144;
    // 0x60002C4C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_144:
    // 0x60002C50: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002C54: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60002C58: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60002C5C: addiu       $s2, $s2, 0x385C
    ctx->r18 = ADD32(ctx->r18, 0X385C);
    // 0x60002C60: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002C64:
    // 0x60002C64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002C68: jal         0x600006AC
    // 0x60002C6C: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_145;
    // 0x60002C6C: nop

    after_145:
    // 0x60002C70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002C74: bne         $s0, $s2, L_60002C64
    if (ctx->r16 != ctx->r18) {
        // 0x60002C78: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_60002C64;
    }
    // 0x60002C78: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x60002C7C: b           L_60003110
    // 0x60002C80: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
        goto L_60003110;
    // 0x60002C80: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60002C84:
    // 0x60002C84: jal         0x60000244
    // 0x60002C88: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_146;
    // 0x60002C88: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_146:
    // 0x60002C8C: lw          $t6, 0x198($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X198);
    // 0x60002C90: nop

    // 0x60002C94: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60002C98: sw          $t7, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r15;
L_60002C9C:
    // 0x60002C9C: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
L_60002CA0:
    // 0x60002CA0: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60002CA4: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x60002CA8: addiu       $t0, $t9, 0x5A
    ctx->r8 = ADD32(ctx->r25, 0X5A);
    // 0x60002CAC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x60002CB0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x60002CB4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60002CB8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x60002CBC: jal         0x6000055C
    // 0x60002CC0: nop

    ovl_menu_card_55C(rdram, ctx);
        goto after_147;
    // 0x60002CC0: nop

    after_147:
    // 0x60002CC4: jal         0x6000085C
    // 0x60002CC8: nop

    ovl_menu_card_85C(rdram, ctx);
        goto after_148;
    // 0x60002CC8: nop

    after_148:
    // 0x60002CCC: b           L_60002C08
    // 0x60002CD0: nop

        goto L_60002C08;
    // 0x60002CD0: nop

L_60002CD4:
    // 0x60002CD4: andi        $t1, $v1, 0x800
    ctx->r9 = ctx->r3 & 0X800;
    // 0x60002CD8: beq         $t1, $zero, L_60002D50
    if (ctx->r9 == 0) {
        // 0x60002CDC: andi        $t6, $v1, 0x100
        ctx->r14 = ctx->r3 & 0X100;
            goto L_60002D50;
    }
    // 0x60002CDC: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x60002CE0: lw          $t3, 0x198($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X198);
    // 0x60002CE4: nop

    // 0x60002CE8: bne         $t3, $zero, L_60002D34
    if (ctx->r11 != 0) {
        // 0x60002CEC: nop
    
            goto L_60002D34;
    }
    // 0x60002CEC: nop

    // 0x60002CF0: beq         $s7, $zero, L_60002CA0
    if (ctx->r23 == 0) {
        // 0x60002CF4: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002CF4: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002CF8: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x60002CFC: jal         0x60000244
    // 0x60002D00: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_149;
    // 0x60002D00: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_149:
    // 0x60002D04: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002D08: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002D0C: addiu       $s3, $s3, 0x385C
    ctx->r19 = ADD32(ctx->r19, 0X385C);
    // 0x60002D10: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002D14:
    // 0x60002D14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002D18: jal         0x600006AC
    // 0x60002D1C: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_150;
    // 0x60002D1C: nop

    after_150:
    // 0x60002D20: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002D24: bne         $s0, $s3, L_60002D14
    if (ctx->r16 != ctx->r19) {
        // 0x60002D28: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_60002D14;
    }
    // 0x60002D28: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x60002D2C: b           L_60003110
    // 0x60002D30: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
        goto L_60003110;
    // 0x60002D30: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60002D34:
    // 0x60002D34: jal         0x60000244
    // 0x60002D38: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_151;
    // 0x60002D38: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_151:
    // 0x60002D3C: lw          $t4, 0x198($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X198);
    // 0x60002D40: nop

    // 0x60002D44: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x60002D48: b           L_60002C9C
    // 0x60002D4C: sw          $t5, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r13;
        goto L_60002C9C;
    // 0x60002D4C: sw          $t5, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r13;
L_60002D50:
    // 0x60002D50: beq         $t6, $zero, L_60002DB8
    if (ctx->r14 == 0) {
        // 0x60002D54: andi        $t8, $v1, 0x200
        ctx->r24 = ctx->r3 & 0X200;
            goto L_60002DB8;
    }
    // 0x60002D54: andi        $t8, $v1, 0x200
    ctx->r24 = ctx->r3 & 0X200;
    // 0x60002D58: lw          $v0, 0x1BC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1BC);
    // 0x60002D5C: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x60002D60: addiu       $s7, $s7, 0x5
    ctx->r23 = ADD32(ctx->r23, 0X5);
    // 0x60002D64: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x60002D68: slt         $at, $v0, $s7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x60002D6C: beq         $at, $zero, L_60002D78
    if (ctx->r1 == 0) {
        // 0x60002D70: nop
    
            goto L_60002D78;
    }
    // 0x60002D70: nop

    // 0x60002D74: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
L_60002D78:
    // 0x60002D78: beq         $s3, $s7, L_60002CA0
    if (ctx->r19 == ctx->r23) {
        // 0x60002D7C: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002D7C: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002D80: jal         0x60000244
    // 0x60002D84: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_152;
    // 0x60002D84: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_152:
    // 0x60002D88: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002D8C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60002D90: addiu       $s2, $s2, 0x385C
    ctx->r18 = ADD32(ctx->r18, 0X385C);
    // 0x60002D94: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002D98:
    // 0x60002D98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002D9C: jal         0x600006AC
    // 0x60002DA0: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_153;
    // 0x60002DA0: nop

    after_153:
    // 0x60002DA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002DA8: bne         $s0, $s2, L_60002D98
    if (ctx->r16 != ctx->r18) {
        // 0x60002DAC: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_60002D98;
    }
    // 0x60002DAC: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x60002DB0: b           L_60003110
    // 0x60002DB4: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
        goto L_60003110;
    // 0x60002DB4: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60002DB8:
    // 0x60002DB8: beq         $t8, $zero, L_60002E14
    if (ctx->r24 == 0) {
        // 0x60002DBC: andi        $t0, $v1, 0x4000
        ctx->r8 = ctx->r3 & 0X4000;
            goto L_60002E14;
    }
    // 0x60002DBC: andi        $t0, $v1, 0x4000
    ctx->r8 = ctx->r3 & 0X4000;
    // 0x60002DC0: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x60002DC4: addiu       $s7, $s7, -0x5
    ctx->r23 = ADD32(ctx->r23, -0X5);
    // 0x60002DC8: bgez        $s7, L_60002DD4
    if (SIGNED(ctx->r23) >= 0) {
        // 0x60002DCC: nop
    
            goto L_60002DD4;
    }
    // 0x60002DCC: nop

    // 0x60002DD0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60002DD4:
    // 0x60002DD4: beq         $s3, $s7, L_60002CA0
    if (ctx->r19 == ctx->r23) {
        // 0x60002DD8: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002DD8: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002DDC: jal         0x60000244
    // 0x60002DE0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_card_244(rdram, ctx);
        goto after_154;
    // 0x60002DE0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_154:
    // 0x60002DE4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002DE8: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002DEC: addiu       $s4, $s4, 0x385C
    ctx->r20 = ADD32(ctx->r20, 0X385C);
    // 0x60002DF0: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002DF4:
    // 0x60002DF4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002DF8: jal         0x600006AC
    // 0x60002DFC: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_155;
    // 0x60002DFC: nop

    after_155:
    // 0x60002E00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002E04: bne         $s0, $s4, L_60002DF4
    if (ctx->r16 != ctx->r20) {
        // 0x60002E08: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_60002DF4;
    }
    // 0x60002E08: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x60002E0C: b           L_60003110
    // 0x60002E10: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
        goto L_60003110;
    // 0x60002E10: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60002E14:
    // 0x60002E14: beq         $t0, $zero, L_60002E2C
    if (ctx->r8 == 0) {
        // 0x60002E18: andi        $t5, $v1, 0x8000
        ctx->r13 = ctx->r3 & 0X8000;
            goto L_60002E2C;
    }
    // 0x60002E18: andi        $t5, $v1, 0x8000
    ctx->r13 = ctx->r3 & 0X8000;
    // 0x60002E1C: jal         0x60000244
    // 0x60002E20: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_card_244(rdram, ctx);
        goto after_156;
    // 0x60002E20: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_156:
    // 0x60002E24: b           L_60003110
    // 0x60002E28: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
        goto L_60003110;
    // 0x60002E28: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60002E2C:
    // 0x60002E2C: lw          $t3, 0x198($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X198);
    // 0x60002E30: nop

    // 0x60002E34: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x60002E38: addu        $t4, $sp, $t2
    ctx->r12 = ADD32(ctx->r29, ctx->r10);
    // 0x60002E3C: lw          $t4, 0xB8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB8);
    // 0x60002E40: nop

    // 0x60002E44: bne         $t4, $zero, L_60002CA0
    if (ctx->r12 != 0) {
        // 0x60002E48: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002E48: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002E4C: beq         $t5, $zero, L_60002CA0
    if (ctx->r13 == 0) {
        // 0x60002E50: lw          $t8, 0x198($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X198);
            goto L_60002CA0;
    }
    // 0x60002E50: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x60002E54: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002E58: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002E64: jal         0x60001AC8
    // 0x60002E68: addu        $s1, $s7, $t3
    ctx->r17 = ADD32(ctx->r23, ctx->r11);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_157;
    // 0x60002E68: addu        $s1, $s7, $t3
    ctx->r17 = ADD32(ctx->r23, ctx->r11);
    after_157:
    // 0x60002E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002E70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60002E74: jal         0x60000928
    // 0x60002E78: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    ovl_menu_card_928(rdram, ctx);
        goto after_158;
    // 0x60002E78: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_158:
    // 0x60002E7C: bne         $v0, $zero, L_60002FA4
    if (ctx->r2 != 0) {
        // 0x60002E80: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_60002FA4;
    }
    // 0x60002E80: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002E84: jal         0x60000244
    // 0x60002E88: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_card_244(rdram, ctx);
        goto after_159;
    // 0x60002E88: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_159:
    // 0x60002E8C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002E90: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002E94: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002E98: jal         0x60001AC8
    // 0x60002E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_160;
    // 0x60002E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_160:
    // 0x60002EA0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002EA4: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002EA8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x60002EAC: jal         0x60001AC8
    // 0x60002EB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_161;
    // 0x60002EB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_161:
    // 0x60002EB4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002EB8: lw          $t6, 0x3454($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3454);
    // 0x60002EBC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x60002EC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60002EC4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002EC8: addiu       $a1, $zero, 0xCE
    ctx->r5 = ADD32(0, 0XCE);
    // 0x60002ECC: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x60002ED0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002ED4: jal         0x600006A0
    // 0x60002ED8: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_162;
    // 0x60002ED8: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    after_162:
    // 0x60002EDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002EE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002EE4: jal         0x60000640
    // 0x60002EE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_card_640(rdram, ctx);
        goto after_163;
    // 0x60002EE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_163:
    // 0x60002EEC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60002EF0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002EF4: jal         0x60000574
    // 0x60002EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_card_574(rdram, ctx);
        goto after_164;
    // 0x60002EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_164:
    // 0x60002EFC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F00: addiu       $a0, $a0, 0x35D8
    ctx->r4 = ADD32(ctx->r4, 0X35D8);
    // 0x60002F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002F08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002F0C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60002F10: jal         0x60000D30
    // 0x60002F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_D30(rdram, ctx);
        goto after_165;
    // 0x60002F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_165:
    // 0x60002F18: jal         0x60000D3C
    // 0x60002F1C: nop

    ovl_menu_card_D3C(rdram, ctx);
        goto after_166;
    // 0x60002F1C: nop

    after_166:
    // 0x60002F20: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60002F24: jal         0x600006AC
    // 0x60002F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_167;
    // 0x60002F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_167:
    // 0x60002F2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F30: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002F34: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002F38: jal         0x60001AC8
    // 0x60002F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_168;
    // 0x60002F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_168:
    // 0x60002F40: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F44: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002F48: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x60002F4C: jal         0x60001AC8
    // 0x60002F50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_169;
    // 0x60002F50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_169:
    // 0x60002F54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002F58: bne         $s3, $at, L_600030F0
    if (ctx->r19 != ctx->r1) {
        // 0x60002F5C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600030F0;
    }
    // 0x60002F5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002F64: jal         0x6000094C
    // 0x60002F68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_menu_card_94C(rdram, ctx);
        goto after_170;
    // 0x60002F68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_170:
    // 0x60002F6C: bne         $v0, $zero, L_60002F8C
    if (ctx->r2 != 0) {
        // 0x60002F70: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_60002F8C;
    }
    // 0x60002F70: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002F74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002F78: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    // 0x60002F7C: addiu       $a2, $sp, 0x1B8
    ctx->r6 = ADD32(ctx->r29, 0X1B8);
    // 0x60002F80: jal         0x6000091C
    // 0x60002F84: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    ovl_menu_card_91C(rdram, ctx);
        goto after_171;
    // 0x60002F84: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    after_171:
    // 0x60002F88: sw          $v0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r2;
L_60002F8C:
    // 0x60002F8C: bne         $s2, $zero, L_60002FA4
    if (ctx->r18 != 0) {
        // 0x60002F90: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002FA4;
    }
    // 0x60002F90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F94: lw          $t8, 0x1C0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C0);
    // 0x60002F98: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002F9C: beq         $t8, $zero, L_60003050
    if (ctx->r24 == 0) {
        // 0x60002FA0: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_60003050;
    }
    // 0x60002FA0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_60002FA4:
    // 0x60002FA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60002FA8: beq         $s2, $at, L_60002FE8
    if (ctx->r18 == ctx->r1) {
        // 0x60002FAC: nop
    
            goto L_60002FE8;
    }
    // 0x60002FAC: nop

    // 0x60002FB0: jal         0x60000244
    // 0x60002FB4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_card_244(rdram, ctx);
        goto after_172;
    // 0x60002FB4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_172:
    // 0x60002FB8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002FBC: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002FC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60002FC4: jal         0x60001AC8
    // 0x60002FC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_173;
    // 0x60002FC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_173:
    // 0x60002FCC: jal         0x60000850
    // 0x60002FD0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_card_850(rdram, ctx);
        goto after_174;
    // 0x60002FD0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_174:
    // 0x60002FD4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002FD8: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60002FDC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60002FE0: jal         0x60001AC8
    // 0x60002FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_175;
    // 0x60002FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_175:
L_60002FE8:
    // 0x60002FE8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002FEC: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60002FF0:
    // 0x60002FF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002FF4: nop

    // 0x60002FF8: beq         $a0, $zero, L_6000300C
    if (ctx->r4 == 0) {
        // 0x60002FFC: nop
    
            goto L_6000300C;
    }
    // 0x60002FFC: nop

    // 0x60003000: jal         0x600006AC
    // 0x60003004: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_176;
    // 0x60003004: nop

    after_176:
    // 0x60003008: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_6000300C:
    // 0x6000300C: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60003010: addiu       $t9, $t9, 0x385C
    ctx->r25 = ADD32(ctx->r25, 0X385C);
    // 0x60003014: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60003018: bne         $s0, $t9, L_60002FF0
    if (ctx->r16 != ctx->r25) {
        // 0x6000301C: nop
    
            goto L_60002FF0;
    }
    // 0x6000301C: nop

    // 0x60003020: lw          $a0, 0x1A8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A8);
    // 0x60003024: jal         0x600006AC
    // 0x60003028: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_177;
    // 0x60003028: nop

    after_177:
    // 0x6000302C: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60003030: jal         0x600006AC
    // 0x60003034: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_178;
    // 0x60003034: nop

    after_178:
    // 0x60003038: jal         0x6000085C
    // 0x6000303C: nop

    ovl_menu_card_85C(rdram, ctx);
        goto after_179;
    // 0x6000303C: nop

    after_179:
    // 0x60003040: jal         0x60000124
    // 0x60003044: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    ovl_menu_card_124(rdram, ctx);
        goto after_180;
    // 0x60003044: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    after_180:
    // 0x60003048: b           L_60002078
    // 0x6000304C: nop

        goto L_60002078;
    // 0x6000304C: nop

L_60003050:
    // 0x60003050: jal         0x60001AC8
    // 0x60003054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_181;
    // 0x60003054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_181:
    // 0x60003058: jal         0x60000850
    // 0x6000305C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_card_850(rdram, ctx);
        goto after_182;
    // 0x6000305C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_182:
    // 0x60003060: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003064: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x60003068: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x6000306C: jal         0x60001AC8
    // 0x60003070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_card_1AC8(rdram, ctx);
        goto after_183;
    // 0x60003070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_183:
    // 0x60003074: lw          $a2, 0x1B4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1B4);
    // 0x60003078: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x6000307C: addiu       $a1, $a1, 0x36F4
    ctx->r5 = ADD32(ctx->r5, 0X36F4);
    // 0x60003080: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60003084: bgez        $a2, L_60003094
    if (SIGNED(ctx->r6) >= 0) {
        // 0x60003088: sra         $t0, $a2, 8
        ctx->r8 = S32(SIGNED(ctx->r6) >> 8);
            goto L_60003094;
    }
    // 0x60003088: sra         $t0, $a2, 8
    ctx->r8 = S32(SIGNED(ctx->r6) >> 8);
    // 0x6000308C: addiu       $at, $a2, 0xFF
    ctx->r1 = ADD32(ctx->r6, 0XFF);
    // 0x60003090: sra         $t0, $at, 8
    ctx->r8 = S32(SIGNED(ctx->r1) >> 8);
L_60003094:
    // 0x60003094: jal         0x60000028
    // 0x60003098: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    ovl_menu_card_28(rdram, ctx);
        goto after_184;
    // 0x60003098: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_184:
    // 0x6000309C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600030A0: jal         0x60001B34
    // 0x600030A4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B34(rdram, ctx);
        goto after_185;
    // 0x600030A4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_185:
    // 0x600030A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030AC: lw          $a0, 0x3464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3464);
    // 0x600030B0: jal         0x60001B74
    // 0x600030B4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    ovl_menu_card_1B74(rdram, ctx);
        goto after_186;
    // 0x600030B4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_186:
    // 0x600030B8: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600030BC: lw          $t1, 0x3464($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3464);
    // 0x600030C0: lw          $a0, 0x1A8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A8);
    // 0x600030C4: jal         0x600006AC
    // 0x600030C8: sw          $t1, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r9;
    ovl_menu_card_6AC(rdram, ctx);
        goto after_187;
    // 0x600030C8: sw          $t1, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r9;
    after_187:
    // 0x600030CC: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    // 0x600030D0: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x600030D4: addiu       $a2, $sp, 0x1B0
    ctx->r6 = ADD32(ctx->r29, 0X1B0);
    // 0x600030D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600030DC: jal         0x600006A0
    // 0x600030E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_card_6A0(rdram, ctx);
        goto after_188;
    // 0x600030E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_188:
    // 0x600030E4: sw          $v0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r2;
    // 0x600030E8: b           L_600027DC
    // 0x600030EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_600027DC;
    // 0x600030EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_600030F0:
    // 0x600030F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600030F4: jal         0x60000928
    // 0x600030F8: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    ovl_menu_card_928(rdram, ctx);
        goto after_189;
    // 0x600030F8: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_189:
    // 0x600030FC: bne         $v0, $zero, L_60002FA4
    if (ctx->r2 != 0) {
        // 0x60003100: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_60002FA4;
    }
    // 0x60003100: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003104: b           L_600027DC
    // 0x60003108: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_600027DC;
    // 0x60003108: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x6000310C: andi        $t2, $s1, 0x4000
    ctx->r10 = ctx->r17 & 0X4000;
L_60003110:
    // 0x60003110: bne         $t2, $zero, L_60003120
    if (ctx->r10 != 0) {
        // 0x60003114: nop
    
            goto L_60003120;
    }
    // 0x60003114: nop

    // 0x60003118: b           L_600027E8
    // 0x6000311C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_600027E8;
    // 0x6000311C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60003120:
    // 0x60003120: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60003124: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003128: addiu       $s1, $s1, 0x385C
    ctx->r17 = ADD32(ctx->r17, 0X385C);
    // 0x6000312C: addiu       $s0, $s0, 0x3848
    ctx->r16 = ADD32(ctx->r16, 0X3848);
L_60003130:
    // 0x60003130: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60003134: nop

    // 0x60003138: beq         $a0, $zero, L_6000314C
    if (ctx->r4 == 0) {
        // 0x6000313C: nop
    
            goto L_6000314C;
    }
    // 0x6000313C: nop

    // 0x60003140: jal         0x600006AC
    // 0x60003144: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_190;
    // 0x60003144: nop

    after_190:
    // 0x60003148: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_6000314C:
    // 0x6000314C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60003150: bne         $s0, $s1, L_60003130
    if (ctx->r16 != ctx->r17) {
        // 0x60003154: nop
    
            goto L_60003130;
    }
    // 0x60003154: nop

    // 0x60003158: lw          $a0, 0x1A8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A8);
    // 0x6000315C: jal         0x600006AC
    // 0x60003160: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_191;
    // 0x60003160: nop

    after_191:
    // 0x60003164: lw          $a0, 0x1AC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1AC);
    // 0x60003168: jal         0x600006AC
    // 0x6000316C: nop

    ovl_menu_card_6AC(rdram, ctx);
        goto after_192;
    // 0x6000316C: nop

    after_192:
    // 0x60003170: jal         0x60000124
    // 0x60003174: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    ovl_menu_card_124(rdram, ctx);
        goto after_193;
    // 0x60003174: addiu       $a0, $zero, 0x7F2
    ctx->r4 = ADD32(0, 0X7F2);
    after_193:
    // 0x60003178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_6000317C:
    // 0x6000317C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003184: jal         0x60000238
    // 0x60003188: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_card_238(rdram, ctx);
        goto after_194;
    // 0x60003188: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_194:
    // 0x6000318C: jal         0x60000208
    // 0x60003190: nop

    ovl_menu_card_208(rdram, ctx);
        goto after_195;
    // 0x60003190: nop

    after_195:
    // 0x60003194: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003198: addiu       $a0, $a0, 0x3288
    ctx->r4 = ADD32(ctx->r4, 0X3288);
    // 0x6000319C: jal         0x60001A30
    // 0x600031A0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_menu_card_1A30(rdram, ctx);
        goto after_196;
    // 0x600031A0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_196:
    // 0x600031A4: jal         0x60000124
    // 0x600031A8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_card_124(rdram, ctx);
        goto after_197;
    // 0x600031A8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_197:
L_600031AC:
    // 0x600031AC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_600031B0:
    // 0x600031B0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600031B4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600031B8: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600031BC: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600031C0: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600031C4: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600031C8: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x600031CC: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600031D0: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600031D4: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600031D8: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x600031DC: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x600031E0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x600031E4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x600031E8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x600031EC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x600031F0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x600031F4: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x600031F8: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x600031FC: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x60003200: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x60003204: jr          $ra
    // 0x60003208: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    // 0x60003208: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void ovl_menu_custom_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x2558
    ctx->r2 = ADD32(ctx->r2, 0X2558);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x2558
    ctx->r2 = ADD32(ctx->r2, 0X2558);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_custom_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_menu_custom_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_menu_custom_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_menu_custom_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_menu_custom_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_menu_custom_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_menu_custom_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_menu_custom_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_menu_custom_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
