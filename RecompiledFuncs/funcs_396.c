#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world8_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world8_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60000F54: beq         $a0, $zero, L_60000F78
    if (ctx->r4 == 0) {
        // 0x60000F58: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60000F78;
    }
    // 0x60000F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60000F5C: jal         0x60000C1C
    // 0x60000F60: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60000F60: nop

    after_0:
    // 0x60000F64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60000F68: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60000F6C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60000F70: b           L_60000F94
    // 0x60000F74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_60000F94;
    // 0x60000F74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_60000F78:
    // 0x60000F78: jal         0x60000C1C
    // 0x60000F7C: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_1;
    // 0x60000F7C: nop

    after_1:
    // 0x60000F80: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60000F84: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60000F88: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60000F8C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60000F90: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_60000F94:
    // 0x60000F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60000F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60000F9C: jr          $ra
    // 0x60000FA0: nop

    return;
    // 0x60000FA0: nop

    // 0x60000FA4: jr          $ra
    // 0x60000FA8: nop

    return;
    // 0x60000FA8: nop

;}
RECOMP_FUNC void ovl_stage_world8_FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000FAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60000FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60000FB4: jal         0x60000C1C
    // 0x60000FB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60000FB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60000FBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60000FC0: jal         0x600007E4
    // 0x60000FC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world8_7E4(rdram, ctx);
        goto after_1;
    // 0x60000FC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60000FC8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x60000FCC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60000FD0: beq         $t6, $zero, L_60001030
    if (ctx->r14 == 0) {
        // 0x60000FD4: lui         $at, 0x6001
        ctx->r1 = S32(0X6001 << 16);
            goto L_60001030;
    }
    // 0x60000FD4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60000FD8: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60000FDC: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60000FE0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x60000FE4: sw          $t8, -0x67F0($at)
    MEM_W(-0X67F0, ctx->r1) = ctx->r24;
    // 0x60000FE8: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x60000FEC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60000FF0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60000FF4: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x60000FF8: lw          $t1, -0x67F0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X67F0);
    // 0x60000FFC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x60001000: beq         $t1, $zero, L_6000101C
    if (ctx->r9 == 0) {
        // 0x60001004: nop
    
            goto L_6000101C;
    }
    // 0x60001004: nop

    // 0x60001008: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x6000100C: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x60001010: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x60001014: b           L_60001054
    // 0x60001018: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_60001054;
    // 0x60001018: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_6000101C:
    // 0x6000101C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60001020: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001024: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001028: b           L_60001054
    // 0x6000102C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_60001054;
    // 0x6000102C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_60001030:
    // 0x60001030: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60001034: lw          $t6, -0x67F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X67F0);
    // 0x60001038: nop

    // 0x6000103C: beq         $t6, $zero, L_60001058
    if (ctx->r14 == 0) {
        // 0x60001040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001058;
    }
    // 0x60001040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001044: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60001048: nop

    // 0x6000104C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x60001050: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_60001054:
    // 0x60001054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001058:
    // 0x60001058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x6000105C: jr          $ra
    // 0x60001060: nop

    return;
    // 0x60001060: nop

;}
RECOMP_FUNC void ovl_stage_world8_1064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000106C: jal         0x60000C1C
    // 0x60001070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60001070: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001074: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001078: jal         0x600009C4
    // 0x6000107C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x6000107C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60001080: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60001084: nop

    // 0x60001088: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x6000108C: beq         $t7, $zero, L_600010B4
    if (ctx->r15 == 0) {
        // 0x60001090: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_600010B4;
    }
    // 0x60001090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001094:
    // 0x60001094: jal         0x600009D0
    // 0x60001098: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_2;
    // 0x60001098: nop

    after_2:
    // 0x6000109C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600010A0: nop

    // 0x600010A4: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600010A8: bne         $t9, $zero, L_60001094
    if (ctx->r25 != 0) {
        // 0x600010AC: nop
    
            goto L_60001094;
    }
    // 0x600010AC: nop

    // 0x600010B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600010B4:
    // 0x600010B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600010B8: jr          $ra
    // 0x600010BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600010BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world8_10C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600010C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600010C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600010CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x600010D0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600010D4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x600010D8: jal         0x60000E74
    // 0x600010DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_0;
    // 0x600010DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x600010E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600010E4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x600010E8: jal         0x600006C4
    // 0x600010EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x600010EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600010F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600010F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600010F8: jr          $ra
    // 0x600010FC: nop

    return;
    // 0x600010FC: nop

;}
RECOMP_FUNC void ovl_stage_world8_1100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001108: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000110C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001110: addiu       $a2, $a2, -0x67E8
    ctx->r6 = ADD32(ctx->r6, -0X67E8);
    // 0x60001114: jal         0x60000808
    // 0x60001118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_808(rdram, ctx);
        goto after_0;
    // 0x60001118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x6000111C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60001120: lw          $t6, -0x67E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X67E8);
    // 0x60001124: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001128: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x6000112C: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60001130: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x60001134: sw          $t7, -0x67E8($at)
    MEM_W(-0X67E8, ctx->r1) = ctx->r15;
    // 0x60001138: addiu       $a2, $a2, -0x67E8
    ctx->r6 = ADD32(ctx->r6, -0X67E8);
    // 0x6000113C: jal         0x60000808
    // 0x60001140: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_808(rdram, ctx);
        goto after_1;
    // 0x60001140: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60001144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000114C: jr          $ra
    // 0x60001150: nop

    return;
    // 0x60001150: nop

;}
RECOMP_FUNC void ovl_stage_world8_1154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000115C: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60001160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001164: addiu       $a2, $a2, -0x67E0
    ctx->r6 = ADD32(ctx->r6, -0X67E0);
    // 0x60001168: jal         0x60000808
    // 0x6000116C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_808(rdram, ctx);
        goto after_0;
    // 0x6000116C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60001170: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60001174: lw          $t6, -0x67E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X67E0);
    // 0x60001178: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x6000117C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60001180: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001184: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60001188: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000118C: sw          $t7, -0x67E0($at)
    MEM_W(-0X67E0, ctx->r1) = ctx->r15;
    // 0x60001190: addiu       $a2, $a2, -0x67E0
    ctx->r6 = ADD32(ctx->r6, -0X67E0);
    // 0x60001194: jal         0x60000808
    // 0x60001198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_808(rdram, ctx);
        goto after_1;
    // 0x60001198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x6000119C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600011A4: jr          $ra
    // 0x600011A8: nop

    return;
    // 0x600011A8: nop

;}
RECOMP_FUNC void ovl_stage_world8_11AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600011B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011B4: beq         $a1, $zero, L_600011E8
    if (ctx->r5 == 0) {
        // 0x600011B8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_600011E8;
    }
    // 0x600011B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x600011BC: jal         0x60001100
    // 0x600011C0: nop

    ovl_stage_world8_1100(rdram, ctx);
        goto after_0;
    // 0x600011C0: nop

    after_0:
    // 0x600011C4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x600011C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600011CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600011D0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x600011D4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x600011D8: jal         0x600007F0
    // 0x600011DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_1;
    // 0x600011DC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x600011E0: b           L_60001210
    // 0x600011E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001210;
    // 0x600011E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600011E8:
    // 0x600011E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600011EC: jal         0x60001154
    // 0x600011F0: nop

    ovl_stage_world8_1154(rdram, ctx);
        goto after_2;
    // 0x600011F0: nop

    after_2:
    // 0x600011F4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x600011F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600011FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x60001200: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x60001204: jal         0x600007F0
    // 0x60001208: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_3;
    // 0x60001208: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x6000120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001210:
    // 0x60001210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001214: jr          $ra
    // 0x60001218: nop

    return;
    // 0x60001218: nop

;}
RECOMP_FUNC void ovl_stage_world8_121C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000121C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x60001220: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60001224: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60001228: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x6000122C: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x60001230: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60001234: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x60001238: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x6000123C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x60001240: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x60001244: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x60001248: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x6000124C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001250: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001254: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001258: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x6000125C: jal         0x60000DE4
    // 0x60001260: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60001260: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001264: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x60001268: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000126C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60001270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001274: jal         0x600006C4
    // 0x60001278: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60001278: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x6000127C: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x60001280: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x60001284: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x60001288: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000128C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001290: jal         0x600006C4
    // 0x60001294: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60001294: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    after_2:
    // 0x60001298: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x6000129C: jal         0x600007E4
    // 0x600012A0: nop

    ovl_stage_world8_7E4(rdram, ctx);
        goto after_3;
    // 0x600012A0: nop

    after_3:
    // 0x600012A4: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600012A8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x600012AC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x600012B0: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x600012B4: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x600012B8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x600012BC: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600012C0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600012C4: lwc1        $f4, -0x6A94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6A94);
    // 0x600012C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600012CC: div.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x600012D0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x600012D4: nop

    // 0x600012D8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x600012DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x600012E8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600012EC: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x600012F0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x600012F4: blez        $s3, L_60001360
    if (SIGNED(ctx->r19) <= 0) {
        // 0x600012F8: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_60001360;
    }
    // 0x600012F8: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x600012FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001300: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x60001304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60001308:
    // 0x60001308: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000130C: jal         0x600006C4
    // 0x60001310: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60001310: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60001314: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60001318: jal         0x60000418
    // 0x6000131C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world8_418(rdram, ctx);
        goto after_5;
    // 0x6000131C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x60001320: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x60001324: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x60001328: bc1t        L_6000135C
    if (c1cs) {
        // 0x6000132C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_6000135C;
    }
    // 0x6000132C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60001330: swc1        $f22, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f22.u32l;
    // 0x60001334: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x60001338: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000133C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60001340: jal         0x600006C4
    // 0x60001344: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_6;
    // 0x60001344: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_6:
    // 0x60001348: jal         0x600009D0
    // 0x6000134C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_7;
    // 0x6000134C: nop

    after_7:
    // 0x60001350: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001354: bne         $s0, $s3, L_60001308
    if (ctx->r16 != ctx->r19) {
        // 0x60001358: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60001308;
    }
    // 0x60001358: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_6000135C:
    // 0x6000135C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60001360:
    // 0x60001360: jal         0x600007E4
    // 0x60001364: nop

    ovl_stage_world8_7E4(rdram, ctx);
        goto after_8;
    // 0x60001364: nop

    after_8:
    // 0x60001368: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x6000136C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x60001370: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001374: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001378: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x6000137C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001380: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x60001384: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x60001388: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x6000138C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60001390: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x60001394: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x60001398: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x6000139C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x600013A0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x600013A4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x600013A8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600013AC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600013B0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600013B4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600013B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600013BC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600013C0: jr          $ra
    // 0x600013C4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x600013C4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_stage_world8_13C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600013C8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600013CC: lwc1        $f7, -0x6A90($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6A90);
    // 0x600013D0: lwc1        $f6, -0x6A8C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6A8C);
    // 0x600013D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600013D8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x600013DC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x600013E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600013E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x600013E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600013EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600013F0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x600013F4: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x600013F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x600013FC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x60001400: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x60001404: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x60001408: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x6000140C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x60001410: jal         0x600003D0
    // 0x60001414: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world8_3D0(rdram, ctx);
        goto after_0;
    // 0x60001414: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x60001418: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000141C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001420: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x60001424: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x60001428: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x6000142C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x60001430: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001434: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001438: nop

    // 0x6000143C: bc1f        L_60001480
    if (!c1cs) {
        // 0x60001440: nop
    
            goto L_60001480;
    }
    // 0x60001440: nop

    // 0x60001444: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001448: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x6000144C: nop

    // 0x60001450: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001454: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60001458: nop

    // 0x6000145C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001460: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001464: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001468: nop

    // 0x6000146C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60001470: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60001474: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001478: b           L_600014B8
    // 0x6000147C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_600014B8;
    // 0x6000147C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_60001480:
    // 0x60001480: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001484: nop

    // 0x60001488: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000148C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60001490: nop

    // 0x60001494: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60001498: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000149C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600014A0: nop

    // 0x600014A4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x600014A8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x600014AC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x600014B0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x600014B4: nop

L_600014B8:
    // 0x600014B8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600014BC: nop

    // 0x600014C0: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x600014C4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x600014C8: nop

    // 0x600014CC: bc1f        L_60001504
    if (!c1cs) {
        // 0x600014D0: nop
    
            goto L_60001504;
    }
    // 0x600014D0: nop

    // 0x600014D4: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600014D8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x600014DC: nop

    // 0x600014E0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x600014E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600014E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600014EC: nop

    // 0x600014F0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600014F4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x600014F8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x600014FC: b           L_60001534
    // 0x60001500: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001534;
    // 0x60001500: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_60001504:
    // 0x60001504: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001508: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x6000150C: nop

    // 0x60001510: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001514: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001518: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000151C: nop

    // 0x60001520: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001524: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x60001528: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x6000152C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x60001530: nop

L_60001534:
    // 0x60001534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000153C: jr          $ra
    // 0x60001540: nop

    return;
    // 0x60001540: nop

;}
RECOMP_FUNC void ovl_stage_world8_1544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001544: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001548: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000154C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60001550: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x60001554: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x60001558: addiu       $s1, $s1, -0x6790
    ctx->r17 = ADD32(ctx->r17, -0X6790);
    // 0x6000155C: addiu       $s0, $s0, -0x67B0
    ctx->r16 = ADD32(ctx->r16, -0X67B0);
    // 0x60001560: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60001564: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60001568: addiu       $v1, $v1, -0x6768
    ctx->r3 = ADD32(ctx->r3, -0X6768);
    // 0x6000156C: addiu       $v0, $v0, -0x6778
    ctx->r2 = ADD32(ctx->r2, -0X6778);
    // 0x60001570: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001574: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x60001578: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x6000157C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001580: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60001584: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001588: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x6000158C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x60001590: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x60001594: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x60001598: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x6000159C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x600015A0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x600015A4: lw          $t6, -0x6754($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6754);
    // 0x600015A8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600015AC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600015B0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x600015B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x600015B8: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x600015BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600015C0: lw          $a0, -0x6B50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6B50);
    // 0x600015C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600015C8: jal         0x600006C4
    // 0x600015CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_0;
    // 0x600015CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x600015D0: jal         0x60000DE4
    // 0x600015D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x600015D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x600015D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600015DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600015E0: jal         0x600006C4
    // 0x600015E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x600015E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x600015E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600015EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600015F0: jal         0x600003DC
    // 0x600015F4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world8_3DC(rdram, ctx);
        goto after_3;
    // 0x600015F4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x600015F8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600015FC: lwc1        $f13, -0x6A88($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A88);
    // 0x60001600: lwc1        $f12, -0x6A84($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A84);
    // 0x60001604: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001608: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000160C: lwc1        $f9, -0x6A80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A80);
    // 0x60001610: lwc1        $f8, -0x6A7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A7C);
    // 0x60001614: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001618: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x6000161C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001620: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001624: nop

    // 0x60001628: bc1f        L_60001644
    if (!c1cs) {
        // 0x6000162C: nop
    
            goto L_60001644;
    }
    // 0x6000162C: nop

    // 0x60001630: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x60001634: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001638: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x6000163C: b           L_60001678
    // 0x60001640: swc1        $f16, -0x67C8($at)
    MEM_W(-0X67C8, ctx->r1) = ctx->f16.u32l;
        goto L_60001678;
    // 0x60001640: swc1        $f16, -0x67C8($at)
    MEM_W(-0X67C8, ctx->r1) = ctx->f16.u32l;
L_60001644:
    // 0x60001644: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60001648: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x6000164C: nop

    // 0x60001650: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x60001654: nop

    // 0x60001658: bc1f        L_60001668
    if (!c1cs) {
        // 0x6000165C: nop
    
            goto L_60001668;
    }
    // 0x6000165C: nop

    // 0x60001660: b           L_6000166C
    // 0x60001664: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_6000166C;
    // 0x60001664: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001668:
    // 0x60001668: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_6000166C:
    // 0x6000166C: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60001670: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001674: swc1        $f4, -0x67C8($at)
    MEM_W(-0X67C8, ctx->r1) = ctx->f4.u32l;
L_60001678:
    // 0x60001678: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x6000167C: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001680: nop

    // 0x60001684: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001688: nop

    // 0x6000168C: bc1f        L_600016A8
    if (!c1cs) {
        // 0x60001690: nop
    
            goto L_600016A8;
    }
    // 0x60001690: nop

    // 0x60001694: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001698: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000169C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x600016A0: b           L_600016B4
    // 0x600016A4: swc1        $f8, -0x67C4($at)
    MEM_W(-0X67C4, ctx->r1) = ctx->f8.u32l;
        goto L_600016B4;
    // 0x600016A4: swc1        $f8, -0x67C4($at)
    MEM_W(-0X67C4, ctx->r1) = ctx->f8.u32l;
L_600016A8:
    // 0x600016A8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600016AC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600016B0: swc1        $f10, -0x67C4($at)
    MEM_W(-0X67C4, ctx->r1) = ctx->f10.u32l;
L_600016B4:
    // 0x600016B4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600016B8: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x600016BC: nop

    // 0x600016C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600016C4: nop

    // 0x600016C8: bc1f        L_600016E4
    if (!c1cs) {
        // 0x600016CC: nop
    
            goto L_600016E4;
    }
    // 0x600016CC: nop

    // 0x600016D0: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600016D4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600016D8: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x600016DC: b           L_600016F0
    // 0x600016E0: swc1        $f18, -0x67C0($at)
    MEM_W(-0X67C0, ctx->r1) = ctx->f18.u32l;
        goto L_600016F0;
    // 0x600016E0: swc1        $f18, -0x67C0($at)
    MEM_W(-0X67C0, ctx->r1) = ctx->f18.u32l;
L_600016E4:
    // 0x600016E4: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600016E8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600016EC: swc1        $f4, -0x67C0($at)
    MEM_W(-0X67C0, ctx->r1) = ctx->f4.u32l;
L_600016F0:
    // 0x600016F0: jal         0x60000418
    // 0x600016F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world8_418(rdram, ctx);
        goto after_4;
    // 0x600016F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x600016F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600016FC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001700: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001704: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001708: swc1        $f0, -0x67CC($at)
    MEM_W(-0X67CC, ctx->r1) = ctx->f0.u32l;
    // 0x6000170C: jr          $ra
    // 0x60001710: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001710: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world8_1714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001714: jr          $ra
    // 0x60001718: nop

    return;
    // 0x60001718: nop

    // 0x6000171C: jr          $ra
    // 0x60001720: nop

    return;
    // 0x60001720: nop

;}
RECOMP_FUNC void ovl_stage_world8_1724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001724: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60001728: addiu       $v0, $v0, -0x6748
    ctx->r2 = ADD32(ctx->r2, -0X6748);
    // 0x6000172C: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x60001730: jr          $ra
    // 0x60001734: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x60001734: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world8_1738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000173C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001744: jal         0x60001724
    // 0x60001748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_1724(rdram, ctx);
        goto after_0;
    // 0x60001748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x6000174C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001754: jr          $ra
    // 0x60001758: nop

    return;
    // 0x60001758: nop

;}
RECOMP_FUNC void ovl_stage_world8_175C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000175C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001764: jal         0x60001738
    // 0x60001768: nop

    ovl_stage_world8_1738(rdram, ctx);
        goto after_0;
    // 0x60001768: nop

    after_0:
    // 0x6000176C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001774: jr          $ra
    // 0x60001778: nop

    return;
    // 0x60001778: nop

;}
RECOMP_FUNC void ovl_stage_world8_177C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000177C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001780: lwc1        $f12, -0x67BC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X67BC);
    // 0x60001784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001788: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x6000178C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001790: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001794: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x60001798: jal         0x600013C8
    // 0x6000179C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world8_13C8(rdram, ctx);
        goto after_0;
    // 0x6000179C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x600017A0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x600017A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600017A8: jal         0x60001724
    // 0x600017AC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world8_1724(rdram, ctx);
        goto after_1;
    // 0x600017AC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x600017B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600017B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600017B8: jr          $ra
    // 0x600017BC: nop

    return;
    // 0x600017BC: nop

