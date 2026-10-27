#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_story_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60000F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60000F58: jal         0x60000C1C
    // 0x60000F5C: nop

    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60000F5C: nop

    after_0:
    // 0x60000F60: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60000F64: nop

    // 0x60000F68: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x60000F6C: beq         $t7, $zero, L_60000F7C
    if (ctx->r15 == 0) {
        // 0x60000F70: nop
    
            goto L_60000F7C;
    }
    // 0x60000F70: nop

    // 0x60000F74: b           L_60000FAC
    // 0x60000F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_60000FAC;
    // 0x60000F78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60000F7C:
    // 0x60000F7C: jal         0x60000A9C
    // 0x60000F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_A9C(rdram, ctx);
        goto after_1;
    // 0x60000F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60000F84: andi        $t8, $v0, 0xD000
    ctx->r24 = ctx->r2 & 0XD000;
    // 0x60000F88: beq         $t8, $zero, L_60000FA4
    if (ctx->r24 == 0) {
        // 0x60000F8C: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60000FA4;
    }
    // 0x60000F8C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000F90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60000F94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60000F98: sw          $t9, 0x68A0($at)
    MEM_W(0X68A0, ctx->r1) = ctx->r25;
    // 0x60000F9C: b           L_60000FAC
    // 0x60000FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60000FAC;
    // 0x60000FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60000FA4:
    // 0x60000FA4: lw          $v0, 0x68A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X68A0);
    // 0x60000FA8: nop

L_60000FAC:
    // 0x60000FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60000FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60000FB4: jr          $ra
    // 0x60000FB8: nop

    return;
    // 0x60000FB8: nop

;}
RECOMP_FUNC void ovl_demo_story_FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000FBC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60000FC0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60000FC4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x60000FC8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x60000FCC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60000FD0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x60000FD4: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x60000FD8: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x60000FDC: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x60000FE0: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x60000FE4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x60000FE8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60000FEC: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x60000FF0: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x60000FF4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x60000FF8: lw          $a3, 0x3C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X3C);
    // 0x60000FFC: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x60001000: sra         $t2, $a3, 24
    ctx->r10 = S32(SIGNED(ctx->r7) >> 24);
    // 0x60001004: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x60001008: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x6000100C: sll         $t3, $t2, 24
    ctx->r11 = S32(ctx->r10 << 24);
    // 0x60001010: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x60001014: sra         $t1, $a3, 8
    ctx->r9 = S32(SIGNED(ctx->r7) >> 8);
    // 0x60001018: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x6000101C: or          $t8, $t3, $t7
    ctx->r24 = ctx->r11 | ctx->r15;
    // 0x60001020: sll         $t4, $t2, 8
    ctx->r12 = S32(ctx->r10 << 8);
    // 0x60001024: or          $t6, $a3, $zero
    ctx->r14 = ctx->r7 | 0;
    // 0x60001028: andi        $t3, $t6, 0xFF
    ctx->r11 = ctx->r14 & 0XFF;
    // 0x6000102C: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x60001030: or          $t7, $t5, $t3
    ctx->r15 = ctx->r13 | ctx->r11;
    // 0x60001034: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x60001038: lui         $t1, 0xFFFD
    ctx->r9 = S32(0XFFFD << 16);
    // 0x6000103C: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x60001040: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x60001044: ori         $t1, $t1, 0xF6FB
    ctx->r9 = ctx->r9 | 0XF6FB;
    // 0x60001048: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x6000104C: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x60001050: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x60001054: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x60001058: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x6000105C: ori         $t2, $t2, 0x1801
    ctx->r10 = ctx->r10 | 0X1801;
    // 0x60001060: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x60001064: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x60001068: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x6000106C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x60001070: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x60001074: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x60001078: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x6000107C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x60001080: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x60001084: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x60001088: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000108C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001090: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x60001094: lw          $t7, 0x4C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4C);
    // 0x60001098: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x6000109C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x600010A0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x600010A4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x600010A8: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x600010AC: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x600010B0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x600010B4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x600010B8: sll         $t8, $t2, 14
    ctx->r24 = S32(ctx->r10 << 14);
    // 0x600010BC: or          $t4, $t8, $at
    ctx->r12 = ctx->r24 | ctx->r1;
    // 0x600010C0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600010C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600010C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600010CC: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x600010D0: lw          $t3, 0x50($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X50);
    // 0x600010D4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x600010D8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x600010DC: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x600010E0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600010E4: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x600010E8: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x600010EC: andi        $t1, $t9, 0x3FF
    ctx->r9 = ctx->r25 & 0X3FF;
    // 0x600010F0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x600010F4: or          $t8, $t4, $t2
    ctx->r24 = ctx->r12 | ctx->r10;
    // 0x600010F8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x600010FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001100: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001104: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001108: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x6000110C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x60001110: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x60001114: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x60001118: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x6000111C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x60001120: nop

    // 0x60001124: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x60001128: andi        $t3, $t5, 0x3FF
    ctx->r11 = ctx->r13 & 0X3FF;
    // 0x6000112C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x60001130: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001134: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001138: sll         $t7, $t3, 14
    ctx->r15 = S32(ctx->r11 << 14);
    // 0x6000113C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001140: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x60001144: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x60001148: andi        $t4, $t1, 0x3FF
    ctx->r12 = ctx->r9 & 0X3FF;
    // 0x6000114C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x60001150: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x60001154: jr          $ra
    // 0x60001158: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    return;
    // 0x60001158: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
;}
RECOMP_FUNC void ovl_demo_story_115C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000115C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60001160: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x60001164: addiu       $a3, $a0, 0x8
    ctx->r7 = ADD32(ctx->r4, 0X8);
    // 0x60001168: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x6000116C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x60001170: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x60001174: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x60001178: ori         $t7, $t7, 0x1D00
    ctx->r15 = ctx->r15 | 0X1D00;
    // 0x6000117C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001180: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x60001184: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x60001188: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x6000118C: lui         $t9, 0xEE00
    ctx->r25 = S32(0XEE00 << 16);
    // 0x60001190: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x60001194: lw          $t4, 0x40($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X40);
    // 0x60001198: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x6000119C: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x600011A0: lui         $v1, 0xE200
    ctx->r3 = S32(0XE200 << 16);
    // 0x600011A4: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x600011A8: ori         $v1, $v1, 0x1E01
    ctx->r3 = ctx->r3 | 0X1E01;
    // 0x600011AC: addiu       $v0, $t1, 0x8
    ctx->r2 = ADD32(ctx->r9, 0X8);
    // 0x600011B0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x600011B4: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x600011B8: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
    // 0x600011BC: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x600011C0: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x600011C4: ori         $t8, $t8, 0x10C8
    ctx->r24 = ctx->r24 | 0X10C8;
    // 0x600011C8: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x600011CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600011D0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x600011D4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x600011D8: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x600011DC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x600011E0: lw          $a3, 0x3C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X3C);
    // 0x600011E4: addiu       $t0, $a0, 0x8
    ctx->r8 = ADD32(ctx->r4, 0X8);
    // 0x600011E8: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x600011EC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x600011F0: sra         $t4, $a3, 24
    ctx->r12 = S32(SIGNED(ctx->r7) >> 24);
    // 0x600011F4: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x600011F8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x600011FC: sra         $t6, $a3, 8
    ctx->r14 = S32(SIGNED(ctx->r7) >> 8);
    // 0x60001200: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x60001204: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x60001208: or          $t3, $t5, $t9
    ctx->r11 = ctx->r13 | ctx->r25;
    // 0x6000120C: or          $t5, $t3, $t8
    ctx->r13 = ctx->r11 | ctx->r24;
    // 0x60001210: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x60001214: or          $t6, $t5, $t4
    ctx->r14 = ctx->r13 | ctx->r12;
    // 0x60001218: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x6000121C: lui         $t3, 0xFFFD
    ctx->r11 = S32(0XFFFD << 16);
    // 0x60001220: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x60001224: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x60001228: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x6000122C: ori         $t3, $t3, 0xF6FB
    ctx->r11 = ctx->r11 | 0XF6FB;
    // 0x60001230: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x60001234: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x60001238: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x6000123C: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x60001240: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x60001244: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x60001248: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x6000124C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x60001250: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x60001254: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001258: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000125C: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x60001260: lw          $t6, 0x4C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4C);
    // 0x60001264: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001268: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x6000126C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x60001270: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x60001274: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x60001278: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x6000127C: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x60001280: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x60001284: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x60001288: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x6000128C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x60001290: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001294: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001298: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x6000129C: lw          $t7, 0x50($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X50);
    // 0x600012A0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x600012A4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x600012A8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x600012AC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x600012B0: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x600012B4: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x600012B8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x600012BC: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x600012C0: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x600012C4: or          $t6, $t5, $t4
    ctx->r14 = ctx->r13 | ctx->r12;
    // 0x600012C8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x600012CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012D0: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x600012D4: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x600012D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012DC: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x600012E0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x600012E4: addiu       $a2, $t2, 0x8
    ctx->r6 = ADD32(ctx->r10, 0X8);
    // 0x600012E8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x600012EC: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x600012F0: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x600012F4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x600012F8: andi        $t8, $t3, 0x3FF
    ctx->r24 = ctx->r11 & 0X3FF;
    // 0x600012FC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x60001300: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001304: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001308: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x6000130C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001310: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x60001314: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x60001318: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x6000131C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x60001320: or          $t3, $t9, $t7
    ctx->r11 = ctx->r25 | ctx->r15;
    // 0x60001324: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    // 0x60001328: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x6000132C: jr          $ra
    // 0x60001330: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    return;
    // 0x60001330: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void ovl_demo_story_1334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001334: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000133C: beq         $a1, $zero, L_60001420
    if (ctx->r5 == 0) {
        // 0x60001340: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_60001420;
    }
    // 0x60001340: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x60001344: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x60001348: beq         $t7, $zero, L_600013A0
    if (ctx->r15 == 0) {
        // 0x6000134C: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_600013A0;
    }
    // 0x6000134C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x60001350: jal         0x60000DE4
    // 0x60001354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DE4(rdram, ctx);
        goto after_0;
    // 0x60001354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60001358: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000135C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60001360: jal         0x600006C4
    // 0x60001364: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x60001364: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001368: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x6000136C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60001370: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60001374: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60001378: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x6000137C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x60001380: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60001384: jal         0x60000DE4
    // 0x60001388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DE4(rdram, ctx);
        goto after_2;
    // 0x60001388: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x6000138C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001390: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60001394: jal         0x600006C4
    // 0x60001398: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_3;
    // 0x60001398: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x6000139C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
L_600013A0:
    // 0x600013A0: nop

    // 0x600013A4: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x600013A8: beq         $t3, $zero, L_60001400
    if (ctx->r11 == 0) {
        // 0x600013AC: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_60001400;
    }
    // 0x600013AC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x600013B0: jal         0x60000DE4
    // 0x600013B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_DE4(rdram, ctx);
        goto after_4;
    // 0x600013B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x600013B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600013BC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x600013C0: jal         0x600006C4
    // 0x600013C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_5;
    // 0x600013C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x600013C8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x600013CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x600013D0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600013D4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x600013D8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x600013DC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x600013E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x600013E4: jal         0x60000DE4
    // 0x600013E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_DE4(rdram, ctx);
        goto after_6;
    // 0x600013E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x600013EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600013F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600013F4: jal         0x600006C4
    // 0x600013F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_7;
    // 0x600013F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x600013FC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_60001400:
    // 0x60001400: nop

    // 0x60001404: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x60001408: beq         $t9, $zero, L_60001500
    if (ctx->r25 == 0) {
        // 0x6000140C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001500;
    }
    // 0x6000140C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001410: jal         0x60000ED4
    // 0x60001414: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_ED4(rdram, ctx);
        goto after_8;
    // 0x60001414: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60001418: b           L_60001500
    // 0x6000141C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001500;
    // 0x6000141C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001420:
    // 0x60001420: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x60001424: nop

    // 0x60001428: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x6000142C: beq         $t1, $zero, L_60001484
    if (ctx->r9 == 0) {
        // 0x60001430: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_60001484;
    }
    // 0x60001430: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60001434: jal         0x60000DE4
    // 0x60001438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DE4(rdram, ctx);
        goto after_9;
    // 0x60001438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x6000143C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001440: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60001444: jal         0x600006C4
    // 0x60001448: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_10;
    // 0x60001448: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_10:
    // 0x6000144C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x60001450: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x60001454: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60001458: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x6000145C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001460: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x60001464: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x60001468: jal         0x60000DE4
    // 0x6000146C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DE4(rdram, ctx);
        goto after_11;
    // 0x6000146C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x60001470: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001474: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60001478: jal         0x600006C4
    // 0x6000147C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_12;
    // 0x6000147C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_12:
    // 0x60001480: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_60001484:
    // 0x60001484: nop

    // 0x60001488: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x6000148C: beq         $t7, $zero, L_600014E4
    if (ctx->r15 == 0) {
        // 0x60001490: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_600014E4;
    }
    // 0x60001490: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x60001494: jal         0x60000DE4
    // 0x60001498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_DE4(rdram, ctx);
        goto after_13;
    // 0x60001498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x6000149C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600014A0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x600014A4: jal         0x600006C4
    // 0x600014A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_14;
    // 0x600014A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_14:
    // 0x600014AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x600014B0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x600014B4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x600014B8: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x600014BC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x600014C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x600014C4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x600014C8: jal         0x60000DE4
    // 0x600014CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_DE4(rdram, ctx);
        goto after_15;
    // 0x600014CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x600014D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600014D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600014D8: jal         0x600006C4
    // 0x600014DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_16;
    // 0x600014DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_16:
    // 0x600014E0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
L_600014E4:
    // 0x600014E4: nop

    // 0x600014E8: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x600014EC: beq         $t3, $zero, L_60001500
    if (ctx->r11 == 0) {
        // 0x600014F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001500;
    }
    // 0x600014F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600014F4: jal         0x60000ED4
    // 0x600014F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_ED4(rdram, ctx);
        goto after_17;
    // 0x600014F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x600014FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001500:
    // 0x60001500: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001504: jr          $ra
    // 0x60001508: nop

    return;
    // 0x60001508: nop

    // 0x6000150C: jr          $ra
    // 0x60001510: nop

    return;
    // 0x60001510: nop

    // 0x60001514: jr          $ra
    // 0x60001518: nop

    return;
    // 0x60001518: nop

;}
RECOMP_FUNC void ovl_demo_story_151C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000151C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001524: jal         0x60000538
    // 0x60001528: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_demo_story_538(rdram, ctx);
        goto after_0;
    // 0x60001528: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x6000152C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x60001530: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x60001534: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x60001538: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x6000153C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001540: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60001544: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001548: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x6000154C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001550: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60001554: jal         0x6000055C
    // 0x60001558: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_1;
    // 0x60001558: nop

    after_1:
    // 0x6000155C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001560: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x60001564: jr          $ra
    // 0x60001568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60001568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000156C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60001570: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x60001574: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x60001578: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x6000157C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60001580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001584: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x60001588: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x6000158C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x60001590: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001594: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x60001598: addiu       $t9, $sp, 0x1C
    ctx->r25 = ADD32(ctx->r29, 0X1C);
    // 0x6000159C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x600015A0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x600015A4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x600015A8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x600015AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x600015B0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600015B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600015B8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x600015BC: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x600015C0: jal         0x600006C4
    // 0x600015C4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_0;
    // 0x600015C4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x600015C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015CC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x600015D0: jr          $ra
    // 0x600015D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x600015D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_demo_story_15D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600015DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600015E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600015E4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600015E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600015EC: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
    // 0x600015F0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x600015F4: beq         $s2, $s1, L_6000173C
    if (ctx->r18 == ctx->r17) {
        // 0x600015F8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_6000173C;
    }
    // 0x600015F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_600015FC:
    // 0x600015FC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x60001600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001604: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x60001608: beq         $t7, $zero, L_60001618
    if (ctx->r15 == 0) {
        // 0x6000160C: nop
    
            goto L_60001618;
    }
    // 0x6000160C: nop

    // 0x60001610: b           L_60001618
    // 0x60001614: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
        goto L_60001618;
    // 0x60001614: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_60001618:
    // 0x60001618: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x6000161C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x60001620: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60001624: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001628: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000162C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x60001630: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001634: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x60001638: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x6000163C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x60001640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60001644: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x60001648: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x6000164C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x60001650: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001654: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001658: nop

    // 0x6000165C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001660: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x60001664: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x60001668: jal         0x6000151C
    // 0x6000166C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    ovl_demo_story_151C(rdram, ctx);
        goto after_0;
    // 0x6000166C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x60001670: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60001674: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x60001678: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x6000167C: beq         $t1, $zero, L_600016A0
    if (ctx->r9 == 0) {
        // 0x60001680: andi        $t2, $v1, 0x4
        ctx->r10 = ctx->r3 & 0X4;
            goto L_600016A0;
    }
    // 0x60001680: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
    // 0x60001684: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x60001688: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x6000168C: jal         0x60000634
    // 0x60001690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_demo_story_634(rdram, ctx);
        goto after_1;
    // 0x60001690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x60001694: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60001698: nop

    // 0x6000169C: andi        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 & 0X4;
L_600016A0:
    // 0x600016A0: beq         $t2, $zero, L_600016C8
    if (ctx->r10 == 0) {
        // 0x600016A4: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_600016C8;
    }
    // 0x600016A4: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x600016A8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600016AC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x600016B0: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x600016B4: jal         0x6000061C
    // 0x600016B8: nop

    ovl_demo_story_61C(rdram, ctx);
        goto after_2;
    // 0x600016B8: nop

    after_2:
    // 0x600016BC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x600016C0: nop

    // 0x600016C4: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
L_600016C8:
    // 0x600016C8: beq         $t3, $zero, L_600016F0
    if (ctx->r11 == 0) {
        // 0x600016CC: andi        $t4, $v1, 0x10
        ctx->r12 = ctx->r3 & 0X10;
            goto L_600016F0;
    }
    // 0x600016CC: andi        $t4, $v1, 0x10
    ctx->r12 = ctx->r3 & 0X10;
    // 0x600016D0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600016D4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x600016D8: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x600016DC: jal         0x60000574
    // 0x600016E0: nop

    ovl_demo_story_574(rdram, ctx);
        goto after_3;
    // 0x600016E0: nop

    after_3:
    // 0x600016E4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x600016E8: nop

    // 0x600016EC: andi        $t4, $v1, 0x10
    ctx->r12 = ctx->r3 & 0X10;
L_600016F0:
    // 0x600016F0: beq         $t4, $zero, L_60001714
    if (ctx->r12 == 0) {
        // 0x600016F4: andi        $t5, $v1, 0x20
        ctx->r13 = ctx->r3 & 0X20;
            goto L_60001714;
    }
    // 0x600016F4: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
    // 0x600016F8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600016FC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x60001700: jal         0x60000604
    // 0x60001704: nop

    ovl_demo_story_604(rdram, ctx);
        goto after_4;
    // 0x60001704: nop

    after_4:
    // 0x60001708: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x6000170C: nop

    // 0x60001710: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
L_60001714:
    // 0x60001714: beq         $t5, $zero, L_6000172C
    if (ctx->r13 == 0) {
        // 0x60001718: nop
    
            goto L_6000172C;
    }
    // 0x60001718: nop

    // 0x6000171C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001720: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x60001724: jal         0x600005D4
    // 0x60001728: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_5;
    // 0x60001728: nop

    after_5:
L_6000172C:
    // 0x6000172C: lw          $s1, 0x54($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X54);
    // 0x60001730: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
    // 0x60001734: bne         $s2, $s1, L_600015FC
    if (ctx->r18 != ctx->r17) {
        // 0x60001738: nop
    
            goto L_600015FC;
    }
    // 0x60001738: nop

L_6000173C:
    // 0x6000173C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001740: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001744: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001748: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x6000174C: jr          $ra
    // 0x60001750: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001750: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_demo_story_1754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001758: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000175C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001760: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60001764: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x60001768: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x6000176C: beq         $s1, $t6, L_60001790
    if (ctx->r17 == ctx->r14) {
        // 0x60001770: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_60001790;
    }
    // 0x60001770: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001774:
    // 0x60001774: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001778: jal         0x60000550
    // 0x6000177C: nop

    ovl_demo_story_550(rdram, ctx);
        goto after_0;
    // 0x6000177C: nop

    after_0:
    // 0x60001780: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x60001784: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
    // 0x60001788: bne         $s1, $t7, L_60001774
    if (ctx->r17 != ctx->r15) {
        // 0x6000178C: nop
    
            goto L_60001774;
    }
    // 0x6000178C: nop

L_60001790:
    // 0x60001790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001794: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001798: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x6000179C: jr          $ra
    // 0x600017A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600017A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_17A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600017A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600017AC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600017B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600017B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600017B8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x600017BC: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x600017C0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x600017C4: blez        $t6, L_60001910
    if (SIGNED(ctx->r14) <= 0) {
        // 0x600017C8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001910;
    }
    // 0x600017C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_600017CC:
    // 0x600017CC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x600017D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600017D4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x600017D8: beq         $t8, $zero, L_600017E8
    if (ctx->r24 == 0) {
        // 0x600017DC: nop
    
            goto L_600017E8;
    }
    // 0x600017DC: nop

    // 0x600017E0: b           L_600017E8
    // 0x600017E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
        goto L_600017E8;
    // 0x600017E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_600017E8:
    // 0x600017E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x600017EC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x600017F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x600017F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600017F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600017FC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x60001800: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001804: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x60001808: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x6000180C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x60001810: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001814: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x60001818: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x6000181C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60001820: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001824: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001828: nop

    // 0x6000182C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001830: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x60001834: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x60001838: jal         0x6000151C
    // 0x6000183C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_demo_story_151C(rdram, ctx);
        goto after_0;
    // 0x6000183C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x60001840: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60001844: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x60001848: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x6000184C: beq         $t2, $zero, L_60001870
    if (ctx->r10 == 0) {
        // 0x60001850: andi        $t3, $v1, 0x4
        ctx->r11 = ctx->r3 & 0X4;
            goto L_60001870;
    }
    // 0x60001850: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
    // 0x60001854: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x60001858: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x6000185C: jal         0x60000634
    // 0x60001860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_demo_story_634(rdram, ctx);
        goto after_1;
    // 0x60001860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x60001864: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60001868: nop

    // 0x6000186C: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
L_60001870:
    // 0x60001870: beq         $t3, $zero, L_60001898
    if (ctx->r11 == 0) {
        // 0x60001874: andi        $t4, $v1, 0x8
        ctx->r12 = ctx->r3 & 0X8;
            goto L_60001898;
    }
    // 0x60001874: andi        $t4, $v1, 0x8
    ctx->r12 = ctx->r3 & 0X8;
    // 0x60001878: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x6000187C: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x60001880: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x60001884: jal         0x6000061C
    // 0x60001888: nop

    ovl_demo_story_61C(rdram, ctx);
        goto after_2;
    // 0x60001888: nop

    after_2:
    // 0x6000188C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60001890: nop

    // 0x60001894: andi        $t4, $v1, 0x8
    ctx->r12 = ctx->r3 & 0X8;
