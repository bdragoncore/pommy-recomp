#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_stage_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_stage_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60000F54: sw          $a2, 0x6938($at)
    MEM_W(0X6938, ctx->r1) = ctx->r6;
    // 0x60000F58: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x60000F5C: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x60000F60: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x60000F64: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x60000F68: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x60000F6C: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x60000F70: ori         $t7, $t7, 0x1D00
    ctx->r15 = ctx->r15 | 0X1D00;
    // 0x60000F74: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60000F78: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x60000F7C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x60000F80: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x60000F84: lui         $t9, 0xEE00
    ctx->r25 = S32(0XEE00 << 16);
    // 0x60000F88: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x60000F8C: lw          $t3, 0x40($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X40);
    // 0x60000F90: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x60000F94: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x60000F98: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x60000F9C: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x60000FA0: lui         $t5, 0xE200
    ctx->r13 = S32(0XE200 << 16);
    // 0x60000FA4: ori         $t5, $t5, 0x1C
    ctx->r13 = ctx->r13 | 0X1C;
    // 0x60000FA8: ori         $t6, $t6, 0x4A50
    ctx->r14 = ctx->r14 | 0X4A50;
    // 0x60000FAC: addiu       $a0, $t1, 0x8
    ctx->r4 = ADD32(ctx->r9, 0X8);
    // 0x60000FB0: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x60000FB4: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x60000FB8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60000FBC: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x60000FC0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60000FC4: lw          $v1, 0x3C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X3C);
    // 0x60000FC8: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x60000FCC: sra         $t9, $v1, 24
    ctx->r25 = S32(SIGNED(ctx->r3) >> 24);
    // 0x60000FD0: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x60000FD4: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x60000FD8: sll         $t2, $t9, 24
    ctx->r10 = S32(ctx->r25 << 24);
    // 0x60000FDC: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x60000FE0: sra         $t9, $v1, 8
    ctx->r25 = S32(SIGNED(ctx->r3) >> 8);
    // 0x60000FE4: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x60000FE8: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x60000FEC: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x60000FF0: or          $t5, $t7, $t4
    ctx->r13 = ctx->r15 | ctx->r12;
    // 0x60000FF4: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x60000FF8: or          $t8, $t5, $t6
    ctx->r24 = ctx->r13 | ctx->r14;
    // 0x60000FFC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x60001000: lui         $t3, 0xFFFD
    ctx->r11 = S32(0XFFFD << 16);
    // 0x60001004: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x60001008: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x6000100C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x60001010: ori         $t3, $t3, 0xF6FB
    ctx->r11 = ctx->r11 | 0XF6FB;
    // 0x60001014: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x60001018: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x6000101C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x60001020: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x60001024: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x60001028: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x6000102C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001030: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x60001034: sw          $t4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r12;
    // 0x60001038: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000103C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001040: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x60001044: lw          $t6, 0x4C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4C);
    // 0x60001048: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x6000104C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x60001050: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x60001054: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60001058: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x6000105C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x60001060: andi        $t3, $t9, 0x3FF
    ctx->r11 = ctx->r25 & 0X3FF;
    // 0x60001064: sll         $t7, $t3, 14
    ctx->r15 = S32(ctx->r11 << 14);
    // 0x60001068: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x6000106C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001070: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001074: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001078: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x6000107C: lw          $t6, 0x50($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X50);
    // 0x60001080: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001084: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x60001088: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x6000108C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60001090: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x60001094: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x60001098: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x6000109C: andi        $t3, $t9, 0x3FF
    ctx->r11 = ctx->r25 & 0X3FF;
    // 0x600010A0: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x600010A4: or          $t2, $t4, $t7
    ctx->r10 = ctx->r12 | ctx->r15;
    // 0x600010A8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x600010AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600010B0: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x600010B4: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x600010B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600010BC: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x600010C0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x600010C4: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x600010C8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x600010CC: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x600010D0: nop

    // 0x600010D4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x600010D8: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x600010DC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x600010E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600010E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600010E8: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x600010EC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600010F0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x600010F4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x600010F8: andi        $t7, $t4, 0x3FF
    ctx->r15 = ctx->r12 & 0X3FF;
    // 0x600010FC: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x60001100: or          $t5, $t9, $t2
    ctx->r13 = ctx->r25 | ctx->r10;
    // 0x60001104: jr          $ra
    // 0x60001108: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    return;
    // 0x60001108: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
;}
RECOMP_FUNC void ovl_menu_stage_110C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000110C: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x60001110: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x60001114: beq         $v0, $t6, L_6000112C
    if (ctx->r2 == ctx->r14) {
        // 0x60001118: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_6000112C;
    }
    // 0x60001118: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_6000111C:
    // 0x6000111C: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x60001120: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001124: bne         $v0, $t7, L_6000111C
    if (ctx->r2 != ctx->r15) {
        // 0x60001128: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_6000111C;
    }
    // 0x60001128: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_6000112C:
    // 0x6000112C: jr          $ra
    // 0x60001130: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60001130: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_stage_1134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001134: blez        $a2, L_60001198
    if (SIGNED(ctx->r6) <= 0) {
        // 0x60001138: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001198;
    }
    // 0x60001138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x6000113C: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x60001140: beq         $a3, $zero, L_60001168
    if (ctx->r7 == 0) {
        // 0x60001144: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_60001168;
    }
    // 0x60001144: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_60001148:
    // 0x60001148: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x6000114C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001150: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001154: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60001158: bne         $v1, $v0, L_60001148
    if (ctx->r3 != ctx->r2) {
        // 0x6000115C: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_60001148;
    }
    // 0x6000115C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x60001160: beq         $v0, $a2, L_60001198
    if (ctx->r2 == ctx->r6) {
        // 0x60001164: nop
    
            goto L_60001198;
    }
    // 0x60001164: nop

L_60001168:
    // 0x60001168: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x6000116C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001170: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x60001174: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x60001178: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x6000117C: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x60001180: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x60001184: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x60001188: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x6000118C: lbu         $t0, -0x1($a1)
    ctx->r8 = MEM_BU(ctx->r5, -0X1);
    // 0x60001190: bne         $v0, $a2, L_60001168
    if (ctx->r2 != ctx->r6) {
        // 0x60001194: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_60001168;
    }
    // 0x60001194: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
L_60001198:
    // 0x60001198: jr          $ra
    // 0x6000119C: nop

    return;
    // 0x6000119C: nop

;}
RECOMP_FUNC void ovl_menu_stage_11A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011A0: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x600011A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600011A8: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x600011AC: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x600011B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600011B4: addiu       $t9, $t9, 0x6730
    ctx->r25 = ADD32(ctx->r25, 0X6730);
    // 0x600011B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x600011BC: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x600011C0: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x600011C4: andi        $t2, $a0, 0xF0
    ctx->r10 = ctx->r4 & 0XF0;
    // 0x600011C8: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x600011CC: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600011D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600011D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600011D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600011DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600011E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600011E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x600011E8: addu        $t0, $a2, $t8
    ctx->r8 = ADD32(ctx->r6, ctx->r24);
    // 0x600011EC: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x600011F0: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x600011F4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600011F8: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x600011FC: mflo        $t4
    ctx->r12 = lo;
    // 0x60001200: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x60001204: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x60001208: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x6000120C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001210: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x60001214: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x60001218: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
L_6000121C:
    // 0x6000121C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x60001220: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001224: multu       $t2, $s0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000122C: mflo        $t1
    ctx->r9 = lo;
    // 0x60001230: addu        $a1, $t1, $s3
    ctx->r5 = ADD32(ctx->r9, ctx->r19);
    // 0x60001234: jal         0x60001134
    // 0x60001238: nop

    ovl_menu_stage_1134(rdram, ctx);
        goto after_0;
    // 0x60001238: nop

    after_0:
    // 0x6000123C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001240: bne         $s0, $s4, L_6000121C
    if (ctx->r16 != ctx->r20) {
        // 0x60001244: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_6000121C;
    }
    // 0x60001244: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x60001248: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000124C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001250: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001254: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001258: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x6000125C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60001260: jr          $ra
    // 0x60001264: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001264: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_stage_1268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001268: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x6000126C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x60001270: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x60001274: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x60001278: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x6000127C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x60001280: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x60001284: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001288: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x6000128C: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x60001290: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001294:
    // 0x60001294: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x60001298: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_6000129C:
    // 0x6000129C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x600012A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600012A4: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x600012A8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x600012AC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x600012B0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012B4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x600012B8: beq         $t1, $t9, L_600012D0
    if (ctx->r9 == ctx->r25) {
        // 0x600012BC: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_600012D0;
    }
    // 0x600012BC: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x600012C0: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x600012C4: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x600012C8: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x600012CC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_600012D0:
    // 0x600012D0: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x600012D4: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x600012D8: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x600012DC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012E0: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x600012E4: beq         $t1, $t9, L_60001300
    if (ctx->r9 == ctx->r25) {
        // 0x600012E8: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_60001300;
    }
    // 0x600012E8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x600012EC: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x600012F0: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x600012F4: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x600012F8: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x600012FC: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_60001300:
    // 0x60001300: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x60001304: nop

    // 0x60001308: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x6000130C: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x60001310: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x60001314: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001318: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000131C: beq         $t1, $t7, L_60001334
    if (ctx->r9 == ctx->r15) {
        // 0x60001320: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_60001334;
    }
    // 0x60001320: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x60001324: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x60001328: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x6000132C: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x60001330: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_60001334:
    // 0x60001334: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x60001338: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x6000133C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x60001340: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001344: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001348: beq         $t1, $t7, L_60001364
    if (ctx->r9 == ctx->r15) {
        // 0x6000134C: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_60001364;
    }
    // 0x6000134C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001350: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001354: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x60001358: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x6000135C: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x60001360: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_60001364:
    // 0x60001364: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001368: bne         $v1, $t4, L_6000129C
    if (ctx->r3 != ctx->r12) {
        // 0x6000136C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_6000129C;
    }
    // 0x6000136C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x60001370: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x60001374: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x60001378: bne         $at, $zero, L_60001294
    if (ctx->r1 != 0) {
        // 0x6000137C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001294;
    }
    // 0x6000137C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001380: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x60001384: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001388: bne         $t9, $zero, L_600013B0
    if (ctx->r25 != 0) {
        // 0x6000138C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_600013B0;
    }
    // 0x6000138C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x60001390: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001394: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001398:
    // 0x60001398: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x6000139C: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x600013A0: bne         $t7, $zero, L_600013B0
    if (ctx->r15 != 0) {
        // 0x600013A4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_600013B0;
    }
    // 0x600013A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x600013A8: bne         $a0, $a2, L_60001398
    if (ctx->r4 != ctx->r6) {
        // 0x600013AC: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_60001398;
    }
    // 0x600013AC: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_600013B0:
    // 0x600013B0: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x600013B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600013B8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x600013BC: bne         $t6, $zero, L_600013E0
    if (ctx->r14 != 0) {
        // 0x600013C0: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_600013E0;
    }
    // 0x600013C0: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x600013C4: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013C8:
    // 0x600013C8: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x600013CC: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x600013D0: bne         $t8, $zero, L_600013E0
    if (ctx->r24 != 0) {
        // 0x600013D4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_600013E0;
    }
    // 0x600013D4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x600013D8: bne         $t0, $a2, L_600013C8
    if (ctx->r8 != ctx->r6) {
        // 0x600013DC: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_600013C8;
    }
    // 0x600013DC: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013E0:
    // 0x600013E0: bne         $v0, $zero, L_600013F8
    if (ctx->r2 != 0) {
        // 0x600013E4: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_600013F8;
    }
    // 0x600013E4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x600013E8: bne         $v1, $zero, L_600013FC
    if (ctx->r3 != 0) {
        // 0x600013EC: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_600013FC;
    }
    // 0x600013EC: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x600013F0: b           L_60001578
    // 0x600013F4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_60001578;
    // 0x600013F4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_600013F8:
    // 0x600013F8: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_600013FC:
    // 0x600013FC: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x60001400: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x60001404: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x60001408: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000140C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_60001410:
    // 0x60001410: beq         $t2, $zero, L_60001480
    if (ctx->r10 == 0) {
        // 0x60001414: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001480;
    }
    // 0x60001414: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001418: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x6000141C: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_60001420:
    // 0x60001420: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x60001424: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x60001428: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x6000142C: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x60001430: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x60001434: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x60001438: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x6000143C: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001440: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x60001444: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x60001448: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x6000144C: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001450: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x60001454: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001458: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x6000145C: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x60001460: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x60001464: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x60001468: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x6000146C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001470: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001474: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x60001478: bne         $v1, $a2, L_60001420
    if (ctx->r3 != ctx->r6) {
        // 0x6000147C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_60001420;
    }
    // 0x6000147C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60001480:
    // 0x60001480: beq         $a1, $zero, L_6000156C
    if (ctx->r5 == 0) {
        // 0x60001484: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_6000156C;
    }
    // 0x60001484: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x60001488: blez        $s0, L_6000150C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x6000148C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_6000150C;
    }
    // 0x6000148C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001490: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x60001494: beq         $s2, $zero, L_600014CC
    if (ctx->r18 == 0) {
        // 0x60001498: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_600014CC;
    }
    // 0x60001498: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x6000149C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x600014A0: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x600014A4: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_600014A8:
    // 0x600014A8: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x600014AC: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x600014B0: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x600014B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600014B8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x600014BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600014C0: bne         $s1, $v1, L_600014A8
    if (ctx->r17 != ctx->r3) {
        // 0x600014C4: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_600014A8;
    }
    // 0x600014C4: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x600014C8: beq         $v1, $s0, L_6000150C
    if (ctx->r3 == ctx->r16) {
        // 0x600014CC: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_6000150C;
    }
L_600014CC:
    // 0x600014CC: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x600014D0: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_600014D4:
    // 0x600014D4: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x600014D8: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x600014DC: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x600014E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600014E4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x600014E8: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x600014EC: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x600014F0: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x600014F4: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x600014F8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600014FC: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x60001500: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x60001504: bne         $v1, $s0, L_600014D4
    if (ctx->r3 != ctx->r16) {
        // 0x60001508: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_600014D4;
    }
    // 0x60001508: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_6000150C:
    // 0x6000150C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60001510: beq         $at, $zero, L_6000156C
    if (ctx->r1 == 0) {
        // 0x60001514: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_6000156C;
    }
    // 0x60001514: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x60001518: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x6000151C: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x60001520: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x60001524: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x60001528: beq         $t8, $zero, L_6000154C
    if (ctx->r24 == 0) {
        // 0x6000152C: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_6000154C;
    }
    // 0x6000152C: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x60001530: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x60001534: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_60001538:
    // 0x60001538: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x6000153C: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x60001540: bne         $t5, $v1, L_60001538
    if (ctx->r13 != ctx->r3) {
        // 0x60001544: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_60001538;
    }
    // 0x60001544: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x60001548: beq         $v1, $a2, L_6000156C
    if (ctx->r3 == ctx->r6) {
        // 0x6000154C: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_6000156C;
    }
L_6000154C:
    // 0x6000154C: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001550:
    // 0x60001550: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001554: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x60001558: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x6000155C: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x60001560: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x60001564: bne         $v1, $a2, L_60001550
    if (ctx->r3 != ctx->r6) {
        // 0x60001568: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001550;
    }
    // 0x60001568: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_6000156C:
    // 0x6000156C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x60001570: bne         $t1, $t3, L_60001410
    if (ctx->r9 != ctx->r11) {
        // 0x60001574: nop
    
            goto L_60001410;
    }
    // 0x60001574: nop

L_60001578:
    // 0x60001578: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x6000157C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x60001580: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x60001584: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x60001588: jr          $ra
    // 0x6000158C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x6000158C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_stage_1590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001590: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x60001594: beq         $t6, $zero, L_600015D0
    if (ctx->r14 == 0) {
        // 0x60001598: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_600015D0;
    }
    // 0x60001598: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x6000159C: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x600015A0: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015A4: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015A8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x600015AC: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x600015B0: mflo        $t0
    ctx->r8 = lo;
    // 0x600015B4: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x600015B8: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x600015BC: nop

    // 0x600015C0: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x600015C4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x600015C8: jr          $ra
    // 0x600015CC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x600015CC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_600015D0:
    // 0x600015D0: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015D4: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015D8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x600015DC: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x600015E0: nop

    // 0x600015E4: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x600015E8: mflo        $t9
    ctx->r25 = lo;
    // 0x600015EC: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x600015F0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600015F4: nop

    // 0x600015F8: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x600015FC: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x60001600: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x60001604: jr          $ra
    // 0x60001608: nop

    return;
    // 0x60001608: nop

;}
RECOMP_FUNC void ovl_menu_stage_160C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000160C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001610: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60001614: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001618: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x6000161C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001620: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x60001624: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x60001628: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x6000162C: addiu       $s1, $s1, 0x6940
    ctx->r17 = ADD32(ctx->r17, 0X6940);
    // 0x60001630: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60001634: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x60001638: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x6000163C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x60001640: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x60001644: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x60001648: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x6000164C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001650: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001654: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x60001658: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x6000165C: jal         0x600011A0
    // 0x60001660: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_stage_11A0(rdram, ctx);
        goto after_0;
    // 0x60001660: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x60001664: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x60001668: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x6000166C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x60001670: beq         $t7, $zero, L_60001680
    if (ctx->r15 == 0) {
        // 0x60001674: nop
    
            goto L_60001680;
    }
    // 0x60001674: nop

    // 0x60001678: b           L_6000168C
    // 0x6000167C: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
        goto L_6000168C;
    // 0x6000167C: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
L_60001680:
    // 0x60001680: jal         0x60001268
    // 0x60001684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_stage_1268(rdram, ctx);
        goto after_1;
    // 0x60001684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x60001688: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_6000168C:
    // 0x6000168C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60001690: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x60001694: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_60001698:
    // 0x60001698: blez        $s5, L_6000171C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x6000169C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000171C;
    }
    // 0x6000169C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600016A0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x600016A4: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x600016A8: addiu       $t9, $t9, 0x6940
    ctx->r25 = ADD32(ctx->r25, 0X6940);
    // 0x600016AC: sll         $t8, $s7, 3
    ctx->r24 = S32(ctx->r23 << 3);
    // 0x600016B0: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x600016B4: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x600016B8: addu        $s3, $t0, $s7
    ctx->r19 = ADD32(ctx->r8, ctx->r23);
L_600016BC:
    // 0x600016BC: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x600016C0: beq         $t1, $zero, L_600016E4
    if (ctx->r9 == 0) {
        // 0x600016C4: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_600016E4;
    }
    // 0x600016C4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600016C8: sra         $t2, $s0, 1
    ctx->r10 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016CC: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x600016D0: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x600016D4: nop

    // 0x600016D8: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x600016DC: b           L_600016FC
    // 0x600016E0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_600016FC;
    // 0x600016E0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_600016E4:
    // 0x600016E4: sra         $t5, $s0, 1
    ctx->r13 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016E8: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x600016EC: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x600016F0: nop

    // 0x600016F4: sra         $t7, $v0, 4
    ctx->r15 = S32(SIGNED(ctx->r2) >> 4);
    // 0x600016F8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_600016FC:
    // 0x600016FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001700: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001704: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x60001708: jal         0x60001590
    // 0x6000170C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_stage_1590(rdram, ctx);
        goto after_2;
    // 0x6000170C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x60001710: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001714: bne         $s0, $s5, L_600016BC
    if (ctx->r16 != ctx->r21) {
        // 0x60001718: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_600016BC;
    }
    // 0x60001718: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_6000171C:
    // 0x6000171C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001720: bne         $s7, $fp, L_60001698
    if (ctx->r23 != ctx->r30) {
        // 0x60001724: nop
    
            goto L_60001698;
    }
    // 0x60001724: nop

    // 0x60001728: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x6000172C: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x60001730: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x60001734: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001738: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000173C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001740: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001744: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001748: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x6000174C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x60001750: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x60001754: jr          $ra
    // 0x60001758: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001758: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_stage_175C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000175C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x60001760: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x60001764: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001768: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x6000176C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x60001770: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60001774: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x60001778: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x6000177C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60001780: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x60001784: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x60001788: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x6000178C: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x60001790: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x60001794: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x60001798: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x6000179C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_600017A0:
    // 0x600017A0: jal         0x60000118
    // 0x600017A4: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_stage_118(rdram, ctx);
        goto after_0;
    // 0x600017A4: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x600017A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600017AC: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x600017B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600017B4: bne         $at, $zero, L_600017A0
    if (ctx->r1 != 0) {
        // 0x600017B8: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_600017A0;
    }
    // 0x600017B8: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x600017BC: jal         0x60000118
    // 0x600017C0: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_stage_118(rdram, ctx);
        goto after_1;
    // 0x600017C0: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x600017C4: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x600017C8: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x600017CC: ori         $fp, $zero, 0xFFFF
    ctx->r30 = 0 | 0XFFFF;
    // 0x600017D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600017D4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x600017D8: beq         $fp, $t6, L_60001890
    if (ctx->r30 == ctx->r14) {
        // 0x600017DC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001890;
    }
    // 0x600017DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600017E0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x600017E4: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x600017E8: addiu       $s3, $s3, 0x69C0
    ctx->r19 = ADD32(ctx->r19, 0X69C0);
    // 0x600017EC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x600017F0: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_600017F4:
    // 0x600017F4: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600017F8: bne         $v0, $at, L_60001808
    if (ctx->r2 != ctx->r1) {
        // 0x600017FC: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_60001808;
    }
    // 0x600017FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x60001800: b           L_6000186C
    // 0x60001804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_6000186C;
    // 0x60001804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001808:
    // 0x60001808: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x6000180C: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x60001810: andi        $t7, $s1, 0x8
    ctx->r15 = ctx->r17 & 0X8;
    // 0x60001814: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x60001818: jal         0x600011A0
    // 0x6000181C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    ovl_menu_stage_11A0(rdram, ctx);
        goto after_2;
    // 0x6000181C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    after_2:
    // 0x60001820: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x60001824: beq         $s1, $zero, L_60001834
    if (ctx->r17 == 0) {
        // 0x60001828: nop
    
            goto L_60001834;
    }
    // 0x60001828: nop

    // 0x6000182C: b           L_6000186C
    // 0x60001830: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_6000186C;
    // 0x60001830: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_60001834:
    // 0x60001834: lhu         $t8, 0x0($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X0);
    // 0x60001838: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000183C: andi        $t9, $t8, 0xF00
    ctx->r25 = ctx->r24 & 0XF00;
    // 0x60001840: sra         $t1, $t9, 8
    ctx->r9 = S32(SIGNED(ctx->r25) >> 8);
    // 0x60001844: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x60001848: addu        $v1, $sp, $t2
    ctx->r3 = ADD32(ctx->r29, ctx->r10);
    // 0x6000184C: lw          $v1, 0x78($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X78);
    // 0x60001850: nop

    // 0x60001854: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x60001858: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x6000185C: jal         0x60001268
    // 0x60001860: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_stage_1268(rdram, ctx);
        goto after_3;
    // 0x60001860: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x60001864: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x60001868: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_6000186C:
    // 0x6000186C: slt         $at, $a3, $s0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x60001870: beq         $at, $zero, L_6000187C
    if (ctx->r1 == 0) {
        // 0x60001874: nop
    
            goto L_6000187C;
    }
    // 0x60001874: nop

    // 0x60001878: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
L_6000187C:
    // 0x6000187C: lhu         $a0, 0x2($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2);
    // 0x60001880: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x60001884: bne         $fp, $a0, L_600017F4
    if (ctx->r30 != ctx->r4) {
        // 0x60001888: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_600017F4;
    }
    // 0x60001888: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x6000188C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001890:
    // 0x60001890: lw          $s1, 0xA8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA8);
    // 0x60001894: andi        $t4, $a3, 0x1
    ctx->r12 = ctx->r7 & 0X1;
    // 0x60001898: beq         $t4, $zero, L_600018A4
    if (ctx->r12 == 0) {
        // 0x6000189C: sll         $t5, $s1, 4
        ctx->r13 = S32(ctx->r17 << 4);
            goto L_600018A4;
    }
    // 0x6000189C: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x600018A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_600018A4:
    // 0x600018A4: multu       $t5, $a3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600018A8: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x600018AC: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x600018B0: mflo        $s0
    ctx->r16 = lo;
    // 0x600018B4: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600018B8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x600018BC: jal         0x600000E8
    // 0x600018C0: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_stage_E8(rdram, ctx);
        goto after_4;
    // 0x600018C0: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x600018C4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x600018C8: addiu       $t0, $s2, 0x20
    ctx->r8 = ADD32(ctx->r18, 0X20);
    // 0x600018CC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x600018D0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x600018D4: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x600018D8: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x600018DC: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x600018E0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x600018E4: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x600018E8: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x600018EC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x600018F0: addu        $v1, $sp, $t3
    ctx->r3 = ADD32(ctx->r29, ctx->r11);
    // 0x600018F4: lw          $v1, 0x78($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X78);
    // 0x600018F8: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    // 0x600018FC: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x60001900: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x60001904: jal         0x60001134
    // 0x60001908: addu        $a1, $t4, $v1
    ctx->r5 = ADD32(ctx->r12, ctx->r3);
    ovl_menu_stage_1134(rdram, ctx);
        goto after_5;
    // 0x60001908: addu        $a1, $t4, $v1
    ctx->r5 = ADD32(ctx->r12, ctx->r3);
    after_5:
    // 0x6000190C: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x60001910: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x60001914: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x60001918: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x6000191C: sw          $t5, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r13;
    // 0x60001920: sw          $a3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r7;
    // 0x60001924: blez        $s0, L_60001974
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60001928: addu        $s6, $s4, $t6
        ctx->r22 = ADD32(ctx->r20, ctx->r14);
            goto L_60001974;
    }
    // 0x60001928: addu        $s6, $s4, $t6
    ctx->r22 = ADD32(ctx->r20, ctx->r14);
    // 0x6000192C: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x60001930: beq         $a0, $zero, L_60001950
    if (ctx->r4 == 0) {
        // 0x60001934: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_60001950;
    }
    // 0x60001934: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x60001938: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_6000193C:
    // 0x6000193C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001940: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x60001944: bne         $v1, $s7, L_6000193C
    if (ctx->r3 != ctx->r23) {
        // 0x60001948: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_6000193C;
    }
    // 0x60001948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x6000194C: beq         $s7, $s0, L_60001970
    if (ctx->r23 == ctx->r16) {
        // 0x60001950: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_60001970;
    }
L_60001950:
    // 0x60001950: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_60001954:
    // 0x60001954: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x60001958: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x6000195C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x60001960: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x60001964: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001968: bne         $s7, $s0, L_60001954
    if (ctx->r23 != ctx->r16) {
        // 0x6000196C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_60001954;
    }
    // 0x6000196C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_60001970:
    // 0x60001970: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001974:
    // 0x60001974: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x60001978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x6000197C: blez        $t7, L_60001A48
    if (SIGNED(ctx->r15) <= 0) {
        // 0x60001980: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001A48;
    }
    // 0x60001980: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001984: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x60001988: nop

    // 0x6000198C: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_60001990:
    // 0x60001990: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001994: blez        $t8, L_60001A2C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001998: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001A2C;
    }
    // 0x60001998: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000199C: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x600019A0: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
L_600019A4:
    // 0x600019A4: lw          $t9, 0x10($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X10);
    // 0x600019A8: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x600019AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x600019B0: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x600019B4: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x600019B8: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x600019BC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x600019C0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x600019C4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600019C8: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x600019CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600019D0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x600019D4: jal         0x6000160C
    // 0x600019D8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    ovl_menu_stage_160C(rdram, ctx);
        goto after_6;
    // 0x600019D8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_6:
    // 0x600019DC: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x600019E0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x600019E4: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x600019E8: bne         $fp, $s2, L_600019FC
    if (ctx->r30 != ctx->r18) {
        // 0x600019EC: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_600019FC;
    }
    // 0x600019EC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x600019F0: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x600019F4: b           L_60001A2C
    // 0x600019F8: nop

        goto L_60001A2C;
    // 0x600019F8: nop

L_600019FC:
    // 0x600019FC: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x60001A00: bne         $v1, $at, L_60001A18
    if (ctx->r3 != ctx->r1) {
        // 0x60001A04: lw          $t5, 0xA4($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA4);
            goto L_60001A18;
    }
    // 0x60001A04: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x60001A08: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x60001A0C: b           L_60001A2C
    // 0x60001A10: nop

        goto L_60001A2C;
    // 0x60001A10: nop

    // 0x60001A14: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
L_60001A18:
    // 0x60001A18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001A1C: bne         $s0, $t5, L_600019A4
    if (ctx->r16 != ctx->r13) {
        // 0x60001A20: nop
    
            goto L_600019A4;
    }
    // 0x60001A20: nop

    // 0x60001A24: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x60001A28: nop

L_60001A2C:
    // 0x60001A2C: beq         $fp, $s2, L_60001A48
    if (ctx->r30 == ctx->r18) {
        // 0x60001A30: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001A48;
    }
    // 0x60001A30: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001A34: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x60001A38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001A3C: bne         $v0, $t6, L_60001990
    if (ctx->r2 != ctx->r14) {
        // 0x60001A40: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_60001990;
    }
    // 0x60001A40: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x60001A44: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_60001A48:
    // 0x60001A48: jal         0x60000124
    // 0x60001A4C: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_stage_124(rdram, ctx);
        goto after_7;
    // 0x60001A4C: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x60001A50: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001A54: bne         $s7, $s0, L_60001A48
    if (ctx->r23 != ctx->r16) {
        // 0x60001A58: nop
    
            goto L_60001A48;
    }
    // 0x60001A58: nop

    // 0x60001A5C: jal         0x60000124
    // 0x60001A60: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_stage_124(rdram, ctx);
        goto after_8;
    // 0x60001A60: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x60001A64: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x60001A68: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x60001A6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001A70: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001A74: mflo        $a1
    ctx->r5 = lo;
    // 0x60001A78: sll         $t9, $a1, 8
    ctx->r25 = S32(ctx->r5 << 8);
    // 0x60001A7C: sra         $t1, $t9, 1
    ctx->r9 = S32(SIGNED(ctx->r25) >> 1);
    // 0x60001A80: jal         0x60000034
    // 0x60001A84: addiu       $a1, $t1, 0x40
    ctx->r5 = ADD32(ctx->r9, 0X40);
    ovl_menu_stage_34(rdram, ctx);
        goto after_9;
    // 0x60001A84: addiu       $a1, $t1, 0x40
    ctx->r5 = ADD32(ctx->r9, 0X40);
    after_9:
    // 0x60001A88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001A8C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001A90: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x60001A94: jal         0x60000544
    // 0x60001A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_stage_544(rdram, ctx);
        goto after_10;
    // 0x60001A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001A9C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001AA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001AA4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001AA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001AAC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x60001AB0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x60001AB4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x60001AB8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x60001ABC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x60001AC0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x60001AC4: jr          $ra
    // 0x60001AC8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x60001AC8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_menu_stage_1ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001AD4: jal         0x60000550
    // 0x60001AD8: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_0;
    // 0x60001AD8: nop

    after_0:
    // 0x60001ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001AE4: jr          $ra
    // 0x60001AE8: nop

    return;
    // 0x60001AE8: nop

