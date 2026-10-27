#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_title_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_menu_title_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60000F54: sw          $a2, 0x49C4($at)
    MEM_W(0X49C4, ctx->r1) = ctx->r6;
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
RECOMP_FUNC void ovl_menu_title_110C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000110C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001114: jal         0x6000085C
    // 0x60001118: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_0;
    // 0x60001118: nop

    after_0:
    // 0x6000111C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x60001120: jal         0x60000E8C
    // 0x60001124: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    ovl_menu_title_E8C(rdram, ctx);
        goto after_1;
    // 0x60001124: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x60001128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x6000112C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001130: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001134: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60001138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000113C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001140: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001144: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001148: lw          $a0, 0x49C4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X49C4);
    // 0x6000114C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x60001150: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x60001154: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x60001158: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x6000115C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60001160: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60001164: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x60001168: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x6000116C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x60001170: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x60001174: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x60001178: jal         0x60000DB4
    // 0x6000117C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    ovl_menu_title_DB4(rdram, ctx);
        goto after_2;
    // 0x6000117C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x60001180: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001184: addiu       $v1, $v1, 0x49C8
    ctx->r3 = ADD32(ctx->r3, 0X49C8);
    // 0x60001188: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x6000118C: jal         0x60000DA8
    // 0x60001190: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_title_DA8(rdram, ctx);
        goto after_3;
    // 0x60001190: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60001194: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x60001198: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x6000119C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x600011A0: jal         0x60000DB4
    // 0x600011A4: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    ovl_menu_title_DB4(rdram, ctx);
        goto after_4;
    // 0x600011A4: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x600011A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600011B0: sw          $v0, 0x49C8($at)
    MEM_W(0X49C8, ctx->r1) = ctx->r2;
    // 0x600011B4: jr          $ra
    // 0x600011B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600011B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_title_11BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011BC: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x600011C0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x600011C4: beq         $v0, $t6, L_600011DC
    if (ctx->r2 == ctx->r14) {
        // 0x600011C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600011DC;
    }
    // 0x600011C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_600011CC:
    // 0x600011CC: lhu         $t7, 0x2($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2);
    // 0x600011D0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x600011D4: bne         $v0, $t7, L_600011CC
    if (ctx->r2 != ctx->r15) {
        // 0x600011D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_600011CC;
    }
    // 0x600011D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_600011DC:
    // 0x600011DC: jr          $ra
    // 0x600011E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x600011E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_menu_title_11E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011E4: blez        $a2, L_60001248
    if (SIGNED(ctx->r6) <= 0) {
        // 0x600011E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001248;
    }
    // 0x600011E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600011EC: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x600011F0: beq         $a3, $zero, L_60001218
    if (ctx->r7 == 0) {
        // 0x600011F4: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_60001218;
    }
    // 0x600011F4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_600011F8:
    // 0x600011F8: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x600011FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001200: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001204: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x60001208: bne         $v1, $v0, L_600011F8
    if (ctx->r3 != ctx->r2) {
        // 0x6000120C: sb          $t6, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r14;
            goto L_600011F8;
    }
    // 0x6000120C: sb          $t6, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r14;
    // 0x60001210: beq         $v0, $a2, L_60001248
    if (ctx->r2 == ctx->r6) {
        // 0x60001214: nop
    
            goto L_60001248;
    }
    // 0x60001214: nop

L_60001218:
    // 0x60001218: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x6000121C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001220: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x60001224: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x60001228: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x6000122C: sb          $t8, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = ctx->r24;
    // 0x60001230: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x60001234: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x60001238: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x6000123C: lbu         $t0, -0x1($a1)
    ctx->r8 = MEM_BU(ctx->r5, -0X1);
    // 0x60001240: bne         $v0, $a2, L_60001218
    if (ctx->r2 != ctx->r6) {
        // 0x60001244: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_60001218;
    }
    // 0x60001244: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
L_60001248:
    // 0x60001248: jr          $ra
    // 0x6000124C: nop

    return;
    // 0x6000124C: nop

;}
RECOMP_FUNC void ovl_menu_title_1250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001250: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x60001254: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001258: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x6000125C: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60001260: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001264: addiu       $t9, $t9, 0x4810
    ctx->r25 = ADD32(ctx->r25, 0X4810);
    // 0x60001268: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x6000126C: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x60001270: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x60001274: andi        $t2, $a0, 0xF0
    ctx->r10 = ctx->r4 & 0XF0;
    // 0x60001278: sra         $t3, $t2, 4
    ctx->r11 = S32(SIGNED(ctx->r10) >> 4);
    // 0x6000127C: multu       $t1, $t3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001280: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001284: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x60001288: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x6000128C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001294: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x60001298: addu        $t0, $a2, $t8
    ctx->r8 = ADD32(ctx->r6, ctx->r24);
    // 0x6000129C: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x600012A0: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x600012A4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600012A8: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x600012AC: mflo        $t4
    ctx->r12 = lo;
    // 0x600012B0: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x600012B4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x600012B8: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x600012BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600012C0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x600012C4: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x600012C8: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
L_600012CC:
    // 0x600012CC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x600012D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600012D4: multu       $t2, $s0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600012D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600012DC: mflo        $t1
    ctx->r9 = lo;
    // 0x600012E0: addu        $a1, $t1, $s3
    ctx->r5 = ADD32(ctx->r9, ctx->r19);
    // 0x600012E4: jal         0x600011E4
    // 0x600012E8: nop

    ovl_menu_title_11E4(rdram, ctx);
        goto after_0;
    // 0x600012E8: nop

    after_0:
    // 0x600012EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600012F0: bne         $s0, $s4, L_600012CC
    if (ctx->r16 != ctx->r20) {
        // 0x600012F4: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_600012CC;
    }
    // 0x600012F4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x600012F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600012FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001300: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001304: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001308: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x6000130C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60001310: jr          $ra
    // 0x60001314: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001314: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_title_1318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001318: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x6000131C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x60001320: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x60001324: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x60001328: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x6000132C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x60001330: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x60001334: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001338: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x6000133C: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x60001340: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001344:
    // 0x60001344: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x60001348: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_6000134C:
    // 0x6000134C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x60001350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001354: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x60001358: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x6000135C: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x60001360: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x60001364: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x60001368: beq         $t1, $t9, L_60001380
    if (ctx->r9 == ctx->r25) {
        // 0x6000136C: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_60001380;
    }
    // 0x6000136C: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001370: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x60001374: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x60001378: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x6000137C: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_60001380:
    // 0x60001380: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x60001384: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x60001388: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x6000138C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x60001390: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x60001394: beq         $t1, $t9, L_600013B0
    if (ctx->r9 == ctx->r25) {
        // 0x60001398: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_600013B0;
    }
    // 0x60001398: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x6000139C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x600013A0: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x600013A4: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x600013A8: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x600013AC: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_600013B0:
    // 0x600013B0: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x600013B4: nop

    // 0x600013B8: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x600013BC: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x600013C0: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x600013C4: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x600013C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600013CC: beq         $t1, $t7, L_600013E4
    if (ctx->r9 == ctx->r15) {
        // 0x600013D0: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_600013E4;
    }
    // 0x600013D0: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x600013D4: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x600013D8: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x600013DC: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x600013E0: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_600013E4:
    // 0x600013E4: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x600013E8: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x600013EC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x600013F0: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x600013F4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x600013F8: beq         $t1, $t7, L_60001414
    if (ctx->r9 == ctx->r15) {
        // 0x600013FC: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_60001414;
    }
    // 0x600013FC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001400: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001404: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x60001408: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x6000140C: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x60001410: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_60001414:
    // 0x60001414: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001418: bne         $v1, $t4, L_6000134C
    if (ctx->r3 != ctx->r12) {
        // 0x6000141C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_6000134C;
    }
    // 0x6000141C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x60001420: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x60001424: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x60001428: bne         $at, $zero, L_60001344
    if (ctx->r1 != 0) {
        // 0x6000142C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001344;
    }
    // 0x6000142C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001430: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x60001434: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001438: bne         $t9, $zero, L_60001460
    if (ctx->r25 != 0) {
        // 0x6000143C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_60001460;
    }
    // 0x6000143C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x60001440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001444: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001448:
    // 0x60001448: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x6000144C: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x60001450: bne         $t7, $zero, L_60001460
    if (ctx->r15 != 0) {
        // 0x60001454: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_60001460;
    }
    // 0x60001454: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001458: bne         $a0, $a2, L_60001448
    if (ctx->r4 != ctx->r6) {
        // 0x6000145C: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_60001448;
    }
    // 0x6000145C: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001460:
    // 0x60001460: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x60001464: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001468: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x6000146C: bne         $t6, $zero, L_60001490
    if (ctx->r14 != 0) {
        // 0x60001470: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_60001490;
    }
    // 0x60001470: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x60001474: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_60001478:
    // 0x60001478: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x6000147C: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x60001480: bne         $t8, $zero, L_60001490
    if (ctx->r24 != 0) {
        // 0x60001484: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_60001490;
    }
    // 0x60001484: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x60001488: bne         $t0, $a2, L_60001478
    if (ctx->r8 != ctx->r6) {
        // 0x6000148C: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_60001478;
    }
    // 0x6000148C: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_60001490:
    // 0x60001490: bne         $v0, $zero, L_600014A8
    if (ctx->r2 != 0) {
        // 0x60001494: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_600014A8;
    }
    // 0x60001494: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x60001498: bne         $v1, $zero, L_600014AC
    if (ctx->r3 != 0) {
        // 0x6000149C: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_600014AC;
    }
    // 0x6000149C: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x600014A0: b           L_60001628
    // 0x600014A4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_60001628;
    // 0x600014A4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_600014A8:
    // 0x600014A8: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_600014AC:
    // 0x600014AC: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x600014B0: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x600014B4: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x600014B8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x600014BC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_600014C0:
    // 0x600014C0: beq         $t2, $zero, L_60001530
    if (ctx->r10 == 0) {
        // 0x600014C4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001530;
    }
    // 0x600014C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x600014C8: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x600014CC: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_600014D0:
    // 0x600014D0: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x600014D4: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600014D8: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x600014DC: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x600014E0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x600014E4: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x600014E8: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x600014EC: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x600014F0: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x600014F4: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x600014F8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x600014FC: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001500: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x60001504: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001508: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x6000150C: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x60001510: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x60001514: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x60001518: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x6000151C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001520: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001524: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x60001528: bne         $v1, $a2, L_600014D0
    if (ctx->r3 != ctx->r6) {
        // 0x6000152C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_600014D0;
    }
    // 0x6000152C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60001530:
    // 0x60001530: beq         $a1, $zero, L_6000161C
    if (ctx->r5 == 0) {
        // 0x60001534: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_6000161C;
    }
    // 0x60001534: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x60001538: blez        $s0, L_600015BC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x6000153C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600015BC;
    }
    // 0x6000153C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001540: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x60001544: beq         $s2, $zero, L_6000157C
    if (ctx->r18 == 0) {
        // 0x60001548: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_6000157C;
    }
    // 0x60001548: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x6000154C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x60001550: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x60001554: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_60001558:
    // 0x60001558: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x6000155C: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x60001560: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x60001564: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001568: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x6000156C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001570: bne         $s1, $v1, L_60001558
    if (ctx->r17 != ctx->r3) {
        // 0x60001574: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_60001558;
    }
    // 0x60001574: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x60001578: beq         $v1, $s0, L_600015BC
    if (ctx->r3 == ctx->r16) {
        // 0x6000157C: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_600015BC;
    }
L_6000157C:
    // 0x6000157C: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x60001580: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_60001584:
    // 0x60001584: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x60001588: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x6000158C: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x60001590: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001594: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x60001598: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x6000159C: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x600015A0: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x600015A4: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x600015A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600015AC: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x600015B0: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x600015B4: bne         $v1, $s0, L_60001584
    if (ctx->r3 != ctx->r16) {
        // 0x600015B8: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_60001584;
    }
    // 0x600015B8: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_600015BC:
    // 0x600015BC: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x600015C0: beq         $at, $zero, L_6000161C
    if (ctx->r1 == 0) {
        // 0x600015C4: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_6000161C;
    }
    // 0x600015C4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x600015C8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x600015CC: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x600015D0: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x600015D4: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x600015D8: beq         $t8, $zero, L_600015FC
    if (ctx->r24 == 0) {
        // 0x600015DC: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_600015FC;
    }
    // 0x600015DC: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x600015E0: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x600015E4: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_600015E8:
    // 0x600015E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600015EC: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x600015F0: bne         $t5, $v1, L_600015E8
    if (ctx->r13 != ctx->r3) {
        // 0x600015F4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_600015E8;
    }
    // 0x600015F4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x600015F8: beq         $v1, $a2, L_6000161C
    if (ctx->r3 == ctx->r6) {
        // 0x600015FC: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_6000161C;
    }
L_600015FC:
    // 0x600015FC: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001600:
    // 0x60001600: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001604: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x60001608: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x6000160C: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x60001610: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x60001614: bne         $v1, $a2, L_60001600
    if (ctx->r3 != ctx->r6) {
        // 0x60001618: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001600;
    }
    // 0x60001618: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_6000161C:
    // 0x6000161C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x60001620: bne         $t1, $t3, L_600014C0
    if (ctx->r9 != ctx->r11) {
        // 0x60001624: nop
    
            goto L_600014C0;
    }
    // 0x60001624: nop

L_60001628:
    // 0x60001628: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x6000162C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x60001630: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x60001634: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x60001638: jr          $ra
    // 0x6000163C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x6000163C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_title_1640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001640: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x60001644: beq         $t6, $zero, L_60001680
    if (ctx->r14 == 0) {
        // 0x60001648: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_60001680;
    }
    // 0x60001648: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x6000164C: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x60001650: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001654: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x60001658: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x6000165C: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x60001660: mflo        $t0
    ctx->r8 = lo;
    // 0x60001664: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x60001668: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x6000166C: nop

    // 0x60001670: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x60001674: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x60001678: jr          $ra
    // 0x6000167C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x6000167C: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_60001680:
    // 0x60001680: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001684: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x60001688: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x6000168C: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x60001690: nop

    // 0x60001694: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x60001698: mflo        $t9
    ctx->r25 = lo;
    // 0x6000169C: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x600016A0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600016A4: nop

    // 0x600016A8: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x600016AC: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x600016B0: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x600016B4: jr          $ra
    // 0x600016B8: nop

    return;
    // 0x600016B8: nop

;}
RECOMP_FUNC void ovl_menu_title_16BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600016C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600016C4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600016C8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x600016CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600016D0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x600016D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x600016D8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x600016DC: addiu       $s1, $s1, 0x49D0
    ctx->r17 = ADD32(ctx->r17, 0X49D0);
    // 0x600016E0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x600016E4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x600016E8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x600016EC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x600016F0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x600016F4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x600016F8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x600016FC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001700: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001704: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x60001708: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x6000170C: jal         0x60001250
    // 0x60001710: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_title_1250(rdram, ctx);
        goto after_0;
    // 0x60001710: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x60001714: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x60001718: jal         0x60001318
    // 0x6000171C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_1318(rdram, ctx);
        goto after_1;
    // 0x6000171C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x60001720: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60001724: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60001728: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x6000172C: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_60001730:
    // 0x60001730: blez        $s5, L_600017B4
    if (SIGNED(ctx->r21) <= 0) {
        // 0x60001734: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_600017B4;
    }
    // 0x60001734: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001738: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x6000173C: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001740: addiu       $t7, $t7, 0x49D0
    ctx->r15 = ADD32(ctx->r15, 0X49D0);
    // 0x60001744: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x60001748: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x6000174C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x60001750: addu        $s3, $t8, $s7
    ctx->r19 = ADD32(ctx->r24, ctx->r23);
L_60001754:
    // 0x60001754: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x60001758: beq         $t9, $zero, L_6000177C
    if (ctx->r25 == 0) {
        // 0x6000175C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_6000177C;
    }
    // 0x6000175C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60001760: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001764: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x60001768: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x6000176C: nop

    // 0x60001770: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x60001774: b           L_60001794
    // 0x60001778: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_60001794;
    // 0x60001778: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_6000177C:
    // 0x6000177C: sra         $t3, $s0, 1
    ctx->r11 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001780: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x60001784: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x60001788: nop

    // 0x6000178C: sra         $t5, $v0, 4
    ctx->r13 = S32(SIGNED(ctx->r2) >> 4);
    // 0x60001790: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_60001794:
    // 0x60001794: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001798: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x6000179C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x600017A0: jal         0x60001640
    // 0x600017A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_title_1640(rdram, ctx);
        goto after_2;
    // 0x600017A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x600017A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600017AC: bne         $s0, $s5, L_60001754
    if (ctx->r16 != ctx->r21) {
        // 0x600017B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_60001754;
    }
    // 0x600017B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600017B4:
    // 0x600017B4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600017B8: bne         $s7, $fp, L_60001730
    if (ctx->r23 != ctx->r30) {
        // 0x600017BC: nop
    
            goto L_60001730;
    }
    // 0x600017BC: nop

    // 0x600017C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x600017C4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x600017C8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x600017CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600017D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600017D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600017D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x600017DC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x600017E0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x600017E4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x600017E8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x600017EC: jr          $ra
    // 0x600017F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600017F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_title_17F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017F4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x600017F8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x600017FC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001800: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x60001804: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x60001808: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x6000180C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x60001810: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x60001814: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60001818: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x6000181C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x60001820: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x60001824: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x60001828: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x6000182C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x60001830: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001834:
    // 0x60001834: jal         0x60000118
    // 0x60001838: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_title_118(rdram, ctx);
        goto after_0;
    // 0x60001838: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x6000183C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001840: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x60001844: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60001848: bne         $at, $zero, L_60001834
    if (ctx->r1 != 0) {
        // 0x6000184C: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_60001834;
    }
    // 0x6000184C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x60001850: jal         0x60000118
    // 0x60001854: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_title_118(rdram, ctx);
        goto after_1;
    // 0x60001854: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x60001858: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x6000185C: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x60001860: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001864: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60001868: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x6000186C: beq         $t6, $at, L_600018FC
    if (ctx->r14 == ctx->r1) {
        // 0x60001870: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_600018FC;
    }
    // 0x60001870: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001874: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x60001878: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x6000187C: addiu       $s2, $s2, 0x4A50
    ctx->r18 = ADD32(ctx->r18, 0X4A50);
    // 0x60001880: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60001884: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x60001888: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
L_6000188C:
    // 0x6000188C: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x60001890: bne         $v0, $at, L_600018A0
    if (ctx->r2 != ctx->r1) {
        // 0x60001894: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_600018A0;
    }
    // 0x60001894: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60001898: b           L_600018D8
    // 0x6000189C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_600018D8;
    // 0x6000189C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600018A0:
    // 0x600018A0: jal         0x60001250
    // 0x600018A4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_menu_title_1250(rdram, ctx);
        goto after_2;
    // 0x600018A4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
    // 0x600018A8: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x600018AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600018B0: andi        $t8, $t7, 0xF00
    ctx->r24 = ctx->r15 & 0XF00;
    // 0x600018B4: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x600018B8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x600018BC: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x600018C0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x600018C4: nop

    // 0x600018C8: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x600018CC: jal         0x60001318
    // 0x600018D0: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_title_1318(rdram, ctx);
        goto after_3;
    // 0x600018D0: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x600018D4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_600018D8:
    // 0x600018D8: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x600018DC: beq         $at, $zero, L_600018E8
    if (ctx->r1 == 0) {
        // 0x600018E0: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_600018E8;
    }
    // 0x600018E0: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x600018E4: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_600018E8:
    // 0x600018E8: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x600018EC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x600018F0: bne         $a0, $at, L_6000188C
    if (ctx->r4 != ctx->r1) {
        // 0x600018F4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_6000188C;
    }
    // 0x600018F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x600018F8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_600018FC:
    // 0x600018FC: andi        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 & 0X1;
    // 0x60001900: beq         $t4, $zero, L_6000190C
    if (ctx->r12 == 0) {
        // 0x60001904: addiu       $fp, $sp, 0x70
        ctx->r30 = ADD32(ctx->r29, 0X70);
            goto L_6000190C;
    }
    // 0x60001904: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x60001908: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_6000190C:
    // 0x6000190C: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x60001910: nop

    // 0x60001914: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x60001918: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000191C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x60001920: mflo        $s0
    ctx->r16 = lo;
    // 0x60001924: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001928: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x6000192C: jal         0x600000E8
    // 0x60001930: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_title_E8(rdram, ctx);
        goto after_4;
    // 0x60001930: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x60001934: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x60001938: addiu       $a3, $s2, 0x20
    ctx->r7 = ADD32(ctx->r18, 0X20);
    // 0x6000193C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001940: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x60001944: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x60001948: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x6000194C: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x60001950: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x60001954: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x60001958: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x6000195C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60001960: addu        $t4, $fp, $t3
    ctx->r12 = ADD32(ctx->r30, ctx->r11);
    // 0x60001964: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x60001968: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x6000196C: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x60001970: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x60001974: jal         0x600011E4
    // 0x60001978: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    ovl_menu_title_11E4(rdram, ctx);
        goto after_5;
    // 0x60001978: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    after_5:
    // 0x6000197C: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x60001980: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x60001984: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    // 0x60001988: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x6000198C: sw          $t6, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r14;
    // 0x60001990: blez        $s0, L_600019E0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x60001994: addu        $s6, $s4, $t7
        ctx->r22 = ADD32(ctx->r20, ctx->r15);
            goto L_600019E0;
    }
    // 0x60001994: addu        $s6, $s4, $t7
    ctx->r22 = ADD32(ctx->r20, ctx->r15);
    // 0x60001998: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x6000199C: beq         $a0, $zero, L_600019BC
    if (ctx->r4 == 0) {
        // 0x600019A0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_600019BC;
    }
    // 0x600019A0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x600019A4: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600019A8:
    // 0x600019A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600019AC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x600019B0: bne         $v1, $s7, L_600019A8
    if (ctx->r3 != ctx->r23) {
        // 0x600019B4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_600019A8;
    }
    // 0x600019B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600019B8: beq         $s7, $s0, L_600019DC
    if (ctx->r23 == ctx->r16) {
        // 0x600019BC: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_600019DC;
    }
