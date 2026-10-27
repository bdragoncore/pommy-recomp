#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world5_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world5_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60000F54: lw          $t6, 0x3B00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B00);
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
    // 0x60000F70: addiu       $s0, $t7, 0x3B00
    ctx->r16 = ADD32(ctx->r15, 0X3B00);
    // 0x60000F74: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x60000F78: nop

L_60000F7C:
    // 0x60000F7C: jal         0x60000B98
    // 0x60000F80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world5_B98(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world5_FA8(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_stage_world5_6E8(rdram, ctx);
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

    ovl_stage_world5_6C4(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world5_1028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001028: jr          $ra
    // 0x6000102C: nop

    return;
    // 0x6000102C: nop

;}
RECOMP_FUNC void ovl_stage_world5_1030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001038: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000103C: jal         0x60000C1C
    // 0x60001040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60001040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001048: jal         0x600009C4
    // 0x6000104C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_1;
    // 0x6000104C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60001050: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60001054: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x60001058: ori         $s1, $s1, 0x800
    ctx->r17 = ctx->r17 | 0X800;
    // 0x6000105C: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x60001060: beq         $t7, $zero, L_60001088
    if (ctx->r15 == 0) {
        // 0x60001064: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60001088;
    }
    // 0x60001064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001068:
    // 0x60001068: jal         0x600009D0
    // 0x6000106C: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_2;
    // 0x6000106C: nop

    after_2:
    // 0x60001070: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60001074: nop

    // 0x60001078: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x6000107C: bne         $t9, $zero, L_60001068
    if (ctx->r25 != 0) {
        // 0x60001080: nop
    
            goto L_60001068;
    }
    // 0x60001080: nop

    // 0x60001084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001088:
    // 0x60001088: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000108C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001090: jr          $ra
    // 0x60001094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60001094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world5_1098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001098: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x6000109C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600010A0: jal         0x60000C1C
    // 0x600010A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600010A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x600010A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600010AC: jal         0x600007E4
    // 0x600010B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_stage_world5_7E4(rdram, ctx);
        goto after_1;
    // 0x600010B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x600010B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x600010B8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x600010BC: beq         $t6, $zero, L_6000112C
    if (ctx->r14 == 0) {
        // 0x600010C0: lui         $t5, 0x6000
        ctx->r13 = S32(0X6000 << 16);
            goto L_6000112C;
    }
    // 0x600010C0: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x600010C4: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600010C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600010CC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x600010D0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x600010D4: sw          $t8, 0x3C34($at)
    MEM_W(0X3C34, ctx->r1) = ctx->r24;
    // 0x600010D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x600010DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x600010E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x600010E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600010E8: jal         0x600007F0
    // 0x600010EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world5_7F0(rdram, ctx);
        goto after_2;
    // 0x600010EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x600010F0: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600010F4: lw          $t0, 0x3C34($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3C34);
    // 0x600010F8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x600010FC: beq         $t0, $zero, L_60001118
    if (ctx->r8 == 0) {
        // 0x60001100: lui         $at, 0xFF7F
        ctx->r1 = S32(0XFF7F << 16);
            goto L_60001118;
    }
    // 0x60001100: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x60001104: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x60001108: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x6000110C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x60001110: b           L_60001150
    // 0x60001114: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_60001150;
    // 0x60001114: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_60001118:
    // 0x60001118: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x6000111C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001120: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x60001124: b           L_60001150
    // 0x60001128: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_60001150;
    // 0x60001128: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_6000112C:
    // 0x6000112C: lw          $t5, 0x3C34($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3C34);
    // 0x60001130: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x60001134: beq         $t5, $zero, L_60001150
    if (ctx->r13 == 0) {
        // 0x60001138: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_60001150;
    }
    // 0x60001138: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x6000113C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x60001140: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x60001144: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001148: jal         0x600007F0
    // 0x6000114C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world5_7F0(rdram, ctx);
        goto after_3;
    // 0x6000114C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
L_60001150:
    // 0x60001150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60001158: jr          $ra
    // 0x6000115C: nop

    return;
    // 0x6000115C: nop

;}
RECOMP_FUNC void ovl_stage_world5_1160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001168: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000116C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60001170: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60001174: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x60001178: jal         0x60000E74
    // 0x6000117C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_0;
    // 0x6000117C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x60001180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001184: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x60001188: jal         0x600006C4
    // 0x6000118C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x6000118C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001194: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001198: jr          $ra
    // 0x6000119C: nop

    return;
    // 0x6000119C: nop

    // 0x600011A0: jr          $ra
    // 0x600011A4: nop

    return;
    // 0x600011A4: nop

;}
RECOMP_FUNC void ovl_stage_world5_11A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600011AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011B0: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x600011B4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x600011B8: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    // 0x600011BC: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    // 0x600011C0: jal         0x60000274
    // 0x600011C4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_stage_world5_274(rdram, ctx);
        goto after_0;
    // 0x600011C4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_0:
    // 0x600011C8: jal         0x600009AC
    // 0x600011CC: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_1;
    // 0x600011CC: nop

    after_1:
    // 0x600011D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600011D8: jr          $ra
    // 0x600011DC: nop

    return;
    // 0x600011DC: nop

;}
RECOMP_FUNC void ovl_stage_world5_11E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600011E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011E8: jal         0x60000BB0
    // 0x600011EC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x600011EC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_0:
    // 0x600011F0: beq         $v0, $zero, L_60001218
    if (ctx->r2 == 0) {
        // 0x600011F4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60001218;
    }
    // 0x600011F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600011F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600011FC: addiu       $a0, $a0, 0x11A8
    ctx->r4 = ADD32(ctx->r4, 0X11A8);
    // 0x60001200: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001208: jal         0x60000994
    // 0x6000120C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_1;
    // 0x6000120C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60001210: b           L_6000123C
    // 0x60001214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000123C;
    // 0x60001214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001218:
    // 0x60001218: jal         0x60000E38
    // 0x6000121C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_E38(rdram, ctx);
        goto after_2;
    // 0x6000121C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60001220: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60001224: jal         0x600006D0
    // 0x60001228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_6D0(rdram, ctx);
        goto after_3;
    // 0x60001228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x6000122C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60001230: jal         0x600006D0
    // 0x60001234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_6D0(rdram, ctx);
        goto after_4;
    // 0x60001234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60001238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000123C:
    // 0x6000123C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001240: jr          $ra
    // 0x60001244: nop

    return;
    // 0x60001244: nop

;}
RECOMP_FUNC void ovl_stage_world5_1248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000124C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001250: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x60001254: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60001258: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    // 0x6000125C: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    // 0x60001260: jal         0x60000274
    // 0x60001264: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_stage_world5_274(rdram, ctx);
        goto after_0;
    // 0x60001264: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_0:
    // 0x60001268: jal         0x60000B98
    // 0x6000126C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_1;
    // 0x6000126C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_1:
    // 0x60001270: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001274: jal         0x60000E38
    // 0x60001278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E38(rdram, ctx);
        goto after_2;
    // 0x60001278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x6000127C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60001280: jal         0x600006D0
    // 0x60001284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world5_6D0(rdram, ctx);
        goto after_3;
    // 0x60001284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x60001288: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000128C: jal         0x600006D0
    // 0x60001290: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world5_6D0(rdram, ctx);
        goto after_4;
    // 0x60001290: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x60001294: jal         0x60000E44
    // 0x60001298: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world5_E44(rdram, ctx);
        goto after_5;
    // 0x60001298: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_5:
    // 0x6000129C: jal         0x60000E44
    // 0x600012A0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world5_E44(rdram, ctx);
        goto after_6;
    // 0x600012A0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x600012A4: jal         0x60000E44
    // 0x600012A8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world5_E44(rdram, ctx);
        goto after_7;
    // 0x600012A8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_7:
    // 0x600012AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600012B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600012B4: jr          $ra
    // 0x600012B8: nop

    return;
    // 0x600012B8: nop

;}
RECOMP_FUNC void ovl_stage_world5_12BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600012BC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600012C0: addiu       $v0, $v0, 0x3C30
    ctx->r2 = ADD32(ctx->r2, 0X3C30);
    // 0x600012C4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600012C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600012CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x600012D0: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x600012D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600012D8: bne         $at, $zero, L_600012F8
    if (ctx->r1 != 0) {
        // 0x600012DC: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_600012F8;
    }
    // 0x600012DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600012E0: jal         0x60000A60
    // 0x600012E4: addiu       $a0, $zero, 0xA79
    ctx->r4 = ADD32(0, 0XA79);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_0;
    // 0x600012E4: addiu       $a0, $zero, 0xA79
    ctx->r4 = ADD32(0, 0XA79);
    after_0:
    // 0x600012E8: jal         0x60000B98
    // 0x600012EC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_1;
    // 0x600012EC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_1:
    // 0x600012F0: jal         0x60000BA4
    // 0x600012F4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_2;
    // 0x600012F4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_2:
L_600012F8:
    // 0x600012F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600012FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001300: jr          $ra
    // 0x60001304: nop

    return;
    // 0x60001304: nop

;}
RECOMP_FUNC void ovl_stage_world5_1308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000130C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001310: jal         0x60000A60
    // 0x60001314: addiu       $a0, $zero, 0xA7E
    ctx->r4 = ADD32(0, 0XA7E);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_0;
    // 0x60001314: addiu       $a0, $zero, 0xA7E
    ctx->r4 = ADD32(0, 0XA7E);
    after_0:
    // 0x60001318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000131C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001320: jr          $ra
    // 0x60001324: nop

    return;
    // 0x60001324: nop

;}
RECOMP_FUNC void ovl_stage_world5_1328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001328: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000132C: lwc1        $f7, 0x3B60($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3B60);
    // 0x60001330: lwc1        $f6, 0x3B64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3B64);
    // 0x60001334: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001338: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x6000133C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x60001340: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001344: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60001348: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000134C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001350: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x60001354: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x60001358: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x6000135C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x60001360: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x60001364: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x60001368: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x6000136C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x60001370: jal         0x600003D0
    // 0x60001374: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world5_3D0(rdram, ctx);
        goto after_0;
    // 0x60001374: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x60001378: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000137C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001380: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x60001384: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x60001388: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x6000138C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x60001390: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001394: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001398: nop

    // 0x6000139C: bc1f        L_600013E0
    if (!c1cs) {
        // 0x600013A0: nop
    
            goto L_600013E0;
    }
    // 0x600013A0: nop

    // 0x600013A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600013A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600013AC: nop

    // 0x600013B0: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600013B4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x600013B8: nop

    // 0x600013BC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600013C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600013C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600013C8: nop

    // 0x600013CC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600013D0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x600013D4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x600013D8: b           L_60001418
    // 0x600013DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_60001418;
    // 0x600013DC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_600013E0:
    // 0x600013E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600013E4: nop

    // 0x600013E8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600013EC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x600013F0: nop

    // 0x600013F4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x600013F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600013FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001400: nop

    // 0x60001404: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x60001408: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x6000140C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60001410: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60001414: nop

L_60001418:
    // 0x60001418: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000141C: nop

    // 0x60001420: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x60001424: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001428: nop

    // 0x6000142C: bc1f        L_60001464
    if (!c1cs) {
        // 0x60001430: nop
    
            goto L_60001464;
    }
    // 0x60001430: nop

    // 0x60001434: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001438: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x6000143C: nop

    // 0x60001440: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60001444: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001448: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000144C: nop

    // 0x60001450: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001454: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x60001458: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x6000145C: b           L_60001494
    // 0x60001460: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001494;
    // 0x60001460: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_60001464:
    // 0x60001464: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001468: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x6000146C: nop

    // 0x60001470: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001474: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001478: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000147C: nop

    // 0x60001480: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001484: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x60001488: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x6000148C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x60001490: nop