;}
RECOMP_FUNC void ovl_stage_world8_17C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600017C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600017C8: jal         0x6000034C
    // 0x600017CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_0;
    // 0x600017CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x600017D0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x600017D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600017D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600017DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600017E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600017E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600017E8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600017EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600017F0: jr          $ra
    // 0x600017F4: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x600017F4: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world8_17F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017F8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600017FC: lwc1        $f4, -0x67C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X67C0);
    // 0x60001800: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001804: lwc1        $f6, -0x67C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X67C4);
    // 0x60001808: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000180C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001810: nop

    // 0x60001814: bc1f        L_60001864
    if (!c1cs) {
        // 0x60001818: nop
    
            goto L_60001864;
    }
    // 0x60001818: nop

    // 0x6000181C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001820: lwc1        $f8, -0x67B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X67B0);
    // 0x60001824: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001828: lwc1        $f10, -0x6790($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6790);
    // 0x6000182C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001830: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x60001834: nop

    // 0x60001838: bc1f        L_60001854
    if (!c1cs) {
        // 0x6000183C: nop
    
            goto L_60001854;
    }
    // 0x6000183C: nop

    // 0x60001840: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001844: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001848: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000184C: jr          $ra
    // 0x60001850: swc1        $f16, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x60001850: swc1        $f16, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f16.u32l;
L_60001854:
    // 0x60001854: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001858: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000185C: jr          $ra
    // 0x60001860: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x60001860: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
L_60001864:
    // 0x60001864: lwc1        $f4, -0x67A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X67A8);
    // 0x60001868: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000186C: lwc1        $f6, -0x6788($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6788);
    // 0x60001870: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001874: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001878: nop

    // 0x6000187C: bc1f        L_60001894
    if (!c1cs) {
        // 0x60001880: nop
    
            goto L_60001894;
    }
    // 0x60001880: nop

    // 0x60001884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001888: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000188C: jr          $ra
    // 0x60001890: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001890: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
L_60001894:
    // 0x60001894: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001898: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000189C: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
    // 0x600018A0: jr          $ra
    // 0x600018A4: nop

    return;
    // 0x600018A4: nop

;}
RECOMP_FUNC void ovl_stage_world8_18A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018A8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x600018AC: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x600018B0: addiu       $v1, $v1, -0x6790
    ctx->r3 = ADD32(ctx->r3, -0X6790);
    // 0x600018B4: addiu       $v0, $v0, -0x67B0
    ctx->r2 = ADD32(ctx->r2, -0X67B0);
    // 0x600018B8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600018BC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600018C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018C4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x600018C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018CC: bc1f        L_600018E0
    if (!c1cs) {
        // 0x600018D0: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_600018E0;
    }
    // 0x600018D0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600018D4: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x600018D8: b           L_600018E4
    // 0x600018DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_600018E4;
    // 0x600018DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_600018E0:
    // 0x600018E0: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_600018E4:
    // 0x600018E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600018E8: nop

    // 0x600018EC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x600018F0: nop

    // 0x600018F4: bc1f        L_60001938
    if (!c1cs) {
        // 0x600018F8: nop
    
            goto L_60001938;
    }
    // 0x600018F8: nop

    // 0x600018FC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001900: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001904: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001908: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x6000190C: nop

    // 0x60001910: bc1f        L_6000192C
    if (!c1cs) {
        // 0x60001914: nop
    
            goto L_6000192C;
    }
    // 0x60001914: nop

    // 0x60001918: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000191C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001920: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001924: b           L_600019B0
    // 0x60001928: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
        goto L_600019B0;
    // 0x60001928: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
L_6000192C:
    // 0x6000192C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001930: b           L_600019B0
    // 0x60001934: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
        goto L_600019B0;
    // 0x60001934: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
L_60001938:
    // 0x60001938: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x6000193C: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001940: nop

    // 0x60001944: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x60001948: nop

    // 0x6000194C: bc1f        L_60001960
    if (!c1cs) {
        // 0x60001950: nop
    
            goto L_60001960;
    }
    // 0x60001950: nop

    // 0x60001954: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x60001958: b           L_60001964
    // 0x6000195C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001964;
    // 0x6000195C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001960:
    // 0x60001960: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_60001964:
    // 0x60001964: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001968: nop

    // 0x6000196C: bc1f        L_600019A8
    if (!c1cs) {
        // 0x60001970: nop
    
            goto L_600019A8;
    }
    // 0x60001970: nop

    // 0x60001974: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001978: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x6000197C: bc1f        L_60001998
    if (!c1cs) {
        // 0x60001980: nop
    
            goto L_60001998;
    }
    // 0x60001980: nop

    // 0x60001984: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001988: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000198C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001990: b           L_600019B0
    // 0x60001994: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
        goto L_600019B0;
    // 0x60001994: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
L_60001998:
    // 0x60001998: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000199C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600019A0: b           L_600019B0
    // 0x600019A4: swc1        $f6, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f6.u32l;
        goto L_600019B0;
    // 0x600019A4: swc1        $f6, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f6.u32l;
L_600019A8:
    // 0x600019A8: jal         0x600017F8
    // 0x600019AC: nop

    ovl_stage_world8_17F8(rdram, ctx);
        goto after_0;
    // 0x600019AC: nop

    after_0:
L_600019B0:
    // 0x600019B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600019B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600019B8: jr          $ra
    // 0x600019BC: nop

    return;
    // 0x600019BC: nop

;}
RECOMP_FUNC void ovl_stage_world8_19C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019C0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600019C4: lwc1        $f4, -0x67C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X67C8);
    // 0x600019C8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x600019CC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x600019D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600019D4: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x600019D8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600019DC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x600019E0: lwc1        $f8, -0x67CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x600019E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600019E8: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x600019EC: nop

    // 0x600019F0: bc1f        L_60001A54
    if (!c1cs) {
        // 0x600019F4: nop
    
            goto L_60001A54;
    }
    // 0x600019F4: nop

    // 0x600019F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600019FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001A00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001A04: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001A08: nop

    // 0x60001A0C: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60001A10: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x60001A14: nop

    // 0x60001A18: bc1f        L_60001A2C
    if (!c1cs) {
        // 0x60001A1C: nop
    
            goto L_60001A2C;
    }
    // 0x60001A1C: nop

    // 0x60001A20: sub.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x60001A24: jr          $ra
    // 0x60001A28: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    return;
    // 0x60001A28: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_60001A2C:
    // 0x60001A2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60001A30: nop

    // 0x60001A34: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60001A38: nop

    // 0x60001A3C: bc1f        L_60001A4C
    if (!c1cs) {
        // 0x60001A40: nop
    
            goto L_60001A4C;
    }
    // 0x60001A40: nop

    // 0x60001A44: b           L_60001A50
    // 0x60001A48: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_60001A50;
    // 0x60001A48: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_60001A4C:
    // 0x60001A4C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001A50:
    // 0x60001A50: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_60001A54:
    // 0x60001A54: jr          $ra
    // 0x60001A58: nop

    return;
    // 0x60001A58: nop

;}
RECOMP_FUNC void ovl_stage_world8_1A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A5C: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60001A60: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60001A64: addiu       $v1, $v1, -0x6778
    ctx->r3 = ADD32(ctx->r3, -0X6778);
    // 0x60001A68: addiu       $v0, $v0, -0x67B0
    ctx->r2 = ADD32(ctx->r2, -0X67B0);
    // 0x60001A6C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001A70: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001A74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001A78: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001A7C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001A80: bc1f        L_60001A94
    if (!c1cs) {
        // 0x60001A84: nop
    
            goto L_60001A94;
    }
    // 0x60001A84: nop

    // 0x60001A88: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001A8C: b           L_60001A98
    // 0x60001A90: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001A98;
    // 0x60001A90: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001A94:
    // 0x60001A94: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001A98:
    // 0x60001A98: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001A9C: nop

    // 0x60001AA0: bc1f        L_60001B28
    if (!c1cs) {
        // 0x60001AA4: nop
    
            goto L_60001B28;
    }
    // 0x60001AA4: nop

    // 0x60001AA8: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x60001AAC: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x60001AB0: nop

    // 0x60001AB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001AB8: nop

    // 0x60001ABC: bc1f        L_60001AD0
    if (!c1cs) {
        // 0x60001AC0: nop
    
            goto L_60001AD0;
    }
    // 0x60001AC0: nop

    // 0x60001AC4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001AC8: b           L_60001AD4
    // 0x60001ACC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001AD4;
    // 0x60001ACC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001AD0:
    // 0x60001AD0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001AD4:
    // 0x60001AD4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001AD8: nop

    // 0x60001ADC: bc1f        L_60001B28
    if (!c1cs) {
        // 0x60001AE0: nop
    
            goto L_60001B28;
    }
    // 0x60001AE0: nop

    // 0x60001AE4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001AE8: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001AEC: nop

    // 0x60001AF0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001AF4: nop

    // 0x60001AF8: bc1f        L_60001B0C
    if (!c1cs) {
        // 0x60001AFC: nop
    
            goto L_60001B0C;
    }
    // 0x60001AFC: nop

    // 0x60001B00: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001B04: b           L_60001B10
    // 0x60001B08: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001B10;
    // 0x60001B08: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001B0C:
    // 0x60001B0C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001B10:
    // 0x60001B10: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001B14: nop

    // 0x60001B18: bc1f        L_60001B2C
    if (!c1cs) {
        // 0x60001B1C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001B2C;
    }
    // 0x60001B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001B20: jr          $ra
    // 0x60001B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001B28:
    // 0x60001B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001B2C:
    // 0x60001B2C: jr          $ra
    // 0x60001B30: nop

    return;
    // 0x60001B30: nop

;}
RECOMP_FUNC void ovl_stage_world8_1B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001B3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001B40: jal         0x6000034C
    // 0x60001B44: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_0;
    // 0x60001B44: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x60001B48: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60001B4C: addiu       $v1, $v1, -0x67D8
    ctx->r3 = ADD32(ctx->r3, -0X67D8);
    // 0x60001B50: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001B54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001B58: beq         $a1, $t6, L_60001B68
    if (ctx->r5 == ctx->r14) {
        // 0x60001B5C: slti        $at, $v0, 0x51
        ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
            goto L_60001B68;
    }
    // 0x60001B5C: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x60001B60: beq         $at, $zero, L_60001C50
    if (ctx->r1 == 0) {
        // 0x60001B64: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_60001C50;
    }
    // 0x60001B64: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_60001B68:
    // 0x60001B68: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001B6C: jal         0x6000034C
    // 0x60001B70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_1;
    // 0x60001B70: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60001B74: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001B78: sw          $v0, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r2;
    // 0x60001B7C: jal         0x6000034C
    // 0x60001B80: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_2;
    // 0x60001B80: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x60001B84: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x60001B88: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x60001B8C: beq         $t7, $zero, L_60001B9C
    if (ctx->r15 == 0) {
        // 0x60001B90: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_60001B9C;
    }
    // 0x60001B90: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x60001B94: b           L_60001B9C
    // 0x60001B98: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_60001B9C;
    // 0x60001B98: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
L_60001B9C:
    // 0x60001B9C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60001BA0: bne         $at, $zero, L_60001BC4
    if (ctx->r1 != 0) {
        // 0x60001BA4: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_60001BC4;
    }
    // 0x60001BA4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x60001BA8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001BAC: jal         0x6000034C
    // 0x60001BB0: sw          $t8, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r24;
    ovl_stage_world8_34C(rdram, ctx);
        goto after_3;
    // 0x60001BB0: sw          $t8, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r24;
    after_3:
    // 0x60001BB4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x60001BB8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001BBC: b           L_60001BD8
    // 0x60001BC0: sw          $t9, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r25;
        goto L_60001BD8;
    // 0x60001BC0: sw          $t9, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r25;
L_60001BC4:
    // 0x60001BC4: jal         0x6000034C
    // 0x60001BC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_4;
    // 0x60001BC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60001BCC: addiu       $t0, $v0, 0x1E
    ctx->r8 = ADD32(ctx->r2, 0X1E);
    // 0x60001BD0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001BD4: sw          $t0, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r8;
L_60001BD8:
    // 0x60001BD8: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60001BDC: lw          $v1, -0x67D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X67D0);
    // 0x60001BE0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001BE4: beq         $v1, $zero, L_60001C10
    if (ctx->r3 == 0) {
        // 0x60001BE8: sw          $zero, -0x67B4($at)
        MEM_W(-0X67B4, ctx->r1) = 0;
            goto L_60001C10;
    }
    // 0x60001BE8: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
    // 0x60001BEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001BF0: beq         $v1, $at, L_60001C20
    if (ctx->r3 == ctx->r1) {
        // 0x60001BF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001C20;
    }
    // 0x60001BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001BF8: beq         $v1, $at, L_60001C30
    if (ctx->r3 == ctx->r1) {
        // 0x60001BFC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60001C30;
    }
    // 0x60001BFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001C00: beq         $v1, $at, L_60001C40
    if (ctx->r3 == ctx->r1) {
        // 0x60001C04: nop
    
            goto L_60001C40;
    }
    // 0x60001C04: nop

    // 0x60001C08: b           L_60001C68
    // 0x60001C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C68;
    // 0x60001C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C10:
    // 0x60001C10: jal         0x600017C0
    // 0x60001C14: nop

    ovl_stage_world8_17C0(rdram, ctx);
        goto after_5;
    // 0x60001C14: nop

    after_5:
    // 0x60001C18: b           L_60001C68
    // 0x60001C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C68;
    // 0x60001C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C20:
    // 0x60001C20: jal         0x600017F8
    // 0x60001C24: nop

    ovl_stage_world8_17F8(rdram, ctx);
        goto after_6;
    // 0x60001C24: nop

    after_6:
    // 0x60001C28: b           L_60001C68
    // 0x60001C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C68;
    // 0x60001C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C30:
    // 0x60001C30: jal         0x600018A8
    // 0x60001C34: nop

    ovl_stage_world8_18A8(rdram, ctx);
        goto after_7;
    // 0x60001C34: nop

    after_7:
    // 0x60001C38: b           L_60001C68
    // 0x60001C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C68;
    // 0x60001C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C40:
    // 0x60001C40: jal         0x600019C0
    // 0x60001C44: nop

    ovl_stage_world8_19C0(rdram, ctx);
        goto after_8;
    // 0x60001C44: nop

    after_8:
    // 0x60001C48: b           L_60001C68
    // 0x60001C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C68;
    // 0x60001C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C50:
    // 0x60001C50: jal         0x6000034C
    // 0x60001C54: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world8_34C(rdram, ctx);
        goto after_9;
    // 0x60001C54: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_9:
    // 0x60001C58: addiu       $t1, $v0, 0x4
    ctx->r9 = ADD32(ctx->r2, 0X4);
    // 0x60001C5C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001C60: sw          $t1, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r9;
    // 0x60001C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C68:
    // 0x60001C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001C6C: jr          $ra
    // 0x60001C70: nop

    return;
    // 0x60001C70: nop

;}
RECOMP_FUNC void ovl_stage_world8_1C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C74: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60001C78: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001C7C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60001C80: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60001C84: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001C88: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001C8C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001C90: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60001C94: jal         0x600006DC
    // 0x60001C98: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    ovl_stage_world8_6DC(rdram, ctx);
        goto after_0;
    // 0x60001C98: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x60001C9C: beq         $v0, $zero, L_60001DC0
    if (ctx->r2 == 0) {
        // 0x60001CA0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_60001DC0;
    }
    // 0x60001CA0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60001CA4: blez        $v0, L_60001DC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001CA8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001DC0;
    }
    // 0x60001CA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001CAC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001CB0: lui         $s2, 0x6001
    ctx->r18 = S32(0X6001 << 16);
    // 0x60001CB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60001CB8: addiu       $s2, $s2, -0x67B0
    ctx->r18 = ADD32(ctx->r18, -0X67B0);
    // 0x60001CBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001CC0:
    // 0x60001CC0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x60001CC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60001CC8: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x60001CCC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60001CD0: nop

    // 0x60001CD4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x60001CD8: jal         0x60000418
    // 0x60001CDC: nop

    ovl_stage_world8_418(rdram, ctx);
        goto after_1;
    // 0x60001CDC: nop

    after_1:
    // 0x60001CE0: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x60001CE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001CE8: bc1f        L_60001DB8
    if (!c1cs) {
        // 0x60001CEC: nop
    
            goto L_60001DB8;
    }
    // 0x60001CEC: nop

    // 0x60001CF0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x60001CF4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60001CF8: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x60001CFC: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x60001D00: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x60001D04: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x60001D08: jal         0x600003DC
    // 0x60001D0C: nop

    ovl_stage_world8_3DC(rdram, ctx);
        goto after_2;
    // 0x60001D0C: nop

    after_2:
    // 0x60001D10: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001D14: lwc1        $f13, -0x6A78($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A78);
    // 0x60001D18: lwc1        $f12, -0x6A74($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A74);
    // 0x60001D1C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001D20: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60001D24: lwc1        $f9, -0x6A70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A70);
    // 0x60001D28: lwc1        $f8, -0x6A6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A6C);
    // 0x60001D2C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001D30: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60001D34: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x60001D38: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001D3C: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001D40: nop

    // 0x60001D44: bc1f        L_60001D60
    if (!c1cs) {
        // 0x60001D48: nop
    
            goto L_60001D60;
    }
    // 0x60001D48: nop

    // 0x60001D4C: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x60001D50: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001D54: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60001D58: b           L_60001D94
    // 0x60001D5C: swc1        $f16, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f16.u32l;
        goto L_60001D94;
    // 0x60001D5C: swc1        $f16, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f16.u32l;
L_60001D60:
    // 0x60001D60: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60001D64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001D68: nop

    // 0x60001D6C: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x60001D70: nop

    // 0x60001D74: bc1f        L_60001D84
    if (!c1cs) {
        // 0x60001D78: nop
    
            goto L_60001D84;
    }
    // 0x60001D78: nop

    // 0x60001D7C: b           L_60001D88
    // 0x60001D80: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001D88;
    // 0x60001D80: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001D84:
    // 0x60001D84: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001D88:
    // 0x60001D88: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60001D8C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001D90: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
L_60001D94:
    // 0x60001D94: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001D98: sw          $zero, -0x67D8($at)
    MEM_W(-0X67D8, ctx->r1) = 0;
    // 0x60001D9C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001DA0: sw          $t2, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r10;
    // 0x60001DA4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001DA8: sw          $t3, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r11;
    // 0x60001DAC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60001DB0: b           L_60001DC0
    // 0x60001DB4: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
        goto L_60001DC0;
    // 0x60001DB4: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