;}
RECOMP_FUNC void ovl_menu_stage_1AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001AF0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60001AF4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001AF8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001AFC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60001B00: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001B04: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x60001B08: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x60001B0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60001B10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001B14: blez        $a1, L_60001C24
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001B18: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001C24;
    }
    // 0x60001B18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001B1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001B20:
    // 0x60001B20: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001B24: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60001B28: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001B2C: beq         $t6, $zero, L_60001B78
    if (ctx->r14 == 0) {
        // 0x60001B30: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_60001B78;
    }
    // 0x60001B30: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60001B34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B38: jal         0x60000538
    // 0x60001B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_538(rdram, ctx);
        goto after_0;
    // 0x60001B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60001B40: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001B44: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x60001B48: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001B4C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60001B50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001B54: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001B5C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001B60: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001B64: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60001B68: jal         0x6000055C
    // 0x60001B6C: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_1;
    // 0x60001B6C: nop

    after_1:
    // 0x60001B70: b           L_60001BFC
    // 0x60001B74: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001BFC;
    // 0x60001B74: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B78:
    // 0x60001B78: beq         $t9, $zero, L_60001BD8
    if (ctx->r25 == 0) {
        // 0x60001B7C: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_60001BD8;
    }
    // 0x60001B7C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001B80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B84: jal         0x6000110C
    // 0x60001B88: nop

    ovl_menu_stage_110C(rdram, ctx);
        goto after_2;
    // 0x60001B88: nop

    after_2:
    // 0x60001B8C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B90: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x60001B94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001B98: jal         0x6000175C
    // 0x60001B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_3;
    // 0x60001B9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001BA0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60001BA4: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x60001BA8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x60001BAC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x60001BB0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60001BB4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001BB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001BBC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001BC0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001BC4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001BC8: jal         0x6000055C
    // 0x60001BCC: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_4;
    // 0x60001BCC: nop

    after_4:
    // 0x60001BD0: b           L_60001BFC
    // 0x60001BD4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001BFC;
    // 0x60001BD4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001BD8:
    // 0x60001BD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60001BDC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x60001BE0: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60001BE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60001BE8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x60001BEC: jal         0x600006B8
    // 0x60001BF0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    ovl_menu_stage_6B8(rdram, ctx);
        goto after_5;
    // 0x60001BF0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_5:
    // 0x60001BF4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001BF8: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001BFC:
    // 0x60001BFC: nop

    // 0x60001C00: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x60001C04: bne         $t4, $zero, L_60001C18
    if (ctx->r12 != 0) {
        // 0x60001C08: nop
    
            goto L_60001C18;
    }
    // 0x60001C08: nop

    // 0x60001C0C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C10: jal         0x600005A4
    // 0x60001C14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_6;
    // 0x60001C14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60001C18:
    // 0x60001C18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001C1C: bne         $s1, $s2, L_60001B20
    if (ctx->r17 != ctx->r18) {
        // 0x60001C20: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001B20;
    }
    // 0x60001C20: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001C24:
    // 0x60001C24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60001C28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001C2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001C30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001C34: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001C38: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001C3C: jr          $ra
    // 0x60001C40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x60001C40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_menu_stage_1C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001C48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001C4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001C50: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001C54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001C58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001C5C: blez        $a1, L_60001CCC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001C60: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001CCC;
    }
    // 0x60001C60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001C64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001C68:
    // 0x60001C68: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C6C: nop

    // 0x60001C70: beq         $a0, $zero, L_60001CC0
    if (ctx->r4 == 0) {
        // 0x60001C74: nop
    
            goto L_60001CC0;
    }
    // 0x60001C74: nop

    // 0x60001C78: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001C7C: nop

    // 0x60001C80: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001C84: beq         $t6, $zero, L_60001C9C
    if (ctx->r14 == 0) {
        // 0x60001C88: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60001C9C;
    }
    // 0x60001C88: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60001C8C: jal         0x60000550
    // 0x60001C90: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_0;
    // 0x60001C90: nop

    after_0:
    // 0x60001C94: b           L_60001CC0
    // 0x60001C98: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_60001CC0;
    // 0x60001C98: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_60001C9C:
    // 0x60001C9C: beq         $t7, $zero, L_60001CB4
    if (ctx->r15 == 0) {
        // 0x60001CA0: nop
    
            goto L_60001CB4;
    }
    // 0x60001CA0: nop

    // 0x60001CA4: jal         0x60001ACC
    // 0x60001CA8: nop

    ovl_menu_stage_1ACC(rdram, ctx);
        goto after_1;
    // 0x60001CA8: nop

    after_1:
    // 0x60001CAC: b           L_60001CC0
    // 0x60001CB0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_60001CC0;
    // 0x60001CB0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_60001CB4:
    // 0x60001CB4: jal         0x600006AC
    // 0x60001CB8: nop

    ovl_menu_stage_6AC(rdram, ctx);
        goto after_2;
    // 0x60001CB8: nop

    after_2:
    // 0x60001CBC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_60001CC0:
    // 0x60001CC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001CC4: bne         $s1, $s2, L_60001C68
    if (ctx->r17 != ctx->r18) {
        // 0x60001CC8: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001C68;
    }
    // 0x60001CC8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001CCC:
    // 0x60001CCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001CD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001CD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001CD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001CDC: jr          $ra
    // 0x60001CE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001CE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_stage_1CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001CE8: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x60001CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001CF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60001CF4: beq         $t6, $zero, L_60001D20
    if (ctx->r14 == 0) {
        // 0x60001CF8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60001D20;
    }
    // 0x60001CF8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001CFC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x60001D00: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x60001D04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60001D08: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x60001D0C: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60001D10: jal         0x600005B0
    // 0x60001D14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_stage_5B0(rdram, ctx);
        goto after_0;
    // 0x60001D14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001D18: b           L_60001D48
    // 0x60001D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001D48;
    // 0x60001D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D20:
    // 0x60001D20: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60001D24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001D28: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60001D2C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60001D30: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60001D34: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x60001D38: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60001D3C: jal         0x600005A4
    // 0x60001D40: nop

    ovl_menu_stage_5A4(rdram, ctx);
        goto after_1;
    // 0x60001D40: nop

    after_1:
    // 0x60001D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D48:
    // 0x60001D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001D4C: jr          $ra
    // 0x60001D50: nop

    return;
    // 0x60001D50: nop

;}
RECOMP_FUNC void ovl_menu_stage_1D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001D54: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x60001D58: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
L_60001D5C:
    // 0x60001D5C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x60001D60: nop

    // 0x60001D64: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x60001D68: bne         $at, $zero, L_60001D78
    if (ctx->r1 != 0) {
        // 0x60001D6C: addiu       $t6, $v0, -0x322
        ctx->r14 = ADD32(ctx->r2, -0X322);
            goto L_60001D78;
    }
    // 0x60001D6C: addiu       $t6, $v0, -0x322
    ctx->r14 = ADD32(ctx->r2, -0X322);
    // 0x60001D70: b           L_60001DF8
    // 0x60001D74: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
        goto L_60001DF8;
    // 0x60001D74: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
L_60001D78:
    // 0x60001D78: slti        $at, $v0, 0x300
    ctx->r1 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x60001D7C: bne         $at, $zero, L_60001D8C
    if (ctx->r1 != 0) {
        // 0x60001D80: addiu       $t7, $v0, -0x228
        ctx->r15 = ADD32(ctx->r2, -0X228);
            goto L_60001D8C;
    }
    // 0x60001D80: addiu       $t7, $v0, -0x228
    ctx->r15 = ADD32(ctx->r2, -0X228);
    // 0x60001D84: b           L_60001DF8
    // 0x60001D88: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
        goto L_60001DF8;
    // 0x60001D88: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
L_60001D8C:
    // 0x60001D8C: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x60001D90: bne         $at, $zero, L_60001DB4
    if (ctx->r1 != 0) {
        // 0x60001D94: andi        $t8, $v0, 0xF
        ctx->r24 = ctx->r2 & 0XF;
            goto L_60001DB4;
    }
    // 0x60001D94: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x60001D98: addiu       $t9, $v0, -0x200
    ctx->r25 = ADD32(ctx->r2, -0X200);
    // 0x60001D9C: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x60001DA0: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x60001DA4: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x60001DA8: addiu       $t3, $t2, 0xA0
    ctx->r11 = ADD32(ctx->r10, 0XA0);
    // 0x60001DAC: b           L_60001DF8
    // 0x60001DB0: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
        goto L_60001DF8;
    // 0x60001DB0: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_60001DB4:
    // 0x60001DB4: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x60001DB8: bne         $at, $zero, L_60001DE4
    if (ctx->r1 != 0) {
        // 0x60001DBC: sra         $t1, $v0, 4
        ctx->r9 = S32(SIGNED(ctx->r2) >> 4);
            goto L_60001DE4;
    }
    // 0x60001DBC: sra         $t1, $v0, 4
    ctx->r9 = S32(SIGNED(ctx->r2) >> 4);
    // 0x60001DC0: addiu       $t5, $v0, -0x100
    ctx->r13 = ADD32(ctx->r2, -0X100);
    // 0x60001DC4: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001DC8: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001DCC: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x60001DD0: mflo        $t7
    ctx->r15 = lo;
    // 0x60001DD4: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x60001DD8: addiu       $t0, $t9, 0x50
    ctx->r8 = ADD32(ctx->r25, 0X50);
    // 0x60001DDC: b           L_60001DF8
    // 0x60001DE0: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
        goto L_60001DF8;
    // 0x60001DE0: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
L_60001DE4:
    // 0x60001DE4: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001DE8: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x60001DEC: mflo        $t2
    ctx->r10 = lo;
    // 0x60001DF0: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x60001DF4: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
L_60001DF8:
    // 0x60001DF8: lhu         $t5, 0x0($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X0);
    // 0x60001DFC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x60001E00: bne         $v1, $t5, L_60001D5C
    if (ctx->r3 != ctx->r13) {
        // 0x60001E04: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_60001D5C;
    }
    // 0x60001E04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001E08: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x60001E0C: jr          $ra
    // 0x60001E10: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    return;
    // 0x60001E10: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_menu_stage_1E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E14: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x60001E18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_60001E1C:
    // 0x60001E1C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x60001E20: nop

    // 0x60001E24: bne         $a2, $v0, L_60001E34
    if (ctx->r6 != ctx->r2) {
        // 0x60001E28: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60001E34;
    }
    // 0x60001E28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001E2C: b           L_60001F3C
    // 0x60001E30: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_60001F3C;
    // 0x60001E30: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_60001E34:
    // 0x60001E34: slti        $at, $v1, 0xDE
    ctx->r1 = SIGNED(ctx->r3) < 0XDE ? 1 : 0;
    // 0x60001E38: bne         $at, $zero, L_60001E50
    if (ctx->r1 != 0) {
        // 0x60001E3C: slti        $at, $v1, 0xD8
        ctx->r1 = SIGNED(ctx->r3) < 0XD8 ? 1 : 0;
            goto L_60001E50;
    }
    // 0x60001E3C: slti        $at, $v1, 0xD8
    ctx->r1 = SIGNED(ctx->r3) < 0XD8 ? 1 : 0;
    // 0x60001E40: addiu       $t6, $v1, 0x322
    ctx->r14 = ADD32(ctx->r3, 0X322);
    // 0x60001E44: b           L_60001F3C
    // 0x60001E48: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
        goto L_60001F3C;
    // 0x60001E48: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x60001E4C: slti        $at, $v1, 0xD8
    ctx->r1 = SIGNED(ctx->r3) < 0XD8 ? 1 : 0;
L_60001E50:
    // 0x60001E50: bne         $at, $zero, L_60001E68
    if (ctx->r1 != 0) {
        // 0x60001E54: slti        $at, $v1, 0xA0
        ctx->r1 = SIGNED(ctx->r3) < 0XA0 ? 1 : 0;
            goto L_60001E68;
    }
    // 0x60001E54: slti        $at, $v1, 0xA0
    ctx->r1 = SIGNED(ctx->r3) < 0XA0 ? 1 : 0;
    // 0x60001E58: addiu       $t7, $v1, 0x228
    ctx->r15 = ADD32(ctx->r3, 0X228);
    // 0x60001E5C: b           L_60001F3C
    // 0x60001E60: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_60001F3C;
    // 0x60001E60: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x60001E64: slti        $at, $v1, 0xA0
    ctx->r1 = SIGNED(ctx->r3) < 0XA0 ? 1 : 0;
L_60001E68:
    // 0x60001E68: bne         $at, $zero, L_60001EB0
    if (ctx->r1 != 0) {
        // 0x60001E6C: slti        $at, $v1, 0x50
        ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_60001EB0;
    }
    // 0x60001E6C: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x60001E70: addiu       $v0, $v1, -0xA0
    ctx->r2 = ADD32(ctx->r3, -0XA0);
    // 0x60001E74: bgez        $v0, L_60001E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x60001E78: andi        $t8, $v0, 0x7
        ctx->r24 = ctx->r2 & 0X7;
            goto L_60001E88;
    }
    // 0x60001E78: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x60001E7C: beq         $t8, $zero, L_60001E88
    if (ctx->r24 == 0) {
        // 0x60001E80: nop
    
            goto L_60001E88;
    }
    // 0x60001E80: nop

    // 0x60001E84: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_60001E88:
    // 0x60001E88: bgez        $v0, L_60001E98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x60001E8C: sra         $t9, $v0, 3
        ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
            goto L_60001E98;
    }
    // 0x60001E8C: sra         $t9, $v0, 3
    ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
    // 0x60001E90: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x60001E94: sra         $t9, $at, 3
    ctx->r25 = S32(SIGNED(ctx->r1) >> 3);
L_60001E98:
    // 0x60001E98: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x60001E9C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x60001EA0: addiu       $t2, $t1, 0x200
    ctx->r10 = ADD32(ctx->r9, 0X200);
    // 0x60001EA4: b           L_60001F3C
    // 0x60001EA8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
        goto L_60001F3C;
    // 0x60001EA8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x60001EAC: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
L_60001EB0:
    // 0x60001EB0: bne         $at, $zero, L_60001F00
    if (ctx->r1 != 0) {
        // 0x60001EB4: nop
    
            goto L_60001F00;
    }
    // 0x60001EB4: nop

    // 0x60001EB8: addiu       $v0, $v1, -0x50
    ctx->r2 = ADD32(ctx->r3, -0X50);
    // 0x60001EBC: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x60001EC0: bne         $a3, $zero, L_60001ECC
    if (ctx->r7 != 0) {
        // 0x60001EC4: nop
    
            goto L_60001ECC;
    }
    // 0x60001EC4: nop

    // 0x60001EC8: break       7
    do_break(1610620616);
L_60001ECC:
    // 0x60001ECC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001ED0: bne         $a3, $at, L_60001EE4
    if (ctx->r7 != ctx->r1) {
        // 0x60001ED4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_60001EE4;
    }
    // 0x60001ED4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60001ED8: bne         $v0, $at, L_60001EE4
    if (ctx->r2 != ctx->r1) {
        // 0x60001EDC: nop
    
            goto L_60001EE4;
    }
    // 0x60001EDC: nop

    // 0x60001EE0: break       6
    do_break(1610620640);
L_60001EE4:
    // 0x60001EE4: mflo        $t4
    ctx->r12 = lo;
    // 0x60001EE8: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x60001EEC: mfhi        $t3
    ctx->r11 = hi;
    // 0x60001EF0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x60001EF4: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x60001EF8: b           L_60001F3C
    // 0x60001EFC: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_60001F3C;
    // 0x60001EFC: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_60001F00:
    // 0x60001F00: div         $zero, $v1, $a3
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r7)));
    // 0x60001F04: bne         $a3, $zero, L_60001F10
    if (ctx->r7 != 0) {
        // 0x60001F08: nop
    
            goto L_60001F10;
    }
    // 0x60001F08: nop

    // 0x60001F0C: break       7
    do_break(1610620684);
L_60001F10:
    // 0x60001F10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001F14: bne         $a3, $at, L_60001F28
    if (ctx->r7 != ctx->r1) {
        // 0x60001F18: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_60001F28;
    }
    // 0x60001F18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60001F1C: bne         $v1, $at, L_60001F28
    if (ctx->r3 != ctx->r1) {
        // 0x60001F20: nop
    
            goto L_60001F28;
    }
    // 0x60001F20: nop

    // 0x60001F24: break       6
    do_break(1610620708);
L_60001F28:
    // 0x60001F28: mflo        $t8
    ctx->r24 = lo;
    // 0x60001F2C: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x60001F30: mfhi        $t9
    ctx->r25 = hi;
    // 0x60001F34: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x60001F38: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_60001F3C:
    // 0x60001F3C: lbu         $t2, 0x0($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X0);
    // 0x60001F40: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60001F44: bne         $a2, $t2, L_60001E1C
    if (ctx->r6 != ctx->r10) {
        // 0x60001F48: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_60001E1C;
    }
    // 0x60001F48: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60001F4C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x60001F50: jr          $ra
    // 0x60001F54: sh          $t4, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r12;
    return;
    // 0x60001F54: sh          $t4, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r12;
;}
RECOMP_FUNC void ovl_menu_stage_1F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001F58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001F60: jal         0x6000085C
    // 0x60001F64: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_0;
    // 0x60001F64: nop

    after_0:
    // 0x60001F68: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x60001F6C: jal         0x60000E8C
    // 0x60001F70: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    ovl_menu_stage_E8C(rdram, ctx);
        goto after_1;
    // 0x60001F70: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x60001F74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60001F78: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001F7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001F80: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60001F84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001F88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001F8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001F90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001F94: lw          $a0, 0x6938($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6938);
    // 0x60001F98: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x60001F9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x60001FA0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x60001FA4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x60001FA8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60001FAC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60001FB0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x60001FB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x60001FB8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x60001FBC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x60001FC0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x60001FC4: jal         0x60000DB4
    // 0x60001FC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    ovl_menu_stage_DB4(rdram, ctx);
        goto after_2;
    // 0x60001FC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x60001FCC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001FD0: addiu       $v1, $v1, 0x693C
    ctx->r3 = ADD32(ctx->r3, 0X693C);
    // 0x60001FD4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x60001FD8: jal         0x60000DA8
    // 0x60001FDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_DA8(rdram, ctx);
        goto after_3;
    // 0x60001FDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60001FE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x60001FE4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x60001FE8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x60001FEC: jal         0x60000DB4
    // 0x60001FF0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    ovl_menu_stage_DB4(rdram, ctx);
        goto after_4;
    // 0x60001FF0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x60001FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001FF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FFC: sw          $v0, 0x693C($at)
    MEM_W(0X693C, ctx->r1) = ctx->r2;
    // 0x60002000: jr          $ra
    // 0x60002004: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60002004: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_stage_2008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000200C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60002010: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60002014: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x60002018: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x6000201C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x60002020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002024: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002028: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
    // 0x6000202C: addiu       $a2, $a2, 0x3EB
    ctx->r6 = ADD32(ctx->r6, 0X3EB);
    // 0x60002030: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60002034: jal         0x60000F34
    // 0x60002038: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_0;
    // 0x60002038: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x6000203C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002044: jr          $ra
    // 0x60002048: nop

    return;
    // 0x60002048: nop

;}
RECOMP_FUNC void ovl_menu_stage_204C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000204C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002050: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60002058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000205C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x60002060: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x60002064: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x60002068: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x6000206C: jal         0x60000F34
    // 0x60002070: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_0;
    // 0x60002070: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60002074: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60002078: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x6000207C: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x60002080: nop

    // 0x60002084: beq         $v0, $zero, L_600020A4
    if (ctx->r2 == 0) {
        // 0x60002088: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_600020A4;
    }
    // 0x60002088: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x6000208C: beq         $t7, $zero, L_600020A0
    if (ctx->r15 == 0) {
        // 0x60002090: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_600020A0;
    }
    // 0x60002090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002098: jal         0x60002008
    // 0x6000209C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_1;
    // 0x6000209C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_1:
L_600020A0:
    // 0x600020A0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
L_600020A4:
    // 0x600020A4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x600020A8: lbu         $v0, 0x1($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X1);
    // 0x600020AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600020B0: beq         $v0, $zero, L_600020D0
    if (ctx->r2 == 0) {
        // 0x600020B4: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_600020D0;
    }
    // 0x600020B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x600020B8: beq         $t9, $at, L_600020CC
    if (ctx->r25 == ctx->r1) {
        // 0x600020BC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_600020CC;
    }
    // 0x600020BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600020C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600020C4: jal         0x60002008
    // 0x600020C8: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_2;
    // 0x600020C8: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_2:
L_600020CC:
    // 0x600020CC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_600020D0:
    // 0x600020D0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x600020D4: lbu         $v0, 0x2($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X2);
    // 0x600020D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600020DC: beq         $v0, $zero, L_600020FC
    if (ctx->r2 == 0) {
        // 0x600020E0: lw          $t2, 0x1C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X1C);
            goto L_600020FC;
    }
    // 0x600020E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x600020E4: beq         $t1, $at, L_600020F8
    if (ctx->r9 == ctx->r1) {
        // 0x600020E8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_600020F8;
    }
    // 0x600020E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600020EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600020F0: jal         0x60002008
    // 0x600020F4: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_3;
    // 0x600020F4: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_3:
L_600020F8:
    // 0x600020F8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_600020FC:
    // 0x600020FC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x60002100: lbu         $v0, 0x3($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X3);
    // 0x60002104: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002108: beq         $v0, $zero, L_60002128
    if (ctx->r2 == 0) {
        // 0x6000210C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002128;
    }
    // 0x6000210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002110: beq         $t3, $at, L_60002124
    if (ctx->r11 == ctx->r1) {
        // 0x60002114: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_60002124;
    }
    // 0x60002114: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x6000211C: jal         0x60002008
    // 0x60002120: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_4;
    // 0x60002120: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_4:
L_60002124:
    // 0x60002124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002128:
    // 0x60002128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000212C: jr          $ra
    // 0x60002130: nop

    return;
    // 0x60002130: nop

;}
RECOMP_FUNC void ovl_menu_stage_2134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002134: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60002138: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x6000213C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x60002140: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x60002144: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x60002148: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x6000214C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60002150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60002154: addiu       $a2, $zero, 0x542
    ctx->r6 = ADD32(0, 0X542);
    // 0x60002158: jal         0x60000F34
    // 0x6000215C: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_menu_stage_F34(rdram, ctx);
        goto after_0;
    // 0x6000215C: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x60002160: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60002164: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x60002168: beq         $t6, $zero, L_60002180
    if (ctx->r14 == 0) {
        // 0x6000216C: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_60002180;
    }
    // 0x6000216C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60002170: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60002174: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002178: b           L_60002190
    // 0x6000217C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
        goto L_60002190;
    // 0x6000217C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
L_60002180:
    // 0x60002180: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x60002184: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002188: nop

    // 0x6000218C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
L_60002190:
    // 0x60002190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002194: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002198: lwc1        $f10, 0x68EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X68EC);
    // 0x6000219C: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x600021A0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x600021A4: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x600021A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x600021AC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x600021B0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x600021B4: swc1        $f17, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(17 - 1) * 2];
    // 0x600021B8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x600021BC: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x600021C0: jal         0x60000F34
    // 0x600021C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_1;
    // 0x600021C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x600021C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021CC: lwc1        $f18, 0x68F0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X68F0);
    // 0x600021D0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x600021D4: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x600021D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x600021DC: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x600021E0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x600021E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x600021E8: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x600021EC: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x600021F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x600021F4: jal         0x60000F34
    // 0x600021F8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_2;
    // 0x600021F8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x600021FC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x60002200: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002204: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x60002208: addiu       $a3, $zero, 0x544
    ctx->r7 = ADD32(0, 0X544);
    // 0x6000220C: jal         0x60000F34
    // 0x60002210: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_3;
    // 0x60002210: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x60002214: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x60002218: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x6000221C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60002220: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60002224: jal         0x60000F34
    // 0x60002228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_4;
    // 0x60002228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x6000222C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x60002230: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002234: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x60002238: addiu       $a3, $zero, 0x5BB
    ctx->r7 = ADD32(0, 0X5BB);
    // 0x6000223C: jal         0x60000F34
    // 0x60002240: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_5;
    // 0x60002240: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x60002244: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x60002248: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x6000224C: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x60002250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002254: beq         $v0, $zero, L_60002268
    if (ctx->r2 == 0) {
        // 0x60002258: lw          $t8, 0x4C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X4C);
            goto L_60002268;
    }
    // 0x60002258: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x6000225C: jal         0x60002008
    // 0x60002260: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_6;
    // 0x60002260: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_6:
    // 0x60002264: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_60002268:
    // 0x60002268: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x6000226C: lbu         $v0, 0x1($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X1);
    // 0x60002270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002274: beq         $v0, $zero, L_60002288
    if (ctx->r2 == 0) {
        // 0x60002278: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_60002288;
    }
    // 0x60002278: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x6000227C: jal         0x60002008
    // 0x60002280: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_7;
    // 0x60002280: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_7:
    // 0x60002284: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_60002288:
    // 0x60002288: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x6000228C: lbu         $v0, 0x2($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X2);
    // 0x60002290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60002294: beq         $v0, $zero, L_600022A8
    if (ctx->r2 == 0) {
        // 0x60002298: lw          $t0, 0x4C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X4C);
            goto L_600022A8;
    }
    // 0x60002298: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x6000229C: jal         0x60002008
    // 0x600022A0: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_8;
    // 0x600022A0: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_8:
    // 0x600022A4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
L_600022A8:
    // 0x600022A8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x600022AC: lbu         $v0, 0x3($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X3);
    // 0x600022B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600022B4: beq         $v0, $zero, L_600022C8
    if (ctx->r2 == 0) {
        // 0x600022B8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_600022C8;
    }
    // 0x600022B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600022BC: jal         0x60002008
    // 0x600022C0: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_stage_2008(rdram, ctx);
        goto after_9;
    // 0x600022C0: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_9:
    // 0x600022C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_600022C8:
    // 0x600022C8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x600022CC: jr          $ra
    // 0x600022D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600022D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_stage_22D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600022D4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600022D8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x600022DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x600022E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600022E4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600022E8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x600022EC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x600022F0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x600022F4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x600022F8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x600022FC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002300: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002304: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x60002308: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x6000230C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60002310: jal         0x6000064C
    // 0x60002314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_0;
    // 0x60002314: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60002318: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x6000231C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x60002320: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002324: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x60002328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000232C: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x60002330: addiu       $t7, $zero, 0x84
    ctx->r15 = ADD32(0, 0X84);
    // 0x60002334: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x60002338: sw          $t6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r14;
    // 0x6000233C: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
    // 0x60002340: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
    // 0x60002344: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002348: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x6000234C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x60002350: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002354: lwc1        $f20, 0x68F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X68F4);
    // 0x60002358: addiu       $s3, $s3, 0x65B4
    ctx->r19 = ADD32(ctx->r19, 0X65B4);
    // 0x6000235C: addiu       $s5, $sp, 0x44
    ctx->r21 = ADD32(ctx->r29, 0X44);
    // 0x60002360: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x60002364: addiu       $t9, $s0, -0x1
    ctx->r25 = ADD32(ctx->r16, -0X1);
L_60002368:
    // 0x60002368: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x6000236C: beq         $at, $zero, L_60002A5C
    if (ctx->r1 == 0) {
        // 0x60002370: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_60002A5C;
    }
    // 0x60002370: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60002374: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002378: addu        $at, $at, $t9
    gpr jr_addend_60002384 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x6000237C: lw          $t9, 0x68F8($at)
    ctx->r25 = ADD32(ctx->r1, 0X68F8);
    // 0x60002380: nop

    // 0x60002384: jr          $t9
    // 0x60002388: nop

    switch (jr_addend_60002384 >> 2) {
        case 0: goto L_6000238C; break;
        case 1: goto L_600024C8; break;
        case 2: goto L_60002A5C; break;
        case 3: goto L_600024FC; break;
        case 4: goto L_60002A5C; break;
        case 5: goto L_60002A5C; break;
        case 6: goto L_60002728; break;
        case 7: goto L_60002728; break;
        case 8: goto L_60002A5C; break;
        case 9: goto L_60002764; break;
        case 10: goto L_600025CC; break;
        default: switch_error(__func__, 0x60002384, 0x600068F8);
    }
    // 0x60002388: nop

L_6000238C:
    // 0x6000238C: jal         0x60000244
    // 0x60002390: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_1;
    // 0x60002390: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_1:
    // 0x60002394: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002398: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x6000239C: jal         0x60001CE4
    // 0x600023A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_2;
    // 0x600023A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x600023A4: jal         0x60000850
    // 0x600023A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_stage_850(rdram, ctx);
        goto after_3;
    // 0x600023A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_3:
    // 0x600023AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600023B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x600023B4: jal         0x60001CE4
    // 0x600023B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_4;
    // 0x600023B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x600023BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600023C0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x600023C4: jal         0x60001CE4
    // 0x600023C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_5;
    // 0x600023C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x600023CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600023D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x600023D4: jal         0x60001CE4
    // 0x600023D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_6;
    // 0x600023D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x600023DC: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600023E0: lw          $t0, 0x6748($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6748);
    // 0x600023E4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x600023E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x600023EC: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x600023F0: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x600023F4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x600023F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600023FC: jal         0x600006A0
    // 0x60002400: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_7;
    // 0x60002400: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_7:
    // 0x60002404: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002408: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000240C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002410: jal         0x60000574
    // 0x60002414: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_stage_574(rdram, ctx);
        goto after_8;
    // 0x60002414: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x60002418: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000241C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002420: jal         0x60001CE4
    // 0x60002424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_9;
    // 0x60002424: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x60002428: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000242C: addiu       $a0, $a0, 0x6750
    ctx->r4 = ADD32(ctx->r4, 0X6750);
    // 0x60002430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002438: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x6000243C: jal         0x60000D30
    // 0x60002440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_10;
    // 0x60002440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x60002444: jal         0x60000D3C
    // 0x60002448: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_11;
    // 0x60002448: nop

    after_11:
    // 0x6000244C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002450: jal         0x600006AC
    // 0x60002454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_12;
    // 0x60002454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x60002458: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000245C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002460: jal         0x60001CE4
    // 0x60002464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_13;
    // 0x60002464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x60002468: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000246C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002470: jal         0x60001CE4
    // 0x60002474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_14;
    // 0x60002474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x60002478: bne         $s2, $zero, L_600024AC
    if (ctx->r18 != 0) {
        // 0x6000247C: nop
    
            goto L_600024AC;
    }
    // 0x6000247C: nop

    // 0x60002480: jal         0x60000904
    // 0x60002484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_15;
    // 0x60002484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x60002488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000248C: beq         $v0, $at, L_600024AC
    if (ctx->r2 == ctx->r1) {
        // 0x60002490: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600024AC;
    }
    // 0x60002490: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002494: beq         $v0, $zero, L_600024CC
    if (ctx->r2 == 0) {
        // 0x60002498: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_600024CC;
    }
    // 0x60002498: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000249C: bne         $v0, $s4, L_60002368
    if (ctx->r2 != ctx->r20) {
        // 0x600024A0: addiu       $t9, $s0, -0x1
        ctx->r25 = ADD32(ctx->r16, -0X1);
            goto L_60002368;
    }
    // 0x600024A0: addiu       $t9, $s0, -0x1
    ctx->r25 = ADD32(ctx->r16, -0X1);
    // 0x600024A4: b           L_600024CC
    // 0x600024A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_600024CC;
    // 0x600024A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_600024AC:
    // 0x600024AC: bne         $s2, $zero, L_600024C0
    if (ctx->r18 != 0) {
        // 0x600024B0: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_600024C0;
    }
    // 0x600024B0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x600024B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x600024B8: b           L_60002A5C
    // 0x600024BC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
        goto L_60002A5C;
    // 0x600024BC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