L_600019BC:
    // 0x600019BC: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600019C0:
    // 0x600019C0: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x600019C4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x600019C8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x600019CC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x600019D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600019D4: bne         $s7, $s0, L_600019C0
    if (ctx->r23 != ctx->r16) {
        // 0x600019D8: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_600019C0;
    }
    // 0x600019D8: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_600019DC:
    // 0x600019DC: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_600019E0:
    // 0x600019E0: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x600019E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600019E8: blez        $t8, L_60001AAC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x600019EC: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001AAC;
    }
    // 0x600019EC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x600019F0: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x600019F4: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x600019F8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_600019FC:
    // 0x600019FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001A00: blez        $t9, L_60001A90
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60001A04: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001A90;
    }
    // 0x60001A04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001A08: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x60001A0C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_60001A10:
    // 0x60001A10: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x60001A14: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60001A18: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x60001A1C: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x60001A20: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x60001A24: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x60001A28: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x60001A2C: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x60001A30: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60001A34: jal         0x600016BC
    // 0x60001A38: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    ovl_menu_title_16BC(rdram, ctx);
        goto after_6;
    // 0x60001A38: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x60001A3C: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x60001A40: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x60001A44: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x60001A48: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x60001A4C: bne         $t0, $s2, L_60001A60
    if (ctx->r8 != ctx->r18) {
        // 0x60001A50: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_60001A60;
    }
    // 0x60001A50: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x60001A54: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001A58: b           L_60001A90
    // 0x60001A5C: nop

        goto L_60001A90;
    // 0x60001A5C: nop

L_60001A60:
    // 0x60001A60: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x60001A64: bne         $v1, $at, L_60001A7C
    if (ctx->r3 != ctx->r1) {
        // 0x60001A68: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_60001A7C;
    }
    // 0x60001A68: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x60001A6C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001A70: b           L_60001A90
    // 0x60001A74: nop

        goto L_60001A90;
    // 0x60001A74: nop

    // 0x60001A78: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
L_60001A7C:
    // 0x60001A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001A80: bne         $s0, $t4, L_60001A10
    if (ctx->r16 != ctx->r12) {
        // 0x60001A84: nop
    
            goto L_60001A10;
    }
    // 0x60001A84: nop

    // 0x60001A88: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x60001A8C: nop

L_60001A90:
    // 0x60001A90: beq         $t0, $s2, L_60001AAC
    if (ctx->r8 == ctx->r18) {
        // 0x60001A94: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_60001AAC;
    }
    // 0x60001A94: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001A98: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x60001A9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001AA0: bne         $v0, $t5, L_600019FC
    if (ctx->r2 != ctx->r13) {
        // 0x60001AA4: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_600019FC;
    }
    // 0x60001AA4: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x60001AA8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_60001AAC:
    // 0x60001AAC: jal         0x60000124
    // 0x60001AB0: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_title_124(rdram, ctx);
        goto after_7;
    // 0x60001AB0: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x60001AB4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001AB8: bne         $s7, $s0, L_60001AAC
    if (ctx->r23 != ctx->r16) {
        // 0x60001ABC: nop
    
            goto L_60001AAC;
    }
    // 0x60001ABC: nop

    // 0x60001AC0: jal         0x60000124
    // 0x60001AC4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_title_124(rdram, ctx);
        goto after_8;
    // 0x60001AC4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x60001AC8: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x60001ACC: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x60001AD0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001AD4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001AD8: mflo        $a1
    ctx->r5 = lo;
    // 0x60001ADC: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x60001AE0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x60001AE4: jal         0x60000034
    // 0x60001AE8: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    ovl_menu_title_34(rdram, ctx);
        goto after_9;
    // 0x60001AE8: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x60001AEC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001AF0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001AF4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x60001AF8: jal         0x60000544
    // 0x60001AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_544(rdram, ctx);
        goto after_10;
    // 0x60001AFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001B00: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001B04: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001B08: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001B0C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001B10: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x60001B14: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x60001B18: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x60001B1C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x60001B20: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x60001B24: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x60001B28: jr          $ra
    // 0x60001B2C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x60001B2C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_menu_title_1B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001B30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001B34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x60001B38: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001B3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001B40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x60001B44: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x60001B48: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60001B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001B50: jal         0x60000F34
    // 0x60001B54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x60001B54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60001B58: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001B5C: lw          $t6, 0x4AD0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4AD0);
    // 0x60001B60: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60001B64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x60001B68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x60001B6C: lw          $t8, 0x4824($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4824);
    // 0x60001B70: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x60001B74: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B78: lw          $a2, 0x4AD4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4AD4);
    // 0x60001B7C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60001B80: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60001B84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60001B88: jal         0x60000F34
    // 0x60001B8C: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x60001B8C: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    after_1:
    // 0x60001B90: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001B94: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x60001B98: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x60001B9C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x60001BA0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60001BA4: jal         0x60000F34
    // 0x60001BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_2;
    // 0x60001BA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x60001BAC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001BB0: lw          $v1, 0x4AD0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4AD0);
    // 0x60001BB4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60001BB8: beq         $v1, $at, L_60001C14
    if (ctx->r3 == ctx->r1) {
        // 0x60001BBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60001C14;
    }
    // 0x60001BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001BC0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60001BC4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x60001BC8: beq         $v0, $zero, L_60001BD8
    if (ctx->r2 == 0) {
        // 0x60001BCC: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_60001BD8;
    }
    // 0x60001BCC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x60001BD0: bne         $v0, $at, L_60001C14
    if (ctx->r2 != ctx->r1) {
        // 0x60001BD4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60001C14;
    }
    // 0x60001BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001BD8:
    // 0x60001BD8: bne         $v0, $zero, L_60001BE8
    if (ctx->r2 != 0) {
        // 0x60001BDC: lui         $a1, 0x6000
        ctx->r5 = S32(0X6000 << 16);
            goto L_60001BE8;
    }
    // 0x60001BDC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001BE0: b           L_60001BEC
    // 0x60001BE4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_60001BEC;
    // 0x60001BE4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_60001BE8:
    // 0x60001BE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_60001BEC:
    // 0x60001BEC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x60001BF0: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001BF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60001BF8: lw          $t1, 0x4824($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4824);
    // 0x60001BFC: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x60001C00: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x60001C04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60001C08: jal         0x60000F34
    // 0x60001C0C: addu        $a3, $v0, $t1
    ctx->r7 = ADD32(ctx->r2, ctx->r9);
    ovl_menu_title_F34(rdram, ctx);
        goto after_3;
    // 0x60001C0C: addu        $a3, $v0, $t1
    ctx->r7 = ADD32(ctx->r2, ctx->r9);
    after_3:
    // 0x60001C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001C14:
    // 0x60001C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60001C18: jr          $ra
    // 0x60001C1C: nop

    return;
    // 0x60001C1C: nop

;}
RECOMP_FUNC void ovl_menu_title_1C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C20: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001C24: addiu       $v0, $v0, 0x4AD0
    ctx->r2 = ADD32(ctx->r2, 0X4AD0);
    // 0x60001C28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001C2C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x60001C30: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x60001C34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001C38: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x60001C3C: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001C40: addiu       $a1, $a1, 0x4AD4
    ctx->r5 = ADD32(ctx->r5, 0X4AD4);
    // 0x60001C44: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60001C48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60001C4C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60001C50: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60001C54: jal         0x60000F34
    // 0x60001C58: addiu       $a2, $a2, 0x6CD
    ctx->r6 = ADD32(ctx->r6, 0X6CD);
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x60001C58: addiu       $a2, $a2, 0x6CD
    ctx->r6 = ADD32(ctx->r6, 0X6CD);
    after_0:
    // 0x60001C5C: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x60001C60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001C64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C68: lwc1        $f8, 0x48F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X48F8);
    // 0x60001C6C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001C70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001C74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001C78: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001C7C: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x60001C80: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x60001C84: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x60001C88: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60001C8C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60001C90: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x60001C94: swc1        $f19, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60001C98: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x60001C9C: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x60001CA0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60001CA4: jal         0x60000F34
    // 0x60001CA8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x60001CA8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x60001CAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001CB0: jal         0x60001B30
    // 0x60001CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_2;
    // 0x60001CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60001CB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001CBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60001CC0: jr          $ra
    // 0x60001CC4: nop

    return;
    // 0x60001CC4: nop

;}
RECOMP_FUNC void ovl_menu_title_1CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CC8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60001CCC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60001CD0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001CD4: addiu       $s1, $s1, 0x4AD4
    ctx->r17 = ADD32(ctx->r17, 0X4AD4);
    // 0x60001CD8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x60001CDC: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x60001CE0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60001CE4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x60001CE8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x60001CEC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60001CF0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x60001CF4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x60001CF8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001CFC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60001D00: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001D04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60001D08: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x60001D0C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x60001D10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001D14: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60001D18: jal         0x60000F34
    // 0x60001D1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x60001D1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x60001D20: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x60001D24: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60001D28: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60001D2C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60001D30: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60001D34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001D38: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x60001D3C: jal         0x60000F34
    // 0x60001D40: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x60001D40: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x60001D44: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x60001D48: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x60001D4C: blez        $s3, L_60001DD8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x60001D50: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001DD8;
    }
    // 0x60001D50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001D54: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x60001D58: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x60001D5C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60001D60: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x60001D64: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60001D68: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60001D6C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60001D70: div.s       $f20, $f16, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x60001D74: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60001D78: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x60001D7C: nop

    // 0x60001D80: div.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
L_60001D84:
    // 0x60001D84: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60001D88: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x60001D8C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60001D90: jal         0x60000F34
    // 0x60001D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_2;
    // 0x60001D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60001D98: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60001D9C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60001DA0: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60001DA4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60001DA8: add.s       $f18, $f8, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x60001DAC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x60001DB0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x60001DB4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60001DB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60001DBC: jal         0x60000F34
    // 0x60001DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_3;
    // 0x60001DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60001DC4: jal         0x600009D0
    // 0x60001DC8: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_4;
    // 0x60001DC8: nop

    after_4:
    // 0x60001DCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001DD0: bne         $s0, $s3, L_60001D84
    if (ctx->r16 != ctx->r19) {
        // 0x60001DD4: nop
    
            goto L_60001D84;
    }
    // 0x60001DD4: nop

L_60001DD8:
    // 0x60001DD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60001DDC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60001DE0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60001DE4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60001DE8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60001DEC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60001DF0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x60001DF4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x60001DF8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x60001DFC: jr          $ra
    // 0x60001E00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60001E00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_menu_title_1E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E04: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x60001E08: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x60001E0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001E10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E14: lwc1        $f8, 0x48FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X48FC);
    // 0x60001E18: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x60001E1C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001E20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001E24: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60001E28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001E2C: addiu       $s2, $s2, 0x4AD4
    ctx->r18 = ADD32(ctx->r18, 0X4AD4);
    // 0x60001E30: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x60001E34: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001E38: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x60001E3C: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x60001E40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60001E44: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60001E48: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x60001E4C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x60001E50: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x60001E54: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x60001E58: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001E5C: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x60001E60: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001E64: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x60001E68: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001E6C: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x60001E70: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001E74: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60001E78: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x60001E7C: swc1        $f19, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60001E80: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x60001E84: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x60001E88: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60001E8C: jal         0x60000F34
    // 0x60001E90: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x60001E90: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x60001E94: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x60001E98: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x60001E9C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001EA0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001EA4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60001EA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001EAC: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x60001EB0: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x60001EB4: jal         0x60000F34
    // 0x60001EB8: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x60001EB8: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x60001EBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001EC0: jal         0x60001B30
    // 0x60001EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_1B30(rdram, ctx);
        goto after_2;
    // 0x60001EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60001EC8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001ECC: lwc1        $f26, 0x4900($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X4900);
    // 0x60001ED0: lui         $at, 0xC311
    ctx->r1 = S32(0XC311 << 16);
    // 0x60001ED4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60001ED8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60001EDC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x60001EE0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001EE4: nop

    // 0x60001EE8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
L_60001EEC:
    // 0x60001EEC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x60001EF0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001EF4: jal         0x60000F34
    // 0x60001EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_3;
    // 0x60001EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60001EFC: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x60001F00: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60001F04: sub.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x60001F08: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001F0C: c.le.s      $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f12.fl <= ctx->f24.fl;
    // 0x60001F10: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x60001F14: bc1t        L_60001F50
    if (c1cs) {
        // 0x60001F18: nop
    
            goto L_60001F50;
    }
    // 0x60001F18: nop

    // 0x60001F1C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001F20: jal         0x60000F34
    // 0x60001F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_4;
    // 0x60001F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60001F28: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x60001F2C: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x60001F30: nop

    // 0x60001F34: bc1f        L_60001F40
    if (!c1cs) {
        // 0x60001F38: nop
    
            goto L_60001F40;
    }
    // 0x60001F38: nop

    // 0x60001F3C: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_60001F40:
    // 0x60001F40: jal         0x600009D0
    // 0x60001F44: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_5;
    // 0x60001F44: nop

    after_5:
    // 0x60001F48: b           L_60001EEC
    // 0x60001F4C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
        goto L_60001EEC;
    // 0x60001F4C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
L_60001F50:
    // 0x60001F50: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001F54: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60001F58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001F5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001F60: jal         0x60000F34
    // 0x60001F64: swc1        $f24, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f24.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_6;
    // 0x60001F64: swc1        $f24, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f24.u32l;
    after_6:
    // 0x60001F68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001F6C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001F70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F74: lwc1        $f20, 0x4904($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4904);
    // 0x60001F78: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x60001F7C: addiu       $s1, $zero, 0x168
    ctx->r17 = ADD32(0, 0X168);
    // 0x60001F80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001F84:
    // 0x60001F84: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001F88: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x60001F8C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001F90: jal         0x60000F34
    // 0x60001F94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_7;
    // 0x60001F94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60001F98: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x60001F9C: jal         0x60000310
    // 0x60001FA0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    ovl_menu_title_310(rdram, ctx);
        goto after_8;
    // 0x60001FA0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_8:
    // 0x60001FA4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x60001FA8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001FAC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x60001FB0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001FB4: sub.s       $f12, $f22, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x60001FB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60001FBC: jal         0x60000F34
    // 0x60001FC0: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_9;
    // 0x60001FC0: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    after_9:
    // 0x60001FC4: jal         0x600009D0
    // 0x60001FC8: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_10;
    // 0x60001FC8: nop

    after_10:
    // 0x60001FCC: addiu       $s0, $s0, 0x2D
    ctx->r16 = ADD32(ctx->r16, 0X2D);
    // 0x60001FD0: bne         $s0, $s1, L_60001F84
    if (ctx->r16 != ctx->r17) {
        // 0x60001FD4: nop
    
            goto L_60001F84;
    }
    // 0x60001FD4: nop

    // 0x60001FD8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x60001FDC: slti        $at, $s4, 0x2
    ctx->r1 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x60001FE0: bne         $at, $zero, L_60001F84
    if (ctx->r1 != 0) {
        // 0x60001FE4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001F84;
    }
    // 0x60001FE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001FE8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60001FEC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x60001FF0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60001FF4: jal         0x60000F34
    // 0x60001FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_11;
    // 0x60001FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x60001FFC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60002000: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x60002004: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002008: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000200C: jal         0x60000F34
    // 0x60002010: swc1        $f22, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f22.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_12;
    // 0x60002010: swc1        $f22, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f22.u32l;
    after_12:
    // 0x60002014: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002018: jal         0x60001B30
    // 0x6000201C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_13;
    // 0x6000201C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x60002020: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002024: lwc1        $f27, 0x4908($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X4908);
    // 0x60002028: lwc1        $f26, 0x490C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X490C);
    // 0x6000202C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002030: lwc1        $f25, 0x4910($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X4910);
    // 0x60002034: lwc1        $f24, 0x4914($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X4914);
    // 0x60002038: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x6000203C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x60002040: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002044: lwc1        $f21, 0x4918($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4918);
    // 0x60002048: lwc1        $f20, 0x491C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X491C);
    // 0x6000204C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x60002050: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_60002054:
    // 0x60002054: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60002058: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x6000205C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002060: jal         0x60000F34
    // 0x60002064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_14;
    // 0x60002064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x60002068: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x6000206C: nop

    // 0x60002070: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x60002074: mul.d       $f2, $f8, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f2.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x60002078: sub.d       $f0, $f2, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f22.d); 
    ctx->f0.d = ctx->f2.d - ctx->f22.d;
    // 0x6000207C: c.le.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d <= ctx->f0.d;
    // 0x60002080: nop

    // 0x60002084: bc1f        L_60002094
    if (!c1cs) {
        // 0x60002088: nop
    
            goto L_60002094;
    }
    // 0x60002088: nop

    // 0x6000208C: b           L_600020B4
    // 0x60002090: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
        goto L_600020B4;
    // 0x60002090: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
L_60002094:
    // 0x60002094: c.lt.d      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.d < ctx->f22.d;
    // 0x60002098: nop

    // 0x6000209C: bc1f        L_600020AC
    if (!c1cs) {
        // 0x600020A0: nop
    
            goto L_600020AC;
    }
    // 0x600020A0: nop

    // 0x600020A4: b           L_600020B0
    // 0x600020A8: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
        goto L_600020B0;
    // 0x600020A8: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
L_600020AC:
    // 0x600020AC: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_600020B0:
    // 0x600020B0: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_600020B4:
    // 0x600020B4: mul.d       $f10, $f2, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f2.d, ctx->f26.d);
    // 0x600020B8: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x600020BC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600020C0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x600020C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600020C8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x600020CC: jal         0x60000F34
    // 0x600020D0: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_15;
    // 0x600020D0: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    after_15:
    // 0x600020D4: jal         0x600009D0
    // 0x600020D8: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_16;
    // 0x600020D8: nop

    after_16:
    // 0x600020DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x600020E0: slti        $at, $s4, 0xF
    ctx->r1 = SIGNED(ctx->r20) < 0XF ? 1 : 0;
    // 0x600020E4: bne         $at, $zero, L_60002054
    if (ctx->r1 != 0) {
        // 0x600020E8: nop
    
            goto L_60002054;
    }
    // 0x600020E8: nop

    // 0x600020EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600020F0: jal         0x60001B30
    // 0x600020F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_17;
    // 0x600020F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x600020F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020FC: lwc1        $f20, 0x4920($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4920);
    // 0x60002100: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x60002104: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
