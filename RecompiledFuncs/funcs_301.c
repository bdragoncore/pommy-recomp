#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_custom_E98(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EA4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EB0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_custom_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60000F54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60000F58: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x60000F5C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x60000F60: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60000F64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x60000F68: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x60000F6C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x60000F70: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x60000F74: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x60000F78: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x60000F7C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60000F80: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x60000F84: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x60000F88: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x60000F8C: lw          $a3, 0x3C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X3C);
    // 0x60000F90: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x60000F94: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x60000F98: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x60000F9C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x60000FA0: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x60000FA4: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x60000FA8: sra         $t1, $a3, 8
    ctx->r9 = S32(SIGNED(ctx->r7) >> 8);
    // 0x60000FAC: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x60000FB0: or          $t8, $t3, $t7
    ctx->r24 = ctx->r11 | ctx->r15;
    // 0x60000FB4: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x60000FB8: or          $t6, $a3, $zero
    ctx->r14 = ctx->r7 | 0;
    // 0x60000FBC: andi        $t3, $t6, 0xFF
    ctx->r11 = ctx->r14 & 0XFF;
    // 0x60000FC0: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x60000FC4: or          $t7, $t5, $t3
    ctx->r15 = ctx->r13 | ctx->r11;
    // 0x60000FC8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x60000FCC: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x60000FD0: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x60000FD4: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x60000FD8: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x60000FDC: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x60000FE0: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x60000FE4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x60000FE8: lui         $t2, 0xFF10
    ctx->r10 = S32(0XFF10 << 16);
    // 0x60000FEC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x60000FF0: ori         $t2, $t2, 0x13F
    ctx->r10 = ctx->r10 | 0X13F;
    // 0x60000FF4: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x60000FF8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60000FFC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x60001000: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x60001004: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x60001008: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x6000100C: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x60001010: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x60001014: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x60001018: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x6000101C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001020: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001024: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x60001028: lw          $t7, 0x4C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4C);
    // 0x6000102C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001030: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x60001034: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x60001038: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x6000103C: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x60001040: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x60001044: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x60001048: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x6000104C: sll         $t8, $t2, 14
    ctx->r24 = S32(ctx->r10 << 14);
    // 0x60001050: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x60001054: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001058: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000105C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001060: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x60001064: lw          $t3, 0x50($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X50);
    // 0x60001068: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x6000106C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x60001070: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x60001074: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001078: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x6000107C: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x60001080: andi        $t1, $t9, 0x3FF
    ctx->r9 = ctx->r25 & 0X3FF;
    // 0x60001084: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x60001088: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x6000108C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x60001090: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001094: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001098: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000109C: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x600010A0: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x600010A4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x600010A8: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x600010AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x600010B0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x600010B4: nop

    // 0x600010B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x600010BC: andi        $t3, $t5, 0x3FF
    ctx->r11 = ctx->r13 & 0X3FF;
    // 0x600010C0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x600010C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600010C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600010CC: sll         $t7, $t3, 14
    ctx->r15 = S32(ctx->r11 << 14);
    // 0x600010D0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600010D4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x600010D8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x600010DC: andi        $t4, $t1, 0x3FF
    ctx->r12 = ctx->r9 & 0X3FF;
    // 0x600010E0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x600010E4: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x600010E8: jr          $ra
    // 0x600010EC: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    return;
    // 0x600010EC: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
;}
RECOMP_FUNC void ovl_menu_custom_10F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010F0: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x600010F4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x600010F8: beq         $v0, $t6, L_60001110
    if (ctx->r2 == ctx->r14) {
        // 0x600010FC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001110;
    }
    // 0x600010FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001100:
    // 0x60001100: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x60001104: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60001108: bne         $v0, $t7, L_60001100
    if (ctx->r2 != ctx->r15) {
        // 0x6000110C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_60001100;
    }
    // 0x6000110C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_60001110:
    // 0x60001110: jr          $ra
    // 0x60001114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60001114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_1118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001118: blez        $a2, L_6000117C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x6000111C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_6000117C;
    }
    // 0x6000111C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001120: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x60001124: beq         $a3, $zero, L_6000114C
    if (ctx->r7 == 0) {
        // 0x60001128: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_6000114C;
    }
    // 0x60001128: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_6000112C:
    // 0x6000112C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x60001130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001134: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001138: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x6000113C: bne         $v1, $v0, L_6000112C
    if (ctx->r3 != ctx->r2) {
        // 0x60001140: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_6000112C;
    }
    // 0x60001140: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x60001144: beq         $v0, $a2, L_6000117C
    if (ctx->r2 == ctx->r6) {
        // 0x60001148: nop
    
            goto L_6000117C;
    }
    // 0x60001148: nop

L_6000114C:
    // 0x6000114C: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x60001150: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001154: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x60001158: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x6000115C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x60001160: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x60001164: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x60001168: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x6000116C: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x60001170: lbu         $t0, -0x1($a1)
    ctx->r8 = MEM_BU(ctx->r5, -0X1);
    // 0x60001174: bne         $v0, $a2, L_6000114C
    if (ctx->r2 != ctx->r6) {
        // 0x60001178: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_6000114C;
    }
    // 0x60001178: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
L_6000117C:
    // 0x6000117C: jr          $ra
    // 0x60001180: nop

    return;
    // 0x60001180: nop

;}
RECOMP_FUNC void ovl_menu_custom_1184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001184: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x60001188: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x6000118C: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x60001190: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60001194: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001198: addiu       $t9, $t9, 0x5650
    ctx->r25 = ADD32(ctx->r25, 0X5650);
    // 0x6000119C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x600011A0: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x600011A4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x600011A8: andi        $t2, $a0, 0xF0
    ctx->r10 = ctx->r4 & 0XF0;
    // 0x600011AC: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x600011B0: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600011B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600011B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600011BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600011C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600011C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600011C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x600011CC: addu        $t0, $a2, $t8
    ctx->r8 = ADD32(ctx->r6, ctx->r24);
    // 0x600011D0: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x600011D4: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x600011D8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600011DC: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x600011E0: mflo        $t4
    ctx->r12 = lo;
    // 0x600011E4: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x600011E8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x600011EC: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x600011F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600011F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x600011F8: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x600011FC: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
L_60001200:
    // 0x60001200: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x60001204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001208: multu       $t2, $s0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000120C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001210: mflo        $t1
    ctx->r9 = lo;
    // 0x60001214: addu        $a1, $t1, $s3
    ctx->r5 = ADD32(ctx->r9, ctx->r19);
    // 0x60001218: jal         0x60001118
    // 0x6000121C: nop

    ovl_menu_custom_1118(rdram, ctx);
        goto after_0;
    // 0x6000121C: nop

    after_0:
    // 0x60001220: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001224: bne         $s0, $s4, L_60001200
    if (ctx->r16 != ctx->r20) {
        // 0x60001228: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_60001200;
    }
    // 0x60001228: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x6000122C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001234: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001238: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x6000123C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60001240: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60001244: jr          $ra
    // 0x60001248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_custom_124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000124C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x60001250: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x60001254: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x60001258: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x6000125C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001260: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x60001264: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x60001268: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x6000126C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x60001270: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x60001274: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001278:
    // 0x60001278: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x6000127C: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_60001280:
    // 0x60001280: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x60001284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001288: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x6000128C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x60001290: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x60001294: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x60001298: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x6000129C: beq         $t1, $t9, L_600012B4
    if (ctx->r9 == ctx->r25) {
        // 0x600012A0: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_600012B4;
    }
    // 0x600012A0: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x600012A4: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x600012A8: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x600012AC: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x600012B0: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_600012B4:
    // 0x600012B4: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x600012B8: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x600012BC: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x600012C0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012C4: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x600012C8: beq         $t1, $t9, L_600012E4
    if (ctx->r9 == ctx->r25) {
        // 0x600012CC: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_600012E4;
    }
    // 0x600012CC: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x600012D0: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x600012D4: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x600012D8: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x600012DC: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x600012E0: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_600012E4:
    // 0x600012E4: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x600012E8: nop

    // 0x600012EC: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x600012F0: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x600012F4: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x600012F8: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x600012FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60001300: beq         $t1, $t7, L_60001318
    if (ctx->r9 == ctx->r15) {
        // 0x60001304: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_60001318;
    }
    // 0x60001304: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x60001308: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x6000130C: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x60001310: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x60001314: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_60001318:
    // 0x60001318: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x6000131C: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x60001320: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x60001324: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001328: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x6000132C: beq         $t1, $t7, L_60001348
    if (ctx->r9 == ctx->r15) {
        // 0x60001330: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_60001348;
    }
    // 0x60001330: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001334: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001338: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x6000133C: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x60001340: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x60001344: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_60001348:
    // 0x60001348: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x6000134C: bne         $v1, $t4, L_60001280
    if (ctx->r3 != ctx->r12) {
        // 0x60001350: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_60001280;
    }
    // 0x60001350: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x60001354: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x60001358: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x6000135C: bne         $at, $zero, L_60001278
    if (ctx->r1 != 0) {
        // 0x60001360: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001278;
    }
    // 0x60001360: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001364: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x60001368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000136C: bne         $t9, $zero, L_60001394
    if (ctx->r25 != 0) {
        // 0x60001370: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_60001394;
    }
    // 0x60001370: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x60001374: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001378: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_6000137C:
    // 0x6000137C: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x60001380: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x60001384: bne         $t7, $zero, L_60001394
    if (ctx->r15 != 0) {
        // 0x60001388: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_60001394;
    }
    // 0x60001388: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x6000138C: bne         $a0, $a2, L_6000137C
    if (ctx->r4 != ctx->r6) {
        // 0x60001390: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_6000137C;
    }
    // 0x60001390: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001394:
    // 0x60001394: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x60001398: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000139C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x600013A0: bne         $t6, $zero, L_600013C4
    if (ctx->r14 != 0) {
        // 0x600013A4: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_600013C4;
    }
    // 0x600013A4: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x600013A8: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013AC:
    // 0x600013AC: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x600013B0: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x600013B4: bne         $t8, $zero, L_600013C4
    if (ctx->r24 != 0) {
        // 0x600013B8: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_600013C4;
    }
    // 0x600013B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x600013BC: bne         $t0, $a2, L_600013AC
    if (ctx->r8 != ctx->r6) {
        // 0x600013C0: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_600013AC;
    }
    // 0x600013C0: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013C4:
    // 0x600013C4: bne         $v0, $zero, L_600013DC
    if (ctx->r2 != 0) {
        // 0x600013C8: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_600013DC;
    }
    // 0x600013C8: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x600013CC: bne         $v1, $zero, L_600013E0
    if (ctx->r3 != 0) {
        // 0x600013D0: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_600013E0;
    }
    // 0x600013D0: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x600013D4: b           L_6000155C
    // 0x600013D8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_6000155C;
    // 0x600013D8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_600013DC:
    // 0x600013DC: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_600013E0:
    // 0x600013E0: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x600013E4: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x600013E8: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x600013EC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x600013F0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_600013F4:
    // 0x600013F4: beq         $t2, $zero, L_60001464
    if (ctx->r10 == 0) {
        // 0x600013F8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001464;
    }
    // 0x600013F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x600013FC: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x60001400: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_60001404:
    // 0x60001404: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x60001408: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x6000140C: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x60001410: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x60001414: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x60001418: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x6000141C: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x60001420: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001424: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x60001428: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x6000142C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x60001430: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001434: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x60001438: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x6000143C: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x60001440: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x60001444: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x60001448: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x6000144C: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x60001450: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001454: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001458: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x6000145C: bne         $v1, $a2, L_60001404
    if (ctx->r3 != ctx->r6) {
        // 0x60001460: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_60001404;
    }
    // 0x60001460: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60001464:
    // 0x60001464: beq         $a1, $zero, L_60001550
    if (ctx->r5 == 0) {
        // 0x60001468: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_60001550;
    }
    // 0x60001468: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x6000146C: blez        $s0, L_600014F0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60001470: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600014F0;
    }
    // 0x60001470: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001474: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x60001478: beq         $s2, $zero, L_600014B0
    if (ctx->r18 == 0) {
        // 0x6000147C: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_600014B0;
    }
    // 0x6000147C: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x60001480: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x60001484: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x60001488: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_6000148C:
    // 0x6000148C: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x60001490: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x60001494: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x60001498: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x6000149C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x600014A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600014A4: bne         $s1, $v1, L_6000148C
    if (ctx->r17 != ctx->r3) {
        // 0x600014A8: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_6000148C;
    }
    // 0x600014A8: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x600014AC: beq         $v1, $s0, L_600014F0
    if (ctx->r3 == ctx->r16) {
        // 0x600014B0: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_600014F0;
    }
L_600014B0:
    // 0x600014B0: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x600014B4: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_600014B8:
    // 0x600014B8: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x600014BC: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x600014C0: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x600014C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600014C8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x600014CC: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x600014D0: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x600014D4: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x600014D8: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x600014DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600014E0: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x600014E4: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x600014E8: bne         $v1, $s0, L_600014B8
    if (ctx->r3 != ctx->r16) {
        // 0x600014EC: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_600014B8;
    }
    // 0x600014EC: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_600014F0:
    // 0x600014F0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x600014F4: beq         $at, $zero, L_60001550
    if (ctx->r1 == 0) {
        // 0x600014F8: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_60001550;
    }
    // 0x600014F8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x600014FC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x60001500: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x60001504: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x60001508: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x6000150C: beq         $t8, $zero, L_60001530
    if (ctx->r24 == 0) {
        // 0x60001510: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_60001530;
    }
    // 0x60001510: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x60001514: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x60001518: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_6000151C:
    // 0x6000151C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001520: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x60001524: bne         $t5, $v1, L_6000151C
    if (ctx->r13 != ctx->r3) {
        // 0x60001528: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_6000151C;
    }
    // 0x60001528: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x6000152C: beq         $v1, $a2, L_60001550
    if (ctx->r3 == ctx->r6) {
        // 0x60001530: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_60001550;
    }
L_60001530:
    // 0x60001530: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001534:
    // 0x60001534: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001538: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x6000153C: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x60001540: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x60001544: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x60001548: bne         $v1, $a2, L_60001534
    if (ctx->r3 != ctx->r6) {
        // 0x6000154C: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001534;
    }
    // 0x6000154C: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_60001550:
    // 0x60001550: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x60001554: bne         $t1, $t3, L_600013F4
    if (ctx->r9 != ctx->r11) {
        // 0x60001558: nop
    
            goto L_600013F4;
    }
    // 0x60001558: nop

L_6000155C:
    // 0x6000155C: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x60001560: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x60001564: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x60001568: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x6000156C: jr          $ra
    // 0x60001570: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x60001570: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_1574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001574: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x60001578: beq         $t6, $zero, L_600015B4
    if (ctx->r14 == 0) {
        // 0x6000157C: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_600015B4;
    }
    // 0x6000157C: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x60001580: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x60001584: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001588: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x6000158C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x60001590: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x60001594: mflo        $t0
    ctx->r8 = lo;
    // 0x60001598: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x6000159C: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x600015A0: nop

    // 0x600015A4: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x600015A8: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x600015AC: jr          $ra
    // 0x600015B0: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x600015B0: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_600015B4:
    // 0x600015B4: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015B8: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015BC: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x600015C0: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x600015C4: nop

    // 0x600015C8: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x600015CC: mflo        $t9
    ctx->r25 = lo;
    // 0x600015D0: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x600015D4: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600015D8: nop

    // 0x600015DC: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x600015E0: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x600015E4: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x600015E8: jr          $ra
    // 0x600015EC: nop

    return;
    // 0x600015EC: nop

;}
RECOMP_FUNC void ovl_menu_custom_15F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600015F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600015F8: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600015FC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x60001600: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001604: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x60001608: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x6000160C: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x60001610: addiu       $s1, $s1, 0x5748
    ctx->r17 = ADD32(ctx->r17, 0X5748);
    // 0x60001614: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60001618: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x6000161C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x60001620: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x60001624: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x60001628: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x6000162C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60001630: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001634: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001638: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x6000163C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001640: jal         0x60001184
    // 0x60001644: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_custom_1184(rdram, ctx);
        goto after_0;
    // 0x60001644: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x60001648: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x6000164C: jal         0x6000124C
    // 0x60001650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_custom_124C(rdram, ctx);
        goto after_1;
    // 0x60001650: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x60001654: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60001658: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x6000165C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x60001660: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_60001664:
    // 0x60001664: blez        $s5, L_600016E8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x60001668: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_600016E8;
    }
    // 0x60001668: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000166C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x60001670: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001674: addiu       $t7, $t7, 0x5748
    ctx->r15 = ADD32(ctx->r15, 0X5748);
    // 0x60001678: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x6000167C: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x60001680: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x60001684: addu        $s3, $t8, $s7
    ctx->r19 = ADD32(ctx->r24, ctx->r23);
L_60001688:
    // 0x60001688: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x6000168C: beq         $t9, $zero, L_600016B0
    if (ctx->r25 == 0) {
        // 0x60001690: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_600016B0;
    }
    // 0x60001690: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60001694: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001698: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x6000169C: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x600016A0: nop

    // 0x600016A4: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x600016A8: b           L_600016C8
    // 0x600016AC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_600016C8;
    // 0x600016AC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_600016B0:
    // 0x600016B0: sra         $t3, $s0, 1
    ctx->r11 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016B4: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x600016B8: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x600016BC: nop

    // 0x600016C0: sra         $t5, $v0, 4
    ctx->r13 = S32(SIGNED(ctx->r2) >> 4);
    // 0x600016C4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_600016C8:
    // 0x600016C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600016CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x600016D0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x600016D4: jal         0x60001574
    // 0x600016D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_custom_1574(rdram, ctx);
        goto after_2;
    // 0x600016D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x600016DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600016E0: bne         $s0, $s5, L_60001688
    if (ctx->r16 != ctx->r21) {
        // 0x600016E4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_60001688;
    }
    // 0x600016E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600016E8:
    // 0x600016E8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600016EC: bne         $s7, $fp, L_60001664
    if (ctx->r23 != ctx->r30) {
        // 0x600016F0: nop
    
            goto L_60001664;
    }
    // 0x600016F0: nop

    // 0x600016F4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x600016F8: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x600016FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x60001700: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001704: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001708: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x6000170C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001710: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001714: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x60001718: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x6000171C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x60001720: jr          $ra
    // 0x60001724: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001724: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_custom_1728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001728: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x6000172C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x60001730: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001734: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x60001738: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x6000173C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60001740: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x60001744: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x60001748: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x6000174C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x60001750: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x60001754: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x60001758: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x6000175C: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x60001760: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x60001764: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001768:
    // 0x60001768: jal         0x60000118
    // 0x6000176C: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_custom_118(rdram, ctx);
        goto after_0;
    // 0x6000176C: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x60001770: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001774: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x60001778: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x6000177C: bne         $at, $zero, L_60001768
    if (ctx->r1 != 0) {
        // 0x60001780: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_60001768;
    }
    // 0x60001780: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x60001784: jal         0x60000118
    // 0x60001788: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_custom_118(rdram, ctx);
        goto after_1;
    // 0x60001788: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x6000178C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x60001790: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x60001794: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001798: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x6000179C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x600017A0: beq         $t6, $at, L_60001830
    if (ctx->r14 == ctx->r1) {
        // 0x600017A4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001830;
    }
    // 0x600017A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600017A8: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x600017AC: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600017B0: addiu       $s2, $s2, 0x57C8
    ctx->r18 = ADD32(ctx->r18, 0X57C8);
    // 0x600017B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x600017B8: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x600017BC: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
L_600017C0:
    // 0x600017C0: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600017C4: bne         $v0, $at, L_600017D4
    if (ctx->r2 != ctx->r1) {
        // 0x600017C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_600017D4;
    }
    // 0x600017C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x600017CC: b           L_6000180C
    // 0x600017D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_6000180C;
    // 0x600017D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600017D4:
    // 0x600017D4: jal         0x60001184
    // 0x600017D8: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_menu_custom_1184(rdram, ctx);
        goto after_2;
    // 0x600017D8: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
    // 0x600017DC: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x600017E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600017E4: andi        $t8, $t7, 0xF00
    ctx->r24 = ctx->r15 & 0XF00;
    // 0x600017E8: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x600017EC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x600017F0: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x600017F4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x600017F8: nop

    // 0x600017FC: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x60001800: jal         0x6000124C
    // 0x60001804: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_custom_124C(rdram, ctx);
        goto after_3;
    // 0x60001804: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x60001808: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_6000180C:
    // 0x6000180C: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x60001810: beq         $at, $zero, L_6000181C
    if (ctx->r1 == 0) {
        // 0x60001814: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_6000181C;
    }
    // 0x60001814: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x60001818: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_6000181C:
    // 0x6000181C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x60001820: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001824: bne         $a0, $at, L_600017C0
    if (ctx->r4 != ctx->r1) {
        // 0x60001828: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_600017C0;
    }
    // 0x60001828: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x6000182C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001830:
    // 0x60001830: andi        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 & 0X1;
    // 0x60001834: beq         $t4, $zero, L_60001840
    if (ctx->r12 == 0) {
        // 0x60001838: addiu       $fp, $sp, 0x70
        ctx->r30 = ADD32(ctx->r29, 0X70);
            goto L_60001840;
    }
    // 0x60001838: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x6000183C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60001840:
    // 0x60001840: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x60001844: nop

    // 0x60001848: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x6000184C: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001850: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x60001854: mflo        $s0
    ctx->r16 = lo;
    // 0x60001858: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x6000185C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x60001860: jal         0x600000E8
    // 0x60001864: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_custom_E8(rdram, ctx);
        goto after_4;
    // 0x60001864: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x60001868: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x6000186C: addiu       $a3, $s2, 0x20
    ctx->r7 = ADD32(ctx->r18, 0X20);
    // 0x60001870: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001874: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x60001878: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x6000187C: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x60001880: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x60001884: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x60001888: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x6000188C: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x60001890: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60001894: addu        $t4, $fp, $t3
    ctx->r12 = ADD32(ctx->r30, ctx->r11);
    // 0x60001898: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x6000189C: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x600018A0: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x600018A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x600018A8: jal         0x60001118
    // 0x600018AC: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    ovl_menu_custom_1118(rdram, ctx);
        goto after_5;
    // 0x600018AC: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    after_5:
    // 0x600018B0: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x600018B4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x600018B8: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    // 0x600018BC: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x600018C0: sw          $t6, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r14;
    // 0x600018C4: blez        $s0, L_60001914
    if (SIGNED(ctx->r16) <= 0) {
        // 0x600018C8: addu        $s6, $s4, $t7
        ctx->r22 = ADD32(ctx->r20, ctx->r15);
            goto L_60001914;
    }
    // 0x600018C8: addu        $s6, $s4, $t7
    ctx->r22 = ADD32(ctx->r20, ctx->r15);
    // 0x600018CC: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x600018D0: beq         $a0, $zero, L_600018F0
    if (ctx->r4 == 0) {
        // 0x600018D4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_600018F0;
    }
    // 0x600018D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x600018D8: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600018DC:
    // 0x600018DC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600018E0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x600018E4: bne         $v1, $s7, L_600018DC
    if (ctx->r3 != ctx->r23) {
        // 0x600018E8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_600018DC;
    }
    // 0x600018E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600018EC: beq         $s7, $s0, L_60001910
    if (ctx->r23 == ctx->r16) {
        // 0x600018F0: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_60001910;
    }
L_600018F0:
    // 0x600018F0: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600018F4:
    // 0x600018F4: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x600018F8: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x600018FC: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x60001900: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x60001904: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001908: bne         $s7, $s0, L_600018F4
    if (ctx->r23 != ctx->r16) {
        // 0x6000190C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_600018F4;
    }
    // 0x6000190C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_60001910:
    // 0x60001910: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001914:
    // 0x60001914: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x60001918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x6000191C: blez        $t8, L_600019E0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001920: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019E0;
    }
    // 0x60001920: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001924: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x60001928: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x6000192C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_60001930:
    // 0x60001930: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001934: blez        $t9, L_600019C4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60001938: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_600019C4;
    }
    // 0x60001938: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000193C: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x60001940: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_60001944:
    // 0x60001944: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x60001948: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x6000194C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x60001950: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x60001954: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x60001958: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x6000195C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x60001960: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x60001964: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60001968: jal         0x600015F0
    // 0x6000196C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    ovl_menu_custom_15F0(rdram, ctx);
        goto after_6;
    // 0x6000196C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x60001970: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x60001974: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x60001978: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x6000197C: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x60001980: bne         $t0, $s2, L_60001994
    if (ctx->r8 != ctx->r18) {
        // 0x60001984: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_60001994;
    }
    // 0x60001984: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x60001988: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x6000198C: b           L_600019C4
    // 0x60001990: nop

        goto L_600019C4;
    // 0x60001990: nop

L_60001994:
    // 0x60001994: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x60001998: bne         $v1, $at, L_600019B0
    if (ctx->r3 != ctx->r1) {
        // 0x6000199C: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_600019B0;
    }
    // 0x6000199C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x600019A0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019A4: b           L_600019C4
    // 0x600019A8: nop

        goto L_600019C4;
    // 0x600019A8: nop

    // 0x600019AC: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
L_600019B0:
    // 0x600019B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600019B4: bne         $s0, $t4, L_60001944
    if (ctx->r16 != ctx->r12) {
        // 0x600019B8: nop
    
            goto L_60001944;
    }
    // 0x600019B8: nop

    // 0x600019BC: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019C0: nop

L_600019C4:
    // 0x600019C4: beq         $t0, $s2, L_600019E0
    if (ctx->r8 == ctx->r18) {
        // 0x600019C8: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019E0;
    }
    // 0x600019C8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x600019CC: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x600019D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600019D4: bne         $v0, $t5, L_60001930
    if (ctx->r2 != ctx->r13) {
        // 0x600019D8: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_60001930;
    }
    // 0x600019D8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x600019DC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_600019E0:
    // 0x600019E0: jal         0x60000124
    // 0x600019E4: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_custom_124(rdram, ctx);
        goto after_7;
    // 0x600019E4: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x600019E8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600019EC: bne         $s7, $s0, L_600019E0
    if (ctx->r23 != ctx->r16) {
        // 0x600019F0: nop
    
            goto L_600019E0;
    }
    // 0x600019F0: nop

    // 0x600019F4: jal         0x60000124
    // 0x600019F8: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_custom_124(rdram, ctx);
        goto after_8;
    // 0x600019F8: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x600019FC: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x60001A00: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x60001A04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001A08: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001A0C: mflo        $a1
    ctx->r5 = lo;
    // 0x60001A10: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x60001A14: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x60001A18: jal         0x60000034
    // 0x60001A1C: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    ovl_menu_custom_34(rdram, ctx);
        goto after_9;
    // 0x60001A1C: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x60001A20: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001A24: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001A28: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x60001A2C: jal         0x60000544
    // 0x60001A30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_custom_544(rdram, ctx);
        goto after_10;
    // 0x60001A30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001A34: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001A38: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001A3C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001A40: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001A44: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x60001A48: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x60001A4C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x60001A50: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x60001A54: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x60001A58: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x60001A5C: jr          $ra
    // 0x60001A60: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x60001A60: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_menu_custom_1A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001A68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A6C: jal         0x60000550
    // 0x60001A70: nop

    ovl_menu_custom_550(rdram, ctx);
        goto after_0;
    // 0x60001A70: nop

    after_0:
    // 0x60001A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001A78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A7C: jr          $ra
    // 0x60001A80: nop

    return;
    // 0x60001A80: nop