L_600024C0:
    // 0x600024C0: b           L_60002A5C
    // 0x600024C4: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
        goto L_60002A5C;
    // 0x600024C4: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_600024C8:
    // 0x600024C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_600024CC:
    // 0x600024CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600024D0: jal         0x60001CE4
    // 0x600024D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_16;
    // 0x600024D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x600024D8: jal         0x60000850
    // 0x600024DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_stage_850(rdram, ctx);
        goto after_17;
    // 0x600024DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_17:
    // 0x600024E0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600024E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600024E8: jal         0x60001CE4
    // 0x600024EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_18;
    // 0x600024EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x600024F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x600024F4: b           L_60002A5C
    // 0x600024F8: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
        goto L_60002A5C;
    // 0x600024F8: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_600024FC:
    // 0x600024FC: jal         0x60000244
    // 0x60002500: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_19;
    // 0x60002500: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_19:
    // 0x60002504: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002508: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x6000250C: jal         0x60001CE4
    // 0x60002510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_20;
    // 0x60002510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x60002514: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60002518: lw          $t5, 0x6748($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6748);
    // 0x6000251C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x60002520: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x60002524: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x60002528: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x6000252C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x60002530: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002534: jal         0x600006A0
    // 0x60002538: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_21;
    // 0x60002538: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_21:
    // 0x6000253C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002540: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002544: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002548: jal         0x60000574
    // 0x6000254C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_stage_574(rdram, ctx);
        goto after_22;
    // 0x6000254C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_22:
    // 0x60002550: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002554: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x60002558: jal         0x60001CE4
    // 0x6000255C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_23;
    // 0x6000255C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x60002560: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002564: addiu       $a0, $a0, 0x6750
    ctx->r4 = ADD32(ctx->r4, 0X6750);
    // 0x60002568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000256C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002570: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60002574: jal         0x60000D30
    // 0x60002578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_24;
    // 0x60002578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x6000257C: jal         0x60000D3C
    // 0x60002580: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_25;
    // 0x60002580: nop

    after_25:
    // 0x60002584: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002588: jal         0x600006AC
    // 0x6000258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_26;
    // 0x6000258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x60002590: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002594: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60002598: jal         0x60001CE4
    // 0x6000259C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_27;
    // 0x6000259C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x600025A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600025A4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x600025A8: jal         0x60001CE4
    // 0x600025AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_28;
    // 0x600025AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x600025B0: bne         $s2, $zero, L_600025C4
    if (ctx->r18 != 0) {
        // 0x600025B4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_600025C4;
    }
    // 0x600025B4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x600025B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600025BC: b           L_60002A5C
    // 0x600025C0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
        goto L_60002A5C;
    // 0x600025C0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_600025C4:
    // 0x600025C4: b           L_60002A5C
    // 0x600025C8: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
        goto L_60002A5C;
    // 0x600025C8: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
L_600025CC:
    // 0x600025CC: jal         0x60000244
    // 0x600025D0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_29;
    // 0x600025D0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_29:
    // 0x600025D4: jal         0x60000CF4
    // 0x600025D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_CF4(rdram, ctx);
        goto after_30;
    // 0x600025D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_30:
    // 0x600025DC: beq         $v0, $zero, L_60002610
    if (ctx->r2 == 0) {
        // 0x600025E0: addiu       $s1, $zero, 0xA
        ctx->r17 = ADD32(0, 0XA);
            goto L_60002610;
    }
    // 0x600025E0: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
    // 0x600025E4: jal         0x60000D24
    // 0x600025E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_D24(rdram, ctx);
        goto after_31;
    // 0x600025E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_31:
    // 0x600025EC: beq         $v0, $zero, L_6000260C
    if (ctx->r2 == 0) {
        // 0x600025F0: addiu       $s1, $zero, 0x12
        ctx->r17 = ADD32(0, 0X12);
            goto L_6000260C;
    }
    // 0x600025F0: addiu       $s1, $zero, 0x12
    ctx->r17 = ADD32(0, 0X12);
    // 0x600025F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600025F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600025FC: jal         0x60001CE4
    // 0x60002600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_32;
    // 0x60002600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_32:
    // 0x60002604: b           L_60002620
    // 0x60002608: nop

        goto L_60002620;
    // 0x60002608: nop

L_6000260C:
    // 0x6000260C: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_60002610:
    // 0x60002610: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002614: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60002618: jal         0x60001CE4
    // 0x6000261C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_33;
    // 0x6000261C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_33:
L_60002620:
    // 0x60002620: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60002624: lw          $t9, 0x674C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X674C);
    // 0x60002628: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x6000262C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x60002630: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x60002634: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x60002638: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x6000263C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002640: jal         0x600006A0
    // 0x60002644: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_34;
    // 0x60002644: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    after_34:
    // 0x60002648: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x6000264C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002650: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002654: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60002658: jal         0x60000574
    // 0x6000265C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_574(rdram, ctx);
        goto after_35;
    // 0x6000265C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_35:
    // 0x60002660: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002664: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60002668: jal         0x60001CE4
    // 0x6000266C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_36;
    // 0x6000266C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_36:
    // 0x60002670: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002674: addiu       $a0, $a0, 0x6788
    ctx->r4 = ADD32(ctx->r4, 0X6788);
    // 0x60002678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000267C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60002680: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60002684: jal         0x60000D30
    // 0x60002688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_37;
    // 0x60002688: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_37:
    // 0x6000268C: jal         0x60000D3C
    // 0x60002690: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_38;
    // 0x60002690: nop

    after_38:
    // 0x60002694: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002698: jal         0x600006AC
    // 0x6000269C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_39;
    // 0x6000269C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x600026A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600026A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600026A8: jal         0x60001CE4
    // 0x600026AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_40;
    // 0x600026AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_40:
    // 0x600026B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600026B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600026B8: jal         0x60001CE4
    // 0x600026BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_41;
    // 0x600026BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_41:
    // 0x600026C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600026C4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x600026C8: jal         0x60001CE4
    // 0x600026CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_42;
    // 0x600026CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_42:
    // 0x600026D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600026D4: bne         $s2, $at, L_6000270C
    if (ctx->r18 != ctx->r1) {
        // 0x600026D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_6000270C;
    }
    // 0x600026D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600026DC: jal         0x60000904
    // 0x600026E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_43;
    // 0x600026E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_43:
    // 0x600026E4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x600026E8: beq         $v0, $at, L_60002708
    if (ctx->r2 == ctx->r1) {
        // 0x600026EC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60002708;
    }
    // 0x600026EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600026F0: beq         $v0, $zero, L_600024CC
    if (ctx->r2 == 0) {
        // 0x600026F4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_600024CC;
    }
    // 0x600026F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600026F8: bne         $v0, $s4, L_60002368
    if (ctx->r2 != ctx->r20) {
        // 0x600026FC: addiu       $t9, $s0, -0x1
        ctx->r25 = ADD32(ctx->r16, -0X1);
            goto L_60002368;
    }
    // 0x600026FC: addiu       $t9, $s0, -0x1
    ctx->r25 = ADD32(ctx->r16, -0X1);
    // 0x60002700: b           L_600024CC
    // 0x60002704: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_600024CC;
    // 0x60002704: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_60002708:
    // 0x60002708: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_6000270C:
    // 0x6000270C: bne         $s2, $at, L_60002720
    if (ctx->r18 != ctx->r1) {
        // 0x60002710: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_60002720;
    }
    // 0x60002710: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x60002714: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60002718: b           L_60002A5C
    // 0x6000271C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
        goto L_60002A5C;
    // 0x6000271C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
L_60002720:
    // 0x60002720: b           L_60002A5C
    // 0x60002724: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
        goto L_60002A5C;
    // 0x60002724: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
L_60002728:
    // 0x60002728: jal         0x60000244
    // 0x6000272C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_44;
    // 0x6000272C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_44:
    // 0x60002730: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002734: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60002738: jal         0x60001CE4
    // 0x6000273C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_45;
    // 0x6000273C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_45:
    // 0x60002740: jal         0x60000850
    // 0x60002744: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    ovl_menu_stage_850(rdram, ctx);
        goto after_46;
    // 0x60002744: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_46:
    // 0x60002748: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000274C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60002750: jal         0x60001CE4
    // 0x60002754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_47;
    // 0x60002754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x60002758: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x6000275C: b           L_60002A5C
    // 0x60002760: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
        goto L_60002A5C;
    // 0x60002760: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_60002764:
    // 0x60002764: jal         0x60000CF4
    // 0x60002768: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_CF4(rdram, ctx);
        goto after_48;
    // 0x60002768: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x6000276C: beq         $v0, $zero, L_600025CC
    if (ctx->r2 == 0) {
        // 0x60002770: nop
    
            goto L_600025CC;
    }
    // 0x60002770: nop

    // 0x60002774: jal         0x60000D24
    // 0x60002778: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_D24(rdram, ctx);
        goto after_49;
    // 0x60002778: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_49:
    // 0x6000277C: beq         $v0, $zero, L_600025CC
    if (ctx->r2 == 0) {
        // 0x60002780: nop
    
            goto L_600025CC;
    }
    // 0x60002780: nop

    // 0x60002784: jal         0x60000244
    // 0x60002788: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_50;
    // 0x60002788: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_50:
    // 0x6000278C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002790: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002794: jal         0x60001CE4
    // 0x60002798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_51;
    // 0x60002798: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_51:
    // 0x6000279C: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x600027A0: lw          $t4, 0x674C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X674C);
    // 0x600027A4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x600027A8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x600027AC: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x600027B0: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x600027B4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x600027B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600027BC: jal         0x600006A0
    // 0x600027C0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_52;
    // 0x600027C0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    after_52:
    // 0x600027C4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600027C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600027CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600027D0: jal         0x60000574
    // 0x600027D4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_stage_574(rdram, ctx);
        goto after_53;
    // 0x600027D4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_53:
    // 0x600027D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600027DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x600027E0: jal         0x60001CE4
    // 0x600027E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_54;
    // 0x600027E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_54:
    // 0x600027E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600027EC: addiu       $a0, $a0, 0x67C0
    ctx->r4 = ADD32(ctx->r4, 0X67C0);
    // 0x600027F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600027F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600027F8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x600027FC: jal         0x60000D30
    // 0x60002800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_55;
    // 0x60002800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_55:
    // 0x60002804: jal         0x60000D3C
    // 0x60002808: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_56;
    // 0x60002808: nop

    after_56:
    // 0x6000280C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002810: jal         0x600006AC
    // 0x60002814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_57;
    // 0x60002814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_57:
    // 0x60002818: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000281C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002820: jal         0x60001CE4
    // 0x60002824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_58;
    // 0x60002824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_58:
    // 0x60002828: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000282C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60002830: jal         0x60001CE4
    // 0x60002834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_59;
    // 0x60002834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_59:
    // 0x60002838: bne         $s2, $zero, L_60002870
    if (ctx->r18 != 0) {
        // 0x6000283C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60002870;
    }
    // 0x6000283C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002840: jal         0x60000904
    // 0x60002844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_60;
    // 0x60002844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_60:
    // 0x60002848: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x6000284C: beq         $v0, $at, L_6000286C
    if (ctx->r2 == ctx->r1) {
        // 0x60002850: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_6000286C;
    }
    // 0x60002850: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002854: beq         $v0, $zero, L_600024CC
    if (ctx->r2 == 0) {
        // 0x60002858: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_600024CC;
    }
    // 0x60002858: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000285C: bne         $v0, $s4, L_60002368
    if (ctx->r2 != ctx->r20) {
        // 0x60002860: addiu       $t9, $s0, -0x1
        ctx->r25 = ADD32(ctx->r16, -0X1);
            goto L_60002368;
    }
    // 0x60002860: addiu       $t9, $s0, -0x1
    ctx->r25 = ADD32(ctx->r16, -0X1);
    // 0x60002864: b           L_600024CC
    // 0x60002868: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_600024CC;
    // 0x60002868: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_6000286C:
    // 0x6000286C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_60002870:
    // 0x60002870: bne         $s2, $at, L_60002A44
    if (ctx->r18 != ctx->r1) {
        // 0x60002874: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60002A44;
    }
    // 0x60002874: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002878: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x6000287C: jal         0x60001CE4
    // 0x60002880: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_61;
    // 0x60002880: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_61:
    // 0x60002884: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002888: lw          $t6, 0x6744($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6744);
    // 0x6000288C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x60002890: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x60002894: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x60002898: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x6000289C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x600028A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600028A4: jal         0x600006A0
    // 0x600028A8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_62;
    // 0x600028A8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    after_62:
    // 0x600028AC: lui         $a1, 0x3FD9
    ctx->r5 = S32(0X3FD9 << 16);
    // 0x600028B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600028B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600028B8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x600028BC: jal         0x60000574
    // 0x600028C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_574(rdram, ctx);
        goto after_63;
    // 0x600028C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_63:
    // 0x600028C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600028C8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600028CC: jal         0x60001CE4
    // 0x600028D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_64;
    // 0x600028D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_64:
    // 0x600028D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600028D8: addiu       $a0, $a0, 0x6814
    ctx->r4 = ADD32(ctx->r4, 0X6814);
    // 0x600028DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600028E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600028E4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x600028E8: jal         0x60000D30
    // 0x600028EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_65;
    // 0x600028EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_65:
    // 0x600028F0: jal         0x60000D3C
    // 0x600028F4: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_66;
    // 0x600028F4: nop

    after_66:
    // 0x600028F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x600028FC: jal         0x600006AC
    // 0x60002900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_67;
    // 0x60002900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_67:
    // 0x60002904: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002908: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x6000290C: jal         0x60001CE4
    // 0x60002910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_68;
    // 0x60002910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_68:
    // 0x60002914: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002918: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x6000291C: jal         0x60001CE4
    // 0x60002920: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_69;
    // 0x60002920: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_69:
    // 0x60002924: bne         $s2, $zero, L_60002A3C
    if (ctx->r18 != 0) {
        // 0x60002928: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_60002A3C;
    }
    // 0x60002928: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x6000292C: jal         0x60000910
    // 0x60002930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_910(rdram, ctx);
        goto after_70;
    // 0x60002930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_70:
    // 0x60002934: beq         $v0, $zero, L_60002A2C
    if (ctx->r2 == 0) {
        // 0x60002938: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60002A2C;
    }
    // 0x60002938: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000293C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002940: beq         $v0, $at, L_60002958
    if (ctx->r2 == ctx->r1) {
        // 0x60002944: nop
    
            goto L_60002958;
    }
    // 0x60002944: nop

    // 0x60002948: bne         $v0, $s4, L_60002368
    if (ctx->r2 != ctx->r20) {
        // 0x6000294C: addiu       $t9, $s0, -0x1
        ctx->r25 = ADD32(ctx->r16, -0X1);
            goto L_60002368;
    }
    // 0x6000294C: addiu       $t9, $s0, -0x1
    ctx->r25 = ADD32(ctx->r16, -0X1);
    // 0x60002950: b           L_600024CC
    // 0x60002954: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_600024CC;
    // 0x60002954: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_60002958:
    // 0x60002958: jal         0x60000244
    // 0x6000295C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_stage_244(rdram, ctx);
        goto after_71;
    // 0x6000295C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_71:
    // 0x60002960: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002964: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002968: jal         0x60001CE4
    // 0x6000296C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_72;
    // 0x6000296C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_72:
    // 0x60002970: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002974: lw          $t8, 0x674C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X674C);
    // 0x60002978: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x6000297C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x60002980: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x60002984: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x60002988: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x6000298C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002990: jal         0x600006A0
    // 0x60002994: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_73;
    // 0x60002994: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_73:
    // 0x60002998: lui         $a1, 0x3F8C
    ctx->r5 = S32(0X3F8C << 16);
    // 0x6000299C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x600029A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600029A4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x600029A8: jal         0x60000574
    // 0x600029AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_574(rdram, ctx);
        goto after_74;
    // 0x600029AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_74:
    // 0x600029B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600029B4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x600029B8: jal         0x60001CE4
    // 0x600029BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_75;
    // 0x600029BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_75:
    // 0x600029C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600029C4: addiu       $a0, $a0, 0x6788
    ctx->r4 = ADD32(ctx->r4, 0X6788);
    // 0x600029C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600029CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600029D0: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x600029D4: jal         0x60000D30
    // 0x600029D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_76;
    // 0x600029D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_76:
    // 0x600029DC: jal         0x60000D3C
    // 0x600029E0: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_77;
    // 0x600029E0: nop

    after_77:
    // 0x600029E4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x600029E8: jal         0x600006AC
    // 0x600029EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_78;
    // 0x600029EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_78:
    // 0x600029F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600029F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600029F8: jal         0x60001CE4
    // 0x600029FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_79;
    // 0x600029FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_79:
    // 0x60002A00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60002A04: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x60002A08: jal         0x60001CE4
    // 0x60002A0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_80;
    // 0x60002A0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_80:
    // 0x60002A10: bne         $s2, $zero, L_60002A24
    if (ctx->r18 != 0) {
        // 0x60002A14: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_60002A24;
    }
    // 0x60002A14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60002A18: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x60002A1C: b           L_60002A5C
    // 0x60002A20: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
        goto L_60002A5C;
    // 0x60002A20: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
L_60002A24:
    // 0x60002A24: b           L_60002A5C
    // 0x60002A28: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
        goto L_60002A5C;
    // 0x60002A28: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
L_60002A2C:
    // 0x60002A2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60002A30: b           L_60002A5C
    // 0x60002A34: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
        goto L_60002A5C;
    // 0x60002A34: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x60002A38: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_60002A3C:
    // 0x60002A3C: b           L_60002A5C
    // 0x60002A40: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
        goto L_60002A5C;
    // 0x60002A40: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_60002A44:
    // 0x60002A44: bne         $s2, $zero, L_60002A58
    if (ctx->r18 != 0) {
        // 0x60002A48: addiu       $t5, $zero, -0x1
        ctx->r13 = ADD32(0, -0X1);
            goto L_60002A58;
    }
    // 0x60002A48: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x60002A4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x60002A50: b           L_60002A5C
    // 0x60002A54: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
        goto L_60002A5C;
    // 0x60002A54: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_60002A58:
    // 0x60002A58: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
L_60002A5C:
    // 0x60002A5C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x60002A60: jal         0x60000550
    // 0x60002A64: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_81;
    // 0x60002A64: nop

    after_81:
    // 0x60002A68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60002A6C: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x60002A70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002A74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002A78: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60002A7C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x60002A80: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x60002A84: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x60002A88: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x60002A8C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x60002A90: jr          $ra
    // 0x60002A94: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60002A94: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_menu_stage_2A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002A98: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x60002A9C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002AA0: lw          $t6, 0x684C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X684C);
    // 0x60002AA4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x60002AA8: sw          $a0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r4;
    // 0x60002AAC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x60002AB0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x60002AB4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x60002AB8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x60002ABC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x60002AC0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x60002AC4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x60002AC8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x60002ACC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x60002AD0: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60002AD4: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x60002AD8: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002ADC: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x60002AE0: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002AE4: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60002AE8: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002AEC: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x60002AF0: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002AF4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x60002AF8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002AFC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x60002B00: addiu       $a0, $zero, 0x7ED
    ctx->r4 = ADD32(0, 0X7ED);
    // 0x60002B04: jal         0x60000118
    // 0x60002B08: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    ovl_menu_stage_118(rdram, ctx);
        goto after_0;
    // 0x60002B08: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    after_0:
    // 0x60002B0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B10: sw          $v0, 0x6930($at)
    MEM_W(0X6930, ctx->r1) = ctx->r2;
    // 0x60002B14: jal         0x60000118
    // 0x60002B18: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    ovl_menu_stage_118(rdram, ctx);
        goto after_1;
    // 0x60002B18: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_1:
    // 0x60002B1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B20: jal         0x60000C28
    // 0x60002B24: sw          $v0, 0x6934($at)
    MEM_W(0X6934, ctx->r1) = ctx->r2;
    ovl_menu_stage_C28(rdram, ctx);
        goto after_2;
    // 0x60002B24: sw          $v0, 0x6934($at)
    MEM_W(0X6934, ctx->r1) = ctx->r2;
    after_2:
    // 0x60002B28: jal         0x60000C1C
    // 0x60002B2C: nop

    ovl_menu_stage_C1C(rdram, ctx);
        goto after_3;
    // 0x60002B2C: nop

    after_3:
    // 0x60002B30: jal         0x60000C04
    // 0x60002B34: nop

    ovl_menu_stage_C04(rdram, ctx);
        goto after_4;
    // 0x60002B34: nop

    after_4:
    // 0x60002B38: sw          $v0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r2;
    // 0x60002B3C: jal         0x6000025C
    // 0x60002B40: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    ovl_menu_stage_25C(rdram, ctx);
        goto after_5;
    // 0x60002B40: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_5:
    // 0x60002B44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B48: lwc1        $f30, 0x6924($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6924);
    // 0x60002B4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x60002B50: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002B54: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x60002B58: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60002B5C: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x60002B60: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002B64: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60002B68: sw          $zero, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = 0;
L_60002B6C:
    // 0x60002B6C: addiu       $v1, $sp, 0xFC
    ctx->r3 = ADD32(ctx->r29, 0XFC);
    // 0x60002B70: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
L_60002B74:
    // 0x60002B74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002B78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_60002B7C:
    // 0x60002B7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002B80: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x60002B84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60002B88: bne         $at, $zero, L_60002B7C
    if (ctx->r1 != 0) {
        // 0x60002B8C: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_60002B7C;
    }
    // 0x60002B8C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x60002B90: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x60002B94: bne         $v1, $a1, L_60002B74
    if (ctx->r3 != ctx->r5) {
        // 0x60002B98: sw          $s1, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r17;
            goto L_60002B74;
    }
    // 0x60002B98: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60002B9C: lw          $t7, 0x1A0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A0);
    // 0x60002BA0: nop

    // 0x60002BA4: bne         $t7, $zero, L_600056C0
    if (ctx->r15 != 0) {
        // 0x60002BA8: lui         $t8, 0x6000
        ctx->r24 = S32(0X6000 << 16);
            goto L_600056C0;
    }
    // 0x60002BA8: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002BAC: addiu       $t8, $t8, 0xF50
    ctx->r24 = ADD32(ctx->r24, 0XF50);
    // 0x60002BB0: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
    // 0x60002BB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002BB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_60002BBC:
    // 0x60002BBC: jal         0x60000B68
    // 0x60002BC0: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_B68(rdram, ctx);
        goto after_6;
    // 0x60002BC0: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_6:
    // 0x60002BC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60002BC8: bne         $v0, $at, L_60002BD4
    if (ctx->r2 != ctx->r1) {
        // 0x60002BCC: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_60002BD4;
    }
    // 0x60002BCC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x60002BD0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_60002BD4:
    // 0x60002BD4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002BD8: nop

    // 0x60002BDC: srav        $t9, $s4, $s1
    ctx->r25 = S32(SIGNED(ctx->r20) >> (ctx->r17 & 31));
    // 0x60002BE0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x60002BE4: beq         $t0, $zero, L_60002D18
    if (ctx->r8 == 0) {
        // 0x60002BE8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_60002D18;
    }
    // 0x60002BE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002BEC: lw          $s0, 0x168($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X168);
    // 0x60002BF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002BF4: jal         0x60000B50
    // 0x60002BF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    ovl_menu_stage_B50(rdram, ctx);
        goto after_7;
    // 0x60002BF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_7:
    // 0x60002BFC: jal         0x60000B44
    // 0x60002C00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B44(rdram, ctx);
        goto after_8;
    // 0x60002C00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x60002C04: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