L_60001494:
    // 0x60001494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001498: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000149C: jr          $ra
    // 0x600014A0: nop

    return;
    // 0x600014A0: nop

;}
RECOMP_FUNC void ovl_stage_world5_14A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600014A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600014A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600014AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600014B0: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600014B4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600014B8: addiu       $s1, $s1, 0x3C78
    ctx->r17 = ADD32(ctx->r17, 0X3C78);
    // 0x600014BC: addiu       $s0, $s0, 0x3C60
    ctx->r16 = ADD32(ctx->r16, 0X3C60);
    // 0x600014C0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600014C4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600014C8: addiu       $v1, $v1, 0x3CA0
    ctx->r3 = ADD32(ctx->r3, 0X3CA0);
    // 0x600014CC: addiu       $v0, $v0, 0x3C90
    ctx->r2 = ADD32(ctx->r2, 0X3C90);
    // 0x600014D0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600014D4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x600014D8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600014DC: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600014E0: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600014E4: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x600014E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600014EC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x600014F0: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x600014F4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x600014F8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x600014FC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x60001500: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x60001504: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001508: lw          $a0, 0x3B10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B10);
    // 0x6000150C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60001510: jal         0x600006C4
    // 0x60001514: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x60001514: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x60001518: jal         0x60000DE4
    // 0x6000151C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_1;
    // 0x6000151C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60001520: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001524: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001528: jal         0x600006C4
    // 0x6000152C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_2;
    // 0x6000152C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60001530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001534: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001538: jal         0x600003DC
    // 0x6000153C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world5_3DC(rdram, ctx);
        goto after_3;
    // 0x6000153C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x60001540: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001544: lwc1        $f13, 0x3B68($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X3B68);
    // 0x60001548: lwc1        $f12, 0x3B6C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3B6C);
    // 0x6000154C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001550: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001554: lwc1        $f9, 0x3B70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3B70);
    // 0x60001558: lwc1        $f8, 0x3B74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3B74);
    // 0x6000155C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001560: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60001564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001568: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x6000156C: nop

    // 0x60001570: bc1f        L_6000158C
    if (!c1cs) {
        // 0x60001574: nop
    
            goto L_6000158C;
    }
    // 0x60001574: nop

    // 0x60001578: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x6000157C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001580: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60001584: b           L_600015C0
    // 0x60001588: swc1        $f16, 0x3C48($at)
    MEM_W(0X3C48, ctx->r1) = ctx->f16.u32l;
        goto L_600015C0;
    // 0x60001588: swc1        $f16, 0x3C48($at)
    MEM_W(0X3C48, ctx->r1) = ctx->f16.u32l;
L_6000158C:
    // 0x6000158C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60001590: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001594: nop

    // 0x60001598: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x6000159C: nop

    // 0x600015A0: bc1f        L_600015B0
    if (!c1cs) {
        // 0x600015A4: nop
    
            goto L_600015B0;
    }
    // 0x600015A4: nop

    // 0x600015A8: b           L_600015B4
    // 0x600015AC: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_600015B4;
    // 0x600015AC: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_600015B0:
    // 0x600015B0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_600015B4:
    // 0x600015B4: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x600015B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015BC: swc1        $f4, 0x3C48($at)
    MEM_W(0X3C48, ctx->r1) = ctx->f4.u32l;
L_600015C0:
    // 0x600015C0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600015C4: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600015C8: nop

    // 0x600015CC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600015D0: nop

    // 0x600015D4: bc1f        L_600015F0
    if (!c1cs) {
        // 0x600015D8: nop
    
            goto L_600015F0;
    }
    // 0x600015D8: nop

    // 0x600015DC: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600015E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015E4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x600015E8: b           L_600015FC
    // 0x600015EC: swc1        $f8, 0x3C4C($at)
    MEM_W(0X3C4C, ctx->r1) = ctx->f8.u32l;
        goto L_600015FC;
    // 0x600015EC: swc1        $f8, 0x3C4C($at)
    MEM_W(0X3C4C, ctx->r1) = ctx->f8.u32l;
L_600015F0:
    // 0x600015F0: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600015F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015F8: swc1        $f10, 0x3C4C($at)
    MEM_W(0X3C4C, ctx->r1) = ctx->f10.u32l;
L_600015FC:
    // 0x600015FC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001600: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001604: nop

    // 0x60001608: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x6000160C: nop

    // 0x60001610: bc1f        L_6000162C
    if (!c1cs) {
        // 0x60001614: nop
    
            goto L_6000162C;
    }
    // 0x60001614: nop

    // 0x60001618: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000161C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001620: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x60001624: b           L_60001638
    // 0x60001628: swc1        $f18, 0x3C50($at)
    MEM_W(0X3C50, ctx->r1) = ctx->f18.u32l;
        goto L_60001638;
    // 0x60001628: swc1        $f18, 0x3C50($at)
    MEM_W(0X3C50, ctx->r1) = ctx->f18.u32l;
L_6000162C:
    // 0x6000162C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001630: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001634: swc1        $f4, 0x3C50($at)
    MEM_W(0X3C50, ctx->r1) = ctx->f4.u32l;
L_60001638:
    // 0x60001638: jal         0x60000418
    // 0x6000163C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world5_418(rdram, ctx);
        goto after_4;
    // 0x6000163C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x60001640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001644: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001648: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000164C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001650: swc1        $f0, 0x3C44($at)
    MEM_W(0X3C44, ctx->r1) = ctx->f0.u32l;
    // 0x60001654: jr          $ra
    // 0x60001658: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001658: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world5_165C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000165C: jr          $ra
    // 0x60001660: nop

    return;
    // 0x60001660: nop

    // 0x60001664: jr          $ra
    // 0x60001668: nop

    return;
    // 0x60001668: nop

;}
RECOMP_FUNC void ovl_stage_world5_166C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000166C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001670: addiu       $v0, $v0, 0x3CB8
    ctx->r2 = ADD32(ctx->r2, 0X3CB8);
    // 0x60001674: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x60001678: jr          $ra
    // 0x6000167C: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x6000167C: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world5_1680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001680: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001688: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000168C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001690: lw          $a0, 0x3B10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B10);
    // 0x60001694: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x60001698: jal         0x600006C4
    // 0x6000169C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x6000169C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x600016A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600016A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x600016A8: jr          $ra
    // 0x600016AC: nop

    return;
    // 0x600016AC: nop

;}
RECOMP_FUNC void ovl_stage_world5_16B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600016B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600016B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600016BC: jal         0x6000166C
    // 0x600016C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_166C(rdram, ctx);
        goto after_0;
    // 0x600016C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600016C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600016C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600016CC: jr          $ra
    // 0x600016D0: nop

    return;
    // 0x600016D0: nop

;}
RECOMP_FUNC void ovl_stage_world5_16D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600016D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600016DC: jal         0x600016B0
    // 0x600016E0: nop

    ovl_stage_world5_16B0(rdram, ctx);
        goto after_0;
    // 0x600016E0: nop

    after_0:
    // 0x600016E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600016E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600016EC: jr          $ra
    // 0x600016F0: nop

    return;
    // 0x600016F0: nop

;}
RECOMP_FUNC void ovl_stage_world5_16F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016F8: lwc1        $f12, 0x3C54($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3C54);
    // 0x600016FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001700: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60001704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001708: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x6000170C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x60001710: jal         0x60001328
    // 0x60001714: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world5_1328(rdram, ctx);
        goto after_0;
    // 0x60001714: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60001718: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x6000171C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60001720: jal         0x6000166C
    // 0x60001724: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world5_166C(rdram, ctx);
        goto after_1;
    // 0x60001724: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x60001728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000172C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001730: jr          $ra
    // 0x60001734: nop

    return;
    // 0x60001734: nop

;}
RECOMP_FUNC void ovl_stage_world5_1738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000173C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001740: jal         0x6000034C
    // 0x60001744: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_0;
    // 0x60001744: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x60001748: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x6000174C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001750: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001754: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000175C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x60001760: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001768: jr          $ra
    // 0x6000176C: swc1        $f10, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x6000176C: swc1        $f10, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world5_1770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001770: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001774: lwc1        $f4, 0x3C50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C50);
    // 0x60001778: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000177C: lwc1        $f6, 0x3C4C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3C4C);
    // 0x60001780: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001784: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001788: nop

    // 0x6000178C: bc1f        L_600017DC
    if (!c1cs) {
        // 0x60001790: nop
    
            goto L_600017DC;
    }
    // 0x60001790: nop

    // 0x60001794: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001798: lwc1        $f8, 0x3C60($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3C60);
    // 0x6000179C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017A0: lwc1        $f10, 0x3C78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3C78);
    // 0x600017A4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x600017A8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x600017AC: nop

    // 0x600017B0: bc1f        L_600017CC
    if (!c1cs) {
        // 0x600017B4: nop
    
            goto L_600017CC;
    }
    // 0x600017B4: nop

    // 0x600017B8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600017BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600017C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017C4: jr          $ra
    // 0x600017C8: swc1        $f16, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x600017C8: swc1        $f16, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f16.u32l;
L_600017CC:
    // 0x600017CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600017D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017D4: jr          $ra
    // 0x600017D8: swc1        $f18, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x600017D8: swc1        $f18, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f18.u32l;
L_600017DC:
    // 0x600017DC: lwc1        $f4, 0x3C68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C68);
    // 0x600017E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017E4: lwc1        $f6, 0x3C80($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3C80);
    // 0x600017E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600017EC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x600017F0: nop

    // 0x600017F4: bc1f        L_6000180C
    if (!c1cs) {
        // 0x600017F8: nop
    
            goto L_6000180C;
    }
    // 0x600017F8: nop

    // 0x600017FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001800: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001804: jr          $ra
    // 0x60001808: swc1        $f8, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001808: swc1        $f8, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f8.u32l;
L_6000180C:
    // 0x6000180C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001810: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001814: swc1        $f10, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f10.u32l;
    // 0x60001818: jr          $ra
    // 0x6000181C: nop

    return;
    // 0x6000181C: nop