;}
RECOMP_FUNC void ovl_menu_custom_1A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001A88: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60001A8C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001A90: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001A94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001A98: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60001A9C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001AA0: blez        $a1, L_60001BB4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001AA4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001BB4;
    }
    // 0x60001AA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001AA8: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60001AAC: addiu       $s3, $s3, 0x5730
    ctx->r19 = ADD32(ctx->r19, 0X5730);
    // 0x60001AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001AB4:
    // 0x60001AB4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001AB8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60001ABC: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001AC0: beq         $t6, $zero, L_60001B0C
    if (ctx->r14 == 0) {
        // 0x60001AC4: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_60001B0C;
    }
    // 0x60001AC4: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60001AC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001ACC: jal         0x60000538
    // 0x60001AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_538(rdram, ctx);
        goto after_0;
    // 0x60001AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60001AD4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001AD8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x60001ADC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001AE0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60001AE4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001AE8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001AEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001AF0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001AF4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001AF8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60001AFC: jal         0x6000055C
    // 0x60001B00: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_1;
    // 0x60001B00: nop

    after_1:
    // 0x60001B04: b           L_60001B8C
    // 0x60001B08: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001B8C;
    // 0x60001B08: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B0C:
    // 0x60001B0C: beq         $t9, $zero, L_60001B68
    if (ctx->r25 == 0) {
        // 0x60001B10: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_60001B68;
    }
    // 0x60001B10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60001B14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B18: jal         0x600010F0
    // 0x60001B1C: nop

    ovl_menu_custom_10F0(rdram, ctx);
        goto after_2;
    // 0x60001B1C: nop

    after_2:
    // 0x60001B20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B24: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001B28: jal         0x60001728
    // 0x60001B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1728(rdram, ctx);
        goto after_3;
    // 0x60001B2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001B30: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60001B34: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x60001B38: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x60001B3C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x60001B40: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60001B44: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001B4C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001B50: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001B54: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001B58: jal         0x6000055C
    // 0x60001B5C: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_4;
    // 0x60001B5C: nop

    after_4:
    // 0x60001B60: b           L_60001B8C
    // 0x60001B64: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001B8C;
    // 0x60001B64: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B68:
    // 0x60001B68: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60001B6C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x60001B70: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60001B74: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x60001B78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60001B7C: jal         0x600006B8
    // 0x60001B80: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_5;
    // 0x60001B80: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x60001B84: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B88: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B8C:
    // 0x60001B8C: nop

    // 0x60001B90: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x60001B94: bne         $t4, $zero, L_60001BA8
    if (ctx->r12 != 0) {
        // 0x60001B98: nop
    
            goto L_60001BA8;
    }
    // 0x60001B98: nop

    // 0x60001B9C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001BA0: jal         0x600005A4
    // 0x60001BA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_6;
    // 0x60001BA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60001BA8:
    // 0x60001BA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001BAC: bne         $s1, $s2, L_60001AB4
    if (ctx->r17 != ctx->r18) {
        // 0x60001BB0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001AB4;
    }
    // 0x60001BB0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001BB4:
    // 0x60001BB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001BB8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001BBC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001BC0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001BC4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001BC8: jr          $ra
    // 0x60001BCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001BCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_custom_1BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001BD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001BD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001BDC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001BE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001BE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001BE8: blez        $a1, L_60001C50
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001BEC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001C50;
    }
    // 0x60001BEC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001BF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001BF4:
    // 0x60001BF4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001BF8: nop

    // 0x60001BFC: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001C00: beq         $t6, $zero, L_60001C1C
    if (ctx->r14 == 0) {
        // 0x60001C04: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60001C1C;
    }
    // 0x60001C04: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60001C08: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C0C: jal         0x60000550
    // 0x60001C10: nop

    ovl_menu_custom_550(rdram, ctx);
        goto after_0;
    // 0x60001C10: nop

    after_0:
    // 0x60001C14: b           L_60001C48
    // 0x60001C18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C48;
    // 0x60001C18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C1C:
    // 0x60001C1C: beq         $t7, $zero, L_60001C38
    if (ctx->r15 == 0) {
        // 0x60001C20: nop
    
            goto L_60001C38;
    }
    // 0x60001C20: nop

    // 0x60001C24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C28: jal         0x60001A64
    // 0x60001C2C: nop

    ovl_menu_custom_1A64(rdram, ctx);
        goto after_1;
    // 0x60001C2C: nop

    after_1:
    // 0x60001C30: b           L_60001C48
    // 0x60001C34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C48;
    // 0x60001C34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C38:
    // 0x60001C38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C3C: jal         0x600006AC
    // 0x60001C40: nop

    ovl_menu_custom_6AC(rdram, ctx);
        goto after_2;
    // 0x60001C40: nop

    after_2:
    // 0x60001C44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C48:
    // 0x60001C48: bne         $s1, $s2, L_60001BF4
    if (ctx->r17 != ctx->r18) {
        // 0x60001C4C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001BF4;
    }
    // 0x60001C4C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001C50:
    // 0x60001C50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001C54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001C58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001C5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001C60: jr          $ra
    // 0x60001C64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001C64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_custom_1C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001C6C: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x60001C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001C74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60001C78: beq         $t6, $zero, L_60001CA4
    if (ctx->r14 == 0) {
        // 0x60001C7C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60001CA4;
    }
    // 0x60001C7C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001C80: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x60001C84: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x60001C88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60001C8C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x60001C90: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60001C94: jal         0x600005B0
    // 0x60001C98: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_custom_5B0(rdram, ctx);
        goto after_0;
    // 0x60001C98: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001C9C: b           L_60001CCC
    // 0x60001CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CCC;
    // 0x60001CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CA4:
    // 0x60001CA4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60001CA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001CAC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60001CB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60001CB4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60001CB8: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x60001CBC: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60001CC0: jal         0x600005A4
    // 0x60001CC4: nop

    ovl_menu_custom_5A4(rdram, ctx);
        goto after_1;
    // 0x60001CC4: nop

    after_1:
    // 0x60001CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CCC:
    // 0x60001CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001CD0: jr          $ra
    // 0x60001CD4: nop

    return;
    // 0x60001CD4: nop

;}
RECOMP_FUNC void ovl_menu_custom_1CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CD8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60001CDC: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60001CE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CE4: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60001CE8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001CEC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60001CF0: lwc1        $f22, 0x56C4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X56C4);
    // 0x60001CF4: lwc1        $f23, 0x56C0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X56C0);
    // 0x60001CF8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60001CFC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60001D00: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60001D04: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60001D08: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60001D0C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001D10: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60001D14: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001D18: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60001D1C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001D20: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001D24: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60001D28: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60001D2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001D30: addiu       $s0, $s0, 0x4C3C
    ctx->r16 = ADD32(ctx->r16, 0X4C3C);
    // 0x60001D34: mov.s       $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    ctx->f24.fl = ctx->f30.fl;
    // 0x60001D38: mov.s       $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    ctx->f26.fl = ctx->f30.fl;
    // 0x60001D3C: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
    // 0x60001D40: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
L_60001D44:
    // 0x60001D44: mul.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x60001D48: lw          $a0, 0x138($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X138);
    // 0x60001D4C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x60001D50: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001D54: jal         0x600005BC
    // 0x60001D58: nop

    ovl_menu_custom_5BC(rdram, ctx);
        goto after_0;
    // 0x60001D58: nop

    after_0:
    // 0x60001D5C: cvt.d.s     $f10, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f10.d = CVT_D_S(ctx->f26.fl);
    // 0x60001D60: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x60001D64: lw          $a0, 0x14C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14C);
    // 0x60001D68: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x60001D6C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x60001D70: jal         0x600005BC
    // 0x60001D74: nop

    ovl_menu_custom_5BC(rdram, ctx);
        goto after_1;
    // 0x60001D74: nop

    after_1:
    // 0x60001D78: cvt.d.s     $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f4.d = CVT_D_S(ctx->f28.fl);
    // 0x60001D7C: mul.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x60001D80: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x60001D84: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x60001D88: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001D8C: jal         0x600005BC
    // 0x60001D90: nop

    ovl_menu_custom_5BC(rdram, ctx);
        goto after_2;
    // 0x60001D90: nop

    after_2:
    // 0x60001D94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D98: lwc1        $f10, 0x56C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X56C8);
    // 0x60001D9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DA0: add.s       $f0, $f24, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f10.fl;
    // 0x60001DA4: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x60001DA8: nop

    // 0x60001DAC: bc1f        L_60001DBC
    if (!c1cs) {
        // 0x60001DB0: nop
    
            goto L_60001DBC;
    }
    // 0x60001DB0: nop

    // 0x60001DB4: b           L_60001DDC
    // 0x60001DB8: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
        goto L_60001DDC;
    // 0x60001DB8: sub.s       $f24, $f0, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f20.fl;
L_60001DBC:
    // 0x60001DBC: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60001DC0: nop

    // 0x60001DC4: bc1f        L_60001DD4
    if (!c1cs) {
        // 0x60001DC8: nop
    
            goto L_60001DD4;
    }
    // 0x60001DC8: nop

    // 0x60001DCC: b           L_60001DD8
    // 0x60001DD0: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60001DD8;
    // 0x60001DD0: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60001DD4:
    // 0x60001DD4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001DD8:
    // 0x60001DD8: mov.s       $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    ctx->f24.fl = ctx->f2.fl;
L_60001DDC:
    // 0x60001DDC: lwc1        $f16, 0x56CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X56CC);
    // 0x60001DE0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001DE4: add.s       $f0, $f26, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f26.fl + ctx->f16.fl;
    // 0x60001DE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001DEC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x60001DF0: nop

    // 0x60001DF4: bc1f        L_60001E04
    if (!c1cs) {
        // 0x60001DF8: nop
    
            goto L_60001E04;
    }
    // 0x60001DF8: nop

    // 0x60001DFC: b           L_60001E24
    // 0x60001E00: sub.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl - ctx->f20.fl;
        goto L_60001E24;
    // 0x60001E00: sub.s       $f26, $f0, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f26.fl = ctx->f0.fl - ctx->f20.fl;
L_60001E04:
    // 0x60001E04: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60001E08: nop

    // 0x60001E0C: bc1f        L_60001E1C
    if (!c1cs) {
        // 0x60001E10: nop
    
            goto L_60001E1C;
    }
    // 0x60001E10: nop

    // 0x60001E14: b           L_60001E20
    // 0x60001E18: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60001E20;
    // 0x60001E18: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60001E1C:
    // 0x60001E1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001E20:
    // 0x60001E20: mov.s       $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    ctx->f26.fl = ctx->f2.fl;
L_60001E24:
    // 0x60001E24: add.s       $f0, $f28, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f28.fl + ctx->f18.fl;
    // 0x60001E28: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x60001E2C: nop

    // 0x60001E30: bc1f        L_60001E40
    if (!c1cs) {
        // 0x60001E34: nop
    
            goto L_60001E40;
    }
    // 0x60001E34: nop

    // 0x60001E38: b           L_60001E60
    // 0x60001E3C: sub.s       $f28, $f0, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f28.fl = ctx->f0.fl - ctx->f20.fl;
        goto L_60001E60;
    // 0x60001E3C: sub.s       $f28, $f0, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f28.fl = ctx->f0.fl - ctx->f20.fl;
L_60001E40:
    // 0x60001E40: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60001E44: nop

    // 0x60001E48: bc1f        L_60001E58
    if (!c1cs) {
        // 0x60001E4C: nop
    
            goto L_60001E58;
    }
    // 0x60001E4C: nop

    // 0x60001E50: b           L_60001E5C
    // 0x60001E54: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60001E5C;
    // 0x60001E54: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60001E58:
    // 0x60001E58: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001E5C:
    // 0x60001E5C: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
L_60001E60:
    // 0x60001E60: jal         0x600009D0
    // 0x60001E64: nop

    ovl_menu_custom_9D0(rdram, ctx);
        goto after_3;
    // 0x60001E64: nop

    after_3:
    // 0x60001E68: b           L_60001D44
    // 0x60001E6C: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
        goto L_60001D44;
    // 0x60001E6C: cvt.d.s     $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.d = CVT_D_S(ctx->f24.fl);
    // 0x60001E70: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001E74: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60001E78: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60001E7C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60001E80: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60001E84: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60001E88: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001E8C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60001E90: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001E94: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60001E98: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001E9C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60001EA0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60001EA4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60001EA8: jr          $ra
    // 0x60001EAC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60001EAC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_menu_custom_1EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001EB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60001EB4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60001EB8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60001EBC: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60001EC0: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60001EC4: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60001EC8: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60001ECC: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001ED0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60001ED4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001ED8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60001EDC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001EE0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60001EE4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001EE8: jal         0x600009DC
    // 0x60001EEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_menu_custom_9DC(rdram, ctx);
        goto after_0;
    // 0x60001EEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60001EF0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EF4: lwc1        $f28, 0x56D0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X56D0);
    // 0x60001EF8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60001EFC: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x60001F00: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60001F04: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60001F08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001F0C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60001F10: lw          $s0, 0xC($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XC);
    // 0x60001F14: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
L_60001F18:
    // 0x60001F18: jal         0x60000310
    // 0x60001F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_menu_custom_310(rdram, ctx);
        goto after_1;
    // 0x60001F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x60001F20: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x60001F24: jal         0x60000310
    // 0x60001F28: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_menu_custom_310(rdram, ctx);
        goto after_2;
    // 0x60001F28: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x60001F2C: add.s       $f4, $f22, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x60001F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001F34: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x60001F38: add.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x60001F3C: mul.s       $f16, $f10, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x60001F40: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x60001F44: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001F48: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x60001F4C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x60001F50: jal         0x60000574
    // 0x60001F54: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_3;
    // 0x60001F54: nop

    after_3:
    // 0x60001F58: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x60001F5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001F60: nop

    // 0x60001F64: add.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x60001F68: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x60001F6C: nop

    // 0x60001F70: bc1f        L_60001F80
    if (!c1cs) {
        // 0x60001F74: nop
    
            goto L_60001F80;
    }
    // 0x60001F74: nop

    // 0x60001F78: b           L_60001FA0
    // 0x60001F7C: sub.s       $f20, $f0, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f26.fl;
        goto L_60001FA0;
    // 0x60001F7C: sub.s       $f20, $f0, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f26.fl;
L_60001F80:
    // 0x60001F80: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60001F84: nop

    // 0x60001F88: bc1f        L_60001F98
    if (!c1cs) {
        // 0x60001F8C: nop
    
            goto L_60001F98;
    }
    // 0x60001F8C: nop

    // 0x60001F90: b           L_60001F9C
    // 0x60001F94: add.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f26.fl;
        goto L_60001F9C;
    // 0x60001F94: add.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f26.fl;
L_60001F98:
    // 0x60001F98: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001F9C:
    // 0x60001F9C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_60001FA0:
    // 0x60001FA0: jal         0x600009D0
    // 0x60001FA4: nop

    ovl_menu_custom_9D0(rdram, ctx);
        goto after_4;
    // 0x60001FA4: nop

    after_4:
    // 0x60001FA8: b           L_60001F18
    // 0x60001FAC: nop

        goto L_60001F18;
    // 0x60001FAC: nop

    // 0x60001FB0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001FB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60001FB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60001FBC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60001FC0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60001FC4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60001FC8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001FCC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60001FD0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001FD4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60001FD8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001FDC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60001FE0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60001FE4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60001FE8: jr          $ra
    // 0x60001FEC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60001FEC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_menu_custom_1FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001FF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001FF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001FF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001FFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60002000: beq         $a0, $at, L_60002168
    if (ctx->r4 == ctx->r1) {
        // 0x60002004: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_60002168;
    }
    // 0x60002004: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x60002008: bgez        $a0, L_60002024
    if (SIGNED(ctx->r4) >= 0) {
        // 0x6000200C: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_60002024;
    }
    // 0x6000200C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60002010: jal         0x60000244
    // 0x60002014: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_menu_custom_244(rdram, ctx);
        goto after_0;
    // 0x60002014: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x60002018: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x6000201C: b           L_6000203C
    // 0x60002020: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
        goto L_6000203C;
    // 0x60002020: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
L_60002024:
    // 0x60002024: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60002028: jal         0x60000244
    // 0x6000202C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_menu_custom_244(rdram, ctx);
        goto after_1;
    // 0x6000202C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_1:
    // 0x60002030: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x60002034: nop

    // 0x60002038: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
L_6000203C:
    // 0x6000203C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002040: and         $v0, $a2, $at
    ctx->r2 = ctx->r6 & ctx->r1;
    // 0x60002044: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x60002048: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000204C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x60002050: addiu       $s0, $s0, 0x4C3C
    ctx->r16 = ADD32(ctx->r16, 0X4C3C);
    // 0x60002054: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60002058: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x6000205C: lw          $a0, 0x174($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X174);
    // 0x60002060: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x60002064: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x60002068: jal         0x60000658
    // 0x6000206C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_custom_658(rdram, ctx);
        goto after_2;
    // 0x6000206C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x60002070: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60002074: lw          $t7, 0x5848($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5848);
    // 0x60002078: lui         $a1, 0xEE
    ctx->r5 = S32(0XEE << 16);
    // 0x6000207C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60002080: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x60002084: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60002088: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x6000208C: lw          $a0, 0x174($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X174);
    // 0x60002090: jal         0x60000658
    // 0x60002094: ori         $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 | 0XFF;
    ovl_menu_custom_658(rdram, ctx);
        goto after_3;
    // 0x60002094: ori         $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 | 0XFF;
    after_3:
    // 0x60002098: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000209C: lw          $a0, 0x5848($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5848);
    // 0x600020A0: jal         0x60000BB0
    // 0x600020A4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_4;
    // 0x600020A4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_4:
    // 0x600020A8: beq         $v0, $zero, L_600020E0
    if (ctx->r2 == 0) {
        // 0x600020AC: lui         $t3, 0x6000
        ctx->r11 = S32(0X6000 << 16);
            goto L_600020E0;
    }
    // 0x600020AC: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x600020B0: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600020B4: lw          $t0, 0x5848($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5848);
    // 0x600020B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x600020BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x600020C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x600020C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x600020C8: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x600020CC: lw          $a0, 0x20($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X20);
    // 0x600020D0: jal         0x60000658
    // 0x600020D4: nop

    ovl_menu_custom_658(rdram, ctx);
        goto after_5;
    // 0x600020D4: nop

    after_5:
    // 0x600020D8: b           L_60002108
    // 0x600020DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
        goto L_60002108;
    // 0x600020DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_600020E0:
    // 0x600020E0: lw          $t3, 0x5848($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5848);
    // 0x600020E4: lui         $a1, 0x8080
    ctx->r5 = S32(0X8080 << 16);
    // 0x600020E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x600020EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x600020F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x600020F4: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x600020F8: lw          $a0, 0x20($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X20);
    // 0x600020FC: jal         0x60000658
    // 0x60002100: ori         $a1, $a1, 0x80FF
    ctx->r5 = ctx->r5 | 0X80FF;
    ovl_menu_custom_658(rdram, ctx);
        goto after_6;
    // 0x60002100: ori         $a1, $a1, 0x80FF
    ctx->r5 = ctx->r5 | 0X80FF;
    after_6:
    // 0x60002104: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_60002108:
    // 0x60002108: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x6000210C: lw          $a0, 0x20($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X20);
    // 0x60002110: jal         0x60000658
    // 0x60002114: nop

    ovl_menu_custom_658(rdram, ctx);
        goto after_7;
    // 0x60002114: nop

    after_7:
    // 0x60002118: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x6000211C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002120: sw          $a3, 0x5848($at)
    MEM_W(0X5848, ctx->r1) = ctx->r7;
    // 0x60002124: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x60002128: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000212C: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60002130: lw          $a1, 0xE4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE4);
    // 0x60002134: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x60002138: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x6000213C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x60002140: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60002144: jal         0x600006B8
    // 0x60002148: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_8;
    // 0x60002148: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_8:
    // 0x6000214C: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    // 0x60002150: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002154: jal         0x60000640
    // 0x60002158: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_custom_640(rdram, ctx);
        goto after_9;
    // 0x60002158: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_9:
    // 0x6000215C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x60002160: jal         0x600006AC
    // 0x60002164: nop

    ovl_menu_custom_6AC(rdram, ctx);
        goto after_10;
    // 0x60002164: nop

    after_10:
L_60002168:
    // 0x60002168: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x6000216C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60002170: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002174: jr          $ra
    // 0x60002178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60002178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_217C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000217C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x60002180: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60002184: beq         $t6, $zero, L_600021C4
    if (ctx->r14 == 0) {
        // 0x60002188: nop
    
            goto L_600021C4;
    }
    // 0x60002188: nop

    // 0x6000218C: lbu         $a1, 0x0($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X0);
    // 0x60002190: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60002194: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
L_60002198:
    // 0x60002198: bne         $at, $zero, L_600021AC
    if (ctx->r1 != 0) {
        // 0x6000219C: nop
    
            goto L_600021AC;
    }
    // 0x6000219C: nop

    // 0x600021A0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x600021A4: b           L_600021B4
    // 0x600021A8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_600021B4;
    // 0x600021A8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_600021AC:
    // 0x600021AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600021B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_600021B4:
    // 0x600021B4: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x600021B8: nop

    // 0x600021BC: bne         $a1, $zero, L_60002198
    if (ctx->r5 != 0) {
        // 0x600021C0: slti        $at, $a1, 0x80
        ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
            goto L_60002198;
    }
    // 0x600021C0: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
L_600021C4:
    // 0x600021C4: jr          $ra
    // 0x600021C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x600021C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_21CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600021CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600021D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x600021D4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600021D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600021DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x600021E0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x600021E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600021E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x600021EC: beq         $a1, $zero, L_6000221C
    if (ctx->r5 == 0) {
        // 0x600021F0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000221C;
    }
    // 0x600021F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600021F4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_600021F8:
    // 0x600021F8: jal         0x6000217C
    // 0x600021FC: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    ovl_menu_custom_217C(rdram, ctx);
        goto after_0;
    // 0x600021FC: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    after_0:
    // 0x60002200: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x60002204: subu        $t8, $s3, $t7
    ctx->r24 = SUB32(ctx->r19, ctx->r15);
    // 0x60002208: addu        $t6, $s1, $v0
    ctx->r14 = ADD32(ctx->r17, ctx->r2);
    // 0x6000220C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002210: addu        $s1, $t6, $t8
    ctx->r17 = ADD32(ctx->r14, ctx->r24);
    // 0x60002214: bne         $s0, $s2, L_600021F8
    if (ctx->r16 != ctx->r18) {
        // 0x60002218: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_600021F8;
    }
    // 0x60002218: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_6000221C:
    // 0x6000221C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60002220: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x60002224: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002228: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000222C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60002230: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60002234: jr          $ra
    // 0x60002238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60002238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_custom_223C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000223C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60002240: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x60002244: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x60002248: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x6000224C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60002250: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60002254: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60002258: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x6000225C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x60002260: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x60002264: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002268: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000226C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002270: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_60002274:
    // 0x60002274: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002278: jal         0x600021CC
    // 0x6000227C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_0;
    // 0x6000227C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x60002280: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x60002284: nop

    // 0x60002288: bne         $s2, $v1, L_60002298
    if (ctx->r18 != ctx->r3) {
        // 0x6000228C: nop
    
            goto L_60002298;
    }
    // 0x6000228C: nop

    // 0x60002290: b           L_600022AC
    // 0x60002294: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_600022AC;
    // 0x60002294: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002298:
    // 0x60002298: bne         $s4, $v1, L_600022A4
    if (ctx->r20 != ctx->r3) {
        // 0x6000229C: nop
    
            goto L_600022A4;
    }
    // 0x6000229C: nop

    // 0x600022A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600022A4:
    // 0x600022A4: b           L_60002274
    // 0x600022A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_60002274;
    // 0x600022A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_600022AC:
    // 0x600022AC: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x600022B0: jal         0x600000E8
    // 0x600022B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_menu_custom_E8(rdram, ctx);
        goto after_1;
    // 0x600022B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x600022B8: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