L_60002C08:
    // 0x60002C08: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x60002C0C: jal         0x60000BB0
    // 0x60002C10: addiu       $a0, $a0, 0xB5
    ctx->r4 = ADD32(ctx->r4, 0XB5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_9;
    // 0x60002C10: addiu       $a0, $a0, 0xB5
    ctx->r4 = ADD32(ctx->r4, 0XB5);
    after_9:
    // 0x60002C14: beq         $v0, $zero, L_60002C40
    if (ctx->r2 == 0) {
        // 0x60002C18: lw          $a0, 0x140($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X140);
            goto L_60002C40;
    }
    // 0x60002C18: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x60002C1C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002C20: addiu       $t2, $sp, 0xFC
    ctx->r10 = ADD32(ctx->r29, 0XFC);
    // 0x60002C24: sll         $t1, $s1, 4
    ctx->r9 = S32(ctx->r17 << 4);
    // 0x60002C28: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x60002C2C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x60002C30: nop

    // 0x60002C34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x60002C38: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x60002C3C: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
L_60002C40:
    // 0x60002C40: jal         0x60000BB0
    // 0x60002C44: addiu       $a0, $a0, 0xC5
    ctx->r4 = ADD32(ctx->r4, 0XC5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_10;
    // 0x60002C44: addiu       $a0, $a0, 0xC5
    ctx->r4 = ADD32(ctx->r4, 0XC5);
    after_10:
    // 0x60002C48: beq         $v0, $zero, L_60002C74
    if (ctx->r2 == 0) {
        // 0x60002C4C: lw          $a0, 0x140($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X140);
            goto L_60002C74;
    }
    // 0x60002C4C: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x60002C50: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002C54: addiu       $t6, $sp, 0xFC
    ctx->r14 = ADD32(ctx->r29, 0XFC);
    // 0x60002C58: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x60002C5C: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x60002C60: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x60002C64: nop

    // 0x60002C68: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60002C6C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x60002C70: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
L_60002C74:
    // 0x60002C74: jal         0x60000BB0
    // 0x60002C78: addiu       $a0, $a0, 0xD5
    ctx->r4 = ADD32(ctx->r4, 0XD5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_11;
    // 0x60002C78: addiu       $a0, $a0, 0xD5
    ctx->r4 = ADD32(ctx->r4, 0XD5);
    after_11:
    // 0x60002C7C: beq         $v0, $zero, L_60002CA8
    if (ctx->r2 == 0) {
        // 0x60002C80: lw          $a0, 0x140($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X140);
            goto L_60002CA8;
    }
    // 0x60002C80: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
    // 0x60002C84: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002C88: addiu       $t0, $sp, 0xFC
    ctx->r8 = ADD32(ctx->r29, 0XFC);
    // 0x60002C8C: sll         $t9, $s1, 4
    ctx->r25 = S32(ctx->r17 << 4);
    // 0x60002C90: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x60002C94: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x60002C98: nop

    // 0x60002C9C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60002CA0: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x60002CA4: lw          $a0, 0x140($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X140);
L_60002CA8:
    // 0x60002CA8: jal         0x60000BB0
    // 0x60002CAC: addiu       $a0, $a0, 0xE5
    ctx->r4 = ADD32(ctx->r4, 0XE5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_12;
    // 0x60002CAC: addiu       $a0, $a0, 0xE5
    ctx->r4 = ADD32(ctx->r4, 0XE5);
    after_12:
    // 0x60002CB0: beq         $v0, $zero, L_60002CDC
    if (ctx->r2 == 0) {
        // 0x60002CB4: lw          $v0, 0x140($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X140);
            goto L_60002CDC;
    }
    // 0x60002CB4: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
    // 0x60002CB8: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002CBC: addiu       $t4, $sp, 0xFC
    ctx->r12 = ADD32(ctx->r29, 0XFC);
    // 0x60002CC0: sll         $t3, $s1, 4
    ctx->r11 = S32(ctx->r17 << 4);
    // 0x60002CC4: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x60002CC8: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x60002CCC: nop

    // 0x60002CD0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x60002CD4: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x60002CD8: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
L_60002CDC:
    // 0x60002CDC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x60002CE0: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002CE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60002CE8: bne         $v0, $at, L_60002C08
    if (ctx->r2 != ctx->r1) {
        // 0x60002CEC: sw          $v0, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r2;
            goto L_60002C08;
    }
    // 0x60002CEC: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x60002CF0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x60002CF4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002CF8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60002CFC: lw          $a0, 0x57EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57EC);
    // 0x60002D00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60002D04: jal         0x60001E14
    // 0x60002D08: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_1E14(rdram, ctx);
        goto after_13;
    // 0x60002D08: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_13:
    // 0x60002D0C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002D10: nop

    // 0x60002D14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002D18:
    // 0x60002D18: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x60002D1C: bne         $at, $zero, L_60002BBC
    if (ctx->r1 != 0) {
        // 0x60002D20: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_60002BBC;
    }
    // 0x60002D20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60002D24: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002D28: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60002D2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D30: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60002D34: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x60002D38: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002D3C: jal         0x60001AEC
    // 0x60002D40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_14;
    // 0x60002D40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x60002D44: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D48: lw          $a0, 0x580C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X580C);
    // 0x60002D4C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x60002D50: jal         0x6000061C
    // 0x60002D54: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_15;
    // 0x60002D54: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_15:
    // 0x60002D58: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D5C: lw          $a0, 0x580C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X580C);
    // 0x60002D60: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x60002D64: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x60002D68: jal         0x60000574
    // 0x60002D6C: nop

    ovl_menu_stage_574(rdram, ctx);
        goto after_16;
    // 0x60002D6C: nop

    after_16:
    // 0x60002D70: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D74: lw          $a0, 0x580C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X580C);
    // 0x60002D78: jal         0x60000640
    // 0x60002D7C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_stage_640(rdram, ctx);
        goto after_17;
    // 0x60002D7C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_17:
    // 0x60002D80: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D84: lw          $a0, 0x580C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X580C);
    // 0x60002D88: jal         0x60000604
    // 0x60002D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_18;
    // 0x60002D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x60002D90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D94: lw          $a0, 0x5820($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5820);
    // 0x60002D98: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x60002D9C: jal         0x6000061C
    // 0x60002DA0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_19;
    // 0x60002DA0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_19:
    // 0x60002DA4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002DA8: lw          $a0, 0x5820($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5820);
    // 0x60002DAC: jal         0x60000604
    // 0x60002DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_20;
    // 0x60002DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x60002DB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002DB8: srav        $t8, $s4, $s1
    ctx->r24 = S32(SIGNED(ctx->r20) >> (ctx->r17 & 31));
L_60002DBC:
    // 0x60002DBC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x60002DC0: beq         $t9, $zero, L_60003108
    if (ctx->r25 == 0) {
        // 0x60002DC4: sll         $a1, $s1, 4
        ctx->r5 = S32(ctx->r17 << 4);
            goto L_60003108;
    }
    // 0x60002DC4: sll         $a1, $s1, 4
    ctx->r5 = S32(ctx->r17 << 4);
    // 0x60002DC8: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60002DCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002DD0: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
L_60002DD4:
    // 0x60002DD4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002DD8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002DDC: sll         $t0, $s1, 4
    ctx->r8 = S32(ctx->r17 << 4);
    // 0x60002DE0: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x60002DE4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60002DE8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60002DEC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60002DF0: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x60002DF4: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60002DF8: lw          $a0, 0x58E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58E8);
    // 0x60002DFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002E00: jal         0x6000061C
    // 0x60002E04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_21;
    // 0x60002E04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_21:
    // 0x60002E08: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002E0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002E10: sll         $t3, $s1, 4
    ctx->r11 = S32(ctx->r17 << 4);
    // 0x60002E14: subu        $t3, $t3, $s1
    ctx->r11 = SUB32(ctx->r11, ctx->r17);
    // 0x60002E18: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x60002E1C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x60002E20: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60002E24: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x60002E28: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60002E2C: lw          $a0, 0x58E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58E8);
    // 0x60002E30: jal         0x60000604
    // 0x60002E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_22;
    // 0x60002E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x60002E38: lw          $s2, 0x140($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X140);
    // 0x60002E3C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002E40: sra         $t9, $s2, 1
    ctx->r25 = S32(SIGNED(ctx->r18) >> 1);
    // 0x60002E44: sll         $s2, $t9, 2
    ctx->r18 = S32(ctx->r25 << 2);
    // 0x60002E48: sll         $t1, $s1, 4
    ctx->r9 = S32(ctx->r17 << 4);
    // 0x60002E4C: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x60002E50: addu        $a1, $sp, $t2
    ctx->r5 = ADD32(ctx->r29, ctx->r10);
    // 0x60002E54: lw          $a1, 0xFC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XFC);
    // 0x60002E58: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002E5C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x60002E60: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x60002E64: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x60002E68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x60002E6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x60002E70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60002E74: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x60002E78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002E7C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60002E80: lw          $a0, 0x58E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58E8);
    // 0x60002E84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002E88: mflo        $t3
    ctx->r11 = lo;
    // 0x60002E8C: sll         $a1, $t3, 3
    ctx->r5 = S32(ctx->r11 << 3);
    // 0x60002E90: jal         0x60000634
    // 0x60002E94: nop

    ovl_menu_stage_634(rdram, ctx);
        goto after_23;
    // 0x60002E94: nop

    after_23:
    // 0x60002E98: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002E9C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002EA0: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x60002EA4: subu        $t5, $t5, $s1
    ctx->r13 = SUB32(ctx->r13, ctx->r17);
    // 0x60002EA8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60002EAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x60002EB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60002EB4: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x60002EB8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60002EBC: lw          $a0, 0x58FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58FC);
    // 0x60002EC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002EC4: jal         0x6000061C
    // 0x60002EC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_24;
    // 0x60002EC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_24:
    // 0x60002ECC: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002ED0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002ED4: sll         $t8, $s1, 4
    ctx->r24 = S32(ctx->r17 << 4);
    // 0x60002ED8: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x60002EDC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x60002EE0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x60002EE4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60002EE8: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x60002EEC: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60002EF0: lw          $a0, 0x58FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58FC);
    // 0x60002EF4: jal         0x60000604
    // 0x60002EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_25;
    // 0x60002EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x60002EFC: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002F00: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002F04: sll         $t4, $s1, 4
    ctx->r12 = S32(ctx->r17 << 4);
    // 0x60002F08: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x60002F0C: addu        $a1, $sp, $t5
    ctx->r5 = ADD32(ctx->r29, ctx->r13);
    // 0x60002F10: lw          $a1, 0xFC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XFC);
    // 0x60002F14: sll         $t1, $s1, 4
    ctx->r9 = S32(ctx->r17 << 4);
    // 0x60002F18: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x60002F1C: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x60002F20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x60002F24: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x60002F28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60002F2C: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x60002F30: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F34: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60002F38: lw          $a0, 0x58FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58FC);
    // 0x60002F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002F40: mfhi        $t6
    ctx->r14 = hi;
    // 0x60002F44: sll         $a1, $t6, 3
    ctx->r5 = S32(ctx->r14 << 3);
    // 0x60002F48: jal         0x60000634
    // 0x60002F4C: nop

    ovl_menu_stage_634(rdram, ctx);
        goto after_26;
    // 0x60002F4C: nop

    after_26:
    // 0x60002F50: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
    // 0x60002F54: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x60002F58: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x60002F5C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x60002F60: bne         $at, $zero, L_60002DD4
    if (ctx->r1 != 0) {
        // 0x60002F64: sw          $v0, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r2;
            goto L_60002DD4;
    }
    // 0x60002F64: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x60002F68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002F6C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
L_60002F70:
    // 0x60002F70: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F74: sll         $t8, $s1, 4
    ctx->r24 = S32(ctx->r17 << 4);
    // 0x60002F78: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x60002F7C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x60002F80: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x60002F84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60002F88: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x60002F8C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60002F90: lw          $a0, 0x5898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5898);
    // 0x60002F94: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002F98: jal         0x6000061C
    // 0x60002F9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_27;
    // 0x60002F9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_27:
    // 0x60002FA0: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002FA4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002FA8: sll         $t1, $s1, 4
    ctx->r9 = S32(ctx->r17 << 4);
    // 0x60002FAC: subu        $t1, $t1, $s1
    ctx->r9 = SUB32(ctx->r9, ctx->r17);
    // 0x60002FB0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x60002FB4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x60002FB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60002FBC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x60002FC0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60002FC4: lw          $a0, 0x5898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5898);
    // 0x60002FC8: jal         0x60000604
    // 0x60002FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_28;
    // 0x60002FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x60002FD0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x60002FD4: bne         $s0, $at, L_6000301C
    if (ctx->r16 != ctx->r1) {
        // 0x60002FD8: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_6000301C;
    }
    // 0x60002FD8: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x60002FDC: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60002FE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002FE4: sll         $t4, $s1, 4
    ctx->r12 = S32(ctx->r17 << 4);
    // 0x60002FE8: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x60002FEC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x60002FF0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x60002FF4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60002FF8: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x60002FFC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60003000: lw          $a0, 0x5898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5898);
    // 0x60003004: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003008: jal         0x60000634
    // 0x6000300C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_634(rdram, ctx);
        goto after_29;
    // 0x6000300C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x60003010: b           L_600030A4
    // 0x60003014: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
        goto L_600030A4;
    // 0x60003014: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x60003018: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_6000301C:
    // 0x6000301C: bne         $s0, $at, L_60003064
    if (ctx->r16 != ctx->r1) {
        // 0x60003020: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_60003064;
    }
    // 0x60003020: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x60003024: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003028: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000302C: sll         $t7, $s1, 4
    ctx->r15 = S32(ctx->r17 << 4);
    // 0x60003030: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x60003034: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60003038: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x6000303C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003040: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x60003044: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60003048: lw          $a0, 0x5898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5898);
    // 0x6000304C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003050: jal         0x60000634
    // 0x60003054: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_30;
    // 0x60003054: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_30:
    // 0x60003058: b           L_600030A4
    // 0x6000305C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
        goto L_600030A4;
    // 0x6000305C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x60003060: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_60003064:
    // 0x60003064: bne         $s0, $at, L_600030A0
    if (ctx->r16 != ctx->r1) {
        // 0x60003068: nop
    
            goto L_600030A0;
    }
    // 0x60003068: nop

    // 0x6000306C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003070: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003074: sll         $t0, $s1, 4
    ctx->r8 = S32(ctx->r17 << 4);
    // 0x60003078: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x6000307C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60003080: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60003084: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60003088: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x6000308C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60003090: lw          $a0, 0x5898($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5898);
    // 0x60003094: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003098: jal         0x60000634
    // 0x6000309C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_31;
    // 0x6000309C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_31:
L_600030A0:
    // 0x600030A0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_600030A4:
    // 0x600030A4: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x600030A8: bne         $at, $zero, L_60002F70
    if (ctx->r1 != 0) {
        // 0x600030AC: lw          $s1, 0x144($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X144);
            goto L_60002F70;
    }
    // 0x600030AC: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x600030B0: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
L_600030B4:
    // 0x600030B4: lw          $t3, 0x140($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X140);
    // 0x600030B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600030BC: beq         $t3, $at, L_600030EC
    if (ctx->r11 == ctx->r1) {
        // 0x600030C0: lw          $v0, 0x140($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X140);
            goto L_600030EC;
    }
    // 0x600030C0: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
    // 0x600030C4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x600030C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030CC: sll         $t4, $s1, 4
    ctx->r12 = S32(ctx->r17 << 4);
    // 0x600030D0: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x600030D4: addu        $a1, $t4, $t3
    ctx->r5 = ADD32(ctx->r12, ctx->r11);
    // 0x600030D8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x600030DC: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x600030E0: jal         0x60001CE4
    // 0x600030E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_32;
    // 0x600030E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_32:
    // 0x600030E8: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
L_600030EC:
    // 0x600030EC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x600030F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600030F4: bne         $v0, $at, L_600030B4
    if (ctx->r2 != ctx->r1) {
        // 0x600030F8: sw          $v0, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->r2;
            goto L_600030B4;
    }
    // 0x600030F8: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x600030FC: b           L_60003128
    // 0x60003100: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
        goto L_60003128;
    // 0x60003100: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003104: sll         $a1, $s1, 4
    ctx->r5 = S32(ctx->r17 << 4);
L_60003108:
    // 0x60003108: subu        $a1, $a1, $s1
    ctx->r5 = SUB32(ctx->r5, ctx->r17);
    // 0x6000310C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003110: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x60003114: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x60003118: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000311C: jal         0x60001CE4
    // 0x60003120: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_33;
    // 0x60003120: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_33:
    // 0x60003124: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
L_60003128:
    // 0x60003128: nop

    // 0x6000312C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003130: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x60003134: bne         $at, $zero, L_60002DBC
    if (ctx->r1 != 0) {
        // 0x60003138: srav        $t8, $s4, $s1
        ctx->r24 = S32(SIGNED(ctx->r20) >> (ctx->r17 & 31));
            goto L_60002DBC;
    }
    // 0x60003138: srav        $t8, $s4, $s1
    ctx->r24 = S32(SIGNED(ctx->r20) >> (ctx->r17 & 31));
    // 0x6000313C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x60003140: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60003144: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003148: jal         0x6000064C
    // 0x6000314C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_34;
    // 0x6000314C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x60003150: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x60003154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003158: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x6000315C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x60003160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003164: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x60003168: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x6000316C: ori         $t7, $zero, 0xA080
    ctx->r15 = 0 | 0XA080;
    // 0x60003170: sw          $t5, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r13;
    // 0x60003174: sw          $t6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r14;
    // 0x60003178: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x6000317C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003188: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x6000318C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x60003190: jal         0x60000220
    // 0x60003194: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    ovl_menu_stage_220(rdram, ctx);
        goto after_35;
    // 0x60003194: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    after_35:
L_60003198:
    // 0x60003198: jal         0x60000B14
    // 0x6000319C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B14(rdram, ctx);
        goto after_36;
    // 0x6000319C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_36:
    // 0x600031A0: andi        $t8, $v0, 0x9000
    ctx->r24 = ctx->r2 & 0X9000;
    // 0x600031A4: beq         $t8, $zero, L_600031CC
    if (ctx->r24 == 0) {
        // 0x600031A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600031CC;
    }
    // 0x600031A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600031AC: srav        $t9, $s4, $s3
    ctx->r25 = S32(SIGNED(ctx->r20) >> (ctx->r19 & 31));
    // 0x600031B0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x600031B4: beq         $t0, $zero, L_600031D0
    if (ctx->r8 == 0) {
        // 0x600031B8: andi        $t1, $v1, 0x4000
        ctx->r9 = ctx->r3 & 0X4000;
            goto L_600031D0;
    }
    // 0x600031B8: andi        $t1, $v1, 0x4000
    ctx->r9 = ctx->r3 & 0X4000;
    // 0x600031BC: jal         0x60000244
    // 0x600031C0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_stage_244(rdram, ctx);
        goto after_37;
    // 0x600031C0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_37:
    // 0x600031C4: b           L_60003270
    // 0x600031C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60003270;
    // 0x600031C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_600031CC:
    // 0x600031CC: andi        $t1, $v1, 0x4000
    ctx->r9 = ctx->r3 & 0X4000;
L_600031D0:
    // 0x600031D0: beq         $t1, $zero, L_600031F4
    if (ctx->r9 == 0) {
        // 0x600031D4: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_600031F4;
    }
    // 0x600031D4: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x600031D8: jal         0x60000268
    // 0x600031DC: nop

    ovl_menu_stage_268(rdram, ctx);
        goto after_38;
    // 0x600031DC: nop

    after_38:
    // 0x600031E0: jal         0x60000244
    // 0x600031E4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_39;
    // 0x600031E4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_39:
    // 0x600031E8: b           L_6000326C
    // 0x600031EC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
        goto L_6000326C;
    // 0x600031EC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x600031F0: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
L_600031F4:
    // 0x600031F4: bne         $v1, $at, L_60003210
    if (ctx->r3 != ctx->r1) {
        // 0x600031F8: sw          $s3, 0x190($sp)
        MEM_W(0X190, ctx->r29) = ctx->r19;
            goto L_60003210;
    }
    // 0x600031F8: sw          $s3, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r19;
    // 0x600031FC: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x60003200: beq         $at, $zero, L_6000322C
    if (ctx->r1 == 0) {
        // 0x60003204: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_6000322C;
    }
    // 0x60003204: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x60003208: b           L_60003228
    // 0x6000320C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_60003228;
    // 0x6000320C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60003210:
    // 0x60003210: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x60003214: bne         $v1, $at, L_6000322C
    if (ctx->r3 != ctx->r1) {
        // 0x60003218: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_6000322C;
    }
    // 0x60003218: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x6000321C: blez        $s3, L_6000322C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x60003220: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_6000322C;
    }
    // 0x60003220: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x60003224: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_60003228:
    // 0x60003228: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
L_6000322C:
    // 0x6000322C: nop

    // 0x60003230: beq         $t2, $s3, L_6000325C
    if (ctx->r10 == ctx->r19) {
        // 0x60003234: sll         $t4, $s3, 4
        ctx->r12 = S32(ctx->r19 << 4);
            goto L_6000325C;
    }
    // 0x60003234: sll         $t4, $s3, 4
    ctx->r12 = S32(ctx->r19 << 4);
    // 0x60003238: subu        $t4, $t4, $s3
    ctx->r12 = SUB32(ctx->r12, ctx->r19);
    // 0x6000323C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60003240: addiu       $t3, $t4, 0x30
    ctx->r11 = ADD32(ctx->r12, 0X30);
    // 0x60003244: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x60003248: lw          $t5, 0x19C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X19C);
    // 0x6000324C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60003250: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60003254: jal         0x60000244
    // 0x60003258: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_40;
    // 0x60003258: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    after_40:
L_6000325C:
    // 0x6000325C: jal         0x6000085C
    // 0x60003260: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_41;
    // 0x60003260: nop

    after_41:
    // 0x60003264: b           L_60003198
    // 0x60003268: nop

        goto L_60003198;
    // 0x60003268: nop

L_6000326C:
    // 0x6000326C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60003270:
    // 0x60003270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003278: jal         0x60000238
    // 0x6000327C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_42;
    // 0x6000327C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_42:
    // 0x60003280: jal         0x60000208
    // 0x60003284: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_43;
    // 0x60003284: nop

    after_43:
    // 0x60003288: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x6000328C: jal         0x60000550
    // 0x60003290: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_44;
    // 0x60003290: nop

    after_44:
    // 0x60003294: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003298: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x6000329C: jal         0x60001C44
    // 0x600032A0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_45;
    // 0x600032A0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    after_45:
    // 0x600032A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600032A8: beq         $s3, $at, L_600056C0
    if (ctx->r19 == ctx->r1) {
        // 0x600032AC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_600056C0;
    }
    // 0x600032AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600032B0: jal         0x60000B68
    // 0x600032B4: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    ovl_menu_stage_B68(rdram, ctx);
        goto after_46;
    // 0x600032B4: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    after_46:
    // 0x600032B8: jal         0x60000B50
    // 0x600032BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B50(rdram, ctx);
        goto after_47;
    // 0x600032BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_47:
    // 0x600032C0: jal         0x60000B44
    // 0x600032C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B44(rdram, ctx);
        goto after_48;
    // 0x600032C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_48:
    // 0x600032C8: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x600032CC: addiu       $a0, $sp, 0x158
    ctx->r4 = ADD32(ctx->r29, 0X158);
    // 0x600032D0: jal         0x60001134
    // 0x600032D4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    ovl_menu_stage_1134(rdram, ctx);
        goto after_49;
    // 0x600032D4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_49:
    // 0x600032D8: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x600032DC: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600032E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x600032E4: addiu       $t7, $t7, 0x57EC
    ctx->r15 = ADD32(ctx->r15, 0X57EC);
    // 0x600032E8: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x600032EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x600032F0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x600032F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600032F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x600032FC: addiu       $t0, $t9, 0x3C
    ctx->r8 = ADD32(ctx->r25, 0X3C);
    // 0x60003300: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x60003304: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003308: sw          $v0, 0x6344($at)
    MEM_W(0X6344, ctx->r1) = ctx->r2;
    // 0x6000330C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60003310: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003314: sw          $v0, 0x6000($at)
    MEM_W(0X6000, ctx->r1) = ctx->r2;
    // 0x60003318: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000331C: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x60003320: sw          $a0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r4;
    // 0x60003324: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60003328: sw          $v0, 0x653C($at)
    MEM_W(0X653C, ctx->r1) = ctx->r2;
L_6000332C:
    // 0x6000332C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003330: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x60003334: sw          $v0, 0x12C($a0)
    MEM_W(0X12C, ctx->r4) = ctx->r2;
    // 0x60003338: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000333C: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60003340: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x60003344: jal         0x60001AEC
    // 0x60003348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_50;
    // 0x60003348: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_50:
    // 0x6000334C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x60003350: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
L_60003354:
    // 0x60003354: addu        $t1, $t1, $s1
    ctx->r9 = ADD32(ctx->r9, ctx->r17);
    // 0x60003358: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x6000335C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003360: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60003364: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x60003368: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x6000336C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x60003370: jal         0x6000061C
    // 0x60003374: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_61C(rdram, ctx);
        goto after_51;
    // 0x60003374: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_51:
    // 0x60003378: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x6000337C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003380: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x60003384: addu        $t2, $t2, $s1
    ctx->r10 = ADD32(ctx->r10, ctx->r17);
    // 0x60003388: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000338C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60003390: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x60003394: jal         0x60000604
    // 0x60003398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_52;
    // 0x60003398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_52:
    // 0x6000339C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x600033A0: nop

    // 0x600033A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600033A8: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x600033AC: bne         $at, $zero, L_60003354
    if (ctx->r1 != 0) {
        // 0x600033B0: sll         $t1, $s1, 2
        ctx->r9 = S32(ctx->r17 << 2);
            goto L_60003354;
    }
    // 0x600033B0: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x600033B4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033B8: lw          $a0, 0x5D28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D28);
    // 0x600033BC: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x600033C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600033C4: jal         0x60000634
    // 0x600033C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_634(rdram, ctx);
        goto after_53;
    // 0x600033C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_53:
    // 0x600033CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033D0: lw          $a0, 0x5D3C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D3C);
    // 0x600033D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600033D8: jal         0x60000634
    // 0x600033DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_54;
    // 0x600033DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_54:
    // 0x600033E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033E4: lw          $a0, 0x5D50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D50);
    // 0x600033E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600033EC: jal         0x60000634
    // 0x600033F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_55;
    // 0x600033F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_55:
    // 0x600033F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033F8: lw          $a0, 0x5D64($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5D64);
    // 0x600033FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003400: jal         0x60000634
    // 0x60003404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_634(rdram, ctx);
        goto after_56;
    // 0x60003404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_56:
    // 0x60003408: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x6000340C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003410: jal         0x6000064C
    // 0x60003414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_57;
    // 0x60003414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_57:
    // 0x60003418: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x6000341C: swc1        $f24, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f24.u32l;
    // 0x60003420: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x60003424: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x60003428: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x6000342C: ori         $t5, $zero, 0xA080
    ctx->r13 = 0 | 0XA080;
    // 0x60003430: sw          $t4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r12;
    // 0x60003434: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
    // 0x60003438: sw          $t5, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r13;
    // 0x6000343C: jal         0x60001F58
    // 0x60003440: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    ovl_menu_stage_1F58(rdram, ctx);
        goto after_58;
    // 0x60003440: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    after_58:
    // 0x60003444: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003448: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x6000344C: jal         0x600005A4
    // 0x60003450: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_59;
    // 0x60003450: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_59:
    // 0x60003454: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x60003458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000345C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x60003460: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60003464: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003468: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x6000346C: swc1        $f30, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f30.u32l;
    // 0x60003470: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x60003474: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x60003478: jal         0x6000058C
    // 0x6000347C: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    ovl_menu_stage_58C(rdram, ctx);
        goto after_60;
    // 0x6000347C: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    after_60:
    // 0x60003480: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003484: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x60003488: jal         0x60000640
    // 0x6000348C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_stage_640(rdram, ctx);
        goto after_61;
    // 0x6000348C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_61:
    // 0x60003490: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003494: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x60003498: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x6000349C: jal         0x6000061C
    // 0x600034A0: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_62;
    // 0x600034A0: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_62:
    // 0x600034A4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034A8: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x600034AC: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x600034B0: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x600034B4: jal         0x60000574
    // 0x600034B8: nop

    ovl_menu_stage_574(rdram, ctx);
        goto after_63;
    // 0x600034B8: nop

    after_63:
    // 0x600034BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034C0: lw          $a0, 0x5CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5CD8);
    // 0x600034C4: jal         0x600005A4
    // 0x600034C8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_64;
    // 0x600034C8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_64:
    // 0x600034CC: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x600034D0: jal         0x60002134
    // 0x600034D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_2134(rdram, ctx);
        goto after_65;
    // 0x600034D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_65:
    // 0x600034D8: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x600034DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600034E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600034E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600034E8: jal         0x60000220
    // 0x600034EC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_220(rdram, ctx);
        goto after_66;
    // 0x600034EC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_66:
L_600034F0:
    // 0x600034F0: jal         0x60000B20
    // 0x600034F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B20(rdram, ctx);
        goto after_67;
    // 0x600034F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_67:
    // 0x600034F8: andi        $t6, $v0, 0x9000
    ctx->r14 = ctx->r2 & 0X9000;
    // 0x600034FC: beq         $t6, $zero, L_60003514
    if (ctx->r14 == 0) {
        // 0x60003500: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003514;
    }
    // 0x60003500: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003504: jal         0x60000244
    // 0x60003508: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_stage_244(rdram, ctx);
        goto after_68;
    // 0x60003508: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_68:
    // 0x6000350C: b           L_6000361C
    // 0x60003510: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
        goto L_6000361C;
    // 0x60003510: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
L_60003514:
    // 0x60003514: andi        $t7, $v1, 0x4000
    ctx->r15 = ctx->r3 & 0X4000;
    // 0x60003518: beq         $t7, $zero, L_60003534
    if (ctx->r15 == 0) {
        // 0x6000351C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_60003534;
    }
    // 0x6000351C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x60003520: sw          $t8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r24;
    // 0x60003524: jal         0x60000244
    // 0x60003528: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_69;
    // 0x60003528: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_69:
    // 0x6000352C: b           L_6000361C
    // 0x60003530: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
        goto L_6000361C;
    // 0x60003530: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
L_60003534:
    // 0x60003534: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x60003538: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x6000353C: bne         $v1, $at, L_60003560
    if (ctx->r3 != ctx->r1) {
        // 0x60003540: sw          $t9, 0x190($sp)
        MEM_W(0X190, ctx->r29) = ctx->r25;
            goto L_60003560;
    }
    // 0x60003540: sw          $t9, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r25;
    // 0x60003544: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x60003548: beq         $at, $zero, L_60003558
    if (ctx->r1 == 0) {
        // 0x6000354C: addiu       $t0, $t9, 0x1
        ctx->r8 = ADD32(ctx->r25, 0X1);
            goto L_60003558;
    }
    // 0x6000354C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60003550: b           L_6000358C
    // 0x60003554: sw          $t0, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r8;
        goto L_6000358C;
    // 0x60003554: sw          $t0, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r8;
L_60003558:
    // 0x60003558: b           L_6000358C
    // 0x6000355C: sw          $zero, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = 0;
        goto L_6000358C;
    // 0x6000355C: sw          $zero, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = 0;
L_60003560:
    // 0x60003560: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x60003564: bne         $v1, $at, L_60003590
    if (ctx->r3 != ctx->r1) {
        // 0x60003568: lw          $t3, 0x190($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X190);
            goto L_60003590;
    }
    // 0x60003568: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
    // 0x6000356C: lw          $t1, 0x18C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18C);
    // 0x60003570: nop

    // 0x60003574: blez        $t1, L_60003584
    if (SIGNED(ctx->r9) <= 0) {
        // 0x60003578: addiu       $t2, $t1, -0x1
        ctx->r10 = ADD32(ctx->r9, -0X1);
            goto L_60003584;
    }
    // 0x60003578: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x6000357C: b           L_6000358C
    // 0x60003580: sw          $t2, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r10;
        goto L_6000358C;
    // 0x60003580: sw          $t2, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r10;
L_60003584:
    // 0x60003584: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x60003588: sw          $t4, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r12;
L_6000358C:
    // 0x6000358C: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
L_60003590:
    // 0x60003590: lw          $t5, 0x18C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18C);
    // 0x60003594: nop

    // 0x60003598: beq         $t3, $t5, L_60003608
    if (ctx->r11 == ctx->r13) {
        // 0x6000359C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_60003608;
    }
    // 0x6000359C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x600035A0: bne         $t5, $at, L_600035CC
    if (ctx->r13 != ctx->r1) {
        // 0x600035A4: lw          $t8, 0x19C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X19C);
            goto L_600035CC;
    }
    // 0x600035A4: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
    // 0x600035A8: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
    // 0x600035AC: addiu       $t6, $zero, 0x60
    ctx->r14 = ADD32(0, 0X60);
    // 0x600035B0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x600035B4: swc1        $f26, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f26.u32l;
    // 0x600035B8: swc1        $f24, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f24.u32l;
    // 0x600035BC: sw          $t6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r14;
    // 0x600035C0: b           L_60003600
    // 0x600035C4: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
        goto L_60003600;
    // 0x600035C4: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
    // 0x600035C8: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
L_600035CC:
    // 0x600035CC: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x600035D0: swc1        $f24, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f24.u32l;
    // 0x600035D4: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x600035D8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x600035DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x600035E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x600035E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x600035E8: addiu       $t1, $t0, 0x3C
    ctx->r9 = ADD32(ctx->r8, 0X3C);
    // 0x600035EC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x600035F0: sw          $t2, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r10;
    // 0x600035F4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x600035F8: sw          $t4, 0x50($t8)
    MEM_W(0X50, ctx->r24) = ctx->r12;
    // 0x600035FC: swc1        $f16, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f16.u32l;
L_60003600:
    // 0x60003600: jal         0x60000244
    // 0x60003604: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_stage_244(rdram, ctx);
        goto after_70;
    // 0x60003604: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_70:
L_60003608:
    // 0x60003608: jal         0x6000085C
    // 0x6000360C: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_71;
    // 0x6000360C: nop

    after_71:
    // 0x60003610: b           L_600034F0
    // 0x60003614: nop

        goto L_600034F0;
    // 0x60003614: nop

    // 0x60003618: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
L_6000361C:
    // 0x6000361C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003620: beq         $t3, $at, L_60003630
    if (ctx->r11 == ctx->r1) {
        // 0x60003624: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_60003630;
    }
    // 0x60003624: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x60003628: bne         $t3, $at, L_60003868
    if (ctx->r11 != ctx->r1) {
        // 0x6000362C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003868;
    }
    // 0x6000362C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60003630:
    // 0x60003630: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x60003634: nop

    // 0x60003638: beq         $t5, $zero, L_60003864
    if (ctx->r13 == 0) {
        // 0x6000363C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003864;
    }
    // 0x6000363C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003640: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x60003644: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003648: jal         0x60001CE4
    // 0x6000364C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_72;
    // 0x6000364C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_72:
    // 0x60003650: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003654: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x60003658: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x6000365C: jal         0x60001CE4
    // 0x60003660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_73;
    // 0x60003660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_73:
    // 0x60003664: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003668: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x6000366C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x60003670: jal         0x60001CE4
    // 0x60003674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_74;
    // 0x60003674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_74:
    // 0x60003678: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000367C: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x60003680: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60003684: jal         0x60001CE4
    // 0x60003688: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_75;
    // 0x60003688: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_75:
    // 0x6000368C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003690: lw          $a0, 0x5E18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E18);
    // 0x60003694: jal         0x60000640
    // 0x60003698: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_stage_640(rdram, ctx);
        goto after_76;
    // 0x60003698: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_76:
    // 0x6000369C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036A0: lw          $a0, 0x5E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E2C);
    // 0x600036A4: jal         0x60000640
    // 0x600036A8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_stage_640(rdram, ctx);
        goto after_77;
    // 0x600036A8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_77:
    // 0x600036AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036B0: lw          $a0, 0x5E40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E40);
    // 0x600036B4: jal         0x60000640
    // 0x600036B8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_stage_640(rdram, ctx);
        goto after_78;
    // 0x600036B8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_78:
    // 0x600036BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036C0: lw          $a0, 0x5E54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E54);
    // 0x600036C4: jal         0x60000640
    // 0x600036C8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_stage_640(rdram, ctx);
        goto after_79;
    // 0x600036C8: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_79:
    // 0x600036CC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x600036D0: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x600036D4: jal         0x6000064C
    // 0x600036D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_80;
    // 0x600036D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_80:
    // 0x600036DC: sw          $v0, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r2;
    // 0x600036E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x600036E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600036E8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x600036EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600036F0: addiu       $t6, $zero, 0x104
    ctx->r14 = ADD32(0, 0X104);
    // 0x600036F4: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x600036F8: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x600036FC: sw          $t6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r14;
    // 0x60003700: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
    // 0x60003704: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x60003708: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x6000370C: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60003710: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x60003714: lw          $t0, 0x6744($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6744);
    // 0x60003718: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x6000371C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x60003720: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60003724: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x60003728: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    // 0x6000372C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60003730: jal         0x600006A0
    // 0x60003734: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    ovl_menu_stage_6A0(rdram, ctx);
        goto after_81;
    // 0x60003734: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    after_81:
    // 0x60003738: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000373C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003740: jal         0x60000640
    // 0x60003744: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_stage_640(rdram, ctx);
        goto after_82;
    // 0x60003744: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_82:
    // 0x60003748: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x6000374C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x60003750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003754: jal         0x60000574
    // 0x60003758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_menu_stage_574(rdram, ctx);
        goto after_83;
    // 0x60003758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_83:
    // 0x6000375C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003760: addiu       $a0, $a0, 0x6850
    ctx->r4 = ADD32(ctx->r4, 0X6850);
    // 0x60003764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x6000376C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60003770: jal         0x60000D30
    // 0x60003774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_stage_D30(rdram, ctx);
        goto after_84;
    // 0x60003774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_84:
    // 0x60003778: jal         0x60000D3C
    // 0x6000377C: nop

    ovl_menu_stage_D3C(rdram, ctx);
        goto after_85;
    // 0x6000377C: nop

    after_85:
    // 0x60003780: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003784: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60003788: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x6000378C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003790: jal         0x60001CE4
    // 0x60003794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_86;
    // 0x60003794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_86:
    // 0x60003798: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000379C: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x600037A0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600037A4: jal         0x60001CE4
    // 0x600037A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_87;
    // 0x600037A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_87:
    // 0x600037AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600037B0: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x600037B4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x600037B8: jal         0x60001CE4
    // 0x600037BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_88;
    // 0x600037BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_88:
    // 0x600037C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600037C4: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x600037C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x600037CC: jal         0x60001CE4
    // 0x600037D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_89;
    // 0x600037D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_89:
    // 0x600037D4: jal         0x600006AC
    // 0x600037D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_90;
    // 0x600037D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_90:
    // 0x600037DC: bne         $s1, $zero, L_60003850
    if (ctx->r17 != 0) {
        // 0x600037E0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003850;
    }
    // 0x600037E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600037E4: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x600037E8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x600037EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600037F0: jal         0x60001CE4
    // 0x600037F4: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_91;
    // 0x600037F4: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    after_91:
    // 0x600037F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600037FC: lw          $a0, 0x5E68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E68);
    // 0x60003800: jal         0x60000640
    // 0x60003804: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_stage_640(rdram, ctx);
        goto after_92;
    // 0x60003804: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_92:
    // 0x60003808: jal         0x60000B38
    // 0x6000380C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B38(rdram, ctx);
        goto after_93;
    // 0x6000380C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_93:
    // 0x60003810: jal         0x60000B5C
    // 0x60003814: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B5C(rdram, ctx);
        goto after_94;
    // 0x60003814: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_94:
    // 0x60003818: jal         0x60000850
    // 0x6000381C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_stage_850(rdram, ctx);
        goto after_95;
    // 0x6000381C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_95:
    // 0x60003820: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003824: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x60003828: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x6000382C: jal         0x60001CE4
    // 0x60003830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_96;
    // 0x60003830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_96:
    // 0x60003834: lw          $a0, 0x198($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X198);
    // 0x60003838: jal         0x60000550
    // 0x6000383C: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_97;
    // 0x6000383C: nop

    after_97:
    // 0x60003840: jal         0x6000085C
    // 0x60003844: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_98;
    // 0x60003844: nop

    after_98:
    // 0x60003848: b           L_60003868
    // 0x6000384C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60003868;
    // 0x6000384C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60003850:
    // 0x60003850: lw          $a0, 0x198($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X198);
    // 0x60003854: jal         0x60000550
    // 0x60003858: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_99;
    // 0x60003858: nop

    after_99:
    // 0x6000385C: jal         0x6000085C
    // 0x60003860: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_100;
    // 0x60003860: nop

    after_100:
L_60003864:
    // 0x60003864: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60003868:
    // 0x60003868: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000386C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003870: jal         0x60000238
    // 0x60003874: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_101;
    // 0x60003874: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_101:
    // 0x60003878: jal         0x60000208
    // 0x6000387C: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_102;
    // 0x6000387C: nop

    after_102:
    // 0x60003880: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003884: lw          $a0, 0x693C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X693C);
    // 0x60003888: jal         0x60000DA8
    // 0x6000388C: nop

    ovl_menu_stage_DA8(rdram, ctx);
        goto after_103;
    // 0x6000388C: nop

    after_103:
    // 0x60003890: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x60003894: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60003898: jal         0x60000F34
    // 0x6000389C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_104;
    // 0x6000389C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_104:
    // 0x600038A0: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x600038A4: jal         0x60000550
    // 0x600038A8: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_105;
    // 0x600038A8: nop

    after_105:
    // 0x600038AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600038B0: addiu       $a0, $a0, 0x5CCC
    ctx->r4 = ADD32(ctx->r4, 0X5CCC);
    // 0x600038B4: jal         0x60001C44
    // 0x600038B8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_106;
    // 0x600038B8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_106:
    // 0x600038BC: lw          $t2, 0x18C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18C);
    // 0x600038C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600038C4: beq         $t2, $at, L_600038D0
    if (ctx->r10 == ctx->r1) {
        // 0x600038C8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_600038D0;
    }
    // 0x600038C8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x600038CC: bne         $t2, $at, L_600038DC
    if (ctx->r10 != ctx->r1) {
        // 0x600038D0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_600038DC;
    }
L_600038D0:
    // 0x600038D0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600038D4: b           L_60002B6C
    // 0x600038D8: sw          $zero, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = 0;
        goto L_60002B6C;
    // 0x600038D8: sw          $zero, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = 0;
L_600038DC:
    // 0x600038DC: lw          $v0, 0x18C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18C);
    // 0x600038E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x600038E4: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x600038E8: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x600038EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x600038F0: addiu       $t8, $t4, 0x3C
    ctx->r24 = ADD32(ctx->r12, 0X3C);
    // 0x600038F4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x600038F8: nop

    // 0x600038FC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003900: bne         $v0, $at, L_60004318
    if (ctx->r2 != ctx->r1) {
        // 0x60003904: swc1        $f8, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
            goto L_60004318;
    }
    // 0x60003904: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x60003908: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000390C: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60003910: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003914: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003918: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x6000391C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60003920: jal         0x60001AEC
    // 0x60003924: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_107;
    // 0x60003924: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_107:
    // 0x60003928: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x6000392C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003930: jal         0x6000064C
    // 0x60003934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_108;
    // 0x60003934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_108:
    // 0x60003938: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x6000393C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60003940: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x60003944: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x60003948: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000394C: addiu       $t3, $zero, 0xFA
    ctx->r11 = ADD32(0, 0XFA);
    // 0x60003950: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x60003954: ori         $t6, $zero, 0xA080
    ctx->r14 = 0 | 0XA080;
    // 0x60003958: sw          $t3, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r11;
    // 0x6000395C: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x60003960: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x60003964: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x60003968: jal         0x60001F58
    // 0x6000396C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    ovl_menu_stage_1F58(rdram, ctx);
        goto after_109;
    // 0x6000396C: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    after_109:
    // 0x60003970: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003974: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x60003978: jal         0x600005A4
    // 0x6000397C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_110;
    // 0x6000397C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_110:
    // 0x60003980: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x60003984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60003988: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x6000398C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003990: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003994: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x60003998: swc1        $f30, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f30.u32l;
    // 0x6000399C: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x600039A0: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x600039A4: jal         0x6000058C
    // 0x600039A8: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    ovl_menu_stage_58C(rdram, ctx);
        goto after_111;
    // 0x600039A8: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    after_111:
    // 0x600039AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039B0: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x600039B4: jal         0x60000640
    // 0x600039B8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_stage_640(rdram, ctx);
        goto after_112;
    // 0x600039B8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_112:
    // 0x600039BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039C0: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x600039C4: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x600039C8: jal         0x6000061C
    // 0x600039CC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_113;
    // 0x600039CC: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_113:
    // 0x600039D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039D4: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x600039D8: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x600039DC: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x600039E0: jal         0x60000574
    // 0x600039E4: nop

    ovl_menu_stage_574(rdram, ctx);
        goto after_114;
    // 0x600039E4: nop

    after_114:
    // 0x600039E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039EC: lw          $a0, 0x6494($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6494);
    // 0x600039F0: jal         0x600005A4
    // 0x600039F4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_115;
    // 0x600039F4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_115:
    // 0x600039F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003A00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003A04: jal         0x60000220
    // 0x60003A08: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_220(rdram, ctx);
        goto after_116;
    // 0x60003A08: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_116:
    // 0x60003A0C: sw          $zero, 0x190($sp)
    MEM_W(0X190, ctx->r29) = 0;
L_60003A10:
    // 0x60003A10: jal         0x60000B20
    // 0x60003A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B20(rdram, ctx);
        goto after_117;
    // 0x60003A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_117:
    // 0x60003A18: andi        $t7, $v0, 0x9000
    ctx->r15 = ctx->r2 & 0X9000;
    // 0x60003A1C: bne         $t7, $zero, L_60003AB0
    if (ctx->r15 != 0) {
        // 0x60003A20: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003AB0;
    }
    // 0x60003A20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003A24: andi        $t9, $v0, 0x4000
    ctx->r25 = ctx->r2 & 0X4000;
    // 0x60003A28: beq         $t9, $zero, L_60003A3C
    if (ctx->r25 == 0) {
        // 0x60003A2C: andi        $t0, $v1, 0x800
        ctx->r8 = ctx->r3 & 0X800;
            goto L_60003A3C;
    }
    // 0x60003A2C: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
    // 0x60003A30: b           L_60003AB0
    // 0x60003A34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_60003AB0;
    // 0x60003A34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x60003A38: andi        $t0, $v1, 0x800
    ctx->r8 = ctx->r3 & 0X800;
L_60003A3C:
    // 0x60003A3C: beq         $t0, $zero, L_60003A58
    if (ctx->r8 == 0) {
        // 0x60003A40: andi        $t1, $v1, 0x400
        ctx->r9 = ctx->r3 & 0X400;
            goto L_60003A58;
    }
    // 0x60003A40: andi        $t1, $v1, 0x400
    ctx->r9 = ctx->r3 & 0X400;
    // 0x60003A44: blez        $s0, L_60003A70
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60003A48: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_60003A70;
    }
    // 0x60003A48: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x60003A4C: b           L_60003A6C
    // 0x60003A50: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_60003A6C;
    // 0x60003A50: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x60003A54: andi        $t1, $v1, 0x400
    ctx->r9 = ctx->r3 & 0X400;
L_60003A58:
    // 0x60003A58: beq         $t1, $zero, L_60003A70
    if (ctx->r9 == 0) {
        // 0x60003A5C: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_60003A70;
    }
    // 0x60003A5C: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x60003A60: bgtz        $s0, L_60003A70
    if (SIGNED(ctx->r16) > 0) {
        // 0x60003A64: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_60003A70;
    }
    // 0x60003A64: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x60003A68: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_60003A6C:
    // 0x60003A6C: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
L_60003A70:
    // 0x60003A70: sw          $s0, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r16;
    // 0x60003A74: beq         $t2, $s0, L_60003AA0
    if (ctx->r10 == ctx->r16) {
        // 0x60003A78: sll         $t4, $s0, 2
        ctx->r12 = S32(ctx->r16 << 2);
            goto L_60003AA0;
    }
    // 0x60003A78: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x60003A7C: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x60003A80: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x60003A84: addiu       $t8, $t4, 0x58
    ctx->r24 = ADD32(ctx->r12, 0X58);
    // 0x60003A88: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60003A8C: lw          $t3, 0x19C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X19C);
    // 0x60003A90: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003A94: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60003A98: jal         0x60000244
    // 0x60003A9C: swc1        $f8, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f8.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_118;
    // 0x60003A9C: swc1        $f8, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f8.u32l;
    after_118:
L_60003AA0:
    // 0x60003AA0: jal         0x6000085C
    // 0x60003AA4: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_119;
    // 0x60003AA4: nop

    after_119:
    // 0x60003AA8: b           L_60003A10
    // 0x60003AAC: nop

        goto L_60003A10;
    // 0x60003AAC: nop

L_60003AB0:
    // 0x60003AB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003AB4: bne         $s0, $at, L_60003AF8
    if (ctx->r16 != ctx->r1) {
        // 0x60003AB8: addiu       $a0, $zero, 0x24
        ctx->r4 = ADD32(0, 0X24);
            goto L_60003AF8;
    }
    // 0x60003AB8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60003ABC: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x60003AC0: jal         0x600005A4
    // 0x60003AC4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_120;
    // 0x60003AC4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_120:
    // 0x60003AC8: jal         0x60000244
    // 0x60003ACC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_121;
    // 0x60003ACC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_121:
    // 0x60003AD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003ADC: jal         0x60000238
    // 0x60003AE0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_122;
    // 0x60003AE0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_122:
    // 0x60003AE4: jal         0x60000208
    // 0x60003AE8: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_123;
    // 0x60003AE8: nop

    after_123:
    // 0x60003AEC: b           L_600042B8
    // 0x60003AF0: nop

        goto L_600042B8;
    // 0x60003AF0: nop

    // 0x60003AF4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
L_60003AF8:
    // 0x60003AF8: jal         0x60000244
    // 0x60003AFC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_menu_stage_244(rdram, ctx);
        goto after_124;
    // 0x60003AFC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_124:
    // 0x60003B00: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003B04: lw          $a2, 0x6934($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6934);
    // 0x60003B08: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B0C: addiu       $a0, $a0, 0x65B4
    ctx->r4 = ADD32(ctx->r4, 0X65B4);
    // 0x60003B10: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60003B14: jal         0x60001AEC
    // 0x60003B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_125;
    // 0x60003B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_125:
    // 0x60003B1C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60003B20: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
L_60003B24:
    // 0x60003B24: addu        $t5, $t5, $s1
    ctx->r13 = ADD32(ctx->r13, ctx->r17);
    // 0x60003B28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60003B2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B30: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60003B34: lw          $a0, 0x65C0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X65C0);
    // 0x60003B38: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x60003B3C: jal         0x60000640
    // 0x60003B40: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_640(rdram, ctx);
        goto after_126;
    // 0x60003B40: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_126:
    // 0x60003B44: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003B48: nop

    // 0x60003B4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003B50: slti        $at, $s1, 0x13
    ctx->r1 = SIGNED(ctx->r17) < 0X13 ? 1 : 0;
    // 0x60003B54: bne         $at, $zero, L_60003B24
    if (ctx->r1 != 0) {
        // 0x60003B58: sll         $t5, $s1, 2
        ctx->r13 = S32(ctx->r17 << 2);
            goto L_60003B24;
    }
    // 0x60003B58: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x60003B5C: bne         $s0, $zero, L_60003C04
    if (ctx->r16 != 0) {
        // 0x60003B60: sw          $s1, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r17;
            goto L_60003C04;
    }
    // 0x60003B60: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60003B64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003B68: jal         0x60002134
    // 0x60003B6C: addiu       $a1, $sp, 0x158
    ctx->r5 = ADD32(ctx->r29, 0X158);
    ovl_menu_stage_2134(rdram, ctx);
        goto after_127;
    // 0x60003B6C: addiu       $a1, $sp, 0x158
    ctx->r5 = ADD32(ctx->r29, 0X158);
    after_127:
    // 0x60003B70: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B74: lw          $a0, 0x655C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X655C);
    // 0x60003B78: jal         0x600006AC
    // 0x60003B7C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_128;
    // 0x60003B7C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_128:
    // 0x60003B80: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B84: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003B88: jal         0x60001E14
    // 0x60003B8C: addiu       $a1, $sp, 0x15C
    ctx->r5 = ADD32(ctx->r29, 0X15C);
    ovl_menu_stage_1E14(rdram, ctx);
        goto after_129;
    // 0x60003B8C: addiu       $a1, $sp, 0x15C
    ctx->r5 = ADD32(ctx->r29, 0X15C);
    after_129:
    // 0x60003B90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B94: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003B98: jal         0x6000110C
    // 0x60003B9C: nop

    ovl_menu_stage_110C(rdram, ctx);
        goto after_130;
    // 0x60003B9C: nop

    after_130:
    // 0x60003BA0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BA4: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60003BA8: lw          $a3, 0x6560($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6560);
    // 0x60003BAC: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003BB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60003BB4: jal         0x6000175C
    // 0x60003BB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_131;
    // 0x60003BB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_131:
    // 0x60003BBC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BC0: sw          $v0, 0x655C($at)
    MEM_W(0X655C, ctx->r1) = ctx->r2;
    // 0x60003BC4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003BC8: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60003BCC: lw          $t7, 0x6558($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6558);
    // 0x60003BD0: lw          $t6, 0x6554($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6554);
    // 0x60003BD4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x60003BD8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x60003BDC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60003BE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BE4: lw          $a0, 0x655C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X655C);
    // 0x60003BE8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60003BEC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60003BF0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x60003BF4: jal         0x6000055C
    // 0x60003BF8: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_132;
    // 0x60003BF8: nop

    after_132:
    // 0x60003BFC: b           L_60003E30
    // 0x60003C00: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
        goto L_60003E30;
    // 0x60003C00: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
L_60003C04:
    // 0x60003C04: jal         0x60000904
    // 0x60003C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_133;
    // 0x60003C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_133:
    // 0x60003C0C: beq         $v0, $zero, L_60003C54
    if (ctx->r2 == 0) {
        // 0x60003C10: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_60003C54;
    }
    // 0x60003C10: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60003C14: jal         0x600022D4
    // 0x60003C18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_134;
    // 0x60003C18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_134:
    // 0x60003C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003C20: beq         $v0, $at, L_60003C04
    if (ctx->r2 == ctx->r1) {
        // 0x60003C24: sw          $v0, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r2;
            goto L_60003C04;
    }
    // 0x60003C24: sw          $v0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r2;
    // 0x60003C28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003C2C: bne         $v0, $at, L_60003C54
    if (ctx->r2 != ctx->r1) {
        // 0x60003C30: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003C54;
    }
    // 0x60003C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003C38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003C3C: jal         0x60000238
    // 0x60003C40: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_135;
    // 0x60003C40: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_135:
    // 0x60003C44: jal         0x60000208
    // 0x60003C48: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_136;
    // 0x60003C48: nop

    after_136:
    // 0x60003C4C: b           L_600042B8
    // 0x60003C50: nop

        goto L_600042B8;
    // 0x60003C50: nop

L_60003C54:
    // 0x60003C54: lui         $a2, 0x4E42
    ctx->r6 = S32(0X4E42 << 16);
    // 0x60003C58: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60003C5C: addiu       $t9, $sp, 0x144
    ctx->r25 = ADD32(ctx->r29, 0X144);
    // 0x60003C60: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x60003C64: addiu       $a3, $a3, 0x5740
    ctx->r7 = ADD32(ctx->r7, 0X5740);
    // 0x60003C68: ori         $a2, $a2, 0x5645
    ctx->r6 = ctx->r6 | 0X5645;
    // 0x60003C6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C70: jal         0x60000934
    // 0x60003C74: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    ovl_menu_stage_934(rdram, ctx);
        goto after_137;
    // 0x60003C74: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    after_137:
    // 0x60003C78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C7C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60003C80: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003C84: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003C88: jal         0x60001CE4
    // 0x60003C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_138;
    // 0x60003C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_138:
    // 0x60003C90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C94: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003C98: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60003C9C: jal         0x60001CE4
    // 0x60003CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_139;
    // 0x60003CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_139:
    // 0x60003CA4: beq         $fp, $zero, L_60003D08
    if (ctx->r30 == 0) {
        // 0x60003CA8: nop
    
            goto L_60003D08;
    }
    // 0x60003CA8: nop

    // 0x60003CAC: jal         0x600022D4
    // 0x60003CB0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_140;
    // 0x60003CB0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_140:
    // 0x60003CB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003CB8: bne         $v0, $at, L_60003CDC
    if (ctx->r2 != ctx->r1) {
        // 0x60003CBC: sw          $v0, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r2;
            goto L_60003CDC;
    }
    // 0x60003CBC: sw          $v0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r2;
    // 0x60003CC0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003CC4: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003CC8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003CCC: jal         0x60001CE4
    // 0x60003CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_141;
    // 0x60003CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_141:
    // 0x60003CD4: b           L_60003C04
    // 0x60003CD8: nop

        goto L_60003C04;
    // 0x60003CD8: nop

L_60003CDC:
    // 0x60003CDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003CE0: bne         $v0, $at, L_60003E2C
    if (ctx->r2 != ctx->r1) {
        // 0x60003CE4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003E2C;
    }
    // 0x60003CE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003CF0: jal         0x60000238
    // 0x60003CF4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_142;
    // 0x60003CF4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_142:
    // 0x60003CF8: jal         0x60000208
    // 0x60003CFC: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_143;
    // 0x60003CFC: nop

    after_143:
    // 0x60003D00: b           L_600042B8
    // 0x60003D04: nop

        goto L_600042B8;
    // 0x60003D04: nop

L_60003D08:
    // 0x60003D08: jal         0x60000040
    // 0x60003D0C: nop

    ovl_menu_stage_40(rdram, ctx);
        goto after_144;
    // 0x60003D0C: nop

    after_144:
    // 0x60003D10: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x60003D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003D18: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x60003D1C: jal         0x60000964
    // 0x60003D20: addiu       $a3, $sp, 0x148
    ctx->r7 = ADD32(ctx->r29, 0X148);
    ovl_menu_stage_964(rdram, ctx);
        goto after_145;
    // 0x60003D20: addiu       $a3, $sp, 0x148
    ctx->r7 = ADD32(ctx->r29, 0X148);
    after_145:
    // 0x60003D24: beq         $v0, $zero, L_60003D6C
    if (ctx->r2 == 0) {
        // 0x60003D28: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_60003D6C;
    }
    // 0x60003D28: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60003D2C: jal         0x600022D4
    // 0x60003D30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_146;
    // 0x60003D30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_146:
    // 0x60003D34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003D38: beq         $v0, $at, L_60003C04
    if (ctx->r2 == ctx->r1) {
        // 0x60003D3C: sw          $v0, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r2;
            goto L_60003C04;
    }
    // 0x60003D3C: sw          $v0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r2;
    // 0x60003D40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003D44: bne         $v0, $at, L_60003E2C
    if (ctx->r2 != ctx->r1) {
        // 0x60003D48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003E2C;
    }
    // 0x60003D48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003D54: jal         0x60000238
    // 0x60003D58: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_147;
    // 0x60003D58: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_147:
    // 0x60003D5C: jal         0x60000208
    // 0x60003D60: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_148;
    // 0x60003D60: nop

    after_148:
    // 0x60003D64: b           L_600042B8
    // 0x60003D68: nop

        goto L_600042B8;
    // 0x60003D68: nop

L_60003D6C:
    // 0x60003D6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003D70: jal         0x60002134
    // 0x60003D74: addiu       $a1, $sp, 0x148
    ctx->r5 = ADD32(ctx->r29, 0X148);
    ovl_menu_stage_2134(rdram, ctx);
        goto after_149;
    // 0x60003D74: addiu       $a1, $sp, 0x148
    ctx->r5 = ADD32(ctx->r29, 0X148);
    after_149:
    // 0x60003D78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D7C: lw          $a0, 0x655C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X655C);
    // 0x60003D80: jal         0x600006AC
    // 0x60003D84: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_150;
    // 0x60003D84: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_150:
    // 0x60003D88: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D8C: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003D90: jal         0x60001E14
    // 0x60003D94: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    ovl_menu_stage_1E14(rdram, ctx);
        goto after_151;
    // 0x60003D94: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    after_151:
    // 0x60003D98: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D9C: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003DA0: jal         0x6000110C
    // 0x60003DA4: nop

    ovl_menu_stage_110C(rdram, ctx);
        goto after_152;
    // 0x60003DA4: nop

    after_152:
    // 0x60003DA8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DAC: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60003DB0: lw          $a3, 0x6560($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6560);
    // 0x60003DB4: lw          $a0, 0x57FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X57FC);
    // 0x60003DB8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60003DBC: jal         0x6000175C
    // 0x60003DC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_153;
    // 0x60003DC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_153:
    // 0x60003DC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003DC8: sw          $v0, 0x655C($at)
    MEM_W(0X655C, ctx->r1) = ctx->r2;
    // 0x60003DCC: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60003DD0: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60003DD4: lw          $t1, 0x6558($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6558);
    // 0x60003DD8: lw          $t0, 0x6554($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6554);
    // 0x60003DDC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x60003DE0: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x60003DE4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60003DE8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DEC: lw          $a0, 0x655C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X655C);
    // 0x60003DF0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60003DF4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x60003DF8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x60003DFC: jal         0x6000055C
    // 0x60003E00: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_154;
    // 0x60003E00: nop

    after_154:
    // 0x60003E04: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003E08: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003E0C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003E10: jal         0x60001CE4
    // 0x60003E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_155;
    // 0x60003E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_155:
    // 0x60003E18: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003E1C: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003E20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60003E24: jal         0x60001CE4
    // 0x60003E28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_156;
    // 0x60003E28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_156:
L_60003E2C:
    // 0x60003E2C: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
L_60003E30:
    // 0x60003E30: jal         0x60002134
    // 0x60003E34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_2134(rdram, ctx);
        goto after_157;
    // 0x60003E34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_157:
    // 0x60003E38: lw          $v1, 0x19C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X19C);
    // 0x60003E3C: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x60003E40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003E44: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x60003E48: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60003E4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60003E50: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x60003E54: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x60003E58: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x60003E5C: sw          $t2, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r10;
    // 0x60003E60: sw          $t4, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r12;
    // 0x60003E64: swc1        $f6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f6.u32l;
    // 0x60003E68: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x60003E6C: sw          $t8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r24;
L_60003E70:
    // 0x60003E70: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x60003E74: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003E78: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003E7C: jal         0x60001CE4
    // 0x60003E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_158;
    // 0x60003E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_158:
    // 0x60003E84: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003E88: nop

    // 0x60003E8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003E90: slti        $at, $s1, 0xD
    ctx->r1 = SIGNED(ctx->r17) < 0XD ? 1 : 0;
    // 0x60003E94: bne         $at, $zero, L_60003E70
    if (ctx->r1 != 0) {
        // 0x60003E98: sw          $s1, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r17;
            goto L_60003E70;
    }
    // 0x60003E98: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60003E9C: bne         $s0, $zero, L_60003EF4
    if (ctx->r16 != 0) {
        // 0x60003EA0: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_60003EF4;
    }
    // 0x60003EA0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_60003EA4:
    // 0x60003EA4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003EA8: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003EAC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60003EB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60003EB4: jal         0x60001CE4
    // 0x60003EB8: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_159;
    // 0x60003EB8: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_159:
    // 0x60003EBC: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003EC0: nop

    // 0x60003EC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003EC8: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x60003ECC: bne         $at, $zero, L_60003EA4
    if (ctx->r1 != 0) {
        // 0x60003ED0: nop
    
            goto L_60003EA4;
    }
    // 0x60003ED0: nop

    // 0x60003ED4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003ED8: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60003EDC: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003EE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60003EE4: jal         0x60001CE4
    // 0x60003EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_160;
    // 0x60003EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_160:
    // 0x60003EEC: b           L_60003F48
    // 0x60003EF0: nop

        goto L_60003F48;
    // 0x60003EF0: nop

L_60003EF4:
    // 0x60003EF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003EF8: bne         $s0, $at, L_60003F48
    if (ctx->r16 != ctx->r1) {
        // 0x60003EFC: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_60003F48;
    }
    // 0x60003EFC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_60003F00:
    // 0x60003F00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003F04: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003F08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60003F0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60003F10: jal         0x60001CE4
    // 0x60003F14: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_161;
    // 0x60003F14: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_161:
    // 0x60003F18: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60003F1C: nop

    // 0x60003F20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003F24: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x60003F28: bne         $at, $zero, L_60003F00
    if (ctx->r1 != 0) {
        // 0x60003F2C: nop
    
            goto L_60003F00;
    }
    // 0x60003F2C: nop

    // 0x60003F30: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003F34: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60003F38: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60003F3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003F40: jal         0x60001CE4
    // 0x60003F44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_162;
    // 0x60003F44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_162:
L_60003F48:
    // 0x60003F48: jal         0x6000085C
    // 0x60003F4C: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_163;
    // 0x60003F4C: nop

    after_163:
    // 0x60003F50: sw          $zero, 0x190($sp)
    MEM_W(0X190, ctx->r29) = 0;
L_60003F54:
    // 0x60003F54: jal         0x60000B20
    // 0x60003F58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B20(rdram, ctx);
        goto after_164;
    // 0x60003F58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_164:
    // 0x60003F5C: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
    // 0x60003F60: beq         $t3, $zero, L_60003F80
    if (ctx->r11 == 0) {
        // 0x60003F64: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003F80;
    }
    // 0x60003F64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003F68: lw          $t5, 0x140($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X140);
    // 0x60003F6C: nop

    // 0x60003F70: blez        $t5, L_60004230
    if (SIGNED(ctx->r13) <= 0) {
        // 0x60003F74: addiu       $t6, $t5, -0x1
        ctx->r14 = ADD32(ctx->r13, -0X1);
            goto L_60004230;
    }
    // 0x60003F74: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x60003F78: b           L_60004230
    // 0x60003F7C: sw          $t6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r14;
        goto L_60004230;
    // 0x60003F7C: sw          $t6, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r14;
L_60003F80:
    // 0x60003F80: andi        $t7, $v1, 0x100
    ctx->r15 = ctx->r3 & 0X100;
    // 0x60003F84: beq         $t7, $zero, L_60003FA8
    if (ctx->r15 == 0) {
        // 0x60003F88: andi        $t1, $v1, 0x9000
        ctx->r9 = ctx->r3 & 0X9000;
            goto L_60003FA8;
    }
    // 0x60003F88: andi        $t1, $v1, 0x9000
    ctx->r9 = ctx->r3 & 0X9000;
    // 0x60003F8C: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x60003F90: nop

    // 0x60003F94: bgtz        $t9, L_60004230
    if (SIGNED(ctx->r25) > 0) {
        // 0x60003F98: addiu       $t0, $t9, 0x1
        ctx->r8 = ADD32(ctx->r25, 0X1);
            goto L_60004230;
    }
    // 0x60003F98: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60003F9C: b           L_60004230
    // 0x60003FA0: sw          $t0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r8;
        goto L_60004230;
    // 0x60003FA0: sw          $t0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r8;
    // 0x60003FA4: andi        $t1, $v1, 0x9000
    ctx->r9 = ctx->r3 & 0X9000;
L_60003FA8:
    // 0x60003FA8: beq         $t1, $zero, L_60004218
    if (ctx->r9 == 0) {
        // 0x60003FAC: andi        $t5, $v1, 0x4000
        ctx->r13 = ctx->r3 & 0X4000;
            goto L_60004218;
    }
    // 0x60003FAC: andi        $t5, $v1, 0x4000
    ctx->r13 = ctx->r3 & 0X4000;
    // 0x60003FB0: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
    // 0x60003FB4: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60003FB8: xori        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 ^ 0X1;
    // 0x60003FBC: bne         $t2, $zero, L_60004204
    if (ctx->r10 != 0) {
        // 0x60003FC0: nop
    
            goto L_60004204;
    }
    // 0x60003FC0: nop

    // 0x60003FC4: jal         0x60000244
    // 0x60003FC8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_stage_244(rdram, ctx);
        goto after_165;
    // 0x60003FC8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_165:
    // 0x60003FCC: bne         $s0, $zero, L_60004020
    if (ctx->r16 != 0) {
        // 0x60003FD0: lui         $a2, 0x4E42
        ctx->r6 = S32(0X4E42 << 16);
            goto L_60004020;
    }
    // 0x60003FD0: lui         $a2, 0x4E42
    ctx->r6 = S32(0X4E42 << 16);
    // 0x60003FD4: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    // 0x60003FD8: jal         0x60000B38
    // 0x60003FDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B38(rdram, ctx);
        goto after_166;
    // 0x60003FDC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_166:
    // 0x60003FE0: jal         0x60000B5C
    // 0x60003FE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_menu_stage_B5C(rdram, ctx);
        goto after_167;
    // 0x60003FE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_167:
    // 0x60003FE8: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x60003FEC: addiu       $a0, $sp, 0x158
    ctx->r4 = ADD32(ctx->r29, 0X158);
    // 0x60003FF0: jal         0x60001134
    // 0x60003FF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    ovl_menu_stage_1134(rdram, ctx);
        goto after_168;
    // 0x60003FF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_168:
    // 0x60003FF8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003FFC: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x60004000: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60004004: jal         0x60001CE4
    // 0x60004008: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_169;
    // 0x60004008: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_169:
    // 0x6000400C: jal         0x60000850
    // 0x60004010: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_stage_850(rdram, ctx);
        goto after_170;
    // 0x60004010: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_170:
    // 0x60004014: b           L_6000427C
    // 0x60004018: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_6000427C;
    // 0x60004018: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_6000401C:
    // 0x6000401C: lui         $a2, 0x4E42
    ctx->r6 = S32(0X4E42 << 16);
L_60004020:
    // 0x60004020: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60004024: addiu       $t4, $sp, 0x144
    ctx->r12 = ADD32(ctx->r29, 0X144);
    // 0x60004028: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x6000402C: addiu       $a3, $a3, 0x5740
    ctx->r7 = ADD32(ctx->r7, 0X5740);
    // 0x60004030: ori         $a2, $a2, 0x5645
    ctx->r6 = ctx->r6 | 0X5645;
    // 0x60004034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004038: jal         0x60000934
    // 0x6000403C: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    ovl_menu_stage_934(rdram, ctx);
        goto after_171;
    // 0x6000403C: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    after_171:
    // 0x60004040: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
L_60004044:
    // 0x60004044: beq         $v0, $zero, L_6000419C
    if (ctx->r2 == 0) {
        // 0x60004048: lw          $a1, 0x144($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X144);
            goto L_6000419C;
    }
    // 0x60004048: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x6000404C: jal         0x600022D4
    // 0x60004050: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_172;
    // 0x60004050: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_172:
    // 0x60004054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004058: bne         $v0, $at, L_600040A0
    if (ctx->r2 != ctx->r1) {
        // 0x6000405C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_600040A0;
    }
    // 0x6000405C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60004060: jal         0x60000904
    // 0x60004064: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_173;
    // 0x60004064: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_173:
    // 0x60004068: bne         $v0, $zero, L_60004044
    if (ctx->r2 != 0) {
        // 0x6000406C: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_60004044;
    }
    // 0x6000406C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60004070: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x60004074: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004078: jal         0x60000F34
    // 0x6000407C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_174;
    // 0x6000407C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_174:
    // 0x60004080: beq         $s2, $zero, L_60004094
    if (ctx->r18 == 0) {
        // 0x60004084: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_60004094;
    }
    // 0x60004084: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004088: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x6000408C: jal         0x60000F34
    // 0x60004090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_175;
    // 0x60004090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_175:
L_60004094:
    // 0x60004094: b           L_60003C54
    // 0x60004098: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_60003C54;
    // 0x60004098: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x6000409C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_600040A0:
    // 0x600040A0: beq         $v0, $at, L_60004278
    if (ctx->r2 == ctx->r1) {
        // 0x600040A4: lui         $a2, 0x4E42
        ctx->r6 = S32(0X4E42 << 16);
            goto L_60004278;
    }
    // 0x600040A4: lui         $a2, 0x4E42
    ctx->r6 = S32(0X4E42 << 16);
    // 0x600040A8: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x600040AC: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x600040B0: addiu       $t3, $sp, 0x144
    ctx->r11 = ADD32(ctx->r29, 0X144);
    // 0x600040B4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x600040B8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x600040BC: addiu       $a3, $a3, 0x5740
    ctx->r7 = ADD32(ctx->r7, 0X5740);
    // 0x600040C0: ori         $a2, $a2, 0x5645
    ctx->r6 = ctx->r6 | 0X5645;
    // 0x600040C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600040C8: jal         0x60000940
    // 0x600040CC: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    ovl_menu_stage_940(rdram, ctx);
        goto after_176;
    // 0x600040CC: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    after_176:
    // 0x600040D0: beq         $v0, $zero, L_60004134
    if (ctx->r2 == 0) {
        // 0x600040D4: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_60004134;
    }
    // 0x600040D4: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x600040D8: jal         0x600022D4
    // 0x600040DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_177;
    // 0x600040DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_177:
    // 0x600040E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600040E4: bne         $v0, $at, L_6000412C
    if (ctx->r2 != ctx->r1) {
        // 0x600040E8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_6000412C;
    }
    // 0x600040E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600040EC: jal         0x60000904
    // 0x600040F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_178;
    // 0x600040F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_178:
    // 0x600040F4: bne         $v0, $zero, L_60004044
    if (ctx->r2 != 0) {
        // 0x600040F8: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_60004044;
    }
    // 0x600040F8: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x600040FC: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x60004100: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004104: jal         0x60000F34
    // 0x60004108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_179;
    // 0x60004108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_179:
    // 0x6000410C: beq         $s2, $zero, L_60004120
    if (ctx->r18 == 0) {
        // 0x60004110: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_60004120;
    }
    // 0x60004110: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004114: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60004118: jal         0x60000F34
    // 0x6000411C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_180;
    // 0x6000411C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_180:
L_60004120:
    // 0x60004120: b           L_60003C54
    // 0x60004124: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_60003C54;
    // 0x60004124: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60004128: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_6000412C:
    // 0x6000412C: beq         $v0, $at, L_6000427C
    if (ctx->r2 == ctx->r1) {
        // 0x60004130: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000427C;
    }
    // 0x60004130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60004134:
    // 0x60004134: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
    // 0x60004138: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x6000413C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004140: jal         0x60000958
    // 0x60004144: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    ovl_menu_stage_958(rdram, ctx);
        goto after_181;
    // 0x60004144: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_181:
    // 0x60004148: beq         $v0, $zero, L_600041E0
    if (ctx->r2 == 0) {
        // 0x6000414C: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_600041E0;
    }
    // 0x6000414C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60004150: jal         0x600022D4
    // 0x60004154: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_182;
    // 0x60004154: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_182:
    // 0x60004158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000415C: bne         $v0, $at, L_60004180
    if (ctx->r2 != ctx->r1) {
        // 0x60004160: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_60004180;
    }
    // 0x60004160: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60004164: jal         0x60000904
    // 0x60004168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_183;
    // 0x60004168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_183:
    // 0x6000416C: beq         $v0, $zero, L_6000401C
    if (ctx->r2 == 0) {
        // 0x60004170: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_6000401C;
    }
    // 0x60004170: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60004174: b           L_60004044
    // 0x60004178: nop

        goto L_60004044;
    // 0x60004178: nop

    // 0x6000417C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_60004180:
    // 0x60004180: beq         $v0, $at, L_60004278
    if (ctx->r2 == ctx->r1) {
        // 0x60004184: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004278;
    }
    // 0x60004184: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004188: jal         0x6000001C
    // 0x6000418C: addiu       $a0, $a0, 0x68DC
    ctx->r4 = ADD32(ctx->r4, 0X68DC);
    ovl_menu_stage_1C(rdram, ctx);
        goto after_184;
    // 0x6000418C: addiu       $a0, $a0, 0x68DC
    ctx->r4 = ADD32(ctx->r4, 0X68DC);
    after_184:
    // 0x60004190: b           L_600041E0
    // 0x60004194: nop

        goto L_600041E0;
    // 0x60004194: nop

    // 0x60004198: lw          $a1, 0x144($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X144);
L_6000419C:
    // 0x6000419C: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x600041A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600041A4: jal         0x60000958
    // 0x600041A8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    ovl_menu_stage_958(rdram, ctx);
        goto after_185;
    // 0x600041A8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_185:
    // 0x600041AC: jal         0x600022D4
    // 0x600041B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_stage_22D4(rdram, ctx);
        goto after_186;
    // 0x600041B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_186:
    // 0x600041B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600041B8: bne         $v0, $at, L_600041DC
    if (ctx->r2 != ctx->r1) {
        // 0x600041BC: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_600041DC;
    }
    // 0x600041BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600041C0: jal         0x60000904
    // 0x600041C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_904(rdram, ctx);
        goto after_187;
    // 0x600041C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_187:
    // 0x600041C8: beq         $v0, $zero, L_6000401C
    if (ctx->r2 == 0) {
        // 0x600041CC: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_6000401C;
    }
    // 0x600041CC: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x600041D0: b           L_60004044
    // 0x600041D4: nop

        goto L_60004044;
    // 0x600041D4: nop

    // 0x600041D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_600041DC:
    // 0x600041DC: beq         $v0, $at, L_60004278
    if (ctx->r2 == ctx->r1) {
        // 0x600041E0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004278;
    }
L_600041E0:
    // 0x600041E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600041E4: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x600041E8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x600041EC: jal         0x60001CE4
    // 0x600041F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_188;
    // 0x600041F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_188:
    // 0x600041F4: jal         0x60000850
    // 0x600041F8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_menu_stage_850(rdram, ctx);
        goto after_189;
    // 0x600041F8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_189:
    // 0x600041FC: b           L_6000427C
    // 0x60004200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_6000427C;
    // 0x60004200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60004204:
    // 0x60004204: jal         0x60000244
    // 0x60004208: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_190;
    // 0x60004208: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_190:
    // 0x6000420C: b           L_6000427C
    // 0x60004210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_6000427C;
    // 0x60004210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004214: andi        $t5, $v1, 0x4000
    ctx->r13 = ctx->r3 & 0X4000;
L_60004218:
    // 0x60004218: beq         $t5, $zero, L_60004230
    if (ctx->r13 == 0) {
        // 0x6000421C: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_60004230;
    }
    // 0x6000421C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60004220: jal         0x60000244
    // 0x60004224: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    ovl_menu_stage_244(rdram, ctx);
        goto after_191;
    // 0x60004224: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    after_191:
    // 0x60004228: b           L_6000427C
    // 0x6000422C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_6000427C;
    // 0x6000422C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60004230:
    // 0x60004230: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x60004234: lw          $t7, 0x190($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X190);
    // 0x60004238: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
    // 0x6000423C: beq         $t7, $t6, L_60004268
    if (ctx->r15 == ctx->r14) {
        // 0x60004240: sll         $t9, $t6, 3
        ctx->r25 = S32(ctx->r14 << 3);
            goto L_60004268;
    }
    // 0x60004240: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x60004244: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x60004248: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x6000424C: addiu       $t0, $t9, 0x60
    ctx->r8 = ADD32(ctx->r25, 0X60);
    // 0x60004250: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x60004254: lw          $t1, 0x19C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X19C);
    // 0x60004258: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x6000425C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60004260: jal         0x60000244
    // 0x60004264: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_192;
    // 0x60004264: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    after_192:
L_60004268:
    // 0x60004268: jal         0x6000085C
    // 0x6000426C: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_193;
    // 0x6000426C: nop

    after_193:
    // 0x60004270: b           L_60003F54
    // 0x60004274: nop

        goto L_60003F54;
    // 0x60004274: nop

L_60004278:
    // 0x60004278: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_6000427C:
    // 0x6000427C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004280: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004284: jal         0x60000238
    // 0x60004288: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_194;
    // 0x60004288: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_194:
    // 0x6000428C: jal         0x60000208
    // 0x60004290: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_195;
    // 0x60004290: nop

    after_195:
    // 0x60004294: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x60004298: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000429C: jal         0x60000F34
    // 0x600042A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_196;
    // 0x600042A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_196:
    // 0x600042A4: beq         $s2, $zero, L_600042B8
    if (ctx->r18 == 0) {
        // 0x600042A8: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_600042B8;
    }
    // 0x600042A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600042AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x600042B0: jal         0x60000F34
    // 0x600042B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_197;
    // 0x600042B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_197:
L_600042B8:
    // 0x600042B8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042BC: lw          $a0, 0x693C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X693C);
    // 0x600042C0: jal         0x60000DA8
    // 0x600042C4: nop

    ovl_menu_stage_DA8(rdram, ctx);
        goto after_198;
    // 0x600042C4: nop

    after_198:
    // 0x600042C8: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x600042CC: jal         0x60000550
    // 0x600042D0: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_199;
    // 0x600042D0: nop

    after_199:
    // 0x600042D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042D8: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x600042DC: jal         0x60001C44
    // 0x600042E0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_200;
    // 0x600042E0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_200:
    // 0x600042E4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042E8: addiu       $a0, $a0, 0x65B4
    ctx->r4 = ADD32(ctx->r4, 0X65B4);
    // 0x600042EC: jal         0x60001C44
    // 0x600042F0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_201;
    // 0x600042F0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_201:
    // 0x600042F4: jal         0x60000F40
    // 0x600042F8: nop

    ovl_menu_stage_F40(rdram, ctx);
        goto after_202;
    // 0x600042F8: nop

    after_202:
    // 0x600042FC: jal         0x60000130
    // 0x60004300: nop

    ovl_menu_stage_130(rdram, ctx);
        goto after_203;
    // 0x60004300: nop

    after_203:
    // 0x60004304: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x60004308: nop

    // 0x6000430C: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x60004310: b           L_6000332C
    // 0x60004314: nop

        goto L_6000332C;
    // 0x60004314: nop

L_60004318:
    // 0x60004318: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
    // 0x6000431C: sw          $zero, 0x188($sp)
    MEM_W(0X188, ctx->r29) = 0;
    // 0x60004320: bne         $t4, $zero, L_60004D7C
    if (ctx->r12 != 0) {
        // 0x60004324: sw          $zero, 0x184($sp)
        MEM_W(0X184, ctx->r29) = 0;
            goto L_60004D7C;
    }
    // 0x60004324: sw          $zero, 0x184($sp)
    MEM_W(0X184, ctx->r29) = 0;
    // 0x60004328: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x6000432C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60004330: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60004334: sw          $t8, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r24;
    // 0x60004338: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x6000433C: addiu       $v1, $v1, 0x62BC
    ctx->r3 = ADD32(ctx->r3, 0X62BC);
    // 0x60004340: addiu       $v0, $v0, 0x62E0
    ctx->r2 = ADD32(ctx->r2, 0X62E0);
    // 0x60004344: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60004348:
    // 0x60004348: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x6000434C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60004350: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x60004354: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x60004358: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x6000435C: bne         $at, $zero, L_60004348
    if (ctx->r1 != 0) {
        // 0x60004360: sw          $t3, 0x64($v0)
        MEM_W(0X64, ctx->r2) = ctx->r11;
            goto L_60004348;
    }
    // 0x60004360: sw          $t3, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r11;
    // 0x60004364: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004368: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x6000436C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004370: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60004374: addiu       $a0, $a0, 0x62E0
    ctx->r4 = ADD32(ctx->r4, 0X62E0);
    // 0x60004378: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x6000437C: jal         0x60001AEC
    // 0x60004380: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_204;
    // 0x60004380: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_204:
    // 0x60004384: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004388: lw          $a0, 0x62EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X62EC);
    // 0x6000438C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x60004390: jal         0x6000061C
    // 0x60004394: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_205;
    // 0x60004394: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_205:
    // 0x60004398: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000439C: lw          $a0, 0x62EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X62EC);
    // 0x600043A0: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x600043A4: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x600043A8: jal         0x60000574
    // 0x600043AC: nop

    ovl_menu_stage_574(rdram, ctx);
        goto after_206;
    // 0x600043AC: nop

    after_206:
    // 0x600043B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600043B4: lw          $a0, 0x62EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X62EC);
    // 0x600043B8: jal         0x60000640
    // 0x600043BC: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_stage_640(rdram, ctx);
        goto after_207;
    // 0x600043BC: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_207:
    // 0x600043C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600043C4: lw          $a0, 0x62EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X62EC);
    // 0x600043C8: jal         0x60000604
    // 0x600043CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_208;
    // 0x600043CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_208:
    // 0x600043D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600043D4: lw          $a0, 0x6350($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6350);
    // 0x600043D8: jal         0x60000604
    // 0x600043DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_stage_604(rdram, ctx);
        goto after_209;
    // 0x600043DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_209:
    // 0x600043E0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x600043E4: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x600043E8: jal         0x6000064C
    // 0x600043EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_210;
    // 0x600043EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_210:
    // 0x600043F0: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x600043F4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x600043F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600043FC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60004400: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004404: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x60004408: addiu       $t5, $zero, -0x80
    ctx->r13 = ADD32(0, -0X80);
    // 0x6000440C: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x60004410: sw          $v1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r3;
    // 0x60004414: sw          $t5, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r13;
    // 0x60004418: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000441C: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60004420: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x60004424: lw          $a0, 0x6344($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6344);
    // 0x60004428: jal         0x6000110C
    // 0x6000442C: nop

    ovl_menu_stage_110C(rdram, ctx);
        goto after_211;
    // 0x6000442C: nop

    after_211:
    // 0x60004430: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x60004434: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60004438: blez        $t7, L_60004484
    if (SIGNED(ctx->r15) <= 0) {
        // 0x6000443C: sw          $zero, 0x144($sp)
        MEM_W(0X144, ctx->r29) = 0;
            goto L_60004484;
    }
    // 0x6000443C: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x60004440: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60004444: sll         $v0, $zero, 1
    ctx->r2 = S32(0 << 1);
    // 0x60004448: addiu       $t6, $sp, 0xE4
    ctx->r14 = ADD32(ctx->r29, 0XE4);
    // 0x6000444C: lw          $a1, 0x6344($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6344);
    // 0x60004450: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x60004454: addiu       $v1, $s5, 0x1
    ctx->r3 = ADD32(ctx->r21, 0X1);
    // 0x60004458: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
L_6000445C:
    // 0x6000445C: addu        $t9, $a1, $v0
    ctx->r25 = ADD32(ctx->r5, ctx->r2);
    // 0x60004460: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x60004464: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x60004468: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x6000446C: lw          $t1, 0x144($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X144);
    // 0x60004470: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x60004474: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60004478: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x6000447C: bne         $at, $zero, L_6000445C
    if (ctx->r1 != 0) {
        // 0x60004480: sw          $t2, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r10;
            goto L_6000445C;
    }
    // 0x60004480: sw          $t2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r10;
L_60004484:
    // 0x60004484: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x60004488: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x6000448C: jal         0x6000064C
    // 0x60004490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_212;
    // 0x60004490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_212:
    // 0x60004494: sll         $s6, $s5, 4
    ctx->r22 = S32(ctx->r21 << 4);
    // 0x60004498: addiu       $s6, $s6, 0x60
    ctx->r22 = ADD32(ctx->r22, 0X60);
    // 0x6000449C: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x600044A0: sw          $v0, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r2;
    // 0x600044A4: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x600044A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600044AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600044B0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x600044B4: addiu       $t4, $zero, -0x80
    ctx->r12 = ADD32(0, -0X80);
    // 0x600044B8: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x600044BC: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x600044C0: sw          $v1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r3;
    // 0x600044C4: sw          $t4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r12;
    // 0x600044C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600044CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600044D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600044D4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x600044D8: jal         0x60000220
    // 0x600044DC: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    ovl_menu_stage_220(rdram, ctx);
        goto after_213;
    // 0x600044DC: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    after_213:
    // 0x600044E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600044E4: sw          $zero, 0x190($sp)
    MEM_W(0X190, ctx->r29) = 0;
    // 0x600044E8: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
L_600044EC:
    // 0x600044EC: jal         0x60000B20
    // 0x600044F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B20(rdram, ctx);
        goto after_214;
    // 0x600044F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_214:
    // 0x600044F4: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x600044F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600044FC: beq         $t8, $zero, L_600048B8
    if (ctx->r24 == 0) {
        // 0x60004500: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_600048B8;
    }
    // 0x60004500: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60004504: bne         $s2, $zero, L_60004618
    if (ctx->r18 != 0) {
        // 0x60004508: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60004618;
    }
    // 0x60004508: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000450C: jal         0x60000244
    // 0x60004510: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_stage_244(rdram, ctx);
        goto after_215;
    // 0x60004510: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_215:
    // 0x60004514: slti        $at, $s5, 0x8
    ctx->r1 = SIGNED(ctx->r21) < 0X8 ? 1 : 0;
    // 0x60004518: beq         $at, $zero, L_6000460C
    if (ctx->r1 == 0) {
        // 0x6000451C: nop
    
            goto L_6000460C;
    }
    // 0x6000451C: nop

    // 0x60004520: lw          $t3, 0x180($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X180);
    // 0x60004524: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60004528: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x6000452C: lw          $t6, 0x184($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X184);
    // 0x60004530: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x60004534: lw          $t7, 0x62D4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X62D4);
    // 0x60004538: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x6000453C: lw          $t2, 0x188($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X188);
    // 0x60004540: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x60004544: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x60004548: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x6000454C: sll         $t5, $s5, 1
    ctx->r13 = S32(ctx->r21 << 1);
    // 0x60004550: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x60004554: lhu         $t3, 0x0($t8)
    ctx->r11 = MEM_HU(ctx->r24, 0X0);
    // 0x60004558: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x6000455C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60004560: addiu       $s6, $s6, 0x10
    ctx->r22 = ADD32(ctx->r22, 0X10);
    // 0x60004564: mtc1        $s6, $f16
    ctx->f16.u32l = ctx->r22;
    // 0x60004568: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x6000456C: sll         $t9, $s5, 1
    ctx->r25 = S32(ctx->r21 << 1);
    // 0x60004570: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x60004574: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x60004578: sh          $t3, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r11;
    // 0x6000457C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60004580: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x60004584: lw          $t2, 0x198($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X198);
    // 0x60004588: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000458C: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
    // 0x60004590: lw          $s0, 0x6350($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X6350);
    // 0x60004594: jal         0x6000110C
    // 0x60004598: nop

    ovl_menu_stage_110C(rdram, ctx);
        goto after_216;
    // 0x60004598: nop

    after_216:
    // 0x6000459C: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x600045A0: lw          $a3, 0x6354($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6354);
    // 0x600045A4: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x600045A8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x600045AC: jal         0x6000175C
    // 0x600045B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_217;
    // 0x600045B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_217:
    // 0x600045B4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600045B8: addiu       $v1, $v1, 0x62E0
    ctx->r3 = ADD32(ctx->r3, 0X62E0);
    // 0x600045BC: lw          $t1, 0x68($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X68);
    // 0x600045C0: lw          $t4, 0x6C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X6C);
    // 0x600045C4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x600045C8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x600045CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600045D0: sw          $v0, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->r2;
    // 0x600045D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600045D8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600045DC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x600045E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x600045E4: jal         0x6000055C
    // 0x600045E8: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_218;
    // 0x600045E8: nop

    after_218:
    // 0x600045EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600045F0: lw          $a0, 0x6350($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6350);
    // 0x600045F4: jal         0x60000604
    // 0x600045F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_stage_604(rdram, ctx);
        goto after_219;
    // 0x600045F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_219:
    // 0x600045FC: jal         0x60001ACC
    // 0x60004600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_1ACC(rdram, ctx);
        goto after_220;
    // 0x60004600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_220:
    // 0x60004604: b           L_60004A20
    // 0x60004608: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
        goto L_60004A20;
    // 0x60004608: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
L_6000460C:
    // 0x6000460C: b           L_60004A1C
    // 0x60004610: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_60004A1C;
    // 0x60004610: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x60004614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_60004618:
    // 0x60004618: bne         $s2, $at, L_60004708
    if (ctx->r18 != ctx->r1) {
        // 0x6000461C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_60004708;
    }
    // 0x6000461C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x60004620: beq         $s5, $zero, L_60004708
    if (ctx->r21 == 0) {
        // 0x60004624: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_60004708;
    }
    // 0x60004624: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x60004628: lw          $s0, 0x168($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X168);
    // 0x6000462C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60004630: sw          $t8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r24;
    // 0x60004634: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60004638: addiu       $v1, $s5, 0x1
    ctx->r3 = ADD32(ctx->r21, 0X1);
    // 0x6000463C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60004640:
    // 0x60004640: blez        $v1, L_60004688
    if (SIGNED(ctx->r3) <= 0) {
        // 0x60004644: sw          $zero, 0x144($sp)
        MEM_W(0X144, ctx->r29) = 0;
            goto L_60004688;
    }
    // 0x60004644: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x60004648: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000464C: addiu       $a0, $a0, 0x62E0
    ctx->r4 = ADD32(ctx->r4, 0X62E0);
    // 0x60004650: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
L_60004654:
    // 0x60004654: lw          $v0, 0x144($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X144);
    // 0x60004658: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x6000465C: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x60004660: addu        $t3, $a1, $t5
    ctx->r11 = ADD32(ctx->r5, ctx->r13);
    // 0x60004664: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x60004668: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x6000466C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x60004670: lw          $t0, 0x144($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X144);
    // 0x60004674: nop

    // 0x60004678: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x6000467C: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60004680: bne         $at, $zero, L_60004654
    if (ctx->r1 != 0) {
        // 0x60004684: sw          $t2, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r10;
            goto L_60004654;
    }
    // 0x60004684: sw          $t2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r10;
L_60004688:
    // 0x60004688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x6000468C: jal         0x60001D54
    // 0x60004690: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    ovl_menu_stage_1D54(rdram, ctx);
        goto after_221;
    // 0x60004690: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    after_221:
    // 0x60004694: jal         0x60000244
    // 0x60004698: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_stage_244(rdram, ctx);
        goto after_222;
    // 0x60004698: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_222:
L_6000469C:
    // 0x6000469C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600046A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600046A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600046A8: jal         0x60000238
    // 0x600046AC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_223;
    // 0x600046AC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_223:
    // 0x600046B0: jal         0x60000208
    // 0x600046B4: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_224;
    // 0x600046B4: nop

    after_224:
    // 0x600046B8: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x600046BC: jal         0x60000550
    // 0x600046C0: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_225;
    // 0x600046C0: nop

    after_225:
    // 0x600046C4: lw          $a0, 0x198($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X198);
    // 0x600046C8: jal         0x60000550
    // 0x600046CC: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_226;
    // 0x600046CC: nop

    after_226:
    // 0x600046D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600046D4: addiu       $a0, $a0, 0x62E0
    ctx->r4 = ADD32(ctx->r4, 0X62E0);
    // 0x600046D8: jal         0x60001C44
    // 0x600046DC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_227;
    // 0x600046DC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_227:
    // 0x600046E0: jal         0x60000F40
    // 0x600046E4: nop

    ovl_menu_stage_F40(rdram, ctx);
        goto after_228;
    // 0x600046E4: nop

    after_228:
    // 0x600046E8: jal         0x60000130
    // 0x600046EC: nop

    ovl_menu_stage_130(rdram, ctx);
        goto after_229;
    // 0x600046EC: nop

    after_229:
    // 0x600046F0: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x600046F4: nop

    // 0x600046F8: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x600046FC: b           L_6000332C
    // 0x60004700: nop

        goto L_6000332C;
    // 0x60004700: nop

    // 0x60004704: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
L_60004708:
    // 0x60004708: bne         $at, $zero, L_60004A20
    if (ctx->r1 != 0) {
        // 0x6000470C: andi        $t1, $fp, 0x400
        ctx->r9 = ctx->r30 & 0X400;
            goto L_60004A20;
    }
    // 0x6000470C: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
    // 0x60004710: lw          $t4, 0x180($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X180);
    // 0x60004714: nop

    // 0x60004718: addiu       $t8, $t4, 0x2
    ctx->r24 = ADD32(ctx->r12, 0X2);
    // 0x6000471C: beq         $s2, $t8, L_60004A1C
    if (ctx->r18 == ctx->r24) {
        // 0x60004720: addiu       $v0, $s2, -0x2
        ctx->r2 = ADD32(ctx->r18, -0X2);
            goto L_60004A1C;
    }
    // 0x60004720: addiu       $v0, $s2, -0x2
    ctx->r2 = ADD32(ctx->r18, -0X2);
    // 0x60004724: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60004728: addiu       $t3, $t3, 0x62D4
    ctx->r11 = ADD32(ctx->r11, 0X62D4);
    // 0x6000472C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x60004730: sw          $v0, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r2;
    // 0x60004734: addu        $s4, $t5, $t3
    ctx->r20 = ADD32(ctx->r13, ctx->r11);
    // 0x60004738: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_6000473C:
    // 0x6000473C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60004740: addiu       $s0, $s0, 0x62E0
    ctx->r16 = ADD32(ctx->r16, 0X62E0);
    // 0x60004744: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60004748: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
L_6000474C:
    // 0x6000474C: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x60004750: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x60004754: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x60004758: jal         0x600005D4
    // 0x6000475C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_230;
    // 0x6000475C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_230:
    // 0x60004760: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60004764: addiu       $t9, $t9, 0x6358
    ctx->r25 = ADD32(ctx->r25, 0X6358);
    // 0x60004768: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x6000476C: bne         $s0, $t9, L_6000474C
    if (ctx->r16 != ctx->r25) {
        // 0x60004770: lw          $s1, 0x144($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X144);
            goto L_6000474C;
    }
    // 0x60004770: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004774: jal         0x6000085C
    // 0x60004778: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_231;
    // 0x60004778: nop

    after_231:
    // 0x6000477C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004780: nop

    // 0x60004784: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x60004788: bgtz        $s1, L_6000473C
    if (SIGNED(ctx->r17) > 0) {
        // 0x6000478C: nop
    
            goto L_6000473C;
    }
    // 0x6000478C: nop

    // 0x60004790: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60004794: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
L_60004798:
    // 0x60004798: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x6000479C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x600047A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600047A4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x600047A8: lw          $a0, 0x6364($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6364);
    // 0x600047AC: jal         0x60001ACC
    // 0x600047B0: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_1ACC(rdram, ctx);
        goto after_232;
    // 0x600047B0: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_232:
    // 0x600047B4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x600047B8: nop

    // 0x600047BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600047C0: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x600047C4: bne         $at, $zero, L_60004798
    if (ctx->r1 != 0) {
        // 0x600047C8: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_60004798;
    }
    // 0x600047C8: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x600047CC: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x600047D0: jal         0x60000850
    // 0x600047D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_menu_stage_850(rdram, ctx);
        goto after_233;
    // 0x600047D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_233:
    // 0x600047D8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600047DC: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x600047E0: addiu       $v0, $v0, 0x62E0
    ctx->r2 = ADD32(ctx->r2, 0X62E0);
    // 0x600047E4: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
L_600047E8:
    // 0x600047E8: lw          $t0, 0x144($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X144);
    // 0x600047EC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x600047F0: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x600047F4: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x600047F8: sw          $t2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r10;
    // 0x600047FC: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x60004800: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60004804: bne         $at, $zero, L_600047E8
    if (ctx->r1 != 0) {
        // 0x60004808: sw          $t7, 0x64($v0)
        MEM_W(0X64, ctx->r2) = ctx->r15;
            goto L_600047E8;
    }
    // 0x60004808: sw          $t7, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r15;
    // 0x6000480C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004810: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60004814: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004818: addiu       $a0, $a0, 0x6358
    ctx->r4 = ADD32(ctx->r4, 0X6358);
    // 0x6000481C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004820: jal         0x60001AEC
    // 0x60004824: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_234;
    // 0x60004824: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_234:
    // 0x60004828: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_6000482C:
    // 0x6000482C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60004830: addiu       $s0, $s0, 0x62E0
    ctx->r16 = ADD32(ctx->r16, 0X62E0);
    // 0x60004834: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60004838: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
L_6000483C:
    // 0x6000483C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004840: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60004844: bne         $s1, $at, L_60004864
    if (ctx->r17 != ctx->r1) {
        // 0x60004848: sll         $a1, $s1, 2
        ctx->r5 = S32(ctx->r17 << 2);
            goto L_60004864;
    }
    // 0x60004848: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
    // 0x6000484C: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x60004850: jal         0x600005D4
    // 0x60004854: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_235;
    // 0x60004854: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_235:
    // 0x60004858: b           L_6000487C
    // 0x6000485C: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
        goto L_6000487C;
    // 0x6000485C: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
    // 0x60004860: sll         $a1, $s1, 2
    ctx->r5 = S32(ctx->r17 << 2);
L_60004864:
    // 0x60004864: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x60004868: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x6000486C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x60004870: jal         0x600005D4
    // 0x60004874: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_236;
    // 0x60004874: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_236:
    // 0x60004878: lw          $v0, 0x140($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X140);
L_6000487C:
    // 0x6000487C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x60004880: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60004884: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x60004888: bne         $v0, $at, L_6000483C
    if (ctx->r2 != ctx->r1) {
        // 0x6000488C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_6000483C;
    }
    // 0x6000488C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x60004890: jal         0x6000085C
    // 0x60004894: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_237;
    // 0x60004894: nop

    after_237:
    // 0x60004898: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x6000489C: nop

    // 0x600048A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600048A4: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x600048A8: bne         $at, $zero, L_6000482C
    if (ctx->r1 != 0) {
        // 0x600048AC: nop
    
            goto L_6000482C;
    }
    // 0x600048AC: nop

    // 0x600048B0: b           L_60004A1C
    // 0x600048B4: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
        goto L_60004A1C;
    // 0x600048B4: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
L_600048B8:
    // 0x600048B8: andi        $t1, $v1, 0x4000
    ctx->r9 = ctx->r3 & 0X4000;
    // 0x600048BC: beq         $t1, $zero, L_600049D0
    if (ctx->r9 == 0) {
        // 0x600048C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600049D0;
    }
    // 0x600048C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600048C4: bne         $s2, $at, L_600048D8
    if (ctx->r18 != ctx->r1) {
        // 0x600048C8: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_600048D8;
    }
    // 0x600048C8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x600048CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x600048D0: b           L_60004A1C
    // 0x600048D4: sw          $t4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r12;
        goto L_60004A1C;
    // 0x600048D4: sw          $t4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r12;
L_600048D8:
    // 0x600048D8: jal         0x60000244
    // 0x600048DC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_238;
    // 0x600048DC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_238:
    // 0x600048E0: blez        $s5, L_600049C8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x600048E4: addiu       $s6, $s6, -0x10
        ctx->r22 = ADD32(ctx->r22, -0X10);
            goto L_600049C8;
    }
    // 0x600048E4: addiu       $s6, $s6, -0x10
    ctx->r22 = ADD32(ctx->r22, -0X10);
    // 0x600048E8: mtc1        $s6, $f8
    ctx->f8.u32l = ctx->r22;
    // 0x600048EC: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x600048F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600048F4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x600048F8: sll         $t3, $s5, 1
    ctx->r11 = S32(ctx->r21 << 1);
    // 0x600048FC: addu        $t9, $sp, $t3
    ctx->r25 = ADD32(ctx->r29, ctx->r11);
    // 0x60004900: ori         $t5, $zero, 0xFFFF
    ctx->r13 = 0 | 0XFFFF;
    // 0x60004904: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
    // 0x60004908: sh          $t5, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r13;
    // 0x6000490C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60004910: lw          $s0, 0x6350($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X6350);
    // 0x60004914: beq         $s5, $zero, L_60004948
    if (ctx->r21 == 0) {
        // 0x60004918: nop
    
            goto L_60004948;
    }
    // 0x60004918: nop

    // 0x6000491C: jal         0x6000110C
    // 0x60004920: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    ovl_menu_stage_110C(rdram, ctx);
        goto after_239;
    // 0x60004920: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    after_239:
    // 0x60004924: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60004928: lw          $a3, 0x6354($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6354);
    // 0x6000492C: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x60004930: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60004934: jal         0x6000175C
    // 0x60004938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_240;
    // 0x60004938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_240:
    // 0x6000493C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004940: b           L_60004970
    // 0x60004944: sw          $v0, 0x6350($at)
    MEM_W(0X6350, ctx->r1) = ctx->r2;
        goto L_60004970;
    // 0x60004944: sw          $v0, 0x6350($at)
    MEM_W(0X6350, ctx->r1) = ctx->r2;
L_60004948:
    // 0x60004948: jal         0x6000110C
    // 0x6000494C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    ovl_menu_stage_110C(rdram, ctx);
        goto after_241;
    // 0x6000494C: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    after_241:
    // 0x60004950: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60004954: lw          $a3, 0x6354($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6354);
    // 0x60004958: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x6000495C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60004960: jal         0x6000175C
    // 0x60004964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_175C(rdram, ctx);
        goto after_242;
    // 0x60004964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_242:
    // 0x60004968: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000496C: sw          $v0, 0x6350($at)
    MEM_W(0X6350, ctx->r1) = ctx->r2;
L_60004970:
    // 0x60004970: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60004974: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60004978: lw          $t7, 0x634C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X634C);
    // 0x6000497C: lw          $t6, 0x6348($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6348);
    // 0x60004980: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x60004984: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x60004988: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x6000498C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004990: lw          $a0, 0x6350($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6350);
    // 0x60004994: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60004998: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x6000499C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x600049A0: jal         0x6000055C
    // 0x600049A4: nop

    ovl_menu_stage_55C(rdram, ctx);
        goto after_243;
    // 0x600049A4: nop

    after_243:
    // 0x600049A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600049AC: lw          $a0, 0x6350($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6350);
    // 0x600049B0: jal         0x60000604
    // 0x600049B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_stage_604(rdram, ctx);
        goto after_244;
    // 0x600049B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_244:
    // 0x600049B8: jal         0x60001ACC
    // 0x600049BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_1ACC(rdram, ctx);
        goto after_245;
    // 0x600049BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_245:
    // 0x600049C0: b           L_60004A20
    // 0x600049C4: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
        goto L_60004A20;
    // 0x600049C4: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
L_600049C8:
    // 0x600049C8: b           L_6000469C
    // 0x600049CC: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
        goto L_6000469C;
    // 0x600049CC: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
L_600049D0:
    // 0x600049D0: andi        $t0, $v1, 0x1000
    ctx->r8 = ctx->r3 & 0X1000;
    // 0x600049D4: beq         $t0, $zero, L_60004A20
    if (ctx->r8 == 0) {
        // 0x600049D8: andi        $t1, $fp, 0x400
        ctx->r9 = ctx->r30 & 0X400;
            goto L_60004A20;
    }
    // 0x600049D8: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
    // 0x600049DC: bne         $s2, $zero, L_600049F0
    if (ctx->r18 != 0) {
        // 0x600049E0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600049F0;
    }
    // 0x600049E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600049E4: b           L_60004A1C
    // 0x600049E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_60004A1C;
    // 0x600049E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x600049EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_600049F0:
    // 0x600049F0: bne         $s2, $at, L_60004A20
    if (ctx->r18 != ctx->r1) {
        // 0x600049F4: andi        $t1, $fp, 0x400
        ctx->r9 = ctx->r30 & 0X400;
            goto L_60004A20;
    }
    // 0x600049F4: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
    // 0x600049F8: beq         $s5, $zero, L_60004A20
    if (ctx->r21 == 0) {
        // 0x600049FC: andi        $t1, $fp, 0x400
        ctx->r9 = ctx->r30 & 0X400;
            goto L_60004A20;
    }
    // 0x600049FC: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
    // 0x60004A00: lw          $s0, 0x168($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X168);
    // 0x60004A04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60004A08: sw          $t2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r10;
    // 0x60004A0C: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60004A10: addiu       $v1, $s5, 0x1
    ctx->r3 = ADD32(ctx->r21, 0X1);
    // 0x60004A14: b           L_60004640
    // 0x60004A18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_60004640;
    // 0x60004A18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60004A1C:
    // 0x60004A1C: andi        $t1, $fp, 0x400
    ctx->r9 = ctx->r30 & 0X400;
L_60004A20:
    // 0x60004A20: beq         $t1, $zero, L_60004A84
    if (ctx->r9 == 0) {
        // 0x60004A24: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60004A84;
    }
    // 0x60004A24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004A28: bne         $s2, $at, L_60004A3C
    if (ctx->r18 != ctx->r1) {
        // 0x60004A2C: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_60004A3C;
    }
    // 0x60004A2C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x60004A30: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60004A34: b           L_60004A84
    // 0x60004A38: sw          $t4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r12;
        goto L_60004A84;
    // 0x60004A38: sw          $t4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r12;
L_60004A3C:
    // 0x60004A3C: bne         $s2, $zero, L_60004A88
    if (ctx->r18 != 0) {
        // 0x60004A40: andi        $t6, $fp, 0x800
        ctx->r14 = ctx->r30 & 0X800;
            goto L_60004A88;
    }
    // 0x60004A40: andi        $t6, $fp, 0x800
    ctx->r14 = ctx->r30 & 0X800;
    // 0x60004A44: lw          $t8, 0x188($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X188);
    // 0x60004A48: nop

    // 0x60004A4C: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x60004A50: bne         $at, $zero, L_60004A6C
    if (ctx->r1 != 0) {
        // 0x60004A54: lw          $t3, 0x184($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X184);
            goto L_60004A6C;
    }
    // 0x60004A54: lw          $t3, 0x184($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X184);
    // 0x60004A58: lw          $t5, 0x184($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X184);
    // 0x60004A5C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004A60: beq         $t5, $at, L_60004A88
    if (ctx->r13 == ctx->r1) {
        // 0x60004A64: andi        $t6, $fp, 0x800
        ctx->r14 = ctx->r30 & 0X800;
            goto L_60004A88;
    }
    // 0x60004A64: andi        $t6, $fp, 0x800
    ctx->r14 = ctx->r30 & 0X800;
    // 0x60004A68: lw          $t3, 0x184($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X184);
L_60004A6C:
    // 0x60004A6C: nop

    // 0x60004A70: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x60004A74: beq         $at, $zero, L_60004A84
    if (ctx->r1 == 0) {
        // 0x60004A78: addiu       $t9, $t3, 0x1
        ctx->r25 = ADD32(ctx->r11, 0X1);
            goto L_60004A84;
    }
    // 0x60004A78: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x60004A7C: sw          $t9, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r25;
    // 0x60004A80: addiu       $s3, $s3, 0x11
    ctx->r19 = ADD32(ctx->r19, 0X11);
L_60004A84:
    // 0x60004A84: andi        $t6, $fp, 0x800
    ctx->r14 = ctx->r30 & 0X800;
L_60004A88:
    // 0x60004A88: beq         $t6, $zero, L_60004AC4
    if (ctx->r14 == 0) {
        // 0x60004A8C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_60004AC4;
    }
    // 0x60004A8C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x60004A90: bne         $at, $zero, L_60004AA4
    if (ctx->r1 != 0) {
        // 0x60004A94: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_60004AA4;
    }
    // 0x60004A94: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x60004A98: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60004A9C: b           L_60004AC4
    // 0x60004AA0: sw          $t7, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r15;
        goto L_60004AC4;
    // 0x60004AA0: sw          $t7, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r15;
L_60004AA4:
    // 0x60004AA4: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
    // 0x60004AA8: nop

    // 0x60004AAC: blez        $t0, L_60004AC0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x60004AB0: addiu       $t2, $t0, -0x1
        ctx->r10 = ADD32(ctx->r8, -0X1);
            goto L_60004AC0;
    }
    // 0x60004AB0: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x60004AB4: sw          $t2, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r10;
    // 0x60004AB8: b           L_60004AC4
    // 0x60004ABC: addiu       $s3, $s3, -0x11
    ctx->r19 = ADD32(ctx->r19, -0X11);
        goto L_60004AC4;
    // 0x60004ABC: addiu       $s3, $s3, -0x11
    ctx->r19 = ADD32(ctx->r19, -0X11);