L_60001898:
    // 0x60001898: beq         $t4, $zero, L_600018C0
    if (ctx->r12 == 0) {
        // 0x6000189C: andi        $t5, $v1, 0x10
        ctx->r13 = ctx->r3 & 0X10;
            goto L_600018C0;
    }
    // 0x6000189C: andi        $t5, $v1, 0x10
    ctx->r13 = ctx->r3 & 0X10;
    // 0x600018A0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600018A4: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x600018A8: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x600018AC: jal         0x60000574
    // 0x600018B0: nop

    ovl_demo_story_574(rdram, ctx);
        goto after_3;
    // 0x600018B0: nop

    after_3:
    // 0x600018B4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x600018B8: nop

    // 0x600018BC: andi        $t5, $v1, 0x10
    ctx->r13 = ctx->r3 & 0X10;
L_600018C0:
    // 0x600018C0: beq         $t5, $zero, L_600018E4
    if (ctx->r13 == 0) {
        // 0x600018C4: andi        $t6, $v1, 0x20
        ctx->r14 = ctx->r3 & 0X20;
            goto L_600018E4;
    }
    // 0x600018C4: andi        $t6, $v1, 0x20
    ctx->r14 = ctx->r3 & 0X20;
    // 0x600018C8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600018CC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x600018D0: jal         0x60000604
    // 0x600018D4: nop

    ovl_demo_story_604(rdram, ctx);
        goto after_4;
    // 0x600018D4: nop

    after_4:
    // 0x600018D8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x600018DC: nop

    // 0x600018E0: andi        $t6, $v1, 0x20
    ctx->r14 = ctx->r3 & 0X20;
L_600018E4:
    // 0x600018E4: beq         $t6, $zero, L_600018FC
    if (ctx->r14 == 0) {
        // 0x600018E8: nop
    
            goto L_600018FC;
    }
    // 0x600018E8: nop

    // 0x600018EC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600018F0: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x600018F4: jal         0x600005D4
    // 0x600018F8: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_5;
    // 0x600018F8: nop

    after_5:
L_600018FC:
    // 0x600018FC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x60001900: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001904: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60001908: bne         $at, $zero, L_600017CC
    if (ctx->r1 != 0) {
        // 0x6000190C: addiu       $s0, $s0, 0x54
        ctx->r16 = ADD32(ctx->r16, 0X54);
            goto L_600017CC;
    }
    // 0x6000190C: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
L_60001910:
    // 0x60001910: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001914: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001918: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000191C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001920: jr          $ra
    // 0x60001924: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001924: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_demo_story_1928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x6000192C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001930: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001934: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001938: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x6000193C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x60001940: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x60001944: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x60001948: blez        $t6, L_60001970
    if (SIGNED(ctx->r14) <= 0) {
        // 0x6000194C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001970;
    }
    // 0x6000194C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60001950:
    // 0x60001950: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001954: jal         0x60000550
    // 0x60001958: nop

    ovl_demo_story_550(rdram, ctx);
        goto after_0;
    // 0x60001958: nop

    after_0:
    // 0x6000195C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x60001960: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001964: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60001968: bne         $at, $zero, L_60001950
    if (ctx->r1 != 0) {
        // 0x6000196C: addiu       $s0, $s0, 0x54
        ctx->r16 = ADD32(ctx->r16, 0X54);
            goto L_60001950;
    }
    // 0x6000196C: addiu       $s0, $s0, 0x54
    ctx->r16 = ADD32(ctx->r16, 0X54);
L_60001970:
    // 0x60001970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001978: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000197C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001980: jr          $ra
    // 0x60001984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_story_1988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000198C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001990: jal         0x60000868
    // 0x60001994: nop

    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60001994: nop

    after_0:
    // 0x60001998: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x6000199C: jal         0x60001928
    // 0x600019A0: nop

    ovl_demo_story_1928(rdram, ctx);
        goto after_1;
    // 0x600019A0: nop

    after_1:
    // 0x600019A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600019A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600019AC: jr          $ra
    // 0x600019B0: nop

    return;
    // 0x600019B0: nop

;}
RECOMP_FUNC void ovl_demo_story_19B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600019B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x600019BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x600019C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x600019C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x600019C8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600019CC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x600019D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600019D4: jal         0x60000868
    // 0x600019D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x600019D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600019DC: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x600019E0: nop

    // 0x600019E4: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x600019E8: jal         0x600017A4
    // 0x600019EC: nop

    ovl_demo_story_17A4(rdram, ctx);
        goto after_1;
    // 0x600019EC: nop

    after_1:
    // 0x600019F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600019F4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x600019F8: jal         0x60000874
    // 0x600019FC: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    ovl_demo_story_874(rdram, ctx);
        goto after_2;
    // 0x600019FC: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    after_2:
    // 0x60001A00: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x60001A04: nop

    // 0x60001A08: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x60001A0C: beq         $t7, $zero, L_60001B54
    if (ctx->r15 == 0) {
        // 0x60001A10: nop
    
            goto L_60001B54;
    }
    // 0x60001A10: nop

    // 0x60001A14: lw          $t8, 0x38($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X38);
    // 0x60001A18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001A1C: blez        $t8, L_60001B40
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001A20: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_60001B40;
    }
    // 0x60001A20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001A24: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x60001A28: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001A2C: nop

L_60001A30:
    // 0x60001A30: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x60001A34: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x60001A38: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60001A3C: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x60001A40: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001A44: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x60001A48: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x60001A4C: nop

    // 0x60001A50: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x60001A54: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001A58: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x60001A5C: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x60001A60: nop

    // 0x60001A64: bc1f        L_60001A74
    if (!c1cs) {
        // 0x60001A68: nop
    
            goto L_60001A74;
    }
    // 0x60001A68: nop

    // 0x60001A6C: b           L_60001A78
    // 0x60001A70: add.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f20.fl;
        goto L_60001A78;
    // 0x60001A70: add.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f20.fl;
L_60001A74:
    // 0x60001A74: sub.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f20.fl;
L_60001A78:
    // 0x60001A78: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x60001A7C: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x60001A80: nop

    // 0x60001A84: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x60001A88: nop

    // 0x60001A8C: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x60001A90: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x60001A94: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x60001A98: nop

    // 0x60001A9C: bc1f        L_60001AAC
    if (!c1cs) {
        // 0x60001AA0: nop
    
            goto L_60001AAC;
    }
    // 0x60001AA0: nop

    // 0x60001AA4: b           L_60001AB0
    // 0x60001AA8: add.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f20.fl;
        goto L_60001AB0;
    // 0x60001AA8: add.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f20.fl;
L_60001AAC:
    // 0x60001AAC: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
L_60001AB0:
    // 0x60001AB0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x60001AB4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001AB8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60001ABC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001AC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001AC4: nop

    // 0x60001AC8: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x60001ACC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x60001AD0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x60001AD4: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x60001AD8: nop

    // 0x60001ADC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001AE0: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x60001AE4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60001AE8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x60001AEC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001AF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001AF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001AF8: nop

    // 0x60001AFC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60001B00: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x60001B04: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60001B08: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x60001B0C: nop

    // 0x60001B10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001B14: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x60001B18: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001B1C: jal         0x6000055C
    // 0x60001B20: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_3;
    // 0x60001B20: nop

    after_3:
    // 0x60001B24: jal         0x6000085C
    // 0x60001B28: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_4;
    // 0x60001B28: nop

    after_4:
    // 0x60001B2C: lw          $t4, 0x38($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X38);
    // 0x60001B30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001B34: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x60001B38: bne         $at, $zero, L_60001A30
    if (ctx->r1 != 0) {
        // 0x60001B3C: nop
    
            goto L_60001A30;
    }
    // 0x60001B3C: nop

L_60001B40:
    // 0x60001B40: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001B44: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x60001B48: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x60001B4C: jal         0x6000055C
    // 0x60001B50: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_5;
    // 0x60001B50: nop

    after_5:
L_60001B54:
    // 0x60001B54: lw          $t5, 0x3C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X3C);
    // 0x60001B58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001B5C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001B60: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x60001B64: blez        $t5, L_60001B88
    if (SIGNED(ctx->r13) <= 0) {
        // 0x60001B68: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001B88;
    }
    // 0x60001B68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60001B6C:
    // 0x60001B6C: jal         0x6000085C
    // 0x60001B70: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_6;
    // 0x60001B70: nop

    after_6:
    // 0x60001B74: lw          $t6, 0x3C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X3C);
    // 0x60001B78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001B7C: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x60001B80: bne         $at, $zero, L_60001B6C
    if (ctx->r1 != 0) {
        // 0x60001B84: nop
    
            goto L_60001B6C;
    }
    // 0x60001B84: nop

L_60001B88:
    // 0x60001B88: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001B8C: nop

    // 0x60001B90: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x60001B94: beq         $t8, $zero, L_60001CBC
    if (ctx->r24 == 0) {
        // 0x60001B98: nop
    
            goto L_60001CBC;
    }
    // 0x60001B98: nop

    // 0x60001B9C: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x60001BA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001BA4: blez        $t9, L_60001CBC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60001BA8: nop
    
            goto L_60001CBC;
    }
    // 0x60001BA8: nop

L_60001BAC:
    // 0x60001BAC: lw          $t0, 0x40($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X40);
    // 0x60001BB0: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x60001BB4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x60001BB8: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x60001BBC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001BC0: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x60001BC4: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x60001BC8: nop

    // 0x60001BCC: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x60001BD0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001BD4: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x60001BD8: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x60001BDC: nop

    // 0x60001BE0: bc1f        L_60001BF0
    if (!c1cs) {
        // 0x60001BE4: nop
    
            goto L_60001BF0;
    }
    // 0x60001BE4: nop

    // 0x60001BE8: b           L_60001BF4
    // 0x60001BEC: add.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f20.fl;
        goto L_60001BF4;
    // 0x60001BEC: add.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f20.fl;
L_60001BF0:
    // 0x60001BF0: sub.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f20.fl;
L_60001BF4:
    // 0x60001BF4: lwc1        $f14, 0x48($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X48);
    // 0x60001BF8: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x60001BFC: nop

    // 0x60001C00: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x60001C04: nop

    // 0x60001C08: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60001C0C: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x60001C10: c.le.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl <= ctx->f2.fl;
    // 0x60001C14: nop

    // 0x60001C18: bc1f        L_60001C28
    if (!c1cs) {
        // 0x60001C1C: nop
    
            goto L_60001C28;
    }
    // 0x60001C1C: nop

    // 0x60001C20: b           L_60001C2C
    // 0x60001C24: add.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f20.fl;
        goto L_60001C2C;
    // 0x60001C24: add.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f20.fl;
L_60001C28:
    // 0x60001C28: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
L_60001C2C:
    // 0x60001C2C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x60001C30: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001C34: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x60001C38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001C3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001C40: nop

    // 0x60001C44: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x60001C48: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x60001C4C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x60001C50: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x60001C54: nop

    // 0x60001C58: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001C5C: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x60001C60: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x60001C64: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x60001C68: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x60001C6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001C70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001C74: nop

    // 0x60001C78: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60001C7C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x60001C80: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x60001C84: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x60001C88: nop

    // 0x60001C8C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001C90: sub.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x60001C94: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001C98: jal         0x6000055C
    // 0x60001C9C: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_7;
    // 0x60001C9C: nop

    after_7:
    // 0x60001CA0: jal         0x6000085C
    // 0x60001CA4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_8;
    // 0x60001CA4: nop

    after_8:
    // 0x60001CA8: lw          $t5, 0x40($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X40);
    // 0x60001CAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001CB0: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x60001CB4: bne         $at, $zero, L_60001BAC
    if (ctx->r1 != 0) {
        // 0x60001CB8: nop
    
            goto L_60001BAC;
    }
    // 0x60001CB8: nop

L_60001CBC:
    // 0x60001CBC: jal         0x60000838
    // 0x60001CC0: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_9;
    // 0x60001CC0: nop

    after_9:
    // 0x60001CC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60001CC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60001CCC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60001CD0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60001CD4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60001CD8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001CDC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001CE0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001CE4: jr          $ra
    // 0x60001CE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x60001CE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_demo_story_1CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001CF8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001CFC: addiu       $a0, $a0, 0x19B4
    ctx->r4 = ADD32(ctx->r4, 0X19B4);
    // 0x60001D00: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001D08: jal         0x60000820
    // 0x60001D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60001D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60001D10: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60001D14: nop

    // 0x60001D18: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60001D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001D24: jr          $ra
    // 0x60001D28: nop

    return;
    // 0x60001D28: nop

;}
RECOMP_FUNC void ovl_demo_story_1D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001D2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60001D30: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60001D34: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x60001D38: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x60001D3C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x60001D40: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001D44: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60001D48: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001D4C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60001D50: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001D54: jal         0x60000868
    // 0x60001D58: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60001D58: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60001D5C: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x60001D60: nop

    // 0x60001D64: lw          $s1, 0x4($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X4);
    // 0x60001D68: jal         0x600017A4
    // 0x60001D6C: nop

    ovl_demo_story_17A4(rdram, ctx);
        goto after_1;
    // 0x60001D6C: nop

    after_1:
    // 0x60001D70: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001D74: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x60001D78: jal         0x60000874
    // 0x60001D7C: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    ovl_demo_story_874(rdram, ctx);
        goto after_2;
    // 0x60001D7C: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    after_2:
    // 0x60001D80: lw          $t6, 0x38($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X38);
    // 0x60001D84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001D88: blez        $t6, L_60001E2C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x60001D8C: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_60001E2C;
    }
    // 0x60001D8C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x60001D90: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001D94: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001D98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001D9C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60001DA0: nop

L_60001DA4:
    // 0x60001DA4: lw          $t7, 0x38($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X38);
    // 0x60001DA8: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x60001DAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001DB0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001DB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001DB8: nop

    // 0x60001DBC: div.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f22.fl, ctx->f6.fl);
    // 0x60001DC0: mul.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60001DC4: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60001DC8: nop

    // 0x60001DCC: bc1f        L_60001DDC
    if (!c1cs) {
        // 0x60001DD0: nop
    
            goto L_60001DDC;
    }
    // 0x60001DD0: nop

    // 0x60001DD4: b           L_60001DE0
    // 0x60001DD8: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60001DE0;
    // 0x60001DD8: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60001DDC:
    // 0x60001DDC: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_60001DE0:
    // 0x60001DE0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60001DE4: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x60001DE8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60001DEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001DF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001DF4: nop

    // 0x60001DF8: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60001DFC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x60001E00: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60001E04: jal         0x600005D4
    // 0x60001E08: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_3;
    // 0x60001E08: nop

    after_3:
    // 0x60001E0C: jal         0x6000085C
    // 0x60001E10: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_4;
    // 0x60001E10: nop

    after_4:
    // 0x60001E14: lw          $t9, 0x38($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X38);
    // 0x60001E18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001E1C: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x60001E20: bne         $at, $zero, L_60001DA4
    if (ctx->r1 != 0) {
        // 0x60001E24: nop
    
            goto L_60001DA4;
    }
    // 0x60001E24: nop

    // 0x60001E28: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001E2C:
    // 0x60001E2C: lw          $t0, 0x3C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X3C);
    // 0x60001E30: nop

    // 0x60001E34: blez        $t0, L_60001E58
    if (SIGNED(ctx->r8) <= 0) {
        // 0x60001E38: nop
    
            goto L_60001E58;
    }
    // 0x60001E38: nop

L_60001E3C:
    // 0x60001E3C: jal         0x6000085C
    // 0x60001E40: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x60001E40: nop

    after_5:
    // 0x60001E44: lw          $t1, 0x3C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X3C);
    // 0x60001E48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001E4C: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x60001E50: bne         $at, $zero, L_60001E3C
    if (ctx->r1 != 0) {
        // 0x60001E54: nop
    
            goto L_60001E3C;
    }
    // 0x60001E54: nop

L_60001E58:
    // 0x60001E58: jal         0x60000838
    // 0x60001E5C: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_6;
    // 0x60001E5C: nop

    after_6:
    // 0x60001E60: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60001E64: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60001E68: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60001E6C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60001E70: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60001E74: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60001E78: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001E7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x60001E80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x60001E84: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x60001E88: jr          $ra
    // 0x60001E8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60001E8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_demo_story_1E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001E94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001E9C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001EA0: addiu       $a0, $a0, 0x1D2C
    ctx->r4 = ADD32(ctx->r4, 0X1D2C);
    // 0x60001EA4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001EA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001EAC: jal         0x60000820
    // 0x60001EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60001EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60001EB4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60001EB8: nop

    // 0x60001EBC: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60001EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001EC8: jr          $ra
    // 0x60001ECC: nop

    return;
    // 0x60001ECC: nop

;}
RECOMP_FUNC void ovl_demo_story_1ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001ED0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60001ED4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x60001ED8: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x60001EDC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x60001EE0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x60001EE4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x60001EE8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x60001EEC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x60001EF0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x60001EF4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001EF8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60001EFC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001F00: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60001F04: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001F08: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60001F0C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001F10: jal         0x60000868
    // 0x60001F14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60001F14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60001F18: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x60001F1C: nop

    // 0x60001F20: lw          $s0, 0x4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X4);
    // 0x60001F24: jal         0x600017A4
    // 0x60001F28: nop

    ovl_demo_story_17A4(rdram, ctx);
        goto after_1;
    // 0x60001F28: nop

    after_1:
    // 0x60001F2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001F30: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x60001F34: jal         0x60000874
    // 0x60001F38: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    ovl_demo_story_874(rdram, ctx);
        goto after_2;
    // 0x60001F38: addiu       $a0, $a0, 0x1988
    ctx->r4 = ADD32(ctx->r4, 0X1988);
    after_2:
    // 0x60001F3C: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x60001F40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001F44: blez        $t6, L_600020D4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x60001F48: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_600020D4;
    }
    // 0x60001F48: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x60001F4C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60001F50: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x60001F54: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60001F58: addiu       $s6, $zero, 0xBB9
    ctx->r22 = ADD32(0, 0XBB9);
    // 0x60001F5C: addiu       $s5, $zero, 0xBB8
    ctx->r21 = ADD32(0, 0XBB8);
    // 0x60001F60: addiu       $s4, $zero, 0xBB7
    ctx->r20 = ADD32(0, 0XBB7);
L_60001F64:
    // 0x60001F64: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60001F68: addiu       $t7, $s1, 0x1
    ctx->r15 = ADD32(ctx->r17, 0X1);
    // 0x60001F6C: bne         $s4, $v0, L_60001FDC
    if (ctx->r20 != ctx->r2) {
        // 0x60001F70: nop
    
            goto L_60001FDC;
    }
    // 0x60001F70: nop

    // 0x60001F74: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001F78: nop

    // 0x60001F7C: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001F80: mul.s       $f12, $f20, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x60001F84: jal         0x6000031C
    // 0x60001F88: nop

    ovl_demo_story_31C(rdram, ctx);
        goto after_3;
    // 0x60001F88: nop

    after_3:
    // 0x60001F8C: mul.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x60001F90: jal         0x6000031C
    // 0x60001F94: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_4;
    // 0x60001F94: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_4:
    // 0x60001F98: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x60001F9C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x60001FA0: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x60001FA4: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x60001FA8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x60001FAC: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x60001FB0: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x60001FB4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60001FB8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x60001FBC: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x60001FC0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x60001FC4: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x60001FC8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x60001FCC: jal         0x6000055C
    // 0x60001FD0: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_5;
    // 0x60001FD0: nop

    after_5:
    // 0x60001FD4: b           L_600020B4
    // 0x60001FD8: nop

        goto L_600020B4;
    // 0x60001FD8: nop

L_60001FDC:
    // 0x60001FDC: bne         $s5, $v0, L_6000204C
    if (ctx->r21 != ctx->r2) {
        // 0x60001FE0: addiu       $t8, $s1, 0x1
        ctx->r24 = ADD32(ctx->r17, 0X1);
            goto L_6000204C;
    }
    // 0x60001FE0: addiu       $t8, $s1, 0x1
    ctx->r24 = ADD32(ctx->r17, 0X1);
    // 0x60001FE4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x60001FE8: nop

    // 0x60001FEC: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001FF0: mul.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x60001FF4: jal         0x6000031C
    // 0x60001FF8: nop

    ovl_demo_story_31C(rdram, ctx);
        goto after_6;
    // 0x60001FF8: nop

    after_6:
    // 0x60001FFC: mul.s       $f12, $f20, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x60002000: jal         0x6000031C
    // 0x60002004: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_7;
    // 0x60002004: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_7:
    // 0x60002008: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x6000200C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x60002010: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    // 0x60002014: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x60002018: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x6000201C: mul.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x60002020: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x60002024: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60002028: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x6000202C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x60002030: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x60002034: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x60002038: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x6000203C: jal         0x6000055C
    // 0x60002040: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_8;
    // 0x60002040: nop

    after_8:
    // 0x60002044: b           L_600020B4
    // 0x60002048: nop

        goto L_600020B4;
    // 0x60002048: nop

L_6000204C:
    // 0x6000204C: bne         $s6, $v0, L_600020B4
    if (ctx->r22 != ctx->r2) {
        // 0x60002050: addiu       $t9, $s1, 0x1
        ctx->r25 = ADD32(ctx->r17, 0X1);
            goto L_600020B4;
    }
    // 0x60002050: addiu       $t9, $s1, 0x1
    ctx->r25 = ADD32(ctx->r17, 0X1);
    // 0x60002054: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60002058: nop

    // 0x6000205C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60002060: mul.s       $f20, $f6, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x60002064: jal         0x6000031C
    // 0x60002068: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_9;
    // 0x60002068: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_9:
    // 0x6000206C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x60002070: jal         0x60000310
    // 0x60002074: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_demo_story_310(rdram, ctx);
        goto after_10;
    // 0x60002074: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_10:
    // 0x60002078: lwc1        $f2, 0x44($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X44);
    // 0x6000207C: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x60002080: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x60002084: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x60002088: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x6000208C: mul.s       $f16, $f22, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x60002090: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x60002094: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60002098: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x6000209C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x600020A0: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x600020A4: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x600020A8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x600020AC: jal         0x6000055C
    // 0x600020B0: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_11;
    // 0x600020B0: nop

    after_11:
L_600020B4:
    // 0x600020B4: jal         0x6000085C
    // 0x600020B8: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    ovl_demo_story_85C(rdram, ctx);
        goto after_12;
    // 0x600020B8: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    after_12:
    // 0x600020BC: lw          $t0, 0x38($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X38);
    // 0x600020C0: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x600020C4: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x600020C8: bne         $at, $zero, L_60001F64
    if (ctx->r1 != 0) {
        // 0x600020CC: nop
    
            goto L_60001F64;
    }
    // 0x600020CC: nop

    // 0x600020D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_600020D4:
    // 0x600020D4: jal         0x60000244
    // 0x600020D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_244(rdram, ctx);
        goto after_13;
    // 0x600020D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x600020DC: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
    // 0x600020E0: nop

    // 0x600020E4: blez        $t1, L_60002108
    if (SIGNED(ctx->r9) <= 0) {
        // 0x600020E8: nop
    
            goto L_60002108;
    }
    // 0x600020E8: nop