;}
RECOMP_FUNC void ovl_stage_world5_1820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001820: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001824: lwc1        $f4, 0x3C48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C48);
    // 0x60001828: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000182C: jr          $ra
    // 0x60001830: swc1        $f4, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x60001830: swc1        $f4, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_stage_world5_1834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001834: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001838: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000183C: addiu       $v1, $v1, 0x3C90
    ctx->r3 = ADD32(ctx->r3, 0X3C90);
    // 0x60001840: addiu       $v0, $v0, 0x3C60
    ctx->r2 = ADD32(ctx->r2, 0X3C60);
    // 0x60001844: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001848: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x6000184C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001850: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001854: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001858: bc1f        L_6000186C
    if (!c1cs) {
        // 0x6000185C: nop
    
            goto L_6000186C;
    }
    // 0x6000185C: nop

    // 0x60001860: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001864: b           L_60001870
    // 0x60001868: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001870;
    // 0x60001868: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_6000186C:
    // 0x6000186C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001870:
    // 0x60001870: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001874: nop

    // 0x60001878: bc1f        L_60001900
    if (!c1cs) {
        // 0x6000187C: nop
    
            goto L_60001900;
    }
    // 0x6000187C: nop

    // 0x60001880: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x60001884: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x60001888: nop

    // 0x6000188C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001890: nop

    // 0x60001894: bc1f        L_600018A8
    if (!c1cs) {
        // 0x60001898: nop
    
            goto L_600018A8;
    }
    // 0x60001898: nop

    // 0x6000189C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018A0: b           L_600018AC
    // 0x600018A4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018AC;
    // 0x600018A4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018A8:
    // 0x600018A8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018AC:
    // 0x600018AC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018B0: nop

    // 0x600018B4: bc1f        L_60001900
    if (!c1cs) {
        // 0x600018B8: nop
    
            goto L_60001900;
    }
    // 0x600018B8: nop

    // 0x600018BC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600018C0: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600018C4: nop

    // 0x600018C8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600018CC: nop

    // 0x600018D0: bc1f        L_600018E4
    if (!c1cs) {
        // 0x600018D4: nop
    
            goto L_600018E4;
    }
    // 0x600018D4: nop

    // 0x600018D8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018DC: b           L_600018E8
    // 0x600018E0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018E8;
    // 0x600018E0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018E4:
    // 0x600018E4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018E8:
    // 0x600018E8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018EC: nop

    // 0x600018F0: bc1f        L_60001904
    if (!c1cs) {
        // 0x600018F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001904;
    }
    // 0x600018F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600018F8: jr          $ra
    // 0x600018FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x600018FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001900:
    // 0x60001900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001904:
    // 0x60001904: jr          $ra
    // 0x60001908: nop

    return;
    // 0x60001908: nop

;}
RECOMP_FUNC void ovl_stage_world5_190C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000190C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001914: jal         0x6000034C
    // 0x60001918: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_0;
    // 0x60001918: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x6000191C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001920: addiu       $v1, $v1, 0x3C38
    ctx->r3 = ADD32(ctx->r3, 0X3C38);
    // 0x60001924: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000192C: beq         $a1, $t6, L_6000193C
    if (ctx->r5 == ctx->r14) {
        // 0x60001930: slti        $at, $v0, 0x60
        ctx->r1 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
            goto L_6000193C;
    }
    // 0x60001930: slti        $at, $v0, 0x60
    ctx->r1 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x60001934: beq         $at, $zero, L_600019EC
    if (ctx->r1 == 0) {
        // 0x60001938: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_600019EC;
    }
    // 0x60001938: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
L_6000193C:
    // 0x6000193C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001940: jal         0x6000034C
    // 0x60001944: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_1;
    // 0x60001944: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60001948: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000194C: sw          $v0, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = ctx->r2;
    // 0x60001950: jal         0x6000034C
    // 0x60001954: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_2;
    // 0x60001954: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x60001958: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x6000195C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001960: sw          $t7, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r15;
    // 0x60001964: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001968: lwc1        $f4, 0x3C44($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C44);
    // 0x6000196C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001974: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001978: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x6000197C: addiu       $v1, $v1, 0x3C40
    ctx->r3 = ADD32(ctx->r3, 0X3C40);
    // 0x60001980: bc1f        L_60001990
    if (!c1cs) {
        // 0x60001984: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001990;
    }
    // 0x60001984: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001988: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x6000198C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_60001990:
    // 0x60001990: sw          $zero, 0x3C5C($at)
    MEM_W(0X3C5C, ctx->r1) = 0;
    // 0x60001994: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x60001998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000199C: beq         $v0, $zero, L_600019BC
    if (ctx->r2 == 0) {
        // 0x600019A0: nop
    
            goto L_600019BC;
    }
    // 0x600019A0: nop

    // 0x600019A4: beq         $v0, $at, L_600019CC
    if (ctx->r2 == ctx->r1) {
        // 0x600019A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600019CC;
    }
    // 0x600019A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600019AC: beq         $v0, $at, L_600019DC
    if (ctx->r2 == ctx->r1) {
        // 0x600019B0: nop
    
            goto L_600019DC;
    }
    // 0x600019B0: nop

    // 0x600019B4: b           L_60001A04
    // 0x600019B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A04;
    // 0x600019B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019BC:
    // 0x600019BC: jal         0x60001738
    // 0x600019C0: nop

    ovl_stage_world5_1738(rdram, ctx);
        goto after_3;
    // 0x600019C0: nop

    after_3:
    // 0x600019C4: b           L_60001A04
    // 0x600019C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A04;
    // 0x600019C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019CC:
    // 0x600019CC: jal         0x60001770
    // 0x600019D0: nop

    ovl_stage_world5_1770(rdram, ctx);
        goto after_4;
    // 0x600019D0: nop

    after_4:
    // 0x600019D4: b           L_60001A04
    // 0x600019D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A04;
    // 0x600019D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019DC:
    // 0x600019DC: jal         0x60001820
    // 0x600019E0: nop

    ovl_stage_world5_1820(rdram, ctx);
        goto after_5;
    // 0x600019E0: nop

    after_5:
    // 0x600019E4: b           L_60001A04
    // 0x600019E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A04;
    // 0x600019E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019EC:
    // 0x600019EC: jal         0x6000034C
    // 0x600019F0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world5_34C(rdram, ctx);
        goto after_6;
    // 0x600019F0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_6:
    // 0x600019F4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x600019F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019FC: sw          $t9, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r25;
    // 0x60001A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A04:
    // 0x60001A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A08: jr          $ra
    // 0x60001A0C: nop

    return;
    // 0x60001A0C: nop

;}
RECOMP_FUNC void ovl_stage_world5_1A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A10: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001A14: lw          $t6, 0x3CB4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3CB4);
    // 0x60001A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001A1C: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001A20: bne         $t7, $zero, L_60001A30
    if (ctx->r15 != 0) {
        // 0x60001A24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001A30;
    }
    // 0x60001A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A28: b           L_60001A34
    // 0x60001A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001A34;
    // 0x60001A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001A30:
    // 0x60001A30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001A34:
    // 0x60001A34: beq         $v0, $zero, L_60001A4C
    if (ctx->r2 == 0) {
        // 0x60001A38: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001A4C;
    }
    // 0x60001A38: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001A3C: lw          $a0, 0x3B10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B10);
    // 0x60001A40: jal         0x60000F28
    // 0x60001A44: nop

    ovl_stage_world5_F28(rdram, ctx);
        goto after_0;
    // 0x60001A44: nop

    after_0:
    // 0x60001A48: bne         $v0, $zero, L_60001A74
    if (ctx->r2 != 0) {
        // 0x60001A4C: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_60001A74;
    }
L_60001A4C:
    // 0x60001A4C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001A50: addiu       $a2, $a2, 0x3C38
    ctx->r6 = ADD32(ctx->r6, 0X3C38);
    // 0x60001A54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001A58: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x60001A5C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001A60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A64: sw          $t9, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r25;
    // 0x60001A68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A6C: b           L_60001C58
    // 0x60001A70: sw          $zero, 0x3C5C($at)
    MEM_W(0X3C5C, ctx->r1) = 0;
        goto L_60001C58;
    // 0x60001A70: sw          $zero, 0x3C5C($at)
    MEM_W(0X3C5C, ctx->r1) = 0;
L_60001A74:
    // 0x60001A74: jal         0x6000034C
    // 0x60001A78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_1;
    // 0x60001A78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x60001A7C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001A80: lw          $v1, 0x3CB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3CB0);
    // 0x60001A84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001A88: lw          $t0, 0x30($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X30);
    // 0x60001A8C: lw          $t2, 0x2C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2C);
    // 0x60001A90: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x60001A94: mflo        $t1
    ctx->r9 = lo;
    // 0x60001A98: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x60001A9C: bne         $at, $zero, L_60001B4C
    if (ctx->r1 != 0) {
        // 0x60001AA0: slti        $at, $v0, 0x29
        ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_60001B4C;
    }
    // 0x60001AA0: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x60001AA4: beq         $at, $zero, L_60001B4C
    if (ctx->r1 == 0) {
        // 0x60001AA8: nop
    
            goto L_60001B4C;
    }
    // 0x60001AA8: nop

    // 0x60001AAC: jal         0x6000034C
    // 0x60001AB0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_2;
    // 0x60001AB0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x60001AB4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x60001AB8: beq         $at, $zero, L_60001B04
    if (ctx->r1 == 0) {
        // 0x60001ABC: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001B04;
    }
    // 0x60001ABC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AC0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001AC4: addiu       $a2, $a2, 0x3C38
    ctx->r6 = ADD32(ctx->r6, 0X3C38);
    // 0x60001AC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001ACC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001AD0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x60001AD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AD8: sw          $t3, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = ctx->r11;
    // 0x60001ADC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AE4: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x60001AE8: addiu       $v1, $v1, 0x3CAC
    ctx->r3 = ADD32(ctx->r3, 0X3CAC);
    // 0x60001AEC: sw          $t4, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r12;
    // 0x60001AF0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001AF4: jal         0x60001680
    // 0x60001AF8: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    ovl_stage_world5_1680(rdram, ctx);
        goto after_3;
    // 0x60001AF8: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_3:
    // 0x60001AFC: b           L_60001C5C
    // 0x60001B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C5C;
    // 0x60001B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B04:
    // 0x60001B04: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B08: addiu       $a2, $a2, 0x3C38
    ctx->r6 = ADD32(ctx->r6, 0X3C38);
    // 0x60001B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001B10: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001B14: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x60001B18: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B1C: sw          $t5, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = ctx->r13;
    // 0x60001B20: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B24: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x60001B28: addiu       $v1, $v1, 0x3CAC
    ctx->r3 = ADD32(ctx->r3, 0X3CAC);
    // 0x60001B2C: sw          $t6, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r14;
    // 0x60001B30: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60001B34: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x60001B38: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60001B3C: jal         0x60001680
    // 0x60001B40: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    ovl_stage_world5_1680(rdram, ctx);
        goto after_4;
    // 0x60001B40: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    after_4:
    // 0x60001B44: b           L_60001C5C
    // 0x60001B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C5C;
    // 0x60001B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B4C:
    // 0x60001B4C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B50: addiu       $a2, $a2, 0x3C38
    ctx->r6 = ADD32(ctx->r6, 0X3C38);
    // 0x60001B54: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x60001B58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001B5C: beq         $a1, $t9, L_60001C50
    if (ctx->r5 == ctx->r25) {
        // 0x60001B60: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001C50;
    }
    // 0x60001B60: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001B64: addiu       $v1, $v1, 0x3CAC
    ctx->r3 = ADD32(ctx->r3, 0X3CAC);
    // 0x60001B68: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x60001B6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B70: bne         $a1, $t0, L_60001BB8
    if (ctx->r5 != ctx->r8) {
        // 0x60001B74: nop
    
            goto L_60001BB8;
    }
    // 0x60001B74: nop

    // 0x60001B78: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001B7C: lwc1        $f4, 0x3C44($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3C44);
    // 0x60001B80: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001B84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001B88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001B90: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x60001B94: bc1f        L_60001BB8
    if (!c1cs) {
        // 0x60001B98: addiu       $a0, $zero, 0x2F
        ctx->r4 = ADD32(0, 0X2F);
            goto L_60001BB8;
    }
    // 0x60001B98: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x60001B9C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001BA0: sw          $zero, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = 0;
    // 0x60001BA4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BA8: jal         0x60001680
    // 0x60001BAC: sw          $t1, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r9;
    ovl_stage_world5_1680(rdram, ctx);
        goto after_5;
    // 0x60001BAC: sw          $t1, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r9;
    after_5:
    // 0x60001BB0: b           L_60001C5C
    // 0x60001BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C5C;
    // 0x60001BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001BB8:
    // 0x60001BB8: jal         0x6000034C
    // 0x60001BBC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world5_34C(rdram, ctx);
        goto after_6;
    // 0x60001BBC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_6:
    // 0x60001BC0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001BC4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001BC8: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x60001BCC: addiu       $a2, $a2, 0x3C38
    ctx->r6 = ADD32(ctx->r6, 0X3C38);
    // 0x60001BD0: addiu       $v1, $v1, 0x3CAC
    ctx->r3 = ADD32(ctx->r3, 0X3CAC);
    // 0x60001BD4: beq         $at, $zero, L_60001C14
    if (ctx->r1 == 0) {
        // 0x60001BD8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60001C14;
    }
    // 0x60001BD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001BDC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001BE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60001BE4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BE8: sw          $t2, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = ctx->r10;
    // 0x60001BEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BF0: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001BF4: sw          $t3, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r11;
    // 0x60001BF8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60001BFC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x60001C00: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60001C04: jal         0x60001680
    // 0x60001C08: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    ovl_stage_world5_1680(rdram, ctx);
        goto after_7;
    // 0x60001C08: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    after_7:
    // 0x60001C0C: b           L_60001C5C
    // 0x60001C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C5C;
    // 0x60001C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C14:
    // 0x60001C14: slti        $at, $v0, 0x46
    ctx->r1 = SIGNED(ctx->r2) < 0X46 ? 1 : 0;
    // 0x60001C18: beq         $at, $zero, L_60001C50
    if (ctx->r1 == 0) {
        // 0x60001C1C: addiu       $t6, $zero, 0xF
        ctx->r14 = ADD32(0, 0XF);
            goto L_60001C50;
    }
    // 0x60001C1C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x60001C20: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001C24: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C28: sw          $a1, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = ctx->r5;
    // 0x60001C2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C30: sw          $t6, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r14;
    // 0x60001C34: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60001C38: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x60001C3C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60001C40: jal         0x60001680
    // 0x60001C44: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    ovl_stage_world5_1680(rdram, ctx);
        goto after_8;
    // 0x60001C44: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    after_8:
    // 0x60001C48: b           L_60001C5C
    // 0x60001C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C5C;
    // 0x60001C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C50:
    // 0x60001C50: jal         0x6000190C
    // 0x60001C54: nop

    ovl_stage_world5_190C(rdram, ctx);
        goto after_9;
    // 0x60001C54: nop

    after_9:
L_60001C58:
    // 0x60001C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C5C:
    // 0x60001C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001C60: jr          $ra
    // 0x60001C64: nop

    return;
    // 0x60001C64: nop

;}
RECOMP_FUNC void ovl_stage_world5_1C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C68: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60001C6C: addiu       $t0, $t0, 0x3C38
    ctx->r8 = ADD32(ctx->r8, 0X3C38);
    // 0x60001C70: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x60001C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001C78: beq         $v0, $zero, L_60001CA8
    if (ctx->r2 == 0) {
        // 0x60001C7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001CA8;
    }
    // 0x60001C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60001C84: beq         $v0, $a2, L_60001D60
    if (ctx->r2 == ctx->r6) {
        // 0x60001C88: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_60001D60;
    }
    // 0x60001C88: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x60001C8C: beq         $v0, $a3, L_60001D9C
    if (ctx->r2 == ctx->r7) {
        // 0x60001C90: lui         $t5, 0x6000
        ctx->r13 = S32(0X6000 << 16);
            goto L_60001D9C;
    }
    // 0x60001C90: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60001C94: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60001C98: beq         $v0, $at, L_60001E38
    if (ctx->r2 == ctx->r1) {
        // 0x60001C9C: nop
    
            goto L_60001E38;
    }
    // 0x60001C9C: nop

    // 0x60001CA0: b           L_60001E8C
    // 0x60001CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CA8:
    // 0x60001CA8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001CAC: lw          $t6, 0x3C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3C5C);
    // 0x60001CB0: nop

    // 0x60001CB4: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x60001CB8: bne         $at, $zero, L_60001CE0
    if (ctx->r1 != 0) {
        // 0x60001CBC: nop
    
            goto L_60001CE0;
    }
    // 0x60001CBC: nop

    // 0x60001CC0: jal         0x60001834
    // 0x60001CC4: nop

    ovl_stage_world5_1834(rdram, ctx);
        goto after_0;
    // 0x60001CC4: nop

    after_0:
    // 0x60001CC8: beq         $v0, $zero, L_60001CE0
    if (ctx->r2 == 0) {
        // 0x60001CCC: nop
    
            goto L_60001CE0;
    }
    // 0x60001CCC: nop

    // 0x60001CD0: jal         0x6000190C
    // 0x60001CD4: nop

    ovl_stage_world5_190C(rdram, ctx);
        goto after_1;
    // 0x60001CD4: nop

    after_1:
    // 0x60001CD8: b           L_60001E8C
    // 0x60001CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CE0:
    // 0x60001CE0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001CE4: addiu       $v0, $v0, 0x3C3C
    ctx->r2 = ADD32(ctx->r2, 0X3C3C);
    // 0x60001CE8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60001CEC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001CF0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60001CF4: beq         $t8, $zero, L_60001D50
    if (ctx->r24 == 0) {
        // 0x60001CF8: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60001D50;
    }
    // 0x60001CF8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60001CFC: addiu       $a1, $a1, 0x3C40
    ctx->r5 = ADD32(ctx->r5, 0X3C40);
    // 0x60001D00: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x60001D04: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x60001D08: bne         $a3, $t1, L_60001D40
    if (ctx->r7 != ctx->r9) {
        // 0x60001D0C: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_60001D40;
    }
    // 0x60001D0C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001D10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001D14: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D18: lwc1        $f6, 0x3C44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3C44);
    // 0x60001D1C: nop

    // 0x60001D20: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001D24: nop

    // 0x60001D28: bc1f        L_60001D40
    if (!c1cs) {
        // 0x60001D2C: nop
    
            goto L_60001D40;
    }
    // 0x60001D2C: nop

    // 0x60001D30: jal         0x60001A10
    // 0x60001D34: nop

    ovl_stage_world5_1A10(rdram, ctx);
        goto after_2;
    // 0x60001D34: nop

    after_2:
    // 0x60001D38: b           L_60001E8C
    // 0x60001D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D40:
    // 0x60001D40: jal         0x600016F4
    // 0x60001D44: nop

    ovl_stage_world5_16F4(rdram, ctx);
        goto after_3;
    // 0x60001D44: nop

    after_3:
    // 0x60001D48: b           L_60001E8C
    // 0x60001D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D50:
    // 0x60001D50: jal         0x60001A10
    // 0x60001D54: nop

    ovl_stage_world5_1A10(rdram, ctx);
        goto after_4;
    // 0x60001D54: nop

    after_4:
    // 0x60001D58: b           L_60001E8C
    // 0x60001D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D60:
    // 0x60001D60: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001D64: addiu       $v0, $v0, 0x3C3C
    ctx->r2 = ADD32(ctx->r2, 0X3C3C);
    // 0x60001D68: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x60001D6C: nop

    // 0x60001D70: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x60001D74: beq         $t3, $zero, L_60001D8C
    if (ctx->r11 == 0) {
        // 0x60001D78: sw          $t3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r11;
            goto L_60001D8C;
    }
    // 0x60001D78: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x60001D7C: jal         0x600016D4
    // 0x60001D80: nop

    ovl_stage_world5_16D4(rdram, ctx);
        goto after_5;
    // 0x60001D80: nop

    after_5:
    // 0x60001D84: b           L_60001E8C
    // 0x60001D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D8C:
    // 0x60001D8C: jal         0x60001A10
    // 0x60001D90: nop

    ovl_stage_world5_1A10(rdram, ctx);
        goto after_6;
    // 0x60001D90: nop

    after_6:
    // 0x60001D94: b           L_60001E8C
    // 0x60001D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D9C:
    // 0x60001D9C: lw          $t5, 0x3CB4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3CB4);
    // 0x60001DA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001DA4: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x60001DA8: beq         $t6, $zero, L_60001DB8
    if (ctx->r14 == 0) {
        // 0x60001DAC: nop
    
            goto L_60001DB8;
    }
    // 0x60001DAC: nop

    // 0x60001DB0: b           L_60001DB8
    // 0x60001DB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_60001DB8;
    // 0x60001DB4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_60001DB8:
    // 0x60001DB8: bne         $v0, $zero, L_60001E88
    if (ctx->r2 != 0) {
        // 0x60001DBC: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60001E88;
    }
    // 0x60001DBC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001DC0: addiu       $v0, $v0, 0x3C3C
    ctx->r2 = ADD32(ctx->r2, 0X3C3C);
    // 0x60001DC4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60001DC8: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001DCC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60001DD0: beq         $t8, $zero, L_60001DE8
    if (ctx->r24 == 0) {
        // 0x60001DD4: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60001DE8;
    }
    // 0x60001DD4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60001DD8: jal         0x600016B0
    // 0x60001DDC: nop

    ovl_stage_world5_16B0(rdram, ctx);
        goto after_7;
    // 0x60001DDC: nop

    after_7:
    // 0x60001DE0: b           L_60001E8C
    // 0x60001DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001DE8:
    // 0x60001DE8: addiu       $a1, $a1, 0x3C40
    ctx->r5 = ADD32(ctx->r5, 0X3C40);
    // 0x60001DEC: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x60001DF0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001DF4: bne         $t1, $zero, L_60001E28
    if (ctx->r9 != 0) {
        // 0x60001DF8: addiu       $v1, $v1, 0x3CAC
        ctx->r3 = ADD32(ctx->r3, 0X3CAC);
            goto L_60001E28;
    }
    // 0x60001DF8: addiu       $v1, $v1, 0x3CAC
    ctx->r3 = ADD32(ctx->r3, 0X3CAC);
    // 0x60001DFC: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x60001E00: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x60001E04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x60001E08: sw          $a3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r7;
    // 0x60001E0C: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x60001E10: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60001E14: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x60001E18: jal         0x60001680
    // 0x60001E1C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world5_1680(rdram, ctx);
        goto after_8;
    // 0x60001E1C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_8:
    // 0x60001E20: b           L_60001E8C
    // 0x60001E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E28:
    // 0x60001E28: jal         0x60001A10
    // 0x60001E2C: nop

    ovl_stage_world5_1A10(rdram, ctx);
        goto after_9;
    // 0x60001E2C: nop

    after_9:
    // 0x60001E30: b           L_60001E8C
    // 0x60001E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E38:
    // 0x60001E38: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001E3C: addiu       $v0, $v0, 0x3C3C
    ctx->r2 = ADD32(ctx->r2, 0X3C3C);
    // 0x60001E40: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x60001E44: nop

    // 0x60001E48: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x60001E4C: beq         $t6, $zero, L_60001E80
    if (ctx->r14 == 0) {
        // 0x60001E50: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_60001E80;
    }
    // 0x60001E50: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60001E54: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x60001E58: beq         $at, $zero, L_60001E70
    if (ctx->r1 == 0) {
        // 0x60001E5C: nop
    
            goto L_60001E70;
    }
    // 0x60001E5C: nop

    // 0x60001E60: jal         0x600016B0
    // 0x60001E64: nop

    ovl_stage_world5_16B0(rdram, ctx);
        goto after_10;
    // 0x60001E64: nop

    after_10:
    // 0x60001E68: b           L_60001E8C
    // 0x60001E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E70:
    // 0x60001E70: jal         0x600016F4
    // 0x60001E74: nop

    ovl_stage_world5_16F4(rdram, ctx);
        goto after_11;
    // 0x60001E74: nop

    after_11:
    // 0x60001E78: b           L_60001E8C
    // 0x60001E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001E8C;
    // 0x60001E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E80:
    // 0x60001E80: jal         0x60001A10
    // 0x60001E84: nop

    ovl_stage_world5_1A10(rdram, ctx);
        goto after_12;
    // 0x60001E84: nop

    after_12:
L_60001E88:
    // 0x60001E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E8C:
    // 0x60001E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001E90: jr          $ra
    // 0x60001E94: nop

    return;
    // 0x60001E94: nop

;}
RECOMP_FUNC void ovl_stage_world5_1E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001E9C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001EA0: addiu       $a2, $a2, 0x3CB8
    ctx->r6 = ADD32(ctx->r6, 0X3CB8);
    // 0x60001EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001EA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60001EAC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x60001EB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60001EB4: jal         0x60000808
    // 0x60001EB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_808(rdram, ctx);
        goto after_0;
    // 0x60001EB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60001EBC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001EC0: addiu       $a2, $a2, 0x3CB8
    ctx->r6 = ADD32(ctx->r6, 0X3CB8);
    // 0x60001EC4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x60001EC8: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x60001ECC: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x60001ED0: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x60001ED4: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x60001ED8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60001EDC: jal         0x60000808
    // 0x60001EE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_808(rdram, ctx);
        goto after_1;
    // 0x60001EE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60001EE4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001EE8: addiu       $v0, $v0, 0x3C5C
    ctx->r2 = ADD32(ctx->r2, 0X3C5C);
    // 0x60001EEC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60001EF0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001EF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EF8: lw          $a0, 0x3B10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B10);
    // 0x60001EFC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001F00: sw          $zero, 0x3C58($at)
    MEM_W(0X3C58, ctx->r1) = 0;
    // 0x60001F04: addiu       $a2, $a2, 0x3C60
    ctx->r6 = ADD32(ctx->r6, 0X3C60);
    // 0x60001F08: jal         0x600006C4
    // 0x60001F0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_2;
    // 0x60001F0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60001F10: jal         0x60000DE4
    // 0x60001F14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_3;
    // 0x60001F14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60001F18: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001F1C: addiu       $a2, $a2, 0x3C78
    ctx->r6 = ADD32(ctx->r6, 0X3C78);
    // 0x60001F20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001F24: jal         0x600006C4
    // 0x60001F28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x60001F28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60001F2C: jal         0x600014A4
    // 0x60001F30: nop

    ovl_stage_world5_14A4(rdram, ctx);
        goto after_5;
    // 0x60001F30: nop

    after_5:
    // 0x60001F34: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60001F3C: sw          $zero, 0x3C40($at)
    MEM_W(0X3C40, ctx->r1) = 0;
    // 0x60001F40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F44: swc1        $f4, 0x3C54($at)
    MEM_W(0X3C54, ctx->r1) = ctx->f4.u32l;
    // 0x60001F48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F4C: sw          $zero, 0x3CAC($at)
    MEM_W(0X3CAC, ctx->r1) = 0;
    // 0x60001F50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001F5C: sw          $t8, 0x3C38($at)
    MEM_W(0X3C38, ctx->r1) = ctx->r24;
    // 0x60001F60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F64: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x60001F68: sw          $t9, 0x3C3C($at)
    MEM_W(0X3C3C, ctx->r1) = ctx->r25;
    // 0x60001F6C: jr          $ra
    // 0x60001F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60001F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world5_1F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001F74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001F78: beq         $a0, $zero, L_60002000
    if (ctx->r4 == 0) {
        // 0x60001F7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002000;
    }
    // 0x60001F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001F80: jal         0x60000DE4
    // 0x60001F84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_0;
    // 0x60001F84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60001F88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001F8C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60001F90: jal         0x600006C4
    // 0x60001F94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x60001F94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001F98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60001F9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60001FA0: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x60001FA4: jal         0x60000DE4
    // 0x60001FA8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_2;
    // 0x60001FA8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x60001FAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001FB0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60001FB4: jal         0x600006C4
    // 0x60001FB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_3;
    // 0x60001FB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60001FBC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001FC0: addiu       $a2, $a2, 0x3CC0
    ctx->r6 = ADD32(ctx->r6, 0X3CC0);
    // 0x60001FC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60001FC8: jal         0x60000808
    // 0x60001FCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world5_808(rdram, ctx);
        goto after_4;
    // 0x60001FCC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60001FD0: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60001FD4: lw          $t8, 0x3CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3CC0);
    // 0x60001FD8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FDC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001FE0: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x60001FE4: sw          $t9, 0x3CC0($at)
    MEM_W(0X3CC0, ctx->r1) = ctx->r25;
    // 0x60001FE8: addiu       $a2, $a2, 0x3CC0
    ctx->r6 = ADD32(ctx->r6, 0X3CC0);
    // 0x60001FEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60001FF0: jal         0x60000808
    // 0x60001FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_808(rdram, ctx);
        goto after_5;
    // 0x60001FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x60001FF8: b           L_60002084
    // 0x60001FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002084;
    // 0x60001FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002000:
    // 0x60002000: jal         0x60000DE4
    // 0x60002004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_6;
    // 0x60002004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60002008: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000200C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002010: jal         0x600006C4
    // 0x60002014: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_7;
    // 0x60002014: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002018: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x6000201C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002020: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002024: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002028: jal         0x60000DE4
    // 0x6000202C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_8;
    // 0x6000202C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002030: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002034: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002038: jal         0x600006C4
    // 0x6000203C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_9;
    // 0x6000203C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002040: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002044: addiu       $a2, $a2, 0x3CC0
    ctx->r6 = ADD32(ctx->r6, 0X3CC0);
    // 0x60002048: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000204C: jal         0x60000808
    // 0x60002050: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world5_808(rdram, ctx);
        goto after_10;
    // 0x60002050: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002054: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002058: lw          $t2, 0x3CC0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3CC0);
    // 0x6000205C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002060: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002064: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002068: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000206C: sw          $t3, 0x3CC0($at)
    MEM_W(0X3CC0, ctx->r1) = ctx->r11;
    // 0x60002070: addiu       $a2, $a2, 0x3CC0
    ctx->r6 = ADD32(ctx->r6, 0X3CC0);
    // 0x60002074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002078: jal         0x60000808
    // 0x6000207C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_808(rdram, ctx);
        goto after_11;
    // 0x6000207C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60002080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002084:
    // 0x60002084: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002088: jr          $ra
    // 0x6000208C: nop

    return;
    // 0x6000208C: nop

;}
RECOMP_FUNC void ovl_stage_world5_2090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60002094: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002098: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x6000209C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600020A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600020A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600020A8: jal         0x60000C1C
    // 0x600020AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600020AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600020B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600020B4: jal         0x600009C4
    // 0x600020B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_1;
    // 0x600020B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x600020BC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600020C0: nop

    // 0x600020C4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600020C8: beq         $t7, $zero, L_600020EC
    if (ctx->r15 == 0) {
        // 0x600020CC: nop
    
            goto L_600020EC;
    }
    // 0x600020CC: nop

L_600020D0:
    // 0x600020D0: jal         0x600009D0
    // 0x600020D4: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_2;
    // 0x600020D4: nop

    after_2:
    // 0x600020D8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600020DC: nop

    // 0x600020E0: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600020E4: bne         $t9, $zero, L_600020D0
    if (ctx->r25 != 0) {
        // 0x600020E8: nop
    
            goto L_600020D0;
    }
    // 0x600020E8: nop

L_600020EC:
    // 0x600020EC: jal         0x60000E44
    // 0x600020F0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world5_E44(rdram, ctx);
        goto after_3;
    // 0x600020F0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x600020F4: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x600020F8: addiu       $s4, $s4, 0x3B10
    ctx->r20 = ADD32(ctx->r20, 0X3B10);
    // 0x600020FC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60002100: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60002104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002108: jal         0x600006C4
    // 0x6000210C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x6000210C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x60002110: jal         0x60001098
    // 0x60002114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_1098(rdram, ctx);
        goto after_5;
    // 0x60002114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60002118: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x6000211C: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x60002120: sll         $t1, $t0, 9
    ctx->r9 = S32(ctx->r8 << 9);
    // 0x60002124: bgez        $t1, L_60002148
    if (SIGNED(ctx->r9) >= 0) {
        // 0x60002128: nop
    
            goto L_60002148;
    }
    // 0x60002128: nop

L_6000212C:
    // 0x6000212C: jal         0x600009D0
    // 0x60002130: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_6;
    // 0x60002130: nop

    after_6:
    // 0x60002134: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60002138: nop

    // 0x6000213C: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x60002140: bne         $t3, $zero, L_6000212C
    if (ctx->r11 != 0) {
        // 0x60002144: nop
    
            goto L_6000212C;
    }
    // 0x60002144: nop

L_60002148:
    // 0x60002148: jal         0x600009D0
    // 0x6000214C: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_7;
    // 0x6000214C: nop

    after_7:
    // 0x60002150: jal         0x60001F74
    // 0x60002154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_1F74(rdram, ctx);
        goto after_8;
    // 0x60002154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002158: jal         0x600007E4
    // 0x6000215C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world5_7E4(rdram, ctx);
        goto after_9;
    // 0x6000215C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x60002160: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002164: addiu       $a2, $a2, 0x3CB0
    ctx->r6 = ADD32(ctx->r6, 0X3CB0);
    // 0x60002168: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x6000216C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x60002170: sw          $t4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r12;
    // 0x60002174: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x60002178: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x6000217C: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x60002180: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002184: sw          $t6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r14;
    // 0x60002188: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x6000218C: nop

    // 0x60002190: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x60002194: nop

    // 0x60002198: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x6000219C: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x600021A0: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x600021A4: nop

    // 0x600021A8: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x600021AC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600021B0: jal         0x600007F0
    // 0x600021B4: nop

    ovl_stage_world5_7F0(rdram, ctx);
        goto after_10;
    // 0x600021B4: nop

    after_10:
    // 0x600021B8: jal         0x60001E98
    // 0x600021BC: nop

    ovl_stage_world5_1E98(rdram, ctx);
        goto after_11;
    // 0x600021BC: nop

    after_11:
    // 0x600021C0: jal         0x60000B98
    // 0x600021C4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_12;
    // 0x600021C4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_12:
    // 0x600021C8: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x600021CC: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600021D0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600021D4: addiu       $s1, $s1, 0x3CB8
    ctx->r17 = ADD32(ctx->r17, 0X3CB8);
    // 0x600021D8: addiu       $s2, $s2, 0x3C58
    ctx->r18 = ADD32(ctx->r18, 0X3C58);
    // 0x600021DC: addiu       $s3, $s3, 0x3C5C
    ctx->r19 = ADD32(ctx->r19, 0X3C5C);
    // 0x600021E0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_600021E4:
    // 0x600021E4: nop

    // 0x600021E8: andi        $t1, $v0, 0x2000
    ctx->r9 = ctx->r2 & 0X2000;
    // 0x600021EC: beq         $t1, $zero, L_600022B4
    if (ctx->r9 == 0) {
        // 0x600021F0: andi        $t2, $v0, 0x2
        ctx->r10 = ctx->r2 & 0X2;
            goto L_600022B4;
    }
    // 0x600021F0: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x600021F4: beq         $t2, $zero, L_6000220C
    if (ctx->r10 == 0) {
        // 0x600021F8: nop
    
            goto L_6000220C;
    }
    // 0x600021F8: nop

    // 0x600021FC: jal         0x600009AC
    // 0x60002200: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_13;
    // 0x60002200: nop

    after_13:
    // 0x60002204: b           L_60002214
    // 0x60002208: nop

        goto L_60002214;
    // 0x60002208: nop