L_60001DB8:
    // 0x60001DB8: bne         $s1, $s3, L_60001CC0
    if (ctx->r17 != ctx->r19) {
        // 0x60001DBC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001CC0;
    }
    // 0x60001DBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001DC0:
    // 0x60001DC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001DC4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60001DC8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60001DCC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001DD0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001DD4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001DD8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001DDC: jr          $ra
    // 0x60001DE0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60001DE0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world8_1DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001DE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60001DE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001DEC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001DF0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60001DF4: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x60001DF8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60001DFC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60001E00: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001E04: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001E08: jal         0x600006DC
    // 0x60001E0C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world8_6DC(rdram, ctx);
        goto after_0;
    // 0x60001E0C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x60001E10: beq         $v0, $zero, L_60001E6C
    if (ctx->r2 == 0) {
        // 0x60001E14: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_60001E6C;
    }
    // 0x60001E14: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60001E18: blez        $v0, L_60001E6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001E1C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001E6C;
    }
    // 0x60001E1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001E20: lui         $s2, 0x6001
    ctx->r18 = S32(0X6001 << 16);
    // 0x60001E24: addiu       $s2, $s2, -0x6790
    ctx->r18 = ADD32(ctx->r18, -0X6790);
    // 0x60001E28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60001E2C:
    // 0x60001E2C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x60001E30: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60001E34: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x60001E38: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60001E3C: nop

    // 0x60001E40: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x60001E44: jal         0x60000418
    // 0x60001E48: nop

    ovl_stage_world8_418(rdram, ctx);
        goto after_1;
    // 0x60001E48: nop

    after_1:
    // 0x60001E4C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x60001E50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001E54: bc1f        L_60001E64
    if (!c1cs) {
        // 0x60001E58: nop
    
            goto L_60001E64;
    }
    // 0x60001E58: nop

    // 0x60001E5C: b           L_60001E70
    // 0x60001E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001E70;
    // 0x60001E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001E64:
    // 0x60001E64: bne         $s0, $s3, L_60001E2C
    if (ctx->r16 != ctx->r19) {
        // 0x60001E68: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_60001E2C;
    }
    // 0x60001E68: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_60001E6C:
    // 0x60001E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001E70:
    // 0x60001E70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001E74: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60001E78: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60001E7C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001E80: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001E84: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001E88: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001E8C: jr          $ra
    // 0x60001E90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60001E90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world8_1E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E94: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x60001E98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001EA0: swc1        $f12, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f12.u32l;
    // 0x60001EA4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x60001EA8: jal         0x600007B4
    // 0x60001EAC: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    ovl_stage_world8_7B4(rdram, ctx);
        goto after_0;
    // 0x60001EAC: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x60001EB0: beq         $v0, $zero, L_600021D0
    if (ctx->r2 == 0) {
        // 0x60001EB4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600021D0;
    }
    // 0x60001EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001EB8: jal         0x600007E4
    // 0x60001EBC: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    ovl_stage_world8_7E4(rdram, ctx);
        goto after_1;
    // 0x60001EBC: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    after_1:
    // 0x60001EC0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60001EC4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x60001EC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001ECC: bne         $t6, $at, L_600020A0
    if (ctx->r14 != ctx->r1) {
        // 0x60001ED0: nop
    
            goto L_600020A0;
    }
    // 0x60001ED0: nop

    // 0x60001ED4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001ED8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001EDC: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x60001EE0: blez        $t0, L_60001FA8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x60001EE4: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_60001FA8;
    }
    // 0x60001EE4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x60001EE8: andi        $v1, $t0, 0x3
    ctx->r3 = ctx->r8 & 0X3;
    // 0x60001EEC: beq         $v1, $zero, L_60001F2C
    if (ctx->r3 == 0) {
        // 0x60001EF0: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_60001F2C;
    }
    // 0x60001EF0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x60001EF4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x60001EF8: sll         $t8, $zero, 2
    ctx->r24 = S32(0 << 2);
    // 0x60001EFC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_60001F00:
    // 0x60001F00: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x60001F04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x60001F08: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x60001F0C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001F10: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001F14: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001F18: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x60001F1C: bne         $a0, $a2, L_60001F00
    if (ctx->r4 != ctx->r6) {
        // 0x60001F20: add.s       $f2, $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
            goto L_60001F00;
    }
    // 0x60001F20: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x60001F24: beq         $a2, $t0, L_60001FA8
    if (ctx->r6 == ctx->r8) {
        // 0x60001F28: nop
    
            goto L_60001FA8;
    }
    // 0x60001F28: nop

L_60001F2C:
    // 0x60001F2C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x60001F30: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x60001F34: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x60001F38: addu        $a3, $t3, $t1
    ctx->r7 = ADD32(ctx->r11, ctx->r9);
    // 0x60001F3C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
L_60001F40:
    // 0x60001F40: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x60001F44: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x60001F48: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x60001F4C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x60001F50: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60001F54: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001F58: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001F5C: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60001F60: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x60001F64: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x60001F68: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x60001F6C: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x60001F70: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x60001F74: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x60001F78: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x60001F7C: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x60001F80: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x60001F84: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x60001F88: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x60001F8C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x60001F90: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x60001F94: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x60001F98: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x60001F9C: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x60001FA0: bne         $v0, $a3, L_60001F40
    if (ctx->r2 != ctx->r7) {
        // 0x60001FA4: add.s       $f0, $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
            goto L_60001F40;
    }
    // 0x60001FA4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_60001FA8:
    // 0x60001FA8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x60001FAC: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60001FB0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60001FB4: addiu       $v0, $v0, -0x67B0
    ctx->r2 = ADD32(ctx->r2, -0X67B0);
    // 0x60001FB8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001FBC: div.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x60001FC0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001FC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001FC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001FCC: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x60001FD0: nop

    // 0x60001FD4: div.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x60001FD8: bc1f        L_60001FEC
    if (!c1cs) {
        // 0x60001FDC: nop
    
            goto L_60001FEC;
    }
    // 0x60001FDC: nop

    // 0x60001FE0: sub.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x60001FE4: b           L_60001FF0
    // 0x60001FE8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001FF0;
    // 0x60001FE8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001FEC:
    // 0x60001FEC: sub.s       $f12, $f14, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f0.fl;
L_60001FF0:
    // 0x60001FF0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x60001FF4: nop

    // 0x60001FF8: bc1f        L_60002038
    if (!c1cs) {
        // 0x60001FFC: nop
    
            goto L_60002038;
    }
    // 0x60001FFC: nop

    // 0x60002000: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x60002004: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60002008: bc1f        L_60002024
    if (!c1cs) {
        // 0x6000200C: nop
    
            goto L_60002024;
    }
    // 0x6000200C: nop

    // 0x60002010: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60002014: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002018: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000201C: b           L_60002030
    // 0x60002020: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
        goto L_60002030;
    // 0x60002020: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
L_60002024:
    // 0x60002024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002028: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000202C: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
L_60002030:
    // 0x60002030: b           L_6000219C
    // 0x60002034: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
        goto L_6000219C;
    // 0x60002034: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
L_60002038:
    // 0x60002038: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x6000203C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60002040: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60002044: nop

    // 0x60002048: bc1f        L_6000205C
    if (!c1cs) {
        // 0x6000204C: nop
    
            goto L_6000205C;
    }
    // 0x6000204C: nop

    // 0x60002050: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60002054: b           L_60002060
    // 0x60002058: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60002060;
    // 0x60002058: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_6000205C:
    // 0x6000205C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60002060:
    // 0x60002060: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x60002064: nop

    // 0x60002068: bc1f        L_600021A0
    if (!c1cs) {
        // 0x6000206C: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_600021A0;
    }
    // 0x6000206C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x60002070: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x60002074: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002078: bc1f        L_6000208C
    if (!c1cs) {
        // 0x6000207C: nop
    
            goto L_6000208C;
    }
    // 0x6000207C: nop

    // 0x60002080: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002084: b           L_60002098
    // 0x60002088: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
        goto L_60002098;
    // 0x60002088: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
L_6000208C:
    // 0x6000208C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002090: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002094: swc1        $f6, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f6.u32l;
L_60002098:
    // 0x60002098: b           L_6000219C
    // 0x6000209C: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
        goto L_6000219C;
    // 0x6000209C: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
L_600020A0:
    // 0x600020A0: blez        $t0, L_6000219C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x600020A4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_6000219C;
    }
    // 0x600020A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600020A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600020AC:
    // 0x600020AC: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x600020B0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600020B4: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x600020B8: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
    // 0x600020BC: addiu       $a1, $a1, -0x67B0
    ctx->r5 = ADD32(ctx->r5, -0X67B0);
    // 0x600020C0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x600020C4: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x600020C8: jal         0x60000418
    // 0x600020CC: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    ovl_stage_world8_418(rdram, ctx);
        goto after_2;
    // 0x600020CC: sw          $a2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r6;
    after_2:
    // 0x600020D0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x600020D4: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x600020D8: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x600020DC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x600020E0: bc1f        L_60002194
    if (!c1cs) {
        // 0x600020E4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_60002194;
    }
    // 0x600020E4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x600020E8: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x600020EC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600020F0: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x600020F4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x600020F8: addiu       $a0, $a0, -0x67B0
    ctx->r4 = ADD32(ctx->r4, -0X67B0);
    // 0x600020FC: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x60002100: jal         0x600003DC
    // 0x60002104: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    ovl_stage_world8_3DC(rdram, ctx);
        goto after_3;
    // 0x60002104: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_3:
    // 0x60002108: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000210C: lwc1        $f13, -0x6A68($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A68);
    // 0x60002110: lwc1        $f12, -0x6A64($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A64);
    // 0x60002114: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002118: lwc1        $f15, -0x6A60($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6A60);
    // 0x6000211C: lwc1        $f14, -0x6A5C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6A5C);
    // 0x60002120: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002124: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60002128: lwc1        $f7, -0x6A58($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6A58);
    // 0x6000212C: lwc1        $f6, -0x6A54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6A54);
    // 0x60002130: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x60002134: mul.d       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x60002138: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x6000213C: sub.d       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f0.d = ctx->f2.d - ctx->f14.d;
    // 0x60002140: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60002144: nop

    // 0x60002148: bc1f        L_60002164
    if (!c1cs) {
        // 0x6000214C: nop
    
            goto L_60002164;
    }
    // 0x6000214C: nop

    // 0x60002150: sub.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f0.d - ctx->f12.d;
    // 0x60002154: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002158: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x6000215C: b           L_6000218C
    // 0x60002160: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
        goto L_6000218C;
    // 0x60002160: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
L_60002164:
    // 0x60002164: c.lt.d      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.d < ctx->f14.d;
    // 0x60002168: nop

    // 0x6000216C: bc1f        L_6000217C
    if (!c1cs) {
        // 0x60002170: nop
    
            goto L_6000217C;
    }
    // 0x60002170: nop

    // 0x60002174: b           L_60002180
    // 0x60002178: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60002180;
    // 0x60002178: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_6000217C:
    // 0x6000217C: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60002180:
    // 0x60002180: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60002184: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002188: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
L_6000218C:
    // 0x6000218C: b           L_6000219C
    // 0x60002190: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
        goto L_6000219C;
    // 0x60002190: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
L_60002194:
    // 0x60002194: bne         $a2, $t0, L_600020AC
    if (ctx->r6 != ctx->r8) {
        // 0x60002198: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_600020AC;
    }
    // 0x60002198: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_6000219C:
    // 0x6000219C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
L_600021A0:
    // 0x600021A0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600021A4: beq         $t8, $zero, L_600021D0
    if (ctx->r24 == 0) {
        // 0x600021A8: addiu       $t9, $zero, 0xF
        ctx->r25 = ADD32(0, 0XF);
            goto L_600021D0;
    }
    // 0x600021A8: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x600021AC: sw          $zero, -0x67D8($at)
    MEM_W(-0X67D8, ctx->r1) = 0;
    // 0x600021B0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600021B4: sw          $zero, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = 0;
    // 0x600021B8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600021BC: sw          $t9, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r25;
    // 0x600021C0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600021C4: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
    // 0x600021C8: b           L_600021D4
    // 0x600021CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_600021D4;
    // 0x600021CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600021D0:
    // 0x600021D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600021D4:
    // 0x600021D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600021D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600021DC: jr          $ra
    // 0x600021E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x600021E0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_stage_world8_21E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600021E4: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x600021E8: lw          $t6, -0x6754($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6754);
    // 0x600021EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600021F0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x600021F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600021F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x600021FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60002200: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60002204: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60002208: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000220C: lw          $a0, -0x6B50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6B50);
    // 0x60002210: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x60002214: jal         0x600006C4
    // 0x60002218: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_0;
    // 0x60002218: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x6000221C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002220: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60002224: jr          $ra
    // 0x60002228: nop

    return;
    // 0x60002228: nop

;}
RECOMP_FUNC void ovl_stage_world8_222C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000222C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60002230: lw          $t6, -0x674C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X674C);
    // 0x60002234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002238: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x6000223C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002240: bne         $t7, $zero, L_60002250
    if (ctx->r15 != 0) {
        // 0x60002244: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_60002250;
    }
    // 0x60002244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002248: b           L_60002254
    // 0x6000224C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002254;
    // 0x6000224C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002250:
    // 0x60002250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002254:
    // 0x60002254: beq         $v0, $zero, L_60002284
    if (ctx->r2 == 0) {
        // 0x60002258: nop
    
            goto L_60002284;
    }
    // 0x60002258: nop

    // 0x6000225C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x60002260: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60002264: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x60002268: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x6000226C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60002270: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60002274: lw          $a0, -0x6B50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6B50);
    // 0x60002278: jal         0x60000F28
    // 0x6000227C: nop

    ovl_stage_world8_F28(rdram, ctx);
        goto after_0;
    // 0x6000227C: nop

    after_0:
    // 0x60002280: bne         $v0, $zero, L_600022AC
    if (ctx->r2 != 0) {
        // 0x60002284: lui         $t2, 0x6001
        ctx->r10 = S32(0X6001 << 16);
            goto L_600022AC;
    }
L_60002284:
    // 0x60002284: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002288: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x6000228C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x60002290: sw          $t3, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r11;
    // 0x60002294: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x60002298: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000229C: sw          $t4, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r12;
    // 0x600022A0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600022A4: b           L_600028EC
    // 0x600022A8: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
        goto L_600028EC;
    // 0x600022A8: sw          $zero, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = 0;
L_600022AC:
    // 0x600022AC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x600022B0: nop

    // 0x600022B4: bne         $v0, $zero, L_600025B8
    if (ctx->r2 != 0) {
        // 0x600022B8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600025B8;
    }
    // 0x600022B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600022BC: jal         0x6000034C
    // 0x600022C0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_1;
    // 0x600022C0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x600022C4: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x600022C8: lw          $v1, -0x6750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6750);
    // 0x600022CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600022D0: lw          $t5, 0x30($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X30);
    // 0x600022D4: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x600022D8: div         $zero, $t5, $a1
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r5)));
    // 0x600022DC: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x600022E0: bne         $a1, $zero, L_600022EC
    if (ctx->r5 != 0) {
        // 0x600022E4: nop
    
            goto L_600022EC;
    }
    // 0x600022E4: nop

    // 0x600022E8: break       7
    do_break(1610621672);
L_600022EC:
    // 0x600022EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600022F0: bne         $a1, $at, L_60002304
    if (ctx->r5 != ctx->r1) {
        // 0x600022F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_60002304;
    }
    // 0x600022F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x600022F8: bne         $t5, $at, L_60002304
    if (ctx->r13 != ctx->r1) {
        // 0x600022FC: nop
    
            goto L_60002304;
    }
    // 0x600022FC: nop

    // 0x60002300: break       6
    do_break(1610621696);
L_60002304:
    // 0x60002304: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x60002308: mflo        $t6
    ctx->r14 = lo;
    // 0x6000230C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60002310: bne         $at, $zero, L_600023D8
    if (ctx->r1 != 0) {
        // 0x60002314: slti        $at, $v0, 0x33
        ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
            goto L_600023D8;
    }
    // 0x60002314: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x60002318: beq         $at, $zero, L_600023D8
    if (ctx->r1 == 0) {
        // 0x6000231C: lui         $at, 0x6001
        ctx->r1 = S32(0X6001 << 16);
            goto L_600023D8;
    }
    // 0x6000231C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002320: lwc1        $f0, -0x67CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x60002324: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002328: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000232C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60002330: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60002334: nop

    // 0x60002338: bc1f        L_600023D8
    if (!c1cs) {
        // 0x6000233C: nop
    
            goto L_600023D8;
    }
    // 0x6000233C: nop

    // 0x60002340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002344: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002348: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x6000234C: nop

    // 0x60002350: bc1f        L_600023D8
    if (!c1cs) {
        // 0x60002354: nop
    
            goto L_600023D8;
    }
    // 0x60002354: nop

    // 0x60002358: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x6000235C: jal         0x60001DE4
    // 0x60002360: nop

    ovl_stage_world8_1DE4(rdram, ctx);
        goto after_2;
    // 0x60002360: nop

    after_2:
    // 0x60002364: beq         $v0, $zero, L_60002384
    if (ctx->r2 == 0) {
        // 0x60002368: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_60002384;
    }
    // 0x60002368: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000236C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002370: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60002374: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x60002378: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x6000237C: b           L_600024B0
    // 0x60002380: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
        goto L_600024B0;
    // 0x60002380: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_60002384:
    // 0x60002384: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002388: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x6000238C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x60002390: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x60002394: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002398: sw          $a1, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r5;
    // 0x6000239C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600023A0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x600023A4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600023A8: sw          $t8, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r24;
    // 0x600023AC: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x600023B0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x600023B4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600023B8: lwc1        $f8, -0x67C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X67C8);
    // 0x600023BC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600023C0: jal         0x6000177C
    // 0x600023C4: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
    ovl_stage_world8_177C(rdram, ctx);
        goto after_3;
    // 0x600023C4: swc1        $f8, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f8.u32l;
    after_3:
    // 0x600023C8: jal         0x600021E4
    // 0x600023CC: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_4;
    // 0x600023CC: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_4:
    // 0x600023D0: b           L_600028F0
    // 0x600023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x600023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600023D8:
    // 0x600023D8: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x600023DC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x600023E0: beq         $t1, $t9, L_60002580
    if (ctx->r9 == ctx->r25) {
        // 0x600023E4: lui         $a2, 0x6001
        ctx->r6 = S32(0X6001 << 16);
            goto L_60002580;
    }
    // 0x600023E4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600023E8: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x600023EC: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x600023F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x600023F4: bne         $a1, $t3, L_60002440
    if (ctx->r5 != ctx->r11) {
        // 0x600023F8: lui         $at, 0x6001
        ctx->r1 = S32(0X6001 << 16);
            goto L_60002440;
    }
    // 0x600023F8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600023FC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x60002400: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x60002404: sw          $v0, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r2;
    // 0x60002408: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000240C: sw          $v0, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r2;
    // 0x60002410: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x60002414: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002418: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x6000241C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x60002420: lwc1        $f10, -0x67C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X67C8);
    // 0x60002424: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002428: jal         0x6000177C
    // 0x6000242C: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
    ovl_stage_world8_177C(rdram, ctx);
        goto after_5;
    // 0x6000242C: swc1        $f10, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f10.u32l;
    after_5:
    // 0x60002430: jal         0x600021E4
    // 0x60002434: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_6;
    // 0x60002434: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_6:
    // 0x60002438: b           L_600028F0
    // 0x6000243C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x6000243C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002440:
    // 0x60002440: jal         0x6000034C
    // 0x60002444: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_7;
    // 0x60002444: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_7:
    // 0x60002448: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x6000244C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002450: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002454: lwc1        $f16, -0x67CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x60002458: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000245C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x60002460: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002464: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x60002468: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x6000246C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x60002470: bc1f        L_6000247C
    if (!c1cs) {
        // 0x60002474: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_6000247C;
    }
    // 0x60002474: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60002478: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
L_6000247C:
    // 0x6000247C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60002480: lw          $t6, -0x6750($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6750);
    // 0x60002484: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x60002488: lw          $v1, 0x2C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X2C);
    // 0x6000248C: nop

    // 0x60002490: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x60002494: beq         $at, $zero, L_600024A4
    if (ctx->r1 == 0) {
        // 0x60002498: nop
    
            goto L_600024A4;
    }
    // 0x60002498: nop

    // 0x6000249C: b           L_600024A4
    // 0x600024A0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
        goto L_600024A4;
    // 0x600024A0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_600024A4:
    // 0x600024A4: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x600024A8: beq         $at, $zero, L_600024FC
    if (ctx->r1 == 0) {
        // 0x600024AC: slti        $at, $v1, 0x5
        ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_600024FC;
    }
    // 0x600024AC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
L_600024B0:
    // 0x600024B0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x600024B4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600024B8: sw          $zero, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = 0;
    // 0x600024BC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600024C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600024C4: sw          $t7, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r15;
    // 0x600024C8: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x600024CC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600024D0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x600024D4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x600024D8: lwc1        $f18, -0x67C8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X67C8);
    // 0x600024DC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600024E0: jal         0x6000177C
    // 0x600024E4: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
    ovl_stage_world8_177C(rdram, ctx);
        goto after_8;
    // 0x600024E4: swc1        $f18, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f18.u32l;
    after_8:
    // 0x600024E8: jal         0x600021E4
    // 0x600024EC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_9;
    // 0x600024EC: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    after_9:
    // 0x600024F0: b           L_600028F0
    // 0x600024F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x600024F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600024F8: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
L_600024FC:
    // 0x600024FC: beq         $at, $zero, L_6000250C
    if (ctx->r1 == 0) {
        // 0x60002500: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_6000250C;
    }
    // 0x60002500: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x60002504: b           L_6000250C
    // 0x60002508: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
        goto L_6000250C;
    // 0x60002508: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_6000250C:
    // 0x6000250C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60002510: beq         $at, $zero, L_60002584
    if (ctx->r1 == 0) {
        // 0x60002514: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_60002584;
    }
    // 0x60002514: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60002518: jal         0x60001DE4
    // 0x6000251C: nop

    ovl_stage_world8_1DE4(rdram, ctx);
        goto after_10;
    // 0x6000251C: nop

    after_10:
    // 0x60002520: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60002524: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002528: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x6000252C: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x60002530: bne         $v0, $zero, L_600024B0
    if (ctx->r2 != 0) {
        // 0x60002534: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_600024B0;
    }
    // 0x60002534: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x60002538: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x6000253C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002540: sw          $t1, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r9;
    // 0x60002544: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002548: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x6000254C: sw          $t3, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r11;
    // 0x60002550: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x60002554: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002558: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x6000255C: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x60002560: lwc1        $f4, -0x67C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X67C8);
    // 0x60002564: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002568: jal         0x6000177C
    // 0x6000256C: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
    ovl_stage_world8_177C(rdram, ctx);
        goto after_11;
    // 0x6000256C: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
    after_11:
    // 0x60002570: jal         0x600021E4
    // 0x60002574: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_12;
    // 0x60002574: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_12:
    // 0x60002578: b           L_600028F0
    // 0x6000257C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x6000257C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002580:
    // 0x60002580: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