L_600020EC:
    // 0x600020EC: jal         0x6000085C
    // 0x600020F0: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_14;
    // 0x600020F0: nop

    after_14:
    // 0x600020F4: lw          $t2, 0x3C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X3C);
    // 0x600020F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600020FC: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x60002100: bne         $at, $zero, L_600020EC
    if (ctx->r1 != 0) {
        // 0x60002104: nop
    
            goto L_600020EC;
    }
    // 0x60002104: nop

L_60002108:
    // 0x60002108: jal         0x60000838
    // 0x6000210C: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_15;
    // 0x6000210C: nop

    after_15:
    // 0x60002110: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x60002114: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002118: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000211C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002120: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002124: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002128: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000212C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002130: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002134: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x60002138: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x6000213C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x60002140: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x60002144: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x60002148: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x6000214C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x60002150: jr          $ra
    // 0x60002154: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60002154: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_demo_story_2158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000215C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002164: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002168: addiu       $a0, $a0, 0x1ED0
    ctx->r4 = ADD32(ctx->r4, 0X1ED0);
    // 0x6000216C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002174: jal         0x60000820
    // 0x60002178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60002178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x6000217C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60002180: nop

    // 0x60002184: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60002188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000218C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002190: jr          $ra
    // 0x60002194: nop

    return;
    // 0x60002194: nop

;}
RECOMP_FUNC void ovl_demo_story_2198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002198: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x6000219C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600021A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600021A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600021A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600021AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600021B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600021B4: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
    // 0x600021B8: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x600021BC: beq         $s4, $s1, L_6000227C
    if (ctx->r20 == ctx->r17) {
        // 0x600021C0: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_6000227C;
    }
    // 0x600021C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x600021C4: addiu       $s3, $zero, -0x21
    ctx->r19 = ADD32(0, -0X21);
    // 0x600021C8: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_600021CC:
    // 0x600021CC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x600021D0: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x600021D4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x600021D8: jal         0x6000156C
    // 0x600021DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_156C(rdram, ctx);
        goto after_0;
    // 0x600021DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x600021E0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x600021E4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x600021E8: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x600021EC: beq         $t6, $zero, L_60002230
    if (ctx->r14 == 0) {
        // 0x600021F0: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_60002230;
    }
    // 0x600021F0: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x600021F4: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x600021F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x600021FC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x60002200: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x60002204: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002208: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x6000220C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x60002210: nop

    // 0x60002214: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x60002218: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x6000221C: jal         0x600006C4
    // 0x60002220: nop

    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x60002220: nop

    after_1:
    // 0x60002224: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x60002228: nop

    // 0x6000222C: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
L_60002230:
    // 0x60002230: beq         $t7, $zero, L_6000226C
    if (ctx->r15 == 0) {
        // 0x60002234: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_6000226C;
    }
    // 0x60002234: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002238: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x6000223C: jal         0x600006C4
    // 0x60002240: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_2;
    // 0x60002240: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60002244: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x60002248: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x6000224C: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x60002250: and         $t1, $t0, $s3
    ctx->r9 = ctx->r8 & ctx->r19;
    // 0x60002254: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x60002258: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x6000225C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60002260: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60002264: jal         0x600006C4
    // 0x60002268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_3;
    // 0x60002268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
L_6000226C:
    // 0x6000226C: lw          $s1, 0x24($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X24);
    // 0x60002270: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x60002274: bne         $s4, $s1, L_600021CC
    if (ctx->r20 != ctx->r17) {
        // 0x60002278: nop
    
            goto L_600021CC;
    }
    // 0x60002278: nop

L_6000227C:
    // 0x6000227C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002284: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002288: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x6000228C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002290: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002294: jr          $ra
    // 0x60002298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60002298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_demo_story_229C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000229C: jr          $ra
    // 0x600022A0: nop

    return;
    // 0x600022A0: nop

    // 0x600022A4: jr          $ra
    // 0x600022A8: nop

    return;
    // 0x600022A8: nop

;}
RECOMP_FUNC void ovl_demo_story_22AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600022AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x600022B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600022B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600022B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600022BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600022C0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x600022C4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x600022C8: beq         $s1, $t6, L_600022F4
    if (ctx->r17 == ctx->r14) {
        // 0x600022CC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_600022F4;
    }
    // 0x600022CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x600022D0: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
L_600022D4:
    // 0x600022D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600022D8: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x600022DC: jal         0x600006C4
    // 0x600022E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_0;
    // 0x600022E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x600022E4: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x600022E8: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x600022EC: bne         $s1, $t7, L_600022D4
    if (ctx->r17 != ctx->r15) {
        // 0x600022F0: nop
    
            goto L_600022D4;
    }
    // 0x600022F0: nop

L_600022F4:
    // 0x600022F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600022F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600022FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002300: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002304: jr          $ra
    // 0x60002308: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002308: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_demo_story_230C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000230C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60002310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002314: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x60002318: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x6000231C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x60002320: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60002324: jal         0x600006C4
    // 0x60002328: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_0;
    // 0x60002328: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x6000232C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x60002330: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x60002334: beq         $t7, $zero, L_6000235C
    if (ctx->r15 == 0) {
        // 0x60002338: ori         $t3, $t2, 0x4
        ctx->r11 = ctx->r10 | 0X4;
            goto L_6000235C;
    }
    // 0x60002338: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x6000233C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60002340: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x60002344: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60002348: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x6000234C: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x60002350: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x60002354: b           L_60002370
    // 0x60002358: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
        goto L_60002370;
    // 0x60002358: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_6000235C:
    // 0x6000235C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60002360: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60002364: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60002368: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x6000236C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_60002370:
    // 0x60002370: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x60002374: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60002378: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x6000237C: jal         0x600006C4
    // 0x60002380: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x60002380: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x60002384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x6000238C: jr          $ra
    // 0x60002390: nop

    return;
    // 0x60002390: nop

;}
RECOMP_FUNC void ovl_demo_story_2394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002394: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x60002398: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x6000239C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x600023A0: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x600023A4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x600023A8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x600023AC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x600023B0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x600023B4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x600023B8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x600023BC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x600023C0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x600023C4: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x600023C8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x600023CC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x600023D0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x600023D4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600023D8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x600023DC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600023E0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x600023E4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600023E8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x600023EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600023F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600023F4: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x600023F8: beq         $at, $zero, L_60002448
    if (ctx->r1 == 0) {
        // 0x600023FC: or          $fp, $a1, $zero
        ctx->r30 = ctx->r5 | 0;
            goto L_60002448;
    }
    // 0x600023FC: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x60002400: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x60002404: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002408: addu        $at, $at, $t6
    gpr jr_addend_60002414 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x6000240C: lw          $t6, 0x7930($at)
    ctx->r14 = ADD32(ctx->r1, 0X7930);
    // 0x60002410: nop

    // 0x60002414: jr          $t6
    // 0x60002418: nop

    switch (jr_addend_60002414 >> 2) {
        case 0: goto L_6000241C; break;
        case 1: goto L_6000241C; break;
        case 2: goto L_60002428; break;
        case 3: goto L_60002434; break;
        case 4: goto L_60002440; break;
        default: switch_error(__func__, 0x60002414, 0x60007930);
    }
    // 0x60002418: nop

L_6000241C:
    // 0x6000241C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x60002420: b           L_60002448
    // 0x60002424: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
        goto L_60002448;
    // 0x60002424: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
L_60002428:
    // 0x60002428: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x6000242C: b           L_60002448
    // 0x60002430: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
        goto L_60002448;
    // 0x60002430: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
L_60002434:
    // 0x60002434: addiu       $t9, $zero, 0xD2
    ctx->r25 = ADD32(0, 0XD2);
    // 0x60002438: b           L_60002448
    // 0x6000243C: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
        goto L_60002448;
    // 0x6000243C: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
L_60002440:
    // 0x60002440: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x60002444: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
L_60002448:
    // 0x60002448: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x6000244C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x60002450: blez        $t1, L_6000260C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x60002454: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_6000260C;
    }
    // 0x60002454: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60002458: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x6000245C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x60002460: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002464: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002468: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x6000246C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002470: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60002474: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60002478: lwc1        $f22, 0x7944($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7944);
    // 0x6000247C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60002480: addiu       $s2, $s2, 0x7518
    ctx->r18 = ADD32(ctx->r18, 0X7518);
    // 0x60002484: addiu       $s3, $s3, 0x751C
    ctx->r19 = ADD32(ctx->r19, 0X751C);
    // 0x60002488: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x6000248C: addiu       $s4, $sp, 0x90
    ctx->r20 = ADD32(ctx->r29, 0X90);
L_60002490:
    // 0x60002490: jal         0x60000F50
    // 0x60002494: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_0;
    // 0x60002494: nop

    after_0:
    // 0x60002498: beq         $v0, $zero, L_600024B4
    if (ctx->r2 == 0) {
        // 0x6000249C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600024B4;
    }
    // 0x6000249C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600024A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600024A4: jal         0x600022AC
    // 0x600024A8: addiu       $a0, $a0, 0x68EC
    ctx->r4 = ADD32(ctx->r4, 0X68EC);
    ovl_demo_story_22AC(rdram, ctx);
        goto after_1;
    // 0x600024A8: addiu       $a0, $a0, 0x68EC
    ctx->r4 = ADD32(ctx->r4, 0X68EC);
    after_1:
    // 0x600024AC: b           L_60002610
    // 0x600024B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_60002610;
    // 0x600024B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_600024B4:
    // 0x600024B4: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x600024B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600024BC: beq         $s5, $t2, L_60002538
    if (ctx->r21 == ctx->r10) {
        // 0x600024C0: or          $s0, $s7, $zero
        ctx->r16 = ctx->r23 | 0;
            goto L_60002538;
    }
    // 0x600024C0: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
L_600024C4:
    // 0x600024C4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600024C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600024CC: jal         0x600006C4
    // 0x600024D0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_2;
    // 0x600024D0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x600024D4: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x600024D8: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x600024DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600024E0: mul.s       $f20, $f6, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x600024E4: jal         0x60000310
    // 0x600024E8: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    ovl_demo_story_310(rdram, ctx);
        goto after_3;
    // 0x600024E8: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    after_3:
    // 0x600024EC: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x600024F0: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x600024F4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x600024F8: add.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x600024FC: jal         0x6000031C
    // 0x60002500: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    ovl_demo_story_31C(rdram, ctx);
        goto after_4;
    // 0x60002500: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x60002504: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x60002508: swc1        $f24, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f24.u32l;
    // 0x6000250C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x60002510: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002514: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60002518: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x6000251C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60002520: jal         0x600006C4
    // 0x60002524: nop

    ovl_demo_story_6C4(rdram, ctx);
        goto after_5;
    // 0x60002524: nop

    after_5:
    // 0x60002528: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x6000252C: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x60002530: bne         $s5, $t3, L_600024C4
    if (ctx->r21 != ctx->r11) {
        // 0x60002534: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_600024C4;
    }
    // 0x60002534: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002538:
    // 0x60002538: sltiu       $at, $fp, 0x5
    ctx->r1 = ctx->r30 < 0X5 ? 1 : 0;
    // 0x6000253C: beq         $at, $zero, L_600025F4
    if (ctx->r1 == 0) {
        // 0x60002540: sll         $t4, $fp, 2
        ctx->r12 = S32(ctx->r30 << 2);
            goto L_600025F4;
    }
    // 0x60002540: sll         $t4, $fp, 2
    ctx->r12 = S32(ctx->r30 << 2);
    // 0x60002544: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002548: addu        $at, $at, $t4
    gpr jr_addend_60002554 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x6000254C: lw          $t4, 0x7948($at)
    ctx->r12 = ADD32(ctx->r1, 0X7948);
    // 0x60002550: nop

    // 0x60002554: jr          $t4
    // 0x60002558: nop

    switch (jr_addend_60002554 >> 2) {
        case 0: goto L_6000255C; break;
        case 1: goto L_6000259C; break;
        case 2: goto L_600025B8; break;
        case 3: goto L_6000259C; break;
        case 4: goto L_6000259C; break;
        default: switch_error(__func__, 0x60002554, 0x60007948);
    }
    // 0x60002558: nop

L_6000255C:
    // 0x6000255C: addiu       $t5, $s6, 0x1
    ctx->r13 = ADD32(ctx->r22, 0X1);
    // 0x60002560: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x60002564: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x60002568: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x6000256C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002570: nop

    // 0x60002574: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x60002578: jal         0x6000031C
    // 0x6000257C: nop

    ovl_demo_story_31C(rdram, ctx);
        goto after_6;
    // 0x6000257C: nop

    after_6:
    // 0x60002580: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x60002584: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x60002588: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x6000258C: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x60002590: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
    // 0x60002594: b           L_600025F4
    // 0x60002598: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
        goto L_600025F4;
    // 0x60002598: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
L_6000259C:
    // 0x6000259C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x600025A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600025A4: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x600025A8: swc1        $f26, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f26.u32l;
    // 0x600025AC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600025B0: b           L_600025F4
    // 0x600025B4: swc1        $f18, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f18.u32l;
        goto L_600025F4;
    // 0x600025B4: swc1        $f18, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f18.u32l;
L_600025B8:
    // 0x600025B8: addiu       $t6, $s6, 0x1
    ctx->r14 = ADD32(ctx->r22, 0X1);
    // 0x600025BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x600025C0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x600025C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600025C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600025CC: nop

    // 0x600025D0: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600025D4: jal         0x60000310
    // 0x600025D8: nop

    ovl_demo_story_310(rdram, ctx);
        goto after_7;
    // 0x600025D8: nop

    after_7:
    // 0x600025DC: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x600025E0: lwc1        $f18, 0x0($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X0);
    // 0x600025E4: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x600025E8: add.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x600025EC: swc1        $f16, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f16.u32l;
    // 0x600025F0: swc1        $f4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f4.u32l;
L_600025F4:
    // 0x600025F4: jal         0x6000085C
    // 0x600025F8: addiu       $s0, $s6, 0x1
    ctx->r16 = ADD32(ctx->r22, 0X1);
    ovl_demo_story_85C(rdram, ctx);
        goto after_8;
    // 0x600025F8: addiu       $s0, $s6, 0x1
    ctx->r16 = ADD32(ctx->r22, 0X1);
    after_8:
    // 0x600025FC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x60002600: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x60002604: bne         $s0, $t7, L_60002490
    if (ctx->r16 != ctx->r15) {
        // 0x60002608: nop
    
            goto L_60002490;
    }
    // 0x60002608: nop

L_6000260C:
    // 0x6000260C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002610:
    // 0x60002610: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x60002614: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002618: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000261C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002620: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002624: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002628: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000262C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002630: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002634: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002638: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000263C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002640: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002644: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60002648: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x6000264C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60002650: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x60002654: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60002658: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x6000265C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x60002660: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x60002664: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x60002668: jr          $ra
    // 0x6000266C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x6000266C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_demo_story_2670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002670: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60002674: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x60002678: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000267C: lwc1        $f26, 0x795C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X795C);
    // 0x60002680: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60002684: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002688: lwc1        $f24, 0x7960($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X7960);
    // 0x6000268C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x60002690: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60002694: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60002698: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x6000269C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x600026A0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600026A4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600026A8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x600026AC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600026B0: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600026B4: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600026B8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600026BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600026C0: addiu       $s0, $s0, 0x68A4
    ctx->r16 = ADD32(ctx->r16, 0X68A4);
    // 0x600026C4: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x600026C8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_600026CC:
    // 0x600026CC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600026D0: jal         0x600006C4
    // 0x600026D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_0;
    // 0x600026D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x600026D8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x600026DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x600026E0: add.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x600026E4: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x600026E8: nop

    // 0x600026EC: bc1f        L_60002700
    if (!c1cs) {
        // 0x600026F0: nop
    
            goto L_60002700;
    }
    // 0x600026F0: nop

    // 0x600026F4: sub.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x600026F8: b           L_60002720
    // 0x600026FC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
        goto L_60002720;
    // 0x600026FC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
L_60002700:
    // 0x60002700: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x60002704: nop

    // 0x60002708: bc1f        L_60002718
    if (!c1cs) {
        // 0x6000270C: nop
    
            goto L_60002718;
    }
    // 0x6000270C: nop

    // 0x60002710: b           L_6000271C
    // 0x60002714: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_6000271C;
    // 0x60002714: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60002718:
    // 0x60002718: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_6000271C:
    // 0x6000271C: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
L_60002720:
    // 0x60002720: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60002724: nop

    // 0x60002728: add.s       $f0, $f8, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x6000272C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x60002730: nop

    // 0x60002734: bc1f        L_60002748
    if (!c1cs) {
        // 0x60002738: nop
    
            goto L_60002748;
    }
    // 0x60002738: nop

    // 0x6000273C: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x60002740: b           L_60002768
    // 0x60002744: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
        goto L_60002768;
    // 0x60002744: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
L_60002748:
    // 0x60002748: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x6000274C: nop

    // 0x60002750: bc1f        L_60002760
    if (!c1cs) {
        // 0x60002754: nop
    
            goto L_60002760;
    }
    // 0x60002754: nop

    // 0x60002758: b           L_60002764
    // 0x6000275C: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60002764;
    // 0x6000275C: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60002760:
    // 0x60002760: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60002764:
    // 0x60002764: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
L_60002768:
    // 0x60002768: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x6000276C: jal         0x600006C4
    // 0x60002770: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x60002770: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x60002774: jal         0x6000085C
    // 0x60002778: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_2;
    // 0x60002778: nop

    after_2:
    // 0x6000277C: b           L_600026CC
    // 0x60002780: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
        goto L_600026CC;
    // 0x60002780: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60002784: nop

    // 0x60002788: nop

    // 0x6000278C: nop

    // 0x60002790: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60002794: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60002798: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000279C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600027A0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600027A4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600027A8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600027AC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600027B0: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600027B4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x600027B8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x600027BC: jr          $ra
    // 0x600027C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x600027C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_demo_story_27C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600027C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600027CC: jal         0x60000868
    // 0x600027D0: nop

    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x600027D0: nop

    after_0:
    // 0x600027D4: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x600027D8: jal         0x600006AC
    // 0x600027DC: nop

    ovl_demo_story_6AC(rdram, ctx);
        goto after_1;
    // 0x600027DC: nop

    after_1:
    // 0x600027E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600027E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600027E8: jr          $ra
    // 0x600027EC: nop

    return;
    // 0x600027EC: nop

;}
RECOMP_FUNC void ovl_demo_story_27F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600027F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600027F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600027FC: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002800: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002808: addiu       $s1, $s1, 0x74DC
    ctx->r17 = ADD32(ctx->r17, 0X74DC);
    // 0x6000280C: addiu       $s0, $s0, 0x7398
    ctx->r16 = ADD32(ctx->r16, 0X7398);
L_60002810:
    // 0x60002810: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60002814: nop

    // 0x60002818: beq         $a0, $zero, L_60002828
    if (ctx->r4 == 0) {
        // 0x6000281C: nop
    
            goto L_60002828;
    }
    // 0x6000281C: nop

    // 0x60002820: jal         0x600006AC
    // 0x60002824: nop

    ovl_demo_story_6AC(rdram, ctx);
        goto after_0;
    // 0x60002824: nop

    after_0:
L_60002828:
    // 0x60002828: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x6000282C: bne         $s0, $s1, L_60002810
    if (ctx->r16 != ctx->r17) {
        // 0x60002830: nop
    
            goto L_60002810;
    }
    // 0x60002830: nop

    // 0x60002834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002838: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000283C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002840: jr          $ra
    // 0x60002844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60002844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_2848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002848: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x6000284C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002850: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x60002854: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x60002858: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x6000285C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002860: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x60002864: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x60002868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000286C: sub.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x60002870: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60002874: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x60002878: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x6000287C: bc1f        L_6000296C
    if (!c1cs) {
        // 0x60002880: nop
    
            goto L_6000296C;
    }
    // 0x60002880: nop

    // 0x60002884: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x60002888: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x6000288C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x60002890: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x60002894: jal         0x6000055C
    // 0x60002898: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_demo_story_55C(rdram, ctx);
        goto after_0;
    // 0x60002898: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x6000289C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x600028A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600028A4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x600028A8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x600028AC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x600028B0: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x600028B4: bc1f        L_600028DC
    if (!c1cs) {
        // 0x600028B8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_600028DC;
    }
    // 0x600028B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x600028BC: nop

    // 0x600028C0: div.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f14.fl);
    // 0x600028C4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x600028C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600028CC: nop

    // 0x600028D0: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x600028D4: b           L_60002908
    // 0x600028D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
        goto L_60002908;
    // 0x600028D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_600028DC:
    // 0x600028DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600028E0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600028E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600028E8: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x600028EC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x600028F0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x600028F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600028F8: nop

    // 0x600028FC: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x60002900: nop

    // 0x60002904: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_60002908:
    // 0x60002908: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x6000290C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x60002910: nop

    // 0x60002914: bc1f        L_6000292C
    if (!c1cs) {
        // 0x60002918: nop
    
            goto L_6000292C;
    }
    // 0x60002918: nop

    // 0x6000291C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60002920: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002924: b           L_60002938
    // 0x60002928: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
        goto L_60002938;
    // 0x60002928: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
L_6000292C:
    // 0x6000292C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002930: nop

    // 0x60002934: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
L_60002938:
    // 0x60002938: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x6000293C: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x60002940: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60002944: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60002948: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000294C: nop

    // 0x60002950: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60002954: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x60002958: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x6000295C: jal         0x600005D4
    // 0x60002960: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_1;
    // 0x60002960: nop

    after_1:
    // 0x60002964: b           L_60002984
    // 0x60002968: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60002984;
    // 0x60002968: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_6000296C:
    // 0x6000296C: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x60002970: jal         0x600006AC
    // 0x60002974: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_demo_story_6AC(rdram, ctx);
        goto after_2;
    // 0x60002974: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_2:
    // 0x60002978: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x6000297C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60002980: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
L_60002984:
    // 0x60002984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002988: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x6000298C: jr          $ra
    // 0x60002990: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60002990: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_demo_story_2994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002994: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60002998: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000299C: sw          $zero, 0x739C($at)
    MEM_W(0X739C, ctx->r1) = 0;
    // 0x600029A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029A4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x600029A8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x600029AC: sw          $zero, 0x73A8($at)
    MEM_W(0X73A8, ctx->r1) = 0;
    // 0x600029B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029B4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600029B8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600029BC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x600029C0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x600029C4: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x600029C8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x600029CC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x600029D0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x600029D4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x600029D8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x600029DC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x600029E0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x600029E4: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600029E8: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x600029EC: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600029F0: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x600029F4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600029F8: addiu       $v0, $v0, 0x74DC
    ctx->r2 = ADD32(ctx->r2, 0X74DC);
    // 0x600029FC: addiu       $s0, $s0, 0x73BC
    ctx->r16 = ADD32(ctx->r16, 0X73BC);
    // 0x60002A00: sw          $zero, 0x73B4($at)
    MEM_W(0X73B4, ctx->r1) = 0;