L_6000220C:
    // 0x6000220C: jal         0x60000A6C
    // 0x60002210: nop

    ovl_stage_world5_A6C(rdram, ctx);
        goto after_14;
    // 0x60002210: nop

    after_14:
L_60002214:
    // 0x60002214: jal         0x60001098
    // 0x60002218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_1098(rdram, ctx);
        goto after_15;
    // 0x60002218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x6000221C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x60002220: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002224: jal         0x600006C4
    // 0x60002228: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_16;
    // 0x60002228: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_16:
    // 0x6000222C: jal         0x60000B98
    // 0x60002230: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_17;
    // 0x60002230: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    after_17:
    // 0x60002234: jal         0x60000B98
    // 0x60002238: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_18;
    // 0x60002238: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    after_18:
    // 0x6000223C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002240: jal         0x60000E68
    // 0x60002244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_E68(rdram, ctx);
        goto after_19;
    // 0x60002244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x60002248: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000224C: jal         0x60000E68
    // 0x60002250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_E68(rdram, ctx);
        goto after_20;
    // 0x60002250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x60002254: jal         0x60000A60
    // 0x60002258: addiu       $a0, $zero, 0xACD
    ctx->r4 = ADD32(0, 0XACD);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_21;
    // 0x60002258: addiu       $a0, $zero, 0xACD
    ctx->r4 = ADD32(0, 0XACD);
    after_21:
    // 0x6000225C: jal         0x60001160
    // 0x60002260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world5_1160(rdram, ctx);
        goto after_22;
    // 0x60002260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_22:
    // 0x60002264: jal         0x600009C4
    // 0x60002268: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_23;
    // 0x60002268: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_23:
    // 0x6000226C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x60002270: nop

    // 0x60002274: andi        $t4, $t3, 0x800
    ctx->r12 = ctx->r11 & 0X800;
    // 0x60002278: beq         $t4, $zero, L_6000229C
    if (ctx->r12 == 0) {
        // 0x6000227C: nop
    
            goto L_6000229C;
    }
    // 0x6000227C: nop

L_60002280:
    // 0x60002280: jal         0x600009D0
    // 0x60002284: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_24;
    // 0x60002284: nop

    after_24:
    // 0x60002288: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x6000228C: nop

    // 0x60002290: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60002294: bne         $t6, $zero, L_60002280
    if (ctx->r14 != 0) {
        // 0x60002298: nop
    
            goto L_60002280;
    }
    // 0x60002298: nop

L_6000229C:
    // 0x6000229C: jal         0x60000A60
    // 0x600022A0: addiu       $a0, $zero, 0xA7D
    ctx->r4 = ADD32(0, 0XA7D);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_25;
    // 0x600022A0: addiu       $a0, $zero, 0xA7D
    ctx->r4 = ADD32(0, 0XA7D);
    after_25:
    // 0x600022A4: jal         0x60001F74
    // 0x600022A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_1F74(rdram, ctx);
        goto after_26;
    // 0x600022A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x600022AC: jal         0x600009AC
    // 0x600022B0: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_27;
    // 0x600022B0: nop

    after_27:
L_600022B4:
    // 0x600022B4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x600022B8: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x600022BC: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x600022C0: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x600022C4: jal         0x600014A4
    // 0x600022C8: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    ovl_stage_world5_14A4(rdram, ctx);
        goto after_28;
    // 0x600022C8: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    after_28:
    // 0x600022CC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x600022D0: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x600022D4: jal         0x60000CE8
    // 0x600022D8: addiu       $a1, $a1, 0x3CB4
    ctx->r5 = ADD32(ctx->r5, 0X3CB4);
    ovl_stage_world5_CE8(rdram, ctx);
        goto after_29;
    // 0x600022D8: addiu       $a1, $a1, 0x3CB4
    ctx->r5 = ADD32(ctx->r5, 0X3CB4);
    after_29:
    // 0x600022DC: jal         0x60001C68
    // 0x600022E0: nop

    ovl_stage_world5_1C68(rdram, ctx);
        goto after_30;
    // 0x600022E0: nop

    after_30:
    // 0x600022E4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x600022E8: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x600022EC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x600022F0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x600022F4: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x600022F8: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x600022FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002304: jal         0x60000808
    // 0x60002308: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_808(rdram, ctx);
        goto after_31;
    // 0x60002308: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_31:
    // 0x6000230C: jal         0x600009D0
    // 0x60002310: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_32;
    // 0x60002310: nop

    after_32:
    // 0x60002314: b           L_600021E4
    // 0x60002318: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_600021E4;
    // 0x60002318: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x6000231C: nop

    // 0x60002320: nop

    // 0x60002324: nop

    // 0x60002328: nop

    // 0x6000232C: nop

    // 0x60002330: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002338: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000233C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002340: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002344: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002348: jr          $ra
    // 0x6000234C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x6000234C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world5_2350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002350: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002358: jal         0x60000C1C
    // 0x6000235C: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x6000235C: nop

    after_0:
    // 0x60002360: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002364: nop

    // 0x60002368: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x6000236C: bltz        $t7, L_60002438
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002370: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002438;
    }
    // 0x60002370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002374: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60002378: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x6000237C: beq         $v1, $at, L_60002434
    if (ctx->r3 == ctx->r1) {
        // 0x60002380: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_60002434;
    }
    // 0x60002380: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60002384: beq         $v1, $at, L_60002434
    if (ctx->r3 == ctx->r1) {
        // 0x60002388: addiu       $a0, $zero, 0x8C
        ctx->r4 = ADD32(0, 0X8C);
            goto L_60002434;
    }
    // 0x60002388: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x6000238C: jal         0x60000BB0
    // 0x60002390: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60002390: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x60002394: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x60002398: bne         $v0, $zero, L_600023F0
    if (ctx->r2 != 0) {
        // 0x6000239C: nop
    
            goto L_600023F0;
    }
    // 0x6000239C: nop

    // 0x600023A0: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x600023A4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x600023A8: bne         $t8, $at, L_60002438
    if (ctx->r24 != ctx->r1) {
        // 0x600023AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002438;
    }
    // 0x600023AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600023B0: jal         0x60000BB0
    // 0x600023B4: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_2;
    // 0x600023B4: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    after_2:
    // 0x600023B8: bne         $v0, $zero, L_600023D0
    if (ctx->r2 != 0) {
        // 0x600023BC: nop
    
            goto L_600023D0;
    }
    // 0x600023BC: nop

    // 0x600023C0: jal         0x60000EEC
    // 0x600023C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_3;
    // 0x600023C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x600023C8: jal         0x60000A60
    // 0x600023CC: addiu       $a0, $zero, 0xACC
    ctx->r4 = ADD32(0, 0XACC);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_4;
    // 0x600023CC: addiu       $a0, $zero, 0xACC
    ctx->r4 = ADD32(0, 0XACC);
    after_4:
L_600023D0:
    // 0x600023D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600023D4: addiu       $a0, $a0, 0x2090
    ctx->r4 = ADD32(ctx->r4, 0X2090);
    // 0x600023D8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600023DC: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x600023E0: jal         0x60000994
    // 0x600023E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_5;
    // 0x600023E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x600023E8: b           L_60002438
    // 0x600023EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002438;
    // 0x600023EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600023F0:
    // 0x600023F0: jal         0x60000E74
    // 0x600023F4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_6;
    // 0x600023F4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x600023F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600023FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002400: jal         0x600006C4
    // 0x60002404: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_7;
    // 0x60002404: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x60002408: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x6000240C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002410: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002414: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60002418: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x6000241C: jal         0x60000E74
    // 0x60002420: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_8;
    // 0x60002420: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x60002424: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002428: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000242C: jal         0x600006C4
    // 0x60002430: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_9;
    // 0x60002430: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_9:
L_60002434:
    // 0x60002434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002438:
    // 0x60002438: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x6000243C: jr          $ra
    // 0x60002440: nop

    return;
    // 0x60002440: nop

;}
RECOMP_FUNC void ovl_stage_world5_2444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000244C: jal         0x60000C1C
    // 0x60002450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60002450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002454: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002458: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000245C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60002460: beq         $t7, $zero, L_60002470
    if (ctx->r15 == 0) {
        // 0x60002464: nop
    
            goto L_60002470;
    }
    // 0x60002464: nop

    // 0x60002468: jal         0x600009AC
    // 0x6000246C: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_1;
    // 0x6000246C: nop

    after_1:
L_60002470:
    // 0x60002470: jal         0x60000FA8
    // 0x60002474: nop

    ovl_stage_world5_FA8(rdram, ctx);
        goto after_2;
    // 0x60002474: nop

    after_2:
    // 0x60002478: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000247C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60002480: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60002484: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x60002488: jal         0x60000A60
    // 0x6000248C: addiu       $a0, $zero, 0xAD0
    ctx->r4 = ADD32(0, 0XAD0);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_3;
    // 0x6000248C: addiu       $a0, $zero, 0xAD0
    ctx->r4 = ADD32(0, 0XAD0);
    after_3:
    // 0x60002490: jal         0x60001030
    // 0x60002494: nop

    ovl_stage_world5_1030(rdram, ctx);
        goto after_4;
    // 0x60002494: nop

    after_4:
    // 0x60002498: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x6000249C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x600024A0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600024A4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x600024A8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x600024AC: jal         0x60001F74
    // 0x600024B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_1F74(rdram, ctx);
        goto after_5;
    // 0x600024B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x600024B4: jal         0x60001098
    // 0x600024B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_1098(rdram, ctx);
        goto after_6;
    // 0x600024B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x600024BC: jal         0x60000BB0
    // 0x600024C0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_7;
    // 0x600024C0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_7:
    // 0x600024C4: beq         $v0, $zero, L_600024DC
    if (ctx->r2 == 0) {
        // 0x600024C8: nop
    
            goto L_600024DC;
    }
    // 0x600024C8: nop

    // 0x600024CC: jal         0x60000C7C
    // 0x600024D0: nop

    ovl_stage_world5_C7C(rdram, ctx);
        goto after_8;
    // 0x600024D0: nop

    after_8:
    // 0x600024D4: b           L_600024F4
    // 0x600024D8: nop

        goto L_600024F4;
    // 0x600024D8: nop