L_60002108:
    // 0x60002108: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x6000210C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x60002110: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002114: jal         0x60000F34
    // 0x60002118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_18;
    // 0x60002118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x6000211C: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x60002120: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x60002124: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x60002128: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x6000212C: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x60002130: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002134: jal         0x60000F34
    // 0x60002138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_19;
    // 0x60002138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x6000213C: jal         0x600009D0
    // 0x60002140: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_20;
    // 0x60002140: nop

    after_20:
    // 0x60002144: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x60002148: bne         $s4, $s0, L_60002108
    if (ctx->r20 != ctx->r16) {
        // 0x6000214C: nop
    
            goto L_60002108;
    }
    // 0x6000214C: nop

    // 0x60002150: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x60002154: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002158: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000215C: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002160: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002164: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002168: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x6000216C: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60002170: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60002174: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x60002178: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x6000217C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x60002180: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x60002184: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x60002188: jr          $ra
    // 0x6000218C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x6000218C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_menu_title_2190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002190: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x60002194: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60002198: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000219C: addiu       $s1, $s1, 0x4AD4
    ctx->r17 = ADD32(ctx->r17, 0X4AD4);
    // 0x600021A0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x600021A4: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x600021A8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x600021AC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x600021B0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x600021B4: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x600021B8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x600021BC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x600021C0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x600021C4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600021C8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x600021CC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600021D0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x600021D4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600021D8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x600021DC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600021E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600021E4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600021E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x600021EC: jal         0x60000F34
    // 0x600021F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x600021F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x600021F4: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x600021F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600021FC: lui         $at, 0xC311
    ctx->r1 = S32(0XC311 << 16);
    // 0x60002200: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002204: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002208: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x6000220C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002210: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002214: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x60002218: jal         0x60000F34
    // 0x6000221C: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x6000221C: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x60002220: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002224: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002228: lwc1        $f8, 0x4924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4924);
    // 0x6000222C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002230: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002234: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002238: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000223C: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x60002240: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x60002244: jal         0x60000F34
    // 0x60002248: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_2;
    // 0x60002248: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x6000224C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002250: jal         0x60001B30
    // 0x60002254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_3;
    // 0x60002254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60002258: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000225C: lwc1        $f30, 0x4928($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X4928);
    // 0x60002260: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002264:
    // 0x60002264: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002268: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x6000226C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002270: jal         0x60000F34
    // 0x60002274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_4;
    // 0x60002274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60002278: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x6000227C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002280: sub.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x60002284: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60002288: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x6000228C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002290: jal         0x60000F34
    // 0x60002294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_5;
    // 0x60002294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60002298: jal         0x600009D0
    // 0x6000229C: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_6;
    // 0x6000229C: nop

    after_6:
    // 0x600022A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600022A4: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x600022A8: bne         $at, $zero, L_60002264
    if (ctx->r1 != 0) {
        // 0x600022AC: nop
    
            goto L_60002264;
    }
    // 0x600022AC: nop

    // 0x600022B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600022B4: jal         0x60001B30
    // 0x600022B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_1B30(rdram, ctx);
        goto after_7;
    // 0x600022B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x600022BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600022C0: lwc1        $f27, 0x4930($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X4930);
    // 0x600022C4: lwc1        $f26, 0x4934($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X4934);
    // 0x600022C8: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x600022CC: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x600022D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600022D4: lwc1        $f23, 0x4938($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X4938);
    // 0x600022D8: lwc1        $f22, 0x493C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X493C);
    // 0x600022DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600022E0: lwc1        $f21, 0x4940($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4940);
    // 0x600022E4: lwc1        $f20, 0x4944($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4944);
    // 0x600022E8: mtc1        $zero, $f29
    ctx->f_odd[(29 - 1) * 2] = 0;
    // 0x600022EC: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x600022F0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x600022F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600022F8:
    // 0x600022F8: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x600022FC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60002300: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002304: jal         0x60000F34
    // 0x60002308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_8;
    // 0x60002308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x6000230C: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x60002310: nop

    // 0x60002314: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x60002318: mul.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x6000231C: add.d       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f6.d + ctx->f24.d;
    // 0x60002320: c.le.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d <= ctx->f0.d;
    // 0x60002324: nop

    // 0x60002328: bc1f        L_60002338
    if (!c1cs) {
        // 0x6000232C: nop
    
            goto L_60002338;
    }
    // 0x6000232C: nop

    // 0x60002330: b           L_60002358
    // 0x60002334: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
        goto L_60002358;
    // 0x60002334: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
L_60002338:
    // 0x60002338: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x6000233C: nop

    // 0x60002340: bc1f        L_60002350
    if (!c1cs) {
        // 0x60002344: nop
    
            goto L_60002350;
    }
    // 0x60002344: nop

    // 0x60002348: b           L_60002354
    // 0x6000234C: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
        goto L_60002354;
    // 0x6000234C: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
L_60002350:
    // 0x60002350: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_60002354:
    // 0x60002354: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_60002358:
    // 0x60002358: mul.d       $f8, $f2, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f26.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f26.d);
    // 0x6000235C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002360: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002364: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002368: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000236C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x60002370: jal         0x60000F34
    // 0x60002374: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_9;
    // 0x60002374: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x60002378: jal         0x600009D0
    // 0x6000237C: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_10;
    // 0x6000237C: nop

    after_10:
    // 0x60002380: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002384: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x60002388: bne         $at, $zero, L_600022F8
    if (ctx->r1 != 0) {
        // 0x6000238C: nop
    
            goto L_600022F8;
    }
    // 0x6000238C: nop

    // 0x60002390: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002394: jal         0x60001B30
    // 0x60002398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_1B30(rdram, ctx);
        goto after_11;
    // 0x60002398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x6000239C: jal         0x600009C4
    // 0x600023A0: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_12;
    // 0x600023A0: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_12:
    // 0x600023A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600023A8: jal         0x60001B30
    // 0x600023AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_13;
    // 0x600023AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x600023B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600023B4:
    // 0x600023B4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x600023B8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x600023BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600023C0: jal         0x60000F34
    // 0x600023C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_14;
    // 0x600023C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x600023C8: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x600023CC: nop

    // 0x600023D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x600023D4: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x600023D8: add.d       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f0.d = ctx->f4.d + ctx->f24.d;
    // 0x600023DC: c.le.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d <= ctx->f0.d;
    // 0x600023E0: nop

    // 0x600023E4: bc1f        L_600023F4
    if (!c1cs) {
        // 0x600023E8: nop
    
            goto L_600023F4;
    }
    // 0x600023E8: nop

    // 0x600023EC: b           L_60002414
    // 0x600023F0: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
        goto L_60002414;
    // 0x600023F0: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
L_600023F4:
    // 0x600023F4: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x600023F8: nop

    // 0x600023FC: bc1f        L_6000240C
    if (!c1cs) {
        // 0x60002400: nop
    
            goto L_6000240C;
    }
    // 0x60002400: nop

    // 0x60002404: b           L_60002410
    // 0x60002408: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
        goto L_60002410;
    // 0x60002408: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
L_6000240C:
    // 0x6000240C: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_60002410:
    // 0x60002410: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_60002414:
    // 0x60002414: mul.d       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f26.d); 
    ctx->f6.d = MUL_D(ctx->f2.d, ctx->f26.d);
    // 0x60002418: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x6000241C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002420: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002424: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002428: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x6000242C: jal         0x60000F34
    // 0x60002430: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_15;
    // 0x60002430: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x60002434: jal         0x600009D0
    // 0x60002438: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_16;
    // 0x60002438: nop

    after_16:
    // 0x6000243C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002440: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x60002444: bne         $at, $zero, L_600023B4
    if (ctx->r1 != 0) {
        // 0x60002448: nop
    
            goto L_600023B4;
    }
    // 0x60002448: nop

    // 0x6000244C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002450: jal         0x60001B30
    // 0x60002454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_17;
    // 0x60002454: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x60002458: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000245C:
    // 0x6000245C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002460: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x60002464: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002468: jal         0x60000F34
    // 0x6000246C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_18;
    // 0x6000246C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x60002470: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60002474: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x60002478: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x6000247C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60002480: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x60002484: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002488: jal         0x60000F34
    // 0x6000248C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_19;
    // 0x6000248C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x60002490: jal         0x600009D0
    // 0x60002494: nop

    ovl_menu_title_9D0(rdram, ctx);
        goto after_20;
    // 0x60002494: nop

    after_20:
    // 0x60002498: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000249C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x600024A0: bne         $s0, $at, L_6000245C
    if (ctx->r16 != ctx->r1) {
        // 0x600024A4: nop
    
            goto L_6000245C;
    }
    // 0x600024A4: nop

    // 0x600024A8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x600024AC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600024B0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600024B4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600024B8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600024BC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600024C0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600024C4: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600024C8: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600024CC: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x600024D0: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600024D4: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600024D8: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600024DC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x600024E0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x600024E4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600024E8: jr          $ra
    // 0x600024EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x600024EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_menu_title_24F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600024F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x600024F4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x600024F8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600024FC: addiu       $s0, $s0, 0x4AD4
    ctx->r16 = ADD32(ctx->r16, 0X4AD4);
    // 0x60002500: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60002504: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x60002508: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x6000250C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002510: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002514: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002518: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000251C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60002520: jal         0x60000F34
    // 0x60002524: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_0;
    // 0x60002524: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60002528: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x6000252C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002530: lwc1        $f4, 0x4948($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4948);
    // 0x60002534: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002538: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x6000253C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002540: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002544: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60002548: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x6000254C: jal         0x60000F34
    // 0x60002550: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_1;
    // 0x60002550: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x60002554: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002558: jal         0x60001B30
    // 0x6000255C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_title_1B30(rdram, ctx);
        goto after_2;
    // 0x6000255C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60002560: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x60002564: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002568: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x6000256C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60002570: lui         $a3, 0x4384
    ctx->r7 = S32(0X4384 << 16);
    // 0x60002574: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x60002578: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x6000257C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002580: jal         0x60001CC8
    // 0x60002584: lui         $a2, 0xC313
    ctx->r6 = S32(0XC313 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_3;
    // 0x60002584: lui         $a2, 0xC313
    ctx->r6 = S32(0XC313 << 16);
    after_3:
    // 0x60002588: jal         0x600009C4
    // 0x6000258C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_4;
    // 0x6000258C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_4:
    // 0x60002590: lui         $at, 0xC313
    ctx->r1 = S32(0XC313 << 16);
    // 0x60002594: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002598: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000259C: lwc1        $f14, 0x494C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X494C);
    // 0x600025A0: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x600025A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x600025A8: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x600025AC: jal         0x60001CC8
    // 0x600025B0: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_5;
    // 0x600025B0: lui         $a3, 0x433E
    ctx->r7 = S32(0X433E << 16);
    after_5:
    // 0x600025B4: jal         0x600009C4
    // 0x600025B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_6;
    // 0x600025B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x600025BC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x600025C0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x600025C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600025C8: jal         0x60000F34
    // 0x600025CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_7;
    // 0x600025CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600025D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600025D4: lwc1        $f6, 0x4950($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4950);
    // 0x600025D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600025DC: lwc1        $f8, 0x4954($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4954);
    // 0x600025E0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x600025E4: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x600025E8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600025EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600025F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600025F4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x600025F8: jal         0x60000F34
    // 0x600025FC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_8;
    // 0x600025FC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x60002600: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x60002604: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002608: lui         $at, 0x4319
    ctx->r1 = S32(0X4319 << 16);
    // 0x6000260C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60002610: lui         $a2, 0xC3B2
    ctx->r6 = S32(0XC3B2 << 16);
    // 0x60002614: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x60002618: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x6000261C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x60002620: jal         0x60001CC8
    // 0x60002624: lui         $a3, 0x4368
    ctx->r7 = S32(0X4368 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_9;
    // 0x60002624: lui         $a3, 0x4368
    ctx->r7 = S32(0X4368 << 16);
    after_9:
    // 0x60002628: jal         0x600009C4
    // 0x6000262C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_10;
    // 0x6000262C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_10:
    // 0x60002630: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002634: lwc1        $f12, 0x4958($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4958);
    // 0x60002638: lui         $at, 0x4368
    ctx->r1 = S32(0X4368 << 16);
    // 0x6000263C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60002640: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x60002644: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x60002648: lui         $a2, 0xC37A
    ctx->r6 = S32(0XC37A << 16);
    // 0x6000264C: jal         0x60001CC8
    // 0x60002650: lui         $a3, 0x4319
    ctx->r7 = S32(0X4319 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_11;
    // 0x60002650: lui         $a3, 0x4319
    ctx->r7 = S32(0X4319 << 16);
    after_11:
    // 0x60002654: jal         0x600009C4
    // 0x60002658: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_12;
    // 0x60002658: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_12:
    // 0x6000265C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002660: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60002664: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002668: jal         0x60000F34
    // 0x6000266C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_13;
    // 0x6000266C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x60002670: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002674: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60002678: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x6000267C: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x60002680: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002684: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002688: jal         0x60000F34
    // 0x6000268C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_14;
    // 0x6000268C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x60002690: lui         $at, 0x4390
    ctx->r1 = S32(0X4390 << 16);
    // 0x60002694: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002698: lui         $at, 0x4368
    ctx->r1 = S32(0X4368 << 16);
    // 0x6000269C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600026A0: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x600026A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x600026A8: lui         $a2, 0x4386
    ctx->r6 = S32(0X4386 << 16);
    // 0x600026AC: jal         0x60001CC8
    // 0x600026B0: lui         $a3, 0x4395
    ctx->r7 = S32(0X4395 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_15;
    // 0x600026B0: lui         $a3, 0x4395
    ctx->r7 = S32(0X4395 << 16);
    after_15:
    // 0x600026B4: jal         0x600009C4
    // 0x600026B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_16;
    // 0x600026B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_16:
    // 0x600026BC: lui         $at, 0x4386
    ctx->r1 = S32(0X4386 << 16);
    // 0x600026C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600026C4: lui         $at, 0x4395
    ctx->r1 = S32(0X4395 << 16);
    // 0x600026C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600026CC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x600026D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x600026D4: lui         $a2, 0x438C
    ctx->r6 = S32(0X438C << 16);
    // 0x600026D8: jal         0x60001CC8
    // 0x600026DC: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_17;
    // 0x600026DC: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    after_17:
    // 0x600026E0: jal         0x600009C4
    // 0x600026E4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_18;
    // 0x600026E4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_18:
    // 0x600026E8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x600026EC: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x600026F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600026F4: jal         0x60000F34
    // 0x600026F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_19;
    // 0x600026F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x600026FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002700: lwc1        $f10, 0x495C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X495C);
    // 0x60002704: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002708: lwc1        $f16, 0x4960($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4960);
    // 0x6000270C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002710: lwc1        $f18, 0x4964($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4964);
    // 0x60002714: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002718: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x6000271C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002720: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002724: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x60002728: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x6000272C: jal         0x60000F34
    // 0x60002730: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_20;
    // 0x60002730: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x60002734: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x60002738: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x6000273C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60002740: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002744: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60002748: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x6000274C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x60002750: jal         0x60001CC8
    // 0x60002754: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_21;
    // 0x60002754: lui         $a2, 0x43DC
    ctx->r6 = S32(0X43DC << 16);
    after_21:
    // 0x60002758: jal         0x600009C4
    // 0x6000275C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_22;
    // 0x6000275C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_22:
    // 0x60002760: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x60002764: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002768: lui         $at, 0x4371
    ctx->r1 = S32(0X4371 << 16);
    // 0x6000276C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60002770: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x60002774: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x60002778: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x6000277C: jal         0x60001CC8
    // 0x60002780: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_23;
    // 0x60002780: lui         $a3, 0x4370
    ctx->r7 = S32(0X4370 << 16);
    after_23:
    // 0x60002784: jal         0x600009C4
    // 0x60002788: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_24;
    // 0x60002788: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_24:
    // 0x6000278C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002790: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60002794: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002798: jal         0x60000F34
    // 0x6000279C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_25;
    // 0x6000279C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_25:
    // 0x600027A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600027A4: lwc1        $f4, 0x4968($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4968);
    // 0x600027A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600027AC: lwc1        $f6, 0x496C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X496C);
    // 0x600027B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x600027B4: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x600027B8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600027BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600027C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600027C4: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x600027C8: jal         0x60000F34
    // 0x600027CC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    ovl_menu_title_F34(rdram, ctx);
        goto after_26;
    // 0x600027CC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_26:
    // 0x600027D0: lui         $at, 0xC357
    ctx->r1 = S32(0XC357 << 16);
    // 0x600027D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600027D8: lui         $at, 0x4274
    ctx->r1 = S32(0X4274 << 16);
    // 0x600027DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600027E0: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x600027E4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x600027E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x600027EC: jal         0x60001CC8
    // 0x600027F0: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_27;
    // 0x600027F0: lui         $a3, 0xC150
    ctx->r7 = S32(0XC150 << 16);
    after_27:
    // 0x600027F4: jal         0x600009C4
    // 0x600027F8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_28;
    // 0x600027F8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_28:
    // 0x600027FC: lui         $at, 0xC357
    ctx->r1 = S32(0XC357 << 16);
    // 0x60002800: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002804: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x60002808: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x6000280C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x60002810: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x60002814: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x60002818: jal         0x60001CC8
    // 0x6000281C: lui         $a3, 0x4274
    ctx->r7 = S32(0X4274 << 16);
    ovl_menu_title_1CC8(rdram, ctx);
        goto after_29;
    // 0x6000281C: lui         $a3, 0x4274
    ctx->r7 = S32(0X4274 << 16);
    after_29:
    // 0x60002820: jal         0x600009C4
    // 0x60002824: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_title_9C4(rdram, ctx);
        goto after_30;
    // 0x60002824: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_30:
    // 0x60002828: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x6000282C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60002830: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x60002834: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x60002838: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x6000283C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002840: jal         0x60000F34
    // 0x60002844: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_31;
    // 0x60002844: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x60002848: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000284C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002850: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002854: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60002858: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x6000285C: jr          $ra
    // 0x60002860: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002860: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_menu_title_2864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000286C: jal         0x60001E04
    // 0x60002870: nop

    ovl_menu_title_1E04(rdram, ctx);
        goto after_0;
    // 0x60002870: nop

    after_0:
    // 0x60002874: jal         0x60002190
    // 0x60002878: nop

    ovl_menu_title_2190(rdram, ctx);
        goto after_1;
    // 0x60002878: nop

    after_1:
    // 0x6000287C: jal         0x600024F0
    // 0x60002880: nop

    ovl_menu_title_24F0(rdram, ctx);
        goto after_2;
    // 0x60002880: nop

    after_2:
L_60002884:
    // 0x60002884: jal         0x6000034C
    // 0x60002888: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_3;
    // 0x60002888: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_3:
    // 0x6000288C: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x60002890: beq         $at, $zero, L_600028A0
    if (ctx->r1 == 0) {
        // 0x60002894: nop
    
            goto L_600028A0;
    }
    // 0x60002894: nop

    // 0x60002898: jal         0x60001E04
    // 0x6000289C: nop

    ovl_menu_title_1E04(rdram, ctx);
        goto after_4;
    // 0x6000289C: nop

    after_4:
L_600028A0:
    // 0x600028A0: jal         0x6000034C
    // 0x600028A4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_5;
    // 0x600028A4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_5:
    // 0x600028A8: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x600028AC: beq         $at, $zero, L_600028BC
    if (ctx->r1 == 0) {
        // 0x600028B0: nop
    
            goto L_600028BC;
    }
    // 0x600028B0: nop

    // 0x600028B4: jal         0x60002190
    // 0x600028B8: nop

    ovl_menu_title_2190(rdram, ctx);
        goto after_6;
    // 0x600028B8: nop

    after_6:
L_600028BC:
    // 0x600028BC: jal         0x6000034C
    // 0x600028C0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_7;
    // 0x600028C0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_7:
    // 0x600028C4: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x600028C8: beq         $at, $zero, L_60002884
    if (ctx->r1 == 0) {
        // 0x600028CC: nop
    
            goto L_60002884;
    }
    // 0x600028CC: nop

    // 0x600028D0: jal         0x600024F0
    // 0x600028D4: nop

    ovl_menu_title_24F0(rdram, ctx);
        goto after_8;
    // 0x600028D4: nop

    after_8:
    // 0x600028D8: b           L_60002884
    // 0x600028DC: nop

        goto L_60002884;
    // 0x600028DC: nop

    // 0x600028E0: nop

    // 0x600028E4: nop

    // 0x600028E8: nop

    // 0x600028EC: nop

    // 0x600028F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600028F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600028F8: jr          $ra
    // 0x600028FC: nop

    return;
    // 0x600028FC: nop

;}
RECOMP_FUNC void ovl_menu_title_2900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002908: jal         0x60000550
    // 0x6000290C: nop

    ovl_menu_title_550(rdram, ctx);
        goto after_0;
    // 0x6000290C: nop

    after_0:
    // 0x60002910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002918: jr          $ra
    // 0x6000291C: nop

    return;
    // 0x6000291C: nop

;}
RECOMP_FUNC void ovl_menu_title_2920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002920: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60002924: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60002928: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x6000292C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60002930: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002934: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60002938: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x6000293C: blez        $a1, L_60002A50
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60002940: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60002A50;
    }
    // 0x60002940: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002944: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002948: addiu       $s3, $s3, 0x49C0
    ctx->r19 = ADD32(ctx->r19, 0X49C0);
    // 0x6000294C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60002950:
    // 0x60002950: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60002954: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60002958: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x6000295C: beq         $t6, $zero, L_600029A8
    if (ctx->r14 == 0) {
        // 0x60002960: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_600029A8;
    }
    // 0x60002960: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60002964: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002968: jal         0x60000538
    // 0x6000296C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_538(rdram, ctx);
        goto after_0;
    // 0x6000296C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60002970: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60002974: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x60002978: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x6000297C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60002980: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60002984: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60002988: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000298C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60002990: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60002994: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60002998: jal         0x6000055C
    // 0x6000299C: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_1;
    // 0x6000299C: nop

    after_1:
    // 0x600029A0: b           L_60002A28
    // 0x600029A4: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
        goto L_60002A28;
    // 0x600029A4: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_600029A8:
    // 0x600029A8: beq         $t9, $zero, L_60002A04
    if (ctx->r25 == 0) {
        // 0x600029AC: nop
    
            goto L_60002A04;
    }
    // 0x600029AC: nop

    // 0x600029B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600029B4: jal         0x600011BC
    // 0x600029B8: nop

    ovl_menu_title_11BC(rdram, ctx);
        goto after_2;
    // 0x600029B8: nop

    after_2:
    // 0x600029BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600029C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x600029C4: jal         0x600017F4
    // 0x600029C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_17F4(rdram, ctx);
        goto after_3;
    // 0x600029C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x600029CC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x600029D0: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x600029D4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x600029D8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x600029DC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600029E0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x600029E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600029E8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x600029EC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x600029F0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x600029F4: jal         0x6000055C
    // 0x600029F8: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_4;
    // 0x600029F8: nop

    after_4:
    // 0x600029FC: b           L_60002A28
    // 0x60002A00: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
        goto L_60002A28;
    // 0x60002A00: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_60002A04:
    // 0x60002A04: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60002A08: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x60002A0C: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60002A10: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x60002A14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60002A18: jal         0x600006B8
    // 0x60002A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_title_6B8(rdram, ctx);
        goto after_5;
    // 0x60002A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x60002A20: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60002A24: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
L_60002A28:
    // 0x60002A28: nop

    // 0x60002A2C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x60002A30: bne         $t3, $zero, L_60002A44
    if (ctx->r11 != 0) {
        // 0x60002A34: nop
    
            goto L_60002A44;
    }
    // 0x60002A34: nop

    // 0x60002A38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002A3C: jal         0x600005A4
    // 0x60002A40: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_title_5A4(rdram, ctx);
        goto after_6;
    // 0x60002A40: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60002A44:
    // 0x60002A44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002A48: bne         $s1, $s2, L_60002950
    if (ctx->r17 != ctx->r18) {
        // 0x60002A4C: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60002950;
    }
    // 0x60002A4C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60002A50:
    // 0x60002A50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002A54: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60002A58: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60002A5C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60002A60: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60002A64: jr          $ra
    // 0x60002A68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60002A68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_title_2A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002A6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60002A70: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60002A74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60002A78: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60002A7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60002A80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002A84: blez        $a1, L_60002AEC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60002A88: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60002AEC;
    }
    // 0x60002A88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60002A90:
    // 0x60002A90: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60002A94: nop

    // 0x60002A98: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60002A9C: beq         $t6, $zero, L_60002AB8
    if (ctx->r14 == 0) {
        // 0x60002AA0: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60002AB8;
    }
    // 0x60002AA0: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60002AA4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002AA8: jal         0x60000550
    // 0x60002AAC: nop

    ovl_menu_title_550(rdram, ctx);
        goto after_0;
    // 0x60002AAC: nop

    after_0:
    // 0x60002AB0: b           L_60002AE4
    // 0x60002AB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002AE4;
    // 0x60002AB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002AB8:
    // 0x60002AB8: beq         $t7, $zero, L_60002AD4
    if (ctx->r15 == 0) {
        // 0x60002ABC: nop
    
            goto L_60002AD4;
    }
    // 0x60002ABC: nop

    // 0x60002AC0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002AC4: jal         0x60002900
    // 0x60002AC8: nop

    ovl_menu_title_2900(rdram, ctx);
        goto after_1;
    // 0x60002AC8: nop

    after_1:
    // 0x60002ACC: b           L_60002AE4
    // 0x60002AD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002AE4;
    // 0x60002AD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002AD4:
    // 0x60002AD4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60002AD8: jal         0x600006AC
    // 0x60002ADC: nop

    ovl_menu_title_6AC(rdram, ctx);
        goto after_2;
    // 0x60002ADC: nop

    after_2:
    // 0x60002AE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002AE4:
    // 0x60002AE4: bne         $s1, $s2, L_60002A90
    if (ctx->r17 != ctx->r18) {
        // 0x60002AE8: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60002A90;
    }
    // 0x60002AE8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60002AEC:
    // 0x60002AEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60002AF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002AF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002AF8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002AFC: jr          $ra
    // 0x60002B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60002B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_title_2B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002B08: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x60002B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60002B14: beq         $t6, $zero, L_60002B40
    if (ctx->r14 == 0) {
        // 0x60002B18: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60002B40;
    }
    // 0x60002B18: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60002B1C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x60002B20: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x60002B24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60002B28: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x60002B2C: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60002B30: jal         0x600005B0
    // 0x60002B34: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_title_5B0(rdram, ctx);
        goto after_0;
    // 0x60002B34: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60002B38: b           L_60002B68
    // 0x60002B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002B68;
    // 0x60002B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002B40:
    // 0x60002B40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B44: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60002B48: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60002B4C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60002B50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60002B54: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x60002B58: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60002B5C: jal         0x600005A4
    // 0x60002B60: nop

    ovl_menu_title_5A4(rdram, ctx);
        goto after_1;
    // 0x60002B60: nop

    after_1:
    // 0x60002B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002B68:
    // 0x60002B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002B6C: jr          $ra
    // 0x60002B70: nop

    return;
    // 0x60002B70: nop