L_60004AC0:
    // 0x60004AC0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_60004AC4:
    // 0x60004AC4: andi        $t1, $fp, 0x100
    ctx->r9 = ctx->r30 & 0X100;
    // 0x60004AC8: beq         $t1, $zero, L_60004B54
    if (ctx->r9 == 0) {
        // 0x60004ACC: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_60004B54;
    }
    // 0x60004ACC: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x60004AD0: bne         $at, $zero, L_60004AE8
    if (ctx->r1 != 0) {
        // 0x60004AD4: slti        $at, $s2, 0x4
        ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
            goto L_60004AE8;
    }
    // 0x60004AD4: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x60004AD8: beq         $at, $zero, L_60004B58
    if (ctx->r1 == 0) {
        // 0x60004ADC: andi        $t0, $fp, 0x200
        ctx->r8 = ctx->r30 & 0X200;
            goto L_60004B58;
    }
    // 0x60004ADC: andi        $t0, $fp, 0x200
    ctx->r8 = ctx->r30 & 0X200;
    // 0x60004AE0: b           L_60004B54
    // 0x60004AE4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_60004B54;
    // 0x60004AE4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_60004AE8:
    // 0x60004AE8: bne         $s2, $zero, L_60004B58
    if (ctx->r18 != 0) {
        // 0x60004AEC: andi        $t0, $fp, 0x200
        ctx->r8 = ctx->r30 & 0X200;
            goto L_60004B58;
    }
    // 0x60004AEC: andi        $t0, $fp, 0x200
    ctx->r8 = ctx->r30 & 0X200;
    // 0x60004AF0: lw          $t4, 0x188($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X188);
    // 0x60004AF4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60004AF8: bne         $t4, $at, L_60004B14
    if (ctx->r12 != ctx->r1) {
        // 0x60004AFC: lw          $t5, 0x188($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X188);
            goto L_60004B14;
    }
    // 0x60004AFC: lw          $t5, 0x188($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X188);
    // 0x60004B00: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x60004B04: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60004B08: beq         $t8, $at, L_60004B58
    if (ctx->r24 == ctx->r1) {
        // 0x60004B0C: andi        $t0, $fp, 0x200
        ctx->r8 = ctx->r30 & 0X200;
            goto L_60004B58;
    }
    // 0x60004B0C: andi        $t0, $fp, 0x200
    ctx->r8 = ctx->r30 & 0X200;
    // 0x60004B10: lw          $t5, 0x188($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X188);