L_60002584:
    // 0x60002584: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002588: jal         0x60001E94
    // 0x6000258C: nop

    ovl_stage_world8_1E94(rdram, ctx);
        goto after_13;
    // 0x6000258C: nop

    after_13:
    // 0x60002590: beq         $v0, $zero, L_600028F0
    if (ctx->r2 == 0) {
        // 0x60002594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600028F0;
    }
    // 0x60002594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002598: jal         0x60001C74
    // 0x6000259C: nop

    ovl_stage_world8_1C74(rdram, ctx);
        goto after_14;
    // 0x6000259C: nop

    after_14:
    // 0x600025A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600025A4: jal         0x60001B34
    // 0x600025A8: nop

    ovl_stage_world8_1B34(rdram, ctx);
        goto after_15;
    // 0x600025A8: nop

    after_15:
    // 0x600025AC: b           L_600028F0
    // 0x600025B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x600025B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600025B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_600025B8:
    // 0x600025B8: bne         $v0, $at, L_600028F0
    if (ctx->r2 != ctx->r1) {
        // 0x600025BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600028F0;
    }
    // 0x600025BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600025C0: jal         0x6000034C
    // 0x600025C4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_16;
    // 0x600025C4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_16:
    // 0x600025C8: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600025CC: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x600025D0: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x600025D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600025D8: bne         $a1, $t6, L_600025FC
    if (ctx->r5 != ctx->r14) {
        // 0x600025DC: lui         $a3, 0x6001
        ctx->r7 = S32(0X6001 << 16);
            goto L_600025FC;
    }
    // 0x600025DC: lui         $a3, 0x6001
    ctx->r7 = S32(0X6001 << 16);
    // 0x600025E0: addiu       $a3, $a3, -0x6758
    ctx->r7 = ADD32(ctx->r7, -0X6758);
    // 0x600025E4: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x600025E8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x600025EC: bne         $t0, $t7, L_600025FC
    if (ctx->r8 != ctx->r15) {
        // 0x600025F0: nop
    
            goto L_600025FC;
    }
    // 0x600025F0: nop

    // 0x600025F4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x600025F8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_600025FC:
    // 0x600025FC: lui         $a3, 0x6001
    ctx->r7 = S32(0X6001 << 16);
    // 0x60002600: addiu       $a3, $a3, -0x6758
    ctx->r7 = ADD32(ctx->r7, -0X6758);
    // 0x60002604: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x60002608: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x6000260C: bne         $t0, $a0, L_60002664
    if (ctx->r8 != ctx->r4) {
        // 0x60002610: lui         $v1, 0x6001
        ctx->r3 = S32(0X6001 << 16);
            goto L_60002664;
    }
    // 0x60002610: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60002614: lw          $v1, -0x6750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6750);
    // 0x60002618: nop

    // 0x6000261C: lw          $t8, 0x30($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X30);
    // 0x60002620: lw          $t3, 0x2C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2C);
    // 0x60002624: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x60002628: bne         $a1, $zero, L_60002634
    if (ctx->r5 != 0) {
        // 0x6000262C: nop
    
            goto L_60002634;
    }
    // 0x6000262C: nop

    // 0x60002630: break       7
    do_break(1610622512);
L_60002634:
    // 0x60002634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60002638: bne         $a1, $at, L_6000264C
    if (ctx->r5 != ctx->r1) {
        // 0x6000263C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_6000264C;
    }
    // 0x6000263C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60002640: bne         $t8, $at, L_6000264C
    if (ctx->r24 != ctx->r1) {
        // 0x60002644: nop
    
            goto L_6000264C;
    }
    // 0x60002644: nop

    // 0x60002648: break       6
    do_break(1610622536);
L_6000264C:
    // 0x6000264C: mflo        $t9
    ctx->r25 = lo;
    // 0x60002650: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x60002654: bne         $at, $zero, L_60002664
    if (ctx->r1 != 0) {
        // 0x60002658: slti        $at, $v0, 0x29
        ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_60002664;
    }
    // 0x60002658: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x6000265C: bne         $at, $zero, L_60002668
    if (ctx->r1 != 0) {
        // 0x60002660: nop
    
            goto L_60002668;
    }
    // 0x60002660: nop

L_60002664:
    // 0x60002664: bne         $a1, $a0, L_600026E4
    if (ctx->r5 != ctx->r4) {
        // 0x60002668: lui         $at, 0x6001
        ctx->r1 = S32(0X6001 << 16);
            goto L_600026E4;
    }
L_60002668:
    // 0x60002668: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000266C: lwc1        $f0, -0x67CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x60002670: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002674: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002678: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x6000267C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x60002680: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x60002684: bc1f        L_600026A4
    if (!c1cs) {
        // 0x60002688: lui         $t2, 0x6001
        ctx->r10 = S32(0X6001 << 16);
            goto L_600026A4;
    }
    // 0x60002688: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x6000268C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002690: nop

    // 0x60002694: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x60002698: nop

    // 0x6000269C: bc1t        L_600026A8
    if (c1cs) {
        // 0x600026A0: nop
    
            goto L_600026A8;
    }
    // 0x600026A0: nop

L_600026A4:
    // 0x600026A4: beq         $t0, $a0, L_600026E4
    if (ctx->r8 == ctx->r4) {
        // 0x600026A8: addiu       $t2, $t2, -0x67D8
        ctx->r10 = ADD32(ctx->r10, -0X67D8);
            goto L_600026E4;
    }
L_600026A8:
    // 0x600026A8: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x600026AC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x600026B0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600026B4: sw          $a1, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r5;
    // 0x600026B8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600026BC: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x600026C0: sw          $t4, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r12;
    // 0x600026C4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600026C8: bne         $a1, $a0, L_600026D4
    if (ctx->r5 != ctx->r4) {
        // 0x600026CC: sw          $zero, -0x675C($at)
        MEM_W(-0X675C, ctx->r1) = 0;
            goto L_600026D4;
    }
    // 0x600026CC: sw          $zero, -0x675C($at)
    MEM_W(-0X675C, ctx->r1) = 0;
    // 0x600026D0: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
L_600026D4:
    // 0x600026D4: jal         0x600021E4
    // 0x600026D8: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_17;
    // 0x600026D8: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    after_17:
    // 0x600026DC: b           L_600028F0
    // 0x600026E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x600026E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600026E4:
    // 0x600026E4: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x600026E8: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x600026EC: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x600026F0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x600026F4: bne         $t1, $t5, L_60002704
    if (ctx->r9 != ctx->r13) {
        // 0x600026F8: nop
    
            goto L_60002704;
    }
    // 0x600026F8: nop

    // 0x600026FC: beq         $t0, $a0, L_600028D8
    if (ctx->r8 == ctx->r4) {
        // 0x60002700: nop
    
            goto L_600028D8;
    }
    // 0x60002700: nop

L_60002704:
    // 0x60002704: bne         $t1, $a0, L_60002778
    if (ctx->r9 != ctx->r4) {
        // 0x60002708: nop
    
            goto L_60002778;
    }
    // 0x60002708: nop

    // 0x6000270C: jal         0x6000034C
    // 0x60002710: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_18;
    // 0x60002710: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_18:
    // 0x60002714: lui         $a3, 0x6001
    ctx->r7 = S32(0X6001 << 16);
    // 0x60002718: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x6000271C: slti        $at, $v0, 0x1A
    ctx->r1 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
    // 0x60002720: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x60002724: addiu       $a3, $a3, -0x6758
    ctx->r7 = ADD32(ctx->r7, -0X6758);
    // 0x60002728: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x6000272C: beq         $at, $zero, L_60002748
    if (ctx->r1 == 0) {
        // 0x60002730: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_60002748;
    }
    // 0x60002730: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x60002734: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x60002738: nop

    // 0x6000273C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60002740: b           L_6000274C
    // 0x60002744: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
        goto L_6000274C;
    // 0x60002744: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_60002748:
    // 0x60002748: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
L_6000274C:
    // 0x6000274C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x60002750: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002754: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002758: sw          $t8, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r24;
    // 0x6000275C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002760: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x60002764: sw          $t9, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r25;
    // 0x60002768: jal         0x600021E4
    // 0x6000276C: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_19;
    // 0x6000276C: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_19:
    // 0x60002770: b           L_600028F0
    // 0x60002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x60002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002778:
    // 0x60002778: jal         0x6000034C
    // 0x6000277C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world8_34C(rdram, ctx);
        goto after_20;
    // 0x6000277C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_20:
    // 0x60002780: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002788: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000278C: lwc1        $f16, -0x67CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x60002790: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60002794: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x60002798: lui         $a3, 0x6001
    ctx->r7 = S32(0X6001 << 16);
    // 0x6000279C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x600027A0: addiu       $t2, $t2, -0x67D8
    ctx->r10 = ADD32(ctx->r10, -0X67D8);
    // 0x600027A4: addiu       $a3, $a3, -0x6758
    ctx->r7 = ADD32(ctx->r7, -0X6758);
    // 0x600027A8: addiu       $a2, $a2, -0x675C
    ctx->r6 = ADD32(ctx->r6, -0X675C);
    // 0x600027AC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x600027B0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x600027B4: bc1f        L_600027C0
    if (!c1cs) {
        // 0x600027B8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_600027C0;
    }
    // 0x600027B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x600027BC: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
L_600027C0:
    // 0x600027C0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x600027C4: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x600027C8: bne         $t0, $a0, L_60002800
    if (ctx->r8 != ctx->r4) {
        // 0x600027CC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60002800;
    }
    // 0x600027CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600027D0: lw          $t3, -0x6750($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6750);
    // 0x600027D4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x600027D8: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x600027DC: nop

    // 0x600027E0: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x600027E4: beq         $at, $zero, L_600027F4
    if (ctx->r1 == 0) {
        // 0x600027E8: nop
    
            goto L_600027F4;
    }
    // 0x600027E8: nop

    // 0x600027EC: b           L_600027F4
    // 0x600027F0: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
        goto L_600027F4;
    // 0x600027F0: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_600027F4:
    // 0x600027F4: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x600027F8: bne         $at, $zero, L_60002808
    if (ctx->r1 != 0) {
        // 0x600027FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60002808;
    }
    // 0x600027FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_60002800:
    // 0x60002800: bne         $a0, $at, L_6000285C
    if (ctx->r4 != ctx->r1) {
        // 0x60002804: lui         $t3, 0x6001
        ctx->r11 = S32(0X6001 << 16);
            goto L_6000285C;
    }
    // 0x60002804: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
L_60002808:
    // 0x60002808: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x6000280C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002810: beq         $t0, $a0, L_60002830
    if (ctx->r8 == ctx->r4) {
        // 0x60002814: sw          $zero, -0x67D0($at)
        MEM_W(-0X67D0, ctx->r1) = 0;
            goto L_60002830;
    }
    // 0x60002814: sw          $zero, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = 0;
    // 0x60002818: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x6000281C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002820: sw          $t5, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r13;
    // 0x60002824: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x60002828: b           L_6000284C
    // 0x6000282C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
        goto L_6000284C;
    // 0x6000282C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
L_60002830:
    // 0x60002830: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x60002834: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002838: sw          $t7, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r15;
    // 0x6000283C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x60002840: nop

    // 0x60002844: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60002848: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_6000284C:
    // 0x6000284C: jal         0x600021E4
    // 0x60002850: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_21;
    // 0x60002850: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_21:
    // 0x60002854: b           L_600028F0
    // 0x60002858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x60002858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000285C:
    // 0x6000285C: lw          $t3, -0x6750($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6750);
    // 0x60002860: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x60002864: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x60002868: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x6000286C: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x60002870: beq         $at, $zero, L_60002880
    if (ctx->r1 == 0) {
        // 0x60002874: nop
    
            goto L_60002880;
    }
    // 0x60002874: nop

    // 0x60002878: b           L_60002880
    // 0x6000287C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
        goto L_60002880;
    // 0x6000287C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
L_60002880:
    // 0x60002880: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60002884: bne         $at, $zero, L_60002894
    if (ctx->r1 != 0) {
        // 0x60002888: nop
    
            goto L_60002894;
    }
    // 0x60002888: nop

    // 0x6000288C: bne         $a0, $zero, L_600028D8
    if (ctx->r4 != 0) {
        // 0x60002890: nop
    
            goto L_600028D8;
    }
    // 0x60002890: nop

L_60002894:
    // 0x60002894: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x60002898: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000289C: sw          $t1, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r9;
    // 0x600028A0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600028A4: beq         $t0, $a0, L_600028B8
    if (ctx->r8 == ctx->r4) {
        // 0x600028A8: sw          $t5, -0x67D4($at)
        MEM_W(-0X67D4, ctx->r1) = ctx->r13;
            goto L_600028B8;
    }
    // 0x600028A8: sw          $t5, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r13;
    // 0x600028AC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x600028B0: b           L_600028C8
    // 0x600028B4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
        goto L_600028C8;
    // 0x600028B4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
L_600028B8:
    // 0x600028B8: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x600028BC: nop

    // 0x600028C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x600028C4: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_600028C8:
    // 0x600028C8: jal         0x600021E4
    // 0x600028CC: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    ovl_stage_world8_21E4(rdram, ctx);
        goto after_22;
    // 0x600028CC: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_22:
    // 0x600028D0: b           L_600028F0
    // 0x600028D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028F0;
    // 0x600028D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600028D8:
    // 0x600028D8: jal         0x60001C74
    // 0x600028DC: nop

    ovl_stage_world8_1C74(rdram, ctx);
        goto after_23;
    // 0x600028DC: nop

    after_23:
    // 0x600028E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600028E4: jal         0x60001B34
    // 0x600028E8: nop

    ovl_stage_world8_1B34(rdram, ctx);
        goto after_24;
    // 0x600028E8: nop

    after_24:
L_600028EC:
    // 0x600028EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600028F0:
    // 0x600028F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600028F4: jr          $ra
    // 0x600028F8: nop

    return;
    // 0x600028F8: nop

;}
RECOMP_FUNC void ovl_stage_world8_28FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600028FC: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002900: addiu       $v0, $v0, -0x6778
    ctx->r2 = ADD32(ctx->r2, -0X6778);
    // 0x60002904: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002908: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x6000290C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x60002910: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60002914: bc1f        L_60002950
    if (!c1cs) {
        // 0x60002918: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_60002950;
    }
    // 0x60002918: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x6000291C: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x60002920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002924: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60002928: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x6000292C: nop

    // 0x60002930: bc1f        L_60002950
    if (!c1cs) {
        // 0x60002934: nop
    
            goto L_60002950;
    }
    // 0x60002934: nop

    // 0x60002938: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000293C: nop

    // 0x60002940: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60002944: nop

    // 0x60002948: bc1t        L_60002A20
    if (c1cs) {
        // 0x6000294C: nop
    
            goto L_60002A20;
    }
    // 0x6000294C: nop

L_60002950:
    // 0x60002950: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x60002954: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60002958: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x6000295C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60002960: bc1f        L_60002998
    if (!c1cs) {
        // 0x60002964: nop
    
            goto L_60002998;
    }
    // 0x60002964: nop

    // 0x60002968: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000296C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x60002970: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x60002974: nop

    // 0x60002978: bc1f        L_60002998
    if (!c1cs) {
        // 0x6000297C: nop
    
            goto L_60002998;
    }
    // 0x6000297C: nop

    // 0x60002980: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002984: nop

    // 0x60002988: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x6000298C: nop

    // 0x60002990: bc1t        L_60002A20
    if (c1cs) {
        // 0x60002994: nop
    
            goto L_60002A20;
    }
    // 0x60002994: nop

L_60002998:
    // 0x60002998: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x6000299C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x600029A0: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x600029A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x600029A8: bc1f        L_600029E0
    if (!c1cs) {
        // 0x600029AC: nop
    
            goto L_600029E0;
    }
    // 0x600029AC: nop

    // 0x600029B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600029B4: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x600029B8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x600029BC: nop

    // 0x600029C0: bc1f        L_600029E0
    if (!c1cs) {
        // 0x600029C4: nop
    
            goto L_600029E0;
    }
    // 0x600029C4: nop

    // 0x600029C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600029CC: nop

    // 0x600029D0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x600029D4: nop

    // 0x600029D8: bc1t        L_60002A20
    if (c1cs) {
        // 0x600029DC: nop
    
            goto L_60002A20;
    }
    // 0x600029DC: nop

L_600029E0:
    // 0x600029E0: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x600029E4: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x600029E8: bc1f        L_60002A28
    if (!c1cs) {
        // 0x600029EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002A28;
    }
    // 0x600029EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600029F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600029F4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x600029F8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x600029FC: nop

    // 0x60002A00: bc1t        L_60002A20
    if (c1cs) {
        // 0x60002A04: nop
    
            goto L_60002A20;
    }
    // 0x60002A04: nop

    // 0x60002A08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002A0C: nop

    // 0x60002A10: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60002A14: nop

    // 0x60002A18: bc1f        L_60002A28
    if (!c1cs) {
        // 0x60002A1C: nop
    
            goto L_60002A28;
    }
    // 0x60002A1C: nop

L_60002A20:
    // 0x60002A20: jr          $ra
    // 0x60002A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60002A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002A28:
    // 0x60002A28: jr          $ra
    // 0x60002A2C: nop

    return;
    // 0x60002A2C: nop