L_60002A04:
    // 0x60002A04: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x60002A08: sw          $zero, -0x20($s0)
    MEM_W(-0X20, ctx->r16) = 0;
    // 0x60002A0C: sw          $zero, -0x14($s0)
    MEM_W(-0X14, ctx->r16) = 0;
    // 0x60002A10: sw          $zero, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = 0;
    // 0x60002A14: bne         $s0, $v0, L_60002A04
    if (ctx->r16 != ctx->r2) {
        // 0x60002A18: sw          $zero, -0x2C($s0)
        MEM_W(-0X2C, ctx->r16) = 0;
            goto L_60002A04;
    }
    // 0x60002A18: sw          $zero, -0x2C($s0)
    MEM_W(-0X2C, ctx->r16) = 0;
    // 0x60002A1C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A20: jal         0x60000874
    // 0x60002A24: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    ovl_demo_story_874(rdram, ctx);
        goto after_0;
    // 0x60002A24: addiu       $a0, $a0, 0x27F0
    ctx->r4 = ADD32(ctx->r4, 0X27F0);
    after_0:
    // 0x60002A28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60002A2C: lui         $s6, 0x6000
    ctx->r22 = S32(0X6000 << 16);
    // 0x60002A30: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002A34: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60002A38: addiu       $s6, $s6, 0x7398
    ctx->r22 = ADD32(ctx->r22, 0X7398);
    // 0x60002A3C: addiu       $fp, $zero, -0x2
    ctx->r30 = ADD32(0, -0X2);
    // 0x60002A40: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x60002A44: addiu       $s5, $zero, 0x22
    ctx->r21 = ADD32(0, 0X22);
    // 0x60002A48: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
L_60002A4C:
    // 0x60002A4C: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60002A50: addiu       $s6, $s6, 0xC
    ctx->r22 = ADD32(ctx->r22, 0XC);
    // 0x60002A54: bne         $s7, $a3, L_60002A68
    if (ctx->r23 != ctx->r7) {
        // 0x60002A58: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_60002A68;
    }
    // 0x60002A58: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60002A5C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x60002A60: b           L_60002AB8
    // 0x60002A64: addiu       $s6, $s6, -0xC
    ctx->r22 = ADD32(ctx->r22, -0XC);
        goto L_60002AB8;
    // 0x60002A64: addiu       $s6, $s6, -0xC
    ctx->r22 = ADD32(ctx->r22, -0XC);
L_60002A68:
    // 0x60002A68: beq         $fp, $a3, L_60002AB8
    if (ctx->r30 == ctx->r7) {
        // 0x60002A6C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_60002AB8;
    }
    // 0x60002A6C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002A70: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x60002A74: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002A78: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x60002A7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60002A80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60002A84: lw          $a2, 0x7A00($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7A00);
    // 0x60002A88: cvt.w.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = CVT_W_S(ctx->f20.fl);
    // 0x60002A8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60002A90: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x60002A94: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x60002A98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60002A9C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x60002AA0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x60002AA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60002AA8: jal         0x600006B8
    // 0x60002AAC: cvt.s.w     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    ctx->f24.fl = CVT_S_W(ctx->f6.u32l);
    ovl_demo_story_6B8(rdram, ctx);
        goto after_1;
    // 0x60002AAC: cvt.s.w     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    ctx->f24.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x60002AB0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x60002AB4: swc1        $f24, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f24.u32l;
L_60002AB8:
    // 0x60002AB8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_60002ABC:
    // 0x60002ABC: jal         0x60000F50
    // 0x60002AC0: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_2;
    // 0x60002AC0: nop

    after_2:
    // 0x60002AC4: beq         $v0, $zero, L_60002AD8
    if (ctx->r2 == 0) {
        // 0x60002AC8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_60002AD8;
    }
    // 0x60002AC8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60002ACC: jal         0x60000838
    // 0x60002AD0: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_3;
    // 0x60002AD0: nop

    after_3:
    // 0x60002AD4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_60002AD8:
    // 0x60002AD8: blez        $s3, L_60002B14
    if (SIGNED(ctx->r19) <= 0) {
        // 0x60002ADC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60002B14;
    }
    // 0x60002ADC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002AE0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002AE4: addiu       $s0, $s0, 0x7398
    ctx->r16 = ADD32(ctx->r16, 0X7398);
L_60002AE8:
    // 0x60002AE8: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x60002AEC: nop

    // 0x60002AF0: beq         $t9, $zero, L_60002B08
    if (ctx->r25 == 0) {
        // 0x60002AF4: nop
    
            goto L_60002B08;
    }
    // 0x60002AF4: nop

    // 0x60002AF8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60002AFC: jal         0x60002848
    // 0x60002B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_2848(rdram, ctx);
        goto after_4;
    // 0x60002B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x60002B04: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
L_60002B08:
    // 0x60002B08: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002B0C: bne         $s1, $s3, L_60002AE8
    if (ctx->r17 != ctx->r19) {
        // 0x60002B10: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_60002AE8;
    }
    // 0x60002B10: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_60002B14:
    // 0x60002B14: beq         $s2, $zero, L_60002B2C
    if (ctx->r18 == 0) {
        // 0x60002B18: nop
    
            goto L_60002B2C;
    }
    // 0x60002B18: nop

    // 0x60002B1C: jal         0x6000085C
    // 0x60002B20: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x60002B20: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_5:
    // 0x60002B24: b           L_60002B38
    // 0x60002B28: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_60002B38;
    // 0x60002B28: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_60002B2C:
    // 0x60002B2C: jal         0x60000838
    // 0x60002B30: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_6;
    // 0x60002B30: nop

    after_6:
    // 0x60002B34: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_60002B38:
    // 0x60002B38: bne         $s4, $s5, L_60002ABC
    if (ctx->r20 != ctx->r21) {
        // 0x60002B3C: nop
    
            goto L_60002ABC;
    }
    // 0x60002B3C: nop

    // 0x60002B40: b           L_60002A4C
    // 0x60002B44: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
        goto L_60002A4C;
    // 0x60002B44: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x60002B48: nop

    // 0x60002B4C: nop

    // 0x60002B50: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x60002B54: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002B58: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002B5C: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002B60: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002B64: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002B68: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002B6C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x60002B70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x60002B74: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x60002B78: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x60002B7C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x60002B80: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x60002B84: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x60002B88: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x60002B8C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x60002B90: jr          $ra
    // 0x60002B94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60002B94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_demo_story_2B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60002B9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002BA0: jal         0x60000868
    // 0x60002BA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60002BA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002BA8: jal         0x60000C1C
    // 0x60002BAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_1;
    // 0x60002BAC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x60002BB0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x60002BB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002BB8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x60002BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002BC0: jal         0x600007E4
    // 0x60002BC4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    ovl_demo_story_7E4(rdram, ctx);
        goto after_2;
    // 0x60002BC4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    after_2:
    // 0x60002BC8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x60002BCC: addiu       $at, $zero, 0x833
    ctx->r1 = ADD32(0, 0X833);
    // 0x60002BD0: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x60002BD4: nop

    // 0x60002BD8: beq         $v1, $at, L_60002BE8
    if (ctx->r3 == ctx->r1) {
        // 0x60002BDC: addiu       $at, $zero, 0x86C
        ctx->r1 = ADD32(0, 0X86C);
            goto L_60002BE8;
    }
    // 0x60002BDC: addiu       $at, $zero, 0x86C
    ctx->r1 = ADD32(0, 0X86C);
    // 0x60002BE0: bne         $v1, $at, L_60002BF0
    if (ctx->r3 != ctx->r1) {
        // 0x60002BE4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_60002BF0;
    }
    // 0x60002BE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_60002BE8:
    // 0x60002BE8: b           L_60002BF0
    // 0x60002BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_60002BF0;
    // 0x60002BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_60002BF0:
    // 0x60002BF0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x60002BF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002BF8: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x60002BFC: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x60002C00: jal         0x60000C10
    // 0x60002C04: nop

    ovl_demo_story_C10(rdram, ctx);
        goto after_3;
    // 0x60002C04: nop

    after_3:
    // 0x60002C08: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60002C0C: nop

    // 0x60002C10: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x60002C14: beq         $t0, $zero, L_60002C4C
    if (ctx->r8 == 0) {
        // 0x60002C18: lw          $t3, 0x3C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X3C);
            goto L_60002C4C;
    }
    // 0x60002C18: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_60002C1C:
    // 0x60002C1C: jal         0x60000F50
    // 0x60002C20: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_4;
    // 0x60002C20: nop

    after_4:
    // 0x60002C24: bne         $v0, $zero, L_60002DA8
    if (ctx->r2 != 0) {
        // 0x60002C28: nop
    
            goto L_60002DA8;
    }
    // 0x60002C28: nop

    // 0x60002C2C: jal         0x6000085C
    // 0x60002C30: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x60002C30: nop

    after_5:
    // 0x60002C34: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x60002C38: nop

    // 0x60002C3C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x60002C40: bne         $t2, $zero, L_60002C1C
    if (ctx->r10 != 0) {
        // 0x60002C44: nop
    
            goto L_60002C1C;
    }
    // 0x60002C44: nop

    // 0x60002C48: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_60002C4C:
    // 0x60002C4C: nop

    // 0x60002C50: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x60002C54: jal         0x60000A60
    // 0x60002C58: nop

    ovl_demo_story_A60(rdram, ctx);
        goto after_6;
    // 0x60002C58: nop

    after_6:
    // 0x60002C5C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x60002C60: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x60002C64: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x60002C68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002C6C: jal         0x600007F0
    // 0x60002C70: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_7;
    // 0x60002C70: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x60002C74: jal         0x6000085C
    // 0x60002C78: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_8;
    // 0x60002C78: nop

    after_8:
    // 0x60002C7C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x60002C80: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x60002C84: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x60002C88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002C8C: jal         0x600007F0
    // 0x60002C90: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_9;
    // 0x60002C90: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_9:
    // 0x60002C94: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60002C98: nop

    // 0x60002C9C: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60002CA0: beq         $t7, $zero, L_60002CD8
    if (ctx->r15 == 0) {
        // 0x60002CA4: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_60002CD8;
    }
    // 0x60002CA4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_60002CA8:
    // 0x60002CA8: jal         0x60000F50
    // 0x60002CAC: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_10;
    // 0x60002CAC: nop

    after_10:
    // 0x60002CB0: bne         $v0, $zero, L_60002DA8
    if (ctx->r2 != 0) {
        // 0x60002CB4: nop
    
            goto L_60002DA8;
    }
    // 0x60002CB4: nop

    // 0x60002CB8: jal         0x6000085C
    // 0x60002CBC: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_11;
    // 0x60002CBC: nop

    after_11:
    // 0x60002CC0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60002CC4: nop

    // 0x60002CC8: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60002CCC: bne         $t9, $zero, L_60002CA8
    if (ctx->r25 != 0) {
        // 0x60002CD0: nop
    
            goto L_60002CA8;
    }
    // 0x60002CD0: nop

    // 0x60002CD4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_60002CD8:
    // 0x60002CD8: addiu       $at, $zero, 0x85B
    ctx->r1 = ADD32(0, 0X85B);
    // 0x60002CDC: lw          $v1, 0x4($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X4);
    // 0x60002CE0: nop

    // 0x60002CE4: beq         $v1, $at, L_60002D70
    if (ctx->r3 == ctx->r1) {
        // 0x60002CE8: addiu       $at, $zero, 0x84F
        ctx->r1 = ADD32(0, 0X84F);
            goto L_60002D70;
    }
    // 0x60002CE8: addiu       $at, $zero, 0x84F
    ctx->r1 = ADD32(0, 0X84F);
    // 0x60002CEC: beq         $v1, $at, L_60002D70
    if (ctx->r3 == ctx->r1) {
        // 0x60002CF0: nop
    
            goto L_60002D70;
    }
    // 0x60002CF0: nop

    // 0x60002CF4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x60002CF8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x60002CFC: addiu       $at, $zero, 0x83B
    ctx->r1 = ADD32(0, 0X83B);
    // 0x60002D00: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x60002D04: addiu       $a0, $zero, 0x809
    ctx->r4 = ADD32(0, 0X809);
    // 0x60002D08: bne         $t2, $at, L_60002D28
    if (ctx->r10 != ctx->r1) {
        // 0x60002D0C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_60002D28;
    }
    // 0x60002D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002D10: addiu       $a0, $zero, 0x809
    ctx->r4 = ADD32(0, 0X809);
    // 0x60002D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002D18: jal         0x60000C10
    // 0x60002D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_C10(rdram, ctx);
        goto after_12;
    // 0x60002D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x60002D20: b           L_60002D34
    // 0x60002D24: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
        goto L_60002D34;
    // 0x60002D24: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_60002D28:
    // 0x60002D28: jal         0x60000C10
    // 0x60002D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_demo_story_C10(rdram, ctx);
        goto after_13;
    // 0x60002D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x60002D30: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_60002D34:
    // 0x60002D34: nop

    // 0x60002D38: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x60002D3C: beq         $t4, $zero, L_60002D70
    if (ctx->r12 == 0) {
        // 0x60002D40: nop
    
            goto L_60002D70;
    }
    // 0x60002D40: nop

L_60002D44:
    // 0x60002D44: jal         0x60000F50
    // 0x60002D48: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_14;
    // 0x60002D48: nop

    after_14:
    // 0x60002D4C: bne         $v0, $zero, L_60002DA8
    if (ctx->r2 != 0) {
        // 0x60002D50: nop
    
            goto L_60002DA8;
    }
    // 0x60002D50: nop

    // 0x60002D54: jal         0x6000085C
    // 0x60002D58: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_15;
    // 0x60002D58: nop

    after_15:
    // 0x60002D5C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60002D60: nop

    // 0x60002D64: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x60002D68: bne         $t6, $zero, L_60002D44
    if (ctx->r14 != 0) {
        // 0x60002D6C: nop
    
            goto L_60002D44;
    }
    // 0x60002D6C: nop

L_60002D70:
    // 0x60002D70: jal         0x60000A84
    // 0x60002D74: nop

    ovl_demo_story_A84(rdram, ctx);
        goto after_16;
    // 0x60002D74: nop

    after_16:
    // 0x60002D78: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x60002D7C: addiu       $at, $zero, 0x83B
    ctx->r1 = ADD32(0, 0X83B);
    // 0x60002D80: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x60002D84: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60002D88: bne         $t8, $at, L_60002D98
    if (ctx->r24 != ctx->r1) {
        // 0x60002D8C: nop
    
            goto L_60002D98;
    }
    // 0x60002D8C: nop

    // 0x60002D90: jal         0x60001334
    // 0x60002D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_17;
    // 0x60002D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
L_60002D98:
    // 0x60002D98: jal         0x60000A6C
    // 0x60002D9C: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_18;
    // 0x60002D9C: nop

    after_18:
    // 0x60002DA0: jal         0x60000838
    // 0x60002DA4: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_19;
    // 0x60002DA4: nop

    after_19:
L_60002DA8:
    // 0x60002DA8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x60002DAC: addiu       $at, $zero, 0x809
    ctx->r1 = ADD32(0, 0X809);
    // 0x60002DB0: bne         $t9, $at, L_60002DC0
    if (ctx->r25 != ctx->r1) {
        // 0x60002DB4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_60002DC0;
    }
    // 0x60002DB4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60002DB8: jal         0x60001334
    // 0x60002DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_20;
    // 0x60002DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
L_60002DC0:
    // 0x60002DC0: jal         0x60000A6C
    // 0x60002DC4: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_21;
    // 0x60002DC4: nop

    after_21:
    // 0x60002DC8: jal         0x60000838
    // 0x60002DCC: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_22;
    // 0x60002DCC: nop

    after_22:
    // 0x60002DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002DD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002DD8: jr          $ra
    // 0x60002DDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60002DDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_demo_story_2DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002DE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002DEC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002DF0: addiu       $a0, $a0, 0x2B98
    ctx->r4 = ADD32(ctx->r4, 0X2B98);
    // 0x60002DF4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002DFC: jal         0x60000820
    // 0x60002E00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60002E00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60002E04: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60002E08: nop

    // 0x60002E0C: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60002E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002E18: jr          $ra
    // 0x60002E1C: nop

    return;
    // 0x60002E1C: nop

    // 0x60002E20: jr          $ra
    // 0x60002E24: nop

    return;
    // 0x60002E24: nop

;}
RECOMP_FUNC void ovl_demo_story_2E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002E2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002E30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002E34: jal         0x60000C1C
    // 0x60002E38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60002E38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60002E3C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x60002E40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002E44: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x60002E48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x60002E4C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x60002E50: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x60002E54: jal         0x60000C10
    // 0x60002E58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_C10(rdram, ctx);
        goto after_1;
    // 0x60002E58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x60002E5C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60002E60: nop

    // 0x60002E64: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x60002E68: beq         $t8, $zero, L_60002E90
    if (ctx->r24 == 0) {
        // 0x60002E6C: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_60002E90;
    }
    // 0x60002E6C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_60002E70:
    // 0x60002E70: jal         0x6000085C
    // 0x60002E74: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_2;
    // 0x60002E74: nop

    after_2:
    // 0x60002E78: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60002E7C: nop

    // 0x60002E80: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x60002E84: bne         $t0, $zero, L_60002E70
    if (ctx->r8 != 0) {
        // 0x60002E88: nop
    
            goto L_60002E70;
    }
    // 0x60002E88: nop

    // 0x60002E8C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
L_60002E90:
    // 0x60002E90: nop

    // 0x60002E94: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x60002E98: jal         0x60000A60
    // 0x60002E9C: nop

    ovl_demo_story_A60(rdram, ctx);
        goto after_3;
    // 0x60002E9C: nop

    after_3:
    // 0x60002EA0: jal         0x6000085C
    // 0x60002EA4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_4;
    // 0x60002EA4: nop

    after_4:
    // 0x60002EA8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60002EAC: nop

    // 0x60002EB0: andi        $t2, $v0, 0x801
    ctx->r10 = ctx->r2 & 0X801;
    // 0x60002EB4: beq         $t2, $zero, L_60002EFC
    if (ctx->r10 == 0) {
        // 0x60002EB8: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_60002EFC;
    }
    // 0x60002EB8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_60002EBC:
    // 0x60002EBC: beq         $v0, $zero, L_60002EE0
    if (ctx->r2 == 0) {
        // 0x60002EC0: nop
    
            goto L_60002EE0;
    }
    // 0x60002EC0: nop

L_60002EC4:
    // 0x60002EC4: jal         0x6000085C
    // 0x60002EC8: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x60002EC8: nop

    after_5:
    // 0x60002ECC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x60002ED0: nop

    // 0x60002ED4: andi        $t4, $t3, 0x801
    ctx->r12 = ctx->r11 & 0X801;
    // 0x60002ED8: bne         $t4, $zero, L_60002EC4
    if (ctx->r12 != 0) {
        // 0x60002EDC: nop
    
            goto L_60002EC4;
    }
    // 0x60002EDC: nop

L_60002EE0:
    // 0x60002EE0: jal         0x6000085C
    // 0x60002EE4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_6;
    // 0x60002EE4: nop

    after_6:
    // 0x60002EE8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60002EEC: nop

    // 0x60002EF0: andi        $t5, $v0, 0x801
    ctx->r13 = ctx->r2 & 0X801;
    // 0x60002EF4: bne         $t5, $zero, L_60002EBC
    if (ctx->r13 != 0) {
        // 0x60002EF8: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_60002EBC;
    }
    // 0x60002EF8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_60002EFC:
    // 0x60002EFC: jal         0x60000A6C
    // 0x60002F00: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_7;
    // 0x60002F00: nop

    after_7:
    // 0x60002F04: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x60002F08: addiu       $a0, $zero, 0x809
    ctx->r4 = ADD32(0, 0X809);
    // 0x60002F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002F10: jal         0x60000C10
    // 0x60002F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_C10(rdram, ctx);
        goto after_8;
    // 0x60002F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x60002F18: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60002F1C: nop

    // 0x60002F20: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x60002F24: beq         $t7, $zero, L_60002F48
    if (ctx->r15 == 0) {
        // 0x60002F28: nop
    
            goto L_60002F48;
    }
    // 0x60002F28: nop

L_60002F2C:
    // 0x60002F2C: jal         0x6000085C
    // 0x60002F30: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_9;
    // 0x60002F30: nop

    after_9:
    // 0x60002F34: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60002F38: nop

    // 0x60002F3C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x60002F40: bne         $t9, $zero, L_60002F2C
    if (ctx->r25 != 0) {
        // 0x60002F44: nop
    
            goto L_60002F2C;
    }
    // 0x60002F44: nop