L_60004B14:
    // 0x60004B14: nop

    // 0x60004B18: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x60004B1C: beq         $at, $zero, L_60004B2C
    if (ctx->r1 == 0) {
        // 0x60004B20: addiu       $t3, $t5, 0x1
        ctx->r11 = ADD32(ctx->r13, 0X1);
            goto L_60004B2C;
    }
    // 0x60004B20: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x60004B24: sw          $t3, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r11;
    // 0x60004B28: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60004B2C:
    // 0x60004B2C: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x60004B30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60004B34: beq         $t9, $at, L_60004B44
    if (ctx->r25 == ctx->r1) {
        // 0x60004B38: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_60004B44;
    }
    // 0x60004B38: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x60004B3C: bne         $t9, $at, L_60004B58
    if (ctx->r25 != ctx->r1) {
        // 0x60004B40: andi        $t0, $fp, 0x200
        ctx->r8 = ctx->r30 & 0X200;
            goto L_60004B58;
    }
    // 0x60004B40: andi        $t0, $fp, 0x200
    ctx->r8 = ctx->r30 & 0X200;
L_60004B44:
    // 0x60004B44: lw          $t6, 0x188($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X188);
    // 0x60004B48: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60004B4C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60004B50: sw          $t7, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r15;
L_60004B54:
    // 0x60004B54: andi        $t0, $fp, 0x200
    ctx->r8 = ctx->r30 & 0X200;