L_600022BC:
    // 0x600022BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600022C0: jal         0x600021CC
    // 0x600022C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_2;
    // 0x600022C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x600022C8: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x600022CC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x600022D0: beq         $s2, $v1, L_600022FC
    if (ctx->r18 == ctx->r3) {
        // 0x600022D4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_600022FC;
    }
    // 0x600022D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600022D8: bne         $s4, $v1, L_600022F0
    if (ctx->r20 != ctx->r3) {
        // 0x600022DC: nop
    
            goto L_600022F0;
    }
    // 0x600022DC: nop

    // 0x600022E0: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x600022E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600022E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x600022EC: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_600022F0:
    // 0x600022F0: b           L_600022BC
    // 0x600022F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_600022BC;
    // 0x600022F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600022F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_600022FC:
    // 0x600022FC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x60002300: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002304: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60002308: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x6000230C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60002310: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x60002314: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x60002318: jr          $ra
    // 0x6000231C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x6000231C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_custom_2320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002328: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000232C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60002330: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x60002334: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002338: bne         $v1, $zero, L_60002348
    if (ctx->r3 != 0) {
        // 0x6000233C: slti        $at, $v1, 0xA
        ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_60002348;
    }
    // 0x6000233C: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x60002340: b           L_6000245C
    // 0x60002344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x60002344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002348:
    // 0x60002348: beq         $at, $zero, L_60002374
    if (ctx->r1 == 0) {
        // 0x6000234C: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_60002374;
    }
    // 0x6000234C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x60002350: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002354: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60002358: lw          $a0, 0x5660($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5660);
    // 0x6000235C: jal         0x60000BB0
    // 0x60002360: nop

    ovl_menu_custom_BB0(rdram, ctx);
        goto after_0;
    // 0x60002360: nop

    after_0:
    // 0x60002364: beq         $v0, $zero, L_6000245C
    if (ctx->r2 == 0) {
        // 0x60002368: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x60002368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x6000236C: b           L_6000245C
    // 0x60002370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x60002370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002374:
    // 0x60002374: jal         0x60000BEC
    // 0x60002378: nop

    ovl_menu_custom_BEC(rdram, ctx);
        goto after_1;
    // 0x60002378: nop

    after_1:
    // 0x6000237C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x60002380: nop

    // 0x60002384: addiu       $t7, $v1, -0xA
    ctx->r15 = ADD32(ctx->r3, -0XA);
    // 0x60002388: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x6000238C: beq         $at, $zero, L_60002458
    if (ctx->r1 == 0) {
        // 0x60002390: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_60002458;
    }
    // 0x60002390: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60002394: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002398: addu        $at, $at, $t7
    gpr jr_addend_600023A4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x6000239C: lw          $t7, 0x56D4($at)
    ctx->r15 = ADD32(ctx->r1, 0X56D4);
    // 0x600023A0: nop

    // 0x600023A4: jr          $t7
    // 0x600023A8: nop

    switch (jr_addend_600023A4 >> 2) {
        case 0: goto L_600023AC; break;
        case 1: goto L_600023C4; break;
        case 2: goto L_600023DC; break;
        case 3: goto L_60002410; break;
        case 4: goto L_60002438; break;
        case 5: goto L_60002440; break;
        case 6: goto L_60002440; break;
        case 7: goto L_60002440; break;
        case 8: goto L_60002440; break;
        default: switch_error(__func__, 0x600023A4, 0x600056D4);
    }
    // 0x600023A8: nop

L_600023AC:
    // 0x600023AC: jal         0x60000BB0
    // 0x600023B0: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_2;
    // 0x600023B0: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    after_2:
    // 0x600023B4: beq         $v0, $zero, L_6000245C
    if (ctx->r2 == 0) {
        // 0x600023B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x600023B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x600023BC: b           L_6000245C
    // 0x600023C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x600023C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600023C4:
    // 0x600023C4: jal         0x60000BB0
    // 0x600023C8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_3;
    // 0x600023C8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_3:
    // 0x600023CC: beq         $v0, $zero, L_6000245C
    if (ctx->r2 == 0) {
        // 0x600023D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x600023D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x600023D4: b           L_6000245C
    // 0x600023D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x600023D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600023DC:
    // 0x600023DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600023E0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
L_600023E4:
    // 0x600023E4: jal         0x60000BB0
    // 0x600023E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_4;
    // 0x600023E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x600023EC: beq         $v0, $zero, L_60002400
    if (ctx->r2 == 0) {
        // 0x600023F0: nop
    
            goto L_60002400;
    }
    // 0x600023F0: nop

    // 0x600023F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600023F8: bne         $s0, $s1, L_600023E4
    if (ctx->r16 != ctx->r17) {
        // 0x600023FC: nop
    
            goto L_600023E4;
    }
    // 0x600023FC: nop

L_60002400:
    // 0x60002400: bne         $s0, $s1, L_6000245C
    if (ctx->r16 != ctx->r17) {
        // 0x60002404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x60002404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x60002408: b           L_6000245C
    // 0x6000240C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x6000240C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002410:
    // 0x60002410: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x60002414: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002418: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x6000241C: lw          $a0, 0x5660($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5660);
    // 0x60002420: jal         0x60000BB0
    // 0x60002424: nop

    ovl_menu_custom_BB0(rdram, ctx);
        goto after_5;
    // 0x60002424: nop

    after_5:
    // 0x60002428: beq         $v0, $zero, L_6000245C
    if (ctx->r2 == 0) {
        // 0x6000242C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x6000242C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x60002430: b           L_6000245C
    // 0x60002434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x60002434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002438:
    // 0x60002438: b           L_6000245C
    // 0x6000243C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x6000243C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002440:
    // 0x60002440: jal         0x60000BB0
    // 0x60002444: addiu       $a0, $v1, 0x52
    ctx->r4 = ADD32(ctx->r3, 0X52);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_6;
    // 0x60002444: addiu       $a0, $v1, 0x52
    ctx->r4 = ADD32(ctx->r3, 0X52);
    after_6:
    // 0x60002448: beq         $v0, $zero, L_6000245C
    if (ctx->r2 == 0) {
        // 0x6000244C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_6000245C;
    }
    // 0x6000244C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x60002450: b           L_6000245C
    // 0x60002454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_6000245C;
    // 0x60002454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002458:
    // 0x60002458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_6000245C:
    // 0x6000245C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002460: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60002464: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002468: jr          $ra
    // 0x6000246C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x6000246C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_menu_custom_2470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002478: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x6000247C: bne         $a0, $zero, L_600024A4
    if (ctx->r4 != 0) {
        // 0x60002480: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600024A4;
    }
    // 0x60002480: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60002484: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    // 0x60002488: jal         0x60000BB0
    // 0x6000248C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_0;
    // 0x6000248C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x60002490: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60002494: beq         $v0, $zero, L_6000254C
    if (ctx->r2 == 0) {
        // 0x60002498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000254C;
    }
    // 0x60002498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000249C: b           L_60002548
    // 0x600024A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60002548;
    // 0x600024A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_600024A4:
    // 0x600024A4: blez        $a1, L_600024D0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x600024A8: slti        $at, $a1, 0x6
        ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
            goto L_600024D0;
    }
    // 0x600024A8: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x600024AC: beq         $at, $zero, L_600024D0
    if (ctx->r1 == 0) {
        // 0x600024B0: addiu       $a0, $a1, 0x60
        ctx->r4 = ADD32(ctx->r5, 0X60);
            goto L_600024D0;
    }
    // 0x600024B0: addiu       $a0, $a1, 0x60
    ctx->r4 = ADD32(ctx->r5, 0X60);
    // 0x600024B4: jal         0x60000BB0
    // 0x600024B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_1;
    // 0x600024B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x600024BC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x600024C0: beq         $v0, $zero, L_6000254C
    if (ctx->r2 == 0) {
        // 0x600024C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000254C;
    }
    // 0x600024C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600024C8: b           L_60002548
    // 0x600024CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60002548;
    // 0x600024CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_600024D0:
    // 0x600024D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x600024D4: bne         $a1, $at, L_60002500
    if (ctx->r5 != ctx->r1) {
        // 0x600024D8: slti        $at, $a1, 0x7
        ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
            goto L_60002500;
    }
    // 0x600024D8: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x600024DC: jal         0x60000C1C
    // 0x600024E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_menu_custom_C1C(rdram, ctx);
        goto after_2;
    // 0x600024E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x600024E4: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x600024E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x600024EC: bne         $t6, $zero, L_6000254C
    if (ctx->r14 != 0) {
        // 0x600024F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000254C;
    }
    // 0x600024F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600024F4: b           L_60002548
    // 0x600024F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60002548;
    // 0x600024F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x600024FC: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
L_60002500:
    // 0x60002500: bne         $at, $zero, L_60002548
    if (ctx->r1 != 0) {
        // 0x60002504: slti        $at, $a1, 0xB
        ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
            goto L_60002548;
    }
    // 0x60002504: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x60002508: beq         $at, $zero, L_6000254C
    if (ctx->r1 == 0) {
        // 0x6000250C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000254C;
    }
    // 0x6000250C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002510: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x60002514: jal         0x60000BEC
    // 0x60002518: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_menu_custom_BEC(rdram, ctx);
        goto after_3;
    // 0x60002518: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_3:
    // 0x6000251C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x60002520: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002524: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x60002528: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x6000252C: lw          $t8, 0x559C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X559C);
    // 0x60002530: lbu         $t9, 0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3);
    // 0x60002534: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60002538: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x6000253C: beq         $t0, $zero, L_6000254C
    if (ctx->r8 == 0) {
        // 0x60002540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000254C;
    }
    // 0x60002540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002544: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_60002548:
    // 0x60002548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000254C:
    // 0x6000254C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60002550: jr          $ra
    // 0x60002554: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60002554: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_custom_2558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002558: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x6000255C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x60002560: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60002564: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002568: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x6000256C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x60002570: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x60002574: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x60002578: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x6000257C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60002580: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60002584: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60002588: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x6000258C: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x60002590: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002594: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60002598: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x6000259C: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x600025A0: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600025A4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x600025A8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600025AC: jal         0x60000C1C
    // 0x600025B0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    ovl_menu_custom_C1C(rdram, ctx);
        goto after_0;
    // 0x600025B0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600025B4: beq         $s0, $zero, L_600025D8
    if (ctx->r16 == 0) {
        // 0x600025B8: sw          $v0, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->r2;
            goto L_600025D8;
    }
    // 0x600025B8: sw          $v0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r2;
    // 0x600025BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600025C0: beq         $s0, $at, L_60003008
    if (ctx->r16 == ctx->r1) {
        // 0x600025C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003008;
    }
    // 0x600025C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600025C8: beq         $s0, $at, L_60003010
    if (ctx->r16 == ctx->r1) {
        // 0x600025CC: nop
    
            goto L_60003010;
    }
    // 0x600025CC: nop

    // 0x600025D0: b           L_60004B70
    // 0x600025D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_60004B70;
    // 0x600025D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600025D8:
    // 0x600025D8: jal         0x6000025C
    // 0x600025DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_custom_25C(rdram, ctx);
        goto after_1;
    // 0x600025DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x600025E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600025E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600025E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600025EC: jal         0x60000220
    // 0x600025F0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_custom_220(rdram, ctx);
        goto after_2;
    // 0x600025F0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x600025F4: jal         0x60000118
    // 0x600025F8: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    ovl_menu_custom_118(rdram, ctx);
        goto after_3;
    // 0x600025F8: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    after_3:
    // 0x600025FC: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x60002600: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002604: sw          $v0, 0x5730($at)
    MEM_W(0X5730, ctx->r1) = ctx->r2;
    // 0x60002608: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x6000260C: lui         $s6, 0x6000
    ctx->r22 = S32(0X6000 << 16);
    // 0x60002610: addiu       $s6, $s6, 0x4C3C
    ctx->r22 = ADD32(ctx->r22, 0X4C3C);
    // 0x60002614: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x60002618: jal         0x60000BB0
    // 0x6000261C: sw          $t7, 0xDC($s6)
    MEM_W(0XDC, ctx->r22) = ctx->r15;
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_4;
    // 0x6000261C: sw          $t7, 0xDC($s6)
    MEM_W(0XDC, ctx->r22) = ctx->r15;
    after_4:
    // 0x60002620: beq         $v0, $zero, L_60002650
    if (ctx->r2 == 0) {
        // 0x60002624: nop
    
            goto L_60002650;
    }
    // 0x60002624: nop

    // 0x60002628: jal         0x60000BB0
    // 0x6000262C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_5;
    // 0x6000262C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_5:
    // 0x60002630: beq         $v0, $zero, L_60002650
    if (ctx->r2 == 0) {
        // 0x60002634: lui         $s7, 0x6000
        ctx->r23 = S32(0X6000 << 16);
            goto L_60002650;
    }
    // 0x60002634: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60002638: addiu       $s7, $s7, 0x5150
    ctx->r23 = ADD32(ctx->r23, 0X5150);
    // 0x6000263C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x60002640: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x60002644: sw          $t8, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r24;
    // 0x60002648: b           L_600026C0
    // 0x6000264C: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
        goto L_600026C0;
    // 0x6000264C: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
L_60002650:
    // 0x60002650: jal         0x60000BB0
    // 0x60002654: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_6;
    // 0x60002654: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_6:
    // 0x60002658: beq         $v0, $zero, L_60002688
    if (ctx->r2 == 0) {
        // 0x6000265C: nop
    
            goto L_60002688;
    }
    // 0x6000265C: nop

    // 0x60002660: jal         0x60000BB0
    // 0x60002664: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_7;
    // 0x60002664: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_7:
    // 0x60002668: beq         $v0, $zero, L_60002688
    if (ctx->r2 == 0) {
        // 0x6000266C: lui         $s7, 0x6000
        ctx->r23 = S32(0X6000 << 16);
            goto L_60002688;
    }
    // 0x6000266C: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60002670: addiu       $s7, $s7, 0x5150
    ctx->r23 = ADD32(ctx->r23, 0X5150);
    // 0x60002674: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x60002678: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x6000267C: sw          $t0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r8;
    // 0x60002680: b           L_600026C0
    // 0x60002684: sw          $t1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r9;
        goto L_600026C0;
    // 0x60002684: sw          $t1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r9;
L_60002688:
    // 0x60002688: jal         0x60000BB0
    // 0x6000268C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_8;
    // 0x6000268C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_8:
    // 0x60002690: beq         $v0, $zero, L_600026B0
    if (ctx->r2 == 0) {
        // 0x60002694: lui         $s7, 0x6000
        ctx->r23 = S32(0X6000 << 16);
            goto L_600026B0;
    }
    // 0x60002694: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60002698: addiu       $s7, $s7, 0x5150
    ctx->r23 = ADD32(ctx->r23, 0X5150);
    // 0x6000269C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x600026A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x600026A4: sw          $t2, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r10;
    // 0x600026A8: b           L_600026C0
    // 0x600026AC: sw          $t3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r11;
        goto L_600026C0;
    // 0x600026AC: sw          $t3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r11;
L_600026B0:
    // 0x600026B0: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x600026B4: addiu       $s7, $s7, 0x5150
    ctx->r23 = ADD32(ctx->r23, 0X5150);
    // 0x600026B8: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
    // 0x600026BC: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
L_600026C0:
    // 0x600026C0: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600026C4: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x600026C8: lui         $fp, 0x6000
    ctx->r30 = S32(0X6000 << 16);
    // 0x600026CC: addiu       $fp, $fp, 0x4CC8
    ctx->r30 = ADD32(ctx->r30, 0X4CC8);
    // 0x600026D0: addiu       $s4, $s4, 0x4C3C
    ctx->r20 = ADD32(ctx->r20, 0X4C3C);
    // 0x600026D4: addiu       $s2, $s2, 0x4EC4
    ctx->r18 = ADD32(ctx->r18, 0X4EC4);
    // 0x600026D8: addiu       $s3, $zero, 0xBE3
    ctx->r19 = ADD32(0, 0XBE3);
L_600026DC:
    // 0x600026DC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x600026E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600026E4: blez        $v0, L_60002728
    if (SIGNED(ctx->r2) <= 0) {
        // 0x600026E8: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_60002728;
    }
    // 0x600026E8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x600026EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600026F0:
    // 0x600026F0: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x600026F4: nop

    // 0x600026F8: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x600026FC: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x60002700: jal         0x60000BB0
    // 0x60002704: nop

    ovl_menu_custom_BB0(rdram, ctx);
        goto after_9;
    // 0x60002704: nop

    after_9:
    // 0x60002708: beq         $v0, $zero, L_60002714
    if (ctx->r2 == 0) {
        // 0x6000270C: nop
    
            goto L_60002714;
    }
    // 0x6000270C: nop

    // 0x60002710: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_60002714:
    // 0x60002714: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x60002718: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x6000271C: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60002720: bne         $at, $zero, L_600026F0
    if (ctx->r1 != 0) {
        // 0x60002724: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_600026F0;
    }
    // 0x60002724: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60002728:
    // 0x60002728: bne         $s5, $v0, L_6000273C
    if (ctx->r21 != ctx->r2) {
        // 0x6000272C: addiu       $t6, $zero, 0x980
        ctx->r14 = ADD32(0, 0X980);
            goto L_6000273C;
    }
    // 0x6000272C: addiu       $t6, $zero, 0x980
    ctx->r14 = ADD32(0, 0X980);
    // 0x60002730: b           L_60002740
    // 0x60002734: sw          $s3, 0x168($s4)
    MEM_W(0X168, ctx->r20) = ctx->r19;
        goto L_60002740;
    // 0x60002734: sw          $s3, 0x168($s4)
    MEM_W(0X168, ctx->r20) = ctx->r19;
    // 0x60002738: addiu       $t6, $zero, 0x980
    ctx->r14 = ADD32(0, 0X980);
L_6000273C:
    // 0x6000273C: sw          $t6, 0x168($s4)
    MEM_W(0X168, ctx->r20) = ctx->r14;
L_60002740:
    // 0x60002740: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x60002744: sltu        $at, $s4, $fp
    ctx->r1 = ctx->r20 < ctx->r30 ? 1 : 0;
    // 0x60002748: bne         $at, $zero, L_600026DC
    if (ctx->r1 != 0) {
        // 0x6000274C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_600026DC;
    }
    // 0x6000274C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x60002750: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002754: jal         0x60001A84
    // 0x60002758: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_10;
    // 0x60002758: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_10:
    // 0x6000275C: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x60002760: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002764: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x60002768: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x6000276C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x60002770: jal         0x60001A84
    // 0x60002774: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, 0X5154);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_11;
    // 0x60002774: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, 0X5154);
    after_11:
    // 0x60002778: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x6000277C: lui         $s0, 0x8080
    ctx->r16 = S32(0X8080 << 16);
    // 0x60002780: ori         $s0, $s0, 0x80FF
    ctx->r16 = ctx->r16 | 0X80FF;
    // 0x60002784: addiu       $s4, $s4, 0x4C50
    ctx->r20 = ADD32(ctx->r20, 0X4C50);
    // 0x60002788: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_6000278C:
    // 0x6000278C: jal         0x60000BB0
    // 0x60002790: addiu       $a0, $s3, 0x7F
    ctx->r4 = ADD32(ctx->r19, 0X7F);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_12;
    // 0x60002790: addiu       $a0, $s3, 0x7F
    ctx->r4 = ADD32(ctx->r19, 0X7F);
    after_12:
    // 0x60002794: bne         $v0, $zero, L_600027B8
    if (ctx->r2 != 0) {
        // 0x60002798: nop
    
            goto L_600027B8;
    }
    // 0x60002798: nop

    // 0x6000279C: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x600027A0: nop

    // 0x600027A4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x600027A8: nop

    // 0x600027AC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x600027B0: bne         $s3, $t0, L_600027CC
    if (ctx->r19 != ctx->r8) {
        // 0x600027B4: nop
    
            goto L_600027CC;
    }
    // 0x600027B4: nop

L_600027B8:
    // 0x600027B8: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x600027BC: jal         0x60000658
    // 0x600027C0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_custom_658(rdram, ctx);
        goto after_13;
    // 0x600027C0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_13:
    // 0x600027C4: b           L_600027DC
    // 0x600027C8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_600027DC;
    // 0x600027C8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_600027CC:
    // 0x600027CC: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x600027D0: jal         0x60000658
    // 0x600027D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_custom_658(rdram, ctx);
        goto after_14;
    // 0x600027D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x600027D8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_600027DC:
    // 0x600027DC: slti        $at, $s3, 0x9
    ctx->r1 = SIGNED(ctx->r19) < 0X9 ? 1 : 0;
    // 0x600027E0: bne         $at, $zero, L_6000278C
    if (ctx->r1 != 0) {
        // 0x600027E4: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_6000278C;
    }
    // 0x600027E4: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x600027E8: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x600027EC: lui         $s0, 0xEE
    ctx->r16 = S32(0XEE << 16);
    // 0x600027F0: ori         $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 | 0XFF;
    // 0x600027F4: addiu       $s4, $s4, 0x4DA4
    ctx->r20 = ADD32(ctx->r20, 0X4DA4);
    // 0x600027F8: addiu       $s3, $zero, 0x12
    ctx->r19 = ADD32(0, 0X12);
L_600027FC:
    // 0x600027FC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002800: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60002804: jal         0x60001C68
    // 0x60002808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_15;
    // 0x60002808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x6000280C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002810: jal         0x600005A4
    // 0x60002814: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_16;
    // 0x60002814: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_16:
    // 0x60002818: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x6000281C: jal         0x60000658
    // 0x60002820: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_custom_658(rdram, ctx);
        goto after_17;
    // 0x60002820: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
    // 0x60002824: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x60002828: addiu       $at, $zero, 0x980
    ctx->r1 = ADD32(0, 0X980);
    // 0x6000282C: bne         $t1, $at, L_60002848
    if (ctx->r9 != ctx->r1) {
        // 0x60002830: addiu       $t2, $s3, -0x12
        ctx->r10 = ADD32(ctx->r19, -0X12);
            goto L_60002848;
    }
    // 0x60002830: addiu       $t2, $s3, -0x12
    ctx->r10 = ADD32(ctx->r19, -0X12);
    // 0x60002834: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002838: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x6000283C: jal         0x6000061C
    // 0x60002840: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_18;
    // 0x60002840: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_18:
    // 0x60002844: addiu       $t2, $s3, -0x12
    ctx->r10 = ADD32(ctx->r19, -0X12);
L_60002848:
    // 0x60002848: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x6000284C: beq         $at, $zero, L_600028AC
    if (ctx->r1 == 0) {
        // 0x60002850: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_600028AC;
    }
    // 0x60002850: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60002854: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002858: addu        $at, $at, $t2
    gpr jr_addend_60002864 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x6000285C: lw          $t2, 0x56F8($at)
    ctx->r10 = ADD32(ctx->r1, 0X56F8);
    // 0x60002860: nop

    // 0x60002864: jr          $t2
    // 0x60002868: nop

    switch (jr_addend_60002864 >> 2) {
        case 0: goto L_6000286C; break;
        case 1: goto L_6000286C; break;
        case 2: goto L_6000286C; break;
        case 3: goto L_600028A0; break;
        case 4: goto L_6000286C; break;
        case 5: goto L_600028A0; break;
        case 6: goto L_600028A0; break;
        case 7: goto L_600028A0; break;
        default: switch_error(__func__, 0x60002864, 0x600056F8);
    }
    // 0x60002868: nop

L_6000286C:
    // 0x6000286C: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x60002870: addiu       $at, $zero, 0x980
    ctx->r1 = ADD32(0, 0X980);
    // 0x60002874: bne         $t3, $at, L_6000288C
    if (ctx->r11 != ctx->r1) {
        // 0x60002878: nop
    
            goto L_6000288C;
    }
    // 0x60002878: nop

    // 0x6000287C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002880: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x60002884: jal         0x60000634
    // 0x60002888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_634(rdram, ctx);
        goto after_19;
    // 0x60002888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
L_6000288C:
    // 0x6000288C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002890: jal         0x60000604
    // 0x60002894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_menu_custom_604(rdram, ctx);
        goto after_20;
    // 0x60002894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_20:
    // 0x60002898: b           L_600028B0
    // 0x6000289C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_600028B0;
    // 0x6000289C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_600028A0:
    // 0x600028A0: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x600028A4: jal         0x60000604
    // 0x600028A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_21;
    // 0x600028A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
L_600028AC:
    // 0x600028AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_600028B0:
    // 0x600028B0: slti        $at, $s3, 0x1A
    ctx->r1 = SIGNED(ctx->r19) < 0X1A ? 1 : 0;
    // 0x600028B4: bne         $at, $zero, L_600027FC
    if (ctx->r1 != 0) {
        // 0x600028B8: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_600027FC;
    }
    // 0x600028B8: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x600028BC: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x600028C0: nop

    // 0x600028C4: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x600028C8: beq         $at, $zero, L_60002920
    if (ctx->r1 == 0) {
        // 0x600028CC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_60002920;
    }
    // 0x600028CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600028D0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600028D4: jal         0x60001C68
    // 0x600028D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_22;
    // 0x600028D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x600028DC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600028E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x600028E4: jal         0x60001C68
    // 0x600028E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_23;
    // 0x600028E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x600028EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600028F0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x600028F4: jal         0x60001C68
    // 0x600028F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_24;
    // 0x600028F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x600028FC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002900: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x60002904: jal         0x60001C68
    // 0x60002908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_25;
    // 0x60002908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x6000290C: lw          $a0, 0xAC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XAC);
    // 0x60002910: jal         0x60000658
    // 0x60002914: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_658(rdram, ctx);
        goto after_26;
    // 0x60002914: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_26:
    // 0x60002918: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x6000291C: nop

L_60002920:
    // 0x60002920: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x60002924: beq         $at, $zero, L_60002950
    if (ctx->r1 == 0) {
        // 0x60002928: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_60002950;
    }
    // 0x60002928: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x6000292C: lw          $a0, 0x5C($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X5C);
    // 0x60002930: jal         0x60000658
    // 0x60002934: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_658(rdram, ctx);
        goto after_27;
    // 0x60002934: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_27:
    // 0x60002938: lw          $a0, 0x70($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X70);
    // 0x6000293C: jal         0x60000658
    // 0x60002940: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_658(rdram, ctx);
        goto after_28;
    // 0x60002940: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_28:
    // 0x60002944: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x60002948: nop

    // 0x6000294C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_60002950:
    // 0x60002950: beq         $at, $zero, L_6000297C
    if (ctx->r1 == 0) {
        // 0x60002954: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_6000297C;
    }
    // 0x60002954: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x60002958: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x6000295C: jal         0x60000658
    // 0x60002960: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_658(rdram, ctx);
        goto after_29;
    // 0x60002960: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_29:
    // 0x60002964: lw          $a0, 0x48($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X48);
    // 0x60002968: jal         0x60000658
    // 0x6000296C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_658(rdram, ctx);
        goto after_30;
    // 0x6000296C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_30:
    // 0x60002970: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x60002974: nop

    // 0x60002978: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
L_6000297C:
    // 0x6000297C: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x60002980: blez        $t4, L_600029B8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x60002984: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_600029B8;
    }
    // 0x60002984: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60002988: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000298C: addiu       $s0, $s0, 0x5154
    ctx->r16 = ADD32(ctx->r16, 0X5154);
L_60002990:
    // 0x60002990: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002994: jal         0x60000640
    // 0x60002998: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_custom_640(rdram, ctx);
        goto after_31;
    // 0x60002998: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_31:
    // 0x6000299C: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x600029A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600029A4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x600029A8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x600029AC: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x600029B0: bne         $at, $zero, L_60002990
    if (ctx->r1 != 0) {
        // 0x600029B4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60002990;
    }
    // 0x600029B4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_600029B8:
    // 0x600029B8: addiu       $a0, $zero, 0x912
    ctx->r4 = ADD32(0, 0X912);
    // 0x600029BC: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x600029C0: jal         0x60000538
    // 0x600029C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_538(rdram, ctx);
        goto after_32;
    // 0x600029C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_32:
    // 0x600029C8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x600029CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600029D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600029D4: jal         0x6000061C
    // 0x600029D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_33;
    // 0x600029D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_33:
    // 0x600029DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600029E0: jal         0x60000604
    // 0x600029E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_34;
    // 0x600029E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x600029E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600029EC: addiu       $a0, $a0, 0x1CD8
    ctx->r4 = ADD32(ctx->r4, 0X1CD8);
    // 0x600029F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600029F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600029F8: jal         0x60000994
    // 0x600029FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_custom_994(rdram, ctx);
        goto after_35;
    // 0x600029FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_35:
    // 0x60002A00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A04: sw          $v0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r2;
    // 0x60002A08: addiu       $a0, $a0, 0x1EB0
    ctx->r4 = ADD32(ctx->r4, 0X1EB0);
    // 0x60002A0C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002A10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002A14: jal         0x60000994
    // 0x60002A18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_custom_994(rdram, ctx);
        goto after_36;
    // 0x60002A18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_36:
    // 0x60002A1C: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x60002A20: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002A24: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002A28: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002A2C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60002A30: addiu       $s1, $s1, 0x4F2C
    ctx->r17 = ADD32(ctx->r17, 0X4F2C);
    // 0x60002A34: addiu       $s0, $s0, 0x4F20
    ctx->r16 = ADD32(ctx->r16, 0X4F20);
    // 0x60002A38: addiu       $s4, $s4, 0x4C3C
    ctx->r20 = ADD32(ctx->r20, 0X4C3C);
    // 0x60002A3C: sw          $s2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r18;
L_60002A40:
    // 0x60002A40: lw          $a0, 0x138($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X138);
    // 0x60002A44: jal         0x60000640
    // 0x60002A48: addiu       $a1, $zero, 0xFD
    ctx->r5 = ADD32(0, 0XFD);
    ovl_menu_custom_640(rdram, ctx);
        goto after_37;
    // 0x60002A48: addiu       $a1, $zero, 0xFD
    ctx->r5 = ADD32(0, 0XFD);
    after_37:
    // 0x60002A4C: lw          $a0, 0x138($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X138);
    // 0x60002A50: jal         0x600005A4
    // 0x60002A54: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_38;
    // 0x60002A54: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_38:
    // 0x60002A58: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002A5C: lw          $a0, 0x138($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X138);
    // 0x60002A60: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60002A64: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002A68: jal         0x60000574
    // 0x60002A6C: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_39;
    // 0x60002A6C: nop

    after_39:
    // 0x60002A70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002A74: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x60002A78: bne         $at, $zero, L_60002A40
    if (ctx->r1 != 0) {
        // 0x60002A7C: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_60002A40;
    }
    // 0x60002A7C: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x60002A80: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002A84: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002A88: addiu       $s0, $s0, 0x4C78
    ctx->r16 = ADD32(ctx->r16, 0X4C78);
    // 0x60002A8C: addiu       $s4, $s4, 0x4C3C
    ctx->r20 = ADD32(ctx->r20, 0X4C3C);
L_60002A90:
    // 0x60002A90: lw          $a0, 0xFC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XFC);
    // 0x60002A94: jal         0x60000640
    // 0x60002A98: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_custom_640(rdram, ctx);
        goto after_40;
    // 0x60002A98: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_40:
    // 0x60002A9C: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x60002AA0: sltu        $at, $s4, $s0
    ctx->r1 = ctx->r20 < ctx->r16 ? 1 : 0;
    // 0x60002AA4: bne         $at, $zero, L_60002A90
    if (ctx->r1 != 0) {
        // 0x60002AA8: nop
    
            goto L_60002A90;
    }
    // 0x60002AA8: nop

    // 0x60002AAC: lw          $a0, 0x138($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X138);
    // 0x60002AB0: lui         $a1, 0x66
    ctx->r5 = S32(0X66 << 16);
    // 0x60002AB4: jal         0x60000658
    // 0x60002AB8: ori         $a1, $a1, 0xFFA0
    ctx->r5 = ctx->r5 | 0XFFA0;
    ovl_menu_custom_658(rdram, ctx);
        goto after_41;
    // 0x60002AB8: ori         $a1, $a1, 0xFFA0
    ctx->r5 = ctx->r5 | 0XFFA0;
    after_41:
    // 0x60002ABC: lw          $a0, 0x14C($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14C);
    // 0x60002AC0: lui         $a1, 0x4499
    ctx->r5 = S32(0X4499 << 16);
    // 0x60002AC4: jal         0x60000658
    // 0x60002AC8: ori         $a1, $a1, 0xFF20
    ctx->r5 = ctx->r5 | 0XFF20;
    ovl_menu_custom_658(rdram, ctx);
        goto after_42;
    // 0x60002AC8: ori         $a1, $a1, 0xFF20
    ctx->r5 = ctx->r5 | 0XFF20;
    after_42:
    // 0x60002ACC: lw          $a0, 0x160($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X160);
    // 0x60002AD0: jal         0x60000658
    // 0x60002AD4: addiu       $a1, $zero, -0xE0
    ctx->r5 = ADD32(0, -0XE0);
    ovl_menu_custom_658(rdram, ctx);
        goto after_43;
    // 0x60002AD4: addiu       $a1, $zero, -0xE0
    ctx->r5 = ADD32(0, -0XE0);
    after_43:
    // 0x60002AD8: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002ADC: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002AE0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002AE4: addiu       $s1, $s1, 0x4F20
    ctx->r17 = ADD32(ctx->r17, 0X4F20);
    // 0x60002AE8: addiu       $s0, $s0, 0x4EFC
    ctx->r16 = ADD32(ctx->r16, 0X4EFC);
    // 0x60002AEC: addiu       $s4, $s4, 0x4C3C
    ctx->r20 = ADD32(ctx->r20, 0X4C3C);
L_60002AF0:
    // 0x60002AF0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002AF4: lw          $a0, 0x20($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X20);
    // 0x60002AF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60002AFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002B00: jal         0x60000574
    // 0x60002B04: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_44;
    // 0x60002B04: nop

    after_44:
    // 0x60002B08: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002B0C: bne         $s0, $s1, L_60002AF0
    if (ctx->r16 != ctx->r17) {
        // 0x60002B10: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_60002AF0;
    }
    // 0x60002B10: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
    // 0x60002B14: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x60002B18: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B1C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x60002B20: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x60002B24: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60002B28: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60002B2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60002B30: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x60002B34: sw          $t9, 0x5848($at)
    MEM_W(0X5848, ctx->r1) = ctx->r25;
    // 0x60002B38: lw          $a0, 0x174($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X174);
    // 0x60002B3C: jal         0x60000658
    // 0x60002B40: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
    ovl_menu_custom_658(rdram, ctx);
        goto after_45;
    // 0x60002B40: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
    after_45:
    // 0x60002B44: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x60002B48: lw          $t2, 0xC4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC4);
    // 0x60002B4C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002B50: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60002B54: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60002B58: addiu       $t4, $t4, 0x5108
    ctx->r12 = ADD32(ctx->r12, 0X5108);
    // 0x60002B5C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002B60: lui         $s5, 0x6000
    ctx->r21 = S32(0X6000 << 16);
    // 0x60002B64: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60002B68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002B6C: lw          $a1, 0x118($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X118);
    // 0x60002B70: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x60002B74: addiu       $s5, $s5, 0x5118
    ctx->r21 = ADD32(ctx->r21, 0X5118);
    // 0x60002B78: addiu       $s1, $s1, 0x1FF0
    ctx->r17 = ADD32(ctx->r17, 0X1FF0);
    // 0x60002B7C: addiu       $s4, $zero, 0x40
    ctx->r20 = ADD32(0, 0X40);
    // 0x60002B80: addiu       $s3, $zero, 0xB0
    ctx->r19 = ADD32(0, 0XB0);
    // 0x60002B84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_60002B88:
    // 0x60002B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002B8C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x60002B90: jal         0x60000D30
    // 0x60002B94: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_menu_custom_D30(rdram, ctx);
        goto after_46;
    // 0x60002B94: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_46:
    // 0x60002B98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002B9C: addiu       $a1, $zero, 0x4010
    ctx->r5 = ADD32(0, 0X4010);
    // 0x60002BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002BA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60002BAC: jal         0x60000D48
    // 0x60002BB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_D48(rdram, ctx);
        goto after_47;
    // 0x60002BB0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_47:
    // 0x60002BB4: sw          $v0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r2;
    // 0x60002BB8: jal         0x60000A9C
    // 0x60002BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_custom_A9C(rdram, ctx);
        goto after_48;
    // 0x60002BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x60002BC0: andi        $t5, $v0, 0x10
    ctx->r13 = ctx->r2 & 0X10;
    // 0x60002BC4: beq         $t5, $zero, L_60002BE0
    if (ctx->r13 == 0) {
        // 0x60002BC8: lw          $t7, 0x118($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X118);
            goto L_60002BE0;
    }
    // 0x60002BC8: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x60002BCC: jal         0x60000244
    // 0x60002BD0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_custom_244(rdram, ctx);
        goto after_49;
    // 0x60002BD0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_49:
    // 0x60002BD4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x60002BD8: sw          $t6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r14;
    // 0x60002BDC: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
L_60002BE0:
    // 0x60002BE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60002BE4: bne         $t7, $at, L_60002D14
    if (ctx->r15 != ctx->r1) {
        // 0x60002BE8: lui         $t8, 0x6000
        ctx->r24 = S32(0X6000 << 16);
            goto L_60002D14;
    }
    // 0x60002BE8: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002BEC: addiu       $t8, $t8, 0xF50
    ctx->r24 = ADD32(ctx->r24, 0XF50);
    // 0x60002BF0: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x60002BF4: jal         0x60000244
    // 0x60002BF8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_custom_244(rdram, ctx);
        goto after_50;
    // 0x60002BF8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_50:
    // 0x60002BFC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x60002C00: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x60002C04: jal         0x6000064C
    // 0x60002C08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_51;
    // 0x60002C08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_51:
    // 0x60002C0C: sw          $v0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r2;
    // 0x60002C10: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x60002C14: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x60002C18: swc1        $f22, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f22.u32l;
    // 0x60002C1C: sw          $s3, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r19;
    // 0x60002C20: sw          $s4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r20;
    // 0x60002C24: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x60002C28: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002C2C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60002C30: jal         0x60001C68
    // 0x60002C34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_52;
    // 0x60002C34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_52:
    // 0x60002C38: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002C3C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002C40: jal         0x60001C68
    // 0x60002C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_53;
    // 0x60002C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_53:
    // 0x60002C48: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002C4C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002C50: jal         0x60001C68
    // 0x60002C54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_54;
    // 0x60002C54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_54:
    // 0x60002C58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60002C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002C60: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x60002C64: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x60002C68: jal         0x60000D30
    // 0x60002C6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_custom_D30(rdram, ctx);
        goto after_55;
    // 0x60002C6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_55:
    // 0x60002C70: jal         0x60000D3C
    // 0x60002C74: nop

    ovl_menu_custom_D3C(rdram, ctx);
        goto after_56;
    // 0x60002C74: nop

    after_56:
    // 0x60002C78: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x60002C7C: jal         0x60000550
    // 0x60002C80: sw          $v0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r2;
    ovl_menu_custom_550(rdram, ctx);
        goto after_57;
    // 0x60002C80: sw          $v0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r2;
    after_57:
    // 0x60002C84: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002C88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60002C8C: jal         0x60001C68
    // 0x60002C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_58;
    // 0x60002C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_58:
    // 0x60002C94: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002C98: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002C9C: jal         0x60001C68
    // 0x60002CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_59;
    // 0x60002CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_59:
    // 0x60002CA4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002CA8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002CAC: jal         0x60001C68
    // 0x60002CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_60;
    // 0x60002CB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x60002CB4: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60002CB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002CBC: bne         $t0, $at, L_60002D04
    if (ctx->r8 != ctx->r1) {
        // 0x60002CC0: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_60002D04;
    }
    // 0x60002CC0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x60002CC4: sw          $t1, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r9;
    // 0x60002CC8: jal         0x600009A0
    // 0x60002CCC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_custom_9A0(rdram, ctx);
        goto after_61;
    // 0x60002CCC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_61:
    // 0x60002CD0: jal         0x60000550
    // 0x60002CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_custom_550(rdram, ctx);
        goto after_62;
    // 0x60002CD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_62:
    // 0x60002CD8: addiu       $s3, $zero, 0x12
    ctx->r19 = ADD32(0, 0X12);
    // 0x60002CDC: addiu       $s0, $zero, 0x1A
    ctx->r16 = ADD32(0, 0X1A);
    // 0x60002CE0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_60002CE4:
    // 0x60002CE4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60002CE8: jal         0x60001C68
    // 0x60002CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_63;
    // 0x60002CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_63:
    // 0x60002CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60002CF4: bne         $s3, $s0, L_60002CE4
    if (ctx->r19 != ctx->r16) {
        // 0x60002CF8: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_60002CE4;
    }
    // 0x60002CF8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002CFC: b           L_60002F94
    // 0x60002D00: nop

        goto L_60002F94;
    // 0x60002D00: nop

L_60002D04:
    // 0x60002D04: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002D08: lw          $a1, 0x5848($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5848);
    // 0x60002D0C: b           L_60002B88
    // 0x60002D10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_60002B88;
    // 0x60002D10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_60002D14:
    // 0x60002D14: addiu       $s3, $zero, 0x12
    ctx->r19 = ADD32(0, 0X12);
    // 0x60002D18: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_60002D1C:
    // 0x60002D1C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60002D20: jal         0x60001C68
    // 0x60002D24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_64;
    // 0x60002D24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_64:
    // 0x60002D28: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60002D2C: slti        $at, $s3, 0x1A
    ctx->r1 = SIGNED(ctx->r19) < 0X1A ? 1 : 0;
    // 0x60002D30: bne         $at, $zero, L_60002D1C
    if (ctx->r1 != 0) {
        // 0x60002D34: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_60002D1C;
    }
    // 0x60002D34: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002D38: jal         0x600009A0
    // 0x60002D3C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_custom_9A0(rdram, ctx);
        goto after_65;
    // 0x60002D3C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_65:
    // 0x60002D40: jal         0x60000550
    // 0x60002D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_custom_550(rdram, ctx);
        goto after_66;
    // 0x60002D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_66:
    // 0x60002D48: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60002D4C: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x60002D50: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60002D54: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x60002D58: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60002D5C: addu        $t4, $s6, $t3
    ctx->r12 = ADD32(ctx->r22, ctx->r11);
    // 0x60002D60: lw          $a0, 0x20($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X20);
    // 0x60002D64: jal         0x60000640
    // 0x60002D68: nop

    ovl_menu_custom_640(rdram, ctx);
        goto after_67;
    // 0x60002D68: nop

    after_67:
    // 0x60002D6C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x60002D70: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002D74: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60002D78: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60002D7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60002D80: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002D84: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x60002D88: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002D8C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60002D90: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x60002D94: addiu       $s4, $zero, 0x1D
    ctx->r20 = ADD32(0, 0X1D);
L_60002D98:
    // 0x60002D98: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002D9C: addiu       $s0, $s0, 0x4C3C
    ctx->r16 = ADD32(ctx->r16, 0X4C3C);
    // 0x60002DA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60002DA4:
    // 0x60002DA4: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60002DA8: nop

    // 0x60002DAC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x60002DB0: beq         $t6, $s1, L_60002DEC
    if (ctx->r14 == ctx->r17) {
        // 0x60002DB4: nop
    
            goto L_60002DEC;
    }
    // 0x60002DB4: nop

    // 0x60002DB8: bne         $s3, $s4, L_60002DD4
    if (ctx->r19 != ctx->r20) {
        // 0x60002DBC: nop
    
            goto L_60002DD4;
    }
    // 0x60002DBC: nop

    // 0x60002DC0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002DC4: jal         0x600005D4
    // 0x60002DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_68;
    // 0x60002DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_68:
    // 0x60002DCC: b           L_60002E84
    // 0x60002DD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002E84;
    // 0x60002DD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002DD4:
    // 0x60002DD4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002DD8: sll         $t7, $s3, 3
    ctx->r15 = S32(ctx->r19 << 3);
    // 0x60002DDC: jal         0x600005D4
    // 0x60002DE0: subu        $a1, $s5, $t7
    ctx->r5 = SUB32(ctx->r21, ctx->r15);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_69;
    // 0x60002DE0: subu        $a1, $s5, $t7
    ctx->r5 = SUB32(ctx->r21, ctx->r15);
    after_69:
    // 0x60002DE4: b           L_60002E84
    // 0x60002DE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002E84;
    // 0x60002DE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002DEC:
    // 0x60002DEC: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x60002DF0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x60002DF4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x60002DF8: mtc1        $s3, $f6
    ctx->f6.u32l = ctx->r19;
    // 0x60002DFC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60002E00: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60002E04: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60002E08: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60002E0C: addiu       $t1, $t1, 0x4EFC
    ctx->r9 = ADD32(ctx->r9, 0X4EFC);
    // 0x60002E10: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002E14: sub.s       $f8, $f26, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f26.fl - ctx->f0.fl;
    // 0x60002E18: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x60002E1C: div.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f22.fl);
    // 0x60002E20: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60002E24: addu        $s2, $t0, $t1
    ctx->r18 = ADD32(ctx->r8, ctx->r9);
    // 0x60002E28: sub.s       $f6, $f28, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f28.fl - ctx->f2.fl;
    // 0x60002E2C: nop

    // 0x60002E30: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x60002E34: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x60002E38: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x60002E3C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x60002E40: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x60002E44: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x60002E48: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60002E4C: jal         0x6000055C
    // 0x60002E50: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_70;
    // 0x60002E50: nop

    after_70:
    // 0x60002E54: lwc1        $f0, -0x4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, -0X4);
    // 0x60002E58: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002E5C: sub.s       $f18, $f24, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x60002E60: nop

    // 0x60002E64: div.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x60002E68: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x60002E6C: add.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x60002E70: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x60002E74: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x60002E78: jal         0x60000574
    // 0x60002E7C: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_71;
    // 0x60002E7C: nop

    after_71:
    // 0x60002E80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002E84:
    // 0x60002E84: slti        $at, $s1, 0xC
    ctx->r1 = SIGNED(ctx->r17) < 0XC ? 1 : 0;
    // 0x60002E88: bne         $at, $zero, L_60002DA4
    if (ctx->r1 != 0) {
        // 0x60002E8C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60002DA4;
    }
    // 0x60002E8C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x60002E90: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x60002E94: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002E98: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60002E9C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x60002EA0: blez        $t3, L_60002EF4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x60002EA4: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_60002EF4;
    }
    // 0x60002EA4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002EA8: addiu       $s0, $s0, 0x5154
    ctx->r16 = ADD32(ctx->r16, 0X5154);
L_60002EAC:
    // 0x60002EAC: bne         $s3, $s4, L_60002EC8
    if (ctx->r19 != ctx->r20) {
        // 0x60002EB0: nop
    
            goto L_60002EC8;
    }
    // 0x60002EB0: nop

    // 0x60002EB4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002EB8: jal         0x600005D4
    // 0x60002EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_72;
    // 0x60002EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_72:
    // 0x60002EC0: b           L_60002EDC
    // 0x60002EC4: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
        goto L_60002EDC;
    // 0x60002EC4: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
L_60002EC8:
    // 0x60002EC8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002ECC: sll         $t4, $s3, 3
    ctx->r12 = S32(ctx->r19 << 3);
    // 0x60002ED0: jal         0x600005D4
    // 0x60002ED4: subu        $a1, $s5, $t4
    ctx->r5 = SUB32(ctx->r21, ctx->r12);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_73;
    // 0x60002ED4: subu        $a1, $s5, $t4
    ctx->r5 = SUB32(ctx->r21, ctx->r12);
    after_73:
    // 0x60002ED8: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
L_60002EDC:
    // 0x60002EDC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002EE0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60002EE4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x60002EE8: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x60002EEC: bne         $at, $zero, L_60002EAC
    if (ctx->r1 != 0) {
        // 0x60002EF0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60002EAC;
    }
    // 0x60002EF0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60002EF4:
    // 0x60002EF4: jal         0x6000085C
    // 0x60002EF8: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_74;
    // 0x60002EF8: nop

    after_74:
    // 0x60002EFC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60002F00: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
    // 0x60002F04: bne         $at, $zero, L_60002D98
    if (ctx->r1 != 0) {
        // 0x60002F08: nop
    
            goto L_60002D98;
    }
    // 0x60002F08: nop

    // 0x60002F0C: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x60002F10: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60002F14: bne         $t7, $at, L_60002F4C
    if (ctx->r15 != ctx->r1) {
        // 0x60002F18: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_60002F4C;
    }
    // 0x60002F18: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F1C: lw          $s0, 0xE8($s6)
    ctx->r16 = MEM_W(ctx->r22, 0XE8);
    // 0x60002F20: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60002F24: lw          $a0, 0xE0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XE0);
    // 0x60002F28: lw          $a1, 0xE4($s6)
    ctx->r5 = MEM_W(ctx->r22, 0XE4);
    // 0x60002F2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002F30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x60002F34: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x60002F38: jal         0x600006B8
    // 0x60002F3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_75;
    // 0x60002F3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_75:
    // 0x60002F40: sw          $v0, 0xE8($s6)
    MEM_W(0XE8, ctx->r22) = ctx->r2;
    // 0x60002F44: jal         0x600006AC
    // 0x60002F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_76;
    // 0x60002F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_76:
L_60002F4C:
    // 0x60002F4C: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x60002F50: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60002F54: lw          $a0, 0xE8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XE8);
    // 0x60002F58: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x60002F5C: jal         0x6000055C
    // 0x60002F60: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    ovl_menu_custom_55C(rdram, ctx);
        goto after_77;
    // 0x60002F60: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_77:
    // 0x60002F64: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
    // 0x60002F68: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_60002F6C:
    // 0x60002F6C: lw          $a0, 0xE8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XE8);
    // 0x60002F70: jal         0x600005D4
    // 0x60002F74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_78;
    // 0x60002F74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_78:
    // 0x60002F78: jal         0x6000085C
    // 0x60002F7C: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_79;
    // 0x60002F7C: nop

    after_79:
    // 0x60002F80: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x60002F84: bne         $s0, $s1, L_60002F6C
    if (ctx->r16 != ctx->r17) {
        // 0x60002F88: nop
    
            goto L_60002F6C;
    }
    // 0x60002F88: nop

    // 0x60002F8C: jal         0x60000850
    // 0x60002F90: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_menu_custom_850(rdram, ctx);
        goto after_80;
    // 0x60002F90: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_80:
L_60002F94:
    // 0x60002F94: jal         0x60000268
    // 0x60002F98: nop

    ovl_menu_custom_268(rdram, ctx);
        goto after_81;
    // 0x60002F98: nop

    after_81:
    // 0x60002F9C: jal         0x60000244
    // 0x60002FA0: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    ovl_menu_custom_244(rdram, ctx);
        goto after_82;
    // 0x60002FA0: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    after_82:
    // 0x60002FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002FAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002FB0: jal         0x60000238
    // 0x60002FB4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_custom_238(rdram, ctx);
        goto after_83;
    // 0x60002FB4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_83:
    // 0x60002FB8: jal         0x60000208
    // 0x60002FBC: nop

    ovl_menu_custom_208(rdram, ctx);
        goto after_84;
    // 0x60002FBC: nop

    after_84:
    // 0x60002FC0: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x60002FC4: jal         0x600009A0
    // 0x60002FC8: nop

    ovl_menu_custom_9A0(rdram, ctx);
        goto after_85;
    // 0x60002FC8: nop

    after_85:
    // 0x60002FCC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60002FD0: jal         0x60001BD0
    // 0x60002FD4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_86;
    // 0x60002FD4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_86:
    // 0x60002FD8: lw          $a1, 0x0($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X0);
    // 0x60002FDC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002FE0: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x60002FE4: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x60002FE8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x60002FEC: jal         0x60001BD0
    // 0x60002FF0: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, 0X5154);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_87;
    // 0x60002FF0: addiu       $a0, $a0, 0x5154
    ctx->r4 = ADD32(ctx->r4, 0X5154);
    after_87:
    // 0x60002FF4: jal         0x60000124
    // 0x60002FF8: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    ovl_menu_custom_124(rdram, ctx);
        goto after_88;
    // 0x60002FF8: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    after_88:
    // 0x60002FFC: lw          $v0, 0x118($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X118);
    // 0x60003000: b           L_60004B74
    // 0x60003004: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_60004B74;
    // 0x60003004: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_60003008:
    // 0x60003008: jal         0x6000025C
    // 0x6000300C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_menu_custom_25C(rdram, ctx);
        goto after_89;
    // 0x6000300C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_89:
L_60003010:
    // 0x60003010: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x60003014: jal         0x60000118
    // 0x60003018: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    ovl_menu_custom_118(rdram, ctx);
        goto after_90;
    // 0x60003018: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    after_90:
    // 0x6000301C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003020: sw          $v0, 0x5730($at)
    MEM_W(0X5730, ctx->r1) = ctx->r2;
    // 0x60003024: jal         0x60000118
    // 0x60003028: addiu       $a0, $zero, 0xBE5
    ctx->r4 = ADD32(0, 0XBE5);
    ovl_menu_custom_118(rdram, ctx);
        goto after_91;
    // 0x60003028: addiu       $a0, $zero, 0xBE5
    ctx->r4 = ADD32(0, 0XBE5);
    after_91:
    // 0x6000302C: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x60003030: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60003034: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x60003038: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x6000303C: addiu       $a1, $a1, 0x56B0
    ctx->r5 = ADD32(ctx->r5, 0X56B0);
    // 0x60003040: jal         0x60000028
    // 0x60003044: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    ovl_menu_custom_28(rdram, ctx);
        goto after_92;
    // 0x60003044: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    after_92:
    // 0x60003048: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000304C: addiu       $a0, $a0, 0x53AC
    ctx->r4 = ADD32(ctx->r4, 0X53AC);
    // 0x60003050: addiu       $v1, $sp, 0xC8
    ctx->r3 = ADD32(ctx->r29, 0XC8);
    // 0x60003054: addiu       $v0, $sp, 0xCD
    ctx->r2 = ADD32(ctx->r29, 0XCD);
L_60003058:
    // 0x60003058: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x6000305C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60003060: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x60003064: addiu       $t2, $t1, 0x3D0
    ctx->r10 = ADD32(ctx->r9, 0X3D0);
    // 0x60003068: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x6000306C: bne         $at, $zero, L_60003058
    if (ctx->r1 != 0) {
        // 0x60003070: sh          $t2, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r10;
            goto L_60003058;
    }
    // 0x60003070: sh          $t2, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r10;
    // 0x60003074: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60003078:
    // 0x60003078: jal         0x60000BB0
    // 0x6000307C: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_93;
    // 0x6000307C: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    after_93:
    // 0x60003080: beq         $v0, $zero, L_6000309C
    if (ctx->r2 == 0) {
        // 0x60003084: slti        $v0, $s3, 0x4
        ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
            goto L_6000309C;
    }
    // 0x60003084: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x60003088: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x6000308C: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x60003090: bne         $at, $zero, L_60003078
    if (ctx->r1 != 0) {
        // 0x60003094: nop
    
            goto L_60003078;
    }
    // 0x60003094: nop

    // 0x60003098: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
L_6000309C:
    // 0x6000309C: bne         $v0, $zero, L_600030AC
    if (ctx->r2 != 0) {
        // 0x600030A0: addiu       $t3, $zero, 0x93F
        ctx->r11 = ADD32(0, 0X93F);
            goto L_600030AC;
    }
    // 0x600030A0: addiu       $t3, $zero, 0x93F
    ctx->r11 = ADD32(0, 0X93F);
    // 0x600030A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600030A8: sw          $t3, 0x541C($at)
    MEM_W(0X541C, ctx->r1) = ctx->r11;
L_600030AC:
    // 0x600030AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030B0: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    // 0x600030B4: jal         0x60001A84
    // 0x600030B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_94;
    // 0x600030B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_94:
    // 0x600030BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030C0: lw          $a0, 0x53C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X53C4);
    // 0x600030C4: jal         0x60000640
    // 0x600030C8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_custom_640(rdram, ctx);
        goto after_95;
    // 0x600030C8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_95:
    // 0x600030CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x600030D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x600030D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030D8: lw          $a0, 0x53C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X53C4);
    // 0x600030DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x600030E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x600030E4: jal         0x60000574
    // 0x600030E8: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_96;
    // 0x600030E8: nop

    after_96:
    // 0x600030EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030F0: lw          $a0, 0x5428($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5428);
    // 0x600030F4: jal         0x60000640
    // 0x600030F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_custom_640(rdram, ctx);
        goto after_97;
    // 0x600030F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_97:
    // 0x600030FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003100: lw          $a0, 0x5428($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5428);
    // 0x60003104: jal         0x600005A4
    // 0x60003108: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_98;
    // 0x60003108: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_98:
    // 0x6000310C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003110: lw          $a0, 0x54B4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54B4);
    // 0x60003114: jal         0x60000640
    // 0x60003118: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_custom_640(rdram, ctx);
        goto after_99;
    // 0x60003118: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_99:
    // 0x6000311C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003120: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60003124: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x60003128: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x6000312C: jal         0x6000064C
    // 0x60003130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_100;
    // 0x60003130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_100:
    // 0x60003134: sw          $v0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r2;
    // 0x60003138: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x6000313C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60003140: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x60003144: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60003148: addiu       $t4, $zero, 0x120
    ctx->r12 = ADD32(0, 0X120);
    // 0x6000314C: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x60003150: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x60003154: sw          $t4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r12;
    // 0x60003158: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x6000315C: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x60003160: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003164: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x60003168: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x6000316C: lw          $a0, 0x5400($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5400);
    // 0x60003170: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003174: jal         0x6000061C
    // 0x60003178: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_101;
    // 0x60003178: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_101:
    // 0x6000317C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003180: lw          $a0, 0x5400($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5400);
    // 0x60003184: jal         0x60000604
    // 0x60003188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_102;
    // 0x60003188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_102:
    // 0x6000318C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003190: lw          $a0, 0x5414($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5414);
    // 0x60003194: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003198: jal         0x6000061C
    // 0x6000319C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_103;
    // 0x6000319C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_103:
    // 0x600031A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031A4: lw          $a0, 0x5414($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5414);
    // 0x600031A8: jal         0x60000604
    // 0x600031AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_104;
    // 0x600031AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_104:
    // 0x600031B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031B4: lw          $a0, 0x5414($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5414);
    // 0x600031B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600031BC: jal         0x60000634
    // 0x600031C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_634(rdram, ctx);
        goto after_105;
    // 0x600031C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_105:
    // 0x600031C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031C8: lw          $a0, 0x543C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X543C);
    // 0x600031CC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x600031D0: jal         0x6000061C
    // 0x600031D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_106;
    // 0x600031D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_106:
    // 0x600031D8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031DC: lw          $a0, 0x543C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X543C);
    // 0x600031E0: jal         0x60000604
    // 0x600031E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_107;
    // 0x600031E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_107:
    // 0x600031E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031EC: lw          $a0, 0x5450($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5450);
    // 0x600031F0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x600031F4: jal         0x6000061C
    // 0x600031F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_108;
    // 0x600031F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_108:
    // 0x600031FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003200: lw          $a0, 0x5450($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5450);
    // 0x60003204: jal         0x60000604
    // 0x60003208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_109;
    // 0x60003208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_109:
    // 0x6000320C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003210: lw          $a0, 0x5450($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5450);
    // 0x60003214: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x60003218: jal         0x60000634
    // 0x6000321C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_634(rdram, ctx);
        goto after_110;
    // 0x6000321C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_110:
    // 0x60003220: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003224: lw          $a0, 0x5450($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5450);
    // 0x60003228: jal         0x600005D4
    // 0x6000322C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_111;
    // 0x6000322C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_111:
    // 0x60003230: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003234: lw          $a0, 0x5464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5464);
    // 0x60003238: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x6000323C: jal         0x6000061C
    // 0x60003240: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_112;
    // 0x60003240: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_112:
    // 0x60003244: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003248: lw          $a0, 0x5464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5464);
    // 0x6000324C: jal         0x60000604
    // 0x60003250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_113;
    // 0x60003250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_113:
    // 0x60003254: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003258: lw          $a0, 0x5464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5464);
    // 0x6000325C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x60003260: jal         0x60000634
    // 0x60003264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_634(rdram, ctx);
        goto after_114;
    // 0x60003264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_114:
    // 0x60003268: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000326C: lw          $a0, 0x5464($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5464);
    // 0x60003270: jal         0x600005D4
    // 0x60003274: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_115;
    // 0x60003274: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_115:
    // 0x60003278: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000327C: lw          $a0, 0x5478($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5478);
    // 0x60003280: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x60003284: jal         0x6000061C
    // 0x60003288: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_custom_61C(rdram, ctx);
        goto after_116;
    // 0x60003288: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_116:
    // 0x6000328C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003290: lw          $a0, 0x5478($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5478);
    // 0x60003294: jal         0x60000604
    // 0x60003298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_604(rdram, ctx);
        goto after_117;
    // 0x60003298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_117:
    // 0x6000329C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600032A0: lw          $a0, 0x5478($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5478);
    // 0x600032A4: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x600032A8: jal         0x60000634
    // 0x600032AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_634(rdram, ctx);
        goto after_118;
    // 0x600032AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_118:
    // 0x600032B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600032B4: lw          $a0, 0x5478($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5478);
    // 0x600032B8: jal         0x600005D4
    // 0x600032BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_119;
    // 0x600032BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_119:
    // 0x600032C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600032C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600032C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600032CC: jal         0x60000220
    // 0x600032D0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_custom_220(rdram, ctx);
        goto after_120;
    // 0x600032D0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_120:
    // 0x600032D4: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x600032D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600032DC: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x600032E0: lui         $s1, 0x4
    ctx->r17 = S32(0X4 << 16);
L_600032E4:
    // 0x600032E4: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x600032E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600032EC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x600032F0: lw          $a0, 0x53EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X53EC);
    // 0x600032F4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600032F8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x600032FC: jal         0x6000055C
    // 0x60003300: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_121;
    // 0x60003300: nop

    after_121:
    // 0x60003304: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x60003308: nop

    // 0x6000330C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60003310: nop

    // 0x60003314: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x60003318: bne         $t9, $zero, L_60003328
    if (ctx->r25 != 0) {
        // 0x6000331C: nop
    
            goto L_60003328;
    }
    // 0x6000331C: nop

    // 0x60003320: jal         0x6000085C
    // 0x60003324: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_122;
    // 0x60003324: nop

    after_122:
L_60003328:
    // 0x60003328: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x6000332C: slti        $at, $s0, 0x6A
    ctx->r1 = SIGNED(ctx->r16) < 0X6A ? 1 : 0;
    // 0x60003330: bne         $at, $zero, L_600032E4
    if (ctx->r1 != 0) {
        // 0x60003334: nop
    
            goto L_600032E4;
    }
    // 0x60003334: nop

    // 0x60003338: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x6000333C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003340: jal         0x6000064C
    // 0x60003344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_123;
    // 0x60003344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_123:
    // 0x60003348: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x6000334C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60003350: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x60003354: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003358: addiu       $t0, $zero, 0xAE
    ctx->r8 = ADD32(0, 0XAE);
    // 0x6000335C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x60003360: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x60003364: sw          $t0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r8;
    // 0x60003368: sw          $t1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r9;
    // 0x6000336C: sw          $t2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r10;
    // 0x60003370: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x60003374: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60003378: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x6000337C: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x60003380: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003384: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x60003388: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_6000338C:
    // 0x6000338C: lwc1        $f6, 0x20($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X20);
    // 0x60003390: lw          $t3, 0x50($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X50);
    // 0x60003394: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x60003398: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x6000339C: sw          $t4, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->r12;
    // 0x600033A0: swc1        $f8, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f8.u32l;
    // 0x600033A4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x600033A8: nop

    // 0x600033AC: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x600033B0: bne         $t6, $zero, L_600033CC
    if (ctx->r14 != 0) {
        // 0x600033B4: nop
    
            goto L_600033CC;
    }
    // 0x600033B4: nop

    // 0x600033B8: jal         0x6000085C
    // 0x600033BC: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    ovl_menu_custom_85C(rdram, ctx);
        goto after_124;
    // 0x600033BC: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    after_124:
    // 0x600033C0: lw          $a3, 0x12C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X12C);
    // 0x600033C4: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x600033C8: nop

L_600033CC:
    // 0x600033CC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600033D0: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
    // 0x600033D4: bne         $at, $zero, L_6000338C
    if (ctx->r1 != 0) {
        // 0x600033D8: nop
    
            goto L_6000338C;
    }
    // 0x600033D8: nop

    // 0x600033DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x600033E0: lui         $at, 0xFFFB
    ctx->r1 = S32(0XFFFB << 16);
    // 0x600033E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600033E8: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x600033EC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x600033F0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x600033F4: sw          $a3, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r7;
    // 0x600033F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600033FC: jal         0x6000064C
    // 0x60003400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_125;
    // 0x60003400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_125:
    // 0x60003404: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x60003408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000340C: sw          $v0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r2;
    // 0x60003410: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x60003414: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003418: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x6000341C: addiu       $t9, $zero, 0x30
    ctx->r25 = ADD32(0, 0X30);
    // 0x60003420: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x60003424: sw          $t8, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r24;
    // 0x60003428: sw          $t9, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r25;
    // 0x6000342C: sw          $t0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r8;
    // 0x60003430: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x60003434: jal         0x60000208
    // 0x60003438: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    ovl_menu_custom_208(rdram, ctx);
        goto after_126;
    // 0x60003438: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    after_126:
    // 0x6000343C: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60003440: addiu       $s7, $s7, 0x5568
    ctx->r23 = ADD32(ctx->r23, 0X5568);
    // 0x60003444: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003448: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x6000344C: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x60003450: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x60003454: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
    // 0x60003458: addiu       $a2, $a2, 0x5738
    ctx->r6 = ADD32(ctx->r6, 0X5738);
    // 0x6000345C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60003460: jal         0x6000223C
    // 0x60003464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_custom_223C(rdram, ctx);
        goto after_127;
    // 0x60003464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_127:
    // 0x60003468: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000346C: sw          $v0, 0x555C($at)
    MEM_W(0X555C, ctx->r1) = ctx->r2;
    // 0x60003470: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003474: sw          $v0, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r2;
    // 0x60003478: addiu       $a2, $a2, 0x573C
    ctx->r6 = ADD32(ctx->r6, 0X573C);
    // 0x6000347C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60003480: jal         0x6000223C
    // 0x60003484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_223C(rdram, ctx);
        goto after_128;
    // 0x60003484: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_128:
    // 0x60003488: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000348C: sw          $v0, 0x5560($at)
    MEM_W(0X5560, ctx->r1) = ctx->r2;
    // 0x60003490: lw          $t2, 0x4($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X4);
    // 0x60003494: sw          $v0, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r2;
    // 0x60003498: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000349C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x600034A0: sw          $t3, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r11;
    // 0x600034A4: addiu       $a2, $a2, 0x5740
    ctx->r6 = ADD32(ctx->r6, 0X5740);
    // 0x600034A8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600034AC: jal         0x6000223C
    // 0x600034B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_menu_custom_223C(rdram, ctx);
        goto after_129;
    // 0x600034B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_129:
    // 0x600034B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034B8: sw          $v0, 0x5564($at)
    MEM_W(0X5564, ctx->r1) = ctx->r2;
    // 0x600034BC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600034C0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600034C4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600034C8: lw          $v1, 0x5738($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5738);
    // 0x600034CC: addiu       $s1, $s1, 0x54BC
    ctx->r17 = ADD32(ctx->r17, 0X54BC);
    // 0x600034D0: addiu       $v0, $v0, 0x555C
    ctx->r2 = ADD32(ctx->r2, 0X555C);
L_600034D4:
    // 0x600034D4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x600034D8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x600034DC: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x600034E0: sltu        $at, $s1, $v0
    ctx->r1 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x600034E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600034E8: bne         $at, $zero, L_600034D4
    if (ctx->r1 != 0) {
        // 0x600034EC: sw          $t5, -0x14($s1)
        MEM_W(-0X14, ctx->r17) = ctx->r13;
            goto L_600034D4;
    }
    // 0x600034EC: sw          $t5, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r13;
    // 0x600034F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034F4: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    // 0x600034F8: jal         0x60001A84
    // 0x600034FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_130;
    // 0x600034FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_130:
    // 0x60003500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003504: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60003508: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000350C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003510: lwc1        $f20, 0x5718($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5718);
    // 0x60003514: addiu       $s1, $s1, 0x54BC
    ctx->r17 = ADD32(ctx->r17, 0X54BC);
    // 0x60003518: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_6000351C:
    // 0x6000351C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003520: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    // 0x60003524: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60003528: jal         0x60001C68
    // 0x6000352C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_131;
    // 0x6000352C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_131:
    // 0x60003530: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003534: jal         0x600005A4
    // 0x60003538: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_132;
    // 0x60003538: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_132:
    // 0x6000353C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003540: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x60003544: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60003548: jal         0x60000574
    // 0x6000354C: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_133;
    // 0x6000354C: nop

    after_133:
    // 0x60003550: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003554: lw          $t6, 0x5574($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5574);
    // 0x60003558: jal         0x60000BB0
    // 0x6000355C: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_134;
    // 0x6000355C: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    after_134:
    // 0x60003560: bne         $v0, $zero, L_60003588
    if (ctx->r2 != 0) {
        // 0x60003564: nop
    
            goto L_60003588;
    }
    // 0x60003564: nop

    // 0x60003568: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x6000356C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60003570: jal         0x600021CC
    // 0x60003574: addu        $a1, $t7, $s3
    ctx->r5 = ADD32(ctx->r15, ctx->r19);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_135;
    // 0x60003574: addu        $a1, $t7, $s3
    ctx->r5 = ADD32(ctx->r15, ctx->r19);
    after_135:
    // 0x60003578: jal         0x60002320
    // 0x6000357C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_136;
    // 0x6000357C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_136:
    // 0x60003580: beq         $v0, $zero, L_60003594
    if (ctx->r2 == 0) {
        // 0x60003584: nop
    
            goto L_60003594;
    }
    // 0x60003584: nop

L_60003588:
    // 0x60003588: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x6000358C: jal         0x600005D4
    // 0x60003590: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_137;
    // 0x60003590: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_137:
L_60003594:
    // 0x60003594: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60003598: slti        $at, $s3, 0x8
    ctx->r1 = SIGNED(ctx->r19) < 0X8 ? 1 : 0;
    // 0x6000359C: bne         $at, $zero, L_6000351C
    if (ctx->r1 != 0) {
        // 0x600035A0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_6000351C;
    }
    // 0x600035A0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x600035A4: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600035A8: addiu       $s2, $s2, 0x555C
    ctx->r18 = ADD32(ctx->r18, 0X555C);
    // 0x600035AC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600035B0: addiu       $s5, $zero, 0x13
    ctx->r21 = ADD32(0, 0X13);
L_600035B4:
    // 0x600035B4: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x600035B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600035BC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x600035C0: lwc1        $f6, 0x571C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X571C);
    // 0x600035C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600035C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x600035CC: lwc1        $f10, 0x5720($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5720);
    // 0x600035D0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600035D4: addiu       $s0, $s0, 0x54BC
    ctx->r16 = ADD32(ctx->r16, 0X54BC);
    // 0x600035D8: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
L_600035DC:
    // 0x600035DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x600035E0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x600035E4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600035E8: jal         0x60000574
    // 0x600035EC: nop

    ovl_menu_custom_574(rdram, ctx);
        goto after_138;
    // 0x600035EC: nop

    after_138:
    // 0x600035F0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x600035F4: bne         $s0, $s2, L_600035DC
    if (ctx->r16 != ctx->r18) {
        // 0x600035F8: nop
    
            goto L_600035DC;
    }
    // 0x600035F8: nop

    // 0x600035FC: jal         0x6000085C
    // 0x60003600: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_139;
    // 0x60003600: nop

    after_139:
    // 0x60003604: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60003608: bne         $s3, $s5, L_600035B4
    if (ctx->r19 != ctx->r21) {
        // 0x6000360C: nop
    
            goto L_600035B4;
    }
    // 0x6000360C: nop

    // 0x60003610: jal         0x60000BB0
    // 0x60003614: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_140;
    // 0x60003614: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_140:
    // 0x60003618: beq         $v0, $zero, L_6000362C
    if (ctx->r2 == 0) {
        // 0x6000361C: addiu       $a3, $zero, 0x15
        ctx->r7 = ADD32(0, 0X15);
            goto L_6000362C;
    }
    // 0x6000361C: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    // 0x60003620: b           L_6000362C
    // 0x60003624: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
        goto L_6000362C;
    // 0x60003624: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x60003628: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
L_6000362C:
    // 0x6000362C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003630: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60003634: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60003638: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x6000363C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60003640: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60003644: jal         0x600006B8
    // 0x60003648: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_141;
    // 0x60003648: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_141:
    // 0x6000364C: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x60003650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003654: jal         0x60000604
    // 0x60003658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_142;
    // 0x60003658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_142:
    // 0x6000365C: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x60003660: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60003664: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60003668: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x6000366C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60003670: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x60003674: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x60003678: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x6000367C: sw          $zero, 0x118($sp)
    MEM_W(0X118, ctx->r29) = 0;
    // 0x60003680: sw          $t9, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r25;
    // 0x60003684: sw          $zero, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = 0;
    // 0x60003688: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
L_6000368C:
    // 0x6000368C: jal         0x60000B20
    // 0x60003690: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_custom_B20(rdram, ctx);
        goto after_143;
    // 0x60003690: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_143:
    // 0x60003694: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60003698: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000369C: andi        $t1, $v0, 0x100
    ctx->r9 = ctx->r2 & 0X100;
    // 0x600036A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600036A4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x600036A8: beq         $t1, $zero, L_600037A8
    if (ctx->r9 == 0) {
        // 0x600036AC: sw          $t0, 0x5848($at)
        MEM_W(0X5848, ctx->r1) = ctx->r8;
            goto L_600037A8;
    }
    // 0x600036AC: sw          $t0, 0x5848($at)
    MEM_W(0X5848, ctx->r1) = ctx->r8;
    // 0x600036B0: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x600036B4: nop

    // 0x600036B8: beq         $t2, $zero, L_60003788
    if (ctx->r10 == 0) {
        // 0x600036BC: slti        $at, $s6, 0x3
        ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
            goto L_60003788;
    }
    // 0x600036BC: slti        $at, $s6, 0x3
    ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
    // 0x600036C0: lw          $t3, 0xF0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF0);
    // 0x600036C4: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x600036C8: sll         $t5, $s6, 2
    ctx->r13 = S32(ctx->r22 << 2);
    // 0x600036CC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600036D0: sll         $a0, $t3, 1
    ctx->r4 = S32(ctx->r11 << 1);
    // 0x600036D4: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x600036D8: addu        $v0, $a0, $t4
    ctx->r2 = ADD32(ctx->r4, ctx->r12);
    // 0x600036DC: lw          $v1, 0x555C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X555C);
    // 0x600036E0: addu        $t6, $v0, $s4
    ctx->r14 = ADD32(ctx->r2, ctx->r20);
    // 0x600036E4: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x600036E8: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x600036EC: beq         $at, $zero, L_60003754
    if (ctx->r1 == 0) {
        // 0x600036F0: slti        $at, $t3, 0x3
        ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
            goto L_60003754;
    }
    // 0x600036F0: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x600036F4: beq         $at, $zero, L_6000373C
    if (ctx->r1 == 0) {
        // 0x600036F8: subu        $a0, $v1, $s4
        ctx->r4 = SUB32(ctx->r3, ctx->r20);
            goto L_6000373C;
    }
    // 0x600036F8: subu        $a0, $v1, $s4
    ctx->r4 = SUB32(ctx->r3, ctx->r20);
    // 0x600036FC: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x60003700: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x60003704: sw          $t8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r24;
    // 0x60003708: bne         $at, $zero, L_60003718
    if (ctx->r1 != 0) {
        // 0x6000370C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_60003718;
    }
    // 0x6000370C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x60003710: b           L_6000371C
    // 0x60003714: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_6000371C;
    // 0x60003714: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_60003718:
    // 0x60003718: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_6000371C:
    // 0x6000371C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x60003720: bne         $at, $zero, L_60004270
    if (ctx->r1 != 0) {
        // 0x60003724: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003724: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x60003728: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x6000372C: nop

    // 0x60003730: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x60003734: b           L_6000426C
    // 0x60003738: sw          $t0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r8;
        goto L_6000426C;
    // 0x60003738: sw          $t0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r8;
L_6000373C:
    // 0x6000373C: subu        $t1, $v1, $s4
    ctx->r9 = SUB32(ctx->r3, ctx->r20);
    // 0x60003740: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x60003744: blez        $t2, L_60004270
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60003748: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003748: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x6000374C: b           L_6000426C
    // 0x60003750: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
        goto L_6000426C;
    // 0x60003750: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_60003754:
    // 0x60003754: addu        $t4, $a0, $s4
    ctx->r12 = ADD32(ctx->r4, ctx->r20);
    // 0x60003758: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x6000375C: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60003760: beq         $at, $zero, L_60004270
    if (ctx->r1 == 0) {
        // 0x60003764: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003764: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x60003768: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x6000376C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003770: bne         $t6, $at, L_60004270
    if (ctx->r14 != ctx->r1) {
        // 0x60003774: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003774: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x60003778: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x6000377C: b           L_6000426C
    // 0x60003780: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
        goto L_6000426C;
    // 0x60003780: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x60003784: slti        $at, $s6, 0x3
    ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
L_60003788:
    // 0x60003788: beq         $at, $zero, L_60003798
    if (ctx->r1 == 0) {
        // 0x6000378C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60003798;
    }
    // 0x6000378C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003790: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x60003794: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_60003798:
    // 0x60003798: bne         $s6, $at, L_60004270
    if (ctx->r22 != ctx->r1) {
        // 0x6000379C: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x6000379C: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x600037A0: b           L_60004270
    // 0x600037A4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x600037A4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_600037A8:
    // 0x600037A8: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
    // 0x600037AC: beq         $t7, $zero, L_60003800
    if (ctx->r15 == 0) {
        // 0x600037B0: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_60003800;
    }
    // 0x600037B0: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    // 0x600037B4: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x600037B8: nop

    // 0x600037BC: beq         $t3, $zero, L_600037EC
    if (ctx->r11 == 0) {
        // 0x600037C0: nop
    
            goto L_600037EC;
    }
    // 0x600037C0: nop

    // 0x600037C4: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x600037C8: nop

    // 0x600037CC: blez        $t8, L_600037DC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x600037D0: addiu       $t9, $t8, -0x1
        ctx->r25 = ADD32(ctx->r24, -0X1);
            goto L_600037DC;
    }
    // 0x600037D0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x600037D4: b           L_6000426C
    // 0x600037D8: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
        goto L_6000426C;
    // 0x600037D8: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
L_600037DC:
    // 0x600037DC: beq         $s4, $zero, L_60004270
    if (ctx->r20 == 0) {
        // 0x600037E0: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x600037E0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x600037E4: b           L_6000426C
    // 0x600037E8: addiu       $s4, $s4, -0x2
    ctx->r20 = ADD32(ctx->r20, -0X2);
        goto L_6000426C;
    // 0x600037E8: addiu       $s4, $s4, -0x2
    ctx->r20 = ADD32(ctx->r20, -0X2);
L_600037EC:
    // 0x600037EC: blez        $s6, L_60004270
    if (SIGNED(ctx->r22) <= 0) {
        // 0x600037F0: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x600037F0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x600037F4: b           L_6000426C
    // 0x600037F8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
        goto L_6000426C;
    // 0x600037F8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x600037FC: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
L_60003800:
    // 0x60003800: beq         $t0, $zero, L_60003834
    if (ctx->r8 == 0) {
        // 0x60003804: andi        $t5, $v1, 0x400
        ctx->r13 = ctx->r3 & 0X400;
            goto L_60003834;
    }
    // 0x60003804: andi        $t5, $v1, 0x400
    ctx->r13 = ctx->r3 & 0X400;
    // 0x60003808: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x6000380C: nop

    // 0x60003810: beq         $t1, $zero, L_60004270
    if (ctx->r9 == 0) {
        // 0x60003814: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003814: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x60003818: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x6000381C: nop

    // 0x60003820: blez        $t2, L_6000426C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60003824: addiu       $t4, $t2, -0x1
        ctx->r12 = ADD32(ctx->r10, -0X1);
            goto L_6000426C;
    }
    // 0x60003824: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x60003828: b           L_6000426C
    // 0x6000382C: sw          $t4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r12;
        goto L_6000426C;
    // 0x6000382C: sw          $t4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r12;
    // 0x60003830: andi        $t5, $v1, 0x400
    ctx->r13 = ctx->r3 & 0X400;
L_60003834:
    // 0x60003834: beq         $t5, $zero, L_60003898
    if (ctx->r13 == 0) {
        // 0x60003838: andi        $t6, $v1, 0x9000
        ctx->r14 = ctx->r3 & 0X9000;
            goto L_60003898;
    }
    // 0x60003838: andi        $t6, $v1, 0x9000
    ctx->r14 = ctx->r3 & 0X9000;
    // 0x6000383C: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x60003840: nop

    // 0x60003844: beq         $t6, $zero, L_60004270
    if (ctx->r14 == 0) {
        // 0x60003848: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003848: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x6000384C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x60003850: nop

    // 0x60003854: bgtz        $t7, L_60004270
    if (SIGNED(ctx->r15) > 0) {
        // 0x60003858: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60003858: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x6000385C: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x60003860: sll         $t3, $s6, 2
    ctx->r11 = S32(ctx->r22 << 2);
    // 0x60003864: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60003868: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x6000386C: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x60003870: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x60003874: lw          $t8, 0x555C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X555C);
    // 0x60003878: addu        $t2, $t1, $s4
    ctx->r10 = ADD32(ctx->r9, ctx->r20);
    // 0x6000387C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x60003880: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x60003884: beq         $at, $zero, L_6000426C
    if (ctx->r1 == 0) {
        // 0x60003888: addiu       $t5, $t7, 0x1
        ctx->r13 = ADD32(ctx->r15, 0X1);
            goto L_6000426C;
    }
    // 0x60003888: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x6000388C: b           L_6000426C
    // 0x60003890: sw          $t5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r13;
        goto L_6000426C;
    // 0x60003890: sw          $t5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r13;
    // 0x60003894: andi        $t6, $v1, 0x9000
    ctx->r14 = ctx->r3 & 0X9000;
L_60003898:
    // 0x60003898: beq         $t6, $zero, L_60004210
    if (ctx->r14 == 0) {
        // 0x6000389C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60004210;
    }
    // 0x6000389C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600038A0: beq         $s6, $at, L_60004A54
    if (ctx->r22 == ctx->r1) {
        // 0x600038A4: lw          $t0, 0xC0($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC0);
            goto L_60004A54;
    }
    // 0x600038A4: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x600038A8: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x600038AC: nop

    // 0x600038B0: bne         $t3, $zero, L_600038E8
    if (ctx->r11 != 0) {
        // 0x600038B4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_600038E8;
    }
    // 0x600038B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x600038B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x600038BC: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
    // 0x600038C0: sw          $t9, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r25;
    // 0x600038C4: jal         0x60000244
    // 0x600038C8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_custom_244(rdram, ctx);
        goto after_144;
    // 0x600038C8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_144:
    // 0x600038CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600038D0: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    // 0x600038D4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600038D8: jal         0x60001C68
    // 0x600038DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_145;
    // 0x600038DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_145:
    // 0x600038E0: b           L_60004270
    // 0x600038E4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x600038E4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_600038E8:
    // 0x600038E8: sll         $s2, $s6, 2
    ctx->r18 = S32(ctx->r22 << 2);
    // 0x600038EC: addu        $t1, $s7, $s2
    ctx->r9 = ADD32(ctx->r23, ctx->r18);
    // 0x600038F0: lw          $s1, 0x124($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X124);
    // 0x600038F4: jal         0x60000BEC
    // 0x600038F8: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    ovl_menu_custom_BEC(rdram, ctx);
        goto after_146;
    // 0x600038F8: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    after_146:
    // 0x600038FC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x60003900: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x60003904: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x60003908: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x6000390C: addu        $t7, $t8, $t4
    ctx->r15 = ADD32(ctx->r24, ctx->r12);
    // 0x60003910: jal         0x600021CC
    // 0x60003914: addu        $a1, $t7, $s4
    ctx->r5 = ADD32(ctx->r15, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_147;
    // 0x60003914: addu        $a1, $t7, $s4
    ctx->r5 = ADD32(ctx->r15, ctx->r20);
    after_147:
    // 0x60003918: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x6000391C: jal         0x60002320
    // 0x60003920: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_148;
    // 0x60003920: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_148:
    // 0x60003924: bne         $v0, $zero, L_6000426C
    if (ctx->r2 != 0) {
        // 0x60003928: lui         $t6, 0x6000
        ctx->r14 = S32(0X6000 << 16);
            goto L_6000426C;
    }
    // 0x60003928: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x6000392C: addiu       $t6, $t6, 0x5574
    ctx->r14 = ADD32(ctx->r14, 0X5574);
    // 0x60003930: addu        $t3, $s2, $t6
    ctx->r11 = ADD32(ctx->r18, ctx->r14);
    // 0x60003934: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x60003938: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x6000393C: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x60003940: jal         0x60000244
    // 0x60003944: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_custom_244(rdram, ctx);
        goto after_149;
    // 0x60003944: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_149:
    // 0x60003948: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x6000394C: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60003950: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x60003954: nop

    // 0x60003958: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x6000395C: jal         0x60000BB0
    // 0x60003960: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_150;
    // 0x60003960: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    after_150:
    // 0x60003964: bne         $v0, $zero, L_60003984
    if (ctx->r2 != 0) {
        // 0x60003968: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003984;
    }
    // 0x60003968: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000396C: bne         $s6, $at, L_600039F4
    if (ctx->r22 != ctx->r1) {
        // 0x60003970: lw          $t3, 0xF8($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF8);
            goto L_600039F4;
    }
    // 0x60003970: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x60003974: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60003978: jal         0x60002470
    // 0x6000397C: addu        $a0, $t8, $s4
    ctx->r4 = ADD32(ctx->r24, ctx->r20);
    ovl_menu_custom_2470(rdram, ctx);
        goto after_151;
    // 0x6000397C: addu        $a0, $t8, $s4
    ctx->r4 = ADD32(ctx->r24, ctx->r20);
    after_151:
    // 0x60003980: beq         $v0, $zero, L_600039F0
    if (ctx->r2 == 0) {
        // 0x60003984: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600039F0;
    }
L_60003984:
    // 0x60003984: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003988: beq         $s6, $at, L_600039B0
    if (ctx->r22 == ctx->r1) {
        // 0x6000398C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600039B0;
    }
    // 0x6000398C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003990: bne         $s6, $at, L_600039B8
    if (ctx->r22 != ctx->r1) {
        // 0x60003994: nop
    
            goto L_600039B8;
    }
    // 0x60003994: nop

    // 0x60003998: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x6000399C: nop

    // 0x600039A0: addu        $t7, $t4, $s4
    ctx->r15 = ADD32(ctx->r12, ctx->r20);
    // 0x600039A4: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x600039A8: bne         $at, $zero, L_600039B8
    if (ctx->r1 != 0) {
        // 0x600039AC: nop
    
            goto L_600039B8;
    }
    // 0x600039AC: nop

L_600039B0:
    // 0x600039B0: b           L_60003A7C
    // 0x600039B4: addiu       $s0, $zero, 0x11
    ctx->r16 = ADD32(0, 0X11);
        goto L_60003A7C;
    // 0x600039B4: addiu       $s0, $zero, 0x11
    ctx->r16 = ADD32(0, 0X11);
L_600039B8:
    // 0x600039B8: jal         0x60000244
    // 0x600039BC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_custom_244(rdram, ctx);
        goto after_152;
    // 0x600039BC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_152:
    // 0x600039C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600039C4: bne         $s6, $at, L_600039E8
    if (ctx->r22 != ctx->r1) {
        // 0x600039C8: nop
    
            goto L_600039E8;
    }
    // 0x600039C8: nop

    // 0x600039CC: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x600039D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x600039D4: addu        $t6, $t5, $s4
    ctx->r14 = ADD32(ctx->r13, ctx->r20);
    // 0x600039D8: bne         $t6, $at, L_600039E8
    if (ctx->r14 != ctx->r1) {
        // 0x600039DC: nop
    
            goto L_600039E8;
    }
    // 0x600039DC: nop

    // 0x600039E0: b           L_60003A7C
    // 0x600039E4: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
        goto L_60003A7C;
    // 0x600039E4: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
L_600039E8:
    // 0x600039E8: b           L_60003A7C
    // 0x600039EC: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
        goto L_60003A7C;
    // 0x600039EC: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
L_600039F0:
    // 0x600039F0: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
L_600039F4:
    // 0x600039F4: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x600039F8: lw          $t9, 0x10($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X10);
    // 0x600039FC: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x60003A00: nop

    // 0x60003A04: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x60003A08: beq         $at, $zero, L_60003A1C
    if (ctx->r1 == 0) {
        // 0x60003A0C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003A1C;
    }
    // 0x60003A0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003A10: b           L_60003A7C
    // 0x60003A14: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
        goto L_60003A7C;
    // 0x60003A14: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
    // 0x60003A18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_60003A1C:
    // 0x60003A1C: bne         $s6, $at, L_60003A54
    if (ctx->r22 != ctx->r1) {
        // 0x60003A20: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003A54;
    }
    // 0x60003A20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003A24: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60003A28: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x60003A2C: addu        $t8, $t2, $s4
    ctx->r24 = ADD32(ctx->r10, ctx->r20);
    // 0x60003A30: bne         $t8, $at, L_60003A54
    if (ctx->r24 != ctx->r1) {
        // 0x60003A34: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003A54;
    }
    // 0x60003A34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003A38: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x60003A3C: nop

    // 0x60003A40: beq         $t4, $zero, L_60003A54
    if (ctx->r12 == 0) {
        // 0x60003A44: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003A54;
    }
    // 0x60003A44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003A48: b           L_60003A7C
    // 0x60003A4C: addiu       $s0, $zero, 0x16
    ctx->r16 = ADD32(0, 0X16);
        goto L_60003A7C;
    // 0x60003A4C: addiu       $s0, $zero, 0x16
    ctx->r16 = ADD32(0, 0X16);
    // 0x60003A50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_60003A54:
    // 0x60003A54: bne         $s6, $at, L_60003A7C
    if (ctx->r22 != ctx->r1) {
        // 0x60003A58: addiu       $s0, $zero, 0xD
        ctx->r16 = ADD32(0, 0XD);
            goto L_60003A7C;
    }
    // 0x60003A58: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
    // 0x60003A5C: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x60003A60: nop

    // 0x60003A64: addu        $t5, $t7, $s4
    ctx->r13 = ADD32(ctx->r15, ctx->r20);
    // 0x60003A68: bne         $t5, $zero, L_60003A7C
    if (ctx->r13 != 0) {
        // 0x60003A6C: addiu       $s0, $zero, 0xD
        ctx->r16 = ADD32(0, 0XD);
            goto L_60003A7C;
    }
    // 0x60003A6C: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
    // 0x60003A70: b           L_60003A7C
    // 0x60003A74: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
        goto L_60003A7C;
    // 0x60003A74: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x60003A78: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
L_60003A7C:
    // 0x60003A7C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003A80: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60003A84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60003A88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x60003A8C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60003A90: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60003A94: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60003A98: jal         0x600006B8
    // 0x60003A9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_153;
    // 0x60003A9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_153:
    // 0x60003AA0: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x60003AA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003AA8: jal         0x60000604
    // 0x60003AAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_154;
    // 0x60003AAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_154:
    // 0x60003AB0: jal         0x600006AC
    // 0x60003AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_155;
    // 0x60003AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_155:
    // 0x60003AB8: jal         0x6000085C
    // 0x60003ABC: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_156;
    // 0x60003ABC: nop

    after_156:
L_60003AC0:
    // 0x60003AC0: jal         0x60000B20
    // 0x60003AC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_custom_B20(rdram, ctx);
        goto after_157;
    // 0x60003AC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_157:
    // 0x60003AC8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x60003ACC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003AD0: beq         $s0, $at, L_60003AE8
    if (ctx->r16 == ctx->r1) {
        // 0x60003AD4: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_60003AE8;
    }
    // 0x60003AD4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60003AD8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x60003ADC: beq         $s0, $at, L_60003AE8
    if (ctx->r16 == ctx->r1) {
        // 0x60003AE0: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_60003AE8;
    }
    // 0x60003AE0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x60003AE4: bne         $s0, $at, L_60004104
    if (ctx->r16 != ctx->r1) {
        // 0x60003AE8: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_60004104;
    }
L_60003AE8:
    // 0x60003AE8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003AEC: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60003AF0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x60003AF4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x60003AF8: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x60003AFC: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x60003B00: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    // 0x60003B04: jal         0x600006B8
    // 0x60003B08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_158;
    // 0x60003B08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_158:
    // 0x60003B0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003B14: jal         0x60000604
    // 0x60003B18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_159;
    // 0x60003B18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_159:
    // 0x60003B1C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x60003B20: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003B24: jal         0x6000064C
    // 0x60003B28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_160;
    // 0x60003B28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_160:
    // 0x60003B2C: lui         $t1, 0xFF80
    ctx->r9 = S32(0XFF80 << 16);
    // 0x60003B30: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x60003B34: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x60003B38: ori         $t1, $t1, 0xE0
    ctx->r9 = ctx->r9 | 0XE0;
    // 0x60003B3C: swc1        $f24, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f24.u32l;
    // 0x60003B40: swc1        $f26, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f26.u32l;
    // 0x60003B44: sw          $t0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r8;
    // 0x60003B48: sw          $t9, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r25;
    // 0x60003B4C: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x60003B50: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B54: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003B58: addiu       $a0, $a0, 0x5580
    ctx->r4 = ADD32(ctx->r4, 0X5580);
    // 0x60003B5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60003B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003B64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x60003B68: jal         0x60000D30
    // 0x60003B6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    ovl_menu_custom_D30(rdram, ctx);
        goto after_161;
    // 0x60003B6C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_161:
    // 0x60003B70: jal         0x60000D3C
    // 0x60003B74: nop

    ovl_menu_custom_D3C(rdram, ctx);
        goto after_162;
    // 0x60003B74: nop

    after_162:
    // 0x60003B78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60003B7C: jal         0x60000550
    // 0x60003B80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_custom_550(rdram, ctx);
        goto after_163;
    // 0x60003B80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_163:
    // 0x60003B84: jal         0x600006AC
    // 0x60003B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_164;
    // 0x60003B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_164:
    // 0x60003B8C: jal         0x6000085C
    // 0x60003B90: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_165;
    // 0x60003B90: nop

    after_165:
    // 0x60003B94: bne         $s1, $zero, L_600040F4
    if (ctx->r17 != 0) {
        // 0x60003B98: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_600040F4;
    }
    // 0x60003B98: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x60003B9C: jal         0x60000244
    // 0x60003BA0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_custom_244(rdram, ctx);
        goto after_166;
    // 0x60003BA0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_166:
    // 0x60003BA4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003BA8: lw          $s1, 0x124($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X124);
    // 0x60003BAC: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60003BB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60003BB4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x60003BB8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60003BBC: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60003BC0: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x60003BC4: jal         0x600006B8
    // 0x60003BC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_167;
    // 0x60003BC8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_167:
    // 0x60003BCC: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x60003BD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003BD4: jal         0x60000604
    // 0x60003BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_168;
    // 0x60003BD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_168:
    // 0x60003BDC: jal         0x600006AC
    // 0x60003BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_169;
    // 0x60003BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_169:
    // 0x60003BE4: jal         0x60000850
    // 0x60003BE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_custom_850(rdram, ctx);
        goto after_170;
    // 0x60003BE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_170:
    // 0x60003BEC: lw          $v0, 0xF8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF8);
    // 0x60003BF0: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x60003BF4: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x60003BF8: lh          $t7, 0x4($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X4);
    // 0x60003BFC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60003C00: subu        $a2, $t8, $t7
    ctx->r6 = SUB32(ctx->r24, ctx->r15);
    // 0x60003C04: addiu       $a1, $a1, 0x56B8
    ctx->r5 = ADD32(ctx->r5, 0X56B8);
    // 0x60003C08: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x60003C0C: jal         0x60000028
    // 0x60003C10: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    ovl_menu_custom_28(rdram, ctx);
        goto after_171;
    // 0x60003C10: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    after_171:
    // 0x60003C14: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C18: addiu       $a0, $a0, 0x53AC
    ctx->r4 = ADD32(ctx->r4, 0X53AC);
    // 0x60003C1C: addiu       $v1, $sp, 0xC8
    ctx->r3 = ADD32(ctx->r29, 0XC8);
    // 0x60003C20: addiu       $v0, $sp, 0xCD
    ctx->r2 = ADD32(ctx->r29, 0XCD);
L_60003C24:
    // 0x60003C24: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x60003C28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60003C2C: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x60003C30: addiu       $t3, $t6, 0x3D0
    ctx->r11 = ADD32(ctx->r14, 0X3D0);
    // 0x60003C34: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60003C38: bne         $at, $zero, L_60003C24
    if (ctx->r1 != 0) {
        // 0x60003C3C: sh          $t3, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r11;
            goto L_60003C24;
    }
    // 0x60003C3C: sh          $t3, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r11;
    // 0x60003C40: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003C44: lw          $s1, 0x54A0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X54A0);
    // 0x60003C48: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C4C: addiu       $a0, $a0, 0x5494
    ctx->r4 = ADD32(ctx->r4, 0X5494);
    // 0x60003C50: jal         0x60001A84
    // 0x60003C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_172;
    // 0x60003C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_172:
    // 0x60003C58: jal         0x60001A64
    // 0x60003C5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_custom_1A64(rdram, ctx);
        goto after_173;
    // 0x60003C5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_173:
    // 0x60003C60: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x60003C64: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60003C68: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x60003C6C: nop

    // 0x60003C70: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x60003C74: jal         0x60000B98
    // 0x60003C78: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    ovl_menu_custom_B98(rdram, ctx);
        goto after_174;
    // 0x60003C78: addu        $a0, $t2, $s4
    ctx->r4 = ADD32(ctx->r10, ctx->r20);
    after_174:
    // 0x60003C7C: bne         $s6, $zero, L_60003DE0
    if (ctx->r22 != 0) {
        // 0x60003C80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003DE0;
    }
    // 0x60003C80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003C84: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x60003C88: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60003C8C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x60003C90: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x60003C94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003C98: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x60003C9C: lw          $v0, 0x54BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54BC);
    // 0x60003CA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003CA4: addiu       $v0, $v0, -0x98D
    ctx->r2 = ADD32(ctx->r2, -0X98D);
    // 0x60003CA8: bgez        $v0, L_60003CBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x60003CAC: andi        $t7, $v0, 0x3
        ctx->r15 = ctx->r2 & 0X3;
            goto L_60003CBC;
    }
    // 0x60003CAC: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x60003CB0: beq         $t7, $zero, L_60003CBC
    if (ctx->r15 == 0) {
        // 0x60003CB4: nop
    
            goto L_60003CBC;
    }
    // 0x60003CB4: nop

    // 0x60003CB8: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_60003CBC:
    // 0x60003CBC: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x60003CC0: bgez        $v0, L_60003CD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x60003CC4: sra         $t6, $v0, 2
        ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
            goto L_60003CD0;
    }
    // 0x60003CC4: sra         $t6, $v0, 2
    ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
    // 0x60003CC8: addiu       $at, $v0, 0x3
    ctx->r1 = ADD32(ctx->r2, 0X3);
    // 0x60003CCC: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_60003CD0:
    // 0x60003CD0: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x60003CD4: jal         0x60000B98
    // 0x60003CD8: addiu       $a0, $a0, 0xB5
    ctx->r4 = ADD32(ctx->r4, 0XB5);
    ovl_menu_custom_B98(rdram, ctx);
        goto after_175;
    // 0x60003CD8: addiu       $a0, $a0, 0xB5
    ctx->r4 = ADD32(ctx->r4, 0XB5);
    after_175:
    // 0x60003CDC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60003CE0:
    // 0x60003CE0: jal         0x60000BB0
    // 0x60003CE4: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_176;
    // 0x60003CE4: addiu       $a0, $s3, 0x20
    ctx->r4 = ADD32(ctx->r19, 0X20);
    after_176:
    // 0x60003CE8: beq         $v0, $zero, L_60003D04
    if (ctx->r2 == 0) {
        // 0x60003CEC: slti        $v0, $s3, 0x4
        ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
            goto L_60003D04;
    }
    // 0x60003CEC: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x60003CF0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60003CF4: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x60003CF8: bne         $at, $zero, L_60003CE0
    if (ctx->r1 != 0) {
        // 0x60003CFC: nop
    
            goto L_60003CE0;
    }
    // 0x60003CFC: nop

    // 0x60003D00: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
L_60003D04:
    // 0x60003D04: bne         $v0, $zero, L_60003D50
    if (ctx->r2 != 0) {
        // 0x60003D08: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_60003D50;
    }
    // 0x60003D08: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60003D0C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003D10: lw          $s1, 0x5428($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5428);
    // 0x60003D14: addiu       $t3, $zero, 0x93F
    ctx->r11 = ADD32(0, 0X93F);
    // 0x60003D18: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003D1C: sw          $t3, 0x541C($at)
    MEM_W(0X541C, ctx->r1) = ctx->r11;
    // 0x60003D20: jal         0x60000850
    // 0x60003D24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_custom_850(rdram, ctx);
        goto after_177;
    // 0x60003D24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_177:
    // 0x60003D28: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D2C: addiu       $a0, $a0, 0x541C
    ctx->r4 = ADD32(ctx->r4, 0X541C);
    // 0x60003D30: jal         0x60001A84
    // 0x60003D34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_178;
    // 0x60003D34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_178:
    // 0x60003D38: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D3C: lw          $a0, 0x5428($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5428);
    // 0x60003D40: jal         0x600005A4
    // 0x60003D44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_179;
    // 0x60003D44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_179:
    // 0x60003D48: jal         0x60000550
    // 0x60003D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_custom_550(rdram, ctx);
        goto after_180;
    // 0x60003D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_180:
L_60003D50:
    // 0x60003D50: jal         0x60000BB0
    // 0x60003D54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_181;
    // 0x60003D54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_181:
    // 0x60003D58: beq         $v0, $zero, L_60003D64
    if (ctx->r2 == 0) {
        // 0x60003D5C: nop
    
            goto L_60003D64;
    }
    // 0x60003D5C: nop

    // 0x60003D60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_60003D64:
    // 0x60003D64: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60003D68: slti        $at, $s3, 0x24
    ctx->r1 = SIGNED(ctx->r19) < 0X24 ? 1 : 0;
    // 0x60003D6C: bne         $at, $zero, L_60003D50
    if (ctx->r1 != 0) {
        // 0x60003D70: nop
    
            goto L_60003D50;
    }
    // 0x60003D70: nop

    // 0x60003D74: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x60003D78: bne         $s0, $at, L_60003F6C
    if (ctx->r16 != ctx->r1) {
        // 0x60003D7C: addiu       $t0, $zero, 0x20
        ctx->r8 = ADD32(0, 0X20);
            goto L_60003F6C;
    }
    // 0x60003D7C: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x60003D80: subu        $s0, $t0, $s4
    ctx->r16 = SUB32(ctx->r8, ctx->r20);
    // 0x60003D84: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60003D88:
    // 0x60003D88: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60003D8C: beq         $at, $zero, L_60003DC4
    if (ctx->r1 == 0) {
        // 0x60003D90: negu        $at, $s4
        ctx->r1 = SUB32(0, ctx->r20);
            goto L_60003DC4;
    }
    // 0x60003D90: negu        $at, $s4
    ctx->r1 = SUB32(0, ctx->r20);
    // 0x60003D94: sll         $t9, $at, 2
    ctx->r25 = S32(ctx->r1 << 2);
    // 0x60003D98: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
    // 0x60003D9C: addu        $t1, $t1, $s3
    ctx->r9 = ADD32(ctx->r9, ctx->r19);
    // 0x60003DA0: addu        $t9, $t9, $at
    ctx->r25 = ADD32(ctx->r25, ctx->r1);
    // 0x60003DA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60003DA8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60003DAC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x60003DB0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DB4: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60003DB8: lw          $a0, 0x5748($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5748);
    // 0x60003DBC: jal         0x600005D4
    // 0x60003DC0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_182;
    // 0x60003DC0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_182:
L_60003DC4:
    // 0x60003DC4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60003DC8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60003DCC: bne         $s3, $at, L_60003D88
    if (ctx->r19 != ctx->r1) {
        // 0x60003DD0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_60003D88;
    }
    // 0x60003DD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003DD4: b           L_60003F6C
    // 0x60003DD8: nop

        goto L_60003F6C;
    // 0x60003DD8: nop

    // 0x60003DDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_60003DE0:
    // 0x60003DE0: bne         $s6, $at, L_60003F54
    if (ctx->r22 != ctx->r1) {
        // 0x60003DE4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60003F54;
    }
    // 0x60003DE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003DE8: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x60003DEC: nop

    // 0x60003DF0: addu        $s0, $t4, $s4
    ctx->r16 = ADD32(ctx->r12, ctx->r20);
    // 0x60003DF4: bne         $s0, $zero, L_60003E2C
    if (ctx->r16 != 0) {
        // 0x60003DF8: slti        $at, $s0, 0x7
        ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
            goto L_60003E2C;
    }
    // 0x60003DF8: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x60003DFC: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x60003E00: nop

    // 0x60003E04: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x60003E08: nop

    // 0x60003E0C: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x60003E10: jal         0x60000BA4
    // 0x60003E14: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    ovl_menu_custom_BA4(rdram, ctx);
        goto after_183;
    // 0x60003E14: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    after_183:
    // 0x60003E18: jal         0x60000B98
    // 0x60003E1C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    ovl_menu_custom_B98(rdram, ctx);
        goto after_184;
    // 0x60003E1C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_184:
    // 0x60003E20: b           L_60003F6C
    // 0x60003E24: nop

        goto L_60003F6C;
    // 0x60003E24: nop

    // 0x60003E28: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
L_60003E2C:
    // 0x60003E2C: bne         $at, $zero, L_60003E8C
    if (ctx->r1 != 0) {
        // 0x60003E30: slti        $at, $s0, 0xB
        ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
            goto L_60003E8C;
    }
    // 0x60003E30: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x60003E34: beq         $at, $zero, L_60003E90
    if (ctx->r1 == 0) {
        // 0x60003E38: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_60003E90;
    }
    // 0x60003E38: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x60003E3C: jal         0x60000BEC
    // 0x60003E40: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    ovl_menu_custom_BEC(rdram, ctx);
        goto after_185;
    // 0x60003E40: sll         $s0, $s4, 2
    ctx->r16 = S32(ctx->r20 << 2);
    after_185:
    // 0x60003E44: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x60003E48: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60003E4C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x60003E50: addu        $t0, $t3, $s0
    ctx->r8 = ADD32(ctx->r11, ctx->r16);
    // 0x60003E54: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x60003E58: lw          $a1, 0x559C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X559C);
    // 0x60003E5C: lbu         $t9, 0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3);
    // 0x60003E60: nop

    // 0x60003E64: and         $t1, $a1, $t9
    ctx->r9 = ctx->r5 & ctx->r25;
    // 0x60003E68: bne         $t1, $zero, L_60003F6C
    if (ctx->r9 != 0) {
        // 0x60003E6C: or          $t8, $t9, $a1
        ctx->r24 = ctx->r25 | ctx->r5;
            goto L_60003F6C;
    }
    // 0x60003E6C: or          $t8, $t9, $a1
    ctx->r24 = ctx->r25 | ctx->r5;
    // 0x60003E70: sb          $t8, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r24;
    // 0x60003E74: jal         0x60000B38
    // 0x60003E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_custom_B38(rdram, ctx);
        goto after_186;
    // 0x60003E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_186:
    // 0x60003E7C: jal         0x60000B5C
    // 0x60003E80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_custom_B5C(rdram, ctx);
        goto after_187;
    // 0x60003E80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_187:
    // 0x60003E84: b           L_60003F6C
    // 0x60003E88: nop

        goto L_60003F6C;
    // 0x60003E88: nop

L_60003E8C:
    // 0x60003E8C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_60003E90:
    // 0x60003E90: bne         $s0, $at, L_60003EEC
    if (ctx->r16 != ctx->r1) {
        // 0x60003E94: nop
    
            goto L_60003EEC;
    }
    // 0x60003E94: nop

    // 0x60003E98: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x60003E9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60003EA0: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x60003EA4: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x60003EA8: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60003EAC: nop

    // 0x60003EB0: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x60003EB4: jal         0x60000BA4
    // 0x60003EB8: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    ovl_menu_custom_BA4(rdram, ctx);
        goto after_188;
    // 0x60003EB8: addu        $a0, $t3, $s4
    ctx->r4 = ADD32(ctx->r11, ctx->r20);
    after_188:
    // 0x60003EBC: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x60003EC0: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60003EC4: lbu         $t0, 0x20($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X20);
    // 0x60003EC8: nop

    // 0x60003ECC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x60003ED0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x60003ED4: lw          $t1, 0x4BF8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4BF8);
    // 0x60003ED8: sb          $zero, 0x21($v1)
    MEM_B(0X21, ctx->r3) = 0;
    // 0x60003EDC: sb          $zero, 0x22($v1)
    MEM_B(0X22, ctx->r3) = 0;
    // 0x60003EE0: sb          $zero, 0x23($v1)
    MEM_B(0X23, ctx->r3) = 0;
    // 0x60003EE4: b           L_60003F6C
    // 0x60003EE8: sb          $t1, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r9;
        goto L_60003F6C;
    // 0x60003EE8: sb          $t1, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r9;
L_60003EEC:
    // 0x60003EEC: blez        $s0, L_60003F3C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60003EF0: slti        $at, $s0, 0x6
        ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_60003F3C;
    }
    // 0x60003EF0: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x60003EF4: beq         $at, $zero, L_60003F40
    if (ctx->r1 == 0) {
        // 0x60003EF8: addiu       $t7, $s0, -0xB
        ctx->r15 = ADD32(ctx->r16, -0XB);
            goto L_60003F40;
    }
    // 0x60003EF8: addiu       $t7, $s0, -0xB
    ctx->r15 = ADD32(ctx->r16, -0XB);
    // 0x60003EFC: jal         0x60000B98
    // 0x60003F00: addiu       $a0, $s0, 0x60
    ctx->r4 = ADD32(ctx->r16, 0X60);
    ovl_menu_custom_B98(rdram, ctx);
        goto after_189;
    // 0x60003F00: addiu       $a0, $s0, 0x60
    ctx->r4 = ADD32(ctx->r16, 0X60);
    after_189:
    // 0x60003F04: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x60003F08: beq         $at, $zero, L_60003F6C
    if (ctx->r1 == 0) {
        // 0x60003F0C: nop
    
            goto L_60003F6C;
    }
    // 0x60003F0C: nop

    // 0x60003F10: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60003F14: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003F18: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x60003F1C: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x60003F20: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003F24: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60003F28: lw          $a0, 0x54DC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54DC);
    // 0x60003F2C: jal         0x600005D4
    // 0x60003F30: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_190;
    // 0x60003F30: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_190:
    // 0x60003F34: b           L_60003F6C
    // 0x60003F38: nop

        goto L_60003F6C;
    // 0x60003F38: nop

L_60003F3C:
    // 0x60003F3C: addiu       $t7, $s0, -0xB
    ctx->r15 = ADD32(ctx->r16, -0XB);
L_60003F40:
    // 0x60003F40: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60003F44: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x60003F48: b           L_60003F6C
    // 0x60003F4C: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
        goto L_60003F6C;
    // 0x60003F4C: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x60003F50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_60003F54:
    // 0x60003F54: bne         $s6, $at, L_60003F6C
    if (ctx->r22 != ctx->r1) {
        // 0x60003F58: nop
    
            goto L_60003F6C;
    }
    // 0x60003F58: nop

    // 0x60003F5C: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60003F60: nop

    // 0x60003F64: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x60003F68: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
L_60003F6C:
    // 0x60003F6C: jal         0x60000B38
    // 0x60003F70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_custom_B38(rdram, ctx);
        goto after_191;
    // 0x60003F70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_191:
    // 0x60003F74: jal         0x60000B5C
    // 0x60003F78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_custom_B5C(rdram, ctx);
        goto after_192;
    // 0x60003F78: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_192:
    // 0x60003F7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003F80: bne         $s6, $at, L_60004010
    if (ctx->r22 != ctx->r1) {
        // 0x60003F84: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60004010;
    }
    // 0x60003F84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003F88: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x60003F8C: nop

    // 0x60003F90: addu        $s0, $t3, $s4
    ctx->r16 = ADD32(ctx->r11, ctx->r20);
    // 0x60003F94: jal         0x60002470
    // 0x60003F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_2470(rdram, ctx);
        goto after_193;
    // 0x60003F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_193:
    // 0x60003F9C: bne         $v0, $zero, L_60003FE0
    if (ctx->r2 != 0) {
        // 0x60003FA0: slti        $at, $s0, 0xB
        ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
            goto L_60003FE0;
    }
    // 0x60003FA0: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x60003FA4: beq         $at, $zero, L_60003FB4
    if (ctx->r1 == 0) {
        // 0x60003FA8: slti        $at, $s0, 0x7
        ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
            goto L_60003FB4;
    }
    // 0x60003FA8: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x60003FAC: beq         $at, $zero, L_600040E4
    if (ctx->r1 == 0) {
        // 0x60003FB0: nop
    
            goto L_600040E4;
    }
    // 0x60003FB0: nop

L_60003FB4:
    // 0x60003FB4: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x60003FB8: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60003FBC: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x60003FC0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60003FC4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x60003FC8: jal         0x600021CC
    // 0x60003FCC: addu        $a1, $t2, $s4
    ctx->r5 = ADD32(ctx->r10, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_194;
    // 0x60003FCC: addu        $a1, $t2, $s4
    ctx->r5 = ADD32(ctx->r10, ctx->r20);
    after_194:
    // 0x60003FD0: jal         0x60002320
    // 0x60003FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_195;
    // 0x60003FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_195:
    // 0x60003FD8: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x60003FDC: nop
    
            goto L_600040E4;
    }
    // 0x60003FDC: nop

L_60003FE0:
    // 0x60003FE0: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60003FE4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003FE8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x60003FEC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x60003FF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60003FF4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60003FF8: lw          $a0, 0x54C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54C8);
    // 0x60003FFC: jal         0x600005D4
    // 0x60004000: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_196;
    // 0x60004000: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_196:
    // 0x60004004: b           L_600040E4
    // 0x60004008: nop

        goto L_600040E4;
    // 0x60004008: nop

    // 0x6000400C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_60004010:
    // 0x60004010: bne         $s6, $at, L_60004074
    if (ctx->r22 != ctx->r1) {
        // 0x60004014: lw          $t1, 0x74($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X74);
            goto L_60004074;
    }
    // 0x60004014: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x60004018: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x6000401C: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x60004020: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60004024: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60004028: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x6000402C: jal         0x600021CC
    // 0x60004030: addu        $a1, $t3, $s4
    ctx->r5 = ADD32(ctx->r11, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_197;
    // 0x60004030: addu        $a1, $t3, $s4
    ctx->r5 = ADD32(ctx->r11, ctx->r20);
    after_197:
    // 0x60004034: jal         0x60002320
    // 0x60004038: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_198;
    // 0x60004038: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_198:
    // 0x6000403C: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x60004040: nop
    
            goto L_600040E4;
    }
    // 0x60004040: nop

    // 0x60004044: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60004048: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000404C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x60004050: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x60004054: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60004058: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x6000405C: lw          $a0, 0x54C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54C8);
    // 0x60004060: jal         0x600005D4
    // 0x60004064: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_199;
    // 0x60004064: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_199:
    // 0x60004068: b           L_600040E4
    // 0x6000406C: nop

        goto L_600040E4;
    // 0x6000406C: nop

    // 0x60004070: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
L_60004074:
    // 0x60004074: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60004078: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x6000407C: nop

    // 0x60004080: addu        $t7, $t2, $t8
    ctx->r15 = ADD32(ctx->r10, ctx->r24);
    // 0x60004084: jal         0x60000BB0
    // 0x60004088: addu        $a0, $t7, $s4
    ctx->r4 = ADD32(ctx->r15, ctx->r20);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_200;
    // 0x60004088: addu        $a0, $t7, $s4
    ctx->r4 = ADD32(ctx->r15, ctx->r20);
    after_200:
    // 0x6000408C: bne         $v0, $zero, L_600040C4
    if (ctx->r2 != 0) {
        // 0x60004090: lw          $t0, 0x118($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X118);
            goto L_600040C4;
    }
    // 0x60004090: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60004094: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x60004098: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x6000409C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x600040A0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600040A4: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x600040A8: jal         0x600021CC
    // 0x600040AC: addu        $a1, $t3, $s4
    ctx->r5 = ADD32(ctx->r11, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_201;
    // 0x600040AC: addu        $a1, $t3, $s4
    ctx->r5 = ADD32(ctx->r11, ctx->r20);
    after_201:
    // 0x600040B0: jal         0x60002320
    // 0x600040B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_202;
    // 0x600040B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_202:
    // 0x600040B8: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x600040BC: nop
    
            goto L_600040E4;
    }
    // 0x600040BC: nop

    // 0x600040C0: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
L_600040C4:
    // 0x600040C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600040C8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x600040CC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x600040D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600040D4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x600040D8: lw          $a0, 0x54C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54C8);
    // 0x600040DC: jal         0x600005D4
    // 0x600040E0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_203;
    // 0x600040E0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_203:
L_600040E4:
    // 0x600040E4: jal         0x60000850
    // 0x600040E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_custom_850(rdram, ctx);
        goto after_204;
    // 0x600040E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_204:
    // 0x600040EC: b           L_60004270
    // 0x600040F0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x600040F0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_600040F4:
    // 0x600040F4: jal         0x60000244
    // 0x600040F8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_custom_244(rdram, ctx);
        goto after_205;
    // 0x600040F8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_205:
    // 0x600040FC: b           L_60004270
    // 0x60004100: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x60004100: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_60004104:
    // 0x60004104: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x60004108: bne         $s0, $at, L_600041F8
    if (ctx->r16 != ctx->r1) {
        // 0x6000410C: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_600041F8;
    }
    // 0x6000410C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004110: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60004114: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60004118: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x6000411C: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x60004120: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x60004124: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x60004128: jal         0x600006B8
    // 0x6000412C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_206;
    // 0x6000412C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_206:
    // 0x60004130: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004134: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004138: jal         0x60000604
    // 0x6000413C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_207;
    // 0x6000413C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_207:
    // 0x60004140: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x60004144: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60004148: jal         0x6000064C
    // 0x6000414C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_64C(rdram, ctx);
        goto after_208;
    // 0x6000414C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_208:
    // 0x60004150: lui         $t7, 0xFF80
    ctx->r15 = S32(0XFF80 << 16);
    // 0x60004154: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x60004158: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x6000415C: ori         $t7, $t7, 0xE0
    ctx->r15 = ctx->r15 | 0XE0;
    // 0x60004160: swc1        $f24, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f24.u32l;
    // 0x60004164: swc1        $f26, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f26.u32l;
    // 0x60004168: sw          $t2, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r10;
    // 0x6000416C: sw          $t8, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r24;
    // 0x60004170: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x60004174: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004178: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000417C: addiu       $a0, $a0, 0x5580
    ctx->r4 = ADD32(ctx->r4, 0X5580);
    // 0x60004180: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60004184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004188: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000418C: jal         0x60000D30
    // 0x60004190: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    ovl_menu_custom_D30(rdram, ctx);
        goto after_209;
    // 0x60004190: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_209:
    // 0x60004194: jal         0x60000D3C
    // 0x60004198: nop

    ovl_menu_custom_D3C(rdram, ctx);
        goto after_210;
    // 0x60004198: nop

    after_210:
    // 0x6000419C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x600041A0: jal         0x60000550
    // 0x600041A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_menu_custom_550(rdram, ctx);
        goto after_211;
    // 0x600041A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_211:
    // 0x600041A8: jal         0x600006AC
    // 0x600041AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_212;
    // 0x600041AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_212:
    // 0x600041B0: jal         0x6000085C
    // 0x600041B4: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_213;
    // 0x600041B4: nop

    after_213:
    // 0x600041B8: bne         $s1, $zero, L_60004270
    if (ctx->r17 != 0) {
        // 0x600041BC: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x600041BC: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x600041C0: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x600041C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600041C8: bne         $s6, $at, L_600041E4
    if (ctx->r22 != ctx->r1) {
        // 0x600041CC: addu        $s0, $t4, $s4
        ctx->r16 = ADD32(ctx->r12, ctx->r20);
            goto L_600041E4;
    }
    // 0x600041CC: addu        $s0, $t4, $s4
    ctx->r16 = ADD32(ctx->r12, ctx->r20);
    // 0x600041D0: addiu       $t5, $s0, -0xB
    ctx->r13 = ADD32(ctx->r16, -0XB);
    // 0x600041D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x600041D8: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x600041DC: b           L_600041E8
    // 0x600041E0: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
        goto L_600041E8;
    // 0x600041E0: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
L_600041E4:
    // 0x600041E4: sw          $s0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r16;
L_600041E8:
    // 0x600041E8: jal         0x60000850
    // 0x600041EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_menu_custom_850(rdram, ctx);
        goto after_214;
    // 0x600041EC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_214:
    // 0x600041F0: b           L_60004270
    // 0x600041F4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x600041F4: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_600041F8:
    // 0x600041F8: bne         $v1, $zero, L_60004270
    if (ctx->r3 != 0) {
        // 0x600041FC: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x600041FC: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x60004200: jal         0x6000085C
    // 0x60004204: nop

    ovl_menu_custom_85C(rdram, ctx);
        goto after_215;
    // 0x60004204: nop

    after_215:
    // 0x60004208: b           L_60003AC0
    // 0x6000420C: nop

        goto L_60003AC0;
    // 0x6000420C: nop

L_60004210:
    // 0x60004210: andi        $t3, $v1, 0x4000
    ctx->r11 = ctx->r3 & 0X4000;
    // 0x60004214: beq         $t3, $zero, L_60004270
    if (ctx->r11 == 0) {
        // 0x60004218: lw          $t2, 0xF0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XF0);
            goto L_60004270;
    }
    // 0x60004218: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x6000421C: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x60004220: nop

    // 0x60004224: beq         $t0, $zero, L_60004258
    if (ctx->r8 == 0) {
        // 0x60004228: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_60004258;
    }
    // 0x60004228: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x6000422C: sw          $t9, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r25;
    // 0x60004230: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60004234: jal         0x60000244
    // 0x60004238: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    ovl_menu_custom_244(rdram, ctx);
        goto after_216;
    // 0x60004238: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    after_216:
    // 0x6000423C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004240: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    // 0x60004244: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004248: jal         0x60001C68
    // 0x6000424C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_217;
    // 0x6000424C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_217:
    // 0x60004250: b           L_60004270
    // 0x60004254: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
        goto L_60004270;
    // 0x60004254: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_60004258:
    // 0x60004258: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000425C: beq         $s6, $at, L_60004A50
    if (ctx->r22 == ctx->r1) {
        // 0x60004260: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_60004A50;
    }
    // 0x60004260: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60004264: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x60004268: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
L_6000426C:
    // 0x6000426C: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
L_60004270:
    // 0x60004270: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x60004274: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x60004278: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x6000427C: addu        $v0, $t8, $t7
    ctx->r2 = ADD32(ctx->r24, ctx->r15);
    // 0x60004280: beq         $t4, $zero, L_600045B8
    if (ctx->r12 == 0) {
        // 0x60004284: sw          $v0, 0x118($sp)
        MEM_W(0X118, ctx->r29) = ctx->r2;
            goto L_600045B8;
    }
    // 0x60004284: sw          $v0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r2;
    // 0x60004288: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x6000428C: lw          $t5, 0x5848($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5848);
    // 0x60004290: nop

    // 0x60004294: beq         $v0, $t5, L_600042F0
    if (ctx->r2 == ctx->r13) {
        // 0x60004298: sll         $t3, $t2, 2
        ctx->r11 = S32(ctx->r10 << 2);
            goto L_600042F0;
    }
    // 0x60004298: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x6000429C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x600042A0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x600042A4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x600042A8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x600042AC: addiu       $t0, $t3, 0x32
    ctx->r8 = ADD32(ctx->r11, 0X32);
    // 0x600042B0: mtc1        $t0, $f28
    ctx->f28.u32l = ctx->r8;
    // 0x600042B4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x600042B8: cvt.s.w     $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = CVT_S_W(ctx->f28.u32l);
    // 0x600042BC: addiu       $t1, $t9, 0x5E
    ctx->r9 = ADD32(ctx->r25, 0X5E);
    // 0x600042C0: mtc1        $t1, $f28
    ctx->f28.u32l = ctx->r9;
    // 0x600042C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600042C8: cvt.s.w     $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    ctx->f22.fl = CVT_S_W(ctx->f28.u32l);
    // 0x600042CC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x600042D0: jal         0x60000244
    // 0x600042D4: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    ovl_menu_custom_244(rdram, ctx);
        goto after_218;
    // 0x600042D4: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    after_218:
    // 0x600042D8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042DC: lw          $a0, 0x54B4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54B4);
    // 0x600042E0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x600042E4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x600042E8: jal         0x6000055C
    // 0x600042EC: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_219;
    // 0x600042EC: nop

    after_219:
L_600042F0:
    // 0x600042F0: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x600042F4: nop

    // 0x600042F8: beq         $t8, $s4, L_600048F4
    if (ctx->r24 == ctx->r20) {
        // 0x600042FC: lui         $t4, 0x6000
        ctx->r12 = S32(0X6000 << 16);
            goto L_600048F4;
    }
    // 0x600042FC: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60004300: addiu       $t4, $t4, 0x555C
    ctx->r12 = ADD32(ctx->r12, 0X555C);
    // 0x60004304: sll         $s2, $s6, 2
    ctx->r18 = S32(ctx->r22 << 2);
    // 0x60004308: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x6000430C: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x60004310: addu        $s5, $s2, $t4
    ctx->r21 = ADD32(ctx->r18, ctx->r12);
    // 0x60004314: jal         0x60000BEC
    // 0x60004318: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_menu_custom_BEC(rdram, ctx);
        goto after_220;
    // 0x60004318: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_220:
    // 0x6000431C: jal         0x60000244
    // 0x60004320: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_custom_244(rdram, ctx);
        goto after_221;
    // 0x60004320: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_221:
    // 0x60004324: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x60004328: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x6000432C: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60004330: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x60004334: lw          $t3, 0x555C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X555C);
    // 0x60004338: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x6000433C: nop

    // 0x60004340: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x60004344: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x60004348: bne         $at, $zero, L_6000435C
    if (ctx->r1 != 0) {
        // 0x6000434C: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_6000435C;
    }
    // 0x6000434C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x60004350: b           L_6000435C
    // 0x60004354: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_6000435C;
    // 0x60004354: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004358: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_6000435C:
    // 0x6000435C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004360: jal         0x60001BD0
    // 0x60004364: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_222;
    // 0x60004364: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    after_222:
    // 0x60004368: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x6000436C: nop

    // 0x60004370: subu        $a0, $t7, $s4
    ctx->r4 = SUB32(ctx->r15, ctx->r20);
    // 0x60004374: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x60004378: bne         $at, $zero, L_6000438C
    if (ctx->r1 != 0) {
        // 0x6000437C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_6000438C;
    }
    // 0x6000437C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x60004380: b           L_6000438C
    // 0x60004384: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_6000438C;
    // 0x60004384: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004388: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_6000438C:
    // 0x6000438C: blez        $a1, L_60004400
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60004390: lui         $t8, 0x6000
        ctx->r24 = S32(0X6000 << 16);
            goto L_60004400;
    }
    // 0x60004390: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60004394: addu        $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x60004398: lw          $t8, 0x5738($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5738);
    // 0x6000439C: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x600043A0: addu        $t9, $t9, $s3
    ctx->r25 = ADD32(ctx->r25, ctx->r19);
    // 0x600043A4: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600043A8: sll         $t4, $s3, 2
    ctx->r12 = S32(ctx->r19 << 2);
    // 0x600043AC: addiu       $t1, $t1, 0x54BC
    ctx->r9 = ADD32(ctx->r9, 0X54BC);
    // 0x600043B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600043B4: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x600043B8: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x600043BC: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x600043C0: addu        $s1, $t9, $t1
    ctx->r17 = ADD32(ctx->r25, ctx->r9);
L_600043C4:
    // 0x600043C4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x600043C8: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x600043CC: lh          $t3, 0x6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X6);
    // 0x600043D0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600043D4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x600043D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600043DC: bne         $at, $zero, L_600043EC
    if (ctx->r1 != 0) {
        // 0x600043E0: sw          $t3, -0x14($s1)
        MEM_W(-0X14, ctx->r17) = ctx->r11;
            goto L_600043EC;
    }
    // 0x600043E0: sw          $t3, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r11;
    // 0x600043E4: b           L_600043F0
    // 0x600043E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600043F0;
    // 0x600043E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_600043EC:
    // 0x600043EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_600043F0:
    // 0x600043F0: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x600043F4: bne         $at, $zero, L_600043C4
    if (ctx->r1 != 0) {
        // 0x600043F8: nop
    
            goto L_600043C4;
    }
    // 0x600043F8: nop

    // 0x600043FC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60004400:
    // 0x60004400: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x60004404: bne         $at, $zero, L_60004418
    if (ctx->r1 != 0) {
        // 0x60004408: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_60004418;
    }
    // 0x60004408: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x6000440C: b           L_60004418
    // 0x60004410: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_60004418;
    // 0x60004410: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004414: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_60004418:
    // 0x60004418: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000441C: jal         0x60001A84
    // 0x60004420: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_223;
    // 0x60004420: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    after_223:
    // 0x60004424: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x60004428: nop

    // 0x6000442C: subu        $a0, $t0, $s4
    ctx->r4 = SUB32(ctx->r8, ctx->r20);
    // 0x60004430: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x60004434: bne         $at, $zero, L_60004448
    if (ctx->r1 != 0) {
        // 0x60004438: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_60004448;
    }
    // 0x60004438: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x6000443C: b           L_60004448
    // 0x60004440: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_60004448;
    // 0x60004440: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004444: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_60004448:
    // 0x60004448: blez        $a1, L_600048F4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x6000444C: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_600048F4;
    }
    // 0x6000444C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x60004450: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x60004454: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60004458: addiu       $t9, $t9, 0x54BC
    ctx->r25 = ADD32(ctx->r25, 0X54BC);
    // 0x6000445C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60004460: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
L_60004464:
    // 0x60004464: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004468: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    // 0x6000446C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60004470: jal         0x60001C68
    // 0x60004474: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_224;
    // 0x60004474: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_224:
    // 0x60004478: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x6000447C: jal         0x600005A4
    // 0x60004480: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_225;
    // 0x60004480: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_225:
    // 0x60004484: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004488: bne         $s6, $at, L_600044E8
    if (ctx->r22 != ctx->r1) {
        // 0x6000448C: addu        $s0, $s3, $s4
        ctx->r16 = ADD32(ctx->r19, ctx->r20);
            goto L_600044E8;
    }
    // 0x6000448C: addu        $s0, $s3, $s4
    ctx->r16 = ADD32(ctx->r19, ctx->r20);
    // 0x60004490: jal         0x60002470
    // 0x60004494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_custom_2470(rdram, ctx);
        goto after_226;
    // 0x60004494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_226:
    // 0x60004498: bne         $v0, $zero, L_600044D4
    if (ctx->r2 != 0) {
        // 0x6000449C: slti        $at, $s0, 0xB
        ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
            goto L_600044D4;
    }
    // 0x6000449C: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x600044A0: beq         $at, $zero, L_600044AC
    if (ctx->r1 == 0) {
        // 0x600044A4: slti        $at, $s0, 0x7
        ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
            goto L_600044AC;
    }
    // 0x600044A4: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x600044A8: beq         $at, $zero, L_60004580
    if (ctx->r1 == 0) {
        // 0x600044AC: addu        $t1, $s7, $s2
        ctx->r9 = ADD32(ctx->r23, ctx->r18);
            goto L_60004580;
    }
L_600044AC:
    // 0x600044AC: addu        $t1, $s7, $s2
    ctx->r9 = ADD32(ctx->r23, ctx->r18);
    // 0x600044B0: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x600044B4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600044B8: addu        $t4, $t8, $s3
    ctx->r12 = ADD32(ctx->r24, ctx->r19);
    // 0x600044BC: jal         0x600021CC
    // 0x600044C0: addu        $a1, $t4, $s4
    ctx->r5 = ADD32(ctx->r12, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_227;
    // 0x600044C0: addu        $a1, $t4, $s4
    ctx->r5 = ADD32(ctx->r12, ctx->r20);
    after_227:
    // 0x600044C4: jal         0x60002320
    // 0x600044C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_228;
    // 0x600044C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_228:
    // 0x600044CC: beq         $v0, $zero, L_60004580
    if (ctx->r2 == 0) {
        // 0x600044D0: nop
    
            goto L_60004580;
    }
    // 0x600044D0: nop

L_600044D4:
    // 0x600044D4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600044D8: jal         0x600005D4
    // 0x600044DC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_229;
    // 0x600044DC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_229:
    // 0x600044E0: b           L_60004584
    // 0x600044E4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
        goto L_60004584;
    // 0x600044E4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_600044E8:
    // 0x600044E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600044EC: bne         $s6, $at, L_6000452C
    if (ctx->r22 != ctx->r1) {
        // 0x600044F0: addu        $t5, $s7, $s2
        ctx->r13 = ADD32(ctx->r23, ctx->r18);
            goto L_6000452C;
    }
    // 0x600044F0: addu        $t5, $s7, $s2
    ctx->r13 = ADD32(ctx->r23, ctx->r18);
    // 0x600044F4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x600044F8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600044FC: addu        $t2, $t6, $s3
    ctx->r10 = ADD32(ctx->r14, ctx->r19);
    // 0x60004500: jal         0x600021CC
    // 0x60004504: addu        $a1, $t2, $s4
    ctx->r5 = ADD32(ctx->r10, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_230;
    // 0x60004504: addu        $a1, $t2, $s4
    ctx->r5 = ADD32(ctx->r10, ctx->r20);
    after_230:
    // 0x60004508: jal         0x60002320
    // 0x6000450C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_231;
    // 0x6000450C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_231:
    // 0x60004510: beq         $v0, $zero, L_60004580
    if (ctx->r2 == 0) {
        // 0x60004514: nop
    
            goto L_60004580;
    }
    // 0x60004514: nop

    // 0x60004518: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x6000451C: jal         0x600005D4
    // 0x60004520: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_232;
    // 0x60004520: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_232:
    // 0x60004524: b           L_60004584
    // 0x60004528: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
        goto L_60004584;
    // 0x60004528: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_6000452C:
    // 0x6000452C: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60004530: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x60004534: lw          $t3, 0x5574($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5574);
    // 0x60004538: nop

    // 0x6000453C: addu        $t0, $t3, $s3
    ctx->r8 = ADD32(ctx->r11, ctx->r19);
    // 0x60004540: jal         0x60000BB0
    // 0x60004544: addu        $a0, $t0, $s4
    ctx->r4 = ADD32(ctx->r8, ctx->r20);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_233;
    // 0x60004544: addu        $a0, $t0, $s4
    ctx->r4 = ADD32(ctx->r8, ctx->r20);
    after_233:
    // 0x60004548: bne         $v0, $zero, L_60004574
    if (ctx->r2 != 0) {
        // 0x6000454C: addu        $t7, $s7, $s2
        ctx->r15 = ADD32(ctx->r23, ctx->r18);
            goto L_60004574;
    }
    // 0x6000454C: addu        $t7, $s7, $s2
    ctx->r15 = ADD32(ctx->r23, ctx->r18);
    // 0x60004550: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x60004554: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60004558: addu        $t1, $t9, $s3
    ctx->r9 = ADD32(ctx->r25, ctx->r19);
    // 0x6000455C: jal         0x600021CC
    // 0x60004560: addu        $a1, $t1, $s4
    ctx->r5 = ADD32(ctx->r9, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_234;
    // 0x60004560: addu        $a1, $t1, $s4
    ctx->r5 = ADD32(ctx->r9, ctx->r20);
    after_234:
    // 0x60004564: jal         0x60002320
    // 0x60004568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_235;
    // 0x60004568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_235:
    // 0x6000456C: beq         $v0, $zero, L_60004580
    if (ctx->r2 == 0) {
        // 0x60004570: nop
    
            goto L_60004580;
    }
    // 0x60004570: nop

L_60004574:
    // 0x60004574: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60004578: jal         0x600005D4
    // 0x6000457C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_236;
    // 0x6000457C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_236:
L_60004580:
    // 0x60004580: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
L_60004584:
    // 0x60004584: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60004588: subu        $a0, $t8, $s4
    ctx->r4 = SUB32(ctx->r24, ctx->r20);
    // 0x6000458C: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x60004590: bne         $at, $zero, L_600045A0
    if (ctx->r1 != 0) {
        // 0x60004594: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_600045A0;
    }
    // 0x60004594: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x60004598: b           L_600045A4
    // 0x6000459C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600045A4;
    // 0x6000459C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_600045A0:
    // 0x600045A0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_600045A4:
    // 0x600045A4: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x600045A8: bne         $at, $zero, L_60004464
    if (ctx->r1 != 0) {
        // 0x600045AC: nop
    
            goto L_60004464;
    }
    // 0x600045AC: nop

    // 0x600045B0: b           L_600048F8
    // 0x600045B4: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
        goto L_600048F8;
    // 0x600045B4: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_600045B8:
    // 0x600045B8: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x600045BC: nop

    // 0x600045C0: beq         $t4, $s6, L_600048F4
    if (ctx->r12 == ctx->r22) {
        // 0x600045C4: addiu       $t5, $zero, 0x32
        ctx->r13 = ADD32(0, 0X32);
            goto L_600048F4;
    }
    // 0x600045C4: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x600045C8: mtc1        $t5, $f28
    ctx->f28.u32l = ctx->r13;
    // 0x600045CC: addiu       $t6, $zero, 0x5E
    ctx->r14 = ADD32(0, 0X5E);
    // 0x600045D0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x600045D4: cvt.s.w     $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = CVT_S_W(ctx->f28.u32l);
    // 0x600045D8: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
    // 0x600045DC: addu        $t2, $t2, $s6
    ctx->r10 = ADD32(ctx->r10, ctx->r22);
    // 0x600045E0: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x600045E4: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x600045E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x600045EC: addiu       $t3, $t3, 0x53B8
    ctx->r11 = ADD32(ctx->r11, 0X53B8);
    // 0x600045F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x600045F4: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x600045F8: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x600045FC: jal         0x60000BEC
    // 0x60004600: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    ovl_menu_custom_BEC(rdram, ctx);
        goto after_237;
    // 0x60004600: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    after_237:
    // 0x60004604: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004608: lw          $a0, 0x54B4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X54B4);
    // 0x6000460C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60004610: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60004614: jal         0x6000055C
    // 0x60004618: nop

    ovl_menu_custom_55C(rdram, ctx);
        goto after_238;
    // 0x60004618: nop

    after_238:
    // 0x6000461C: andi        $t0, $s5, 0x4000
    ctx->r8 = ctx->r21 & 0X4000;
    // 0x60004620: beq         $t0, $zero, L_60004638
    if (ctx->r8 == 0) {
        // 0x60004624: nop
    
            goto L_60004638;
    }
    // 0x60004624: nop

    // 0x60004628: jal         0x60000244
    // 0x6000462C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_custom_244(rdram, ctx);
        goto after_239;
    // 0x6000462C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_239:
    // 0x60004630: b           L_60004644
    // 0x60004634: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
        goto L_60004644;
    // 0x60004634: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_60004638:
    // 0x60004638: jal         0x60000244
    // 0x6000463C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_custom_244(rdram, ctx);
        goto after_240;
    // 0x6000463C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_240:
    // 0x60004640: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_60004644:
    // 0x60004644: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004648: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x6000464C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x60004650: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60004654: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60004658: lw          $a0, 0x543C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X543C);
    // 0x6000465C: jal         0x600005D4
    // 0x60004660: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_241;
    // 0x60004660: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_241:
    // 0x60004664: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x60004668: jal         0x600005D4
    // 0x6000466C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_242;
    // 0x6000466C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_242:
    // 0x60004670: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
    // 0x60004674: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004678: beq         $t1, $at, L_600046BC
    if (ctx->r9 == ctx->r1) {
        // 0x6000467C: sll         $t8, $t1, 2
        ctx->r24 = S32(ctx->r9 << 2);
            goto L_600046BC;
    }
    // 0x6000467C: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x60004680: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60004684: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x60004688: lw          $t4, 0x555C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X555C);
    // 0x6000468C: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x60004690: nop

    // 0x60004694: subu        $v1, $t4, $t5
    ctx->r3 = SUB32(ctx->r12, ctx->r13);
    // 0x60004698: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x6000469C: bne         $at, $zero, L_600046B0
    if (ctx->r1 != 0) {
        // 0x600046A0: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_600046B0;
    }
    // 0x600046A0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x600046A4: b           L_600046B0
    // 0x600046A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600046B0;
    // 0x600046A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600046AC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_600046B0:
    // 0x600046B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600046B4: jal         0x60001BD0
    // 0x600046B8: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_243;
    // 0x600046B8: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    after_243:
L_600046BC:
    // 0x600046BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600046C0: beq         $s6, $at, L_600048F4
    if (ctx->r22 == ctx->r1) {
        // 0x600046C4: lui         $t6, 0x6000
        ctx->r14 = S32(0X6000 << 16);
            goto L_600048F4;
    }
    // 0x600046C4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600046C8: addiu       $t6, $t6, 0x555C
    ctx->r14 = ADD32(ctx->r14, 0X555C);
    // 0x600046CC: sll         $s2, $s6, 2
    ctx->r18 = S32(ctx->r22 << 2);
    // 0x600046D0: addu        $s5, $s2, $t6
    ctx->r21 = ADD32(ctx->r18, ctx->r14);
    // 0x600046D4: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x600046D8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600046DC: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x600046E0: bne         $at, $zero, L_600046F4
    if (ctx->r1 != 0) {
        // 0x600046E4: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_600046F4;
    }
    // 0x600046E4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x600046E8: b           L_600046F4
    // 0x600046EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600046F4;
    // 0x600046EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600046F0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_600046F4:
    // 0x600046F4: blez        $a1, L_60004760
    if (SIGNED(ctx->r5) <= 0) {
        // 0x600046F8: lui         $t0, 0x6000
        ctx->r8 = S32(0X6000 << 16);
            goto L_60004760;
    }
    // 0x600046F8: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600046FC: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x60004700: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x60004704: lw          $t0, 0x5738($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5738);
    // 0x60004708: addu        $t2, $t2, $s3
    ctx->r10 = ADD32(ctx->r10, ctx->r19);
    // 0x6000470C: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60004710: addiu       $t3, $t3, 0x54BC
    ctx->r11 = ADD32(ctx->r11, 0X54BC);
    // 0x60004714: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004718: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x6000471C: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x60004720: addu        $v0, $t0, $t7
    ctx->r2 = ADD32(ctx->r8, ctx->r15);
L_60004724:
    // 0x60004724: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x60004728: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x6000472C: lh          $t1, 0x6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X6);
    // 0x60004730: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60004734: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x60004738: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x6000473C: bne         $at, $zero, L_6000474C
    if (ctx->r1 != 0) {
        // 0x60004740: sw          $t1, -0x14($s1)
        MEM_W(-0X14, ctx->r17) = ctx->r9;
            goto L_6000474C;
    }
    // 0x60004740: sw          $t1, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r9;
    // 0x60004744: b           L_60004750
    // 0x60004748: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_60004750;
    // 0x60004748: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_6000474C:
    // 0x6000474C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_60004750:
    // 0x60004750: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x60004754: bne         $at, $zero, L_60004724
    if (ctx->r1 != 0) {
        // 0x60004758: nop
    
            goto L_60004724;
    }
    // 0x60004758: nop

    // 0x6000475C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60004760:
    // 0x60004760: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x60004764: bne         $at, $zero, L_60004778
    if (ctx->r1 != 0) {
        // 0x60004768: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_60004778;
    }
    // 0x60004768: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x6000476C: b           L_60004778
    // 0x60004770: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_60004778;
    // 0x60004770: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004774: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_60004778:
    // 0x60004778: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000477C: jal         0x60001A84
    // 0x60004780: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    ovl_menu_custom_1A84(rdram, ctx);
        goto after_244;
    // 0x60004780: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    after_244:
    // 0x60004784: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x60004788: nop

    // 0x6000478C: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x60004790: bne         $at, $zero, L_600047A4
    if (ctx->r1 != 0) {
        // 0x60004794: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_600047A4;
    }
    // 0x60004794: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x60004798: b           L_600047A4
    // 0x6000479C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600047A4;
    // 0x6000479C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600047A0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_600047A4:
    // 0x600047A4: blez        $a1, L_600048F4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x600047A8: sll         $t8, $s3, 2
        ctx->r24 = S32(ctx->r19 << 2);
            goto L_600048F4;
    }
    // 0x600047A8: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x600047AC: addu        $t8, $t8, $s3
    ctx->r24 = ADD32(ctx->r24, ctx->r19);
    // 0x600047B0: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x600047B4: addiu       $t4, $t4, 0x54BC
    ctx->r12 = ADD32(ctx->r12, 0X54BC);
    // 0x600047B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x600047BC: addu        $s1, $t8, $t4
    ctx->r17 = ADD32(ctx->r24, ctx->r12);
L_600047C0:
    // 0x600047C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600047C4: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    // 0x600047C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x600047CC: jal         0x60001C68
    // 0x600047D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_custom_1C68(rdram, ctx);
        goto after_245;
    // 0x600047D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_245:
    // 0x600047D4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600047D8: jal         0x600005A4
    // 0x600047DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_custom_5A4(rdram, ctx);
        goto after_246;
    // 0x600047DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_246:
    // 0x600047E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600047E4: bne         $s6, $at, L_60004840
    if (ctx->r22 != ctx->r1) {
        // 0x600047E8: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_60004840;
    }
    // 0x600047E8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x600047EC: jal         0x60002470
    // 0x600047F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_menu_custom_2470(rdram, ctx);
        goto after_247;
    // 0x600047F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_247:
    // 0x600047F4: bne         $v0, $zero, L_6000482C
    if (ctx->r2 != 0) {
        // 0x600047F8: slti        $at, $s0, 0xB
        ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
            goto L_6000482C;
    }
    // 0x600047F8: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x600047FC: beq         $at, $zero, L_60004808
    if (ctx->r1 == 0) {
        // 0x60004800: slti        $at, $s0, 0x7
        ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
            goto L_60004808;
    }
    // 0x60004800: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x60004804: beq         $at, $zero, L_600048C8
    if (ctx->r1 == 0) {
        // 0x60004808: addu        $t5, $s7, $s2
        ctx->r13 = ADD32(ctx->r23, ctx->r18);
            goto L_600048C8;
    }
L_60004808:
    // 0x60004808: addu        $t5, $s7, $s2
    ctx->r13 = ADD32(ctx->r23, ctx->r18);
    // 0x6000480C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x60004810: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60004814: jal         0x600021CC
    // 0x60004818: addu        $a1, $t6, $s3
    ctx->r5 = ADD32(ctx->r14, ctx->r19);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_248;
    // 0x60004818: addu        $a1, $t6, $s3
    ctx->r5 = ADD32(ctx->r14, ctx->r19);
    after_248:
    // 0x6000481C: jal         0x60002320
    // 0x60004820: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_249;
    // 0x60004820: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_249:
    // 0x60004824: beq         $v0, $zero, L_600048C8
    if (ctx->r2 == 0) {
        // 0x60004828: nop
    
            goto L_600048C8;
    }
    // 0x60004828: nop

L_6000482C:
    // 0x6000482C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60004830: jal         0x600005D4
    // 0x60004834: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_250;
    // 0x60004834: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_250:
    // 0x60004838: b           L_600048CC
    // 0x6000483C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
        goto L_600048CC;
    // 0x6000483C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
L_60004840:
    // 0x60004840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004844: bne         $s6, $at, L_60004880
    if (ctx->r22 != ctx->r1) {
        // 0x60004848: addu        $t2, $s7, $s2
        ctx->r10 = ADD32(ctx->r23, ctx->r18);
            goto L_60004880;
    }
    // 0x60004848: addu        $t2, $s7, $s2
    ctx->r10 = ADD32(ctx->r23, ctx->r18);
    // 0x6000484C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x60004850: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60004854: jal         0x600021CC
    // 0x60004858: addu        $a1, $t3, $s3
    ctx->r5 = ADD32(ctx->r11, ctx->r19);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_251;
    // 0x60004858: addu        $a1, $t3, $s3
    ctx->r5 = ADD32(ctx->r11, ctx->r19);
    after_251:
    // 0x6000485C: jal         0x60002320
    // 0x60004860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_252;
    // 0x60004860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_252:
    // 0x60004864: beq         $v0, $zero, L_600048C8
    if (ctx->r2 == 0) {
        // 0x60004868: nop
    
            goto L_600048C8;
    }
    // 0x60004868: nop

    // 0x6000486C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60004870: jal         0x600005D4
    // 0x60004874: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_253;
    // 0x60004874: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_253:
    // 0x60004878: b           L_600048CC
    // 0x6000487C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
        goto L_600048CC;
    // 0x6000487C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
L_60004880:
    // 0x60004880: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60004884: addu        $t0, $t0, $s2
    ctx->r8 = ADD32(ctx->r8, ctx->r18);
    // 0x60004888: lw          $t0, 0x5574($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5574);
    // 0x6000488C: jal         0x60000BB0
    // 0x60004890: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    ovl_menu_custom_BB0(rdram, ctx);
        goto after_254;
    // 0x60004890: addu        $a0, $t0, $s3
    ctx->r4 = ADD32(ctx->r8, ctx->r19);
    after_254:
    // 0x60004894: bne         $v0, $zero, L_600048BC
    if (ctx->r2 != 0) {
        // 0x60004898: addu        $t7, $s7, $s2
        ctx->r15 = ADD32(ctx->r23, ctx->r18);
            goto L_600048BC;
    }
    // 0x60004898: addu        $t7, $s7, $s2
    ctx->r15 = ADD32(ctx->r23, ctx->r18);
    // 0x6000489C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x600048A0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600048A4: jal         0x600021CC
    // 0x600048A8: addu        $a1, $t9, $s3
    ctx->r5 = ADD32(ctx->r25, ctx->r19);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_255;
    // 0x600048A8: addu        $a1, $t9, $s3
    ctx->r5 = ADD32(ctx->r25, ctx->r19);
    after_255:
    // 0x600048AC: jal         0x60002320
    // 0x600048B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_256;
    // 0x600048B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_256:
    // 0x600048B4: beq         $v0, $zero, L_600048C8
    if (ctx->r2 == 0) {
        // 0x600048B8: nop
    
            goto L_600048C8;
    }
    // 0x600048B8: nop

L_600048BC:
    // 0x600048BC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600048C0: jal         0x600005D4
    // 0x600048C4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    ovl_menu_custom_5D4(rdram, ctx);
        goto after_257;
    // 0x600048C4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_257:
L_600048C8:
    // 0x600048C8: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
L_600048CC:
    // 0x600048CC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600048D0: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x600048D4: bne         $at, $zero, L_600048E4
    if (ctx->r1 != 0) {
        // 0x600048D8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_600048E4;
    }
    // 0x600048D8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x600048DC: b           L_600048E8
    // 0x600048E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_600048E8;
    // 0x600048E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_600048E4:
    // 0x600048E4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_600048E8:
    // 0x600048E8: slt         $at, $s3, $a1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x600048EC: bne         $at, $zero, L_600047C0
    if (ctx->r1 != 0) {
        // 0x600048F0: nop
    
            goto L_600047C0;
    }
    // 0x600048F0: nop

L_600048F4:
    // 0x600048F4: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_600048F8:
    // 0x600048F8: nop

    // 0x600048FC: beq         $t1, $zero, L_600049DC
    if (ctx->r9 == 0) {
        // 0x60004900: lw          $t8, 0xC0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC0);
            goto L_600049DC;
    }
    // 0x60004900: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x60004904: lw          $t8, 0x124($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X124);
    // 0x60004908: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x6000490C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004910: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x60004914: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x60004918: beq         $t4, $zero, L_600049B4
    if (ctx->r12 == 0) {
        // 0x6000491C: sw          $t8, 0x56AC($at)
        MEM_W(0X56AC, ctx->r1) = ctx->r24;
            goto L_600049B4;
    }
    // 0x6000491C: sw          $t8, 0x56AC($at)
    MEM_W(0X56AC, ctx->r1) = ctx->r24;
    // 0x60004920: sll         $t5, $s6, 2
    ctx->r13 = S32(ctx->r22 << 2);
    // 0x60004924: addu        $t6, $s7, $t5
    ctx->r14 = ADD32(ctx->r23, ctx->r13);
    // 0x60004928: lw          $t2, 0x0($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X0);
    // 0x6000492C: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x60004930: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x60004934: addu        $t0, $t2, $t3
    ctx->r8 = ADD32(ctx->r10, ctx->r11);
    // 0x60004938: jal         0x600021CC
    // 0x6000493C: addu        $a1, $t0, $s4
    ctx->r5 = ADD32(ctx->r8, ctx->r20);
    ovl_menu_custom_21CC(rdram, ctx);
        goto after_258;
    // 0x6000493C: addu        $a1, $t0, $s4
    ctx->r5 = ADD32(ctx->r8, ctx->r20);
    after_258:
    // 0x60004940: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004944: jal         0x60002320
    // 0x60004948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_custom_2320(rdram, ctx);
        goto after_259;
    // 0x60004948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_259:
    // 0x6000494C: beq         $v0, $zero, L_6000497C
    if (ctx->r2 == 0) {
        // 0x60004950: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_6000497C;
    }
    // 0x60004950: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004954: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60004958: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x6000495C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60004960: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60004964: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60004968: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x6000496C: jal         0x600006B8
    // 0x60004970: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_260;
    // 0x60004970: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_260:
    // 0x60004974: b           L_600049A8
    // 0x60004978: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
        goto L_600049A8;
    // 0x60004978: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
L_6000497C:
    // 0x6000497C: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x60004980: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004984: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004988: sw          $t9, 0x584C($at)
    MEM_W(0X584C, ctx->r1) = ctx->r25;
    // 0x6000498C: addiu       $a2, $a2, 0x584C
    ctx->r6 = ADD32(ctx->r6, 0X584C);
    // 0x60004990: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60004994: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60004998: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x6000499C: jal         0x600006A0
    // 0x600049A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_custom_6A0(rdram, ctx);
        goto after_261;
    // 0x600049A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_261:
    // 0x600049A4: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
L_600049A8:
    // 0x600049A8: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x600049AC: jal         0x60000604
    // 0x600049B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_262;
    // 0x600049B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_262:
L_600049B4:
    // 0x600049B4: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600049B8: lw          $t1, 0x56AC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X56AC);
    // 0x600049BC: nop

    // 0x600049C0: beq         $t1, $zero, L_600049DC
    if (ctx->r9 == 0) {
        // 0x600049C4: lw          $t8, 0xC0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC0);
            goto L_600049DC;
    }
    // 0x600049C4: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x600049C8: jal         0x600006AC
    // 0x600049CC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    ovl_menu_custom_6AC(rdram, ctx);
        goto after_263;
    // 0x600049CC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_263:
    // 0x600049D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600049D4: sw          $zero, 0x56AC($at)
    MEM_W(0X56AC, ctx->r1) = 0;
    // 0x600049D8: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
L_600049DC:
    // 0x600049DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600049E0: beq         $t8, $at, L_60004A38
    if (ctx->r24 == ctx->r1) {
        // 0x600049E4: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_60004A38;
    }
    // 0x600049E4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x600049E8: lw          $t4, 0xE0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE0);
    // 0x600049EC: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600049F0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x600049F4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x600049F8: lw          $t6, 0x555C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X555C);
    // 0x600049FC: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x60004A00: nop

    // 0x60004A04: subu        $v1, $t6, $t2
    ctx->r3 = SUB32(ctx->r14, ctx->r10);
    // 0x60004A08: slti        $at, $v1, 0x9
    ctx->r1 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x60004A0C: bne         $at, $zero, L_60004A20
    if (ctx->r1 != 0) {
        // 0x60004A10: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_60004A20;
    }
    // 0x60004A10: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x60004A14: b           L_60004A20
    // 0x60004A18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_60004A20;
    // 0x60004A18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004A1C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_60004A20:
    // 0x60004A20: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004A24: jal         0x60001BD0
    // 0x60004A28: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_264;
    // 0x60004A28: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    after_264:
    // 0x60004A2C: b           L_60004A54
    // 0x60004A30: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
        goto L_60004A54;
    // 0x60004A30: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x60004A34: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_60004A38:
    // 0x60004A38: sw          $t3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r11;
    // 0x60004A3C: sw          $s6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r22;
    // 0x60004A40: jal         0x6000085C
    // 0x60004A44: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    ovl_menu_custom_85C(rdram, ctx);
        goto after_265;
    // 0x60004A44: sw          $s4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r20;
    after_265:
    // 0x60004A48: b           L_6000368C
    // 0x60004A4C: nop

        goto L_6000368C;
    // 0x60004A4C: nop

L_60004A50:
    // 0x60004A50: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
L_60004A54:
    // 0x60004A54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60004A58: bne         $t0, $at, L_60004AB4
    if (ctx->r8 != ctx->r1) {
        // 0x60004A5C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60004AB4;
    }
    // 0x60004A5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004A60: jal         0x60000244
    // 0x60004A64: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_custom_244(rdram, ctx);
        goto after_266;
    // 0x60004A64: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_266:
    // 0x60004A68: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004A6C: lw          $a2, 0x5730($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5730);
    // 0x60004A70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60004A74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60004A78: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x60004A7C: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x60004A80: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x60004A84: jal         0x600006B8
    // 0x60004A88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_custom_6B8(rdram, ctx);
        goto after_267;
    // 0x60004A88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_267:
    // 0x60004A8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004A94: jal         0x60000604
    // 0x60004A98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_custom_604(rdram, ctx);
        goto after_268;
    // 0x60004A98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_268:
    // 0x60004A9C: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x60004AA0: jal         0x600006AC
    // 0x60004AA4: nop

    ovl_menu_custom_6AC(rdram, ctx);
        goto after_269;
    // 0x60004AA4: nop

    after_269:
    // 0x60004AA8: jal         0x60000268
    // 0x60004AAC: sw          $s0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r16;
    ovl_menu_custom_268(rdram, ctx);
        goto after_270;
    // 0x60004AAC: sw          $s0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r16;
    after_270:
    // 0x60004AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60004AB4:
    // 0x60004AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004AB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004ABC: jal         0x60000238
    // 0x60004AC0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    ovl_menu_custom_238(rdram, ctx);
        goto after_271;
    // 0x60004AC0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_271:
    // 0x60004AC4: jal         0x60000208
    // 0x60004AC8: nop

    ovl_menu_custom_208(rdram, ctx);
        goto after_272;
    // 0x60004AC8: nop

    after_272:
    // 0x60004ACC: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x60004AD0: jal         0x600006AC
    // 0x60004AD4: nop

    ovl_menu_custom_6AC(rdram, ctx);
        goto after_273;
    // 0x60004AD4: nop

    after_273:
    // 0x60004AD8: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x60004ADC: jal         0x60000550
    // 0x60004AE0: nop

    ovl_menu_custom_550(rdram, ctx);
        goto after_274;
    // 0x60004AE0: nop

    after_274:
    // 0x60004AE4: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x60004AE8: jal         0x60000550
    // 0x60004AEC: nop

    ovl_menu_custom_550(rdram, ctx);
        goto after_275;
    // 0x60004AEC: nop

    after_275:
    // 0x60004AF0: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x60004AF4: jal         0x60000550
    // 0x60004AF8: nop

    ovl_menu_custom_550(rdram, ctx);
        goto after_276;
    // 0x60004AF8: nop

    after_276:
    // 0x60004AFC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004B00: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    // 0x60004B04: jal         0x60001BD0
    // 0x60004B08: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_menu_custom_1BD0(rdram, ctx);
        goto after_277;
    // 0x60004B08: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_277:
    // 0x60004B0C: jal         0x60000124
    // 0x60004B10: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    ovl_menu_custom_124(rdram, ctx);
        goto after_278;
    // 0x60004B10: addiu       $a0, $zero, 0x7EF
    ctx->r4 = ADD32(0, 0X7EF);
    after_278:
    // 0x60004B14: jal         0x60000124
    // 0x60004B18: addiu       $a0, $zero, 0xBE5
    ctx->r4 = ADD32(0, 0XBE5);
    ovl_menu_custom_124(rdram, ctx);
        goto after_279;
    // 0x60004B18: addiu       $a0, $zero, 0xBE5
    ctx->r4 = ADD32(0, 0XBE5);
    after_279:
    // 0x60004B1C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x60004B20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60004B24: beq         $t9, $at, L_60004B60
    if (ctx->r25 == ctx->r1) {
        // 0x60004B28: sll         $t8, $t9, 0
        ctx->r24 = S32(ctx->r25 << 0);
            goto L_60004B60;
    }
    // 0x60004B28: sll         $t8, $t9, 0
    ctx->r24 = S32(ctx->r25 << 0);
    // 0x60004B2C: bltz        $t8, L_60004B60
    if (SIGNED(ctx->r24) < 0) {
        // 0x60004B30: sll         $v0, $t9, 2
        ctx->r2 = S32(ctx->r25 << 2);
            goto L_60004B60;
    }
    // 0x60004B30: sll         $v0, $t9, 2
    ctx->r2 = S32(ctx->r25 << 2);
    // 0x60004B34: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60004B38: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x60004B3C: lw          $t4, 0x55C8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X55C8);
    // 0x60004B40: lw          $t5, 0xF8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF8);
    // 0x60004B44: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004B48: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x60004B4C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x60004B50: lw          $a0, 0x560C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X560C);
    // 0x60004B54: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x60004B58: jal         0x60000C10
    // 0x60004B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_custom_C10(rdram, ctx);
        goto after_280;
    // 0x60004B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_280:
L_60004B60:
    // 0x60004B60: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x60004B64: b           L_60004B74
    // 0x60004B68: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_60004B74;
    // 0x60004B68: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x60004B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60004B70:
    // 0x60004B70: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_60004B74:
    // 0x60004B74: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004B78: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004B7C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60004B80: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60004B84: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60004B88: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60004B8C: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60004B90: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004B94: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60004B98: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60004B9C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60004BA0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x60004BA4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60004BA8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x60004BAC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60004BB0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x60004BB4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x60004BB8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x60004BBC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x60004BC0: jr          $ra
    // 0x60004BC4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x60004BC4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void ovl_menu_stage_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x2A98
    ctx->r2 = ADD32(ctx->r2, 0X2A98);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x2A98
    ctx->r2 = ADD32(ctx->r2, 0X2A98);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_stage_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_menu_stage_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_menu_stage_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