L_60002F48:
    // 0x60002F48: jal         0x60000A84
    // 0x60002F4C: nop

    ovl_demo_story_A84(rdram, ctx);
        goto after_10;
    // 0x60002F4C: nop

    after_10:
    // 0x60002F50: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60002F54: jal         0x60001334
    // 0x60002F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_11;
    // 0x60002F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x60002F5C: jal         0x60000A6C
    // 0x60002F60: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_12;
    // 0x60002F60: nop

    after_12:
    // 0x60002F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002F68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002F6C: jr          $ra
    // 0x60002F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60002F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_2F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F74: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60002F78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002F7C: jal         0x60000C1C
    // 0x60002F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60002F80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002F84: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x60002F88: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x60002F8C: jal         0x60000DD8
    // 0x60002F90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60002F90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60002F94: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F98: jal         0x60002198
    // 0x60002F9C: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_2198(rdram, ctx);
        goto after_2;
    // 0x60002F9C: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_2:
    // 0x60002FA0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002FA4: sw          $zero, 0x7A04($at)
    MEM_W(0X7A04, ctx->r1) = 0;
    // 0x60002FA8: jal         0x60000DD8
    // 0x60002FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_3;
    // 0x60002FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002FB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002FB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002FB8: jal         0x60000DF0
    // 0x60002FBC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_demo_story_DF0(rdram, ctx);
        goto after_4;
    // 0x60002FBC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x60002FC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002FC8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x60002FCC: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x60002FD0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x60002FD4: jal         0x60000D60
    // 0x60002FD8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_5;
    // 0x60002FD8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x60002FDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002FE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002FE4: lwc1        $f4, 0x7964($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7964);
    // 0x60002FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002FEC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x60002FF0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x60002FF4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60002FF8: jal         0x60000D78
    // 0x60002FFC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_6;
    // 0x60002FFC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x60003000: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003004: addiu       $a0, $a0, 0x2670
    ctx->r4 = ADD32(ctx->r4, 0X2670);
    // 0x60003008: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000300C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003010: jal         0x60000820
    // 0x60003014: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_7;
    // 0x60003014: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60003018: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x6000301C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003028: jal         0x60000220
    // 0x6000302C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_demo_story_220(rdram, ctx);
        goto after_8;
    // 0x6000302C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_8:
    // 0x60003030: jal         0x60000208
    // 0x60003034: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_9;
    // 0x60003034: nop

    after_9:
    // 0x60003038: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000303C:
    // 0x6000303C: jal         0x60000F50
    // 0x60003040: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_10;
    // 0x60003040: nop

    after_10:
    // 0x60003044: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x60003048: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x60003048: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000304C: jal         0x6000085C
    // 0x60003050: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_11;
    // 0x60003050: nop

    after_11:
    // 0x60003054: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003058: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x6000305C: bne         $s0, $at, L_6000303C
    if (ctx->r16 != ctx->r1) {
        // 0x60003060: nop
    
            goto L_6000303C;
    }
    // 0x60003060: nop

    // 0x60003064: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003068: addiu       $a0, $a0, 0x2994
    ctx->r4 = ADD32(ctx->r4, 0X2994);
    // 0x6000306C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003074: jal         0x60000820
    // 0x60003078: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_12;
    // 0x60003078: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x6000307C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x60003080: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003084:
    // 0x60003084: jal         0x60000F50
    // 0x60003088: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_13;
    // 0x60003088: nop

    after_13:
    // 0x6000308C: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x60003090: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x60003090: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003094: jal         0x6000085C
    // 0x60003098: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_14;
    // 0x60003098: nop

    after_14:
    // 0x6000309C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600030A0: slti        $at, $s0, 0xD2
    ctx->r1 = SIGNED(ctx->r16) < 0XD2 ? 1 : 0;
    // 0x600030A4: bne         $at, $zero, L_60003084
    if (ctx->r1 != 0) {
        // 0x600030A8: nop
    
            goto L_60003084;
    }
    // 0x600030A8: nop

    // 0x600030AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030B0: jal         0x600047C4
    // 0x600030B4: addiu       $a0, $a0, 0x6A54
    ctx->r4 = ADD32(ctx->r4, 0X6A54);
    ovl_demo_story_47C4(rdram, ctx);
        goto after_15;
    // 0x600030B4: addiu       $a0, $a0, 0x6A54
    ctx->r4 = ADD32(ctx->r4, 0X6A54);
    after_15:
    // 0x600030B8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x600030BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600030C0:
    // 0x600030C0: jal         0x60000F50
    // 0x600030C4: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_16;
    // 0x600030C4: nop

    after_16:
    // 0x600030C8: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x600030CC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x600030CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600030D0: jal         0x6000085C
    // 0x600030D4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_17;
    // 0x600030D4: nop

    after_17:
    // 0x600030D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600030DC: slti        $at, $s0, 0x5A
    ctx->r1 = SIGNED(ctx->r16) < 0X5A ? 1 : 0;
    // 0x600030E0: bne         $at, $zero, L_600030C0
    if (ctx->r1 != 0) {
        // 0x600030E4: nop
    
            goto L_600030C0;
    }
    // 0x600030E4: nop

    // 0x600030E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600030EC: addiu       $a0, $a0, 0xFBC
    ctx->r4 = ADD32(ctx->r4, 0XFBC);
    // 0x600030F0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x600030F4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600030F8: jal         0x6000064C
    // 0x600030FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_64C(rdram, ctx);
        goto after_18;
    // 0x600030FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x60003100: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60003104: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60003108: addiu       $v1, $v1, 0x7A04
    ctx->r3 = ADD32(ctx->r3, 0X7A04);
    // 0x6000310C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x60003110: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x60003114: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60003118: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x6000311C: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x60003120: swc1        $f8, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f8.u32l;
    // 0x60003124: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x60003128: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x6000312C: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60003130: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x60003134: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x60003138: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
    // 0x6000313C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x60003140: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60003144: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
    // 0x60003148: lw          $t4, 0x74EC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X74EC);
    // 0x6000314C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003150: blez        $t4, L_60003190
    if (SIGNED(ctx->r12) <= 0) {
        // 0x60003154: nop
    
            goto L_60003190;
    }
    // 0x60003154: nop

L_60003158:
    // 0x60003158: jal         0x60000F50
    // 0x6000315C: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_19;
    // 0x6000315C: nop

    after_19:
    // 0x60003160: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x60003164: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x60003164: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003168: jal         0x6000085C
    // 0x6000316C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_20;
    // 0x6000316C: nop

    after_20:
    // 0x60003170: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60003174: lw          $t5, 0x74EC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X74EC);
    // 0x60003178: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000317C: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x60003180: bne         $at, $zero, L_60003158
    if (ctx->r1 != 0) {
        // 0x60003184: nop
    
            goto L_60003158;
    }
    // 0x60003184: nop

    // 0x60003188: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000318C: addiu       $v1, $v1, 0x7A04
    ctx->r3 = ADD32(ctx->r3, 0X7A04);
L_60003190:
    // 0x60003190: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x60003194: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x60003198: jal         0x60000550
    // 0x6000319C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    ovl_demo_story_550(rdram, ctx);
        goto after_21;
    // 0x6000319C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_21:
    // 0x600031A0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600031A4: addiu       $s0, $s0, 0x68EC
    ctx->r16 = ADD32(ctx->r16, 0X68EC);
    // 0x600031A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600031AC: sw          $zero, 0x7A04($at)
    MEM_W(0X7A04, ctx->r1) = 0;
    // 0x600031B0: jal         0x60002198
    // 0x600031B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_22;
    // 0x600031B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x600031B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600031BC: jal         0x60002394
    // 0x600031C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_2394(rdram, ctx);
        goto after_23;
    // 0x600031C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x600031C4: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x600031C8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x600031C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600031CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600031D0: jal         0x60002394
    // 0x600031D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_demo_story_2394(rdram, ctx);
        goto after_24;
    // 0x600031D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x600031D8: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x600031DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x600031DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600031E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x600031E4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600031E8: jal         0x6000064C
    // 0x600031EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_64C(rdram, ctx);
        goto after_25;
    // 0x600031EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x600031F0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600031F4: sw          $v0, 0x7A04($at)
    MEM_W(0X7A04, ctx->r1) = ctx->r2;
    // 0x600031F8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600031FC: lw          $t6, 0x7A04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A04);
    // 0x60003200: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60003204: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60003208: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x6000320C: lw          $t7, 0x7A04($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A04);
    // 0x60003210: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60003214: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60003218: swc1        $f16, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f16.u32l;
    // 0x6000321C: lw          $t9, 0x7A04($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A04);
    // 0x60003220: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x60003224: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60003228: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x6000322C: lw          $t1, 0x7A04($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A04);
    // 0x60003230: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x60003234: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60003238: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
    // 0x6000323C: lw          $t3, 0x7A04($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A04);
    // 0x60003240: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x60003244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003248: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000324C: jal         0x60002394
    // 0x60003250: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
    ovl_demo_story_2394(rdram, ctx);
        goto after_26;
    // 0x60003250: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
    after_26:
    // 0x60003254: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x60003258: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x60003258: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000325C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003260: jal         0x60002394
    // 0x60003264: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_demo_story_2394(rdram, ctx);
        goto after_27;
    // 0x60003264: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_27:
    // 0x60003268: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x6000326C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x6000326C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003270: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003274: lw          $a0, 0x7A04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A04);
    // 0x60003278: jal         0x60000550
    // 0x6000327C: nop

    ovl_demo_story_550(rdram, ctx);
        goto after_28;
    // 0x6000327C: nop

    after_28:
    // 0x60003280: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003284: sw          $zero, 0x7A04($at)
    MEM_W(0X7A04, ctx->r1) = 0;
    // 0x60003288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x6000328C: jal         0x60002394
    // 0x60003290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_demo_story_2394(rdram, ctx);
        goto after_29;
    // 0x60003290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_29:
    // 0x60003294: bne         $v0, $zero, L_600032E8
    if (ctx->r2 != 0) {
        // 0x60003298: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600032E8;
    }
    // 0x60003298: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000329C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x600032A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600032A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x600032A8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x600032AC: jal         0x60000238
    // 0x600032B0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    ovl_demo_story_238(rdram, ctx);
        goto after_30;
    // 0x600032B0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_30:
    // 0x600032B4: jal         0x60000208
    // 0x600032B8: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_31;
    // 0x600032B8: nop

    after_31:
    // 0x600032BC: jal         0x600022AC
    // 0x600032C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_32;
    // 0x600032C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x600032C4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600032C8: jal         0x6000082C
    // 0x600032CC: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_33;
    // 0x600032CC: nop

    after_33:
    // 0x600032D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600032D4: jal         0x600022AC
    // 0x600032D8: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_22AC(rdram, ctx);
        goto after_34;
    // 0x600032D8: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_34:
    // 0x600032DC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x600032E0: b           L_6000339C
    // 0x600032E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000339C;
    // 0x600032E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600032E8:
    // 0x600032E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600032EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600032F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600032F4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x600032F8: jal         0x60000238
    // 0x600032FC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_demo_story_238(rdram, ctx);
        goto after_35;
    // 0x600032FC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_35:
    // 0x60003300: jal         0x60000208
    // 0x60003304: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_36;
    // 0x60003304: nop

    after_36:
    // 0x60003308: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x6000330C: jal         0x6000082C
    // 0x60003310: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_37;
    // 0x60003310: nop

    after_37:
    // 0x60003314: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x60003318: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x6000331C: beq         $t4, $zero, L_60003334
    if (ctx->r12 == 0) {
        // 0x60003320: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_60003334;
    }
    // 0x60003320: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x60003324: jal         0x6000082C
    // 0x60003328: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_demo_story_82C(rdram, ctx);
        goto after_38;
    // 0x60003328: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_38:
    // 0x6000332C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x60003330: nop

L_60003334:
    // 0x60003334: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x60003338: nop

    // 0x6000333C: beq         $t5, $zero, L_60003354
    if (ctx->r13 == 0) {
        // 0x60003340: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_60003354;
    }
    // 0x60003340: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x60003344: jal         0x6000082C
    // 0x60003348: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_demo_story_82C(rdram, ctx);
        goto after_39;
    // 0x60003348: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_39:
    // 0x6000334C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x60003350: nop

L_60003354:
    // 0x60003354: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003358: lw          $a0, 0x7A04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A04);
    // 0x6000335C: nop

    // 0x60003360: beq         $a0, $zero, L_60003378
    if (ctx->r4 == 0) {
        // 0x60003364: nop
    
            goto L_60003378;
    }
    // 0x60003364: nop

    // 0x60003368: jal         0x60000550
    // 0x6000336C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_demo_story_550(rdram, ctx);
        goto after_40;
    // 0x6000336C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_40:
    // 0x60003370: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x60003374: nop

L_60003378:
    // 0x60003378: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000337C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003380: sw          $zero, 0x7A04($at)
    MEM_W(0X7A04, ctx->r1) = 0;
    // 0x60003384: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    // 0x60003388: jal         0x600022AC
    // 0x6000338C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_41;
    // 0x6000338C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_41:
    // 0x60003390: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60003394: nop

    // 0x60003398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000339C:
    // 0x6000339C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600033A0: jr          $ra
    // 0x600033A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x600033A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_demo_story_33A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600033AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600033B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600033B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x600033B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600033BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600033C0: blez        $a0, L_60003404
    if (SIGNED(ctx->r4) <= 0) {
        // 0x600033C4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60003404;
    }
    // 0x600033C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600033C8: addiu       $s2, $a0, -0x1
    ctx->r18 = ADD32(ctx->r4, -0X1);
    // 0x600033CC: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
L_600033D0:
    // 0x600033D0: beq         $at, $zero, L_600033F0
    if (ctx->r1 == 0) {
        // 0x600033D4: nop
    
            goto L_600033F0;
    }
    // 0x600033D4: nop

    // 0x600033D8: jal         0x60000F50
    // 0x600033DC: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_0;
    // 0x600033DC: nop

    after_0:
    // 0x600033E0: beq         $v0, $zero, L_600033F0
    if (ctx->r2 == 0) {
        // 0x600033E4: nop
    
            goto L_600033F0;
    }
    // 0x600033E4: nop

    // 0x600033E8: b           L_6000340C
    // 0x600033EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000340C;
    // 0x600033EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600033F0:
    // 0x600033F0: jal         0x6000085C
    // 0x600033F4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_1;
    // 0x600033F4: nop

    after_1:
    // 0x600033F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600033FC: bne         $s0, $s1, L_600033D0
    if (ctx->r16 != ctx->r17) {
        // 0x60003400: slt         $at, $s0, $s2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_600033D0;
    }
    // 0x60003400: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
L_60003404:
    // 0x60003404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60003408: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_6000340C:
    // 0x6000340C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003410: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60003414: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60003418: jr          $ra
    // 0x6000341C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000341C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_story_3420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003420: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60003424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x6000342C: jal         0x60000C1C
    // 0x60003430: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60003430: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x60003434: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000343C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003444: jal         0x60000220
    // 0x60003448: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_demo_story_220(rdram, ctx);
        goto after_1;
    // 0x60003448: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_1:
    // 0x6000344C: jal         0x60000208
    // 0x60003450: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_2;
    // 0x60003450: nop

    after_2:
    // 0x60003454: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003458: jal         0x60001CEC
    // 0x6000345C: addiu       $a0, $a0, 0x72D0
    ctx->r4 = ADD32(ctx->r4, 0X72D0);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_3;
    // 0x6000345C: addiu       $a0, $a0, 0x72D0
    ctx->r4 = ADD32(ctx->r4, 0X72D0);
    after_3:
    // 0x60003460: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60003464: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60003468: jal         0x600033A8
    // 0x6000346C: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_4;
    // 0x6000346C: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    after_4:
    // 0x60003470: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003474: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003474: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003478: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000347C: jal         0x60001CEC
    // 0x60003480: addiu       $a0, $a0, 0x72D8
    ctx->r4 = ADD32(ctx->r4, 0X72D8);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_5;
    // 0x60003480: addiu       $a0, $a0, 0x72D8
    ctx->r4 = ADD32(ctx->r4, 0X72D8);
    after_5:
    // 0x60003484: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x60003488: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000348C: addiu       $v1, $v1, 0x6A9C
    ctx->r3 = ADD32(ctx->r3, 0X6A9C);
    // 0x60003490: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x60003494: lw          $t9, 0x90($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X90);
    // 0x60003498: lw          $t8, 0x8C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8C);
    // 0x6000349C: nop

    // 0x600034A0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x600034A4: jal         0x600033A8
    // 0x600034A8: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_6;
    // 0x600034A8: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    after_6:
    // 0x600034AC: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600034B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600034B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600034B4: jal         0x600007E4
    // 0x600034B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_7E4(rdram, ctx);
        goto after_7;
    // 0x600034B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x600034BC: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x600034C0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x600034C4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x600034C8: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x600034CC: ori         $t3, $t1, 0x2
    ctx->r11 = ctx->r9 | 0X2;
    // 0x600034D0: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x600034D4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x600034D8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x600034DC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x600034E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x600034E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600034E8: jal         0x600007F0
    // 0x600034EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_8;
    // 0x600034EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x600034F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034F4: jal         0x60002DE0
    // 0x600034F8: addiu       $a0, $a0, 0x7520
    ctx->r4 = ADD32(ctx->r4, 0X7520);
    ovl_demo_story_2DE0(rdram, ctx);
        goto after_9;
    // 0x600034F8: addiu       $a0, $a0, 0x7520
    ctx->r4 = ADD32(ctx->r4, 0X7520);
    after_9:
    // 0x600034FC: jal         0x600033A8
    // 0x60003500: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_10;
    // 0x60003500: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x60003504: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003508: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003508: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000350C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003510: lw          $a0, 0x6B30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6B30);
    // 0x60003514: jal         0x600033A8
    // 0x60003518: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_11;
    // 0x60003518: nop

    after_11:
    // 0x6000351C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003520: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003520: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003524: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60003528: nop

    // 0x6000352C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x60003530: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x60003534: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003538: nop

    // 0x6000353C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x60003540: bne         $t7, $zero, L_60003550
    if (ctx->r15 != 0) {
        // 0x60003544: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_60003550;
    }
    // 0x60003544: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x60003548: beq         $t8, $zero, L_60003588
    if (ctx->r24 == 0) {
        // 0x6000354C: nop
    
            goto L_60003588;
    }
    // 0x6000354C: nop

L_60003550:
    // 0x60003550: jal         0x60000F50
    // 0x60003554: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_12;
    // 0x60003554: nop

    after_12:
    // 0x60003558: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x6000355C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x6000355C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003560: jal         0x6000085C
    // 0x60003564: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_13;
    // 0x60003564: nop

    after_13:
    // 0x60003568: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x6000356C: nop

    // 0x60003570: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x60003574: bne         $t9, $zero, L_60003550
    if (ctx->r25 != 0) {
        // 0x60003578: nop
    
            goto L_60003550;
    }
    // 0x60003578: nop

    // 0x6000357C: andi        $t0, $v0, 0x800
    ctx->r8 = ctx->r2 & 0X800;
    // 0x60003580: bne         $t0, $zero, L_60003550
    if (ctx->r8 != 0) {
        // 0x60003584: nop
    
            goto L_60003550;
    }
    // 0x60003584: nop

L_60003588:
    // 0x60003588: jal         0x6000085C
    // 0x6000358C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_14;
    // 0x6000358C: nop

    after_14:
    // 0x60003590: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003594: nop

    // 0x60003598: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x6000359C: bne         $t1, $zero, L_600035AC
    if (ctx->r9 != 0) {
        // 0x600035A0: andi        $t2, $v0, 0x800
        ctx->r10 = ctx->r2 & 0X800;
            goto L_600035AC;
    }
    // 0x600035A0: andi        $t2, $v0, 0x800
    ctx->r10 = ctx->r2 & 0X800;
    // 0x600035A4: beq         $t2, $zero, L_600035E8
    if (ctx->r10 == 0) {
        // 0x600035A8: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_600035E8;
    }
    // 0x600035A8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
L_600035AC:
    // 0x600035AC: jal         0x60000F50
    // 0x600035B0: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_15;
    // 0x600035B0: nop

    after_15:
    // 0x600035B4: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600035B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600035B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600035BC: jal         0x6000085C
    // 0x600035C0: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_16;
    // 0x600035C0: nop

    after_16:
    // 0x600035C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x600035C8: nop

    // 0x600035CC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x600035D0: bne         $t3, $zero, L_600035AC
    if (ctx->r11 != 0) {
        // 0x600035D4: nop
    
            goto L_600035AC;
    }
    // 0x600035D4: nop

    // 0x600035D8: andi        $t4, $v0, 0x800
    ctx->r12 = ctx->r2 & 0X800;
    // 0x600035DC: bne         $t4, $zero, L_600035AC
    if (ctx->r12 != 0) {
        // 0x600035E0: nop
    
            goto L_600035AC;
    }
    // 0x600035E0: nop

    // 0x600035E4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
L_600035E8:
    // 0x600035E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600035EC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x600035F0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x600035F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600035F8: jal         0x600007F0
    // 0x600035FC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_17;
    // 0x600035FC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_17:
    // 0x60003600: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003604: jal         0x60002DE0
    // 0x60003608: addiu       $a0, $a0, 0x752C
    ctx->r4 = ADD32(ctx->r4, 0X752C);
    ovl_demo_story_2DE0(rdram, ctx);
        goto after_18;
    // 0x60003608: addiu       $a0, $a0, 0x752C
    ctx->r4 = ADD32(ctx->r4, 0X752C);
    after_18:
    // 0x6000360C: jal         0x6000085C
    // 0x60003610: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_19;
    // 0x60003610: nop

    after_19:
    // 0x60003614: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60003618: nop

    // 0x6000361C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x60003620: beq         $t8, $zero, L_60003654
    if (ctx->r24 == 0) {
        // 0x60003624: nop
    
            goto L_60003654;
    }
    // 0x60003624: nop

L_60003628:
    // 0x60003628: jal         0x60000F50
    // 0x6000362C: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_20;
    // 0x6000362C: nop

    after_20:
    // 0x60003630: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003634: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003634: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003638: jal         0x6000085C
    // 0x6000363C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_21;
    // 0x6000363C: nop

    after_21:
    // 0x60003640: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60003644: nop

    // 0x60003648: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x6000364C: bne         $t0, $zero, L_60003628
    if (ctx->r8 != 0) {
        // 0x60003650: nop
    
            goto L_60003628;
    }
    // 0x60003650: nop

L_60003654:
    // 0x60003654: jal         0x6000085C
    // 0x60003658: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_22;
    // 0x60003658: nop

    after_22:
    // 0x6000365C: jal         0x600033A8
    // 0x60003660: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_23;
    // 0x60003660: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_23:
    // 0x60003664: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003668: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003668: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000366C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003670: jal         0x60001CEC
    // 0x60003674: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, 0X72E0);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_24;
    // 0x60003674: addiu       $a0, $a0, 0x72E0
    ctx->r4 = ADD32(ctx->r4, 0X72E0);
    after_24:
    // 0x60003678: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x6000367C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60003680: addiu       $v1, $v1, 0x6A9C
    ctx->r3 = ADD32(ctx->r3, 0X6A9C);
    // 0x60003684: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x60003688: lw          $t3, 0xE4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XE4);
    // 0x6000368C: lw          $t2, 0xE0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE0);
    // 0x60003690: lw          $t5, 0xE8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XE8);
    // 0x60003694: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x60003698: jal         0x600033A8
    // 0x6000369C: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_25;
    // 0x6000369C: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    after_25:
    // 0x600036A0: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600036A4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600036A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600036A8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x600036AC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x600036B0: jal         0x600033A8
    // 0x600036B4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_26;
    // 0x600036B4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    after_26:
    // 0x600036B8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600036BC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600036BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600036C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036C4: jal         0x60001CEC
    // 0x600036C8: addiu       $a0, $a0, 0x72E8
    ctx->r4 = ADD32(ctx->r4, 0X72E8);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_27;
    // 0x600036C8: addiu       $a0, $a0, 0x72E8
    ctx->r4 = ADD32(ctx->r4, 0X72E8);
    after_27:
    // 0x600036CC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x600036D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600036D4: jal         0x600033A8
    // 0x600036D8: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_28;
    // 0x600036D8: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    after_28:
    // 0x600036DC: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600036E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600036E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600036E4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036E8: jal         0x60001CEC
    // 0x600036EC: addiu       $a0, $a0, 0x72F0
    ctx->r4 = ADD32(ctx->r4, 0X72F0);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_29;
    // 0x600036EC: addiu       $a0, $a0, 0x72F0
    ctx->r4 = ADD32(ctx->r4, 0X72F0);
    after_29:
    // 0x600036F0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x600036F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600036F8: jal         0x600033A8
    // 0x600036FC: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_30;
    // 0x600036FC: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    after_30:
    // 0x60003700: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003704: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003704: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003708: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000370C: jal         0x60001CEC
    // 0x60003710: addiu       $a0, $a0, 0x72F8
    ctx->r4 = ADD32(ctx->r4, 0X72F8);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_31;
    // 0x60003710: addiu       $a0, $a0, 0x72F8
    ctx->r4 = ADD32(ctx->r4, 0X72F8);
    after_31:
    // 0x60003714: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x60003718: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x6000371C: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x60003720: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60003724: lw          $t1, 0x6C7C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6C7C);
    // 0x60003728: lw          $t0, 0x6C78($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6C78);
    // 0x6000372C: nop

    // 0x60003730: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x60003734: jal         0x600033A8
    // 0x60003738: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_32;
    // 0x60003738: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    after_32:
    // 0x6000373C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003740: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003740: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003744: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x60003748: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x6000374C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x60003750: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x60003754: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003758: jal         0x600007F0
    // 0x6000375C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_33;
    // 0x6000375C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_33:
    // 0x60003760: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003764: jal         0x60002DE0
    // 0x60003768: addiu       $a0, $a0, 0x7538
    ctx->r4 = ADD32(ctx->r4, 0X7538);
    ovl_demo_story_2DE0(rdram, ctx);
        goto after_34;
    // 0x60003768: addiu       $a0, $a0, 0x7538
    ctx->r4 = ADD32(ctx->r4, 0X7538);
    after_34:
    // 0x6000376C: jal         0x600033A8
    // 0x60003770: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_35;
    // 0x60003770: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_35:
    // 0x60003774: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003778: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003778: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000377C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003780: lw          $a0, 0x6C80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C80);
    // 0x60003784: jal         0x600033A8
    // 0x60003788: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_36;
    // 0x60003788: nop

    after_36:
    // 0x6000378C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003790: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003790: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003794: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x60003798: nop

    // 0x6000379C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x600037A0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x600037A4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x600037A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x600037AC: nop

    // 0x600037B0: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x600037B4: bne         $t4, $zero, L_600037C4
    if (ctx->r12 != 0) {
        // 0x600037B8: andi        $t5, $v0, 0x800
        ctx->r13 = ctx->r2 & 0X800;
            goto L_600037C4;
    }
    // 0x600037B8: andi        $t5, $v0, 0x800
    ctx->r13 = ctx->r2 & 0X800;
    // 0x600037BC: beq         $t5, $zero, L_600037FC
    if (ctx->r13 == 0) {
        // 0x600037C0: nop
    
            goto L_600037FC;
    }
    // 0x600037C0: nop