;}
RECOMP_FUNC void ovl_menu_title_2B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B74: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60002B78: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x60002B7C: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002B80: addiu       $s4, $s4, 0x4898
    ctx->r20 = ADD32(ctx->r20, 0X4898);
    // 0x60002B84: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x60002B88: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x60002B8C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x60002B90: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x60002B94: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x60002B98: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x60002B9C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002BA0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60002BA4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002BA8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60002BAC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002BB0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60002BB4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002BB8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60002BBC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002BC0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002BC4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002BC8: jal         0x60002920
    // 0x60002BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_menu_title_2920(rdram, ctx);
        goto after_0;
    // 0x60002BCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x60002BD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x60002BD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002BD8: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002BDC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60002BE0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002BE4: jal         0x60000574
    // 0x60002BE8: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_1;
    // 0x60002BE8: nop

    after_1:
    // 0x60002BEC: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002BF0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x60002BF4: jal         0x6000061C
    // 0x60002BF8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    ovl_menu_title_61C(rdram, ctx);
        goto after_2;
    // 0x60002BF8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_2:
    // 0x60002BFC: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60002C00: jal         0x60000604
    // 0x60002C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_604(rdram, ctx);
        goto after_3;
    // 0x60002C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002C08: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60002C0C: nop

    // 0x60002C10: bne         $t6, $zero, L_60002C2C
    if (ctx->r14 != 0) {
        // 0x60002C14: nop
    
            goto L_60002C2C;
    }
    // 0x60002C14: nop

    // 0x60002C18: lw          $a0, 0x48($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X48);
    // 0x60002C1C: jal         0x600005D4
    // 0x60002C20: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_4;
    // 0x60002C20: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_4:
    // 0x60002C24: b           L_60002C3C
    // 0x60002C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60002C3C;
    // 0x60002C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002C2C:
    // 0x60002C2C: lw          $a0, 0x48($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X48);
    // 0x60002C30: jal         0x600005D4
    // 0x60002C34: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_5;
    // 0x60002C34: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_5:
    // 0x60002C38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002C3C:
    // 0x60002C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002C40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C44: jal         0x60000220
    // 0x60002C48: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_220(rdram, ctx);
        goto after_6;
    // 0x60002C48: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_6:
    // 0x60002C4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002C50: lwc1        $f28, 0x4970($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X4970);
    // 0x60002C54: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60002C58: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60002C5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60002C60: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60002C64: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002C68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002C6C: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
L_60002C70:
    // 0x60002C70: jal         0x60000B20
    // 0x60002C74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_B20(rdram, ctx);
        goto after_7;
    // 0x60002C74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x60002C78: andi        $t7, $v0, 0x9000
    ctx->r15 = ctx->r2 & 0X9000;
    // 0x60002C7C: beq         $t7, $zero, L_60002C94
    if (ctx->r15 == 0) {
        // 0x60002C80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60002C94;
    }
    // 0x60002C80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60002C84: jal         0x60000244
    // 0x60002C88: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_title_244(rdram, ctx);
        goto after_8;
    // 0x60002C88: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_8:
    // 0x60002C8C: b           L_60002DE8
    // 0x60002C90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002DE8;
    // 0x60002C90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002C94:
    // 0x60002C94: andi        $t8, $v1, 0x4000
    ctx->r24 = ctx->r3 & 0X4000;
    // 0x60002C98: beq         $t8, $zero, L_60002CB4
    if (ctx->r24 == 0) {
        // 0x60002C9C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60002CB4;
    }
    // 0x60002C9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002CA0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x60002CA4: jal         0x60000244
    // 0x60002CA8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_title_244(rdram, ctx);
        goto after_9;
    // 0x60002CA8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_9:
    // 0x60002CAC: b           L_60002DEC
    // 0x60002CB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60002DEC;
    // 0x60002CB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002CB4:
    // 0x60002CB4: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x60002CB8: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x60002CBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60002CC0: jal         0x60000B14
    // 0x60002CC4: addu        $s0, $s4, $t9
    ctx->r16 = ADD32(ctx->r20, ctx->r25);
    ovl_menu_title_B14(rdram, ctx);
        goto after_10;
    // 0x60002CC4: addu        $s0, $s4, $t9
    ctx->r16 = ADD32(ctx->r20, ctx->r25);
    after_10:
    // 0x60002CC8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002CCC: jal         0x60000310
    // 0x60002CD0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    ovl_menu_title_310(rdram, ctx);
        goto after_11;
    // 0x60002CD0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_11:
    // 0x60002CD4: mul.s       $f22, $f0, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x60002CD8: jal         0x6000031C
    // 0x60002CDC: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    ovl_menu_title_31C(rdram, ctx);
        goto after_12;
    // 0x60002CDC: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_12:
    // 0x60002CE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60002CE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002CE8: add.s       $f8, $f22, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x60002CEC: add.s       $f2, $f24, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x60002CF0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60002CF4: c.le.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl <= ctx->f2.fl;
    // 0x60002CF8: mul.s       $f12, $f0, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x60002CFC: bc1f        L_60002D0C
    if (!c1cs) {
        // 0x60002D00: nop
    
            goto L_60002D0C;
    }
    // 0x60002D00: nop

    // 0x60002D04: b           L_60002D34
    // 0x60002D08: sub.s       $f24, $f2, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f2.fl - ctx->f26.fl;
        goto L_60002D34;
    // 0x60002D08: sub.s       $f24, $f2, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f2.fl - ctx->f26.fl;
L_60002D0C:
    // 0x60002D0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60002D10: nop

    // 0x60002D14: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x60002D18: nop

    // 0x60002D1C: bc1f        L_60002D2C
    if (!c1cs) {
        // 0x60002D20: nop
    
            goto L_60002D2C;
    }
    // 0x60002D20: nop

    // 0x60002D24: b           L_60002D30
    // 0x60002D28: add.s       $f0, $f2, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f26.fl;
        goto L_60002D30;
    // 0x60002D28: add.s       $f0, $f2, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f26.fl;
L_60002D2C:
    // 0x60002D2C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_60002D30:
    // 0x60002D30: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_60002D34:
    // 0x60002D34: add.s       $f10, $f12, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x60002D38: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x60002D3C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60002D40: jal         0x60000574
    // 0x60002D44: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_13;
    // 0x60002D44: nop

    after_13:
    // 0x60002D48: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x60002D4C: nop

    // 0x60002D50: beq         $t0, $zero, L_60002DD8
    if (ctx->r8 == 0) {
        // 0x60002D54: nop
    
            goto L_60002DD8;
    }
    // 0x60002D54: nop

    // 0x60002D58: bne         $s1, $zero, L_60002D9C
    if (ctx->r17 != 0) {
        // 0x60002D5C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_60002D9C;
    }
    // 0x60002D5C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x60002D60: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x60002D64: bne         $s2, $at, L_60002D9C
    if (ctx->r18 != ctx->r1) {
        // 0x60002D68: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_60002D9C;
    }
    // 0x60002D68: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60002D6C: jal         0x60000244
    // 0x60002D70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    ovl_menu_title_244(rdram, ctx);
        goto after_14;
    // 0x60002D70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_14:
    // 0x60002D74: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002D78: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002D7C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002D80: mflo        $t1
    ctx->r9 = lo;
    // 0x60002D84: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x60002D88: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    // 0x60002D8C: jal         0x60000574
    // 0x60002D90: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_15;
    // 0x60002D90: nop

    after_15:
    // 0x60002D94: b           L_60002DD8
    // 0x60002D98: nop

        goto L_60002DD8;
    // 0x60002D98: nop

L_60002D9C:
    // 0x60002D9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002DA0: bne         $s1, $at, L_60002DD8
    if (ctx->r17 != ctx->r1) {
        // 0x60002DA4: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_60002DD8;
    }
    // 0x60002DA4: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x60002DA8: bne         $s2, $at, L_60002DD8
    if (ctx->r18 != ctx->r1) {
        // 0x60002DAC: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_60002DD8;
    }
    // 0x60002DAC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60002DB0: jal         0x60000244
    // 0x60002DB4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    ovl_menu_title_244(rdram, ctx);
        goto after_16;
    // 0x60002DB4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    after_16:
    // 0x60002DB8: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002DBC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002DC0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60002DC4: mflo        $t3
    ctx->r11 = lo;
    // 0x60002DC8: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x60002DCC: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    // 0x60002DD0: jal         0x60000574
    // 0x60002DD4: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_17;
    // 0x60002DD4: nop

    after_17:
L_60002DD8:
    // 0x60002DD8: jal         0x6000085C
    // 0x60002DDC: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_18;
    // 0x60002DDC: nop

    after_18:
    // 0x60002DE0: b           L_60002C70
    // 0x60002DE4: nop

        goto L_60002C70;
    // 0x60002DE4: nop

L_60002DE8:
    // 0x60002DE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60002DEC:
    // 0x60002DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002DF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002DF4: jal         0x60000238
    // 0x60002DF8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_238(rdram, ctx);
        goto after_19;
    // 0x60002DF8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_19:
    // 0x60002DFC: jal         0x60000208
    // 0x60002E00: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_20;
    // 0x60002E00: nop

    after_20:
    // 0x60002E04: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002E08: jal         0x60002A6C
    // 0x60002E0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_menu_title_2A6C(rdram, ctx);
        goto after_21;
    // 0x60002E0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_21:
    // 0x60002E10: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x60002E14: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x60002E18: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x60002E1C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002E20: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002E24: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002E28: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002E2C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002E30: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002E34: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002E38: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002E3C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002E40: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002E44: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x60002E48: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x60002E4C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x60002E50: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x60002E54: jr          $ra
    // 0x60002E58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60002E58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_menu_title_2E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E5C: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x60002E60: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x60002E64: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x60002E68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002E6C: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x60002E70: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x60002E74: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x60002E78: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x60002E7C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x60002E80: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x60002E84: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x60002E88: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x60002E8C: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60002E90: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x60002E94: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002E98: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x60002E9C: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002EA0: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60002EA4: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002EA8: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x60002EAC: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002EB0: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x60002EB4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002EB8: jal         0x60000BEC
    // 0x60002EBC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    ovl_menu_title_BEC(rdram, ctx);
        goto after_0;
    // 0x60002EBC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60002EC0: sltiu       $at, $s0, 0x5
    ctx->r1 = ctx->r16 < 0X5 ? 1 : 0;
    // 0x60002EC4: beq         $at, $zero, L_600043E0
    if (ctx->r1 == 0) {
        // 0x60002EC8: sw          $v0, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->r2;
            goto L_600043E0;
    }
    // 0x60002EC8: sw          $v0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r2;
    // 0x60002ECC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x60002ED0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002ED4: addu        $at, $at, $t6
    gpr jr_addend_60002EE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60002ED8: lw          $t6, 0x4974($at)
    ctx->r14 = ADD32(ctx->r1, 0X4974);
    // 0x60002EDC: nop

    // 0x60002EE0: jr          $t6
    // 0x60002EE4: nop

    switch (jr_addend_60002EE0 >> 2) {
        case 0: goto L_60002EE8; break;
        case 1: goto L_60003130; break;
        case 2: goto L_60003A4C; break;
        case 3: goto L_600043D0; break;
        case 4: goto L_600043D0; break;
        default: switch_error(__func__, 0x60002EE0, 0x60004974);
    }
    // 0x60002EE4: nop