;}
RECOMP_FUNC void ovl_stage_world8_2A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002A30: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002A34: lw          $v0, -0x67D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X67D8);
    // 0x60002A38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002A3C: beq         $v0, $zero, L_60002A6C
    if (ctx->r2 == 0) {
        // 0x60002A40: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_60002A6C;
    }
    // 0x60002A40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002A44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002A48: beq         $v0, $at, L_60003064
    if (ctx->r2 == ctx->r1) {
        // 0x60002A4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003064;
    }
    // 0x60002A4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60002A50: beq         $v0, $at, L_600030A0
    if (ctx->r2 == ctx->r1) {
        // 0x60002A54: lui         $t4, 0x6001
        ctx->r12 = S32(0X6001 << 16);
            goto L_600030A0;
    }
    // 0x60002A54: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60002A58: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60002A5C: beq         $v0, $at, L_600030FC
    if (ctx->r2 == ctx->r1) {
        // 0x60002A60: nop
    
            goto L_600030FC;
    }
    // 0x60002A60: nop

    // 0x60002A64: b           L_60003150
    // 0x60002A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002A6C:
    // 0x60002A6C: bne         $a0, $zero, L_60002DB0
    if (ctx->r4 != 0) {
        // 0x60002A70: lui         $t4, 0x6001
        ctx->r12 = S32(0X6001 << 16);
            goto L_60002DB0;
    }
    // 0x60002A70: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60002A74: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60002A78: lw          $t6, -0x67B4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X67B4);
    // 0x60002A7C: nop

    // 0x60002A80: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x60002A84: bne         $at, $zero, L_60002CA8
    if (ctx->r1 != 0) {
        // 0x60002A88: nop
    
            goto L_60002CA8;
    }
    // 0x60002A88: nop

    // 0x60002A8C: jal         0x60001A5C
    // 0x60002A90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world8_1A5C(rdram, ctx);
        goto after_0;
    // 0x60002A90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60002A94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002A98: beq         $v0, $zero, L_60002CA8
    if (ctx->r2 == 0) {
        // 0x60002A9C: lui         $v1, 0x6001
        ctx->r3 = S32(0X6001 << 16);
            goto L_60002CA8;
    }
    // 0x60002A9C: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60002AA0: addiu       $v1, $v1, -0x67D0
    ctx->r3 = ADD32(ctx->r3, -0X67D0);
    // 0x60002AA4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60002AA8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002AAC: bne         $t7, $at, L_60002C98
    if (ctx->r15 != ctx->r1) {
        // 0x60002AB0: lui         $v0, 0x6001
        ctx->r2 = S32(0X6001 << 16);
            goto L_60002C98;
    }
    // 0x60002AB0: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002AB4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AB8: sw          $zero, -0x67D8($at)
    MEM_W(-0X67D8, ctx->r1) = 0;
    // 0x60002ABC: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x60002AC0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x60002AC4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60002AC8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002ACC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AD0: addiu       $t9, $zero, -0x1E
    ctx->r25 = ADD32(0, -0X1E);
    // 0x60002AD4: jal         0x60000340
    // 0x60002AD8: sw          $t9, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = ctx->r25;
    ovl_stage_world8_340(rdram, ctx);
        goto after_1;
    // 0x60002AD8: sw          $t9, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = ctx->r25;
    after_1:
    // 0x60002ADC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AE0: lwc1        $f13, -0x6A50($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A50);
    // 0x60002AE4: lwc1        $f12, -0x6A4C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A4C);
    // 0x60002AE8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AEC: lwc1        $f15, -0x6A48($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6A48);
    // 0x60002AF0: lwc1        $f14, -0x6A44($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6A44);
    // 0x60002AF4: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002AF8: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002AFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002B00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002B04: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002B08: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002B0C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60002B10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002B14: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002B18: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60002B1C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60002B20: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x60002B24: c.le.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d <= ctx->f6.d;
    // 0x60002B28: nop

    // 0x60002B2C: bc1f        L_60002B94
    if (!c1cs) {
        // 0x60002B30: nop
    
            goto L_60002B94;
    }
    // 0x60002B30: nop

    // 0x60002B34: jal         0x60000340
    // 0x60002B38: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_2;
    // 0x60002B38: nop

    after_2:
    // 0x60002B3C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002B40: lwc1        $f13, -0x6A40($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A40);
    // 0x60002B44: lwc1        $f12, -0x6A3C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A3C);
    // 0x60002B48: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002B4C: lwc1        $f15, -0x6A38($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6A38);
    // 0x60002B50: lwc1        $f14, -0x6A34($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6A34);
    // 0x60002B54: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002B58: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002B5C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002B60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002B64: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002B68: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002B6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60002B70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002B74: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002B78: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x60002B7C: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60002B80: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x60002B84: sub.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f10.d - ctx->f14.d;
    // 0x60002B88: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x60002B8C: b           L_6000314C
    // 0x60002B90: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_6000314C;
    // 0x60002B90: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_60002B94:
    // 0x60002B94: jal         0x60000340
    // 0x60002B98: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_3;
    // 0x60002B98: nop

    after_3:
    // 0x60002B9C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002BA0: lwc1        $f13, -0x6A30($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A30);
    // 0x60002BA4: lwc1        $f12, -0x6A2C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A2C);
    // 0x60002BA8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002BAC: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002BB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002BB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002BB8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002BBC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002BC0: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x60002BC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002BC8: mul.d       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002BCC: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x60002BD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60002BD4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60002BD8: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x60002BDC: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x60002BE0: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x60002BE4: nop

    // 0x60002BE8: bc1f        L_60002C48
    if (!c1cs) {
        // 0x60002BEC: nop
    
            goto L_60002C48;
    }
    // 0x60002BEC: nop

    // 0x60002BF0: jal         0x60000340
    // 0x60002BF4: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_4;
    // 0x60002BF4: nop

    after_4:
    // 0x60002BF8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002BFC: lwc1        $f13, -0x6A20($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A20);
    // 0x60002C00: lwc1        $f12, -0x6A1C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A1C);
    // 0x60002C04: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002C08: lwc1        $f15, -0x6A18($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6A18);
    // 0x60002C0C: lwc1        $f14, -0x6A14($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6A14);
    // 0x60002C10: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002C14: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002C18: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002C1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002C20: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002C24: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002C28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60002C2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002C30: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002C34: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x60002C38: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x60002C3C: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x60002C40: b           L_60002C8C
    // 0x60002C44: add.d       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f16.d + ctx->f14.d;
        goto L_60002C8C;
    // 0x60002C44: add.d       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f16.d + ctx->f14.d;
L_60002C48:
    // 0x60002C48: jal         0x60000340
    // 0x60002C4C: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_5;
    // 0x60002C4C: nop

    after_5:
    // 0x60002C50: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002C54: lwc1        $f13, -0x6A10($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A10);
    // 0x60002C58: lwc1        $f12, -0x6A0C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A0C);
    // 0x60002C5C: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002C60: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002C64: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002C6C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002C70: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002C74: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x60002C78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002C7C: mul.d       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002C80: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60002C84: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x60002C88: add.d       $f2, $f18, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f2.d = ctx->f18.d + ctx->f16.d;
L_60002C8C:
    // 0x60002C8C: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60002C90: b           L_6000314C
    // 0x60002C94: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_6000314C;
    // 0x60002C94: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_60002C98:
    // 0x60002C98: jal         0x60001B34
    // 0x60002C9C: nop

    ovl_stage_world8_1B34(rdram, ctx);
        goto after_6;
    // 0x60002C9C: nop

    after_6:
    // 0x60002CA0: b           L_60003150
    // 0x60002CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002CA8:
    // 0x60002CA8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002CAC: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x60002CB0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60002CB4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60002CB8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x60002CBC: beq         $t1, $zero, L_60002DA0
    if (ctx->r9 == 0) {
        // 0x60002CC0: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_60002DA0;
    }
    // 0x60002CC0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x60002CC4: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002CC8: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002CCC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002CD0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002CD4: lui         $a2, 0x4454
    ctx->r6 = S32(0X4454 << 16);
    // 0x60002CD8: lui         $a3, 0x443B
    ctx->r7 = S32(0X443B << 16);
    // 0x60002CDC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002CE0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x60002CE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x60002CE8: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x60002CEC: jal         0x600028FC
    // 0x60002CF0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world8_28FC(rdram, ctx);
        goto after_7;
    // 0x60002CF0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x60002CF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002CF8: beq         $v0, $zero, L_60002D10
    if (ctx->r2 == 0) {
        // 0x60002CFC: nop
    
            goto L_60002D10;
    }
    // 0x60002CFC: nop

    // 0x60002D00: jal         0x6000222C
    // 0x60002D04: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_8;
    // 0x60002D04: nop

    after_8:
    // 0x60002D08: b           L_60003150
    // 0x60002D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002D10:
    // 0x60002D10: bne         $a0, $zero, L_60002D2C
    if (ctx->r4 != 0) {
        // 0x60002D14: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_60002D2C;
    }
    // 0x60002D14: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60002D18: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002D1C: jal         0x60001E94
    // 0x60002D20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world8_1E94(rdram, ctx);
        goto after_9;
    // 0x60002D20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_9:
    // 0x60002D24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002D28: beq         $v0, $zero, L_60002D90
    if (ctx->r2 == 0) {
        // 0x60002D2C: lui         $v1, 0x6001
        ctx->r3 = S32(0X6001 << 16);
            goto L_60002D90;
    }
L_60002D2C:
    // 0x60002D2C: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60002D30: addiu       $v1, $v1, -0x67D0
    ctx->r3 = ADD32(ctx->r3, -0X67D0);
    // 0x60002D34: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x60002D38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002D3C: bne         $t3, $at, L_60002D90
    if (ctx->r11 != ctx->r1) {
        // 0x60002D40: nop
    
            goto L_60002D90;
    }
    // 0x60002D40: nop

    // 0x60002D44: beq         $a0, $zero, L_60002D5C
    if (ctx->r4 == 0) {
        // 0x60002D48: lui         $at, 0x43AF
        ctx->r1 = S32(0X43AF << 16);
            goto L_60002D5C;
    }
    // 0x60002D48: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60002D4C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002D50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002D54: b           L_60002D64
    // 0x60002D58: nop

        goto L_60002D64;
    // 0x60002D58: nop

L_60002D5C:
    // 0x60002D5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002D60: nop

L_60002D64:
    // 0x60002D64: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002D68: lwc1        $f10, -0x67CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X67CC);
    // 0x60002D6C: nop

    // 0x60002D70: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x60002D74: nop

    // 0x60002D78: bc1f        L_60002D90
    if (!c1cs) {
        // 0x60002D7C: nop
    
            goto L_60002D90;
    }
    // 0x60002D7C: nop

    // 0x60002D80: jal         0x6000222C
    // 0x60002D84: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_10;
    // 0x60002D84: nop

    after_10:
    // 0x60002D88: b           L_60003150
    // 0x60002D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002D90:
    // 0x60002D90: jal         0x6000177C
    // 0x60002D94: nop

    ovl_stage_world8_177C(rdram, ctx);
        goto after_11;
    // 0x60002D94: nop

    after_11:
    // 0x60002D98: b           L_60003150
    // 0x60002D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002DA0:
    // 0x60002DA0: jal         0x6000222C
    // 0x60002DA4: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_12;
    // 0x60002DA4: nop

    after_12:
    // 0x60002DA8: b           L_60003150
    // 0x60002DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002DB0:
    // 0x60002DB0: lw          $t4, -0x67B4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X67B4);
    // 0x60002DB4: nop

    // 0x60002DB8: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x60002DBC: bne         $at, $zero, L_60002FE0
    if (ctx->r1 != 0) {
        // 0x60002DC0: nop
    
            goto L_60002FE0;
    }
    // 0x60002DC0: nop

    // 0x60002DC4: jal         0x60001A5C
    // 0x60002DC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world8_1A5C(rdram, ctx);
        goto after_13;
    // 0x60002DC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_13:
    // 0x60002DCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002DD0: beq         $v0, $zero, L_60002FE0
    if (ctx->r2 == 0) {
        // 0x60002DD4: lui         $v1, 0x6001
        ctx->r3 = S32(0X6001 << 16);
            goto L_60002FE0;
    }
    // 0x60002DD4: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60002DD8: addiu       $v1, $v1, -0x67D0
    ctx->r3 = ADD32(ctx->r3, -0X67D0);
    // 0x60002DDC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x60002DE0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002DE4: bne         $t5, $at, L_60002FD0
    if (ctx->r13 != ctx->r1) {
        // 0x60002DE8: lui         $v0, 0x6001
        ctx->r2 = S32(0X6001 << 16);
            goto L_60002FD0;
    }
    // 0x60002DE8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002DEC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002DF0: sw          $zero, -0x67D8($at)
    MEM_W(-0X67D8, ctx->r1) = 0;
    // 0x60002DF4: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x60002DF8: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x60002DFC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60002E00: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60002E04: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002E08: addiu       $t7, $zero, -0x1E
    ctx->r15 = ADD32(0, -0X1E);
    // 0x60002E0C: jal         0x60000340
    // 0x60002E10: sw          $t7, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = ctx->r15;
    ovl_stage_world8_340(rdram, ctx);
        goto after_14;
    // 0x60002E10: sw          $t7, -0x67B4($at)
    MEM_W(-0X67B4, ctx->r1) = ctx->r15;
    after_14:
    // 0x60002E14: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002E18: lwc1        $f13, -0x6A08($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6A08);
    // 0x60002E1C: lwc1        $f12, -0x6A04($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A04);
    // 0x60002E20: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002E24: lwc1        $f15, -0x6A00($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6A00);
    // 0x60002E28: lwc1        $f14, -0x69FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X69FC);
    // 0x60002E2C: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002E30: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002E34: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002E38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002E3C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002E40: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002E44: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x60002E48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002E4C: mul.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002E50: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x60002E54: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60002E58: add.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d + ctx->f10.d;
    // 0x60002E5C: c.le.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d <= ctx->f18.d;
    // 0x60002E60: nop

    // 0x60002E64: bc1f        L_60002ECC
    if (!c1cs) {
        // 0x60002E68: nop
    
            goto L_60002ECC;
    }
    // 0x60002E68: nop

    // 0x60002E6C: jal         0x60000340
    // 0x60002E70: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_15;
    // 0x60002E70: nop

    after_15:
    // 0x60002E74: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002E78: lwc1        $f13, -0x69F8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X69F8);
    // 0x60002E7C: lwc1        $f12, -0x69F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X69F4);
    // 0x60002E80: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002E84: lwc1        $f15, -0x69F0($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X69F0);
    // 0x60002E88: lwc1        $f14, -0x69EC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X69EC);
    // 0x60002E8C: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002E90: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002E94: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002E98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002E9C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002EA0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002EA4: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x60002EA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002EAC: mul.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002EB0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x60002EB4: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60002EB8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x60002EBC: sub.d       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f4.d - ctx->f14.d;
    // 0x60002EC0: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x60002EC4: b           L_6000314C
    // 0x60002EC8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_6000314C;
    // 0x60002EC8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_60002ECC:
    // 0x60002ECC: jal         0x60000340
    // 0x60002ED0: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_16;
    // 0x60002ED0: nop

    after_16:
    // 0x60002ED4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002ED8: lwc1        $f13, -0x69E8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X69E8);
    // 0x60002EDC: lwc1        $f12, -0x69E4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X69E4);
    // 0x60002EE0: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002EE4: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002EE8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002EEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002EF0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002EF4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002EF8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60002EFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002F00: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002F04: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x60002F08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002F0C: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x60002F10: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60002F14: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x60002F18: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x60002F1C: nop

    // 0x60002F20: bc1f        L_60002F80
    if (!c1cs) {
        // 0x60002F24: nop
    
            goto L_60002F80;
    }
    // 0x60002F24: nop

    // 0x60002F28: jal         0x60000340
    // 0x60002F2C: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_17;
    // 0x60002F2C: nop

    after_17:
    // 0x60002F30: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002F34: lwc1        $f13, -0x69D8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X69D8);
    // 0x60002F38: lwc1        $f12, -0x69D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X69D4);
    // 0x60002F3C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002F40: lwc1        $f15, -0x69D0($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X69D0);
    // 0x60002F44: lwc1        $f14, -0x69CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X69CC);
    // 0x60002F48: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002F4C: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002F50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002F54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002F58: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002F5C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002F60: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x60002F64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002F68: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002F6C: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x60002F70: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60002F74: add.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f4.d + ctx->f18.d;
    // 0x60002F78: b           L_60002FC4
    // 0x60002F7C: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
        goto L_60002FC4;
    // 0x60002F7C: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
L_60002F80:
    // 0x60002F80: jal         0x60000340
    // 0x60002F84: nop

    ovl_stage_world8_340(rdram, ctx);
        goto after_18;
    // 0x60002F84: nop

    after_18:
    // 0x60002F88: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002F8C: lwc1        $f13, -0x69C8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X69C8);
    // 0x60002F90: lwc1        $f12, -0x69C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X69C4);
    // 0x60002F94: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002F98: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60002F9C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002FA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002FA4: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002FA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002FAC: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x60002FB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002FB4: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002FB8: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x60002FBC: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x60002FC0: add.d       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f10.d + ctx->f8.d;
L_60002FC4:
    // 0x60002FC4: cvt.s.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f6.fl = CVT_S_D(ctx->f2.d);
    // 0x60002FC8: b           L_6000314C
    // 0x60002FCC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_6000314C;
    // 0x60002FCC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_60002FD0:
    // 0x60002FD0: jal         0x60001B34
    // 0x60002FD4: nop

    ovl_stage_world8_1B34(rdram, ctx);
        goto after_19;
    // 0x60002FD4: nop

    after_19:
    // 0x60002FD8: b           L_60003150
    // 0x60002FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60002FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002FE0:
    // 0x60002FE0: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60002FE4: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x60002FE8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60002FEC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002FF0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x60002FF4: beq         $t9, $zero, L_60003054
    if (ctx->r25 == 0) {
        // 0x60002FF8: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_60003054;
    }
    // 0x60002FF8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60002FFC: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60003000: addiu       $v0, $v0, -0x67BC
    ctx->r2 = ADD32(ctx->r2, -0X67BC);
    // 0x60003004: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60003008: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x6000300C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60003010: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60003014: lui         $a2, 0x4475
    ctx->r6 = S32(0X4475 << 16);
    // 0x60003018: lui         $a3, 0x44AF
    ctx->r7 = S32(0X44AF << 16);
    // 0x6000301C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x60003020: jal         0x600028FC
    // 0x60003024: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world8_28FC(rdram, ctx);
        goto after_20;
    // 0x60003024: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_20:
    // 0x60003028: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x6000302C: beq         $v0, $zero, L_60003044
    if (ctx->r2 == 0) {
        // 0x60003030: nop
    
            goto L_60003044;
    }
    // 0x60003030: nop

    // 0x60003034: jal         0x6000222C
    // 0x60003038: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_21;
    // 0x60003038: nop

    after_21:
    // 0x6000303C: b           L_60003150
    // 0x60003040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60003040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003044:
    // 0x60003044: jal         0x6000177C
    // 0x60003048: nop

    ovl_stage_world8_177C(rdram, ctx);
        goto after_22;
    // 0x60003048: nop

    after_22:
    // 0x6000304C: b           L_60003150
    // 0x60003050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60003050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003054:
    // 0x60003054: jal         0x6000222C
    // 0x60003058: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_23;
    // 0x60003058: nop

    after_23:
    // 0x6000305C: b           L_60003150
    // 0x60003060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60003060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003064:
    // 0x60003064: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60003068: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x6000306C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60003070: nop

    // 0x60003074: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x60003078: beq         $t2, $zero, L_60003090
    if (ctx->r10 == 0) {
        // 0x6000307C: sw          $t2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r10;
            goto L_60003090;
    }
    // 0x6000307C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60003080: jal         0x6000175C
    // 0x60003084: nop

    ovl_stage_world8_175C(rdram, ctx);
        goto after_24;
    // 0x60003084: nop

    after_24:
    // 0x60003088: b           L_60003150
    // 0x6000308C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x6000308C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003090:
    // 0x60003090: jal         0x6000222C
    // 0x60003094: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_25;
    // 0x60003094: nop

    after_25:
    // 0x60003098: b           L_60003150
    // 0x6000309C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x6000309C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600030A0:
    // 0x600030A0: lw          $t4, -0x674C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X674C);
    // 0x600030A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600030A8: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x600030AC: beq         $t5, $zero, L_600030BC
    if (ctx->r13 == 0) {
        // 0x600030B0: nop
    
            goto L_600030BC;
    }
    // 0x600030B0: nop

    // 0x600030B4: b           L_600030BC
    // 0x600030B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_600030BC;
    // 0x600030B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600030BC:
    // 0x600030BC: bne         $v0, $zero, L_6000314C
    if (ctx->r2 != 0) {
        // 0x600030C0: lui         $v0, 0x6001
        ctx->r2 = S32(0X6001 << 16);
            goto L_6000314C;
    }
    // 0x600030C0: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x600030C4: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x600030C8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600030CC: nop

    // 0x600030D0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x600030D4: beq         $t7, $zero, L_600030EC
    if (ctx->r15 == 0) {
        // 0x600030D8: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_600030EC;
    }
    // 0x600030D8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600030DC: jal         0x60001738
    // 0x600030E0: nop

    ovl_stage_world8_1738(rdram, ctx);
        goto after_26;
    // 0x600030E0: nop

    after_26:
    // 0x600030E4: b           L_60003150
    // 0x600030E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x600030E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600030EC:
    // 0x600030EC: jal         0x6000222C
    // 0x600030F0: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_27;
    // 0x600030F0: nop

    after_27:
    // 0x600030F4: b           L_60003150
    // 0x600030F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x600030F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600030FC:
    // 0x600030FC: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60003100: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x60003104: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x60003108: nop

    // 0x6000310C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x60003110: beq         $t0, $zero, L_60003144
    if (ctx->r8 == 0) {
        // 0x60003114: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_60003144;
    }
    // 0x60003114: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x60003118: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x6000311C: beq         $at, $zero, L_60003134
    if (ctx->r1 == 0) {
        // 0x60003120: nop
    
            goto L_60003134;
    }
    // 0x60003120: nop

    // 0x60003124: jal         0x60001738
    // 0x60003128: nop

    ovl_stage_world8_1738(rdram, ctx);
        goto after_28;
    // 0x60003128: nop

    after_28:
    // 0x6000312C: b           L_60003150
    // 0x60003130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60003130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003134:
    // 0x60003134: jal         0x6000177C
    // 0x60003138: nop

    ovl_stage_world8_177C(rdram, ctx);
        goto after_29;
    // 0x60003138: nop

    after_29:
    // 0x6000313C: b           L_60003150
    // 0x60003140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60003150;
    // 0x60003140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003144:
    // 0x60003144: jal         0x6000222C
    // 0x60003148: nop

    ovl_stage_world8_222C(rdram, ctx);
        goto after_30;
    // 0x60003148: nop

    after_30:
L_6000314C:
    // 0x6000314C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60003150:
    // 0x60003150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003154: jr          $ra
    // 0x60003158: nop

    return;
    // 0x60003158: nop

;}
RECOMP_FUNC void ovl_stage_world8_315C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000315C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003160: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60003164: addiu       $a2, $a2, -0x6748
    ctx->r6 = ADD32(ctx->r6, -0X6748);
    // 0x60003168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000316C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60003170: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x60003174: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003178: jal         0x60000808
    // 0x6000317C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_808(rdram, ctx);
        goto after_0;
    // 0x6000317C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60003180: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60003184: addiu       $a2, $a2, -0x6748
    ctx->r6 = ADD32(ctx->r6, -0X6748);
    // 0x60003188: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x6000318C: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x60003190: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x60003194: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x60003198: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x6000319C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600031A0: jal         0x60000808
    // 0x600031A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_808(rdram, ctx);
        goto after_1;
    // 0x600031A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600031A8: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x600031AC: addiu       $v0, $v0, -0x67B4
    ctx->r2 = ADD32(ctx->r2, -0X67B4);
    // 0x600031B0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x600031B4: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x600031B8: lw          $t8, -0x6754($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6754);
    // 0x600031BC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600031C0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x600031C4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x600031C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600031CC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x600031D0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600031D4: lw          $a0, -0x6B50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6B50);
    // 0x600031D8: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600031DC: sw          $zero, -0x67B8($at)
    MEM_W(-0X67B8, ctx->r1) = 0;
    // 0x600031E0: addiu       $a2, $a2, -0x67B0
    ctx->r6 = ADD32(ctx->r6, -0X67B0);
    // 0x600031E4: jal         0x600006C4
    // 0x600031E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x600031E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x600031EC: jal         0x60000DE4
    // 0x600031F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_3;
    // 0x600031F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x600031F4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600031F8: addiu       $a2, $a2, -0x6790
    ctx->r6 = ADD32(ctx->r6, -0X6790);
    // 0x600031FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003200: jal         0x600006C4
    // 0x60003204: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60003204: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60003208: jal         0x60001544
    // 0x6000320C: nop

    ovl_stage_world8_1544(rdram, ctx);
        goto after_5;
    // 0x6000320C: nop

    after_5:
    // 0x60003210: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003214: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60003218: sw          $zero, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = 0;
    // 0x6000321C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003220: swc1        $f4, -0x67BC($at)
    MEM_W(-0X67BC, ctx->r1) = ctx->f4.u32l;
    // 0x60003224: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003228: sw          $zero, -0x675C($at)
    MEM_W(-0X675C, ctx->r1) = 0;
    // 0x6000322C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003230: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x60003234: sw          $t0, -0x6758($at)
    MEM_W(-0X6758, ctx->r1) = ctx->r8;
    // 0x60003238: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000323C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60003240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003244: sw          $t1, -0x67D8($at)
    MEM_W(-0X67D8, ctx->r1) = ctx->r9;
    // 0x60003248: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000324C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60003250: sw          $t2, -0x67D4($at)
    MEM_W(-0X67D4, ctx->r1) = ctx->r10;
    // 0x60003254: jr          $ra
    // 0x60003258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60003258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world8_325C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000325C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003260: beq         $a0, $zero, L_600032E8
    if (ctx->r4 == 0) {
        // 0x60003264: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_600032E8;
    }
    // 0x60003264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003268: jal         0x60000DE4
    // 0x6000326C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x6000326C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60003270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003274: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60003278: jal         0x600006C4
    // 0x6000327C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x6000327C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60003280: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60003284: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003288: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x6000328C: jal         0x60000DE4
    // 0x60003290: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_2;
    // 0x60003290: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x60003294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003298: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000329C: jal         0x600006C4
    // 0x600032A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x600032A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600032A4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600032A8: addiu       $a2, $a2, -0x6730
    ctx->r6 = ADD32(ctx->r6, -0X6730);
    // 0x600032AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600032B0: jal         0x60000808
    // 0x600032B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_808(rdram, ctx);
        goto after_4;
    // 0x600032B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600032B8: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x600032BC: lw          $t8, -0x6730($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6730);
    // 0x600032C0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600032C4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600032C8: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x600032CC: sw          $t9, -0x6730($at)
    MEM_W(-0X6730, ctx->r1) = ctx->r25;
    // 0x600032D0: addiu       $a2, $a2, -0x6730
    ctx->r6 = ADD32(ctx->r6, -0X6730);
    // 0x600032D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600032D8: jal         0x60000808
    // 0x600032DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_808(rdram, ctx);
        goto after_5;
    // 0x600032DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x600032E0: b           L_6000336C
    // 0x600032E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000336C;
    // 0x600032E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600032E8:
    // 0x600032E8: jal         0x60000DE4
    // 0x600032EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_6;
    // 0x600032EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x600032F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600032F4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600032F8: jal         0x600006C4
    // 0x600032FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x600032FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60003300: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60003304: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60003308: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x6000330C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60003310: jal         0x60000DE4
    // 0x60003314: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_8;
    // 0x60003314: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60003318: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000331C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003320: jal         0x600006C4
    // 0x60003324: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_9;
    // 0x60003324: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60003328: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000332C: addiu       $a2, $a2, -0x6730
    ctx->r6 = ADD32(ctx->r6, -0X6730);
    // 0x60003330: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003334: jal         0x60000808
    // 0x60003338: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_808(rdram, ctx);
        goto after_10;
    // 0x60003338: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x6000333C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60003340: lw          $t2, -0x6730($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X6730);
    // 0x60003344: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60003348: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x6000334C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003350: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60003354: sw          $t3, -0x6730($at)
    MEM_W(-0X6730, ctx->r1) = ctx->r11;
    // 0x60003358: addiu       $a2, $a2, -0x6730
    ctx->r6 = ADD32(ctx->r6, -0X6730);
    // 0x6000335C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003360: jal         0x60000808
    // 0x60003364: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_808(rdram, ctx);
        goto after_11;
    // 0x60003364: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60003368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000336C:
    // 0x6000336C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003370: jr          $ra
    // 0x60003374: nop

    return;
    // 0x60003374: nop

;}
RECOMP_FUNC void ovl_stage_world8_3378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003378: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x6000337C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60003380: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60003384: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60003388: jal         0x60000C1C
    // 0x6000338C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x6000338C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003390: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003394: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003398: jal         0x60001064
    // 0x6000339C: sw          $zero, -0x6754($at)
    MEM_W(-0X6754, ctx->r1) = 0;
    ovl_stage_world8_1064(rdram, ctx);
        goto after_1;
    // 0x6000339C: sw          $zero, -0x6754($at)
    MEM_W(-0X6754, ctx->r1) = 0;
    after_1:
    // 0x600033A0: jal         0x60000BB0
    // 0x600033A4: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600033A4: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_2:
    // 0x600033A8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033AC: nop
    
            goto L_60003420;
    }
    // 0x600033AC: nop

    // 0x600033B0: jal         0x60000BB0
    // 0x600033B4: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600033B4: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_3:
    // 0x600033B8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033BC: nop
    
            goto L_60003420;
    }
    // 0x600033BC: nop

    // 0x600033C0: jal         0x60000BB0
    // 0x600033C4: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x600033C4: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_4:
    // 0x600033C8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033CC: nop
    
            goto L_60003420;
    }
    // 0x600033CC: nop

    // 0x600033D0: jal         0x60000BB0
    // 0x600033D4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x600033D4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_5:
    // 0x600033D8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033DC: nop
    
            goto L_60003420;
    }
    // 0x600033DC: nop

    // 0x600033E0: jal         0x60000BB0
    // 0x600033E4: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_6;
    // 0x600033E4: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    after_6:
    // 0x600033E8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033EC: nop
    
            goto L_60003420;
    }
    // 0x600033EC: nop

    // 0x600033F0: jal         0x60000BB0
    // 0x600033F4: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x600033F4: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    after_7:
    // 0x600033F8: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x600033FC: nop
    
            goto L_60003420;
    }
    // 0x600033FC: nop

    // 0x60003400: jal         0x60000BB0
    // 0x60003404: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_8;
    // 0x60003404: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_8:
    // 0x60003408: beq         $v0, $zero, L_60003420
    if (ctx->r2 == 0) {
        // 0x6000340C: nop
    
            goto L_60003420;
    }
    // 0x6000340C: nop

    // 0x60003410: jal         0x60000A60
    // 0x60003414: addiu       $a0, $zero, 0xADD
    ctx->r4 = ADD32(0, 0XADD);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_9;
    // 0x60003414: addiu       $a0, $zero, 0xADD
    ctx->r4 = ADD32(0, 0XADD);
    after_9:
    // 0x60003418: b           L_60003438
    // 0x6000341C: nop

        goto L_60003438;
    // 0x6000341C: nop

L_60003420:
    // 0x60003420: jal         0x60000A60
    // 0x60003424: addiu       $a0, $zero, 0xADE
    ctx->r4 = ADD32(0, 0XADE);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_10;
    // 0x60003424: addiu       $a0, $zero, 0xADE
    ctx->r4 = ADD32(0, 0XADE);
    after_10:
    // 0x60003428: jal         0x60000B98
    // 0x6000342C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_11;
    // 0x6000342C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_11:
    // 0x60003430: jal         0x60000B98
    // 0x60003434: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x60003434: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_12:
L_60003438:
    // 0x60003438: jal         0x60001064
    // 0x6000343C: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_13;
    // 0x6000343C: nop

    after_13:
    // 0x60003440: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60003444: lw          $t6, -0x6754($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6754);
    // 0x60003448: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x6000344C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x60003450: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x60003454: addiu       $s1, $s1, -0x6B50
    ctx->r17 = ADD32(ctx->r17, -0X6B50);
    // 0x60003458: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x6000345C: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x60003460: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x60003464: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60003468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000346C: jal         0x600006C4
    // 0x60003470: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_14;
    // 0x60003470: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x60003474: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60003478: lw          $t0, -0x6754($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6754);
    // 0x6000347C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x60003480: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x60003484: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x60003488: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x6000348C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003490: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x60003494: addiu       $t9, $zero, -0xA6
    ctx->r25 = ADD32(0, -0XA6);
    // 0x60003498: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x6000349C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x600034A0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x600034A4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600034A8: jal         0x600006C4
    // 0x600034AC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_15;
    // 0x600034AC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x600034B0: jal         0x60000BA4
    // 0x600034B4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_16;
    // 0x600034B4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_16:
    // 0x600034B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600034BC: jal         0x60000E68
    // 0x600034C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_17;
    // 0x600034C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x600034C4: jal         0x60000B98
    // 0x600034C8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_18;
    // 0x600034C8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_18:
    // 0x600034CC: jal         0x60000BA4
    // 0x600034D0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_19;
    // 0x600034D0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_19:
    // 0x600034D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600034D8: jal         0x60000E68
    // 0x600034DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_20;
    // 0x600034DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x600034E0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600034E4: jal         0x60000E68
    // 0x600034E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_21;
    // 0x600034E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x600034EC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600034F0: jal         0x60000E68
    // 0x600034F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_22;
    // 0x600034F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x600034F8: jal         0x60000B98
    // 0x600034FC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_23;
    // 0x600034FC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_23:
    // 0x60003500: jal         0x60000FAC
    // 0x60003504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_FAC(rdram, ctx);
        goto after_24;
    // 0x60003504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_24:
    // 0x60003508: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x6000350C: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60003510: sll         $t4, $t3, 9
    ctx->r12 = S32(ctx->r11 << 9);
    // 0x60003514: bgez        $t4, L_60003538
    if (SIGNED(ctx->r12) >= 0) {
        // 0x60003518: nop
    
            goto L_60003538;
    }
    // 0x60003518: nop

L_6000351C:
    // 0x6000351C: jal         0x600009D0
    // 0x60003520: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_25;
    // 0x60003520: nop

    after_25:
    // 0x60003524: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x60003528: nop

    // 0x6000352C: and         $t6, $t5, $s0
    ctx->r14 = ctx->r13 & ctx->r16;
    // 0x60003530: bne         $t6, $zero, L_6000351C
    if (ctx->r14 != 0) {
        // 0x60003534: nop
    
            goto L_6000351C;
    }
    // 0x60003534: nop

L_60003538:
    // 0x60003538: jal         0x600009D0
    // 0x6000353C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_26;
    // 0x6000353C: nop

    after_26:
    // 0x60003540: jal         0x6000325C
    // 0x60003544: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_325C(rdram, ctx);
        goto after_27;
    // 0x60003544: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x60003548: jal         0x600007E4
    // 0x6000354C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_7E4(rdram, ctx);
        goto after_28;
    // 0x6000354C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_28:
    // 0x60003550: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60003554: addiu       $a2, $a2, -0x6750
    ctx->r6 = ADD32(ctx->r6, -0X6750);
    // 0x60003558: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x6000355C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x60003560: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x60003564: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x60003568: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x6000356C: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x60003570: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003574: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x60003578: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x6000357C: nop

    // 0x60003580: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x60003584: nop

    // 0x60003588: ori         $t1, $t0, 0x3
    ctx->r9 = ctx->r8 | 0X3;
    // 0x6000358C: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x60003590: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x60003594: nop

    // 0x60003598: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
    // 0x6000359C: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600035A0: jal         0x600007F0
    // 0x600035A4: nop

    ovl_stage_world8_7F0(rdram, ctx);
        goto after_29;
    // 0x600035A4: nop

    after_29:
    // 0x600035A8: jal         0x6000315C
    // 0x600035AC: nop

    ovl_stage_world8_315C(rdram, ctx);
        goto after_30;
    // 0x600035AC: nop

    after_30:
    // 0x600035B0: jal         0x60000B98
    // 0x600035B4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_31;
    // 0x600035B4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_31:
    // 0x600035B8: jal         0x600009C4
    // 0x600035BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_32;
    // 0x600035BC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_32:
    // 0x600035C0: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x600035C4: addiu       $s0, $s0, -0x6748
    ctx->r16 = ADD32(ctx->r16, -0X6748);
    // 0x600035C8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_600035CC:
    // 0x600035CC: nop

    // 0x600035D0: andi        $t4, $v0, 0x2000
    ctx->r12 = ctx->r2 & 0X2000;
    // 0x600035D4: beq         $t4, $zero, L_600036E0
    if (ctx->r12 == 0) {
        // 0x600035D8: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_600036E0;
    }
    // 0x600035D8: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x600035DC: beq         $t5, $zero, L_600035F4
    if (ctx->r13 == 0) {
        // 0x600035E0: nop
    
            goto L_600035F4;
    }
    // 0x600035E0: nop

    // 0x600035E4: jal         0x600009AC
    // 0x600035E8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_33;
    // 0x600035E8: nop

    after_33:
    // 0x600035EC: b           L_600035FC
    // 0x600035F0: nop

        goto L_600035FC;
    // 0x600035F0: nop

L_600035F4:
    // 0x600035F4: jal         0x60000A6C
    // 0x600035F8: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_34;
    // 0x600035F8: nop

    after_34:
L_600035FC:
    // 0x600035FC: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60003600: lw          $t6, -0x6754($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6754);
    // 0x60003604: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60003608: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x6000360C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x60003610: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60003614: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x60003618: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x6000361C: jal         0x600006C4
    // 0x60003620: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_35;
    // 0x60003620: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_35:
    // 0x60003624: jal         0x60000FAC
    // 0x60003628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_FAC(rdram, ctx);
        goto after_36;
    // 0x60003628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_36:
    // 0x6000362C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60003630: lw          $t9, -0x6750($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6750);
    // 0x60003634: nop

    // 0x60003638: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x6000363C: nop

    // 0x60003640: beq         $t0, $zero, L_60003670
    if (ctx->r8 == 0) {
        // 0x60003644: nop
    
            goto L_60003670;
    }
    // 0x60003644: nop

    // 0x60003648: jal         0x60000DE4
    // 0x6000364C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_37;
    // 0x6000364C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_37:
    // 0x60003650: jal         0x60000CC4
    // 0x60003654: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_38;
    // 0x60003654: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_38:
    // 0x60003658: jal         0x60000B98
    // 0x6000365C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_39;
    // 0x6000365C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_39:
    // 0x60003660: jal         0x60000A60
    // 0x60003664: addiu       $a0, $zero, 0xAE0
    ctx->r4 = ADD32(0, 0XAE0);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_40;
    // 0x60003664: addiu       $a0, $zero, 0xAE0
    ctx->r4 = ADD32(0, 0XAE0);
    after_40:
    // 0x60003668: b           L_60003680
    // 0x6000366C: nop

        goto L_60003680;
    // 0x6000366C: nop

L_60003670:
    // 0x60003670: jal         0x60000BA4
    // 0x60003674: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_41;
    // 0x60003674: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_41:
    // 0x60003678: jal         0x60000A60
    // 0x6000367C: addiu       $a0, $zero, 0xADF
    ctx->r4 = ADD32(0, 0XADF);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_42;
    // 0x6000367C: addiu       $a0, $zero, 0xADF
    ctx->r4 = ADD32(0, 0XADF);
    after_42:
L_60003680:
    // 0x60003680: jal         0x60000B98
    // 0x60003684: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_43;
    // 0x60003684: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_43:
    // 0x60003688: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x6000368C: jal         0x60000E68
    // 0x60003690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_44;
    // 0x60003690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_44:
    // 0x60003694: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60003698: jal         0x60000E68
    // 0x6000369C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_45;
    // 0x6000369C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_45:
    // 0x600036A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600036A4: jal         0x60000E68
    // 0x600036A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_46;
    // 0x600036A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_46:
    // 0x600036AC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600036B0: jal         0x60000E68
    // 0x600036B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_47;
    // 0x600036B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_47:
    // 0x600036B8: jal         0x6000325C
    // 0x600036BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_325C(rdram, ctx);
        goto after_48;
    // 0x600036BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x600036C0: jal         0x60001064
    // 0x600036C4: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_49;
    // 0x600036C4: nop

    after_49:
    // 0x600036C8: addiu       $a0, $zero, 0x89E
    ctx->r4 = ADD32(0, 0X89E);
    // 0x600036CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600036D0: jal         0x60000C10
    // 0x600036D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_50;
    // 0x600036D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_50:
    // 0x600036D8: jal         0x600009AC
    // 0x600036DC: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_51;
    // 0x600036DC: nop

    after_51:
L_600036E0:
    // 0x600036E0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x600036E4: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x600036E8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x600036EC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x600036F0: jal         0x60001544
    // 0x600036F4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world8_1544(rdram, ctx);
        goto after_52;
    // 0x600036F4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_52:
    // 0x600036F8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x600036FC: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60003700: jal         0x60000CE8
    // 0x60003704: addiu       $a1, $a1, -0x674C
    ctx->r5 = ADD32(ctx->r5, -0X674C);
    ovl_stage_world8_CE8(rdram, ctx);
        goto after_53;
    // 0x60003704: addiu       $a1, $a1, -0x674C
    ctx->r5 = ADD32(ctx->r5, -0X674C);
    after_53:
    // 0x60003708: jal         0x60002A30
    // 0x6000370C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_2A30(rdram, ctx);
        goto after_54;
    // 0x6000370C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_54:
    // 0x60003710: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x60003714: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60003718: addiu       $v1, $v1, -0x67B4
    ctx->r3 = ADD32(ctx->r3, -0X67B4);
    // 0x6000371C: addiu       $v0, $v0, -0x67B8
    ctx->r2 = ADD32(ctx->r2, -0X67B8);
    // 0x60003720: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60003724: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x60003728: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x6000372C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x60003730: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60003734: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x60003738: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000373C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003740: jal         0x60000808
    // 0x60003744: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_808(rdram, ctx);
        goto after_55;
    // 0x60003744: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_55:
    // 0x60003748: jal         0x600009D0
    // 0x6000374C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_56;
    // 0x6000374C: nop

    after_56:
    // 0x60003750: b           L_600035CC
    // 0x60003754: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
        goto L_600035CC;
    // 0x60003754: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x60003758: nop

    // 0x6000375C: nop

    // 0x60003760: nop

    // 0x60003764: nop

    // 0x60003768: nop

    // 0x6000376C: nop

    // 0x60003770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60003774: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003778: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000377C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60003780: jr          $ra
    // 0x60003784: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60003784: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_3788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003788: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x6000378C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003790: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x60003794: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x60003798: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x6000379C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x600037A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600037A4: jal         0x60000C1C
    // 0x600037A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600037A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x600037AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600037B0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600037B4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x600037B8: jal         0x60001064
    // 0x600037BC: sw          $t6, -0x6754($at)
    MEM_W(-0X6754, ctx->r1) = ctx->r14;
    ovl_stage_world8_1064(rdram, ctx);
        goto after_1;
    // 0x600037BC: sw          $t6, -0x6754($at)
    MEM_W(-0X6754, ctx->r1) = ctx->r14;
    after_1:
    // 0x600037C0: jal         0x60000E74
    // 0x600037C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x600037C4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x600037C8: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x600037CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x600037D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037D4: jal         0x600006C4
    // 0x600037D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x600037D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x600037DC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x600037E0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600037E4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x600037E8: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x600037EC: jal         0x60000E74
    // 0x600037F0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x600037F0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x600037F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037F8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600037FC: jal         0x600006C4
    // 0x60003800: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60003800: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x60003804: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003808: jal         0x60000E80
    // 0x6000380C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_6;
    // 0x6000380C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60003810: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60003814: lw          $t9, -0x6754($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6754);
    // 0x60003818: lui         $s4, 0x6001
    ctx->r20 = S32(0X6001 << 16);
    // 0x6000381C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x60003820: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x60003824: addiu       $s4, $s4, -0x6B50
    ctx->r20 = ADD32(ctx->r20, -0X6B50);
    // 0x60003828: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x6000382C: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x60003830: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x60003834: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60003838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000383C: jal         0x600006C4
    // 0x60003840: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60003840: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x60003844: jal         0x60000FAC
    // 0x60003848: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_FAC(rdram, ctx);
        goto after_8;
    // 0x60003848: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x6000384C: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x60003850: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60003854: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x60003858: bgez        $t3, L_6000387C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x6000385C: nop
    
            goto L_6000387C;
    }
    // 0x6000385C: nop

L_60003860:
    // 0x60003860: jal         0x600009D0
    // 0x60003864: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_9;
    // 0x60003864: nop

    after_9:
    // 0x60003868: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x6000386C: nop

    // 0x60003870: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x60003874: bne         $t5, $zero, L_60003860
    if (ctx->r13 != 0) {
        // 0x60003878: nop
    
            goto L_60003860;
    }
    // 0x60003878: nop

L_6000387C:
    // 0x6000387C: jal         0x600009D0
    // 0x60003880: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_10;
    // 0x60003880: nop

    after_10:
    // 0x60003884: jal         0x6000325C
    // 0x60003888: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_325C(rdram, ctx);
        goto after_11;
    // 0x60003888: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x6000388C: jal         0x600007E4
    // 0x60003890: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_7E4(rdram, ctx);
        goto after_12;
    // 0x60003890: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x60003894: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60003898: addiu       $a2, $a2, -0x6750
    ctx->r6 = ADD32(ctx->r6, -0X6750);
    // 0x6000389C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x600038A0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x600038A4: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x600038A8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600038AC: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x600038B0: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x600038B4: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x600038B8: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x600038BC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600038C0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x600038C4: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x600038C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600038CC: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x600038D0: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x600038D4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x600038D8: nop

    // 0x600038DC: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
    // 0x600038E0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600038E4: jal         0x600007F0
    // 0x600038E8: nop

    ovl_stage_world8_7F0(rdram, ctx);
        goto after_13;
    // 0x600038E8: nop

    after_13:
    // 0x600038EC: jal         0x6000315C
    // 0x600038F0: nop

    ovl_stage_world8_315C(rdram, ctx);
        goto after_14;
    // 0x600038F0: nop

    after_14:
    // 0x600038F4: jal         0x60000B98
    // 0x600038F8: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_15;
    // 0x600038F8: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    after_15:
    // 0x600038FC: jal         0x600009C4
    // 0x60003900: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_16;
    // 0x60003900: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_16:
    // 0x60003904: lui         $s2, 0x6001
    ctx->r18 = S32(0X6001 << 16);
    // 0x60003908: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x6000390C: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x60003910: addiu       $s0, $s0, -0x6748
    ctx->r16 = ADD32(ctx->r16, -0X6748);
    // 0x60003914: addiu       $s1, $s1, -0x67B8
    ctx->r17 = ADD32(ctx->r17, -0X67B8);
    // 0x60003918: addiu       $s2, $s2, -0x67B4
    ctx->r18 = ADD32(ctx->r18, -0X67B4);
    // 0x6000391C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
L_60003920:
    // 0x60003920: nop

    // 0x60003924: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x60003928: beq         $t3, $zero, L_600039F8
    if (ctx->r11 == 0) {
        // 0x6000392C: andi        $t4, $v0, 0x2
        ctx->r12 = ctx->r2 & 0X2;
            goto L_600039F8;
    }
    // 0x6000392C: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x60003930: beq         $t4, $zero, L_60003948
    if (ctx->r12 == 0) {
        // 0x60003934: nop
    
            goto L_60003948;
    }
    // 0x60003934: nop

    // 0x60003938: jal         0x600009AC
    // 0x6000393C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_17;
    // 0x6000393C: nop

    after_17:
    // 0x60003940: b           L_60003950
    // 0x60003944: nop

        goto L_60003950;
    // 0x60003944: nop

L_60003948:
    // 0x60003948: jal         0x60000A6C
    // 0x6000394C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_18;
    // 0x6000394C: nop

    after_18:
L_60003950:
    // 0x60003950: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60003954: lw          $t5, -0x6754($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X6754);
    // 0x60003958: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x6000395C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x60003960: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x60003964: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003968: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x6000396C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x60003970: jal         0x600006C4
    // 0x60003974: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_19;
    // 0x60003974: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_19:
    // 0x60003978: jal         0x60000E74
    // 0x6000397C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_20;
    // 0x6000397C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_20:
    // 0x60003980: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003984: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003988: jal         0x600006C4
    // 0x6000398C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_21;
    // 0x6000398C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_21:
    // 0x60003990: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x60003994: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003998: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x6000399C: jal         0x60000E74
    // 0x600039A0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_22;
    // 0x600039A0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    after_22:
    // 0x600039A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600039A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600039AC: jal         0x600006C4
    // 0x600039B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_23;
    // 0x600039B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_23:
    // 0x600039B4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600039B8: jal         0x60000E80
    // 0x600039BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E80(rdram, ctx);
        goto after_24;
    // 0x600039BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x600039C0: jal         0x60000A60
    // 0x600039C4: addiu       $a0, $zero, 0xAE3
    ctx->r4 = ADD32(0, 0XAE3);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_25;
    // 0x600039C4: addiu       $a0, $zero, 0xAE3
    ctx->r4 = ADD32(0, 0XAE3);
    after_25:
    // 0x600039C8: jal         0x60000B98
    // 0x600039CC: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_26;
    // 0x600039CC: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_26:
    // 0x600039D0: jal         0x60001064
    // 0x600039D4: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_27;
    // 0x600039D4: nop

    after_27:
    // 0x600039D8: jal         0x600009C4
    // 0x600039DC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_28;
    // 0x600039DC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_28:
    // 0x600039E0: addiu       $a0, $zero, 0x8BB
    ctx->r4 = ADD32(0, 0X8BB);
    // 0x600039E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600039E8: jal         0x60000C10
    // 0x600039EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_29;
    // 0x600039EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x600039F0: jal         0x600009AC
    // 0x600039F4: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_30;
    // 0x600039F4: nop

    after_30:
L_600039F8:
    // 0x600039F8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x600039FC: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x60003A00: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x60003A04: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x60003A08: jal         0x60001544
    // 0x60003A0C: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world8_1544(rdram, ctx);
        goto after_31;
    // 0x60003A0C: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_31:
    // 0x60003A10: lw          $a0, 0x1C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X1C);
    // 0x60003A14: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60003A18: jal         0x60000CE8
    // 0x60003A1C: addiu       $a1, $a1, -0x674C
    ctx->r5 = ADD32(ctx->r5, -0X674C);
    ovl_stage_world8_CE8(rdram, ctx);
        goto after_32;
    // 0x60003A1C: addiu       $a1, $a1, -0x674C
    ctx->r5 = ADD32(ctx->r5, -0X674C);
    after_32:
    // 0x60003A20: jal         0x60002A30
    // 0x60003A24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_2A30(rdram, ctx);
        goto after_33;
    // 0x60003A24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_33:
    // 0x60003A28: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x60003A2C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x60003A30: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x60003A34: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x60003A38: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x60003A3C: sw          $t3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r11;
    // 0x60003A40: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003A44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003A48: jal         0x60000808
    // 0x60003A4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_808(rdram, ctx);
        goto after_34;
    // 0x60003A4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_34:
    // 0x60003A50: jal         0x600009D0
    // 0x60003A54: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_35;
    // 0x60003A54: nop

    after_35:
    // 0x60003A58: b           L_60003920
    // 0x60003A5C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
        goto L_60003920;
    // 0x60003A5C: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x60003A60: nop

    // 0x60003A64: nop

    // 0x60003A68: nop

    // 0x60003A6C: nop

    // 0x60003A70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003A74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60003A78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60003A7C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60003A80: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60003A84: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x60003A88: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x60003A8C: jr          $ra
    // 0x60003A90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003A90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_3A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A9C: jal         0x60000C1C
    // 0x60003AA0: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60003AA0: nop

    after_0:
    // 0x60003AA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60003AA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60003AAC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x60003AB0: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60003AB4: nop

    // 0x60003AB8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60003ABC: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x60003AC0: beq         $at, $zero, L_60003BA8
    if (ctx->r1 == 0) {
        // 0x60003AC4: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_60003BA8;
    }
    // 0x60003AC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003AC8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003ACC: addu        $at, $at, $t8
    gpr jr_addend_60003AD8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x60003AD0: lw          $t8, -0x69C0($at)
    ctx->r24 = ADD32(ctx->r1, -0X69C0);
    // 0x60003AD4: nop

    // 0x60003AD8: jr          $t8
    // 0x60003ADC: nop

    switch (jr_addend_60003AD8 >> 2) {
        case 0: goto L_60003AE0; break;
        case 1: goto L_60003AF0; break;
        case 2: goto L_60003B20; break;
        case 3: goto L_60003B50; break;
        case 4: goto L_60003B60; break;
        case 5: goto L_60003B90; break;
        case 6: goto L_60003BA0; break;
        default: switch_error(__func__, 0x60003AD8, 0x60009640);
    }
    // 0x60003ADC: nop

L_60003AE0:
    // 0x60003AE0: jal         0x60000A60
    // 0x60003AE4: addiu       $a0, $zero, 0xAB8
    ctx->r4 = ADD32(0, 0XAB8);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_1;
    // 0x60003AE4: addiu       $a0, $zero, 0xAB8
    ctx->r4 = ADD32(0, 0XAB8);
    after_1:
    // 0x60003AE8: b           L_60003BAC
    // 0x60003AEC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003AEC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003AF0:
    // 0x60003AF0: jal         0x60000BB0
    // 0x60003AF4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60003AF4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_2:
    // 0x60003AF8: beq         $v0, $zero, L_60003B10
    if (ctx->r2 == 0) {
        // 0x60003AFC: nop
    
            goto L_60003B10;
    }
    // 0x60003AFC: nop

    // 0x60003B00: jal         0x60000A60
    // 0x60003B04: addiu       $a0, $zero, 0xABF
    ctx->r4 = ADD32(0, 0XABF);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_3;
    // 0x60003B04: addiu       $a0, $zero, 0xABF
    ctx->r4 = ADD32(0, 0XABF);
    after_3:
    // 0x60003B08: b           L_60003BAC
    // 0x60003B0C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B0C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B10:
    // 0x60003B10: jal         0x60000A60
    // 0x60003B14: addiu       $a0, $zero, 0xABE
    ctx->r4 = ADD32(0, 0XABE);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_4;
    // 0x60003B14: addiu       $a0, $zero, 0xABE
    ctx->r4 = ADD32(0, 0XABE);
    after_4:
    // 0x60003B18: b           L_60003BAC
    // 0x60003B1C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B1C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B20:
    // 0x60003B20: jal         0x60000BB0
    // 0x60003B24: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60003B24: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_5:
    // 0x60003B28: beq         $v0, $zero, L_60003B40
    if (ctx->r2 == 0) {
        // 0x60003B2C: nop
    
            goto L_60003B40;
    }
    // 0x60003B2C: nop

    // 0x60003B30: jal         0x60000A60
    // 0x60003B34: addiu       $a0, $zero, 0xAC6
    ctx->r4 = ADD32(0, 0XAC6);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_6;
    // 0x60003B34: addiu       $a0, $zero, 0xAC6
    ctx->r4 = ADD32(0, 0XAC6);
    after_6:
    // 0x60003B38: b           L_60003BAC
    // 0x60003B3C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B3C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B40:
    // 0x60003B40: jal         0x60000A60
    // 0x60003B44: addiu       $a0, $zero, 0xAC5
    ctx->r4 = ADD32(0, 0XAC5);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_7;
    // 0x60003B44: addiu       $a0, $zero, 0xAC5
    ctx->r4 = ADD32(0, 0XAC5);
    after_7:
    // 0x60003B48: b           L_60003BAC
    // 0x60003B4C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B4C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B50:
    // 0x60003B50: jal         0x60000A60
    // 0x60003B54: addiu       $a0, $zero, 0xACB
    ctx->r4 = ADD32(0, 0XACB);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60003B54: addiu       $a0, $zero, 0xACB
    ctx->r4 = ADD32(0, 0XACB);
    after_8:
    // 0x60003B58: b           L_60003BAC
    // 0x60003B5C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B5C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B60:
    // 0x60003B60: jal         0x60000BB0
    // 0x60003B64: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_9;
    // 0x60003B64: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_9:
    // 0x60003B68: beq         $v0, $zero, L_60003B80
    if (ctx->r2 == 0) {
        // 0x60003B6C: addiu       $a0, $zero, 0xAD1
        ctx->r4 = ADD32(0, 0XAD1);
            goto L_60003B80;
    }
    // 0x60003B6C: addiu       $a0, $zero, 0xAD1
    ctx->r4 = ADD32(0, 0XAD1);
    // 0x60003B70: jal         0x60000A60
    // 0x60003B74: addiu       $a0, $zero, 0xAD2
    ctx->r4 = ADD32(0, 0XAD2);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_10;
    // 0x60003B74: addiu       $a0, $zero, 0xAD2
    ctx->r4 = ADD32(0, 0XAD2);
    after_10:
    // 0x60003B78: b           L_60003BAC
    // 0x60003B7C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B7C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B80:
    // 0x60003B80: jal         0x60000A60
    // 0x60003B84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_stage_world8_A60(rdram, ctx);
        goto after_11;
    // 0x60003B84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_11:
    // 0x60003B88: b           L_60003BAC
    // 0x60003B8C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B8C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003B90:
    // 0x60003B90: jal         0x60000A60
    // 0x60003B94: addiu       $a0, $zero, 0xAD7
    ctx->r4 = ADD32(0, 0XAD7);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_12;
    // 0x60003B94: addiu       $a0, $zero, 0xAD7
    ctx->r4 = ADD32(0, 0XAD7);
    after_12:
    // 0x60003B98: b           L_60003BAC
    // 0x60003B9C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
        goto L_60003BAC;
    // 0x60003B9C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003BA0:
    // 0x60003BA0: jal         0x60000A60
    // 0x60003BA4: addiu       $a0, $zero, 0xADC
    ctx->r4 = ADD32(0, 0XADC);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_13;
    // 0x60003BA4: addiu       $a0, $zero, 0xADC
    ctx->r4 = ADD32(0, 0XADC);
    after_13:
L_60003BA8:
    // 0x60003BA8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60003BAC:
    // 0x60003BAC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003BB0: beq         $t9, $zero, L_60003BC8
    if (ctx->r25 == 0) {
        // 0x60003BB4: nop
    
            goto L_60003BC8;
    }
    // 0x60003BB4: nop

    // 0x60003BB8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x60003BBC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003BC0: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x60003BC4: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
L_60003BC8:
    // 0x60003BC8: jal         0x60001064
    // 0x60003BCC: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_14;
    // 0x60003BCC: nop

    after_14:
    // 0x60003BD0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x60003BD4: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003BD8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x60003BDC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003BE0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60003BE4: jal         0x60000250
    // 0x60003BE8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    ovl_stage_world8_250(rdram, ctx);
        goto after_15;
    // 0x60003BE8: sw          $t5, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r13;
    after_15:
    // 0x60003BEC: jal         0x60000C7C
    // 0x60003BF0: nop

    ovl_stage_world8_C7C(rdram, ctx);
        goto after_16;
    // 0x60003BF0: nop

    after_16:
    // 0x60003BF4: jal         0x600009AC
    // 0x60003BF8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_17;
    // 0x60003BF8: nop

    after_17:
    // 0x60003BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003C00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003C04: jr          $ra
    // 0x60003C08: nop

    return;
    // 0x60003C08: nop

;}
RECOMP_FUNC void ovl_stage_world8_3C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C14: jal         0x60000C1C
    // 0x60003C18: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60003C18: nop

    after_0:
    // 0x60003C1C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60003C20: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60003C24: bne         $v1, $at, L_60003C40
    if (ctx->r3 != ctx->r1) {
        // 0x60003C28: nop
    
            goto L_60003C40;
    }
    // 0x60003C28: nop

    // 0x60003C2C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003C30: nop

    // 0x60003C34: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x60003C38: bltz        $t7, L_60003C7C
    if (SIGNED(ctx->r15) < 0) {
        // 0x60003C3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003C7C;
    }
    // 0x60003C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003C40:
    // 0x60003C40: blez        $v1, L_60003C4C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x60003C44: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_60003C4C;
    }
    // 0x60003C44: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x60003C48: bne         $at, $zero, L_60003C58
    if (ctx->r1 != 0) {
        // 0x60003C4C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_60003C58;
    }
L_60003C4C:
    // 0x60003C4C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60003C50: bne         $v1, $at, L_60003C7C
    if (ctx->r3 != ctx->r1) {
        // 0x60003C54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003C7C;
    }
    // 0x60003C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003C58:
    // 0x60003C58: jal         0x60000A6C
    // 0x60003C5C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_1;
    // 0x60003C5C: nop

    after_1:
    // 0x60003C60: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C64: addiu       $a0, $a0, 0x3A94
    ctx->r4 = ADD32(ctx->r4, 0X3A94);
    // 0x60003C68: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003C6C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60003C70: jal         0x60000994
    // 0x60003C74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_2;
    // 0x60003C74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003C7C:
    // 0x60003C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003C80: jr          $ra
    // 0x60003C84: nop

    return;
    // 0x60003C84: nop

;}
RECOMP_FUNC void ovl_stage_world8_3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C90: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x60003C94: jal         0x60000E80
    // 0x60003C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_0;
    // 0x60003C98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003C9C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x60003CA0: jal         0x60000E80
    // 0x60003CA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x60003CA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60003CA8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x60003CAC: jal         0x60000E80
    // 0x60003CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_2;
    // 0x60003CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60003CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003CBC: jr          $ra
    // 0x60003CC0: nop

    return;
    // 0x60003CC0: nop

;}
RECOMP_FUNC void ovl_stage_world8_3CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003CC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003CCC: jal         0x60000C1C
    // 0x60003CD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60003CD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003CD4: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60003CD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003CDC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60003CE0: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60003CE4: nop

    // 0x60003CE8: bne         $t7, $zero, L_60003E04
    if (ctx->r15 != 0) {
        // 0x60003CEC: nop
    
            goto L_60003E04;
    }
    // 0x60003CEC: nop

    // 0x60003CF0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003CF4: nop

    // 0x60003CF8: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003CFC: bne         $t9, $zero, L_60003E04
    if (ctx->r25 != 0) {
        // 0x60003D00: nop
    
            goto L_60003E04;
    }
    // 0x60003D00: nop

    // 0x60003D04: jal         0x60000BB0
    // 0x60003D08: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60003D08: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_1:
    // 0x60003D0C: bne         $v0, $zero, L_60003D9C
    if (ctx->r2 != 0) {
        // 0x60003D10: nop
    
            goto L_60003D9C;
    }
    // 0x60003D10: nop

    // 0x60003D14: jal         0x60000BB0
    // 0x60003D18: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60003D18: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    after_2:
    // 0x60003D1C: bne         $v0, $zero, L_60003D3C
    if (ctx->r2 != 0) {
        // 0x60003D20: nop
    
            goto L_60003D3C;
    }
    // 0x60003D20: nop

    // 0x60003D24: jal         0x60000B98
    // 0x60003D28: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x60003D28: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    after_3:
    // 0x60003D2C: jal         0x60000B38
    // 0x60003D30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_B38(rdram, ctx);
        goto after_4;
    // 0x60003D30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x60003D34: jal         0x60000B5C
    // 0x60003D38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_B5C(rdram, ctx);
        goto after_5;
    // 0x60003D38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