L_600037C4:
    // 0x600037C4: jal         0x60000F50
    // 0x600037C8: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_37;
    // 0x600037C8: nop

    after_37:
    // 0x600037CC: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600037D0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600037D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600037D4: jal         0x6000085C
    // 0x600037D8: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_38;
    // 0x600037D8: nop

    after_38:
    // 0x600037DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x600037E0: nop

    // 0x600037E4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x600037E8: bne         $t6, $zero, L_600037C4
    if (ctx->r14 != 0) {
        // 0x600037EC: nop
    
            goto L_600037C4;
    }
    // 0x600037EC: nop

    // 0x600037F0: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x600037F4: bne         $t7, $zero, L_600037C4
    if (ctx->r15 != 0) {
        // 0x600037F8: nop
    
            goto L_600037C4;
    }
    // 0x600037F8: nop

L_600037FC:
    // 0x600037FC: jal         0x6000085C
    // 0x60003800: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_39;
    // 0x60003800: nop

    after_39:
    // 0x60003804: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003808: nop

    // 0x6000380C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x60003810: bne         $t8, $zero, L_60003820
    if (ctx->r24 != 0) {
        // 0x60003814: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_60003820;
    }
    // 0x60003814: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x60003818: beq         $t9, $zero, L_6000385C
    if (ctx->r25 == 0) {
        // 0x6000381C: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_6000385C;
    }
    // 0x6000381C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_60003820:
    // 0x60003820: jal         0x60000F50
    // 0x60003824: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_40;
    // 0x60003824: nop

    after_40:
    // 0x60003828: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x6000382C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x6000382C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003830: jal         0x6000085C
    // 0x60003834: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_41;
    // 0x60003834: nop

    after_41:
    // 0x60003838: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x6000383C: nop

    // 0x60003840: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x60003844: bne         $t0, $zero, L_60003820
    if (ctx->r8 != 0) {
        // 0x60003848: nop
    
            goto L_60003820;
    }
    // 0x60003848: nop

    // 0x6000384C: andi        $t1, $v0, 0x800
    ctx->r9 = ctx->r2 & 0X800;
    // 0x60003850: bne         $t1, $zero, L_60003820
    if (ctx->r9 != 0) {
        // 0x60003854: nop
    
            goto L_60003820;
    }
    // 0x60003854: nop

    // 0x60003858: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_6000385C:
    // 0x6000385C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x60003860: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x60003864: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x60003868: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000386C: jal         0x600007F0
    // 0x60003870: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_42;
    // 0x60003870: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_42:
    // 0x60003874: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003878: jal         0x60002DE0
    // 0x6000387C: addiu       $a0, $a0, 0x7544
    ctx->r4 = ADD32(ctx->r4, 0X7544);
    ovl_demo_story_2DE0(rdram, ctx);
        goto after_43;
    // 0x6000387C: addiu       $a0, $a0, 0x7544
    ctx->r4 = ADD32(ctx->r4, 0X7544);
    after_43:
    // 0x60003880: jal         0x6000085C
    // 0x60003884: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_44;
    // 0x60003884: nop

    after_44:
    // 0x60003888: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x6000388C: nop

    // 0x60003890: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x60003894: beq         $t5, $zero, L_600038C8
    if (ctx->r13 == 0) {
        // 0x60003898: nop
    
            goto L_600038C8;
    }
    // 0x60003898: nop

L_6000389C:
    // 0x6000389C: jal         0x60000F50
    // 0x600038A0: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_45;
    // 0x600038A0: nop

    after_45:
    // 0x600038A4: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600038A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600038A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600038AC: jal         0x6000085C
    // 0x600038B0: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_46;
    // 0x600038B0: nop

    after_46:
    // 0x600038B4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600038B8: nop

    // 0x600038BC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x600038C0: bne         $t7, $zero, L_6000389C
    if (ctx->r15 != 0) {
        // 0x600038C4: nop
    
            goto L_6000389C;
    }
    // 0x600038C4: nop

L_600038C8:
    // 0x600038C8: jal         0x6000085C
    // 0x600038CC: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_47;
    // 0x600038CC: nop

    after_47:
    // 0x600038D0: jal         0x600033A8
    // 0x600038D4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_48;
    // 0x600038D4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_48:
    // 0x600038D8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600038DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600038DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600038E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600038E4: jal         0x60001CEC
    // 0x600038E8: addiu       $a0, $a0, 0x7300
    ctx->r4 = ADD32(ctx->r4, 0X7300);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_49;
    // 0x600038E8: addiu       $a0, $a0, 0x7300
    ctx->r4 = ADD32(ctx->r4, 0X7300);
    after_49:
    // 0x600038EC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x600038F0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600038F4: addiu       $v1, $v1, 0x6C94
    ctx->r3 = ADD32(ctx->r3, 0X6C94);
    // 0x600038F8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x600038FC: lw          $t0, 0x3C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X3C);
    // 0x60003900: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x60003904: lw          $t2, 0x40($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X40);
    // 0x60003908: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x6000390C: jal         0x600033A8
    // 0x60003910: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_50;
    // 0x60003910: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_50:
    // 0x60003914: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003918: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003918: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000391C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x60003920: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x60003924: jal         0x600033A8
    // 0x60003928: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_51;
    // 0x60003928: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    after_51:
    // 0x6000392C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003930: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003930: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003934: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003938: jal         0x60001CEC
    // 0x6000393C: addiu       $a0, $a0, 0x7308
    ctx->r4 = ADD32(ctx->r4, 0X7308);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_52;
    // 0x6000393C: addiu       $a0, $a0, 0x7308
    ctx->r4 = ADD32(ctx->r4, 0X7308);
    after_52:
    // 0x60003940: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x60003944: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60003948: jal         0x600033A8
    // 0x6000394C: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_53;
    // 0x6000394C: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    after_53:
    // 0x60003950: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003954: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003954: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003958: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000395C: jal         0x60001CEC
    // 0x60003960: addiu       $a0, $a0, 0x7310
    ctx->r4 = ADD32(ctx->r4, 0X7310);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_54;
    // 0x60003960: addiu       $a0, $a0, 0x7310
    ctx->r4 = ADD32(ctx->r4, 0X7310);
    after_54:
    // 0x60003964: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x60003968: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000396C: jal         0x600033A8
    // 0x60003970: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_55;
    // 0x60003970: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    after_55:
    // 0x60003974: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003978: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003978: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x6000397C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003980: jal         0x60001CEC
    // 0x60003984: addiu       $a0, $a0, 0x7318
    ctx->r4 = ADD32(ctx->r4, 0X7318);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_56;
    // 0x60003984: addiu       $a0, $a0, 0x7318
    ctx->r4 = ADD32(ctx->r4, 0X7318);
    after_56:
    // 0x60003988: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x6000398C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60003990: jal         0x600033A8
    // 0x60003994: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_57;
    // 0x60003994: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    after_57:
    // 0x60003998: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x6000399C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x6000399C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600039A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039A4: jal         0x60001CEC
    // 0x600039A8: addiu       $a0, $a0, 0x7320
    ctx->r4 = ADD32(ctx->r4, 0X7320);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_58;
    // 0x600039A8: addiu       $a0, $a0, 0x7320
    ctx->r4 = ADD32(ctx->r4, 0X7320);
    after_58:
    // 0x600039AC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x600039B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039B4: addiu       $a0, $a0, 0x7328
    ctx->r4 = ADD32(ctx->r4, 0X7328);
    // 0x600039B8: jal         0x60001CEC
    // 0x600039BC: sw          $v0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r2;
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_59;
    // 0x600039BC: sw          $v0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r2;
    after_59:
    // 0x600039C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x600039C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039C8: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    // 0x600039CC: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    // 0x600039D0: jal         0x600033A8
    // 0x600039D4: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_60;
    // 0x600039D4: nop

    after_60:
    // 0x600039D8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x600039DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x600039DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600039E0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x600039E4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600039E8: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
    // 0x600039EC: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x600039F0: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x600039F4: lw          $a0, 0x6E74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E74);
    // 0x600039F8: jal         0x600033A8
    // 0x600039FC: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_61;
    // 0x600039FC: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    after_61:
    // 0x60003A00: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003A04: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003A04: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003A08: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x60003A0C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x60003A10: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x60003A14: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x60003A18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003A1C: jal         0x600007F0
    // 0x60003A20: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_demo_story_7F0(rdram, ctx);
        goto after_62;
    // 0x60003A20: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_62:
    // 0x60003A24: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A28: jal         0x60002DE0
    // 0x60003A2C: addiu       $a0, $a0, 0x7550
    ctx->r4 = ADD32(ctx->r4, 0X7550);
    ovl_demo_story_2DE0(rdram, ctx);
        goto after_63;
    // 0x60003A2C: addiu       $a0, $a0, 0x7550
    ctx->r4 = ADD32(ctx->r4, 0X7550);
    after_63:
    // 0x60003A30: jal         0x600033A8
    // 0x60003A34: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_64;
    // 0x60003A34: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_64:
    // 0x60003A38: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003A3C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003A3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003A40: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A44: lw          $a0, 0x6E78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E78);
    // 0x60003A48: jal         0x600033A8
    // 0x60003A4C: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_65;
    // 0x60003A4C: nop

    after_65:
    // 0x60003A50: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003A54: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003A54: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003A58: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x60003A5C: nop

    // 0x60003A60: sw          $zero, 0x10($t2)
    MEM_W(0X10, ctx->r10) = 0;
    // 0x60003A64: jal         0x6000085C
    // 0x60003A68: sw          $zero, 0xC($t2)
    MEM_W(0XC, ctx->r10) = 0;
    ovl_demo_story_85C(rdram, ctx);
        goto after_66;
    // 0x60003A68: sw          $zero, 0xC($t2)
    MEM_W(0XC, ctx->r10) = 0;
    after_66:
    // 0x60003A6C: jal         0x600033A8
    // 0x60003A70: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_67;
    // 0x60003A70: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_67:
    // 0x60003A74: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003A78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003A78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003A7C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A80: jal         0x60001CEC
    // 0x60003A84: addiu       $a0, $a0, 0x7330
    ctx->r4 = ADD32(ctx->r4, 0X7330);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_68;
    // 0x60003A84: addiu       $a0, $a0, 0x7330
    ctx->r4 = ADD32(ctx->r4, 0X7330);
    after_68:
    // 0x60003A88: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x60003A8C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60003A90: addiu       $v1, $v1, 0x6C94
    ctx->r3 = ADD32(ctx->r3, 0X6C94);
    // 0x60003A94: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x60003A98: lw          $t5, 0x234($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X234);
    // 0x60003A9C: lw          $t4, 0x230($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X230);
    // 0x60003AA0: lw          $t7, 0x238($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X238);
    // 0x60003AA4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x60003AA8: jal         0x600033A8
    // 0x60003AAC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_69;
    // 0x60003AAC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_69:
    // 0x60003AB0: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003AB4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003AB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003AB8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x60003ABC: jal         0x6000085C
    // 0x60003AC0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    ovl_demo_story_85C(rdram, ctx);
        goto after_70;
    // 0x60003AC0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_70:
    // 0x60003AC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003AC8: nop

    // 0x60003ACC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x60003AD0: bne         $t9, $zero, L_60003AE0
    if (ctx->r25 != 0) {
        // 0x60003AD4: andi        $t0, $v0, 0x800
        ctx->r8 = ctx->r2 & 0X800;
            goto L_60003AE0;
    }
    // 0x60003AD4: andi        $t0, $v0, 0x800
    ctx->r8 = ctx->r2 & 0X800;
    // 0x60003AD8: beq         $t0, $zero, L_60003B18
    if (ctx->r8 == 0) {
        // 0x60003ADC: nop
    
            goto L_60003B18;
    }
    // 0x60003ADC: nop

L_60003AE0:
    // 0x60003AE0: jal         0x60000F50
    // 0x60003AE4: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_71;
    // 0x60003AE4: nop

    after_71:
    // 0x60003AE8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003AEC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003AEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003AF0: jal         0x6000085C
    // 0x60003AF4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_72;
    // 0x60003AF4: nop

    after_72:
    // 0x60003AF8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003AFC: nop

    // 0x60003B00: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x60003B04: bne         $t1, $zero, L_60003AE0
    if (ctx->r9 != 0) {
        // 0x60003B08: nop
    
            goto L_60003AE0;
    }
    // 0x60003B08: nop

    // 0x60003B0C: andi        $t2, $v0, 0x800
    ctx->r10 = ctx->r2 & 0X800;
    // 0x60003B10: bne         $t2, $zero, L_60003AE0
    if (ctx->r10 != 0) {
        // 0x60003B14: nop
    
            goto L_60003AE0;
    }
    // 0x60003B14: nop

L_60003B18:
    // 0x60003B18: jal         0x6000085C
    // 0x60003B1C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_73;
    // 0x60003B1C: nop

    after_73:
    // 0x60003B20: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003B24: nop

    // 0x60003B28: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x60003B2C: bne         $t3, $zero, L_60003B3C
    if (ctx->r11 != 0) {
        // 0x60003B30: andi        $t4, $v0, 0x800
        ctx->r12 = ctx->r2 & 0X800;
            goto L_60003B3C;
    }
    // 0x60003B30: andi        $t4, $v0, 0x800
    ctx->r12 = ctx->r2 & 0X800;
    // 0x60003B34: beq         $t4, $zero, L_60003B74
    if (ctx->r12 == 0) {
        // 0x60003B38: nop
    
            goto L_60003B74;
    }
    // 0x60003B38: nop

L_60003B3C:
    // 0x60003B3C: jal         0x60000F50
    // 0x60003B40: nop

    ovl_demo_story_F50(rdram, ctx);
        goto after_74;
    // 0x60003B40: nop

    after_74:
    // 0x60003B44: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003B48: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003B48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003B4C: jal         0x6000085C
    // 0x60003B50: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_75;
    // 0x60003B50: nop

    after_75:
    // 0x60003B54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60003B58: nop

    // 0x60003B5C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x60003B60: bne         $t5, $zero, L_60003B3C
    if (ctx->r13 != 0) {
        // 0x60003B64: nop
    
            goto L_60003B3C;
    }
    // 0x60003B64: nop

    // 0x60003B68: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x60003B6C: bne         $t6, $zero, L_60003B3C
    if (ctx->r14 != 0) {
        // 0x60003B70: nop
    
            goto L_60003B3C;
    }
    // 0x60003B70: nop

L_60003B74:
    // 0x60003B74: jal         0x600033A8
    // 0x60003B78: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_76;
    // 0x60003B78: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_76:
    // 0x60003B7C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003B80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003B80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003B84: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B88: jal         0x60001CEC
    // 0x60003B8C: addiu       $a0, $a0, 0x7338
    ctx->r4 = ADD32(ctx->r4, 0X7338);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_77;
    // 0x60003B8C: addiu       $a0, $a0, 0x7338
    ctx->r4 = ADD32(ctx->r4, 0X7338);
    after_77:
    // 0x60003B90: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x60003B94: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B98: addiu       $a0, $a0, 0x7370
    ctx->r4 = ADD32(ctx->r4, 0X7370);
    // 0x60003B9C: jal         0x60001CEC
    // 0x60003BA0: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_78;
    // 0x60003BA0: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    after_78:
    // 0x60003BA4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x60003BA8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BAC: addiu       $a0, $a0, 0x7378
    ctx->r4 = ADD32(ctx->r4, 0X7378);
    // 0x60003BB0: jal         0x60001CEC
    // 0x60003BB4: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_79;
    // 0x60003BB4: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
    after_79:
    // 0x60003BB8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x60003BBC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BC0: addiu       $a0, $a0, 0x7358
    ctx->r4 = ADD32(ctx->r4, 0X7358);
    // 0x60003BC4: jal         0x60001CEC
    // 0x60003BC8: sw          $v0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r2;
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_80;
    // 0x60003BC8: sw          $v0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r2;
    after_80:
    // 0x60003BCC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x60003BD0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BD4: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x60003BD8: lw          $a0, 0x7168($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7168);
    // 0x60003BDC: jal         0x600033A8
    // 0x60003BE0: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_81;
    // 0x60003BE0: nop

    after_81:
    // 0x60003BE4: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003BE8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003BE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003BEC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003BF0: jal         0x60001CEC
    // 0x60003BF4: addiu       $a0, $a0, 0x7360
    ctx->r4 = ADD32(ctx->r4, 0X7360);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_82;
    // 0x60003BF4: addiu       $a0, $a0, 0x7360
    ctx->r4 = ADD32(ctx->r4, 0X7360);
    after_82:
    // 0x60003BF8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x60003BFC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C00: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x60003C04: lw          $a0, 0x71BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71BC);
    // 0x60003C08: jal         0x600033A8
    // 0x60003C0C: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_83;
    // 0x60003C0C: nop

    after_83:
    // 0x60003C10: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003C14: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003C14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003C18: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C1C: jal         0x60001CEC
    // 0x60003C20: addiu       $a0, $a0, 0x7368
    ctx->r4 = ADD32(ctx->r4, 0X7368);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_84;
    // 0x60003C20: addiu       $a0, $a0, 0x7368
    ctx->r4 = ADD32(ctx->r4, 0X7368);
    after_84:
    // 0x60003C24: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x60003C28: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C2C: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x60003C30: lw          $a0, 0x7210($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7210);
    // 0x60003C34: jal         0x600033A8
    // 0x60003C38: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_85;
    // 0x60003C38: nop

    after_85:
    // 0x60003C3C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003C40: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003C40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003C44: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x60003C48: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x60003C4C: jal         0x600033A8
    // 0x60003C50: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_86;
    // 0x60003C50: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    after_86:
    // 0x60003C54: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003C58: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003C58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003C5C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x60003C60: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x60003C64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003C68: sw          $zero, 0xC($t4)
    MEM_W(0XC, ctx->r12) = 0;
    // 0x60003C6C: sw          $zero, 0x8($t4)
    MEM_W(0X8, ctx->r12) = 0;
    // 0x60003C70: sw          $t5, 0x75BC($at)
    MEM_W(0X75BC, ctx->r1) = ctx->r13;
    // 0x60003C74: jal         0x6000025C
    // 0x60003C78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_25C(rdram, ctx);
        goto after_87;
    // 0x60003C78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_87:
    // 0x60003C7C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C80: jal         0x60001E90
    // 0x60003C84: addiu       $a0, $a0, 0x7340
    ctx->r4 = ADD32(ctx->r4, 0X7340);
    ovl_demo_story_1E90(rdram, ctx);
        goto after_88;
    // 0x60003C84: addiu       $a0, $a0, 0x7340
    ctx->r4 = ADD32(ctx->r4, 0X7340);
    after_88:
    // 0x60003C88: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60003C8C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C90: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x60003C94: lw          $a0, 0x6F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F6C);
    // 0x60003C98: jal         0x600033A8
    // 0x60003C9C: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_89;
    // 0x60003C9C: nop

    after_89:
    // 0x60003CA0: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003CA4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003CA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003CA8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x60003CAC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003CB0: addiu       $a0, $a0, 0x7348
    ctx->r4 = ADD32(ctx->r4, 0X7348);
    // 0x60003CB4: jal         0x60002158
    // 0x60003CB8: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    ovl_demo_story_2158(rdram, ctx);
        goto after_90;
    // 0x60003CB8: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    after_90:
    // 0x60003CBC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x60003CC0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x60003CC4: jal         0x600033A8
    // 0x60003CC8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_91;
    // 0x60003CC8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    after_91:
    // 0x60003CCC: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003CD0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003CD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003CD4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003CD8: jal         0x60002158
    // 0x60003CDC: addiu       $a0, $a0, 0x7350
    ctx->r4 = ADD32(ctx->r4, 0X7350);
    ovl_demo_story_2158(rdram, ctx);
        goto after_92;
    // 0x60003CDC: addiu       $a0, $a0, 0x7350
    ctx->r4 = ADD32(ctx->r4, 0X7350);
    after_92:
    // 0x60003CE0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x60003CE4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x60003CE8: jal         0x600033A8
    // 0x60003CEC: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    ovl_demo_story_33A8(rdram, ctx);
        goto after_93;
    // 0x60003CEC: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    after_93:
    // 0x60003CF0: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003CF4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003CF4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003CF8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003CFC: jal         0x60002158
    // 0x60003D00: addiu       $a0, $a0, 0x7380
    ctx->r4 = ADD32(ctx->r4, 0X7380);
    ovl_demo_story_2158(rdram, ctx);
        goto after_94;
    // 0x60003D00: addiu       $a0, $a0, 0x7380
    ctx->r4 = ADD32(ctx->r4, 0X7380);
    after_94:
    // 0x60003D04: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x60003D08: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D0C: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x60003D10: lw          $a0, 0x7068($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7068);
    // 0x60003D14: jal         0x600033A8
    // 0x60003D18: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_95;
    // 0x60003D18: nop

    after_95:
    // 0x60003D1C: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003D20: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003D20: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003D24: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x60003D28: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60003D2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003D30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x60003D34: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x60003D38: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
    // 0x60003D3C: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
    // 0x60003D40: jal         0x60000220
    // 0x60003D44: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    ovl_demo_story_220(rdram, ctx);
        goto after_96;
    // 0x60003D44: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    after_96:
    // 0x60003D48: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D4C: jal         0x60001CEC
    // 0x60003D50: addiu       $a0, $a0, 0x7388
    ctx->r4 = ADD32(ctx->r4, 0X7388);
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_97;
    // 0x60003D50: addiu       $a0, $a0, 0x7388
    ctx->r4 = ADD32(ctx->r4, 0X7388);
    after_97:
    // 0x60003D54: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x60003D58: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60003D5C: addiu       $v1, $v1, 0x7030
    ctx->r3 = ADD32(ctx->r3, 0X7030);
    // 0x60003D60: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x60003D64: lw          $t4, 0x90($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X90);
    // 0x60003D68: lw          $t3, 0x8C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8C);
    // 0x60003D6C: jal         0x600033A8
    // 0x60003D70: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    ovl_demo_story_33A8(rdram, ctx);
        goto after_98;
    // 0x60003D70: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    after_98:
    // 0x60003D74: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003D78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003D78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003D7C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x60003D80: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D84: addiu       $a0, $a0, 0x7390
    ctx->r4 = ADD32(ctx->r4, 0X7390);
    // 0x60003D88: jal         0x60001CEC
    // 0x60003D8C: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    ovl_demo_story_1CEC(rdram, ctx);
        goto after_99;
    // 0x60003D8C: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    after_99:
    // 0x60003D90: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60003D94: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D98: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x60003D9C: lw          $a0, 0x7110($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7110);
    // 0x60003DA0: jal         0x600033A8
    // 0x60003DA4: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_100;
    // 0x60003DA4: nop

    after_100:
    // 0x60003DA8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003DAC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003DAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003DB0: jal         0x60000244
    // 0x60003DB4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_demo_story_244(rdram, ctx);
        goto after_101;
    // 0x60003DB4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_101:
    // 0x60003DB8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DBC: lw          $a0, 0x7114($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7114);
    // 0x60003DC0: jal         0x600033A8
    // 0x60003DC4: nop

    ovl_demo_story_33A8(rdram, ctx);
        goto after_102;
    // 0x60003DC4: nop

    after_102:
    // 0x60003DC8: bne         $v0, $zero, L_60003E0C
    if (ctx->r2 != 0) {
        // 0x60003DCC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60003E0C;
    }
    // 0x60003DCC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60003DD0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x60003DD4: nop

    // 0x60003DD8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x60003DDC: jal         0x6000082C
    // 0x60003DE0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    ovl_demo_story_82C(rdram, ctx);
        goto after_103;
    // 0x60003DE0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_103:
    // 0x60003DE4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x60003DE8: nop

    // 0x60003DEC: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x60003DF0: jal         0x6000082C
    // 0x60003DF4: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_104;
    // 0x60003DF4: nop

    after_104:
    // 0x60003DF8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x60003DFC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x60003E00: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x60003E04: b           L_60003E34
    // 0x60003E08: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
        goto L_60003E34;
    // 0x60003E08: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