L_60002EE8:
    // 0x60002EE8: jal         0x60000850
    // 0x60002EEC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_menu_title_850(rdram, ctx);
        goto after_1;
    // 0x60002EEC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60002EF0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60002EF4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60002EF8: jal         0x600001C0
    // 0x60002EFC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_menu_title_1C0(rdram, ctx);
        goto after_2;
    // 0x60002EFC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x60002F00: addiu       $a0, $zero, 0xC3D
    ctx->r4 = ADD32(0, 0XC3D);
    // 0x60002F04: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60002F08: jal         0x60000538
    // 0x60002F0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_538(rdram, ctx);
        goto after_3;
    // 0x60002F0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x60002F10: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60002F14: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002F18: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x60002F1C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002F20: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002F24: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002F28: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60002F2C: jal         0x6000055C
    // 0x60002F30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_title_55C(rdram, ctx);
        goto after_4;
    // 0x60002F30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x60002F34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002F3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002F40: jal         0x60000220
    // 0x60002F44: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_220(rdram, ctx);
        goto after_5;
    // 0x60002F44: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_5:
    // 0x60002F48: jal         0x60000208
    // 0x60002F4C: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_6;
    // 0x60002F4C: nop

    after_6:
    // 0x60002F50: jal         0x60000850
    // 0x60002F54: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_title_850(rdram, ctx);
        goto after_7;
    // 0x60002F54: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x60002F58: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60002F5C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60002F60: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x60002F64: jal         0x60000238
    // 0x60002F68: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_238(rdram, ctx);
        goto after_8;
    // 0x60002F68: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_8:
    // 0x60002F6C: jal         0x60000208
    // 0x60002F70: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_9;
    // 0x60002F70: nop

    after_9:
    // 0x60002F74: jal         0x60000550
    // 0x60002F78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_550(rdram, ctx);
        goto after_10;
    // 0x60002F78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x60002F7C: addiu       $a0, $zero, 0x98C
    ctx->r4 = ADD32(0, 0X98C);
    // 0x60002F80: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60002F84: jal         0x60000538
    // 0x60002F88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_538(rdram, ctx);
        goto after_11;
    // 0x60002F88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x60002F8C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002F90: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60002F94: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60002F98: jal         0x6000055C
    // 0x60002F9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_menu_title_55C(rdram, ctx);
        goto after_12;
    // 0x60002F9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x60002FA0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60002FA4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60002FA8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x60002FAC: jal         0x60000220
    // 0x60002FB0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_220(rdram, ctx);
        goto after_13;
    // 0x60002FB0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_13:
    // 0x60002FB4: jal         0x60000208
    // 0x60002FB8: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_14;
    // 0x60002FB8: nop

    after_14:
    // 0x60002FBC: jal         0x60000850
    // 0x60002FC0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_title_850(rdram, ctx);
        goto after_15;
    // 0x60002FC0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_15:
    // 0x60002FC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002FCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002FD0: jal         0x60000238
    // 0x60002FD4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_238(rdram, ctx);
        goto after_16;
    // 0x60002FD4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_16:
    // 0x60002FD8: jal         0x60000208
    // 0x60002FDC: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_17;
    // 0x60002FDC: nop

    after_17:
    // 0x60002FE0: jal         0x60000550
    // 0x60002FE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_550(rdram, ctx);
        goto after_18;
    // 0x60002FE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x60002FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002FF0: jal         0x600001C0
    // 0x60002FF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_1C0(rdram, ctx);
        goto after_19;
    // 0x60002FF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x60002FF8: jal         0x60000118
    // 0x60002FFC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_118(rdram, ctx);
        goto after_20;
    // 0x60002FFC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_20:
    // 0x60003000: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60003004: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x60003008: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x6000300C: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x60003010: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60003014: addiu       $a3, $zero, 0x2D
    ctx->r7 = ADD32(0, 0X2D);
    // 0x60003018: jal         0x600006B8
    // 0x6000301C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_title_6B8(rdram, ctx);
        goto after_21;
    // 0x6000301C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x60003020: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60003024: addiu       $a0, $zero, 0x976
    ctx->r4 = ADD32(0, 0X976);
    // 0x60003028: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x6000302C: jal         0x60000538
    // 0x60003030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_538(rdram, ctx);
        goto after_22;
    // 0x60003030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x60003034: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003038: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000303C: jal         0x600005A4
    // 0x60003040: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_title_5A4(rdram, ctx);
        goto after_23;
    // 0x60003040: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_23:
    // 0x60003044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003048: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x6000304C: jal         0x6000061C
    // 0x60003050: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_title_61C(rdram, ctx);
        goto after_24;
    // 0x60003050: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_24:
    // 0x60003054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003058: jal         0x60000604
    // 0x6000305C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_604(rdram, ctx);
        goto after_25;
    // 0x6000305C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x60003060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003064: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x60003068: jal         0x6000055C
    // 0x6000306C: lui         $a2, 0x42CC
    ctx->r6 = S32(0X42CC << 16);
    ovl_menu_title_55C(rdram, ctx);
        goto after_26;
    // 0x6000306C: lui         $a2, 0x42CC
    ctx->r6 = S32(0X42CC << 16);
    after_26:
    // 0x60003070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000307C: jal         0x60000220
    // 0x60003080: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_220(rdram, ctx);
        goto after_27;
    // 0x60003080: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_27:
    // 0x60003084: jal         0x60000208
    // 0x60003088: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_28;
    // 0x60003088: nop

    after_28:
    // 0x6000308C: jal         0x60000850
    // 0x60003090: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_title_850(rdram, ctx);
        goto after_29;
    // 0x60003090: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_29:
    // 0x60003094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000309C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600030A0: jal         0x60000238
    // 0x600030A4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_menu_title_238(rdram, ctx);
        goto after_30;
    // 0x600030A4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_30:
    // 0x600030A8: jal         0x60000208
    // 0x600030AC: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_31;
    // 0x600030AC: nop

    after_31:
    // 0x600030B0: jal         0x60000550
    // 0x600030B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_550(rdram, ctx);
        goto after_32;
    // 0x600030B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_32:
    // 0x600030B8: jal         0x60000550
    // 0x600030BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_title_550(rdram, ctx);
        goto after_33;
    // 0x600030BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x600030C0: jal         0x60000124
    // 0x600030C4: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_124(rdram, ctx);
        goto after_34;
    // 0x600030C4: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_34:
    // 0x600030C8: jal         0x60000B2C
    // 0x600030CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_B2C(rdram, ctx);
        goto after_35;
    // 0x600030CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x600030D0: bne         $v0, $zero, L_60003120
    if (ctx->r2 != 0) {
        // 0x600030D4: nop
    
            goto L_60003120;
    }
    // 0x600030D4: nop

    // 0x600030D8: jal         0x60000118
    // 0x600030DC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_118(rdram, ctx);
        goto after_36;
    // 0x600030DC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_36:
    // 0x600030E0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x600030E4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x600030E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x600030EC: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    // 0x600030F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x600030F4: jal         0x600006B8
    // 0x600030F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_title_6B8(rdram, ctx);
        goto after_37;
    // 0x600030F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_37:
    // 0x600030FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003108: jal         0x60000220
    // 0x6000310C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    ovl_menu_title_220(rdram, ctx);
        goto after_38;
    // 0x6000310C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_38:
L_60003110:
    // 0x60003110: jal         0x6000085C
    // 0x60003114: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_39;
    // 0x60003114: nop

    after_39:
    // 0x60003118: b           L_60003110
    // 0x6000311C: nop

        goto L_60003110;
    // 0x6000311C: nop

L_60003120:
    // 0x60003120: jal         0x60000850
    // 0x60003124: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_title_850(rdram, ctx);
        goto after_40;
    // 0x60003124: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_40:
    // 0x60003128: b           L_600043E4
    // 0x6000312C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_600043E4;
    // 0x6000312C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60003130:
    // 0x60003130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000313C: jal         0x60000220
    // 0x60003140: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_220(rdram, ctx);
        goto after_41;
    // 0x60003140: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_41:
    // 0x60003144: jal         0x60000118
    // 0x60003148: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_118(rdram, ctx);
        goto after_42;
    // 0x60003148: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_42:
    // 0x6000314C: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x60003150: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003154: sw          $v0, 0x49C0($at)
    MEM_W(0X49C0, ctx->r1) = ctx->r2;
    // 0x60003158: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x6000315C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003160: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x60003164: beq         $t0, $zero, L_6000317C
    if (ctx->r8 == 0) {
        // 0x60003168: lui         $s4, 0x6000
        ctx->r20 = S32(0X6000 << 16);
            goto L_6000317C;
    }
    // 0x60003168: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x6000316C: addiu       $s4, $s4, 0x4450
    ctx->r20 = ADD32(ctx->r20, 0X4450);
    // 0x60003170: addiu       $t1, $zero, 0x932
    ctx->r9 = ADD32(0, 0X932);
    // 0x60003174: b           L_6000318C
    // 0x60003178: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
        goto L_6000318C;
    // 0x60003178: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
L_6000317C:
    // 0x6000317C: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60003180: addiu       $s4, $s4, 0x4450
    ctx->r20 = ADD32(ctx->r20, 0X4450);
    // 0x60003184: addiu       $t2, $zero, 0xC00
    ctx->r10 = ADD32(0, 0XC00);
    // 0x60003188: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
L_6000318C:
    // 0x6000318C: jal         0x60002920
    // 0x60003190: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_menu_title_2920(rdram, ctx);
        goto after_43;
    // 0x60003190: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_43:
    // 0x60003194: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003198: addiu       $a0, $a0, 0x4748
    ctx->r4 = ADD32(ctx->r4, 0X4748);
    // 0x6000319C: jal         0x60002920
    // 0x600031A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_title_2920(rdram, ctx);
        goto after_44;
    // 0x600031A0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_44:
    // 0x600031A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x600031A8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600031AC: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x600031B0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x600031B4: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x600031B8: jal         0x60000574
    // 0x600031BC: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_45;
    // 0x600031BC: nop

    after_45:
    // 0x600031C0: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x600031C4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x600031C8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x600031CC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x600031D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x600031D4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600031D8: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x600031DC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031E0: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x600031E4: addiu       $t3, $t3, 0x2864
    ctx->r11 = ADD32(ctx->r11, 0X2864);
    // 0x600031E8: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x600031EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600031F0: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    // 0x600031F4: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    // 0x600031F8: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x600031FC: addiu       $fp, $zero, 0x13
    ctx->r30 = ADD32(0, 0X13);
    // 0x60003200: addiu       $s7, $sp, 0x110
    ctx->r23 = ADD32(ctx->r29, 0X110);
    // 0x60003204: addiu       $s6, $sp, 0x114
    ctx->r22 = ADD32(ctx->r29, 0X114);
    // 0x60003208: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x6000320C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
L_60003210:
    // 0x60003210: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60003214: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60003218: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000321C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60003220: jal         0x6000064C
    // 0x60003224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_64C(rdram, ctx);
        goto after_46;
    // 0x60003224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_46:
    // 0x60003228: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x6000322C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003230: addiu       $t4, $zero, 0x138
    ctx->r12 = ADD32(0, 0X138);
    // 0x60003234: addiu       $t5, $zero, 0xE8
    ctx->r13 = ADD32(0, 0XE8);
    // 0x60003238: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x6000323C: sw          $t4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r12;
    // 0x60003240: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x60003244: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x60003248: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x6000324C: jal         0x6000085C
    // 0x60003250: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    ovl_menu_title_85C(rdram, ctx);
        goto after_47;
    // 0x60003250: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    after_47:
    // 0x60003254: jal         0x60000550
    // 0x60003258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_550(rdram, ctx);
        goto after_48;
    // 0x60003258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_48:
    // 0x6000325C: jal         0x6000110C
    // 0x60003260: nop

    ovl_menu_title_110C(rdram, ctx);
        goto after_49;
    // 0x60003260: nop

    after_49:
    // 0x60003264: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x60003268: nop

    // 0x6000326C: lbu         $v1, 0x3($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X3);
    // 0x60003270: nop

    // 0x60003274: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x60003278: beq         $t7, $zero, L_600032C4
    if (ctx->r15 == 0) {
        // 0x6000327C: andi        $t1, $v1, 0x1
        ctx->r9 = ctx->r3 & 0X1;
            goto L_600032C4;
    }
    // 0x6000327C: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
    // 0x60003280: jal         0x6000034C
    // 0x60003284: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_50;
    // 0x60003284: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_50:
    // 0x60003288: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x6000328C: bne         $at, $zero, L_600032A8
    if (ctx->r1 != 0) {
        // 0x60003290: addiu       $t8, $zero, 0xF
        ctx->r24 = ADD32(0, 0XF);
            goto L_600032A8;
    }
    // 0x60003290: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x60003294: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x60003298: sw          $t8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r24;
    // 0x6000329C: lbu         $v1, 0x3($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X3);
    // 0x600032A0: b           L_600032C4
    // 0x600032A4: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
        goto L_600032C4;
    // 0x600032A4: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
L_600032A8:
    // 0x600032A8: jal         0x6000034C
    // 0x600032AC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_title_34C(rdram, ctx);
        goto after_51;
    // 0x600032AC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_51:
    // 0x600032B0: lw          $t0, 0xF0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF0);
    // 0x600032B4: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x600032B8: lbu         $v1, 0x3($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X3);
    // 0x600032BC: nop

    // 0x600032C0: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
L_600032C4:
    // 0x600032C4: beq         $t1, $zero, L_60003318
    if (ctx->r9 == 0) {
        // 0x600032C8: lw          $a0, 0xD8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XD8);
            goto L_60003318;
    }
    // 0x600032C8: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x600032CC: jal         0x6000034C
    // 0x600032D0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_52;
    // 0x600032D0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_52:
    // 0x600032D4: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x600032D8: bne         $at, $zero, L_60003308
    if (ctx->r1 != 0) {
        // 0x600032DC: nop
    
            goto L_60003308;
    }
    // 0x600032DC: nop

    // 0x600032E0: jal         0x6000034C
    // 0x600032E4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_menu_title_34C(rdram, ctx);
        goto after_53;
    // 0x600032E4: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_53:
    // 0x600032E8: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x600032EC: bne         $at, $zero, L_60003300
    if (ctx->r1 != 0) {
        // 0x600032F0: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_60003300;
    }
    // 0x600032F0: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x600032F4: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x600032F8: b           L_60003314
    // 0x600032FC: sw          $t2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r10;
        goto L_60003314;
    // 0x600032FC: sw          $t2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r10;
L_60003300:
    // 0x60003300: b           L_60003314
    // 0x60003304: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
        goto L_60003314;
    // 0x60003304: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
L_60003308:
    // 0x60003308: jal         0x6000034C
    // 0x6000330C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_title_34C(rdram, ctx);
        goto after_54;
    // 0x6000330C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_54:
    // 0x60003310: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
L_60003314:
    // 0x60003314: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
L_60003318:
    // 0x60003318: jal         0x60001C20
    // 0x6000331C: nop

    ovl_menu_title_1C20(rdram, ctx);
        goto after_55;
    // 0x6000331C: nop

    after_55:
    // 0x60003320: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x60003324: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000332C: jal         0x60000994
    // 0x60003330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_title_994(rdram, ctx);
        goto after_56;
    // 0x60003330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_56:
    // 0x60003334: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003338: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x6000333C: jal         0x600005A4
    // 0x60003340: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_title_5A4(rdram, ctx);
        goto after_57;
    // 0x60003340: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_57:
    // 0x60003344: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60003348: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x6000334C: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x60003350: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x60003354: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x60003358: jal         0x6000058C
    // 0x6000335C: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    ovl_menu_title_58C(rdram, ctx);
        goto after_58;
    // 0x6000335C: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    after_58:
    // 0x60003360: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003364: jal         0x60000640
    // 0x60003368: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_title_640(rdram, ctx);
        goto after_59;
    // 0x60003368: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_59:
    // 0x6000336C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003370: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x60003374: jal         0x6000061C
    // 0x60003378: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_title_61C(rdram, ctx);
        goto after_60;
    // 0x60003378: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_60:
    // 0x6000337C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003380: jal         0x600005A4
    // 0x60003384: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_title_5A4(rdram, ctx);
        goto after_61;
    // 0x60003384: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_61:
    // 0x60003388: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_6000338C:
    // 0x6000338C: slti        $at, $s0, 0x385
    ctx->r1 = SIGNED(ctx->r16) < 0X385 ? 1 : 0;
    // 0x60003390: bne         $at, $zero, L_600033E8
    if (ctx->r1 != 0) {
        // 0x60003394: nop
    
            goto L_600033E8;
    }
    // 0x60003394: nop

    // 0x60003398: jal         0x60000268
    // 0x6000339C: nop

    ovl_menu_title_268(rdram, ctx);
        goto after_62;
    // 0x6000339C: nop

    after_62:
    // 0x600033A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033A4: addiu       $a0, $a0, 0x4748
    ctx->r4 = ADD32(ctx->r4, 0X4748);
    // 0x600033A8: jal         0x60002A6C
    // 0x600033AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_title_2A6C(rdram, ctx);
        goto after_63;
    // 0x600033AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_63:
    // 0x600033B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033B4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x600033B8: lw          $a0, 0x49C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X49C8);
    // 0x600033BC: jal         0x60000DA8
    // 0x600033C0: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    ovl_menu_title_DA8(rdram, ctx);
        goto after_64;
    // 0x600033C0: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    after_64:
    // 0x600033C4: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x600033C8: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x600033CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600033D0: jal         0x60000F34
    // 0x600033D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_65;
    // 0x600033D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_65:
    // 0x600033D8: jal         0x600009A0
    // 0x600033DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_9A0(rdram, ctx);
        goto after_66;
    // 0x600033DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_66:
    // 0x600033E0: b           L_60003A14
    // 0x600033E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60003A14;
    // 0x600033E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_600033E8:
    // 0x600033E8: jal         0x60000B20
    // 0x600033EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_B20(rdram, ctx);
        goto after_67;
    // 0x600033EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_67:
    // 0x600033F0: andi        $t5, $v0, 0x1000
    ctx->r13 = ctx->r2 & 0X1000;
    // 0x600033F4: beq         $t5, $zero, L_60003480
    if (ctx->r13 == 0) {
        // 0x600033F8: nop
    
            goto L_60003480;
    }
    // 0x600033F8: nop

    // 0x600033FC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60003400: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60003404: jal         0x60000244
    // 0x60003408: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    ovl_menu_title_244(rdram, ctx);
        goto after_68;
    // 0x60003408: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    after_68:
    // 0x6000340C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003410: addiu       $a0, $a0, 0x4748
    ctx->r4 = ADD32(ctx->r4, 0X4748);
    // 0x60003414: jal         0x60002A6C
    // 0x60003418: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_title_2A6C(rdram, ctx);
        goto after_69;
    // 0x60003418: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_69:
    // 0x6000341C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003420: lw          $a0, 0x49C8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X49C8);
    // 0x60003424: jal         0x60000DA8
    // 0x60003428: nop

    ovl_menu_title_DA8(rdram, ctx);
        goto after_70;
    // 0x60003428: nop

    after_70:
    // 0x6000342C: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60003430: lw          $a1, 0x4AD4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4AD4);
    // 0x60003434: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60003438: jal         0x60000F34
    // 0x6000343C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_F34(rdram, ctx);
        goto after_71;
    // 0x6000343C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_71:
    // 0x60003440: jal         0x600009A0
    // 0x60003444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_9A0(rdram, ctx);
        goto after_72;
    // 0x60003444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_72:
    // 0x60003448: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x6000344C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x60003450: jal         0x60002B04
    // 0x60003454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_2B04(rdram, ctx);
        goto after_73;
    // 0x60003454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_73:
    // 0x60003458: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x6000345C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_60003460:
    // 0x60003460: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60003464: jal         0x60002B04
    // 0x60003468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_2B04(rdram, ctx);
        goto after_74;
    // 0x60003468: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_74:
    // 0x6000346C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60003470: bne         $s2, $s5, L_60003460
    if (ctx->r18 != ctx->r21) {
        // 0x60003474: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60003460;
    }
    // 0x60003474: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003478: b           L_60003530
    // 0x6000347C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
        goto L_60003530;
    // 0x6000347C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
L_60003480:
    // 0x60003480: jal         0x60000310
    // 0x60003484: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    ovl_menu_title_310(rdram, ctx);
        goto after_75;
    // 0x60003484: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_75:
    // 0x60003488: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000348C: lwc1        $f4, 0x4988($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4988);
    // 0x60003490: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003498: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000349C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600034A0: add.s       $f30, $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f6.fl;
    // 0x600034A4: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600034A8: c.le.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl <= ctx->f30.fl;
    // 0x600034AC: mul.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x600034B0: bc1f        L_600034CC
    if (!c1cs) {
        // 0x600034B4: addiu       $t7, $t7, 0x4748
        ctx->r15 = ADD32(ctx->r15, 0X4748);
            goto L_600034CC;
    }
    // 0x600034B4: addiu       $t7, $t7, 0x4748
    ctx->r15 = ADD32(ctx->r15, 0X4748);
    // 0x600034B8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600034BC: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x600034C0: bne         $at, $zero, L_600034D0
    if (ctx->r1 != 0) {
        // 0x600034C4: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_600034D0;
    }
    // 0x600034C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600034C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_600034CC:
    // 0x600034CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
L_600034D0:
    // 0x600034D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600034D4: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x600034D8: c.le.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl <= ctx->f30.fl;
    // 0x600034DC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x600034E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x600034E4: bc1f        L_600034FC
    if (!c1cs) {
        // 0x600034E8: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_600034FC;
    }
    // 0x600034E8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x600034EC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600034F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600034F4: nop

    // 0x600034F8: sub.s       $f30, $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f18.fl;
L_600034FC:
    // 0x600034FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003504: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x60003508: add.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x6000350C: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
    // 0x60003510: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003514: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60003518: jal         0x60000574
    // 0x6000351C: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_76;
    // 0x6000351C: nop

    after_76:
    // 0x60003520: jal         0x6000085C
    // 0x60003524: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_77;
    // 0x60003524: nop

    after_77:
    // 0x60003528: b           L_6000338C
    // 0x6000352C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_6000338C;
    // 0x6000352C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_60003530:
    // 0x60003530: addiu       $s1, $s1, 0x4478
    ctx->r17 = ADD32(ctx->r17, 0X4478);