L_60004B58:
    // 0x60004B58: beq         $t0, $zero, L_60004BD0
    if (ctx->r8 == 0) {
        // 0x60004B5C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_60004BD0;
    }
    // 0x60004B5C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x60004B60: bne         $at, $zero, L_60004B88
    if (ctx->r1 != 0) {
        // 0x60004B64: slti        $at, $s2, 0x3
        ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
            goto L_60004B88;
    }
    // 0x60004B64: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x60004B68: bne         $at, $zero, L_60004B7C
    if (ctx->r1 != 0) {
        // 0x60004B6C: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_60004B7C;
    }
    // 0x60004B6C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x60004B70: b           L_60004BD0
    // 0x60004B74: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_60004BD0;
    // 0x60004B74: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x60004B78: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_60004B7C:
    // 0x60004B7C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60004B80: b           L_60004BD0
    // 0x60004B84: sw          $t2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r10;
        goto L_60004BD0;
    // 0x60004B84: sw          $t2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r10;
L_60004B88:
    // 0x60004B88: bne         $s2, $zero, L_60004BD0
    if (ctx->r18 != 0) {
        // 0x60004B8C: nop
    
            goto L_60004BD0;
    }
    // 0x60004B8C: nop

    // 0x60004B90: lw          $t1, 0x188($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X188);
    // 0x60004B94: nop

    // 0x60004B98: blez        $t1, L_60004BA8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x60004B9C: addiu       $t4, $t1, -0x1
        ctx->r12 = ADD32(ctx->r9, -0X1);
            goto L_60004BA8;
    }
    // 0x60004B9C: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x60004BA0: sw          $t4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r12;
    // 0x60004BA4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_60004BA8:
    // 0x60004BA8: lw          $t8, 0x188($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X188);
    // 0x60004BAC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60004BB0: beq         $t8, $at, L_60004BC0
    if (ctx->r24 == ctx->r1) {
        // 0x60004BB4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_60004BC0;
    }
    // 0x60004BB4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x60004BB8: bne         $t8, $at, L_60004BD0
    if (ctx->r24 != ctx->r1) {
        // 0x60004BBC: nop
    
            goto L_60004BD0;
    }
    // 0x60004BBC: nop

L_60004BC0:
    // 0x60004BC0: lw          $t5, 0x188($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X188);
    // 0x60004BC4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x60004BC8: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x60004BCC: sw          $t3, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r11;
L_60004BD0:
    // 0x60004BD0: beq         $s2, $zero, L_60004BE8
    if (ctx->r18 == 0) {
        // 0x60004BD4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60004BE8;
    }
    // 0x60004BD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004BD8: beq         $s2, $at, L_60004C50
    if (ctx->r18 == ctx->r1) {
        // 0x60004BDC: sw          $s3, 0x190($sp)
        MEM_W(0X190, ctx->r29) = ctx->r19;
            goto L_60004C50;
    }
    // 0x60004BDC: sw          $s3, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r19;
    // 0x60004BE0: b           L_60004C9C
    // 0x60004BE4: xor         $v0, $s7, $s2
    ctx->r2 = ctx->r23 ^ ctx->r18;
        goto L_60004C9C;
    // 0x60004BE4: xor         $v0, $s7, $s2
    ctx->r2 = ctx->r23 ^ ctx->r18;
L_60004BE8:
    // 0x60004BE8: lw          $t9, 0x190($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X190);
    // 0x60004BEC: sw          $s3, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r19;
    // 0x60004BF0: beq         $t9, $s3, L_60004CE8
    if (ctx->r25 == ctx->r19) {
        // 0x60004BF4: or          $s7, $s2, $zero
        ctx->r23 = ctx->r18 | 0;
            goto L_60004CE8;
    }
    // 0x60004BF4: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x60004BF8: lw          $t6, 0x188($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X188);
    // 0x60004BFC: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
    // 0x60004C00: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x60004C04: addiu       $t0, $t7, 0x18
    ctx->r8 = ADD32(ctx->r15, 0X18);
    // 0x60004C08: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x60004C0C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x60004C10: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004C14: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60004C18: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x60004C1C: lw          $t2, 0x184($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X184);
    // 0x60004C20: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x60004C24: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x60004C28: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x60004C2C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60004C30: addiu       $t4, $t1, 0x50
    ctx->r12 = ADD32(ctx->r9, 0X50);
    // 0x60004C34: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x60004C38: sw          $v1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r3;
    // 0x60004C3C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60004C40: jal         0x60000244
    // 0x60004C44: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_246;
    // 0x60004C44: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    after_246:
    // 0x60004C48: b           L_60004CEC
    // 0x60004C4C: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
        goto L_60004CEC;
    // 0x60004C4C: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
L_60004C50:
    // 0x60004C50: xor         $v0, $s7, $s2
    ctx->r2 = ctx->r23 ^ ctx->r18;
    // 0x60004C54: beq         $v0, $zero, L_60004CE8
    if (ctx->r2 == 0) {
        // 0x60004C58: or          $s7, $s2, $zero
        ctx->r23 = ctx->r18 | 0;
            goto L_60004CE8;
    }
    // 0x60004C58: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x60004C5C: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
    // 0x60004C60: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x60004C64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004C68: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x60004C6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004C70: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x60004C74: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x60004C78: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60004C7C: sw          $t8, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r24;
    // 0x60004C80: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x60004C84: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x60004C88: jal         0x60000244
    // 0x60004C8C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_247;
    // 0x60004C8C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    after_247:
    // 0x60004C90: b           L_60004CEC
    // 0x60004C94: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
        goto L_60004CEC;
    // 0x60004C94: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x60004C98: xor         $v0, $s7, $s2
    ctx->r2 = ctx->r23 ^ ctx->r18;
L_60004C9C:
    // 0x60004C9C: beq         $v0, $zero, L_60004CE8
    if (ctx->r2 == 0) {
        // 0x60004CA0: or          $s7, $s2, $zero
        ctx->r23 = ctx->r18 | 0;
            goto L_60004CE8;
    }
    // 0x60004CA0: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x60004CA4: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x60004CA8: multu       $s2, $v1
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60004CAC: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
    // 0x60004CB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60004CB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004CB8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x60004CBC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60004CC0: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x60004CC4: sw          $t6, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r14;
    // 0x60004CC8: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x60004CCC: mflo        $t3
    ctx->r11 = lo;
    // 0x60004CD0: addiu       $t9, $t3, 0xB1
    ctx->r25 = ADD32(ctx->r11, 0XB1);
    // 0x60004CD4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60004CD8: nop

    // 0x60004CDC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004CE0: jal         0x60000244
    // 0x60004CE4: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_248;
    // 0x60004CE4: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    after_248:
L_60004CE8:
    // 0x60004CE8: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
L_60004CEC:
    // 0x60004CEC: nop

    // 0x60004CF0: beq         $t7, $zero, L_60004D38
    if (ctx->r15 == 0) {
        // 0x60004CF4: lw          $t8, 0x19C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X19C);
            goto L_60004D38;
    }
    // 0x60004CF4: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
    // 0x60004CF8: lw          $t0, 0x19C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X19C);
    // 0x60004CFC: nop

    // 0x60004D00: lw          $v0, 0x3C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X3C);
    // 0x60004D04: nop

    // 0x60004D08: srl         $t2, $v0, 8
    ctx->r10 = S32(U32(ctx->r2) >> 8);
    // 0x60004D0C: bne         $t2, $zero, L_60004D20
    if (ctx->r10 != 0) {
        // 0x60004D10: lui         $at, 0xEEEE
        ctx->r1 = S32(0XEEEE << 16);
            goto L_60004D20;
    }
    // 0x60004D10: lui         $at, 0xEEEE
    ctx->r1 = S32(0XEEEE << 16);
    // 0x60004D14: b           L_60004D6C
    // 0x60004D18: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
        goto L_60004D6C;
    // 0x60004D18: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x60004D1C: lui         $at, 0xEEEE
    ctx->r1 = S32(0XEEEE << 16);
L_60004D20:
    // 0x60004D20: lw          $t4, 0x19C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X19C);
    // 0x60004D24: ori         $at, $at, 0xEF00
    ctx->r1 = ctx->r1 | 0XEF00;
    // 0x60004D28: addu        $t1, $v0, $at
    ctx->r9 = ADD32(ctx->r2, ctx->r1);
    // 0x60004D2C: b           L_60004D6C
    // 0x60004D30: sw          $t1, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->r9;
        goto L_60004D6C;
    // 0x60004D30: sw          $t1, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->r9;
    // 0x60004D34: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
L_60004D38:
    // 0x60004D38: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x60004D3C: lw          $v0, 0x3C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X3C);
    // 0x60004D40: nop

    // 0x60004D44: and         $t5, $v0, $v1
    ctx->r13 = ctx->r2 & ctx->r3;
    // 0x60004D48: bne         $v1, $t5, L_60004D58
    if (ctx->r3 != ctx->r13) {
        // 0x60004D4C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_60004D58;
    }
    // 0x60004D4C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x60004D50: b           L_60004D6C
    // 0x60004D54: sw          $t3, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r11;
        goto L_60004D6C;
    // 0x60004D54: sw          $t3, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r11;
L_60004D58:
    // 0x60004D58: lui         $at, 0x1111
    ctx->r1 = S32(0X1111 << 16);
    // 0x60004D5C: lw          $t6, 0x19C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X19C);
    // 0x60004D60: ori         $at, $at, 0x1100
    ctx->r1 = ctx->r1 | 0X1100;
    // 0x60004D64: addu        $t9, $v0, $at
    ctx->r25 = ADD32(ctx->r2, ctx->r1);
    // 0x60004D68: sw          $t9, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r25;
L_60004D6C:
    // 0x60004D6C: jal         0x6000085C
    // 0x60004D70: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_249;
    // 0x60004D70: nop

    after_249:
    // 0x60004D74: b           L_600044EC
    // 0x60004D78: nop

        goto L_600044EC;
    // 0x60004D78: nop

L_60004D7C:
    // 0x60004D7C: lw          $v1, 0x18C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18C);
    // 0x60004D80: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60004D84: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x60004D88: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x60004D8C: lw          $t0, 0x5C2C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5C2C);
    // 0x60004D90: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x60004D94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D98: addiu       $s0, $v0, -0x10
    ctx->r16 = ADD32(ctx->r2, -0X10);
    // 0x60004D9C: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x60004DA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60004DA4: sw          $t0, 0x5EAC($at)
    MEM_W(0X5EAC, ctx->r1) = ctx->r8;
    // 0x60004DA8: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