L_60003E0C:
    // 0x60003E0C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x60003E10: addiu       $at, $zero, 0x809
    ctx->r1 = ADD32(0, 0X809);
    // 0x60003E14: bne         $t0, $at, L_60003E30
    if (ctx->r8 != ctx->r1) {
        // 0x60003E18: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_60003E30;
    }
    // 0x60003E18: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003E20: jal         0x60001334
    // 0x60003E24: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    ovl_demo_story_1334(rdram, ctx);
        goto after_105;
    // 0x60003E24: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_105:
    // 0x60003E28: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x60003E2C: nop

L_60003E30:
    // 0x60003E30: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_60003E34:
    // 0x60003E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003E3C: jr          $ra
    // 0x60003E40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60003E40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_demo_story_3E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003E44: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60003E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003E4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60003E50: jal         0x60000C1C
    // 0x60003E54: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60003E54: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003E58: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003E5C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x60003E60: addiu       $t6, $t6, 0x75C0
    ctx->r14 = ADD32(ctx->r14, 0X75C0);
    // 0x60003E64: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x60003E68: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x60003E6C: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x60003E70: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x60003E74: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003E78: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x60003E7C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x60003E80: nop

    // 0x60003E84: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x60003E88: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x60003E8C: nop

    // 0x60003E90: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x60003E94: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x60003E98: jal         0x6000025C
    // 0x60003E9C: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    ovl_demo_story_25C(rdram, ctx);
        goto after_1;
    // 0x60003E9C: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    after_1:
    // 0x60003EA0: jal         0x60000850
    // 0x60003EA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_demo_story_850(rdram, ctx);
        goto after_2;
    // 0x60003EA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60003EA8: jal         0x60000A6C
    // 0x60003EAC: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_3;
    // 0x60003EAC: nop

    after_3:
    // 0x60003EB0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003EB4: jal         0x60001334
    // 0x60003EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_4;
    // 0x60003EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60003EBC: jal         0x60000118
    // 0x60003EC0: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    ovl_demo_story_118(rdram, ctx);
        goto after_5;
    // 0x60003EC0: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    after_5:
    // 0x60003EC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003EC8: sw          $v0, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->r2;
    // 0x60003ECC: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003ED0: addiu       $s1, $s1, 0x75BC
    ctx->r17 = ADD32(ctx->r17, 0X75BC);
    // 0x60003ED4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x60003ED8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003EDC: jal         0x60002F74
    // 0x60003EE0: sw          $zero, 0x68A0($at)
    MEM_W(0X68A0, ctx->r1) = 0;
    ovl_demo_story_2F74(rdram, ctx);
        goto after_6;
    // 0x60003EE0: sw          $zero, 0x68A0($at)
    MEM_W(0X68A0, ctx->r1) = 0;
    after_6:
    // 0x60003EE4: bne         $v0, $zero, L_60003EF4
    if (ctx->r2 != 0) {
        // 0x60003EE8: nop
    
            goto L_60003EF4;
    }
    // 0x60003EE8: nop

    // 0x60003EEC: jal         0x60003420
    // 0x60003EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_3420(rdram, ctx);
        goto after_7;
    // 0x60003EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_60003EF4:
    // 0x60003EF4: jal         0x60000124
    // 0x60003EF8: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    ovl_demo_story_124(rdram, ctx);
        goto after_8;
    // 0x60003EF8: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    after_8:
    // 0x60003EFC: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x60003F00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003F04: bne         $t0, $zero, L_60003F40
    if (ctx->r8 != 0) {
        // 0x60003F08: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_60003F40;
    }
    // 0x60003F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003F0C: jal         0x60000268
    // 0x60003F10: nop

    ovl_demo_story_268(rdram, ctx);
        goto after_9;
    // 0x60003F10: nop

    after_9:
    // 0x60003F14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003F20: jal         0x60000238
    // 0x60003F24: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_demo_story_238(rdram, ctx);
        goto after_10;
    // 0x60003F24: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_10:
    // 0x60003F28: jal         0x60000208
    // 0x60003F2C: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_11;
    // 0x60003F2C: nop

    after_11:
    // 0x60003F30: jal         0x6000025C
    // 0x60003F34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_25C(rdram, ctx);
        goto after_12;
    // 0x60003F34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x60003F38: b           L_60003F50
    // 0x60003F3C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
        goto L_60003F50;
    // 0x60003F3C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_60003F40:
    // 0x60003F40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003F44: jal         0x60000238
    // 0x60003F48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_demo_story_238(rdram, ctx);
        goto after_13;
    // 0x60003F48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x60003F4C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_60003F50:
    // 0x60003F50: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
L_60003F54:
    // 0x60003F54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60003F58: nop

    // 0x60003F5C: beq         $a0, $zero, L_60003F6C
    if (ctx->r4 == 0) {
        // 0x60003F60: nop
    
            goto L_60003F6C;
    }
    // 0x60003F60: nop

    // 0x60003F64: jal         0x6000082C
    // 0x60003F68: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_14;
    // 0x60003F68: nop

    after_14:
L_60003F6C:
    // 0x60003F6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60003F70: bne         $s0, $s1, L_60003F54
    if (ctx->r16 != ctx->r17) {
        // 0x60003F74: nop
    
            goto L_60003F54;
    }
    // 0x60003F74: nop

    // 0x60003F78: jal         0x60000A84
    // 0x60003F7C: nop

    ovl_demo_story_A84(rdram, ctx);
        goto after_15;
    // 0x60003F7C: nop

    after_15:
    // 0x60003F80: jal         0x60000A6C
    // 0x60003F84: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_16;
    // 0x60003F84: nop

    after_16:
    // 0x60003F88: addiu       $a0, $zero, 0x809
    ctx->r4 = ADD32(0, 0X809);
    // 0x60003F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003F90: jal         0x60000C10
    // 0x60003F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_demo_story_C10(rdram, ctx);
        goto after_17;
    // 0x60003F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x60003F98: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x60003F9C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x60003FA0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60003FA4: nop

    // 0x60003FA8: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x60003FAC: ori         $t4, $t2, 0x4000
    ctx->r12 = ctx->r10 | 0X4000;
    // 0x60003FB0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60003FB4: jal         0x60000838
    // 0x60003FB8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    ovl_demo_story_838(rdram, ctx);
        goto after_18;
    // 0x60003FB8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    after_18:
    // 0x60003FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003FC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60003FC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60003FC8: jr          $ra
    // 0x60003FCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60003FCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_demo_story_3FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003FD8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003FDC: addiu       $a0, $a0, 0x3E44
    ctx->r4 = ADD32(ctx->r4, 0X3E44);
    // 0x60003FE0: ori         $a1, $zero, 0xFFF6
    ctx->r5 = 0 | 0XFFF6;
    // 0x60003FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003FE8: jal         0x60000820
    // 0x60003FEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60003FEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003FF8: jr          $ra
    // 0x60003FFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60003FFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_4000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004000: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x60004004: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x60004008: sw          $s7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r23;
    // 0x6000400C: sw          $s6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r22;
    // 0x60004010: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x60004014: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x60004018: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x6000401C: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x60004020: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x60004024: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x60004028: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x6000402C: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x60004030: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60004034: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x60004038: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x6000403C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60004040: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60004044: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60004048: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000404C: jal         0x60000868
    // 0x60004050: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60004050: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004054: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x60004058: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x6000405C: lw          $s7, 0x4($s5)
    ctx->r23 = MEM_W(ctx->r21, 0X4);
    // 0x60004060: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004064: and         $t6, $s7, $at
    ctx->r14 = ctx->r23 & ctx->r1;
    // 0x60004068: or          $s7, $t6, $zero
    ctx->r23 = ctx->r14 | 0;
    // 0x6000406C: blez        $t6, L_600041A0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x60004070: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_600041A0;
    }
    // 0x60004070: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x60004074: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004078: lwc1        $f28, 0x7968($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X7968);
    // 0x6000407C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004080: lwc1        $f26, 0x796C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X796C);
    // 0x60004084: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60004088: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x6000408C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60004090: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60004094: lui         $s4, 0x4000
    ctx->r20 = S32(0X4000 << 16);
    // 0x60004098: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x6000409C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x600040A0: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
L_600040A4:
    // 0x600040A4: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x600040A8: nop

    // 0x600040AC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x600040B0: nop

    // 0x600040B4: beq         $s2, $t7, L_60004190
    if (ctx->r18 == ctx->r15) {
        // 0x600040B8: nop
    
            goto L_60004190;
    }
    // 0x600040B8: nop

    // 0x600040BC: mtc1        $s7, $f6
    ctx->f6.u32l = ctx->r23;
    // 0x600040C0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600040C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600040C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600040CC: addiu       $t8, $s6, 0x1
    ctx->r24 = ADD32(ctx->r22, 0X1);
    // 0x600040D0: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x600040D4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x600040D8: nop

    // 0x600040DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x600040E0: mul.s       $f20, $f10, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x600040E4: nop

L_600040E8:
    // 0x600040E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600040EC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x600040F0: jal         0x600006C4
    // 0x600040F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x600040F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x600040F8: lw          $v1, 0x4($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X4);
    // 0x600040FC: nop

    // 0x60004100: and         $t9, $v1, $s3
    ctx->r25 = ctx->r3 & ctx->r19;
    // 0x60004104: beq         $t9, $zero, L_60004128
    if (ctx->r25 == 0) {
        // 0x60004108: and         $t0, $v1, $s4
        ctx->r8 = ctx->r3 & ctx->r20;
            goto L_60004128;
    }
    // 0x60004108: and         $t0, $v1, $s4
    ctx->r8 = ctx->r3 & ctx->r20;
    // 0x6000410C: jal         0x6000031C
    // 0x60004110: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_2;
    // 0x60004110: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x60004114: mul.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x60004118: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x6000411C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x60004120: b           L_60004170
    // 0x60004124: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
        goto L_60004170;
    // 0x60004124: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
L_60004128:
    // 0x60004128: beq         $t0, $zero, L_60004154
    if (ctx->r8 == 0) {
        // 0x6000412C: nop
    
            goto L_60004154;
    }
    // 0x6000412C: nop

    // 0x60004130: jal         0x6000031C
    // 0x60004134: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_3;
    // 0x60004134: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x60004138: sub.s       $f6, $f24, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x6000413C: mul.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x60004140: add.s       $f2, $f4, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x60004144: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x60004148: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x6000414C: b           L_60004170
    // 0x60004150: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
        goto L_60004170;
    // 0x60004150: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
L_60004154:
    // 0x60004154: jal         0x6000031C
    // 0x60004158: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_demo_story_31C(rdram, ctx);
        goto after_4;
    // 0x60004158: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x6000415C: sub.s       $f8, $f24, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x60004160: mul.s       $f2, $f8, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x60004164: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x60004168: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x6000416C: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
L_60004170:
    // 0x60004170: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004174: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x60004178: jal         0x600006C4
    // 0x6000417C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_5;
    // 0x6000417C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x60004180: lw          $t1, 0x24($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X24);
    // 0x60004184: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x60004188: bne         $s2, $t1, L_600040E8
    if (ctx->r18 != ctx->r9) {
        // 0x6000418C: nop
    
            goto L_600040E8;
    }
    // 0x6000418C: nop

L_60004190:
    // 0x60004190: jal         0x6000085C
    // 0x60004194: addiu       $s0, $s6, 0x1
    ctx->r16 = ADD32(ctx->r22, 0X1);
    ovl_demo_story_85C(rdram, ctx);
        goto after_6;
    // 0x60004194: addiu       $s0, $s6, 0x1
    ctx->r16 = ADD32(ctx->r22, 0X1);
    after_6:
    // 0x60004198: bne         $s0, $s7, L_600040A4
    if (ctx->r16 != ctx->r23) {
        // 0x6000419C: or          $s6, $s0, $zero
        ctx->r22 = ctx->r16 | 0;
            goto L_600040A4;
    }
    // 0x6000419C: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
L_600041A0:
    // 0x600041A0: jal         0x60000838
    // 0x600041A4: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_7;
    // 0x600041A4: nop

    after_7:
    // 0x600041A8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x600041AC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600041B0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600041B4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600041B8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600041BC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600041C0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600041C4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600041C8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600041CC: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600041D0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600041D4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x600041D8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x600041DC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x600041E0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x600041E4: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x600041E8: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x600041EC: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x600041F0: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x600041F4: jr          $ra
    // 0x600041F8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x600041F8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_demo_story_41FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600041FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004200: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60004204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60004208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000420C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x60004210: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004214: addiu       $a0, $a0, 0x4000
    ctx->r4 = ADD32(ctx->r4, 0X4000);
    // 0x60004218: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000421C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004220: jal         0x60000820
    // 0x60004224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60004224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004228: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x6000422C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004230: beq         $a0, $zero, L_60004254
    if (ctx->r4 == 0) {
        // 0x60004234: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_60004254;
    }
    // 0x60004234: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x60004238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000423C: beq         $a0, $at, L_6000426C
    if (ctx->r4 == ctx->r1) {
        // 0x60004240: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_6000426C;
    }
    // 0x60004240: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004244: beq         $a0, $at, L_60004280
    if (ctx->r4 == ctx->r1) {
        // 0x60004248: nop
    
            goto L_60004280;
    }
    // 0x60004248: nop

    // 0x6000424C: b           L_60004294
    // 0x60004250: sw          $s0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r16;
        goto L_60004294;
    // 0x60004250: sw          $s0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r16;
L_60004254:
    // 0x60004254: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x60004258: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x6000425C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004260: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60004264: b           L_60004290
    // 0x60004268: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
        goto L_60004290;
    // 0x60004268: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_6000426C:
    // 0x6000426C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x60004270: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60004274: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60004278: b           L_60004290
    // 0x6000427C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_60004290;
    // 0x6000427C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_60004280:
    // 0x60004280: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60004284: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x60004288: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x6000428C: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
L_60004290:
    // 0x60004290: sw          $s0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r16;
L_60004294:
    // 0x60004294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004298: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000429C: jr          $ra
    // 0x600042A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600042A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_42A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600042A4: jr          $ra
    // 0x600042A8: nop

    return;
    // 0x600042A8: nop

;}
RECOMP_FUNC void ovl_demo_story_42AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600042AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600042B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x600042B4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x600042B8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x600042BC: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600042C0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x600042C4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600042C8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x600042CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600042D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600042D4: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x600042D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x600042DC: blez        $v0, L_6000437C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x600042E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000437C;
    }
    // 0x600042E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600042E4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x600042E8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600042EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600042F0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600042F4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x600042F8: nop

L_600042FC:
    // 0x600042FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x60004300: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x60004304: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004308: nop

    // 0x6000430C: div.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f22.fl, ctx->f6.fl);
    // 0x60004310: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60004314: mul.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60004318: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x6000431C: nop

    // 0x60004320: bc1f        L_60004330
    if (!c1cs) {
        // 0x60004324: nop
    
            goto L_60004330;
    }
    // 0x60004324: nop

    // 0x60004328: b           L_60004334
    // 0x6000432C: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60004334;
    // 0x6000432C: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60004330:
    // 0x60004330: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_60004334:
    // 0x60004334: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60004338: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x6000433C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60004340: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60004344: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60004348: nop

    // 0x6000434C: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60004350: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x60004354: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60004358: jal         0x600005D4
    // 0x6000435C: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_0;
    // 0x6000435C: nop

    after_0:
    // 0x60004360: jal         0x6000085C
    // 0x60004364: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_1;
    // 0x60004364: nop

    after_1:
    // 0x60004368: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x6000436C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004370: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60004374: bne         $at, $zero, L_600042FC
    if (ctx->r1 != 0) {
        // 0x60004378: nop
    
            goto L_600042FC;
    }
    // 0x60004378: nop

L_6000437C:
    // 0x6000437C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60004380: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004384: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004388: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000438C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004390: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004394: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004398: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x6000439C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x600043A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600043A4: jr          $ra
    // 0x600043A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600043A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_43AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600043AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x600043B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600043B4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x600043B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x600043BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x600043C0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600043C4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x600043C8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600043CC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x600043D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600043D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600043D8: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x600043DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x600043E0: blez        $t6, L_60004484
    if (SIGNED(ctx->r14) <= 0) {
        // 0x600043E4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60004484;
    }
    // 0x600043E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600043E8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x600043EC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600043F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600043F4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600043F8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x600043FC: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_60004400:
    // 0x60004400: lw          $t7, 0x38($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X38);
    // 0x60004404: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x60004408: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x6000440C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60004410: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004414: nop

    // 0x60004418: div.s       $f8, $f22, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f22.fl, ctx->f6.fl);
    // 0x6000441C: mul.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60004420: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60004424: nop

    // 0x60004428: bc1f        L_60004438
    if (!c1cs) {
        // 0x6000442C: nop
    
            goto L_60004438;
    }
    // 0x6000442C: nop

    // 0x60004430: b           L_6000443C
    // 0x60004434: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_6000443C;
    // 0x60004434: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60004438:
    // 0x60004438: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_6000443C:
    // 0x6000443C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60004440: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x60004444: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60004448: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000444C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60004450: nop

    // 0x60004454: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60004458: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x6000445C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60004460: jal         0x600005D4
    // 0x60004464: subu        $a1, $s2, $t9
    ctx->r5 = SUB32(ctx->r18, ctx->r25);
    ovl_demo_story_5D4(rdram, ctx);
        goto after_0;
    // 0x60004464: subu        $a1, $s2, $t9
    ctx->r5 = SUB32(ctx->r18, ctx->r25);
    after_0:
    // 0x60004468: jal         0x6000085C
    // 0x6000446C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_1;
    // 0x6000446C: nop

    after_1:
    // 0x60004470: lw          $t0, 0x40($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X40);
    // 0x60004474: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004478: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x6000447C: bne         $at, $zero, L_60004400
    if (ctx->r1 != 0) {
        // 0x60004480: nop
    
            goto L_60004400;
    }
    // 0x60004480: nop

L_60004484:
    // 0x60004484: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60004488: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000448C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004490: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004494: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004498: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x6000449C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600044A0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x600044A4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x600044A8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x600044AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x600044B0: jr          $ra
    // 0x600044B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600044B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_44B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600044B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600044BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600044C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600044C4: jal         0x600015D8
    // 0x600044C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_demo_story_15D8(rdram, ctx);
        goto after_0;
    // 0x600044C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x600044CC: jal         0x600042AC
    // 0x600044D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_42AC(rdram, ctx);
        goto after_1;
    // 0x600044D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x600044D4: bne         $v0, $zero, L_60004500
    if (ctx->r2 != 0) {
        // 0x600044D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60004500;
    }
    // 0x600044D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x600044DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600044E0: jal         0x600005D4
    // 0x600044E4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_demo_story_5D4(rdram, ctx);
        goto after_2;
    // 0x600044E4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_2:
    // 0x600044E8: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x600044EC: jal         0x60000850
    // 0x600044F0: nop

    ovl_demo_story_850(rdram, ctx);
        goto after_3;
    // 0x600044F0: nop

    after_3:
    // 0x600044F4: jal         0x600043AC
    // 0x600044F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_43AC(rdram, ctx);
        goto after_4;
    // 0x600044F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x600044FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_60004500:
    // 0x60004500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60004504: jal         0x60001754
    // 0x60004508: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_demo_story_1754(rdram, ctx);
        goto after_5;
    // 0x60004508: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_5:
    // 0x6000450C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004510: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x60004514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004518: jr          $ra
    // 0x6000451C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000451C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_story_4520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004528: jal         0x60000868
    // 0x6000452C: nop

    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x6000452C: nop

    after_0:
    // 0x60004530: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x60004534: jal         0x600022AC
    // 0x60004538: nop

    ovl_demo_story_22AC(rdram, ctx);
        goto after_1;
    // 0x60004538: nop

    after_1:
    // 0x6000453C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004544: jr          $ra
    // 0x60004548: nop

    return;
    // 0x60004548: nop