L_60003534:
    // 0x60003534: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x60003538: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x6000353C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60003540: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x60003544: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003548: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x6000354C: jal         0x6000055C
    // 0x60003550: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_78;
    // 0x60003550: nop

    after_78:
    // 0x60003554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003558: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x6000355C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003560: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003564: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60003568: jal         0x60000574
    // 0x6000356C: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_79;
    // 0x6000356C: nop

    after_79:
    // 0x60003570: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003574: jal         0x600005D4
    // 0x60003578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_80;
    // 0x60003578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_80:
    // 0x6000357C: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60003580: addiu       $t9, $t9, 0x44DC
    ctx->r25 = ADD32(ctx->r25, 0X44DC);
    // 0x60003584: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x60003588: bne         $s1, $t9, L_60003534
    if (ctx->r17 != ctx->r25) {
        // 0x6000358C: nop
    
            goto L_60003534;
    }
    // 0x6000358C: nop

    // 0x60003590: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_60003594:
    // 0x60003594: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003598: addiu       $s1, $s1, 0x4478
    ctx->r17 = ADD32(ctx->r17, 0X4478);
    // 0x6000359C: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_600035A0:
    // 0x600035A0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600035A4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x600035A8: jal         0x60000568
    // 0x600035AC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    ovl_menu_title_568(rdram, ctx);
        goto after_81;
    // 0x600035AC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_81:
    // 0x600035B0: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x600035B4: lwc1        $f2, 0x110($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X110);
    // 0x600035B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600035BC: lwc1        $f14, 0x114($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X114);
    // 0x600035C0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600035C4: sub.s       $f18, $f10, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x600035C8: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x600035CC: mul.s       $f4, $f26, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f18.fl);
    // 0x600035D0: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x600035D4: nop

    // 0x600035D8: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x600035DC: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x600035E0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x600035E4: jal         0x6000055C
    // 0x600035E8: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    ovl_menu_title_55C(rdram, ctx);
        goto after_82;
    // 0x600035E8: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    after_82:
    // 0x600035EC: bne         $s2, $fp, L_60003620
    if (ctx->r18 != ctx->r30) {
        // 0x600035F0: sll         $a1, $s2, 2
        ctx->r5 = S32(ctx->r18 << 2);
            goto L_60003620;
    }
    // 0x600035F0: sll         $a1, $s2, 2
    ctx->r5 = S32(ctx->r18 << 2);
    // 0x600035F4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600035F8: jal         0x600005D4
    // 0x600035FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_83;
    // 0x600035FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_83:
    // 0x60003600: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003604: jal         0x600005D4
    // 0x60003608: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_84;
    // 0x60003608: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_84:
    // 0x6000360C: lw          $a0, 0x20($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X20);
    // 0x60003610: jal         0x600005D4
    // 0x60003614: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_85;
    // 0x60003614: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_85:
    // 0x60003618: b           L_6000365C
    // 0x6000361C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_6000365C;
    // 0x6000361C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60003620:
    // 0x60003620: sll         $t0, $s2, 3
    ctx->r8 = S32(ctx->r18 << 3);
    // 0x60003624: subu        $t0, $t0, $s2
    ctx->r8 = SUB32(ctx->r8, ctx->r18);
    // 0x60003628: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x6000362C: subu        $a1, $a1, $s2
    ctx->r5 = SUB32(ctx->r5, ctx->r18);
    // 0x60003630: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x60003634: subu        $s0, $t1, $t0
    ctx->r16 = SUB32(ctx->r9, ctx->r8);
    // 0x60003638: jal         0x600005D4
    // 0x6000363C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_86;
    // 0x6000363C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_86:
    // 0x60003640: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003644: jal         0x600005D4
    // 0x60003648: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_87;
    // 0x60003648: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_87:
    // 0x6000364C: lw          $a0, 0x20($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X20);
    // 0x60003650: jal         0x600005D4
    // 0x60003654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_88;
    // 0x60003654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_88:
    // 0x60003658: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_6000365C:
    // 0x6000365C: bne         $s3, $s5, L_600035A0
    if (ctx->r19 != ctx->r21) {
        // 0x60003660: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_600035A0;
    }
    // 0x60003660: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x60003664: jal         0x6000085C
    // 0x60003668: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_89;
    // 0x60003668: nop

    after_89:
    // 0x6000366C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60003670: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x60003674: bne         $at, $zero, L_60003594
    if (ctx->r1 != 0) {
        // 0x60003678: nop
    
            goto L_60003594;
    }
    // 0x60003678: nop

    // 0x6000367C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003680: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60003684: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60003688: addiu       $s0, $s0, 0x4450
    ctx->r16 = ADD32(ctx->r16, 0X4450);
    // 0x6000368C: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x60003690: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
L_60003694:
    // 0x60003694: jal         0x60000310
    // 0x60003698: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    ovl_menu_title_310(rdram, ctx);
        goto after_90;
    // 0x60003698: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_90:
    // 0x6000369C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600036A0: lwc1        $f10, 0x498C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X498C);
    // 0x600036A4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x600036A8: mul.s       $f14, $f0, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x600036AC: jal         0x6000031C
    // 0x600036B0: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
    ovl_menu_title_31C(rdram, ctx);
        goto after_91;
    // 0x600036B0: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
    after_91:
    // 0x600036B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600036B8: lwc1        $f18, 0x4990($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4990);
    // 0x600036BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x600036C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600036C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600036C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600036CC: add.s       $f12, $f30, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f30.fl + ctx->f4.fl;
    // 0x600036D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600036D4: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x600036D8: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x600036DC: bc1f        L_600036F0
    if (!c1cs) {
        // 0x600036E0: nop
    
            goto L_600036F0;
    }
    // 0x600036E0: nop

    // 0x600036E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600036E8: b           L_6000371C
    // 0x600036EC: sub.s       $f30, $f12, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f12.fl - ctx->f8.fl;
        goto L_6000371C;
    // 0x600036EC: sub.s       $f30, $f12, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f12.fl - ctx->f8.fl;
L_600036F0:
    // 0x600036F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600036F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600036F8: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x600036FC: nop

    // 0x60003700: bc1f        L_60003714
    if (!c1cs) {
        // 0x60003704: nop
    
            goto L_60003714;
    }
    // 0x60003704: nop

    // 0x60003708: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000370C: b           L_60003718
    // 0x60003710: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_60003718;
    // 0x60003710: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
L_60003714:
    // 0x60003714: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_60003718:
    // 0x60003718: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
L_6000371C:
    // 0x6000371C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003720: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003724: lwc1        $f14, 0x114($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X114);
    // 0x60003728: add.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x6000372C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x60003730: add.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x60003734: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60003738: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x6000373C: jal         0x60000574
    // 0x60003740: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    ovl_menu_title_574(rdram, ctx);
        goto after_92;
    // 0x60003740: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    after_92:
    // 0x60003744: jal         0x60000B20
    // 0x60003748: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_B20(rdram, ctx);
        goto after_93;
    // 0x60003748: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_93:
    // 0x6000374C: andi        $t2, $v0, 0x9000
    ctx->r10 = ctx->r2 & 0X9000;
    // 0x60003750: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003754: beq         $t2, $zero, L_6000376C
    if (ctx->r10 == 0) {
        // 0x60003758: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_6000376C;
    }
    // 0x60003758: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000375C: jal         0x60000244
    // 0x60003760: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_title_244(rdram, ctx);
        goto after_94;
    // 0x60003760: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_94:
    // 0x60003764: b           L_60003890
    // 0x60003768: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
        goto L_60003890;
    // 0x60003768: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
L_6000376C:
    // 0x6000376C: andi        $t3, $v1, 0x4000
    ctx->r11 = ctx->r3 & 0X4000;
    // 0x60003770: beq         $t3, $zero, L_6000378C
    if (ctx->r11 == 0) {
        // 0x60003774: andi        $t5, $v1, 0x800
        ctx->r13 = ctx->r3 & 0X800;
            goto L_6000378C;
    }
    // 0x60003774: andi        $t5, $v1, 0x800
    ctx->r13 = ctx->r3 & 0X800;
    // 0x60003778: jal         0x60000244
    // 0x6000377C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_title_244(rdram, ctx);
        goto after_95;
    // 0x6000377C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_95:
    // 0x60003780: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x60003784: b           L_6000388C
    // 0x60003788: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
        goto L_6000388C;
    // 0x60003788: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
L_6000378C:
    // 0x6000378C: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x60003790: beq         $t5, $zero, L_600037FC
    if (ctx->r13 == 0) {
        // 0x60003794: andi        $t0, $s2, 0x400
        ctx->r8 = ctx->r18 & 0X400;
            goto L_600037FC;
    }
    // 0x60003794: andi        $t0, $s2, 0x400
    ctx->r8 = ctx->r18 & 0X400;
    // 0x60003798: jal         0x60000244
    // 0x6000379C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_title_244(rdram, ctx);
        goto after_96;
    // 0x6000379C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_96:
    // 0x600037A0: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x600037A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600037A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x600037AC: bgez        $t7, L_600037BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x600037B0: sw          $t7, 0xDC($sp)
        MEM_W(0XDC, ctx->r29) = ctx->r15;
            goto L_600037BC;
    }
    // 0x600037B0: sw          $t7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r15;
    // 0x600037B4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x600037B8: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
L_600037BC:
    // 0x600037BC: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x600037C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x600037C4: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x600037C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600037CC: addu        $t1, $s4, $t9
    ctx->r9 = ADD32(ctx->r20, ctx->r25);
    // 0x600037D0: lw          $a0, 0x34($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X34);
    // 0x600037D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x600037D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x600037DC: jal         0x60000574
    // 0x600037E0: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_97;
    // 0x600037E0: nop

    after_97:
    // 0x600037E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600037E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600037EC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x600037F0: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x600037F4: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
    // 0x600037F8: andi        $t0, $s2, 0x400
    ctx->r8 = ctx->r18 & 0X400;
L_600037FC:
    // 0x600037FC: beq         $t0, $zero, L_60003868
    if (ctx->r8 == 0) {
        // 0x60003800: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_60003868;
    }
    // 0x60003800: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60003804: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x60003808: addu        $t2, $t2, $s1
    ctx->r10 = ADD32(ctx->r10, ctx->r17);
    // 0x6000380C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60003810: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60003814: jal         0x60000244
    // 0x60003818: addu        $s0, $s4, $t2
    ctx->r16 = ADD32(ctx->r20, ctx->r10);
    ovl_menu_title_244(rdram, ctx);
        goto after_98;
    // 0x60003818: addu        $s0, $s4, $t2
    ctx->r16 = ADD32(ctx->r20, ctx->r10);
    after_98:
    // 0x6000381C: lw          $t3, 0xDC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XDC);
    // 0x60003820: nop

    // 0x60003824: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x60003828: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x6000382C: bne         $at, $zero, L_60003838
    if (ctx->r1 != 0) {
        // 0x60003830: sw          $t4, 0xDC($sp)
        MEM_W(0XDC, ctx->r29) = ctx->r12;
            goto L_60003838;
    }
    // 0x60003830: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    // 0x60003834: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
L_60003838:
    // 0x60003838: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000383C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003840: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x60003844: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003848: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x6000384C: jal         0x60000574
    // 0x60003850: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_99;
    // 0x60003850: nop

    after_99:
    // 0x60003854: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003858: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x6000385C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60003860: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x60003864: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
L_60003868:
    // 0x60003868: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x6000386C: nop

    // 0x60003870: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60003874: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x60003878: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x6000387C: jal         0x6000085C
    // 0x60003880: addu        $s0, $s4, $t6
    ctx->r16 = ADD32(ctx->r20, ctx->r14);
    ovl_menu_title_85C(rdram, ctx);
        goto after_100;
    // 0x60003880: addu        $s0, $s4, $t6
    ctx->r16 = ADD32(ctx->r20, ctx->r14);
    after_100:
    // 0x60003884: b           L_60003694
    // 0x60003888: nop

        goto L_60003694;
    // 0x60003888: nop

L_6000388C:
    // 0x6000388C: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
L_60003890:
    // 0x60003890: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003894: bne         $t7, $at, L_600039DC
    if (ctx->r15 != ctx->r1) {
        // 0x60003898: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_600039DC;
    }
    // 0x60003898: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x6000389C: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
L_600038A0:
    // 0x600038A0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600038A4: addiu       $s1, $s1, 0x4478
    ctx->r17 = ADD32(ctx->r17, 0X4478);
    // 0x600038A8: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_600038AC:
    // 0x600038AC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600038B0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x600038B4: jal         0x60000568
    // 0x600038B8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    ovl_menu_title_568(rdram, ctx);
        goto after_101;
    // 0x600038B8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_101:
    // 0x600038BC: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x600038C0: lwc1        $f2, 0x110($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X110);
    // 0x600038C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600038C8: lwc1        $f14, 0x114($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X114);
    // 0x600038CC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x600038D0: sub.s       $f18, $f10, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x600038D4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x600038D8: mul.s       $f4, $f28, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x600038DC: add.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x600038E0: nop

    // 0x600038E4: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x600038E8: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x600038EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x600038F0: jal         0x6000055C
    // 0x600038F4: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    ovl_menu_title_55C(rdram, ctx);
        goto after_102;
    // 0x600038F4: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    after_102:
    // 0x600038F8: bne         $s2, $fp, L_6000392C
    if (ctx->r18 != ctx->r30) {
        // 0x600038FC: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_6000392C;
    }
    // 0x600038FC: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x60003900: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003904: jal         0x600005D4
    // 0x60003908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_103;
    // 0x60003908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_103:
    // 0x6000390C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003910: jal         0x600005D4
    // 0x60003914: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_104;
    // 0x60003914: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_104:
    // 0x60003918: lw          $a0, 0x20($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X20);
    // 0x6000391C: jal         0x600005D4
    // 0x60003920: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_105;
    // 0x60003920: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_105:
    // 0x60003924: b           L_6000396C
    // 0x60003928: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_6000396C;
    // 0x60003928: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_6000392C:
    // 0x6000392C: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x60003930: sll         $s0, $s2, 3
    ctx->r16 = S32(ctx->r18 << 3);
    // 0x60003934: subu        $s0, $s0, $s2
    ctx->r16 = SUB32(ctx->r16, ctx->r18);
    // 0x60003938: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x6000393C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x60003940: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x60003944: subu        $a1, $t9, $t8
    ctx->r5 = SUB32(ctx->r25, ctx->r24);
    // 0x60003948: jal         0x600005D4
    // 0x6000394C: addiu       $s0, $s0, 0x6E
    ctx->r16 = ADD32(ctx->r16, 0X6E);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_106;
    // 0x6000394C: addiu       $s0, $s0, 0x6E
    ctx->r16 = ADD32(ctx->r16, 0X6E);
    after_106:
    // 0x60003950: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003954: jal         0x600005D4
    // 0x60003958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_107;
    // 0x60003958: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_107:
    // 0x6000395C: lw          $a0, 0x20($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X20);
    // 0x60003960: jal         0x600005D4
    // 0x60003964: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_menu_title_5D4(rdram, ctx);
        goto after_108;
    // 0x60003964: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_108:
    // 0x60003968: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_6000396C:
    // 0x6000396C: bne         $s3, $s5, L_600038AC
    if (ctx->r19 != ctx->r21) {
        // 0x60003970: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_600038AC;
    }
    // 0x60003970: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x60003974: jal         0x6000085C
    // 0x60003978: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_109;
    // 0x60003978: nop

    after_109:
    // 0x6000397C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60003980: slti        $at, $s2, 0x14
    ctx->r1 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x60003984: bne         $at, $zero, L_600038A0
    if (ctx->r1 != 0) {
        // 0x60003988: nop
    
            goto L_600038A0;
    }
    // 0x60003988: nop

    // 0x6000398C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003990: addiu       $a0, $a0, 0x4748
    ctx->r4 = ADD32(ctx->r4, 0X4748);
    // 0x60003994: jal         0x60002920
    // 0x60003998: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_title_2920(rdram, ctx);
        goto after_110;
    // 0x60003998: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_110:
    // 0x6000399C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600039A0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x600039A4: jal         0x60002B04
    // 0x600039A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_2B04(rdram, ctx);
        goto after_111;
    // 0x600039A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_111:
    // 0x600039AC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x600039B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_600039B4:
    // 0x600039B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x600039B8: jal         0x60002B04
    // 0x600039BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_2B04(rdram, ctx);
        goto after_112;
    // 0x600039BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_112:
    // 0x600039C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x600039C4: bne         $s2, $s5, L_600039B4
    if (ctx->r18 != ctx->r21) {
        // 0x600039C8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_600039B4;
    }
    // 0x600039C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600039CC: jal         0x6000085C
    // 0x600039D0: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_113;
    // 0x600039D0: nop

    after_113:
    // 0x600039D4: b           L_60003210
    // 0x600039D8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
        goto L_60003210;
    // 0x600039D8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
L_600039DC:
    // 0x600039DC: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x600039E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600039E4: beq         $t1, $at, L_600039F4
    if (ctx->r9 == ctx->r1) {
        // 0x600039E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600039F4;
    }
    // 0x600039E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600039EC: bne         $t1, $at, L_60003A00
    if (ctx->r9 != ctx->r1) {
        // 0x600039F0: lw          $t0, 0xDC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XDC);
            goto L_60003A00;
    }
    // 0x600039F0: lw          $t0, 0xDC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XDC);
L_600039F4:
    // 0x600039F4: jal         0x60000268
    // 0x600039F8: nop

    ovl_menu_title_268(rdram, ctx);
        goto after_114;
    // 0x600039F8: nop

    after_114:
    // 0x600039FC: lw          $t0, 0xDC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XDC);
L_60003A00:
    // 0x60003A00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60003A04: bne         $t0, $at, L_60003A10
    if (ctx->r8 != ctx->r1) {
        // 0x60003A08: addiu       $t2, $zero, 0x6
        ctx->r10 = ADD32(0, 0X6);
            goto L_60003A10;
    }
    // 0x60003A08: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x60003A0C: sw          $t2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r10;
L_60003A10:
    // 0x60003A10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60003A14:
    // 0x60003A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003A1C: jal         0x60000238
    // 0x60003A20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_238(rdram, ctx);
        goto after_115;
    // 0x60003A20: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_115:
    // 0x60003A24: jal         0x60000208
    // 0x60003A28: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_116;
    // 0x60003A28: nop

    after_116:
    // 0x60003A2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003A30: jal         0x60002A6C
    // 0x60003A34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_menu_title_2A6C(rdram, ctx);
        goto after_117;
    // 0x60003A34: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_117:
    // 0x60003A38: jal         0x60000124
    // 0x60003A3C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_124(rdram, ctx);
        goto after_118;
    // 0x60003A3C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_118:
    // 0x60003A40: lw          $v0, 0xDC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XDC);
    // 0x60003A44: b           L_600043E8
    // 0x60003A48: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_600043E8;
    // 0x60003A48: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_60003A4C:
    // 0x60003A4C: jal         0x60000BEC
    // 0x60003A50: nop

    ovl_menu_title_BEC(rdram, ctx);
        goto after_119;
    // 0x60003A50: nop

    after_119:
    // 0x60003A54: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60003A58: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x60003A5C: jal         0x60000118
    // 0x60003A60: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_118(rdram, ctx);
        goto after_120;
    // 0x60003A60: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_120:
    // 0x60003A64: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60003A68: addiu       $s4, $s4, 0x4568
    ctx->r20 = ADD32(ctx->r20, 0X4568);
    // 0x60003A6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003A70: sw          $v0, 0x49C0($at)
    MEM_W(0X49C0, ctx->r1) = ctx->r2;
    // 0x60003A74: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003A78: jal         0x60002920
    // 0x60003A7C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_menu_title_2920(rdram, ctx);
        goto after_121;
    // 0x60003A7C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_121:
    // 0x60003A80: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x60003A84: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003A88: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003A8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003A90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60003A94: jal         0x60000574
    // 0x60003A98: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_122;
    // 0x60003A98: nop

    after_122:
    // 0x60003A9C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003AA0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x60003AA4: jal         0x6000061C
    // 0x60003AA8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    ovl_menu_title_61C(rdram, ctx);
        goto after_123;
    // 0x60003AA8: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_123:
    // 0x60003AAC: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x60003AB0: jal         0x60000604
    // 0x60003AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_title_604(rdram, ctx);
        goto after_124;
    // 0x60003AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_124:
    // 0x60003AB8: lw          $a0, 0x5C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X5C);
    // 0x60003ABC: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x60003AC0: jal         0x6000061C
    // 0x60003AC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    ovl_menu_title_61C(rdram, ctx);
        goto after_125;
    // 0x60003AC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_125:
    // 0x60003AC8: lw          $a0, 0x70($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X70);
    // 0x60003ACC: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x60003AD0: jal         0x6000061C
    // 0x60003AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    ovl_menu_title_61C(rdram, ctx);
        goto after_126;
    // 0x60003AD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_126:
    // 0x60003AD8: lbu         $t3, 0x1($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X1);
    // 0x60003ADC: lw          $t5, 0x80($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X80);
    // 0x60003AE0: addiu       $t4, $t3, 0x98
    ctx->r12 = ADD32(ctx->r11, 0X98);
    // 0x60003AE4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x60003AE8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x60003AEC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60003AF0: lw          $a0, 0x84($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X84);
    // 0x60003AF4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60003AF8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x60003AFC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x60003B00: jal         0x6000055C
    // 0x60003B04: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_127;
    // 0x60003B04: nop

    after_127:
    // 0x60003B08: lbu         $t6, 0x2($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X2);
    // 0x60003B0C: lw          $t9, 0x94($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X94);
    // 0x60003B10: addiu       $t7, $t6, 0x98
    ctx->r15 = ADD32(ctx->r14, 0X98);
    // 0x60003B14: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60003B18: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x60003B1C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60003B20: lw          $a0, 0x98($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X98);
    // 0x60003B24: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003B28: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60003B2C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60003B30: jal         0x6000055C
    // 0x60003B34: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_128;
    // 0x60003B34: nop

    after_128:
    // 0x60003B38: lw          $a0, 0x5C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X5C);
    // 0x60003B3C: jal         0x600005D4
    // 0x60003B40: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_129;
    // 0x60003B40: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_129:
    // 0x60003B44: lw          $a0, 0x70($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X70);
    // 0x60003B48: jal         0x600005D4
    // 0x60003B4C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_130;
    // 0x60003B4C: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_130:
    // 0x60003B50: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x60003B54: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003B58: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x60003B5C: beq         $t8, $zero, L_60003B94
    if (ctx->r24 == 0) {
        // 0x60003B60: addiu       $a1, $zero, 0xF
        ctx->r5 = ADD32(0, 0XF);
            goto L_60003B94;
    }
    // 0x60003B60: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60003B64: jal         0x60002B04
    // 0x60003B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_2B04(rdram, ctx);
        goto after_131;
    // 0x60003B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_131:
    // 0x60003B6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003B70: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60003B74: jal         0x60002B04
    // 0x60003B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_2B04(rdram, ctx);
        goto after_132;
    // 0x60003B78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_132:
    // 0x60003B7C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003B80: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60003B84: jal         0x60002B04
    // 0x60003B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_2B04(rdram, ctx);
        goto after_133;
    // 0x60003B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_133:
    // 0x60003B8C: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x60003B90: nop