L_600024DC:
    // 0x600024DC: jal         0x60000B98
    // 0x600024E0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_9;
    // 0x600024E0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_9:
    // 0x600024E4: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x600024E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x600024EC: jal         0x60000C10
    // 0x600024F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world5_C10(rdram, ctx);
        goto after_10;
    // 0x600024F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_600024F4:
    // 0x600024F4: jal         0x600009AC
    // 0x600024F8: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_11;
    // 0x600024F8: nop

    after_11:
    // 0x600024FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002504: jr          $ra
    // 0x60002508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60002508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world5_250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000250C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002514: jal         0x60000C1C
    // 0x60002518: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60002518: nop

    after_0:
    // 0x6000251C: jal         0x60000B98
    // 0x60002520: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_1;
    // 0x60002520: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_1:
    // 0x60002524: jal         0x60000A60
    // 0x60002528: addiu       $a0, $zero, 0xACF
    ctx->r4 = ADD32(0, 0XACF);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_2;
    // 0x60002528: addiu       $a0, $zero, 0xACF
    ctx->r4 = ADD32(0, 0XACF);
    after_2:
    // 0x6000252C: jal         0x60001030
    // 0x60002530: nop

    ovl_stage_world5_1030(rdram, ctx);
        goto after_3;
    // 0x60002530: nop

    after_3:
    // 0x60002534: jal         0x60001F74
    // 0x60002538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_1F74(rdram, ctx);
        goto after_4;
    // 0x60002538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x6000253C: jal         0x600009AC
    // 0x60002540: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_5;
    // 0x60002540: nop

    after_5:
    // 0x60002544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000254C: jr          $ra
    // 0x60002550: nop

    return;
    // 0x60002550: nop

;}
RECOMP_FUNC void ovl_stage_world5_2554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002554: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000255C: jal         0x6000025C
    // 0x60002560: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world5_25C(rdram, ctx);
        goto after_0;
    // 0x60002560: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60002564: jal         0x60000244
    // 0x60002568: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world5_244(rdram, ctx);
        goto after_1;
    // 0x60002568: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x6000256C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002570: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60002574: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60002578: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000257C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60002580: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60002584: jal         0x60000E74
    // 0x60002588: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_2;
    // 0x60002588: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x6000258C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002590: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60002594: jal         0x600006C4
    // 0x60002598: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_3;
    // 0x60002598: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x6000259C: jal         0x60000EEC
    // 0x600025A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_4;
    // 0x600025A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_4:
    // 0x600025A4: jal         0x60000EEC
    // 0x600025A8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_5;
    // 0x600025A8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_5:
    // 0x600025AC: jal         0x60000EEC
    // 0x600025B0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_6;
    // 0x600025B0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_6:
    // 0x600025B4: jal         0x60000EEC
    // 0x600025B8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_7;
    // 0x600025B8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_7:
    // 0x600025BC: jal         0x600009AC
    // 0x600025C0: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_8;
    // 0x600025C0: nop

    after_8:
    // 0x600025C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600025C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600025CC: jr          $ra
    // 0x600025D0: nop

    return;
    // 0x600025D0: nop

;}
RECOMP_FUNC void ovl_stage_world5_25D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600025D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x600025D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600025DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600025E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600025E4: jal         0x60001098
    // 0x600025E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_1098(rdram, ctx);
        goto after_0;
    // 0x600025E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x600025EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600025F0: lwc1        $f4, 0x3B78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3B78);
    // 0x600025F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600025F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x600025FC: lwc1        $f8, 0x3B7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3B7C);
    // 0x60002600: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002604: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x60002608: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x6000260C: jal         0x60000DE4
    // 0x60002610: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_1;
    // 0x60002610: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60002614: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x60002618: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x6000261C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002620: jal         0x600006C4
    // 0x60002624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_2;
    // 0x60002624: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60002628: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x6000262C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60002630: jal         0x60000DE4
    // 0x60002634: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_3;
    // 0x60002634: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60002638: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000263C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60002640: jal         0x600006C4
    // 0x60002644: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x60002644: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x60002648: jal         0x60000DE4
    // 0x6000264C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_5;
    // 0x6000264C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60002650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002654: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002658: jal         0x600006C4
    // 0x6000265C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_6;
    // 0x6000265C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60002660: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60002664: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002668: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x6000266C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002670: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x60002674: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_60002678:
    // 0x60002678: jal         0x60001F74
    // 0x6000267C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_1F74(rdram, ctx);
        goto after_7;
    // 0x6000267C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002680: jal         0x600009D0
    // 0x60002684: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_8;
    // 0x60002684: nop

    after_8:
    // 0x60002688: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000268C: bne         $s0, $s1, L_60002678
    if (ctx->r16 != ctx->r17) {
        // 0x60002690: nop
    
            goto L_60002678;
    }
    // 0x60002690: nop

    // 0x60002694: jal         0x600009AC
    // 0x60002698: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_9;
    // 0x60002698: nop

    after_9:
    // 0x6000269C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600026A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600026A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600026A8: jr          $ra
    // 0x600026AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x600026AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world5_26B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600026B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600026B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600026B8: jal         0x60000C1C
    // 0x600026BC: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600026BC: nop

    after_0:
    // 0x600026C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x600026C4: jal         0x60000BB0
    // 0x600026C8: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600026C8: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_1:
    // 0x600026CC: bne         $v0, $zero, L_60002704
    if (ctx->r2 != 0) {
        // 0x600026D0: nop
    
            goto L_60002704;
    }
    // 0x600026D0: nop

    // 0x600026D4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x600026D8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600026DC: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x600026E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600026E4: beq         $t7, $at, L_60002704
    if (ctx->r15 == ctx->r1) {
        // 0x600026E8: addiu       $a0, $a0, 0x250C
        ctx->r4 = ADD32(ctx->r4, 0X250C);
            goto L_60002704;
    }
    // 0x600026E8: addiu       $a0, $a0, 0x250C
    ctx->r4 = ADD32(ctx->r4, 0X250C);
    // 0x600026EC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600026F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600026F4: jal         0x60000994
    // 0x600026F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_2;
    // 0x600026F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x600026FC: b           L_6000272C
    // 0x60002700: nop

        goto L_6000272C;
    // 0x60002700: nop

L_60002704:
    // 0x60002704: jal         0x60000BB0
    // 0x60002708: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_3;
    // 0x60002708: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_3:
    // 0x6000270C: beq         $v0, $zero, L_6000272C
    if (ctx->r2 == 0) {
        // 0x60002710: nop
    
            goto L_6000272C;
    }
    // 0x60002710: nop

    // 0x60002714: jal         0x60000BB0
    // 0x60002718: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_4;
    // 0x60002718: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_4:
    // 0x6000271C: bne         $v0, $zero, L_6000272C
    if (ctx->r2 != 0) {
        // 0x60002720: nop
    
            goto L_6000272C;
    }
    // 0x60002720: nop

    // 0x60002724: jal         0x6000025C
    // 0x60002728: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world5_25C(rdram, ctx);
        goto after_5;
    // 0x60002728: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_5:
L_6000272C:
    // 0x6000272C: jal         0x60000BB0
    // 0x60002730: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_6;
    // 0x60002730: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_6:
    // 0x60002734: beq         $v0, $zero, L_6000275C
    if (ctx->r2 == 0) {
        // 0x60002738: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000275C;
    }
    // 0x60002738: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000273C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002740: addiu       $a0, $a0, 0x2554
    ctx->r4 = ADD32(ctx->r4, 0X2554);
    // 0x60002744: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000274C: jal         0x60000994
    // 0x60002750: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_7;
    // 0x60002750: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60002754: b           L_60002774
    // 0x60002758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002774;
    // 0x60002758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000275C:
    // 0x6000275C: addiu       $a0, $a0, 0x25D4
    ctx->r4 = ADD32(ctx->r4, 0X25D4);
    // 0x60002760: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002768: jal         0x60000994
    // 0x6000276C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_8;
    // 0x6000276C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x60002770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002774:
    // 0x60002774: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60002778: jr          $ra
    // 0x6000277C: nop

    return;
    // 0x6000277C: nop

;}
RECOMP_FUNC void ovl_stage_world5_2780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002788: jal         0x60000A60
    // 0x6000278C: addiu       $a0, $zero, 0xA7A
    ctx->r4 = ADD32(0, 0XA7A);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_0;
    // 0x6000278C: addiu       $a0, $zero, 0xA7A
    ctx->r4 = ADD32(0, 0XA7A);
    after_0:
    // 0x60002790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002798: jr          $ra
    // 0x6000279C: nop

    return;
    // 0x6000279C: nop

;}
RECOMP_FUNC void ovl_stage_world5_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600027A8: jal         0x60000A60
    // 0x600027AC: addiu       $a0, $zero, 0xA7B
    ctx->r4 = ADD32(0, 0XA7B);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_0;
    // 0x600027AC: addiu       $a0, $zero, 0xA7B
    ctx->r4 = ADD32(0, 0XA7B);
    after_0:
    // 0x600027B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600027B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600027B8: jr          $ra
    // 0x600027BC: nop

    return;
    // 0x600027BC: nop

;}
RECOMP_FUNC void ovl_stage_world5_27C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600027C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600027C8: jal         0x60000A60
    // 0x600027CC: addiu       $a0, $zero, 0xA7C
    ctx->r4 = ADD32(0, 0XA7C);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_0;
    // 0x600027CC: addiu       $a0, $zero, 0xA7C
    ctx->r4 = ADD32(0, 0XA7C);
    after_0:
    // 0x600027D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600027D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600027D8: jr          $ra
    // 0x600027DC: nop

    return;
    // 0x600027DC: nop

;}
RECOMP_FUNC void ovl_stage_world5_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027E0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x600027E4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x600027E8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x600027EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600027F0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600027F4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600027F8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x600027FC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x60002800: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002804: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002808: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x6000280C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002810: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60002814: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x60002818: jal         0x60000BB0
    // 0x6000281C: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x6000281C: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
    after_0:
    // 0x60002820: beq         $v0, $zero, L_60002834
    if (ctx->r2 == 0) {
        // 0x60002824: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_60002834;
    }
    // 0x60002824: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60002828: jal         0x600009C4
    // 0x6000282C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_1;
    // 0x6000282C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x60002830: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_60002834:
    // 0x60002834: jal         0x60000E80
    // 0x60002838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_2;
    // 0x60002838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x6000283C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60002840: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002844: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002848: lwc1        $f22, 0x3B80($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X3B80);
    // 0x6000284C: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x60002850: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
L_60002854:
    // 0x60002854: jal         0x60000E74
    // 0x60002858: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_3;
    // 0x60002858: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x6000285C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002860: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002864: jal         0x600006C4
    // 0x60002868: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x60002868: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x6000286C: bne         $v0, $zero, L_6000292C
    if (ctx->r2 != 0) {
        // 0x60002870: nop
    
            goto L_6000292C;
    }
    // 0x60002870: nop

    // 0x60002874: jal         0x60000E74
    // 0x60002878: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_5;
    // 0x60002878: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x6000287C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002880: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002884: jal         0x600006C4
    // 0x60002888: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_6;
    // 0x60002888: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x6000288C: jal         0x60000BB0
    // 0x60002890: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_7;
    // 0x60002890: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_7:
    // 0x60002894: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60002898: beq         $v0, $zero, L_600028A8
    if (ctx->r2 == 0) {
        // 0x6000289C: sub.s       $f6, $f4, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
            goto L_600028A8;
    }
    // 0x6000289C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600028A0: b           L_600028AC
    // 0x600028A4: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
        goto L_600028AC;
    // 0x600028A4: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
L_600028A8:
    // 0x600028A8: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
L_600028AC:
    // 0x600028AC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x600028B0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x600028B4: bc1f        L_600028F8
    if (!c1cs) {
        // 0x600028B8: nop
    
            goto L_600028F8;
    }
    // 0x600028B8: nop

    // 0x600028BC: jal         0x60000BB0
    // 0x600028C0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_8;
    // 0x600028C0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_8:
    // 0x600028C4: beq         $v0, $zero, L_600028D4
    if (ctx->r2 == 0) {
        // 0x600028C8: nop
    
            goto L_600028D4;
    }
    // 0x600028C8: nop

    // 0x600028CC: b           L_600028D8
    // 0x600028D0: swc1        $f26, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f26.u32l;
        goto L_600028D8;
    // 0x600028D0: swc1        $f26, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f26.u32l;