L_60003D3C:
    // 0x60003D3C: jal         0x60000B98
    // 0x60003D40: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_6;
    // 0x60003D40: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_6:
    // 0x60003D44: jal         0x60000EEC
    // 0x60003D48: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_7;
    // 0x60003D48: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_7:
    // 0x60003D4C: jal         0x60000A60
    // 0x60003D50: addiu       $a0, $zero, 0xAF0
    ctx->r4 = ADD32(0, 0XAF0);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60003D50: addiu       $a0, $zero, 0xAF0
    ctx->r4 = ADD32(0, 0XAF0);
    after_8:
    // 0x60003D54: jal         0x600009D0
    // 0x60003D58: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_9;
    // 0x60003D58: nop

    after_9:
    // 0x60003D5C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003D60: nop

    // 0x60003D64: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60003D68: beq         $t1, $zero, L_60003D8C
    if (ctx->r9 == 0) {
        // 0x60003D6C: nop
    
            goto L_60003D8C;
    }
    // 0x60003D6C: nop

L_60003D70:
    // 0x60003D70: jal         0x600009D0
    // 0x60003D74: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_10;
    // 0x60003D74: nop

    after_10:
    // 0x60003D78: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60003D7C: nop

    // 0x60003D80: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60003D84: bne         $t3, $zero, L_60003D70
    if (ctx->r11 != 0) {
        // 0x60003D88: nop
    
            goto L_60003D70;
    }
    // 0x60003D88: nop

L_60003D8C:
    // 0x60003D8C: jal         0x600009C4
    // 0x60003D90: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_11;
    // 0x60003D90: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_11:
    // 0x60003D94: b           L_60003DA4
    // 0x60003D98: nop

        goto L_60003DA4;
    // 0x60003D98: nop

L_60003D9C:
    // 0x60003D9C: jal         0x60003C88
    // 0x60003DA0: nop

    ovl_stage_world8_3C88(rdram, ctx);
        goto after_12;
    // 0x60003DA0: nop

    after_12:
L_60003DA4:
    // 0x60003DA4: jal         0x60000EE0
    // 0x60003DA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_EE0(rdram, ctx);
        goto after_13;
    // 0x60003DA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x60003DAC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60003DB0: nop

    // 0x60003DB4: beq         $v0, $t4, L_60003E0C
    if (ctx->r2 == ctx->r12) {
        // 0x60003DB8: nop
    
            goto L_60003E0C;
    }
    // 0x60003DB8: nop

    // 0x60003DBC: jal         0x60000A60
    // 0x60003DC0: addiu       $a0, $zero, 0xAF8
    ctx->r4 = ADD32(0, 0XAF8);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_14;
    // 0x60003DC0: addiu       $a0, $zero, 0xAF8
    ctx->r4 = ADD32(0, 0XAF8);
    after_14:
    // 0x60003DC4: jal         0x600009D0
    // 0x60003DC8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_15;
    // 0x60003DC8: nop

    after_15:
    // 0x60003DCC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60003DD0: nop

    // 0x60003DD4: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60003DD8: beq         $t6, $zero, L_60003E0C
    if (ctx->r14 == 0) {
        // 0x60003DDC: nop
    
            goto L_60003E0C;
    }
    // 0x60003DDC: nop

L_60003DE0:
    // 0x60003DE0: jal         0x600009D0
    // 0x60003DE4: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_16;
    // 0x60003DE4: nop

    after_16:
    // 0x60003DE8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60003DEC: nop

    // 0x60003DF0: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60003DF4: bne         $t8, $zero, L_60003DE0
    if (ctx->r24 != 0) {
        // 0x60003DF8: nop
    
            goto L_60003DE0;
    }
    // 0x60003DF8: nop

    // 0x60003DFC: b           L_60003E0C
    // 0x60003E00: nop

        goto L_60003E0C;
    // 0x60003E00: nop

L_60003E04:
    // 0x60003E04: jal         0x60003C88
    // 0x60003E08: nop

    ovl_stage_world8_3C88(rdram, ctx);
        goto after_17;
    // 0x60003E08: nop

    after_17:
L_60003E0C:
    // 0x60003E0C: jal         0x600009AC
    // 0x60003E10: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_18;
    // 0x60003E10: nop

    after_18:
    // 0x60003E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003E18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003E1C: jr          $ra
    // 0x60003E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60003E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world8_3E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003E2C: jal         0x60000C1C
    // 0x60003E30: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60003E30: nop

    after_0:
    // 0x60003E34: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003E38: nop

    // 0x60003E3C: bne         $t6, $zero, L_60003E84
    if (ctx->r14 != 0) {
        // 0x60003E40: nop
    
            goto L_60003E84;
    }
    // 0x60003E40: nop

    // 0x60003E44: jal         0x60000BB0
    // 0x60003E48: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60003E48: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    after_1:
    // 0x60003E4C: beq         $v0, $zero, L_60003E84
    if (ctx->r2 == 0) {
        // 0x60003E50: nop
    
            goto L_60003E84;
    }
    // 0x60003E50: nop

    // 0x60003E54: jal         0x60000BA4
    // 0x60003E58: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_2;
    // 0x60003E58: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    after_2:
    // 0x60003E5C: jal         0x60000BA4
    // 0x60003E60: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_3;
    // 0x60003E60: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_3:
    // 0x60003E64: jal         0x60000BA4
    // 0x60003E68: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_4;
    // 0x60003E68: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_4:
    // 0x60003E6C: jal         0x60000BA4
    // 0x60003E70: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_5;
    // 0x60003E70: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    after_5:
    // 0x60003E74: jal         0x60000BA4
    // 0x60003E78: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_6;
    // 0x60003E78: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    after_6:
    // 0x60003E7C: jal         0x60000BA4
    // 0x60003E80: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_7;
    // 0x60003E80: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_7:
L_60003E84:
    // 0x60003E84: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003E88: addiu       $a0, $a0, 0x3CC4
    ctx->r4 = ADD32(ctx->r4, 0X3CC4);
    // 0x60003E8C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003E94: jal         0x60000994
    // 0x60003E98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_8;
    // 0x60003E98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x60003E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003EA4: jr          $ra
    // 0x60003EA8: nop

    return;
    // 0x60003EA8: nop

;}
RECOMP_FUNC void ovl_stage_world8_3EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003EAC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003EB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003EB4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003EB8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003EBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003EC0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003EC4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003EC8: jal         0x60000244
    // 0x60003ECC: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    ovl_stage_world8_244(rdram, ctx);
        goto after_0;
    // 0x60003ECC: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    after_0:
    // 0x60003ED0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x60003ED4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003ED8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003EDC: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60003EE0: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_60003EE4:
    // 0x60003EE4: jal         0x60000E74
    // 0x60003EE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60003EE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60003EEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003EF0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60003EF4: jal         0x600006C4
    // 0x60003EF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60003EF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60003EFC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60003F00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003F04: jal         0x60000E74
    // 0x60003F08: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60003F08: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_3:
    // 0x60003F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003F10: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003F14: jal         0x600006C4
    // 0x60003F18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60003F18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60003F1C: jal         0x600009D0
    // 0x60003F20: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_5;
    // 0x60003F20: nop

    after_5:
    // 0x60003F24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003F28: bne         $s0, $s2, L_60003EE4
    if (ctx->r16 != ctx->r18) {
        // 0x60003F2C: nop
    
            goto L_60003EE4;
    }
    // 0x60003F2C: nop

    // 0x60003F30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003F34: jal         0x600011AC
    // 0x60003F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_6;
    // 0x60003F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60003F3C: jal         0x600009AC
    // 0x60003F40: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_7;
    // 0x60003F40: nop

    after_7:
    // 0x60003F44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003F48: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003F4C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003F50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003F54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003F58: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003F5C: jr          $ra
    // 0x60003F60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60003F60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_3F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F64: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003F68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003F6C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003F70: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003F74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003F78: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003F7C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003F80: jal         0x60000244
    // 0x60003F84: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    ovl_stage_world8_244(rdram, ctx);
        goto after_0;
    // 0x60003F84: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    after_0:
    // 0x60003F88: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003F8C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003F90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003F94: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60003F98: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_60003F9C:
    // 0x60003F9C: jal         0x60000E74
    // 0x60003FA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60003FA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60003FA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003FA8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60003FAC: jal         0x600006C4
    // 0x60003FB0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60003FB0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60003FB4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60003FB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003FBC: jal         0x60000E74
    // 0x60003FC0: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60003FC0: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_3:
    // 0x60003FC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003FC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003FCC: jal         0x600006C4
    // 0x60003FD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60003FD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60003FD4: jal         0x600009D0
    // 0x60003FD8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_5;
    // 0x60003FD8: nop

    after_5:
    // 0x60003FDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003FE0: bne         $s0, $s2, L_60003F9C
    if (ctx->r16 != ctx->r18) {
        // 0x60003FE4: nop
    
            goto L_60003F9C;
    }
    // 0x60003FE4: nop

    // 0x60003FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003FEC: jal         0x600011AC
    // 0x60003FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_6;
    // 0x60003FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60003FF4: jal         0x600009AC
    // 0x60003FF8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_7;
    // 0x60003FF8: nop

    after_7:
    // 0x60003FFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004000: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004004: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004008: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000400C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004010: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004014: jr          $ra
    // 0x60004018: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004018: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_401C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000401C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004020: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x60004024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004028: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x6000402C: jal         0x60000BB0
    // 0x60004030: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60004030: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x60004034: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60004038: bne         $v0, $zero, L_60004058
    if (ctx->r2 != 0) {
        // 0x6000403C: nop
    
            goto L_60004058;
    }
    // 0x6000403C: nop

    // 0x60004040: jal         0x60000B98
    // 0x60004044: nop

    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60004044: nop

    after_1:
    // 0x60004048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x6000404C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004050: jal         0x60000E68
    // 0x60004054: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x60004054: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    after_2:
L_60004058:
    // 0x60004058: jal         0x60000BB0
    // 0x6000405C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x6000405C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_3:
    // 0x60004060: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x60004064: nop
    
            goto L_600040E4;
    }
    // 0x60004064: nop

    // 0x60004068: jal         0x60000BB0
    // 0x6000406C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x6000406C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_4:
    // 0x60004070: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x60004074: nop
    
            goto L_600040E4;
    }
    // 0x60004074: nop

    // 0x60004078: jal         0x60000BB0
    // 0x6000407C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x6000407C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_5:
    // 0x60004080: beq         $v0, $zero, L_600040E4
    if (ctx->r2 == 0) {
        // 0x60004084: nop
    
            goto L_600040E4;
    }
    // 0x60004084: nop

    // 0x60004088: jal         0x60000BA4
    // 0x6000408C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_6;
    // 0x6000408C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_6:
    // 0x60004090: jal         0x60000BA4
    // 0x60004094: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_7;
    // 0x60004094: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_7:
    // 0x60004098: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000409C: jal         0x60000E68
    // 0x600040A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_8;
    // 0x600040A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x600040A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600040A8: jal         0x60000E68
    // 0x600040AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_9;
    // 0x600040AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x600040B0: jal         0x60000BA4
    // 0x600040B4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_10;
    // 0x600040B4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_10:
    // 0x600040B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600040BC: jal         0x600011AC
    // 0x600040C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_11;
    // 0x600040C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x600040C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600040C8: addiu       $a0, $a0, 0x3EAC
    ctx->r4 = ADD32(ctx->r4, 0X3EAC);
    // 0x600040CC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600040D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600040D4: jal         0x60000994
    // 0x600040D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_12;
    // 0x600040D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x600040DC: b           L_6000416C
    // 0x600040E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000416C;
    // 0x600040E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600040E4:
    // 0x600040E4: jal         0x60000BB0
    // 0x600040E8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x600040E8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_13:
    // 0x600040EC: bne         $v0, $zero, L_6000416C
    if (ctx->r2 != 0) {
        // 0x600040F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000416C;
    }
    // 0x600040F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600040F4: jal         0x60000BB0
    // 0x600040F8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x600040F8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_14:
    // 0x600040FC: beq         $v0, $zero, L_6000416C
    if (ctx->r2 == 0) {
        // 0x60004100: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000416C;
    }
    // 0x60004100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004104: jal         0x60000BB0
    // 0x60004108: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x60004108: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_15:
    // 0x6000410C: beq         $v0, $zero, L_6000416C
    if (ctx->r2 == 0) {
        // 0x60004110: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000416C;
    }
    // 0x60004110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004114: jal         0x60000BA4
    // 0x60004118: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_16;
    // 0x60004118: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_16:
    // 0x6000411C: jal         0x60000BA4
    // 0x60004120: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_17;
    // 0x60004120: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_17:
    // 0x60004124: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004128: jal         0x60000E68
    // 0x6000412C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_18;
    // 0x6000412C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x60004130: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004134: jal         0x60000E68
    // 0x60004138: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_19;
    // 0x60004138: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x6000413C: jal         0x60000B98
    // 0x60004140: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_20;
    // 0x60004140: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_20:
    // 0x60004144: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004148: jal         0x600011AC
    // 0x6000414C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_21;
    // 0x6000414C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x60004150: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004154: addiu       $a0, $a0, 0x3F64
    ctx->r4 = ADD32(ctx->r4, 0X3F64);
    // 0x60004158: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000415C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004160: jal         0x60000994
    // 0x60004164: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_22;
    // 0x60004164: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x60004168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000416C:
    // 0x6000416C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004170: jr          $ra
    // 0x60004174: nop

    return;
    // 0x60004174: nop

;}
RECOMP_FUNC void ovl_stage_world8_4178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004178: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x6000417C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004180: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x60004184: jal         0x60000DE4
    // 0x60004188: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60004188: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x6000418C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004190: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004194: jal         0x600006C4
    // 0x60004198: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60004198: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x6000419C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600041A0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x600041A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x600041A8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x600041AC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x600041B0: nop

    // 0x600041B4: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x600041B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x600041BC: jal         0x60000DE4
    // 0x600041C0: nop

    ovl_stage_world8_DE4(rdram, ctx);
        goto after_2;
    // 0x600041C0: nop

    after_2:
    // 0x600041C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600041C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600041CC: jal         0x600006C4
    // 0x600041D0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x600041D0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600041D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600041D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600041DC: jr          $ra
    // 0x600041E0: nop

    return;
    // 0x600041E0: nop

;}
RECOMP_FUNC void ovl_stage_world8_41E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600041E4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x600041E8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x600041EC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x600041F0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x600041F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x600041F8: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600041FC: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60004200: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60004204: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60004208: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000420C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60004210: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004214: jal         0x60000C1C
    // 0x60004218: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60004218: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000421C: jal         0x60000244
    // 0x60004220: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x60004220: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    after_1:
    // 0x60004224: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x60004228: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x6000422C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004230: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60004234: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
L_60004238:
    // 0x60004238: jal         0x60000E74
    // 0x6000423C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x6000423C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x60004240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004244: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004248: jal         0x600006C4
    // 0x6000424C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x6000424C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60004250: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60004254: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004258: jal         0x60000E74
    // 0x6000425C: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x6000425C: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_4:
    // 0x60004260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004264: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004268: jal         0x600006C4
    // 0x6000426C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x6000426C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x60004270: jal         0x600009D0
    // 0x60004274: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_6;
    // 0x60004274: nop

    after_6:
    // 0x60004278: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000427C: bne         $s0, $s2, L_60004238
    if (ctx->r16 != ctx->r18) {
        // 0x60004280: nop
    
            goto L_60004238;
    }
    // 0x60004280: nop

    // 0x60004284: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60004288: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x6000428C: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x60004290: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60004294: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60004298: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x6000429C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x600042A0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600042A4: nop

L_600042A8:
    // 0x600042A8: jal         0x60000DE4
    // 0x600042AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_7;
    // 0x600042AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x600042B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600042B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600042B8: jal         0x600006C4
    // 0x600042BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_8;
    // 0x600042BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600042C0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x600042C4: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x600042C8: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x600042CC: nop

    // 0x600042D0: bc1t        L_60004318
    if (c1cs) {
        // 0x600042D4: nop
    
            goto L_60004318;
    }
    // 0x600042D4: nop

    // 0x600042D8: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x600042DC: nop

    // 0x600042E0: bc1t        L_60004318
    if (c1cs) {
        // 0x600042E4: nop
    
            goto L_60004318;
    }
    // 0x600042E4: nop

    // 0x600042E8: c.le.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl <= ctx->f4.fl;
    // 0x600042EC: nop

    // 0x600042F0: bc1t        L_60004318
    if (c1cs) {
        // 0x600042F4: nop
    
            goto L_60004318;
    }
    // 0x600042F4: nop

    // 0x600042F8: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x600042FC: nop

    // 0x60004300: bc1t        L_60004318
    if (c1cs) {
        // 0x60004304: nop
    
            goto L_60004318;
    }
    // 0x60004304: nop

    // 0x60004308: jal         0x600009D0
    // 0x6000430C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_9;
    // 0x6000430C: nop

    after_9:
    // 0x60004310: b           L_600042A8
    // 0x60004314: nop

        goto L_600042A8;
    // 0x60004314: nop

L_60004318:
    // 0x60004318: jal         0x60000BA4
    // 0x6000431C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_10;
    // 0x6000431C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_10:
    // 0x60004320: jal         0x60000BA4
    // 0x60004324: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x60004324: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_11:
    // 0x60004328: jal         0x60000BA4
    // 0x6000432C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_12;
    // 0x6000432C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_12:
    // 0x60004330: jal         0x60000BA4
    // 0x60004334: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_13;
    // 0x60004334: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_13:
    // 0x60004338: jal         0x60000BA4
    // 0x6000433C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_14;
    // 0x6000433C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_14:
    // 0x60004340: jal         0x60000BA4
    // 0x60004344: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_15;
    // 0x60004344: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_15:
    // 0x60004348: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000434C: jal         0x60000E68
    // 0x60004350: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_16;
    // 0x60004350: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x60004354: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004358: jal         0x60000E68
    // 0x6000435C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_17;
    // 0x6000435C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x60004360: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004364: jal         0x60000E68
    // 0x60004368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_18;
    // 0x60004368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x6000436C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004370: jal         0x60000E68
    // 0x60004374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_19;
    // 0x60004374: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x60004378: jal         0x600009AC
    // 0x6000437C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_20;
    // 0x6000437C: nop

    after_20:
    // 0x60004380: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60004384: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004388: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000438C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60004390: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60004394: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60004398: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000439C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600043A0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600043A4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x600043A8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x600043AC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x600043B0: jr          $ra
    // 0x600043B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x600043B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world8_43B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600043B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600043BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600043C0: jal         0x60000BB0
    // 0x600043C4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600043C4: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_0:
    // 0x600043C8: beq         $v0, $zero, L_60004404
    if (ctx->r2 == 0) {
        // 0x600043CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004404;
    }
    // 0x600043CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600043D0: jal         0x60000BB0
    // 0x600043D4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600043D4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x600043D8: bne         $v0, $zero, L_60004404
    if (ctx->r2 != 0) {
        // 0x600043DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004404;
    }
    // 0x600043DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600043E0: jal         0x60000B98
    // 0x600043E4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x600043E4: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_2:
    // 0x600043E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600043EC: addiu       $a0, $a0, 0x41E4
    ctx->r4 = ADD32(ctx->r4, 0X41E4);
    // 0x600043F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600043F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600043F8: jal         0x60000994
    // 0x600043FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_3;
    // 0x600043FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60004400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004404:
    // 0x60004404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004408: jr          $ra
    // 0x6000440C: nop

    return;
    // 0x6000440C: nop

;}