L_60003B94:
    // 0x60003B94: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x60003B98: beq         $t1, $zero, L_60003BBC
    if (ctx->r9 == 0) {
        // 0x60003B9C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60003BBC;
    }
    // 0x60003B9C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003BA0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003BA4: jal         0x60002B04
    // 0x60003BA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_2B04(rdram, ctx);
        goto after_134;
    // 0x60003BA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_134:
    // 0x60003BAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003BB0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x60003BB4: jal         0x60002B04
    // 0x60003BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_title_2B04(rdram, ctx);
        goto after_135;
    // 0x60003BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_135:
L_60003BBC:
    // 0x60003BBC: lbu         $t0, 0x9($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X9);
    // 0x60003BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003BC4: bne         $t0, $at, L_60003BDC
    if (ctx->r8 != ctx->r1) {
        // 0x60003BC8: nop
    
            goto L_60003BDC;
    }
    // 0x60003BC8: nop

    // 0x60003BCC: lw          $s0, 0x19C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X19C);
    // 0x60003BD0: lw          $s1, 0x1B0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X1B0);
    // 0x60003BD4: b           L_60003BE8
    // 0x60003BD8: nop

        goto L_60003BE8;
    // 0x60003BD8: nop

L_60003BDC:
    // 0x60003BDC: lw          $s0, 0x1B0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X1B0);
    // 0x60003BE0: lw          $s1, 0x19C($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X19C);
    // 0x60003BE4: nop

L_60003BE8:
    // 0x60003BE8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BEC: lwc1        $f20, 0x4994($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4994);
    // 0x60003BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003BF4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60003BF8: jal         0x60000574
    // 0x60003BFC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_title_574(rdram, ctx);
        goto after_136;
    // 0x60003BFC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_136:
    // 0x60003C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003C04: jal         0x600005D4
    // 0x60003C08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_137;
    // 0x60003C08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_137:
    // 0x60003C0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003C10: lwc1        $f22, 0x4998($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4998);
    // 0x60003C14: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60003C18: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60003C1C: jal         0x60000574
    // 0x60003C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_574(rdram, ctx);
        goto after_138;
    // 0x60003C20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_138:
    // 0x60003C24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003C28: jal         0x600005D4
    // 0x60003C2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_139;
    // 0x60003C2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_139:
    // 0x60003C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003C38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003C3C: jal         0x60000220
    // 0x60003C40: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_220(rdram, ctx);
        goto after_140;
    // 0x60003C40: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_140:
    // 0x60003C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003C48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60003C4C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60003C50: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x60003C54: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x60003C58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C5C: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x60003C60: jal         0x60000B20
    // 0x60003C64: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
    ovl_menu_title_B20(rdram, ctx);
        goto after_141;
    // 0x60003C64: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
    after_141:
    // 0x60003C68: andi        $t2, $v0, 0x1000
    ctx->r10 = ctx->r2 & 0X1000;
    // 0x60003C6C: bne         $t2, $zero, L_60004350
    if (ctx->r10 != 0) {
        // 0x60003C70: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_60004350;
    }
    // 0x60003C70: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x60003C74: addiu       $fp, $sp, 0x94
    ctx->r30 = ADD32(ctx->r29, 0X94);
    // 0x60003C78: sll         $t3, $s5, 2
    ctx->r11 = S32(ctx->r21 << 2);
L_60003C7C:
    // 0x60003C7C: addu        $t3, $t3, $s5
    ctx->r11 = ADD32(ctx->r11, ctx->r21);
    // 0x60003C80: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60003C84: addu        $s0, $s4, $t3
    ctx->r16 = ADD32(ctx->r20, ctx->r11);
    // 0x60003C88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C8C: jal         0x60000B14
    // 0x60003C90: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    ovl_menu_title_B14(rdram, ctx);
        goto after_142;
    // 0x60003C90: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    after_142:
    // 0x60003C94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003C98: jal         0x60000310
    // 0x60003C9C: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    ovl_menu_title_310(rdram, ctx);
        goto after_143;
    // 0x60003C9C: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_143:
    // 0x60003CA0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003CA4: lwc1        $f8, 0x499C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X499C);
    // 0x60003CA8: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x60003CAC: mul.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x60003CB0: jal         0x6000031C
    // 0x60003CB4: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
    ovl_menu_title_31C(rdram, ctx);
        goto after_144;
    // 0x60003CB4: swc1        $f14, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f14.u32l;
    after_144:
    // 0x60003CB8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60003CBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003CC0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003CC4: lwc1        $f10, 0x49A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49A0);
    // 0x60003CC8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003CCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60003CD0: lwc1        $f14, 0x114($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X114);
    // 0x60003CD4: add.s       $f12, $f30, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f30.fl + ctx->f18.fl;
    // 0x60003CD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003CDC: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x60003CE0: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x60003CE4: bc1f        L_60003CF4
    if (!c1cs) {
        // 0x60003CE8: nop
    
            goto L_60003CF4;
    }
    // 0x60003CE8: nop

    // 0x60003CEC: b           L_60003D1C
    // 0x60003CF0: sub.s       $f30, $f12, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f30.fl = ctx->f12.fl - ctx->f16.fl;
        goto L_60003D1C;
    // 0x60003CF0: sub.s       $f30, $f12, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f30.fl = ctx->f12.fl - ctx->f16.fl;
L_60003CF4:
    // 0x60003CF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60003CF8: nop

    // 0x60003CFC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x60003D00: nop

    // 0x60003D04: bc1f        L_60003D14
    if (!c1cs) {
        // 0x60003D08: nop
    
            goto L_60003D14;
    }
    // 0x60003D08: nop

    // 0x60003D0C: b           L_60003D18
    // 0x60003D10: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
        goto L_60003D18;
    // 0x60003D10: add.s       $f0, $f12, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f16.fl;
L_60003D14:
    // 0x60003D14: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_60003D18:
    // 0x60003D18: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
L_60003D1C:
    // 0x60003D1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003D20: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
    // 0x60003D24: add.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x60003D28: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x60003D2C: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x60003D30: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x60003D34: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x60003D38: jal         0x60000574
    // 0x60003D3C: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_145;
    // 0x60003D3C: nop

    after_145:
    // 0x60003D40: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x60003D44: bne         $s2, $at, L_60003DD0
    if (ctx->r18 != ctx->r1) {
        // 0x60003D48: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_60003DD0;
    }
    // 0x60003D48: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x60003D4C: jal         0x60000AC0
    // 0x60003D50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_AC0(rdram, ctx);
        goto after_146;
    // 0x60003D50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_146:
    // 0x60003D54: bne         $v0, $zero, L_60003DD0
    if (ctx->r2 != 0) {
        // 0x60003D58: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_60003DD0;
    }
    // 0x60003D58: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x60003D5C: jal         0x60000244
    // 0x60003D60: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_title_244(rdram, ctx);
        goto after_147;
    // 0x60003D60: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_147:
    // 0x60003D64: lbu         $t4, 0x3($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X3);
    // 0x60003D68: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60003D6C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x60003D70: beq         $t5, $zero, L_60003D8C
    if (ctx->r13 == 0) {
        // 0x60003D74: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_60003D8C;
    }
    // 0x60003D74: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x60003D78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60003D7C: bne         $s5, $at, L_60003DA0
    if (ctx->r21 != ctx->r1) {
        // 0x60003D80: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_60003DA0;
    }
    // 0x60003D80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003D84: b           L_60003D9C
    // 0x60003D88: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
        goto L_60003D9C;
    // 0x60003D88: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_60003D8C:
    // 0x60003D8C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60003D90: bne         $s5, $at, L_60003DA0
    if (ctx->r21 != ctx->r1) {
        // 0x60003D94: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_60003DA0;
    }
    // 0x60003D94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003D98: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_60003D9C:
    // 0x60003D9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_60003DA0:
    // 0x60003DA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003DA4: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x60003DA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003DAC: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x60003DB0: lw          $a0, 0xE8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XE8);
    // 0x60003DB4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003DB8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60003DBC: jal         0x60000574
    // 0x60003DC0: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_148;
    // 0x60003DC0: nop

    after_148:
    // 0x60003DC4: b           L_60003E44
    // 0x60003DC8: sltiu       $at, $s5, 0x6
    ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
        goto L_60003E44;
    // 0x60003DC8: sltiu       $at, $s5, 0x6
    ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
    // 0x60003DCC: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
L_60003DD0:
    // 0x60003DD0: bne         $s2, $at, L_60003E44
    if (ctx->r18 != ctx->r1) {
        // 0x60003DD4: sltiu       $at, $s5, 0x6
        ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
            goto L_60003E44;
    }
    // 0x60003DD4: sltiu       $at, $s5, 0x6
    ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
    // 0x60003DD8: jal         0x60000AC0
    // 0x60003DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_AC0(rdram, ctx);
        goto after_149;
    // 0x60003DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_149:
    // 0x60003DE0: bne         $v0, $zero, L_60003E44
    if (ctx->r2 != 0) {
        // 0x60003DE4: sltiu       $at, $s5, 0x6
        ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
            goto L_60003E44;
    }
    // 0x60003DE4: sltiu       $at, $s5, 0x6
    ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
    // 0x60003DE8: jal         0x60000244
    // 0x60003DEC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_title_244(rdram, ctx);
        goto after_150;
    // 0x60003DEC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_150:
    // 0x60003DF0: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x60003DF4: bgez        $s5, L_60003E18
    if (SIGNED(ctx->r21) >= 0) {
        // 0x60003DF8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_60003E18;
    }
    // 0x60003DF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60003DFC: lbu         $t9, 0x3($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X3);
    // 0x60003E00: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x60003E04: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x60003E08: bne         $t8, $zero, L_60003E18
    if (ctx->r24 != 0) {
        // 0x60003E0C: nop
    
            goto L_60003E18;
    }
    // 0x60003E0C: nop

    // 0x60003E10: b           L_60003E18
    // 0x60003E14: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
        goto L_60003E18;
    // 0x60003E14: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_60003E18:
    // 0x60003E18: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x60003E1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60003E20: addu        $t1, $t1, $s1
    ctx->r9 = ADD32(ctx->r9, ctx->r17);
    // 0x60003E24: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60003E28: addu        $t0, $s4, $t1
    ctx->r8 = ADD32(ctx->r20, ctx->r9);
    // 0x60003E2C: lw          $a0, 0xE8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XE8);
    // 0x60003E30: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60003E34: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60003E38: jal         0x60000574
    // 0x60003E3C: nop

    ovl_menu_title_574(rdram, ctx);
        goto after_151;
    // 0x60003E3C: nop

    after_151:
    // 0x60003E40: sltiu       $at, $s5, 0x6
    ctx->r1 = ctx->r21 < 0X6 ? 1 : 0;
L_60003E44:
    // 0x60003E44: beq         $at, $zero, L_60004334
    if (ctx->r1 == 0) {
        // 0x60003E48: sll         $t2, $s5, 2
        ctx->r10 = S32(ctx->r21 << 2);
            goto L_60004334;
    }
    // 0x60003E48: sll         $t2, $s5, 2
    ctx->r10 = S32(ctx->r21 << 2);
    // 0x60003E4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003E50: addu        $at, $at, $t2
    gpr jr_addend_60003E5C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x60003E54: lw          $t2, 0x49A4($at)
    ctx->r10 = ADD32(ctx->r1, 0X49A4);
    // 0x60003E58: nop

    // 0x60003E5C: jr          $t2
    // 0x60003E60: nop

    switch (jr_addend_60003E5C >> 2) {
        case 0: goto L_60003E64; break;
        case 1: goto L_60003F30; break;
        case 2: goto L_6000404C; break;
        case 3: goto L_60004168; break;
        case 4: goto L_60004220; break;
        case 5: goto L_60004334; break;
        default: switch_error(__func__, 0x60003E5C, 0x600049A4);
    }
    // 0x60003E60: nop

L_60003E64:
    // 0x60003E64: andi        $t3, $s2, 0x200
    ctx->r11 = ctx->r18 & 0X200;
    // 0x60003E68: beq         $t3, $zero, L_60003EA0
    if (ctx->r11 == 0) {
        // 0x60003E6C: andi        $t5, $s2, 0x100
        ctx->r13 = ctx->r18 & 0X100;
            goto L_60003EA0;
    }
    // 0x60003E6C: andi        $t5, $s2, 0x100
    ctx->r13 = ctx->r18 & 0X100;
    // 0x60003E70: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
    // 0x60003E74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003E78: bne         $t4, $at, L_60003EA0
    if (ctx->r12 != ctx->r1) {
        // 0x60003E7C: nop
    
            goto L_60003EA0;
    }
    // 0x60003E7C: nop

    // 0x60003E80: jal         0x60000244
    // 0x60003E84: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_title_244(rdram, ctx);
        goto after_152;
    // 0x60003E84: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_152:
    // 0x60003E88: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x60003E8C: jal         0x600002EC
    // 0x60003E90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_2EC(rdram, ctx);
        goto after_153;
    // 0x60003E90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_153:
    // 0x60003E94: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x60003E98: b           L_60003ED0
    // 0x60003E9C: nop

        goto L_60003ED0;
    // 0x60003E9C: nop

L_60003EA0:
    // 0x60003EA0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x60003EA4: beq         $t5, $zero, L_60003ED0
    if (ctx->r13 == 0) {
        // 0x60003EA8: nop
    
            goto L_60003ED0;
    }
    // 0x60003EA8: nop

    // 0x60003EAC: bne         $v0, $zero, L_60003ED0
    if (ctx->r2 != 0) {
        // 0x60003EB0: nop
    
            goto L_60003ED0;
    }
    // 0x60003EB0: nop

    // 0x60003EB4: jal         0x60000244
    // 0x60003EB8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_title_244(rdram, ctx);
        goto after_154;
    // 0x60003EB8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_154:
    // 0x60003EBC: sb          $s7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r23;
    // 0x60003EC0: jal         0x600002EC
    // 0x60003EC4: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    ovl_menu_title_2EC(rdram, ctx);
        goto after_155;
    // 0x60003EC4: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    after_155:
    // 0x60003EC8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x60003ECC: nop

L_60003ED0:
    // 0x60003ED0: bne         $v0, $zero, L_60003EE8
    if (ctx->r2 != 0) {
        // 0x60003ED4: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_60003EE8;
    }
    // 0x60003ED4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x60003ED8: lw          $s0, 0xC0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XC0);
    // 0x60003EDC: lw          $s1, 0xD4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0XD4);
    // 0x60003EE0: b           L_60003EF8
    // 0x60003EE4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
        goto L_60003EF8;
    // 0x60003EE4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_60003EE8:
    // 0x60003EE8: lw          $s0, 0xD4($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XD4);
    // 0x60003EEC: lw          $s1, 0xC0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0XC0);
    // 0x60003EF0: nop

    // 0x60003EF4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_60003EF8:
    // 0x60003EF8: jal         0x60000574
    // 0x60003EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_title_574(rdram, ctx);
        goto after_156;
    // 0x60003EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_156:
    // 0x60003F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003F04: jal         0x600005D4
    // 0x60003F08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_157;
    // 0x60003F08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_157:
    // 0x60003F0C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60003F10: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60003F14: jal         0x60000574
    // 0x60003F18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_574(rdram, ctx);
        goto after_158;
    // 0x60003F18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_158:
    // 0x60003F1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003F20: jal         0x600005D4
    // 0x60003F24: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_159;
    // 0x60003F24: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_159:
    // 0x60003F28: b           L_60004334
    // 0x60003F2C: nop

        goto L_60004334;
    // 0x60003F2C: nop

L_60003F30:
    // 0x60003F30: jal         0x60000A9C
    // 0x60003F34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_A9C(rdram, ctx);
        goto after_160;
    // 0x60003F34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_160:
    // 0x60003F38: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x60003F3C: beq         $t6, $zero, L_60003F4C
    if (ctx->r14 == 0) {
        // 0x60003F40: nop
    
            goto L_60003F4C;
    }
    // 0x60003F40: nop

    // 0x60003F44: b           L_60003FB8
    // 0x60003F48: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
        goto L_60003FB8;
    // 0x60003F48: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_60003F4C:
    // 0x60003F4C: jal         0x60000A9C
    // 0x60003F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_A9C(rdram, ctx);
        goto after_161;
    // 0x60003F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_161:
    // 0x60003F54: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x60003F58: beq         $t7, $zero, L_60003F68
    if (ctx->r15 == 0) {
        // 0x60003F5C: nop
    
            goto L_60003F68;
    }
    // 0x60003F5C: nop

    // 0x60003F60: b           L_60003FB8
    // 0x60003F64: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_60003FB8;
    // 0x60003F64: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_60003F68:
    // 0x60003F68: jal         0x60000AC0
    // 0x60003F6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_AC0(rdram, ctx);
        goto after_162;
    // 0x60003F6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_162:
    // 0x60003F70: beq         $v0, $zero, L_60003FB8
    if (ctx->r2 == 0) {
        // 0x60003F74: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003FB8;
    }
    // 0x60003F74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003F78: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x60003F7C: bne         $at, $zero, L_60003F8C
    if (ctx->r1 != 0) {
        // 0x60003F80: nop
    
            goto L_60003F8C;
    }
    // 0x60003F80: nop

    // 0x60003F84: b           L_60003FB8
    // 0x60003F88: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_60003FB8;
    // 0x60003F88: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_60003F8C:
    // 0x60003F8C: blez        $v0, L_60003F9C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60003F90: slti        $at, $v0, -0x1E
        ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
            goto L_60003F9C;
    }
    // 0x60003F90: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x60003F94: b           L_60003FB8
    // 0x60003F98: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_60003FB8;
    // 0x60003F98: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_60003F9C:
    // 0x60003F9C: beq         $at, $zero, L_60003FAC
    if (ctx->r1 == 0) {
        // 0x60003FA0: nop
    
            goto L_60003FAC;
    }
    // 0x60003FA0: nop

    // 0x60003FA4: b           L_60003FB8
    // 0x60003FA8: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
        goto L_60003FB8;
    // 0x60003FA8: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