L_60004DAC:
    // 0x60004DAC: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60004DB0: addu        $a0, $t2, $s1
    ctx->r4 = ADD32(ctx->r10, ctx->r17);
    // 0x60004DB4: jal         0x60000BB0
    // 0x60004DB8: addiu       $a0, $a0, 0xA5
    ctx->r4 = ADD32(ctx->r4, 0XA5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_250;
    // 0x60004DB8: addiu       $a0, $a0, 0xA5
    ctx->r4 = ADD32(ctx->r4, 0XA5);
    after_250:
    // 0x60004DBC: beq         $v0, $zero, L_60004DF8
    if (ctx->r2 == 0) {
        // 0x60004DC0: lw          $s1, 0x144($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X144);
            goto L_60004DF8;
    }
    // 0x60004DC0: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004DC4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004DC8: lw          $t1, 0x18C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18C);
    // 0x60004DCC: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x60004DD0: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x60004DD4: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x60004DD8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60004DDC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004DE0: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x60004DE4: addiu       $t5, $t8, 0x98C
    ctx->r13 = ADD32(ctx->r24, 0X98C);
    // 0x60004DE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x60004DEC: b           L_60004E14
    // 0x60004DF0: sw          $t5, 0x5EC0($at)
    MEM_W(0X5EC0, ctx->r1) = ctx->r13;
        goto L_60004E14;
    // 0x60004DF0: sw          $t5, 0x5EC0($at)
    MEM_W(0X5EC0, ctx->r1) = ctx->r13;
    // 0x60004DF4: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
L_60004DF8:
    // 0x60004DF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004DFC: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x60004E00: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x60004E04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60004E08: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60004E0C: addiu       $t9, $zero, 0xBE1
    ctx->r25 = ADD32(0, 0XBE1);
    // 0x60004E10: sw          $t9, 0x5EC0($at)
    MEM_W(0X5EC0, ctx->r1) = ctx->r25;
L_60004E14:
    // 0x60004E14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60004E18: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x60004E1C: bne         $at, $zero, L_60004DAC
    if (ctx->r1 != 0) {
        // 0x60004E20: lw          $t2, 0x94($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X94);
            goto L_60004DAC;
    }
    // 0x60004E20: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x60004E24: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E28: addiu       $a0, $a0, 0x5E70
    ctx->r4 = ADD32(ctx->r4, 0X5E70);
    // 0x60004E2C: sw          $s0, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r16;
    // 0x60004E30: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60004E34: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60004E38: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60004E3C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x60004E40: jal         0x60001AEC
    // 0x60004E44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_251;
    // 0x60004E44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_251:
    // 0x60004E48: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60004E4C: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
L_60004E50:
    // 0x60004E50: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x60004E54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60004E58: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E5C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60004E60: lw          $a0, 0x5ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5ECC);
    // 0x60004E64: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x60004E68: jal         0x600005D4
    // 0x60004E6C: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_252;
    // 0x60004E6C: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    after_252:
    // 0x60004E70: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60004E74: nop

    // 0x60004E78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60004E7C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x60004E80: bne         $at, $zero, L_60004E50
    if (ctx->r1 != 0) {
        // 0x60004E84: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_60004E50;
    }
    // 0x60004E84: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x60004E88: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E8C: lw          $a0, 0x5EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EA4);
    // 0x60004E90: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
    // 0x60004E94: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004E98: jal         0x6000061C
    // 0x60004E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_253;
    // 0x60004E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_253:
    // 0x60004EA0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004EA4: lw          $a0, 0x5EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EA4);
    // 0x60004EA8: jal         0x60000604
    // 0x60004EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_stage_604(rdram, ctx);
        goto after_254;
    // 0x60004EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_254:
    // 0x60004EB0: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
    // 0x60004EB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004EB8: bne         $t0, $at, L_60004ED8
    if (ctx->r8 != ctx->r1) {
        // 0x60004EBC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004ED8;
    }
    // 0x60004EBC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004EC0: lw          $a0, 0x5EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EA4);
    // 0x60004EC4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004EC8: jal         0x60000634
    // 0x60004ECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_634(rdram, ctx);
        goto after_255;
    // 0x60004ECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_255:
    // 0x60004ED0: b           L_60004F24
    // 0x60004ED4: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
        goto L_60004F24;
    // 0x60004ED4: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60004ED8:
    // 0x60004ED8: lw          $t2, 0x18C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18C);
    // 0x60004EDC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004EE0: bne         $t2, $at, L_60004F00
    if (ctx->r10 != ctx->r1) {
        // 0x60004EE4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004F00;
    }
    // 0x60004EE4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004EE8: lw          $a0, 0x5EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EA4);
    // 0x60004EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004EF0: jal         0x60000634
    // 0x60004EF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_256;
    // 0x60004EF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_256:
    // 0x60004EF8: b           L_60004F24
    // 0x60004EFC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
        goto L_60004F24;
    // 0x60004EFC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60004F00:
    // 0x60004F00: lw          $t1, 0x18C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18C);
    // 0x60004F04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004F08: bne         $t1, $at, L_60004F20
    if (ctx->r9 != ctx->r1) {
        // 0x60004F0C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004F20;
    }
    // 0x60004F0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F10: lw          $a0, 0x5EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EA4);
    // 0x60004F14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004F18: jal         0x60000634
    // 0x60004F1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_stage_634(rdram, ctx);
        goto after_257;
    // 0x60004F1C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_257:
L_60004F20:
    // 0x60004F20: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60004F24:
    // 0x60004F24: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x60004F28: jal         0x6000064C
    // 0x60004F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_64C(rdram, ctx);
        goto after_258;
    // 0x60004F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_258:
    // 0x60004F30: sw          $v0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r2;
    // 0x60004F34: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60004F38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004F3C: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x60004F40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004F44: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x60004F48: addiu       $t4, $zero, -0x80
    ctx->r12 = ADD32(0, -0X80);
    // 0x60004F4C: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x60004F50: sw          $v1, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r3;
    // 0x60004F54: sw          $t4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r12;
    // 0x60004F58: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x60004F5C: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x60004F60: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x60004F64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004F68: bne         $t8, $at, L_60004F88
    if (ctx->r24 != ctx->r1) {
        // 0x60004F6C: lw          $t9, 0x18C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18C);
            goto L_60004F88;
    }
    // 0x60004F6C: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x60004F70: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x60004F74: nop

    // 0x60004F78: lbu         $t3, 0x0($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X0);
    // 0x60004F7C: b           L_60004FF0
    // 0x60004F80: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
        goto L_60004FF0;
    // 0x60004F80: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x60004F84: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
L_60004F88:
    // 0x60004F88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004F8C: bne         $t9, $at, L_60004FAC
    if (ctx->r25 != ctx->r1) {
        // 0x60004F90: lw          $t0, 0x18C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X18C);
            goto L_60004FAC;
    }
    // 0x60004F90: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
    // 0x60004F94: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x60004F98: nop

    // 0x60004F9C: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x60004FA0: b           L_60004FF0
    // 0x60004FA4: sw          $t7, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r15;
        goto L_60004FF0;
    // 0x60004FA4: sw          $t7, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r15;
    // 0x60004FA8: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
L_60004FAC:
    // 0x60004FAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004FB0: bne         $t0, $at, L_60004FD0
    if (ctx->r8 != ctx->r1) {
        // 0x60004FB4: lw          $t4, 0x18C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X18C);
            goto L_60004FD0;
    }
    // 0x60004FB4: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
    // 0x60004FB8: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x60004FBC: nop

    // 0x60004FC0: lbu         $t1, 0x2($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X2);
    // 0x60004FC4: b           L_60004FF0
    // 0x60004FC8: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
        goto L_60004FF0;
    // 0x60004FC8: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x60004FCC: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
L_60004FD0:
    // 0x60004FD0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004FD4: bne         $t4, $at, L_60004FF4
    if (ctx->r12 != ctx->r1) {
        // 0x60004FD8: lw          $t3, 0xF8($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XF8);
            goto L_60004FF4;
    }
    // 0x60004FD8: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x60004FDC: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x60004FE0: nop

    // 0x60004FE4: lbu         $t5, 0x3($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0X3);
    // 0x60004FE8: nop

    // 0x60004FEC: sw          $t5, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r13;
L_60004FF0:
    // 0x60004FF0: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
L_60004FF4:
    // 0x60004FF4: nop

    // 0x60004FF8: beq         $t3, $zero, L_6000501C
    if (ctx->r11 == 0) {
        // 0x60004FFC: sll         $t9, $t3, 2
        ctx->r25 = S32(ctx->r11 << 2);
            goto L_6000501C;
    }
    // 0x60004FFC: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x60005000: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x60005004: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60005008: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000500C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60005010: lw          $a0, 0x5EB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EB8);
    // 0x60005014: jal         0x600005D4
    // 0x60005018: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_259;
    // 0x60005018: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_259:
L_6000501C:
    // 0x6000501C: jal         0x60001F58
    // 0x60005020: nop

    ovl_menu_stage_1F58(rdram, ctx);
        goto after_260;
    // 0x60005020: nop

    after_260:
    // 0x60005024: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005028: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x6000502C: jal         0x600005A4
    // 0x60005030: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_261;
    // 0x60005030: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_261:
    // 0x60005034: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x60005038: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000503C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x60005040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005044: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005048: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x6000504C: swc1        $f30, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f30.u32l;
    // 0x60005050: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x60005054: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x60005058: jal         0x6000058C
    // 0x6000505C: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    ovl_menu_stage_58C(rdram, ctx);
        goto after_262;
    // 0x6000505C: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    after_262:
    // 0x60005060: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005064: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x60005068: jal         0x60000640
    // 0x6000506C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_stage_640(rdram, ctx);
        goto after_263;
    // 0x6000506C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_263:
    // 0x60005070: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005074: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x60005078: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x6000507C: jal         0x6000061C
    // 0x60005080: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_stage_61C(rdram, ctx);
        goto after_264;
    // 0x60005080: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_264:
    // 0x60005084: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005088: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x6000508C: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x60005090: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x60005094: jal         0x60000574
    // 0x60005098: nop

    ovl_menu_stage_574(rdram, ctx);
        goto after_265;
    // 0x60005098: nop

    after_265:
    // 0x6000509C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600050A0: lw          $a0, 0x5E7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5E7C);
    // 0x600050A4: jal         0x600005A4
    // 0x600050A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_stage_5A4(rdram, ctx);
        goto after_266;
    // 0x600050A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_266:
    // 0x600050AC: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x600050B0: jal         0x60002134
    // 0x600050B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_2134(rdram, ctx);
        goto after_267;
    // 0x600050B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_267:
    // 0x600050B8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600050BC: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x600050C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600050C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600050C8: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x600050CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x600050D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x600050D4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x600050D8: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x600050DC: jal         0x600006B8
    // 0x600050E0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    ovl_menu_stage_6B8(rdram, ctx);
        goto after_268;
    // 0x600050E0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_268:
    // 0x600050E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600050E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600050EC: jal         0x60000640
    // 0x600050F0: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_stage_640(rdram, ctx);
        goto after_269;
    // 0x600050F0: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_269:
    // 0x600050F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600050F8: addiu       $a0, $a0, 0x5E70
    ctx->r4 = ADD32(ctx->r4, 0X5E70);
    // 0x600050FC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x60005100: jal         0x60001CE4
    // 0x60005104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_270;
    // 0x60005104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_270:
    // 0x60005108: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000510C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60005110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005114: jal         0x60000220
    // 0x60005118: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_220(rdram, ctx);
        goto after_271;
    // 0x60005118: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_271:
    // 0x6000511C: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
L_60005120:
    // 0x60005120: jal         0x60000AA8
    // 0x60005124: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_AA8(rdram, ctx);
        goto after_272;
    // 0x60005124: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_272:
    // 0x60005128: andi        $t0, $v0, 0xF030
    ctx->r8 = ctx->r2 & 0XF030;
    // 0x6000512C: bne         $t0, $zero, L_60005154
    if (ctx->r8 != 0) {
        // 0x60005130: nop
    
            goto L_60005154;
    }
    // 0x60005130: nop

    // 0x60005134: jal         0x6000085C
    // 0x60005138: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_273;
    // 0x60005138: nop

    after_273:
    // 0x6000513C: lw          $s1, 0x144($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X144);
    // 0x60005140: nop

    // 0x60005144: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60005148: slti        $at, $s1, 0x96
    ctx->r1 = SIGNED(ctx->r17) < 0X96 ? 1 : 0;
    // 0x6000514C: bne         $at, $zero, L_60005120
    if (ctx->r1 != 0) {
        // 0x60005150: sw          $s1, 0x144($sp)
        MEM_W(0X144, ctx->r29) = ctx->r17;
            goto L_60005120;
    }
    // 0x60005150: sw          $s1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r17;
L_60005154:
    // 0x60005154: jal         0x600006AC
    // 0x60005158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_274;
    // 0x60005158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_274:
    // 0x6000515C: jal         0x60000850
    // 0x60005160: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_stage_850(rdram, ctx);
        goto after_275;
    // 0x60005160: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_275:
    // 0x60005164: lw          $s7, 0x184($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X184);
    // 0x60005168: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x6000516C: lw          $t4, 0x188($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X188);
    // 0x60005170: sll         $t2, $s7, 2
    ctx->r10 = S32(ctx->r23 << 2);
    // 0x60005174: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x60005178: addu        $s6, $t8, $t2
    ctx->r22 = ADD32(ctx->r24, ctx->r10);
    // 0x6000517C: addiu       $s5, $s6, 0xA5
    ctx->r21 = ADD32(ctx->r22, 0XA5);
    // 0x60005180: or          $s7, $t2, $zero
    ctx->r23 = ctx->r10 | 0;
L_60005184:
    // 0x60005184: jal         0x60000B20
    // 0x60005188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_stage_B20(rdram, ctx);
        goto after_276;
    // 0x60005188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_276:
    // 0x6000518C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x60005190: jal         0x60000BB0
    // 0x60005194: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_277;
    // 0x60005194: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_277:
    // 0x60005198: beq         $v0, $zero, L_600051B8
    if (ctx->r2 == 0) {
        // 0x6000519C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600051B8;
    }
    // 0x6000519C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600051A0: addiu       $a0, $a0, 0x5E70
    ctx->r4 = ADD32(ctx->r4, 0X5E70);
    // 0x600051A4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x600051A8: jal         0x60001CE4
    // 0x600051AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_278;
    // 0x600051AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_278:
    // 0x600051B0: b           L_600051D0
    // 0x600051B4: andi        $t5, $fp, 0x8000
    ctx->r13 = ctx->r30 & 0X8000;
        goto L_600051D0;
    // 0x600051B4: andi        $t5, $fp, 0x8000
    ctx->r13 = ctx->r30 & 0X8000;
L_600051B8:
    // 0x600051B8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600051BC: addiu       $a0, $a0, 0x5E70
    ctx->r4 = ADD32(ctx->r4, 0X5E70);
    // 0x600051C0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x600051C4: jal         0x60001CE4
    // 0x600051C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_1CE4(rdram, ctx);
        goto after_279;
    // 0x600051C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_279:
    // 0x600051CC: andi        $t5, $fp, 0x8000
    ctx->r13 = ctx->r30 & 0X8000;
L_600051D0:
    // 0x600051D0: beq         $t5, $zero, L_60005308
    if (ctx->r13 == 0) {
        // 0x600051D4: andi        $t8, $fp, 0x4000
        ctx->r24 = ctx->r30 & 0X4000;
            goto L_60005308;
    }
    // 0x600051D4: andi        $t8, $fp, 0x4000
    ctx->r24 = ctx->r30 & 0X4000;
    // 0x600051D8: lw          $t3, 0x188($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X188);
    // 0x600051DC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x600051E0: addu        $s1, $s7, $t3
    ctx->r17 = ADD32(ctx->r23, ctx->r11);
    // 0x600051E4: jal         0x60000BB0
    // 0x600051E8: sw          $s1, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r17;
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_280;
    // 0x600051E8: sw          $s1, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r17;
    after_280:
    // 0x600051EC: beq         $v0, $zero, L_600052B0
    if (ctx->r2 == 0) {
        // 0x600051F0: lw          $t1, 0xF8($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XF8);
            goto L_600052B0;
    }
    // 0x600051F0: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x600051F4: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x600051F8: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    // 0x600051FC: beq         $t9, $zero, L_60005238
    if (ctx->r25 == 0) {
        // 0x60005200: sll         $t6, $t9, 2
        ctx->r14 = S32(ctx->r25 << 2);
            goto L_60005238;
    }
    // 0x60005200: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x60005204: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x60005208: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x6000520C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005210: lw          $s0, 0x18C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18C);
    // 0x60005214: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60005218: lw          $a0, 0x5EB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EB8);
    // 0x6000521C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x60005220: jal         0x600005D4
    // 0x60005224: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_281;
    // 0x60005224: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    after_281:
    // 0x60005228: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x6000522C: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x60005230: jal         0x6000204C
    // 0x60005234: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_menu_stage_204C(rdram, ctx);
        goto after_282;
    // 0x60005234: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_282:
L_60005238:
    // 0x60005238: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x6000523C: nop

    // 0x60005240: beq         $t7, $s2, L_60005298
    if (ctx->r15 == ctx->r18) {
        // 0x60005244: sll         $t0, $s1, 2
        ctx->r8 = S32(ctx->r17 << 2);
            goto L_60005298;
    }
    // 0x60005244: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x60005248: lw          $s0, 0x18C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18C);
    // 0x6000524C: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x60005250: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60005254: addiu       $t2, $t2, 0x5E70
    ctx->r10 = ADD32(ctx->r10, 0X5E70);
    // 0x60005258: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x6000525C: addu        $s3, $t0, $t2
    ctx->r19 = ADD32(ctx->r8, ctx->r10);
    // 0x60005260: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x60005264: sw          $s2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r18;
    // 0x60005268: addiu       $s4, $s2, -0x1
    ctx->r20 = ADD32(ctx->r18, -0X1);
    // 0x6000526C: jal         0x60000244
    // 0x60005270: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    ovl_menu_stage_244(rdram, ctx);
        goto after_283;
    // 0x60005270: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    after_283:
    // 0x60005274: lw          $a0, 0x5C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X5C);
    // 0x60005278: jal         0x600005D4
    // 0x6000527C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_284;
    // 0x6000527C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_284:
    // 0x60005280: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x60005284: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60005288: jal         0x60002008
    // 0x6000528C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_menu_stage_2008(rdram, ctx);
        goto after_285;
    // 0x6000528C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_285:
    // 0x60005290: b           L_60005438
    // 0x60005294: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
        goto L_60005438;
    // 0x60005294: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
L_60005298:
    // 0x60005298: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    // 0x6000529C: jal         0x60000244
    // 0x600052A0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_286;
    // 0x600052A0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_286:
    // 0x600052A4: b           L_60005438
    // 0x600052A8: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
        goto L_60005438;
    // 0x600052A8: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
    // 0x600052AC: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
L_600052B0:
    // 0x600052B0: nop

    // 0x600052B4: beq         $t1, $zero, L_60005434
    if (ctx->r9 == 0) {
        // 0x600052B8: sll         $t4, $t1, 2
        ctx->r12 = S32(ctx->r9 << 2);
            goto L_60005434;
    }
    // 0x600052B8: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x600052BC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x600052C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x600052C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600052C8: lw          $s0, 0x18C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18C);
    // 0x600052CC: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x600052D0: lw          $a0, 0x5EB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5EB8);
    // 0x600052D4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x600052D8: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    // 0x600052DC: jal         0x600005D4
    // 0x600052E0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    ovl_menu_stage_5D4(rdram, ctx);
        goto after_287;
    // 0x600052E0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    after_287:
    // 0x600052E4: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x600052E8: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    // 0x600052EC: jal         0x6000204C
    // 0x600052F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_menu_stage_204C(rdram, ctx);
        goto after_288;
    // 0x600052F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_288:
    // 0x600052F4: jal         0x60000244
    // 0x600052F8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_stage_244(rdram, ctx);
        goto after_289;
    // 0x600052F8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_289:
    // 0x600052FC: b           L_60005438
    // 0x60005300: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
        goto L_60005438;
    // 0x60005300: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
    // 0x60005304: andi        $t8, $fp, 0x4000
    ctx->r24 = ctx->r30 & 0X4000;
L_60005308:
    // 0x60005308: beq         $t8, $zero, L_60005320
    if (ctx->r24 == 0) {
        // 0x6000530C: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_60005320;
    }
    // 0x6000530C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60005310: jal         0x60000244
    // 0x60005314: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    ovl_menu_stage_244(rdram, ctx);
        goto after_290;
    // 0x60005314: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    after_290:
    // 0x60005318: b           L_60005640
    // 0x6000531C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60005640;
    // 0x6000531C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60005320:
    // 0x60005320: andi        $t5, $fp, 0x1000
    ctx->r13 = ctx->r30 & 0X1000;
    // 0x60005324: beq         $t5, $zero, L_60005424
    if (ctx->r13 == 0) {
        // 0x60005328: addiu       $a0, $zero, 0x24
        ctx->r4 = ADD32(0, 0X24);
            goto L_60005424;
    }
    // 0x60005328: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x6000532C: jal         0x60000244
    // 0x60005330: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    ovl_menu_stage_244(rdram, ctx);
        goto after_291;
    // 0x60005330: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    after_291:
    // 0x60005334: lw          $t3, 0x18C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18C);
    // 0x60005338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000533C: bne         $t3, $at, L_60005374
    if (ctx->r11 != ctx->r1) {
        // 0x60005340: lw          $t4, 0x18C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X18C);
            goto L_60005374;
    }
    // 0x60005340: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
    // 0x60005344: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x60005348: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x6000534C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x60005350: nop

    // 0x60005354: beq         $t9, $t7, L_60005360
    if (ctx->r25 == ctx->r15) {
        // 0x60005358: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_60005360;
    }
    // 0x60005358: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x6000535C: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
L_60005360:
    // 0x60005360: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x60005364: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x60005368: b           L_6000563C
    // 0x6000536C: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
        goto L_6000563C;
    // 0x6000536C: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    // 0x60005370: lw          $t4, 0x18C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18C);
L_60005374:
    // 0x60005374: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60005378: bne         $t4, $at, L_600053B0
    if (ctx->r12 != ctx->r1) {
        // 0x6000537C: lw          $t0, 0x18C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X18C);
            goto L_600053B0;
    }
    // 0x6000537C: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
    // 0x60005380: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x60005384: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x60005388: lbu         $t3, 0x1($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X1);
    // 0x6000538C: nop

    // 0x60005390: beq         $t8, $t3, L_6000539C
    if (ctx->r24 == ctx->r11) {
        // 0x60005394: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_6000539C;
    }
    // 0x60005394: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60005398: sw          $t6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r14;
L_6000539C:
    // 0x6000539C: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x600053A0: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x600053A4: b           L_6000563C
    // 0x600053A8: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
        goto L_6000563C;
    // 0x600053A8: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
    // 0x600053AC: lw          $t0, 0x18C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18C);
L_600053B0:
    // 0x600053B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600053B4: bne         $t0, $at, L_600053EC
    if (ctx->r8 != ctx->r1) {
        // 0x600053B8: lw          $t6, 0x18C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18C);
            goto L_600053EC;
    }
    // 0x600053B8: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
    // 0x600053BC: lw          $t1, 0x168($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X168);
    // 0x600053C0: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x600053C4: lbu         $t4, 0x2($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X2);
    // 0x600053C8: nop

    // 0x600053CC: beq         $t2, $t4, L_600053D8
    if (ctx->r10 == ctx->r12) {
        // 0x600053D0: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_600053D8;
    }
    // 0x600053D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x600053D4: sw          $t5, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r13;
L_600053D8:
    // 0x600053D8: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x600053DC: lw          $t3, 0x168($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X168);
    // 0x600053E0: b           L_6000563C
    // 0x600053E4: sb          $t8, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r24;
        goto L_6000563C;
    // 0x600053E4: sb          $t8, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r24;
    // 0x600053E8: lw          $t6, 0x18C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18C);
L_600053EC:
    // 0x600053EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x600053F0: bne         $t6, $at, L_60005640
    if (ctx->r14 != ctx->r1) {
        // 0x600053F4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60005640;
    }
    // 0x600053F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600053F8: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x600053FC: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x60005400: lbu         $t0, 0x3($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X3);
    // 0x60005404: nop

    // 0x60005408: beq         $t9, $t0, L_60005414
    if (ctx->r25 == ctx->r8) {
        // 0x6000540C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_60005414;
    }
    // 0x6000540C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60005410: sw          $t1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r9;
L_60005414:
    // 0x60005414: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x60005418: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x6000541C: b           L_6000563C
    // 0x60005420: sb          $t2, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r10;
        goto L_6000563C;
    // 0x60005420: sb          $t2, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r10;
L_60005424:
    // 0x60005424: lw          $t5, 0x188($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X188);
    // 0x60005428: nop

    // 0x6000542C: addu        $s1, $s7, $t5
    ctx->r17 = ADD32(ctx->r23, ctx->r13);
    // 0x60005430: sw          $s1, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r17;
L_60005434:
    // 0x60005434: andi        $t8, $fp, 0x400
    ctx->r24 = ctx->r30 & 0X400;
L_60005438:
    // 0x60005438: beq         $t8, $zero, L_6000546C
    if (ctx->r24 == 0) {
        // 0x6000543C: andi        $t7, $fp, 0x800
        ctx->r15 = ctx->r30 & 0X800;
            goto L_6000546C;
    }
    // 0x6000543C: andi        $t7, $fp, 0x800
    ctx->r15 = ctx->r30 & 0X800;
    // 0x60005440: lw          $t3, 0x184($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X184);
    // 0x60005444: nop

    // 0x60005448: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x6000544C: beq         $at, $zero, L_60005468
    if (ctx->r1 == 0) {
        // 0x60005450: addiu       $t6, $t3, 0x1
        ctx->r14 = ADD32(ctx->r11, 0X1);
            goto L_60005468;
    }
    // 0x60005450: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x60005454: sw          $t6, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r14;
    // 0x60005458: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x6000545C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x60005460: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x60005464: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_60005468:
    // 0x60005468: andi        $t7, $fp, 0x800
    ctx->r15 = ctx->r30 & 0X800;
L_6000546C:
    // 0x6000546C: beq         $t7, $zero, L_6000549C
    if (ctx->r15 == 0) {
        // 0x60005470: andi        $t1, $fp, 0x100
        ctx->r9 = ctx->r30 & 0X100;
            goto L_6000549C;
    }
    // 0x60005470: andi        $t1, $fp, 0x100
    ctx->r9 = ctx->r30 & 0X100;
    // 0x60005474: lw          $t9, 0x184($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X184);
    // 0x60005478: nop

    // 0x6000547C: blez        $t9, L_60005498
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60005480: addiu       $t0, $t9, -0x1
        ctx->r8 = ADD32(ctx->r25, -0X1);
            goto L_60005498;
    }
    // 0x60005480: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x60005484: sw          $t0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r8;
    // 0x60005488: addiu       $s7, $s7, -0x4
    ctx->r23 = ADD32(ctx->r23, -0X4);
    // 0x6000548C: addiu       $s6, $s6, -0x4
    ctx->r22 = ADD32(ctx->r22, -0X4);
    // 0x60005490: addiu       $s5, $s5, -0x4
    ctx->r21 = ADD32(ctx->r21, -0X4);
    // 0x60005494: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
L_60005498:
    // 0x60005498: andi        $t1, $fp, 0x100
    ctx->r9 = ctx->r30 & 0X100;
L_6000549C:
    // 0x6000549C: beq         $t1, $zero, L_600054CC
    if (ctx->r9 == 0) {
        // 0x600054A0: andi        $t5, $fp, 0x200
        ctx->r13 = ctx->r30 & 0X200;
            goto L_600054CC;
    }
    // 0x600054A0: andi        $t5, $fp, 0x200
    ctx->r13 = ctx->r30 & 0X200;
    // 0x600054A4: lw          $t2, 0x188($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X188);
    // 0x600054A8: nop

    // 0x600054AC: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x600054B0: beq         $at, $zero, L_600054C8
    if (ctx->r1 == 0) {
        // 0x600054B4: addiu       $t4, $t2, 0x1
        ctx->r12 = ADD32(ctx->r10, 0X1);
            goto L_600054C8;
    }
    // 0x600054B4: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x600054B8: sw          $t4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r12;
    // 0x600054BC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x600054C0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x600054C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600054C8:
    // 0x600054C8: andi        $t5, $fp, 0x200
    ctx->r13 = ctx->r30 & 0X200;
L_600054CC:
    // 0x600054CC: beq         $t5, $zero, L_600054F8
    if (ctx->r13 == 0) {
        // 0x600054D0: lw          $t6, 0x190($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X190);
            goto L_600054F8;
    }
    // 0x600054D0: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x600054D4: lw          $t8, 0x188($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X188);
    // 0x600054D8: nop

    // 0x600054DC: blez        $t8, L_600054F4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x600054E0: addiu       $t3, $t8, -0x1
        ctx->r11 = ADD32(ctx->r24, -0X1);
            goto L_600054F4;
    }
    // 0x600054E0: addiu       $t3, $t8, -0x1
    ctx->r11 = ADD32(ctx->r24, -0X1);
    // 0x600054E4: sw          $t3, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r11;
    // 0x600054E8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x600054EC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x600054F0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_600054F4:
    // 0x600054F4: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
L_600054F8:
    // 0x600054F8: nop

    // 0x600054FC: beq         $t6, $s1, L_600055AC
    if (ctx->r14 == ctx->r17) {
        // 0x60005500: lw          $t6, 0x140($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X140);
            goto L_600055AC;
    }
    // 0x60005500: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x60005504: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x60005508: lw          $t1, 0x184($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X184);
    // 0x6000550C: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x60005510: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x60005514: addiu       $t4, $t2, 0x44
    ctx->r12 = ADD32(ctx->r10, 0X44);
    // 0x60005518: addiu       $t0, $t9, 0xA0
    ctx->r8 = ADD32(ctx->r25, 0XA0);
    // 0x6000551C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x60005520: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x60005524: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005528: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x6000552C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60005530: jal         0x60000BB0
    // 0x60005534: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_292;
    // 0x60005534: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    after_292:
    // 0x60005538: beq         $v0, $zero, L_6000556C
    if (ctx->r2 == 0) {
        // 0x6000553C: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_6000556C;
    }
    // 0x6000553C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60005540: addiu       $v0, $v0, 0x5E70
    ctx->r2 = ADD32(ctx->r2, 0X5E70);
    // 0x60005544: addiu       $t5, $s6, -0x10
    ctx->r13 = ADD32(ctx->r22, -0X10);
    // 0x60005548: sw          $t5, 0x1A4($v0)
    MEM_W(0X1A4, ctx->r2) = ctx->r13;
    // 0x6000554C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60005550: lw          $s0, 0x1B0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1B0);
    // 0x60005554: lw          $a2, 0x6930($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6930);
    // 0x60005558: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000555C: addiu       $a0, $a0, 0x6014
    ctx->r4 = ADD32(ctx->r4, 0X6014);
    // 0x60005560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60005564: jal         0x60001AEC
    // 0x60005568: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_stage_1AEC(rdram, ctx);
        goto after_293;
    // 0x60005568: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_293:
L_6000556C:
    // 0x6000556C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x60005570: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
    // 0x60005574: nop

    // 0x60005578: addu        $a0, $t8, $t3
    ctx->r4 = ADD32(ctx->r24, ctx->r11);
    // 0x6000557C: jal         0x60000BB0
    // 0x60005580: addiu       $a0, $a0, 0xA5
    ctx->r4 = ADD32(ctx->r4, 0XA5);
    ovl_menu_stage_BB0(rdram, ctx);
        goto after_294;
    // 0x60005580: addiu       $a0, $a0, 0xA5
    ctx->r4 = ADD32(ctx->r4, 0XA5);
    after_294:
    // 0x60005584: beq         $v0, $zero, L_60005598
    if (ctx->r2 == 0) {
        // 0x60005588: lw          $v0, 0x19C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X19C);
            goto L_60005598;
    }
    // 0x60005588: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
    // 0x6000558C: jal         0x600006AC
    // 0x60005590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_stage_6AC(rdram, ctx);
        goto after_295;
    // 0x60005590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_295:
    // 0x60005594: lw          $v0, 0x19C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X19C);
L_60005598:
    // 0x60005598: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x6000559C: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x600055A0: jal         0x60000244
    // 0x600055A4: swc1        $f22, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f22.u32l;
    ovl_menu_stage_244(rdram, ctx);
        goto after_296;
    // 0x600055A4: swc1        $f22, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f22.u32l;
    after_296:
    // 0x600055A8: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
L_600055AC:
    // 0x600055AC: nop

    // 0x600055B0: beq         $t6, $zero, L_600055F8
    if (ctx->r14 == 0) {
        // 0x600055B4: lw          $t2, 0x19C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X19C);
            goto L_600055F8;
    }
    // 0x600055B4: lw          $t2, 0x19C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X19C);
    // 0x600055B8: lw          $t7, 0x19C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X19C);
    // 0x600055BC: nop

    // 0x600055C0: lw          $v0, 0x3C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X3C);
    // 0x600055C4: nop

    // 0x600055C8: srl         $t9, $v0, 8
    ctx->r25 = S32(U32(ctx->r2) >> 8);
    // 0x600055CC: bne         $t9, $zero, L_600055E0
    if (ctx->r25 != 0) {
        // 0x600055D0: lui         $at, 0xEEEE
        ctx->r1 = S32(0XEEEE << 16);
            goto L_600055E0;
    }
    // 0x600055D0: lui         $at, 0xEEEE
    ctx->r1 = S32(0XEEEE << 16);
    // 0x600055D4: b           L_6000562C
    // 0x600055D8: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
        goto L_6000562C;
    // 0x600055D8: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x600055DC: lui         $at, 0xEEEE
    ctx->r1 = S32(0XEEEE << 16);
L_600055E0:
    // 0x600055E0: lw          $t1, 0x19C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X19C);
    // 0x600055E4: ori         $at, $at, 0xEF00
    ctx->r1 = ctx->r1 | 0XEF00;
    // 0x600055E8: addu        $t0, $v0, $at
    ctx->r8 = ADD32(ctx->r2, ctx->r1);
    // 0x600055EC: b           L_6000562C
    // 0x600055F0: sw          $t0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r8;
        goto L_6000562C;
    // 0x600055F0: sw          $t0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r8;
    // 0x600055F4: lw          $t2, 0x19C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X19C);
L_600055F8:
    // 0x600055F8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x600055FC: lw          $v0, 0x3C($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X3C);
    // 0x60005600: nop

    // 0x60005604: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x60005608: bne         $t4, $at, L_60005618
    if (ctx->r12 != ctx->r1) {
        // 0x6000560C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_60005618;
    }
    // 0x6000560C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x60005610: b           L_6000562C
    // 0x60005614: sw          $t5, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r13;
        goto L_6000562C;
    // 0x60005614: sw          $t5, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r13;
L_60005618:
    // 0x60005618: lui         $at, 0x1111
    ctx->r1 = S32(0X1111 << 16);
    // 0x6000561C: lw          $t3, 0x19C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X19C);
    // 0x60005620: ori         $at, $at, 0x1100
    ctx->r1 = ctx->r1 | 0X1100;
    // 0x60005624: addu        $t8, $v0, $at
    ctx->r24 = ADD32(ctx->r2, ctx->r1);
    // 0x60005628: sw          $t8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r24;
L_6000562C:
    // 0x6000562C: jal         0x6000085C
    // 0x60005630: nop

    ovl_menu_stage_85C(rdram, ctx);
        goto after_297;
    // 0x60005630: nop

    after_297:
    // 0x60005634: b           L_60005184
    // 0x60005638: nop

        goto L_60005184;
    // 0x60005638: nop

L_6000563C:
    // 0x6000563C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60005640:
    // 0x60005640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60005644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005648: jal         0x60000238
    // 0x6000564C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_stage_238(rdram, ctx);
        goto after_298;
    // 0x6000564C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_298:
    // 0x60005650: jal         0x60000208
    // 0x60005654: nop

    ovl_menu_stage_208(rdram, ctx);
        goto after_299;
    // 0x60005654: nop

    after_299:
    // 0x60005658: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x6000565C: jal         0x60000550
    // 0x60005660: nop

    ovl_menu_stage_550(rdram, ctx);
        goto after_300;
    // 0x60005660: nop

    after_300:
    // 0x60005664: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005668: addiu       $a0, $a0, 0x5E70
    ctx->r4 = ADD32(ctx->r4, 0X5E70);
    // 0x6000566C: jal         0x60001C44
    // 0x60005670: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_menu_stage_1C44(rdram, ctx);
        goto after_301;
    // 0x60005670: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_301:
    // 0x60005674: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005678: lw          $a0, 0x693C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X693C);
    // 0x6000567C: jal         0x60000DA8
    // 0x60005680: nop

    ovl_menu_stage_DA8(rdram, ctx);
        goto after_302;
    // 0x60005680: nop

    after_302:
    // 0x60005684: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    // 0x60005688: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000568C: jal         0x60000F34
    // 0x60005690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_stage_F34(rdram, ctx);
        goto after_303;
    // 0x60005690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_303:
    // 0x60005694: jal         0x60000850
    // 0x60005698: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_stage_850(rdram, ctx);
        goto after_304;
    // 0x60005698: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_304:
    // 0x6000569C: jal         0x60000F40
    // 0x600056A0: nop

    ovl_menu_stage_F40(rdram, ctx);
        goto after_305;
    // 0x600056A0: nop

    after_305:
    // 0x600056A4: jal         0x60000130
    // 0x600056A8: nop

    ovl_menu_stage_130(rdram, ctx);
        goto after_306;
    // 0x600056A8: nop

    after_306:
    // 0x600056AC: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x600056B0: nop

    // 0x600056B4: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x600056B8: b           L_6000332C
    // 0x600056BC: nop

        goto L_6000332C;
    // 0x600056BC: nop

L_600056C0:
    // 0x600056C0: jal         0x60000124
    // 0x600056C4: addiu       $a0, $zero, 0x7ED
    ctx->r4 = ADD32(0, 0X7ED);
    ovl_menu_stage_124(rdram, ctx);
        goto after_307;
    // 0x600056C4: addiu       $a0, $zero, 0x7ED
    ctx->r4 = ADD32(0, 0X7ED);
    after_307:
    // 0x600056C8: jal         0x60000F40
    // 0x600056CC: nop

    ovl_menu_stage_F40(rdram, ctx);
        goto after_308;
    // 0x600056CC: nop

    after_308:
    // 0x600056D0: jal         0x60000130
    // 0x600056D4: nop

    ovl_menu_stage_130(rdram, ctx);
        goto after_309;
    // 0x600056D4: nop

    after_309:
    // 0x600056D8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x600056DC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x600056E0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x600056E4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600056E8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600056EC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600056F0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600056F4: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600056F8: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600056FC: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60005700: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60005704: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60005708: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x6000570C: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60005710: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60005714: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x60005718: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x6000571C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x60005720: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x60005724: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x60005728: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x6000572C: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x60005730: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x60005734: jr          $ra
    // 0x60005738: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    return;
    // 0x60005738: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void ovl_menu_title_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x2E5C
    ctx->r2 = ADD32(ctx->r2, 0X2E5C);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x2E5C
    ctx->r2 = ADD32(ctx->r2, 0X2E5C);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_title_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_menu_title_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_menu_title_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_menu_title_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