L_600028D4:
    // 0x600028D4: swc1        $f24, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f24.u32l;
L_600028D8:
    // 0x600028D8: jal         0x60000E74
    // 0x600028DC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_9;
    // 0x600028DC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_9:
    // 0x600028E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600028E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600028E8: jal         0x600006C4
    // 0x600028EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_10;
    // 0x600028EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x600028F0: b           L_6000292C
    // 0x600028F4: nop

        goto L_6000292C;
    // 0x600028F4: nop

L_600028F8:
    // 0x600028F8: lwc1        $f8, 0x30($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X30);
    // 0x600028FC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60002900: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60002904: jal         0x60000E74
    // 0x60002908: swc1        $f10, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f10.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_11;
    // 0x60002908: swc1        $f10, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f10.u32l;
    after_11:
    // 0x6000290C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002910: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002914: jal         0x600006C4
    // 0x60002918: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_12;
    // 0x60002918: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x6000291C: jal         0x600009D0
    // 0x60002920: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_stage_world5_9D0(rdram, ctx);
        goto after_13;
    // 0x60002920: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_13:
    // 0x60002924: b           L_60002854
    // 0x60002928: nop

        goto L_60002854;
    // 0x60002928: nop

L_6000292C:
    // 0x6000292C: jal         0x600009C4
    // 0x60002930: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_14;
    // 0x60002930: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_14:
    // 0x60002934: jal         0x60000BA4
    // 0x60002938: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_15;
    // 0x60002938: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_15:
    // 0x6000293C: jal         0x600009AC
    // 0x60002940: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_16;
    // 0x60002940: nop

    after_16:
    // 0x60002944: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60002948: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x6000294C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60002950: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002954: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002958: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x6000295C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002960: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002964: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002968: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x6000296C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x60002970: jr          $ra
    // 0x60002974: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x60002974: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_stage_world5_2978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000297C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002980: jal         0x60000BB0
    // 0x60002984: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60002984: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_0:
    // 0x60002988: bne         $v0, $zero, L_600029DC
    if (ctx->r2 != 0) {
        // 0x6000298C: nop
    
            goto L_600029DC;
    }
    // 0x6000298C: nop

    // 0x60002990: jal         0x60000BB0
    // 0x60002994: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60002994: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60002998: bne         $v0, $zero, L_600029DC
    if (ctx->r2 != 0) {
        // 0x6000299C: nop
    
            goto L_600029DC;
    }
    // 0x6000299C: nop

    // 0x600029A0: jal         0x60000B98
    // 0x600029A4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_2;
    // 0x600029A4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_2:
    // 0x600029A8: jal         0x60000B98
    // 0x600029AC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_3;
    // 0x600029AC: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_3:
    // 0x600029B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600029B4: jal         0x60000E80
    // 0x600029B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_4;
    // 0x600029B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x600029BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600029C0: addiu       $a0, $a0, 0x27E0
    ctx->r4 = ADD32(ctx->r4, 0X27E0);
    // 0x600029C4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600029C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600029CC: jal         0x60000994
    // 0x600029D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_5;
    // 0x600029D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x600029D4: b           L_60002A34
    // 0x600029D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002A34;
    // 0x600029D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600029DC:
    // 0x600029DC: jal         0x60000BB0
    // 0x600029E0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_6;
    // 0x600029E0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_6:
    // 0x600029E4: bne         $v0, $zero, L_60002A34
    if (ctx->r2 != 0) {
        // 0x600029E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002A34;
    }
    // 0x600029E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600029EC: jal         0x60000BB0
    // 0x600029F0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_7;
    // 0x600029F0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_7:
    // 0x600029F4: bne         $v0, $zero, L_60002A34
    if (ctx->r2 != 0) {
        // 0x600029F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002A34;
    }
    // 0x600029F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600029FC: jal         0x60000B98
    // 0x60002A00: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_8;
    // 0x60002A00: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_8:
    // 0x60002A04: jal         0x60000B98
    // 0x60002A08: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_9;
    // 0x60002A08: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_9:
    // 0x60002A0C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002A10: jal         0x60000E68
    // 0x60002A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E68(rdram, ctx);
        goto after_10;
    // 0x60002A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x60002A18: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A1C: addiu       $a0, $a0, 0x27E0
    ctx->r4 = ADD32(ctx->r4, 0X27E0);
    // 0x60002A20: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002A28: jal         0x60000994
    // 0x60002A2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_11;
    // 0x60002A2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x60002A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002A34:
    // 0x60002A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002A38: jr          $ra
    // 0x60002A3C: nop

    return;
    // 0x60002A3C: nop

;}
RECOMP_FUNC void ovl_stage_world5_2A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002A40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002A48: jal         0x60000E74
    // 0x60002A4C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_0;
    // 0x60002A4C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x60002A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002A54: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002A58: jal         0x600006C4
    // 0x60002A5C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x60002A5C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60002A60: bne         $v0, $zero, L_60002A90
    if (ctx->r2 != 0) {
        // 0x60002A64: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_60002A90;
    }
    // 0x60002A64: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002A68: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002A6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002A70: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60002A74: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60002A78: jal         0x60000E74
    // 0x60002A7C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_2;
    // 0x60002A7C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x60002A80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002A84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002A88: jal         0x600006C4
    // 0x60002A8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_3;
    // 0x60002A8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
L_60002A90:
    // 0x60002A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002A94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002A98: jr          $ra
    // 0x60002A9C: nop

    return;
    // 0x60002A9C: nop

;}
RECOMP_FUNC void ovl_stage_world5_2AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002AAC: jal         0x60000BB0
    // 0x60002AB0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60002AB0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60002AB4: beq         $v0, $zero, L_60002B18
    if (ctx->r2 == 0) {
        // 0x60002AB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002B18;
    }
    // 0x60002AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002ABC: jal         0x60000BB0
    // 0x60002AC0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60002AC0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60002AC4: beq         $v0, $zero, L_60002B18
    if (ctx->r2 == 0) {
        // 0x60002AC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002B18;
    }
    // 0x60002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002ACC: jal         0x60000BB0
    // 0x60002AD0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_2;
    // 0x60002AD0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x60002AD4: beq         $v0, $zero, L_60002B18
    if (ctx->r2 == 0) {
        // 0x60002AD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002B18;
    }
    // 0x60002AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002ADC: jal         0x60000BB0
    // 0x60002AE0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_3;
    // 0x60002AE0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x60002AE4: beq         $v0, $zero, L_60002B18
    if (ctx->r2 == 0) {
        // 0x60002AE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002B18;
    }
    // 0x60002AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002AEC: jal         0x60000BB0
    // 0x60002AF0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_4;
    // 0x60002AF0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x60002AF4: bne         $v0, $zero, L_60002B18
    if (ctx->r2 != 0) {
        // 0x60002AF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002B18;
    }
    // 0x60002AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002AFC: jal         0x60000B98
    // 0x60002B00: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_5;
    // 0x60002B00: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_5:
    // 0x60002B04: jal         0x60000244
    // 0x60002B08: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world5_244(rdram, ctx);
        goto after_6;
    // 0x60002B08: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_6:
    // 0x60002B0C: jal         0x60001160
    // 0x60002B10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world5_1160(rdram, ctx);
        goto after_7;
    // 0x60002B10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x60002B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002B18:
    // 0x60002B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002B1C: jr          $ra
    // 0x60002B20: nop

    return;
    // 0x60002B20: nop

;}
RECOMP_FUNC void ovl_stage_world5_2B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60002B28: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002B2C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60002B30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60002B34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60002B38: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002B3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002B40: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60002B44: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002B48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002B4C: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_60002B50:
    // 0x60002B50: jal         0x60000E74
    // 0x60002B54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_0;
    // 0x60002B54: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x60002B58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002B5C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002B60: jal         0x600006C4
    // 0x60002B64: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x60002B64: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x60002B68: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60002B6C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002B70: lwc1        $f4, 0x30($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X30);
    // 0x60002B74: nop

    // 0x60002B78: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60002B7C: jal         0x60000E74
    // 0x60002B80: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_2;
    // 0x60002B80: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    after_2:
    // 0x60002B84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002B88: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002B8C: jal         0x600006C4
    // 0x60002B90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_3;
    // 0x60002B90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60002B94: jal         0x600009D0
    // 0x60002B98: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_4;
    // 0x60002B98: nop

    after_4:
    // 0x60002B9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002BA0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x60002BA4: bne         $at, $zero, L_60002B50
    if (ctx->r1 != 0) {
        // 0x60002BA8: nop
    
            goto L_60002B50;
    }
    // 0x60002BA8: nop

    // 0x60002BAC: jal         0x600009C4
    // 0x60002BB0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_5;
    // 0x60002BB0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_5:
    // 0x60002BB4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002BB8: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_60002BBC:
    // 0x60002BBC: jal         0x60000E74
    // 0x60002BC0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world5_E74(rdram, ctx);
        goto after_6;
    // 0x60002BC0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x60002BC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002BC8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002BCC: jal         0x600006C4
    // 0x60002BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_7;
    // 0x60002BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60002BD4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x60002BD8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002BDC: lwc1        $f8, 0x30($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X30);
    // 0x60002BE0: nop

    // 0x60002BE4: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60002BE8: jal         0x60000E74
    // 0x60002BEC: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
    ovl_stage_world5_E74(rdram, ctx);
        goto after_8;
    // 0x60002BEC: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
    after_8:
    // 0x60002BF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002BF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002BF8: jal         0x600006C4
    // 0x60002BFC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_9;
    // 0x60002BFC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x60002C00: jal         0x600009D0
    // 0x60002C04: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_10;
    // 0x60002C04: nop

    after_10:
    // 0x60002C08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002C0C: bne         $s0, $s2, L_60002BBC
    if (ctx->r16 != ctx->r18) {
        // 0x60002C10: nop
    
            goto L_60002BBC;
    }
    // 0x60002C10: nop

    // 0x60002C14: jal         0x60000BA4
    // 0x60002C18: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_11;
    // 0x60002C18: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_11:
    // 0x60002C1C: jal         0x600009AC
    // 0x60002C20: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_12;
    // 0x60002C20: nop

    after_12:
    // 0x60002C24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002C28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002C2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002C30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60002C34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60002C38: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60002C3C: jr          $ra
    // 0x60002C40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60002C40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world5_2C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C4C: jal         0x60000BB0
    // 0x60002C50: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60002C50: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_0:
    // 0x60002C54: bne         $v0, $zero, L_60002C90
    if (ctx->r2 != 0) {
        // 0x60002C58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002C90;
    }
    // 0x60002C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C5C: jal         0x60000BB0
    // 0x60002C60: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60002C60: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_1:
    // 0x60002C64: beq         $v0, $zero, L_60002C90
    if (ctx->r2 == 0) {
        // 0x60002C68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002C90;
    }
    // 0x60002C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C6C: jal         0x60000B98
    // 0x60002C70: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_2;
    // 0x60002C70: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_2:
    // 0x60002C74: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002C78: addiu       $a0, $a0, 0x2B24
    ctx->r4 = ADD32(ctx->r4, 0X2B24);
    // 0x60002C7C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C84: jal         0x60000994
    // 0x60002C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_3;
    // 0x60002C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60002C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002C90:
    // 0x60002C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002C94: jr          $ra
    // 0x60002C98: nop

    return;
    // 0x60002C98: nop

;}