;}
RECOMP_FUNC void ovl_demo_story_454C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000454C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x60004550: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x60004554: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60004558: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x6000455C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60004560: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60004564: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60004568: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x6000456C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60004570: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60004574: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60004578: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x6000457C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60004580: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60004584: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60004588: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000458C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60004590: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004594: jal         0x60000868
    // 0x60004598: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60004598: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000459C: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x600045A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600045A4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x600045A8: jal         0x60000874
    // 0x600045AC: addiu       $a0, $a0, 0x4520
    ctx->r4 = ADD32(ctx->r4, 0X4520);
    ovl_demo_story_874(rdram, ctx);
        goto after_1;
    // 0x600045AC: addiu       $a0, $a0, 0x4520
    ctx->r4 = ADD32(ctx->r4, 0X4520);
    after_1:
    // 0x600045B0: jal         0x60002198
    // 0x600045B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_2;
    // 0x600045B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x600045B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600045BC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600045C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600045C4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x600045C8: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
L_600045CC:
    // 0x600045CC: lw          $s0, 0x1C($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X1C);
    // 0x600045D0: addiu       $t7, $s3, 0x1
    ctx->r15 = ADD32(ctx->r19, 0X1);
    // 0x600045D4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600045D8: nop

    // 0x600045DC: beq         $s2, $t6, L_6000473C
    if (ctx->r18 == ctx->r14) {
        // 0x600045E0: nop
    
            goto L_6000473C;
    }
    // 0x600045E0: nop

    // 0x600045E4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x600045E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x600045EC: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600045F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600045F4: mtc1        $s3, $f8
    ctx->f8.u32l = ctx->r19;
    // 0x600045F8: mul.s       $f26, $f24, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = MUL_S(ctx->f24.fl, ctx->f6.fl);
    // 0x600045FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004600: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60004604: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004608: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x6000460C: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x60004610: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004614: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x60004618: lwc1        $f8, 0x7970($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7970);
    // 0x6000461C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004620: lwc1        $f16, 0x7974($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7974);
    // 0x60004624: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004628: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000462C: sub.s       $f28, $f18, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x60004630: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004634: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x60004638: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000463C: lwc1        $f6, 0x7978($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7978);
    // 0x60004640: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x60004644: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x60004648: add.s       $f30, $f10, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f30.fl = ctx->f10.fl + ctx->f16.fl;
L_6000464C:
    // 0x6000464C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004650: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004654: jal         0x600006C4
    // 0x60004658: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_3;
    // 0x60004658: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x6000465C: jal         0x60000310
    // 0x60004660: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    ovl_demo_story_310(rdram, ctx);
        goto after_4;
    // 0x60004660: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_4:
    // 0x60004664: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60004668: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000466C: swc1        $f28, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f28.u32l;
    // 0x60004670: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x60004674: swc1        $f30, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f30.u32l;
    // 0x60004678: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000467C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60004680: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x60004684: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004688: jal         0x600006C4
    // 0x6000468C: nop

    ovl_demo_story_6C4(rdram, ctx);
        goto after_5;
    // 0x6000468C: nop

    after_5:
    // 0x60004690: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004694: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004698: jal         0x600006C4
    // 0x6000469C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_6;
    // 0x6000469C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x600046A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600046A4: lwc1        $f16, 0x797C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X797C);
    // 0x600046A8: c.le.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl <= ctx->f20.fl;
    // 0x600046AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x600046B0: bc1f        L_600046C4
    if (!c1cs) {
        // 0x600046B4: swc1        $f16, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
            goto L_600046C4;
    }
    // 0x600046B4: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x600046B8: sub.s       $f18, $f20, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x600046BC: b           L_600046EC
    // 0x600046C0: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
        goto L_600046EC;
    // 0x600046C0: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
L_600046C4:
    // 0x600046C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x600046C8: nop

    // 0x600046CC: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x600046D0: nop

    // 0x600046D4: bc1f        L_600046E4
    if (!c1cs) {
        // 0x600046D8: nop
    
            goto L_600046E4;
    }
    // 0x600046D8: nop

    // 0x600046DC: b           L_600046E8
    // 0x600046E0: add.s       $f0, $f20, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f22.fl;
        goto L_600046E8;
    // 0x600046E0: add.s       $f0, $f20, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f22.fl;
L_600046E4:
    // 0x600046E4: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_600046E8:
    // 0x600046E8: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
L_600046EC:
    // 0x600046EC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600046F0: jal         0x600006C4
    // 0x600046F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_7;
    // 0x600046F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x600046F8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600046FC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x60004700: jal         0x600006C4
    // 0x60004704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_8;
    // 0x60004704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60004708: jal         0x60000310
    // 0x6000470C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    ovl_demo_story_310(rdram, ctx);
        goto after_9;
    // 0x6000470C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_9:
    // 0x60004710: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x60004714: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x60004718: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x6000471C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004720: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x60004724: jal         0x600006C4
    // 0x60004728: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_10;
    // 0x60004728: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x6000472C: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x60004730: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x60004734: bne         $s2, $t8, L_6000464C
    if (ctx->r18 != ctx->r24) {
        // 0x60004738: nop
    
            goto L_6000464C;
    }
    // 0x60004738: nop

L_6000473C:
    // 0x6000473C: jal         0x6000085C
    // 0x60004740: addiu       $s0, $s3, 0x1
    ctx->r16 = ADD32(ctx->r19, 0X1);
    ovl_demo_story_85C(rdram, ctx);
        goto after_11;
    // 0x60004740: addiu       $s0, $s3, 0x1
    ctx->r16 = ADD32(ctx->r19, 0X1);
    after_11:
    // 0x60004744: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x60004748: bne         $at, $zero, L_600045CC
    if (ctx->r1 != 0) {
        // 0x6000474C: or          $s3, $s0, $zero
        ctx->r19 = ctx->r16 | 0;
            goto L_600045CC;
    }
    // 0x6000474C: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x60004750: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x60004754: addiu       $s0, $zero, 0xF0
    ctx->r16 = ADD32(0, 0XF0);
L_60004758:
    // 0x60004758: jal         0x6000085C
    // 0x6000475C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_12;
    // 0x6000475C: nop

    after_12:
    // 0x60004760: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x60004764: bne         $s3, $s0, L_60004758
    if (ctx->r19 != ctx->r16) {
        // 0x60004768: nop
    
            goto L_60004758;
    }
    // 0x60004768: nop

    // 0x6000476C: jal         0x60000838
    // 0x60004770: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_13;
    // 0x60004770: nop

    after_13:
    // 0x60004774: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x60004778: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000477C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004780: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004784: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004788: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x6000478C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60004790: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60004794: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60004798: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x6000479C: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600047A0: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600047A4: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600047A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x600047AC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x600047B0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600047B4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x600047B8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600047BC: jr          $ra
    // 0x600047C0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x600047C0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_demo_story_47C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600047C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600047C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600047CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600047D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600047D4: addiu       $a0, $a0, 0x454C
    ctx->r4 = ADD32(ctx->r4, 0X454C);
    // 0x600047D8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600047DC: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x600047E0: jal         0x60000820
    // 0x600047E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x600047E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x600047E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x600047EC: nop

    // 0x600047F0: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x600047F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600047F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600047FC: jr          $ra
    // 0x60004800: nop

    return;
    // 0x60004800: nop

;}
RECOMP_FUNC void ovl_demo_story_4804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004804: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x60004808: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x6000480C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60004810: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60004814: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60004818: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x6000481C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60004820: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60004824: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60004828: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x6000482C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60004830: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60004834: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60004838: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x6000483C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60004840: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60004844: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60004848: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000484C: jal         0x60000868
    // 0x60004850: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60004850: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004854: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x60004858: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x6000485C: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x60004860: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60004864: blez        $t6, L_60004ACC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x60004868: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_60004ACC;
    }
    // 0x60004868: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x6000486C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60004870: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60004874: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60004878: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000487C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60004880: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
L_60004884:
    // 0x60004884: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x60004888: addiu       $t8, $s4, 0x1
    ctx->r24 = ADD32(ctx->r20, 0X1);
    // 0x6000488C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60004890: nop

    // 0x60004894: beq         $s3, $t7, L_60004AB0
    if (ctx->r19 == ctx->r15) {
        // 0x60004898: nop
    
            goto L_60004AB0;
    }
    // 0x60004898: nop

    // 0x6000489C: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x600048A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600048A4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600048A8: lwc1        $f10, 0x7980($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7980);
    // 0x600048AC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x600048B0: mul.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x600048B4: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
L_600048B8:
    // 0x600048B8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600048BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600048C0: jal         0x600006C4
    // 0x600048C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_1;
    // 0x600048C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x600048C8: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x600048CC: nop

    // 0x600048D0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x600048D4: nop

    // 0x600048D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x600048DC: nop

    // 0x600048E0: div.s       $f4, $f26, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f26.fl, ctx->f18.fl);
    // 0x600048E4: mul.s       $f12, $f4, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x600048E8: jal         0x60000310
    // 0x600048EC: nop

    ovl_demo_story_310(rdram, ctx);
        goto after_2;
    // 0x600048EC: nop

    after_2:
    // 0x600048F0: sub.s       $f6, $f30, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f30.fl - ctx->f0.fl;
    // 0x600048F4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600048F8: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x600048FC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x60004900: jal         0x6000034C
    // 0x60004904: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    ovl_demo_story_34C(rdram, ctx);
        goto after_3;
    // 0x60004904: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x60004908: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x6000490C: jal         0x60000310
    // 0x60004910: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    ovl_demo_story_310(rdram, ctx);
        goto after_4;
    // 0x60004910: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_4:
    // 0x60004914: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x60004918: nop

    // 0x6000491C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x60004920: nop

    // 0x60004924: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60004928: nop

    // 0x6000492C: div.s       $f6, $f26, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f26.fl, ctx->f4.fl);
    // 0x60004930: mul.s       $f12, $f6, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x60004934: jal         0x6000031C
    // 0x60004938: nop

    ovl_demo_story_31C(rdram, ctx);
        goto after_5;
    // 0x60004938: nop

    after_5:
    // 0x6000493C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x60004940: jal         0x6000034C
    // 0x60004944: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    ovl_demo_story_34C(rdram, ctx);
        goto after_6;
    // 0x60004944: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_6:
    // 0x60004948: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x6000494C: jal         0x60000310
    // 0x60004950: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    ovl_demo_story_310(rdram, ctx);
        goto after_7;
    // 0x60004950: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_7:
    // 0x60004954: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60004958: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000495C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60004960: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x60004964: nop

    // 0x60004968: mul.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x6000496C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x60004970: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x60004974: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x60004978: nop

    // 0x6000497C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x60004980: nop

    // 0x60004984: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60004988: nop

    // 0x6000498C: div.s       $f18, $f26, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f26.fl, ctx->f10.fl);
    // 0x60004990: mul.s       $f12, $f18, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x60004994: jal         0x60000310
    // 0x60004998: nop

    ovl_demo_story_310(rdram, ctx);
        goto after_8;
    // 0x60004998: nop

    after_8:
    // 0x6000499C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x600049A0: jal         0x6000034C
    // 0x600049A4: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    ovl_demo_story_34C(rdram, ctx);
        goto after_9;
    // 0x600049A4: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_9:
    // 0x600049A8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x600049AC: jal         0x60000310
    // 0x600049B0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    ovl_demo_story_310(rdram, ctx);
        goto after_10;
    // 0x600049B0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_10:
    // 0x600049B4: sub.s       $f4, $f30, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f20.fl;
    // 0x600049B8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x600049BC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x600049C0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x600049C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600049C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600049CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600049D0: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x600049D4: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x600049D8: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x600049DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600049E0: jal         0x600006C4
    // 0x600049E4: nop

    ovl_demo_story_6C4(rdram, ctx);
        goto after_11;
    // 0x600049E4: nop

    after_11:
    // 0x600049E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x600049EC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x600049F0: jal         0x600006C4
    // 0x600049F4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_12;
    // 0x600049F4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_12:
    // 0x600049F8: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x600049FC: nop

    // 0x60004A00: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x60004A04: nop

    // 0x60004A08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60004A0C: nop

    // 0x60004A10: div.s       $f10, $f26, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f26.fl, ctx->f6.fl);
    // 0x60004A14: mul.s       $f12, $f10, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x60004A18: jal         0x6000031C
    // 0x60004A1C: nop

    ovl_demo_story_31C(rdram, ctx);
        goto after_13;
    // 0x60004A1C: nop

    after_13:
    // 0x60004A20: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x60004A24: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x60004A28: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x60004A2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004A30: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x60004A34: jal         0x600006C4
    // 0x60004A38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_14;
    // 0x60004A38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_14:
    // 0x60004A3C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004A40: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004A44: jal         0x600006C4
    // 0x60004A48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_15;
    // 0x60004A48: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_15:
    // 0x60004A4C: c.le.s      $f28, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f28.fl <= ctx->f22.fl;
    // 0x60004A50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60004A54: bc1f        L_60004A68
    if (!c1cs) {
        // 0x60004A58: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_60004A68;
    }
    // 0x60004A58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60004A5C: sub.s       $f18, $f22, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f22.fl - ctx->f28.fl;
    // 0x60004A60: b           L_60004A90
    // 0x60004A64: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
        goto L_60004A90;
    // 0x60004A64: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
L_60004A68:
    // 0x60004A68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60004A6C: nop

    // 0x60004A70: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x60004A74: nop

    // 0x60004A78: bc1f        L_60004A88
    if (!c1cs) {
        // 0x60004A7C: nop
    
            goto L_60004A88;
    }
    // 0x60004A7C: nop

    // 0x60004A80: b           L_60004A8C
    // 0x60004A84: add.s       $f20, $f22, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f28.fl;
        goto L_60004A8C;
    // 0x60004A84: add.s       $f20, $f22, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f28.fl;
L_60004A88:
    // 0x60004A88: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
L_60004A8C:
    // 0x60004A8C: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
L_60004A90:
    // 0x60004A90: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x60004A94: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x60004A98: jal         0x600006C4
    // 0x60004A9C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_16;
    // 0x60004A9C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_16:
    // 0x60004AA0: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x60004AA4: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x60004AA8: bne         $s3, $t3, L_600048B8
    if (ctx->r19 != ctx->r11) {
        // 0x60004AAC: nop
    
            goto L_600048B8;
    }
    // 0x60004AAC: nop

L_60004AB0:
    // 0x60004AB0: jal         0x6000085C
    // 0x60004AB4: addiu       $s0, $s4, 0x1
    ctx->r16 = ADD32(ctx->r20, 0X1);
    ovl_demo_story_85C(rdram, ctx);
        goto after_17;
    // 0x60004AB4: addiu       $s0, $s4, 0x1
    ctx->r16 = ADD32(ctx->r20, 0X1);
    after_17:
    // 0x60004AB8: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x60004ABC: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x60004AC0: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x60004AC4: bne         $at, $zero, L_60004884
    if (ctx->r1 != 0) {
        // 0x60004AC8: nop
    
            goto L_60004884;
    }
    // 0x60004AC8: nop

L_60004ACC:
    // 0x60004ACC: jal         0x60000838
    // 0x60004AD0: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_18;
    // 0x60004AD0: nop

    after_18:
    // 0x60004AD4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x60004AD8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004ADC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004AE0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004AE4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004AE8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60004AEC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60004AF0: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60004AF4: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60004AF8: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60004AFC: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004B00: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60004B04: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60004B08: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60004B0C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x60004B10: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60004B14: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x60004B18: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60004B1C: jr          $ra
    // 0x60004B20: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x60004B20: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_demo_story_4B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60004B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B30: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004B34: addiu       $a0, $a0, 0x4804
    ctx->r4 = ADD32(ctx->r4, 0X4804);
    // 0x60004B38: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004B40: jal         0x60000820
    // 0x60004B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60004B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004B48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60004B4C: nop

    // 0x60004B50: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60004B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B5C: jr          $ra
    // 0x60004B60: nop

    return;
    // 0x60004B60: nop

;}
RECOMP_FUNC void ovl_demo_story_4B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B6C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x60004B70: jal         0x60000DD8
    // 0x60004B74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_0;
    // 0x60004B74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60004B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004B7C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x60004B80: jal         0x60000DF0
    // 0x60004B84: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    ovl_demo_story_DF0(rdram, ctx);
        goto after_1;
    // 0x60004B84: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x60004B88: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x60004B8C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004B90: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x60004B94: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x60004B98: ori         $t7, $t6, 0x3
    ctx->r15 = ctx->r14 | 0X3;
    // 0x60004B9C: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x60004BA0: lwc1        $f4, 0x7984($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7984);
    // 0x60004BA4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x60004BA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004BAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004BB0: lwc1        $f8, 0x7988($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7988);
    // 0x60004BB4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x60004BB8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x60004BBC: jal         0x60000D60
    // 0x60004BC0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_2;
    // 0x60004BC0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x60004BC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004BC8: lwc1        $f10, 0x798C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X798C);
    // 0x60004BCC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004BD0: lwc1        $f16, 0x7990($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7990);
    // 0x60004BD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004BD8: lwc1        $f18, 0x7994($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7994);
    // 0x60004BDC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x60004BE0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x60004BE4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x60004BE8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x60004BEC: jal         0x60000D54
    // 0x60004BF0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_D54(rdram, ctx);
        goto after_3;
    // 0x60004BF0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x60004BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004BF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004BFC: jr          $ra
    // 0x60004C00: nop

    return;
    // 0x60004C00: nop

;}
RECOMP_FUNC void ovl_demo_story_4C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004C08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60004C10: jal         0x60000C1C
    // 0x60004C14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60004C14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60004C18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004C1C: jal         0x60000DD8
    // 0x60004C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60004C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004C24: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x60004C28: addiu       $at, $zero, 0xBF0
    ctx->r1 = ADD32(0, 0XBF0);
    // 0x60004C2C: bne         $t6, $at, L_60004C40
    if (ctx->r14 != ctx->r1) {
        // 0x60004C30: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_60004C40;
    }
    // 0x60004C30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60004C34: jal         0x60004B64
    // 0x60004C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_4B64(rdram, ctx);
        goto after_2;
    // 0x60004C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x60004C3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_60004C40:
    // 0x60004C40: jal         0x60000A60
    // 0x60004C44: nop

    ovl_demo_story_A60(rdram, ctx);
        goto after_3;
    // 0x60004C44: nop

    after_3:
    // 0x60004C48: jal         0x6000085C
    // 0x60004C4C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_4;
    // 0x60004C4C: nop

    after_4:
    // 0x60004C50: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60004C54: nop

    // 0x60004C58: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60004C5C: beq         $t8, $zero, L_60004C84
    if (ctx->r24 == 0) {
        // 0x60004C60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60004C84;
    }
    // 0x60004C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60004C64:
    // 0x60004C64: jal         0x6000085C
    // 0x60004C68: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x60004C68: nop

    after_5:
    // 0x60004C6C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60004C70: nop

    // 0x60004C74: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x60004C78: bne         $t0, $zero, L_60004C64
    if (ctx->r8 != 0) {
        // 0x60004C7C: nop
    
            goto L_60004C64;
    }
    // 0x60004C7C: nop

    // 0x60004C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60004C84:
    // 0x60004C84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004C88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004C8C: jr          $ra
    // 0x60004C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60004C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_4C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C94: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004C9C: jal         0x60000C1C
    // 0x60004CA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60004CA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004CA4: jal         0x60000DD8
    // 0x60004CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60004CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004CAC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004CB0: jal         0x60002198
    // 0x60004CB4: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_2198(rdram, ctx);
        goto after_2;
    // 0x60004CB4: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_2:
    // 0x60004CB8: jal         0x60000DD8
    // 0x60004CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_3;
    // 0x60004CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60004CC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004CC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004CC8: jal         0x60000DF0
    // 0x60004CCC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_demo_story_DF0(rdram, ctx);
        goto after_4;
    // 0x60004CCC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x60004CD0: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x60004CD4: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x60004CD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004CDC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x60004CE0: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x60004CE4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004CE8: lwc1        $f6, 0x7998($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7998);
    // 0x60004CEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004CF0: lwc1        $f8, 0x799C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X799C);
    // 0x60004CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60004CF8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x60004CFC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x60004D00: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x60004D04: jal         0x60000D60
    // 0x60004D08: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_5;
    // 0x60004D08: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x60004D0C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60004D10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004D14: lui         $at, 0x43E9
    ctx->r1 = S32(0X43E9 << 16);
    // 0x60004D18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60004D1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60004D24: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x60004D28: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x60004D2C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x60004D30: jal         0x60000D78
    // 0x60004D34: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_6;
    // 0x60004D34: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x60004D38: lui         $at, 0x4339
    ctx->r1 = S32(0X4339 << 16);
    // 0x60004D3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004D40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D44: lwc1        $f6, 0x79A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79A0);
    // 0x60004D48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D4C: lwc1        $f8, 0x79A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79A4);
    // 0x60004D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60004D54: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x60004D58: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x60004D5C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x60004D60: jal         0x60000D54
    // 0x60004D64: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D54(rdram, ctx);
        goto after_7;
    // 0x60004D64: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x60004D68: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004D6C: addiu       $a0, $a0, 0x2670
    ctx->r4 = ADD32(ctx->r4, 0X2670);
    // 0x60004D70: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004D74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004D78: jal         0x60000820
    // 0x60004D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_8;
    // 0x60004D7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x60004D80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D84: sw          $v0, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = ctx->r2;
    // 0x60004D88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004D94: jal         0x60000220
    // 0x60004D98: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_demo_story_220(rdram, ctx);
        goto after_9;
    // 0x60004D98: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_9:
    // 0x60004D9C: jal         0x60000850
    // 0x60004DA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_demo_story_850(rdram, ctx);
        goto after_10;
    // 0x60004DA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_10:
    // 0x60004DA4: jal         0x60000850
    // 0x60004DA8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_demo_story_850(rdram, ctx);
        goto after_11;
    // 0x60004DA8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_11:
    // 0x60004DAC: jal         0x60000850
    // 0x60004DB0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_850(rdram, ctx);
        goto after_12;
    // 0x60004DB0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_12:
    // 0x60004DB4: jal         0x6000025C
    // 0x60004DB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_demo_story_25C(rdram, ctx);
        goto after_13;
    // 0x60004DB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x60004DBC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004DC0: jal         0x600044B8
    // 0x60004DC4: addiu       $a0, $a0, 0x7700
    ctx->r4 = ADD32(ctx->r4, 0X7700);
    ovl_demo_story_44B8(rdram, ctx);
        goto after_14;
    // 0x60004DC4: addiu       $a0, $a0, 0x7700
    ctx->r4 = ADD32(ctx->r4, 0X7700);
    after_14:
    // 0x60004DC8: bne         $v0, $zero, L_60004DD8
    if (ctx->r2 != 0) {
        // 0x60004DCC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60004DD8;
    }
    // 0x60004DCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004DD0: jal         0x60000850
    // 0x60004DD4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_850(rdram, ctx);
        goto after_15;
    // 0x60004DD4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_15:
L_60004DD8:
    // 0x60004DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004DDC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x60004DE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004DE4: jr          $ra
    // 0x60004DE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004DE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