L_60003FAC:
    // 0x60003FAC: bgez        $v0, L_60003FB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x60003FB0: nop
    
            goto L_60003FB8;
    }
    // 0x60003FB0: nop

    // 0x60003FB4: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_60003FB8:
    // 0x60003FB8: beq         $v1, $zero, L_60004334
    if (ctx->r3 == 0) {
        // 0x60003FBC: nop
    
            goto L_60004334;
    }
    // 0x60003FBC: nop

    // 0x60003FC0: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x60003FC4: nop

    // 0x60003FC8: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x60003FCC: bgtz        $v0, L_60003FDC
    if (SIGNED(ctx->r2) > 0) {
        // 0x60003FD0: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_60003FDC;
    }
    // 0x60003FD0: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x60003FD4: b           L_60003FF8
    // 0x60003FD8: sb          $s7, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r23;
        goto L_60003FF8;
    // 0x60003FD8: sb          $s7, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r23;
L_60003FDC:
    // 0x60003FDC: bne         $at, $zero, L_60003FF0
    if (ctx->r1 != 0) {
        // 0x60003FE0: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_60003FF0;
    }
    // 0x60003FE0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60003FE4: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x60003FE8: b           L_60003FF8
    // 0x60003FEC: sb          $t8, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r24;
        goto L_60003FF8;
    // 0x60003FEC: sb          $t8, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r24;
L_60003FF0:
    // 0x60003FF0: jal         0x60000244
    // 0x60003FF4: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    ovl_menu_title_244(rdram, ctx);
        goto after_163;
    // 0x60003FF4: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    after_163:
L_60003FF8:
    // 0x60003FF8: lw          $a0, 0x5C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X5C);
    // 0x60003FFC: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x60004000: jal         0x6000061C
    // 0x60004004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    ovl_menu_title_61C(rdram, ctx);
        goto after_164;
    // 0x60004004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_164:
    // 0x60004008: lbu         $t1, 0x1($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X1);
    // 0x6000400C: lw          $t2, 0x80($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X80);
    // 0x60004010: addiu       $t0, $t1, 0x98
    ctx->r8 = ADD32(ctx->r9, 0X98);
    // 0x60004014: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x60004018: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x6000401C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60004020: lw          $a0, 0x84($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X84);
    // 0x60004024: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60004028: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x6000402C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x60004030: jal         0x6000055C
    // 0x60004034: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_165;
    // 0x60004034: nop

    after_165:
    // 0x60004038: lb          $a0, 0x1($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X1);
    // 0x6000403C: jal         0x600002A4
    // 0x60004040: nop

    ovl_menu_title_2A4(rdram, ctx);
        goto after_166;
    // 0x60004040: nop

    after_166:
    // 0x60004044: b           L_60004334
    // 0x60004048: nop

        goto L_60004334;
    // 0x60004048: nop

L_6000404C:
    // 0x6000404C: jal         0x60000A9C
    // 0x60004050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_A9C(rdram, ctx);
        goto after_167;
    // 0x60004050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_167:
    // 0x60004054: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x60004058: bne         $v0, $at, L_60004068
    if (ctx->r2 != ctx->r1) {
        // 0x6000405C: nop
    
            goto L_60004068;
    }
    // 0x6000405C: nop

    // 0x60004060: b           L_600040D4
    // 0x60004064: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
        goto L_600040D4;
    // 0x60004064: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_60004068:
    // 0x60004068: jal         0x60000A9C
    // 0x6000406C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_A9C(rdram, ctx);
        goto after_168;
    // 0x6000406C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_168:
    // 0x60004070: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x60004074: bne         $v0, $at, L_60004084
    if (ctx->r2 != ctx->r1) {
        // 0x60004078: nop
    
            goto L_60004084;
    }
    // 0x60004078: nop

    // 0x6000407C: b           L_600040D4
    // 0x60004080: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_600040D4;
    // 0x60004080: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_60004084:
    // 0x60004084: jal         0x60000AC0
    // 0x60004088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_AC0(rdram, ctx);
        goto after_169;
    // 0x60004088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_169:
    // 0x6000408C: beq         $v0, $zero, L_600040D4
    if (ctx->r2 == 0) {
        // 0x60004090: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600040D4;
    }
    // 0x60004090: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004094: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x60004098: bne         $at, $zero, L_600040A8
    if (ctx->r1 != 0) {
        // 0x6000409C: nop
    
            goto L_600040A8;
    }
    // 0x6000409C: nop

    // 0x600040A0: b           L_600040D4
    // 0x600040A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_600040D4;
    // 0x600040A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_600040A8:
    // 0x600040A8: blez        $v0, L_600040B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x600040AC: slti        $at, $v0, -0x1E
        ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
            goto L_600040B8;
    }
    // 0x600040AC: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x600040B0: b           L_600040D4
    // 0x600040B4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_600040D4;
    // 0x600040B4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_600040B8:
    // 0x600040B8: beq         $at, $zero, L_600040C8
    if (ctx->r1 == 0) {
        // 0x600040BC: nop
    
            goto L_600040C8;
    }
    // 0x600040BC: nop

    // 0x600040C0: b           L_600040D4
    // 0x600040C4: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
        goto L_600040D4;
    // 0x600040C4: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
L_600040C8:
    // 0x600040C8: bgez        $v0, L_600040D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x600040CC: nop
    
            goto L_600040D4;
    }
    // 0x600040CC: nop

    // 0x600040D0: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_600040D4:
    // 0x600040D4: beq         $v1, $zero, L_60004334
    if (ctx->r3 == 0) {
        // 0x600040D8: nop
    
            goto L_60004334;
    }
    // 0x600040D8: nop

    // 0x600040DC: lbu         $t3, 0x2($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X2);
    // 0x600040E0: nop

    // 0x600040E4: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x600040E8: bgtz        $v0, L_600040F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x600040EC: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_600040F8;
    }
    // 0x600040EC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x600040F0: b           L_60004114
    // 0x600040F4: sb          $s7, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r23;
        goto L_60004114;
    // 0x600040F4: sb          $s7, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r23;
L_600040F8:
    // 0x600040F8: bne         $at, $zero, L_6000410C
    if (ctx->r1 != 0) {
        // 0x600040FC: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_6000410C;
    }
    // 0x600040FC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60004100: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x60004104: b           L_60004114
    // 0x60004108: sb          $t4, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r12;
        goto L_60004114;
    // 0x60004108: sb          $t4, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r12;
L_6000410C:
    // 0x6000410C: jal         0x60000244
    // 0x60004110: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    ovl_menu_title_244(rdram, ctx);
        goto after_170;
    // 0x60004110: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    after_170:
L_60004114:
    // 0x60004114: lw          $a0, 0x70($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X70);
    // 0x60004118: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x6000411C: jal         0x6000061C
    // 0x60004120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    ovl_menu_title_61C(rdram, ctx);
        goto after_171;
    // 0x60004120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_171:
    // 0x60004124: lbu         $t5, 0x2($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X2);
    // 0x60004128: lw          $t7, 0x94($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X94);
    // 0x6000412C: addiu       $t6, $t5, 0x98
    ctx->r14 = ADD32(ctx->r13, 0X98);
    // 0x60004130: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x60004134: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x60004138: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x6000413C: lw          $a0, 0x98($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X98);
    // 0x60004140: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60004144: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60004148: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x6000414C: jal         0x6000055C
    // 0x60004150: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_172;
    // 0x60004150: nop

    after_172:
    // 0x60004154: lb          $a0, 0x2($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X2);
    // 0x60004158: jal         0x600002D4
    // 0x6000415C: nop

    ovl_menu_title_2D4(rdram, ctx);
        goto after_173;
    // 0x6000415C: nop

    after_173:
    // 0x60004160: b           L_60004334
    // 0x60004164: nop

        goto L_60004334;
    // 0x60004164: nop

L_60004168:
    // 0x60004168: andi        $t9, $s2, 0x200
    ctx->r25 = ctx->r18 & 0X200;
    // 0x6000416C: beq         $t9, $zero, L_60004198
    if (ctx->r25 == 0) {
        // 0x60004170: andi        $t1, $s2, 0x100
        ctx->r9 = ctx->r18 & 0X100;
            goto L_60004198;
    }
    // 0x60004170: andi        $t1, $s2, 0x100
    ctx->r9 = ctx->r18 & 0X100;
    // 0x60004174: lbu         $t8, 0x9($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X9);
    // 0x60004178: nop

    // 0x6000417C: bne         $t8, $zero, L_60004198
    if (ctx->r24 != 0) {
        // 0x60004180: nop
    
            goto L_60004198;
    }
    // 0x60004180: nop

    // 0x60004184: jal         0x60000244
    // 0x60004188: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_title_244(rdram, ctx);
        goto after_174;
    // 0x60004188: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_174:
    // 0x6000418C: sb          $s7, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r23;
    // 0x60004190: b           L_600041BC
    // 0x60004194: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
        goto L_600041BC;
    // 0x60004194: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
L_60004198:
    // 0x60004198: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x6000419C: beq         $t1, $zero, L_600041BC
    if (ctx->r9 == 0) {
        // 0x600041A0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600041BC;
    }
    // 0x600041A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600041A4: bne         $v1, $at, L_600041C0
    if (ctx->r3 != ctx->r1) {
        // 0x600041A8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600041C0;
    }
    // 0x600041A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600041AC: jal         0x60000244
    // 0x600041B0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_title_244(rdram, ctx);
        goto after_175;
    // 0x600041B0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_175:
    // 0x600041B4: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x600041B8: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_600041BC:
    // 0x600041BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_600041C0:
    // 0x600041C0: bne         $v1, $at, L_600041D8
    if (ctx->r3 != ctx->r1) {
        // 0x600041C4: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_600041D8;
    }
    // 0x600041C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x600041C8: lw          $s0, 0x19C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X19C);
    // 0x600041CC: lw          $s1, 0x1B0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X1B0);
    // 0x600041D0: b           L_600041E8
    // 0x600041D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
        goto L_600041E8;
    // 0x600041D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_600041D8:
    // 0x600041D8: lw          $s0, 0x1B0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X1B0);
    // 0x600041DC: lw          $s1, 0x19C($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X19C);
    // 0x600041E0: nop

    // 0x600041E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_600041E8:
    // 0x600041E8: jal         0x60000574
    // 0x600041EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_title_574(rdram, ctx);
        goto after_176;
    // 0x600041EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_176:
    // 0x600041F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600041F4: jal         0x600005D4
    // 0x600041F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_177;
    // 0x600041F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_177:
    // 0x600041FC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60004200: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x60004204: jal         0x60000574
    // 0x60004208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_title_574(rdram, ctx);
        goto after_178;
    // 0x60004208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_178:
    // 0x6000420C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60004210: jal         0x600005D4
    // 0x60004214: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_title_5D4(rdram, ctx);
        goto after_179;
    // 0x60004214: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_179:
    // 0x60004218: b           L_60004334
    // 0x6000421C: nop

        goto L_60004334;
    // 0x6000421C: nop

L_60004220:
    // 0x60004220: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004224: jal         0x60000B20
    // 0x60004228: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    ovl_menu_title_B20(rdram, ctx);
        goto after_180;
    // 0x60004228: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    after_180:
    // 0x6000422C: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x60004230: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004234: beq         $t0, $zero, L_6000424C
    if (ctx->r8 == 0) {
        // 0x60004238: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_6000424C;
    }
    // 0x60004238: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000423C: blez        $s6, L_60004250
    if (SIGNED(ctx->r22) <= 0) {
        // 0x60004240: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_60004250;
    }
    // 0x60004240: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x60004244: b           L_60004264
    // 0x60004248: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
        goto L_60004264;
    // 0x60004248: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
L_6000424C:
    // 0x6000424C: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
L_60004250:
    // 0x60004250: beq         $t2, $zero, L_60004264
    if (ctx->r10 == 0) {
        // 0x60004254: slti        $at, $s6, 0x63
        ctx->r1 = SIGNED(ctx->r22) < 0X63 ? 1 : 0;
            goto L_60004264;
    }
    // 0x60004254: slti        $at, $s6, 0x63
    ctx->r1 = SIGNED(ctx->r22) < 0X63 ? 1 : 0;
    // 0x60004258: beq         $at, $zero, L_60004264
    if (ctx->r1 == 0) {
        // 0x6000425C: nop
    
            goto L_60004264;
    }
    // 0x6000425C: nop

    // 0x60004260: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_60004264:
    // 0x60004264: beq         $s0, $s6, L_60004308
    if (ctx->r16 == ctx->r22) {
        // 0x60004268: lui         $t3, 0x6000
        ctx->r11 = S32(0X6000 << 16);
            goto L_60004308;
    }
    // 0x60004268: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x6000426C: addiu       $t3, $t3, 0x48E8
    ctx->r11 = ADD32(ctx->r11, 0X48E8);
    // 0x60004270: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x60004274: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60004278: sw          $at, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r1;
    // 0x6000427C: lhu         $at, 0x4($t3)
    ctx->r1 = MEM_HU(ctx->r11, 0X4);
    // 0x60004280: addiu       $a1, $a1, 0x48F0
    ctx->r5 = ADD32(ctx->r5, 0X48F0);
    // 0x60004284: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x60004288: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x6000428C: jal         0x60000028
    // 0x60004290: sh          $at, 0x4($fp)
    MEM_H(0X4, ctx->r30) = ctx->r1;
    ovl_menu_title_28(rdram, ctx);
        goto after_181;
    // 0x60004290: sh          $at, 0x4($fp)
    MEM_H(0X4, ctx->r30) = ctx->r1;
    after_181:
    // 0x60004294: lbu         $t6, 0x9C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X9C);
    // 0x60004298: lbu         $t9, 0x9D($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9D);
    // 0x6000429C: lw          $s0, 0x188($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X188);
    // 0x600042A0: addiu       $t7, $t6, 0x3D0
    ctx->r15 = ADD32(ctx->r14, 0X3D0);
    // 0x600042A4: addiu       $t8, $t9, 0x3D0
    ctx->r24 = ADD32(ctx->r25, 0X3D0);
    // 0x600042A8: sh          $t7, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r15;
    // 0x600042AC: sh          $t8, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r24;
    // 0x600042B0: jal         0x600011BC
    // 0x600042B4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    ovl_menu_title_11BC(rdram, ctx);
        goto after_182;
    // 0x600042B4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_182:
    // 0x600042B8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x600042BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x600042C0: jal         0x600017F4
    // 0x600042C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_title_17F4(rdram, ctx);
        goto after_183;
    // 0x600042C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_183:
    // 0x600042C8: lw          $t1, 0x180($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X180);
    // 0x600042CC: lw          $t0, 0x184($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X184);
    // 0x600042D0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x600042D4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x600042D8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600042DC: sw          $v0, 0x188($s4)
    MEM_W(0X188, ctx->r20) = ctx->r2;
    // 0x600042E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600042E4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x600042E8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x600042EC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x600042F0: jal         0x6000055C
    // 0x600042F4: nop

    ovl_menu_title_55C(rdram, ctx);
        goto after_184;
    // 0x600042F4: nop

    after_184:
    // 0x600042F8: jal         0x60002900
    // 0x600042FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_title_2900(rdram, ctx);
        goto after_185;
    // 0x600042FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_185:
    // 0x60004300: jal         0x60000244
    // 0x60004304: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_title_244(rdram, ctx);
        goto after_186;
    // 0x60004304: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_186:
L_60004308:
    // 0x60004308: andi        $t2, $s2, 0x8000
    ctx->r10 = ctx->r18 & 0X8000;
    // 0x6000430C: beq         $t2, $zero, L_60004320
    if (ctx->r10 == 0) {
        // 0x60004310: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_60004320;
    }
    // 0x60004310: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60004314: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x60004318: jal         0x6000025C
    // 0x6000431C: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    ovl_menu_title_25C(rdram, ctx);
        goto after_187;
    // 0x6000431C: sw          $t4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r12;
    after_187:
L_60004320:
    // 0x60004320: andi        $t3, $s2, 0x4000
    ctx->r11 = ctx->r18 & 0X4000;
    // 0x60004324: beq         $t3, $zero, L_60004334
    if (ctx->r11 == 0) {
        // 0x60004328: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_60004334;
    }
    // 0x60004328: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x6000432C: jal         0x60000250
    // 0x60004330: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
    ovl_menu_title_250(rdram, ctx);
        goto after_188;
    // 0x60004330: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
    after_188:
L_60004334:
    // 0x60004334: jal         0x6000085C
    // 0x60004338: nop

    ovl_menu_title_85C(rdram, ctx);
        goto after_189;
    // 0x60004338: nop

    after_189:
    // 0x6000433C: jal         0x60000B20
    // 0x60004340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_menu_title_B20(rdram, ctx);
        goto after_190;
    // 0x60004340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_190:
    // 0x60004344: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x60004348: beq         $t6, $zero, L_60003C7C
    if (ctx->r14 == 0) {
        // 0x6000434C: sll         $t3, $s5, 2
        ctx->r11 = S32(ctx->r21 << 2);
            goto L_60003C7C;
    }
    // 0x6000434C: sll         $t3, $s5, 2
    ctx->r11 = S32(ctx->r21 << 2);
L_60004350:
    // 0x60004350: jal         0x60000B38
    // 0x60004354: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_title_B38(rdram, ctx);
        goto after_191;
    // 0x60004354: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_191:
    // 0x60004358: jal         0x60000B5C
    // 0x6000435C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_title_B5C(rdram, ctx);
        goto after_192;
    // 0x6000435C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_192:
    // 0x60004360: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x60004364: nop

    // 0x60004368: beq         $t7, $zero, L_60004378
    if (ctx->r15 == 0) {
        // 0x6000436C: nop
    
            goto L_60004378;
    }
    // 0x6000436C: nop

    // 0x60004370: jal         0x60000268
    // 0x60004374: nop

    ovl_menu_title_268(rdram, ctx);
        goto after_193;
    // 0x60004374: nop

    after_193:
L_60004378:
    // 0x60004378: jal         0x60000244
    // 0x6000437C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_title_244(rdram, ctx);
        goto after_194;
    // 0x6000437C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_194:
    // 0x60004380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000438C: jal         0x60000238
    // 0x60004390: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_title_238(rdram, ctx);
        goto after_195;
    // 0x60004390: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_195:
    // 0x60004394: jal         0x60000208
    // 0x60004398: nop

    ovl_menu_title_208(rdram, ctx);
        goto after_196;
    // 0x60004398: nop

    after_196:
    // 0x6000439C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600043A0: jal         0x60002A6C
    // 0x600043A4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_menu_title_2A6C(rdram, ctx);
        goto after_197;
    // 0x600043A4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_197:
    // 0x600043A8: jal         0x60000124
    // 0x600043AC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_menu_title_124(rdram, ctx);
        goto after_198;
    // 0x600043AC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_198:
    // 0x600043B0: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x600043B4: nop

    // 0x600043B8: beq         $t9, $zero, L_600043C8
    if (ctx->r25 == 0) {
        // 0x600043BC: nop
    
            goto L_600043C8;
    }
    // 0x600043BC: nop

    // 0x600043C0: jal         0x6000025C
    // 0x600043C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_title_25C(rdram, ctx);
        goto after_199;
    // 0x600043C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_199:
L_600043C8:
    // 0x600043C8: b           L_600043E4
    // 0x600043CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_600043E4;
    // 0x600043CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600043D0:
    // 0x600043D0: jal         0x60002B74
    // 0x600043D4: addiu       $a0, $s0, -0x3
    ctx->r4 = ADD32(ctx->r16, -0X3);
    ovl_menu_title_2B74(rdram, ctx);
        goto after_200;
    // 0x600043D4: addiu       $a0, $s0, -0x3
    ctx->r4 = ADD32(ctx->r16, -0X3);
    after_200:
    // 0x600043D8: b           L_600043E8
    // 0x600043DC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_600043E8;
    // 0x600043DC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_600043E0:
    // 0x600043E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600043E4:
    // 0x600043E4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_600043E8:
    // 0x600043E8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600043EC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600043F0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600043F4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600043F8: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600043FC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60004400: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60004404: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004408: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x6000440C: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60004410: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60004414: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60004418: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x6000441C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x60004420: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x60004424: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x60004428: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x6000442C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x60004430: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x60004434: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x60004438: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x6000443C: jr          $ra
    // 0x60004440: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x60004440: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void ovl_stage_world5_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x3710
    ctx->r2 = ADD32(ctx->r2, 0X3710);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x3710
    ctx->r2 = ADD32(ctx->r2, 0X3710);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world5_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_stage_world5_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
