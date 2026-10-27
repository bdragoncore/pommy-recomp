#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world1_EBC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_EC8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world1_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43000F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43000F58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43000F5C: bne         $a1, $zero, L_43000F88
    if (ctx->r5 != 0) {
        // 0x43000F60: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43000F88;
    }
    // 0x43000F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43000F64: jal         0x43000F50
    // 0x43000F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world1_F50(rdram, ctx);
        goto after_0;
    // 0x43000F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x43000F6C: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43000F70: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x43000F74: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43000F78: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43000F7C: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
    // 0x43000F80: b           L_430010E0
    // 0x43000F84: sw          $zero, 0x258($s0)
    MEM_W(0X258, ctx->r16) = 0;
        goto L_430010E0;
    // 0x43000F84: sw          $zero, 0x258($s0)
    MEM_W(0X258, ctx->r16) = 0;
L_43000F88:
    // 0x43000F88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43000F8C: bne         $a1, $at, L_43001024
    if (ctx->r5 != ctx->r1) {
        // 0x43000F90: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43001024;
    }
    // 0x43000F90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43000F94: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43000F98: nop

    // 0x43000F9C: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x43000FA0: bltz        $t8, L_430010E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x43000FA4: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430010E0;
    }
    // 0x43000FA4: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x43000FA8: bne         $t9, $zero, L_430010E0
    if (ctx->r25 != 0) {
        // 0x43000FAC: addiu       $v1, $s0, 0x24C
        ctx->r3 = ADD32(ctx->r16, 0X24C);
            goto L_430010E0;
    }
    // 0x43000FAC: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43000FB0: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x43000FB4: nop

    // 0x43000FB8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x43000FBC: bne         $t1, $zero, L_430010E4
    if (ctx->r9 != 0) {
        // 0x43000FC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430010E4;
    }
    // 0x43000FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43000FC4: lw          $t2, 0x230($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X230);
    // 0x43000FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43000FCC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x43000FD0: beq         $t3, $zero, L_430010E0
    if (ctx->r11 == 0) {
        // 0x43000FD4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_430010E0;
    }
    // 0x43000FD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43000FD8: jal         0x43005588
    // 0x43000FDC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world1_5588(rdram, ctx);
        goto after_1;
    // 0x43000FDC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x43000FE0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43000FE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43000FE8: beq         $v0, $at, L_430010E0
    if (ctx->r2 == ctx->r1) {
        // 0x43000FEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430010E0;
    }
    // 0x43000FEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43000FF0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x43000FF4: jal         0x4300079C
    // 0x43000FF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    ovl_enemy_world1_79C(rdram, ctx);
        goto after_2;
    // 0x43000FF8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x43000FFC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43001000: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43001004: bne         $v0, $zero, L_430010E0
    if (ctx->r2 != 0) {
        // 0x43001008: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430010E0;
    }
    // 0x43001008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300100C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x43001010: jal         0x43005078
    // 0x43001014: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_enemy_world1_5078(rdram, ctx);
        goto after_3;
    // 0x43001014: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x43001018: b           L_430010E4
    // 0x4300101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430010E4;
    // 0x4300101C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43001020: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43001024:
    // 0x43001024: bne         $a1, $at, L_43001094
    if (ctx->r5 != ctx->r1) {
        // 0x43001028: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_43001094;
    }
    // 0x43001028: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300102C: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x43001030: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43001034: sll         $t5, $t4, 15
    ctx->r13 = S32(ctx->r12 << 15);
    // 0x43001038: bgez        $t5, L_43001088
    if (SIGNED(ctx->r13) >= 0) {
        // 0x4300103C: nop
    
            goto L_43001088;
    }
    // 0x4300103C: nop

    // 0x43001040: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x43001044: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001048: beq         $a1, $at, L_43001088
    if (ctx->r5 == ctx->r1) {
        // 0x4300104C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001088;
    }
    // 0x4300104C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001050: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x43001054: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x43001058: jal         0x43001210
    // 0x4300105C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world1_1210(rdram, ctx);
        goto after_4;
    // 0x4300105C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x43001060: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43001064: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43001068: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x4300106C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x43001070: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43001074: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x43001078: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4300107C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43001080: b           L_430010E0
    // 0x43001084: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
        goto L_430010E0;
    // 0x43001084: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
L_43001088:
    // 0x43001088: b           L_430010E0
    // 0x4300108C: sw          $zero, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = 0;
        goto L_430010E0;
    // 0x4300108C: sw          $zero, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = 0;
    // 0x43001090: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_43001094:
    // 0x43001094: bne         $a1, $at, L_430010E0
    if (ctx->r5 != ctx->r1) {
        // 0x43001098: addiu       $v1, $s0, 0x24C
        ctx->r3 = ADD32(ctx->r16, 0X24C);
            goto L_430010E0;
    }
    // 0x43001098: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x4300109C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x430010A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430010A4: beq         $a1, $at, L_430010E0
    if (ctx->r5 == ctx->r1) {
        // 0x430010A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430010E0;
    }
    // 0x430010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430010AC: jal         0x43001348
    // 0x430010B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world1_1348(rdram, ctx);
        goto after_5;
    // 0x430010B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_5:
    // 0x430010B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x430010B8: bne         $v0, $zero, L_430010D0
    if (ctx->r2 != 0) {
        // 0x430010BC: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_430010D0;
    }
    // 0x430010BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430010C0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430010C4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x430010C8: b           L_430010E0
    // 0x430010CC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
        goto L_430010E0;
    // 0x430010CC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_430010D0:
    // 0x430010D0: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x430010D4: sw          $t2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r10;
    // 0x430010D8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x430010DC: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
L_430010E0:
    // 0x430010E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430010E4:
    // 0x430010E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430010E8: jr          $ra
    // 0x430010EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430010EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world1_10F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430010F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430010F4: lwc1        $f0, -0x5FD0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5FD0);
    // 0x430010F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430010FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43001100: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x43001104: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x43001108: bc1t        L_43001114
    if (c1cs) {
        // 0x4300110C: nop
    
            goto L_43001114;
    }
    // 0x4300110C: nop

    // 0x43001110: swc1        $f12, 0x220($a0)
    MEM_W(0X220, ctx->r4) = ctx->f12.u32l;
L_43001114:
    // 0x43001114: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x43001118: nop

    // 0x4300111C: bc1t        L_43001128
    if (c1cs) {
        // 0x43001120: nop
    
            goto L_43001128;
    }
    // 0x43001120: nop

    // 0x43001124: swc1        $f14, 0x224($a0)
    MEM_W(0X224, ctx->r4) = ctx->f14.u32l;
L_43001128:
    // 0x43001128: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x4300112C: nop

    // 0x43001130: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x43001134: nop

    // 0x43001138: bc1t        L_43001144
    if (c1cs) {
        // 0x4300113C: nop
    
            goto L_43001144;
    }
    // 0x4300113C: nop

    // 0x43001140: swc1        $f4, 0x228($a0)
    MEM_W(0X228, ctx->r4) = ctx->f4.u32l;
L_43001144:
    // 0x43001144: jr          $ra
    // 0x43001148: nop

    return;
    // 0x43001148: nop

;}
RECOMP_FUNC void ovl_enemy_world1_114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300114C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001150: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43001154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001158: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4300115C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x43001160: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001164: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x43001168: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4300116C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x43001170: jal         0x430006C4
    // 0x43001174: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001174: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x43001178: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x4300117C: bne         $v0, $zero, L_43001200
    if (ctx->r2 != 0) {
        // 0x43001180: addiu       $t6, $sp, 0x28
        ctx->r14 = ADD32(ctx->r29, 0X28);
            goto L_43001200;
    }
    // 0x43001180: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x43001184: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x43001188: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300118C: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43001190: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x43001194: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x43001198: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4300119C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x430011A0: jal         0x43005218
    // 0x430011A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_1;
    // 0x430011A4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x430011A8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x430011AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430011B0: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x430011B4: jal         0x430006C4
    // 0x430011B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x430011B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x430011BC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430011C0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430011C4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430011C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430011CC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430011D0: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430011D4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430011D8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x430011DC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x430011E0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430011E4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430011E8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x430011EC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x430011F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430011F4: jal         0x430006C4
    // 0x430011F8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x430011F8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x430011FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43001200:
    // 0x43001200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001204: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x43001208: jr          $ra
    // 0x4300120C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300120C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world1_1210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001210: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x43001214: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x43001218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300121C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x43001220: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x43001224: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001228: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x4300122C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001230: jal         0x430006C4
    // 0x43001234: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001234: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x43001238: bne         $v0, $zero, L_4300133C
    if (ctx->r2 != 0) {
        // 0x4300123C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x4300123C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001240: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x43001244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43001248: beq         $v0, $zero, L_43001268
    if (ctx->r2 == 0) {
        // 0x4300124C: nop
    
            goto L_43001268;
    }
    // 0x4300124C: nop

    // 0x43001250: bne         $v0, $at, L_4300133C
    if (ctx->r2 != ctx->r1) {
        // 0x43001254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x43001254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001258: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x4300125C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43001260: bne         $t6, $at, L_4300133C
    if (ctx->r14 != ctx->r1) {
        // 0x43001264: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300133C;
    }
    // 0x43001264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001268:
    // 0x43001268: bne         $v0, $zero, L_4300127C
    if (ctx->r2 != 0) {
        // 0x4300126C: addiu       $t8, $zero, 0x23
        ctx->r24 = ADD32(0, 0X23);
            goto L_4300127C;
    }
    // 0x4300126C: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x43001270: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x43001274: b           L_430012A4
    // 0x43001278: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
        goto L_430012A4;
    // 0x43001278: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
L_4300127C:
    // 0x4300127C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x43001280: jal         0x430007A8
    // 0x43001284: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    ovl_enemy_world1_7A8(rdram, ctx);
        goto after_1;
    // 0x43001284: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    after_1:
    // 0x43001288: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x4300128C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x43001290: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x43001294: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x43001298: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4300129C: jal         0x430006C4
    // 0x430012A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x430012A0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_2:
L_430012A4:
    // 0x430012A4: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x430012A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430012AC: lwc1        $f4, 0x24($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X24);
    // 0x430012B0: lwc1        $f8, -0x5FCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5FCC);
    // 0x430012B4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x430012B8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430012BC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430012C0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x430012C4: nop

    // 0x430012C8: bc1f        L_430012EC
    if (!c1cs) {
        // 0x430012CC: lw          $v0, 0x74($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X74);
            goto L_430012EC;
    }
    // 0x430012CC: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x430012D0: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x430012D4: jal         0x430006C4
    // 0x430012D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x430012D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x430012DC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430012E0: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x430012E4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x430012E8: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
L_430012EC:
    // 0x430012EC: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x430012F0: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x430012F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430012F8: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x430012FC: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x43001300: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x43001304: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x43001308: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x4300130C: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x43001310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43001314: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43001318: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x4300131C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x43001320: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x43001324: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x43001328: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x4300132C: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x43001330: jal         0x43005218
    // 0x43001334: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_4;
    // 0x43001334: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    after_4:
    // 0x43001338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300133C:
    // 0x4300133C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x43001340: jr          $ra
    // 0x43001344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43001344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world1_1348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001348: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4300134C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001350: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43001354: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x43001358: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x4300135C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x43001360: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43001364: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001368: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4300136C: jal         0x430006C4
    // 0x43001370: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001370: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x43001374: bne         $v0, $zero, L_4300141C
    if (ctx->r2 != 0) {
        // 0x43001378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x43001378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300137C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43001380: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43001384: beq         $v0, $zero, L_430013A4
    if (ctx->r2 == 0) {
        // 0x43001388: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_430013A4;
    }
    // 0x43001388: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x4300138C: bne         $v0, $at, L_4300141C
    if (ctx->r2 != ctx->r1) {
        // 0x43001390: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x43001390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001394: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x43001398: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300139C: bne         $t8, $at, L_4300141C
    if (ctx->r24 != ctx->r1) {
        // 0x430013A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x430013A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430013A4:
    // 0x430013A4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x430013A8: addiu       $t1, $sp, 0x18
    ctx->r9 = ADD32(ctx->r29, 0X18);
    // 0x430013AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x430013B0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x430013B4: bne         $v0, $zero, L_430013C8
    if (ctx->r2 != 0) {
        // 0x430013B8: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_430013C8;
    }
    // 0x430013B8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x430013BC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x430013C0: b           L_430013D0
    // 0x430013C4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
        goto L_430013D0;
    // 0x430013C4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_430013C8:
    // 0x430013C8: addiu       $t3, $zero, 0x21
    ctx->r11 = ADD32(0, 0X21);
    // 0x430013CC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_430013D0:
    // 0x430013D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x430013D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x430013D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x430013DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430013E0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x430013E4: jal         0x43005218
    // 0x430013E8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_1;
    // 0x430013E8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_1:
    // 0x430013EC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x430013F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430013F4: beq         $t5, $at, L_4300141C
    if (ctx->r13 == ctx->r1) {
        // 0x430013F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300141C;
    }
    // 0x430013F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430013FC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x43001400: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x43001404: lw          $t7, 0x54($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X54);
    // 0x43001408: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4300140C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x43001410: sw          $t8, 0x54($t6)
    MEM_W(0X54, ctx->r14) = ctx->r24;
    // 0x43001414: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x43001418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300141C:
    // 0x4300141C: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x43001420: jr          $ra
    // 0x43001424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43001424: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world1_1428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001428: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300142C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001430: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43001434: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43001438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300143C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43001440: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43001444: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x43001448: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300144C: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x43001450: jal         0x430006C4
    // 0x43001454: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001454: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300145C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001460: jr          $ra
    // 0x43001464: nop

    return;
    // 0x43001464: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001468: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300146C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001470: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001474: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001478: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300147C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43001480: jal         0x430006C4
    // 0x43001484: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001484: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001488: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x4300148C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x43001490: beq         $t7, $zero, L_430014AC
    if (ctx->r15 == 0) {
        // 0x43001494: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_430014AC;
    }
    // 0x43001494: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x43001498: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4300149C: nop

    // 0x430014A0: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x430014A4: b           L_430014B4
    // 0x430014A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_430014B4;
    // 0x430014A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_430014AC:
    // 0x430014AC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x430014B0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_430014B4:
    // 0x430014B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x430014B8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x430014BC: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x430014C0: jal         0x430006C4
    // 0x430014C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x430014C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x430014C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430014CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430014D0: jr          $ra
    // 0x430014D4: nop

    return;
    // 0x430014D4: nop

;}
RECOMP_FUNC void ovl_enemy_world1_14D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430014D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430014DC: jr          $ra
    // 0x430014E0: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x430014E0: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_enemy_world1_14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430014E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430014E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430014EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430014F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x430014F4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430014F8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x430014FC: jal         0x430006C4
    // 0x43001500: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001500: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001504: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001508: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x4300150C: beq         $t7, $zero, L_43001528
    if (ctx->r15 == 0) {
        // 0x43001510: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_43001528;
    }
    // 0x43001510: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x43001514: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43001518: nop

    // 0x4300151C: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x43001520: b           L_43001530
    // 0x43001524: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_43001530;
    // 0x43001524: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_43001528:
    // 0x43001528: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x4300152C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_43001530:
    // 0x43001530: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x43001534: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43001538: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x4300153C: jal         0x430006C4
    // 0x43001540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x43001540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x43001544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300154C: jr          $ra
    // 0x43001550: nop

    return;
    // 0x43001550: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001554: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300155C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001560: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001564: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001568: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4300156C: jal         0x430006C4
    // 0x43001570: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001570: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43001574: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001578: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x4300157C: beq         $t7, $zero, L_43001598
    if (ctx->r15 == 0) {
        // 0x43001580: ori         $t1, $t0, 0x4
        ctx->r9 = ctx->r8 | 0X4;
            goto L_43001598;
    }
    // 0x43001580: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x43001584: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43001588: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x4300158C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43001590: b           L_4300159C
    // 0x43001594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_4300159C;
    // 0x43001594: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_43001598:
    // 0x43001598: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_4300159C:
    // 0x4300159C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x430015A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x430015A4: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x430015A8: jal         0x430006C4
    // 0x430015AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x430015AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x430015B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430015B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430015B8: jr          $ra
    // 0x430015BC: nop

    return;
    // 0x430015BC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_15C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430015C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430015C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430015C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430015CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x430015D0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430015D4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430015D8: jal         0x430006C4
    // 0x430015DC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x430015DC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x430015E0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x430015E4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x430015E8: beq         $t7, $zero, L_43001604
    if (ctx->r15 == 0) {
        // 0x430015EC: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_43001604;
    }
    // 0x430015EC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x430015F0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x430015F4: nop

    // 0x430015F8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x430015FC: b           L_4300160C
    // 0x43001600: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
        goto L_4300160C;
    // 0x43001600: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_43001604:
    // 0x43001604: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x43001608: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_4300160C:
    // 0x4300160C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x43001610: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x43001614: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x43001618: jal         0x430006C4
    // 0x4300161C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x4300161C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x43001620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001624: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001628: jr          $ra
    // 0x4300162C: nop

    return;
    // 0x4300162C: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001630: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001638: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x4300163C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43001640: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x43001644: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43001648: jal         0x43005218
    // 0x4300164C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_0;
    // 0x4300164C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_0:
    // 0x43001650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001654: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x43001658: jr          $ra
    // 0x4300165C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4300165C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world1_1660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001660: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43001664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001668: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x4300166C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001670: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x43001674: jal         0x430006C4
    // 0x43001678: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001678: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x4300167C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x43001680: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43001684: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43001688: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300168C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43001690: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43001694: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43001698: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x4300169C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x430016A0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x430016A4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x430016A8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x430016AC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x430016B0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x430016B4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x430016B8: jal         0x43005218
    // 0x430016BC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_1;
    // 0x430016BC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x430016C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430016C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x430016C8: jr          $ra
    // 0x430016CC: nop

    return;
    // 0x430016CC: nop

    // 0x430016D0: jr          $ra
    // 0x430016D4: nop

    return;
    // 0x430016D4: nop

;}
RECOMP_FUNC void ovl_enemy_world1_16D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430016D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430016DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430016E0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430016E4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430016E8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x430016EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x430016F0: jal         0x430006C4
    // 0x430016F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x430016F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430016F8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x430016FC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43001700: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43001704: swc1        $f4, 0x1B0($a3)
    MEM_W(0X1B0, ctx->r7) = ctx->f4.u32l;
    // 0x43001708: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300170C: swc1        $f8, 0x1B4($a3)
    MEM_W(0X1B4, ctx->r7) = ctx->f8.u32l;
    // 0x43001710: swc1        $f6, 0x1B8($a3)
    MEM_W(0X1B8, ctx->r7) = ctx->f6.u32l;
    // 0x43001714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300171C: jr          $ra
    // 0x43001720: nop

    return;
    // 0x43001720: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001724: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300172C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001730: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001734: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43001738: jal         0x430006C4
    // 0x4300173C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x4300173C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x43001740: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43001744: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x43001748: nop

    // 0x4300174C: sw          $t7, 0x21C($t8)
    MEM_W(0X21C, ctx->r24) = ctx->r15;
    // 0x43001750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001754: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001758: jr          $ra
    // 0x4300175C: nop

    return;
    // 0x4300175C: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001760: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43001764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001768: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300176C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43001770: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43001774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001778: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x4300177C: beq         $t6, $zero, L_43001800
    if (ctx->r14 == 0) {
        // 0x43001780: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_43001800;
    }
    // 0x43001780: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x43001784: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x43001788: jal         0x43001724
    // 0x4300178C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    ovl_enemy_world1_1724(rdram, ctx);
        goto after_0;
    // 0x4300178C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    after_0:
    // 0x43001790: lw          $a0, 0x21C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X21C);
    // 0x43001794: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001798: jal         0x430006C4
    // 0x4300179C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x4300179C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x430017A0: bne         $v0, $zero, L_43001808
    if (ctx->r2 != 0) {
        // 0x430017A4: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_43001808;
    }
    // 0x430017A4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x430017A8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x430017AC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x430017B0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x430017B4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x430017B8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x430017BC: lw          $t1, 0x21C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X21C);
    // 0x430017C0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x430017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430017C8: beq         $t2, $zero, L_430017DC
    if (ctx->r10 == 0) {
        // 0x430017CC: sw          $t1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r9;
            goto L_430017DC;
    }
    // 0x430017CC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x430017D0: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x430017D4: b           L_430017E4
    // 0x430017D8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
        goto L_430017E4;
    // 0x430017D8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
L_430017DC:
    // 0x430017DC: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x430017E0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
L_430017E4:
    // 0x430017E4: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x430017E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430017EC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x430017F0: jal         0x43005218
    // 0x430017F4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_2;
    // 0x430017F4: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    after_2:
    // 0x430017F8: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x430017FC: nop

L_43001800:
    // 0x43001800: ori         $t6, $v0, 0x100
    ctx->r14 = ctx->r2 | 0X100;
    // 0x43001804: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_43001808:
    // 0x43001808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300180C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001810: jr          $ra
    // 0x43001814: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43001814: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world1_1818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001818: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4300181C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43001820: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001824: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x43001828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300182C: bne         $a0, $at, L_43001840
    if (ctx->r4 != ctx->r1) {
        // 0x43001830: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43001840;
    }
    // 0x43001830: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43001834: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43001838: b           L_430018A8
    // 0x4300183C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_430018A8;
    // 0x4300183C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_43001840:
    // 0x43001840: lw          $t7, 0x54($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X54);
    // 0x43001844: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43001848: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x4300184C: beq         $t8, $zero, L_430018A4
    if (ctx->r24 == 0) {
        // 0x43001850: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_430018A4;
    }
    // 0x43001850: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x43001854: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x43001858: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x4300185C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43001860: jal         0x43001760
    // 0x43001864: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    ovl_enemy_world1_1760(rdram, ctx);
        goto after_0;
    // 0x43001864: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_0:
    // 0x43001868: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4300186C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x43001870: lw          $t0, 0x54($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X54);
    // 0x43001874: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x43001878: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x4300187C: sw          $t1, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->r9;
    // 0x43001880: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x43001884: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43001888: sw          $t2, 0x21C($a3)
    MEM_W(0X21C, ctx->r7) = ctx->r10;
    // 0x4300188C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x43001890: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43001894: jal         0x430006C4
    // 0x43001898: nop

    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x43001898: nop

    after_1:
    // 0x4300189C: b           L_430018AC
    // 0x430018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430018AC;
    // 0x430018A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430018A4:
    // 0x430018A4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_430018A8:
    // 0x430018A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430018AC:
    // 0x430018AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430018B0: jr          $ra
    // 0x430018B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430018B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world1_18B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430018B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430018BC: nop

    // 0x430018C0: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x430018C4: jr          $ra
    // 0x430018C8: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430018C8: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world1_18CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430018CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430018D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430018D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430018D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430018DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430018E0: beq         $a0, $at, L_43001954
    if (ctx->r4 == ctx->r1) {
        // 0x430018E4: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_43001954;
    }
    // 0x430018E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430018E8: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x430018EC: nop

    // 0x430018F0: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x430018F4: beq         $t7, $zero, L_4300190C
    if (ctx->r15 == 0) {
        // 0x430018F8: nop
    
            goto L_4300190C;
    }
    // 0x430018F8: nop

    // 0x430018FC: jal         0x43001760
    // 0x43001900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world1_1760(rdram, ctx);
        goto after_0;
    // 0x43001900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43001904: jal         0x430018B8
    // 0x43001908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world1_18B8(rdram, ctx);
        goto after_1;
    // 0x43001908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_4300190C:
    // 0x4300190C: jal         0x43001724
    // 0x43001910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world1_1724(rdram, ctx);
        goto after_2;
    // 0x43001910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43001914: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43001918: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300191C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43001920: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x43001924: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x43001928: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4300192C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001930: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x43001934: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43001938: nop

    // 0x4300193C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x43001940: nop

    // 0x43001944: bc1t        L_43001958
    if (c1cs) {
        // 0x43001948: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43001958;
    }
    // 0x43001948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300194C: jal         0x43005078
    // 0x43001950: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world1_5078(rdram, ctx);
        goto after_3;
    // 0x43001950: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
L_43001954:
    // 0x43001954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001958:
    // 0x43001958: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300195C: jr          $ra
    // 0x43001960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43001960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world1_1964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001964: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43001968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300196C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x43001970: jal         0x430029F0
    // 0x43001974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world1_29F0(rdram, ctx);
        goto after_0;
    // 0x43001974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x43001978: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x4300197C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43001980: bne         $v0, $at, L_430019A0
    if (ctx->r2 != ctx->r1) {
        // 0x43001984: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_430019A0;
    }
    // 0x43001984: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x43001988: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x4300198C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43001990: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x43001994: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x43001998: jal         0x43002680
    // 0x4300199C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_enemy_world1_2680(rdram, ctx);
        goto after_1;
    // 0x4300199C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_1:
L_430019A0:
    // 0x430019A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430019A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x430019A8: jr          $ra
    // 0x430019AC: nop

    return;
    // 0x430019AC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_19B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430019B0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430019B4: lw          $v0, -0x5880($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5880);
    // 0x430019B8: jr          $ra
    // 0x430019BC: nop

    return;
    // 0x430019BC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_19C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430019C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430019C4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x430019C8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x430019CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430019D0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x430019D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430019D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430019DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430019E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430019E4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430019E8: jal         0x43005250
    // 0x430019EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world1_5250(rdram, ctx);
        goto after_0;
    // 0x430019EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x430019F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430019F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430019F8: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x430019FC: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x43001A00: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_43001A04:
    // 0x43001A04: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x43001A08: nop

    // 0x43001A0C: beq         $s2, $t6, L_43001A48
    if (ctx->r18 == ctx->r14) {
        // 0x43001A10: nop
    
            goto L_43001A48;
    }
    // 0x43001A10: nop

    // 0x43001A14: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43001A18: nop

    // 0x43001A1C: beq         $s2, $a0, L_43001A48
    if (ctx->r18 == ctx->r4) {
        // 0x43001A20: nop
    
            goto L_43001A48;
    }
    // 0x43001A20: nop

    // 0x43001A24: bne         $s5, $zero, L_43001A40
    if (ctx->r21 != 0) {
        // 0x43001A28: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_43001A40;
    }
    // 0x43001A28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43001A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001A30: jal         0x43005078
    // 0x43001A34: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world1_5078(rdram, ctx);
        goto after_1;
    // 0x43001A34: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
    // 0x43001A38: b           L_43001A4C
    // 0x43001A3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_43001A4C;
    // 0x43001A3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_43001A40:
    // 0x43001A40: jal         0x430006C4
    // 0x43001A44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x43001A44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
L_43001A48:
    // 0x43001A48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_43001A4C:
    // 0x43001A4C: bne         $s1, $s3, L_43001A04
    if (ctx->r17 != ctx->r19) {
        // 0x43001A50: addiu       $s0, $s0, 0x268
        ctx->r16 = ADD32(ctx->r16, 0X268);
            goto L_43001A04;
    }
    // 0x43001A50: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
    // 0x43001A54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43001A58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43001A5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43001A60: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43001A64: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43001A68: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43001A6C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43001A70: jr          $ra
    // 0x43001A74: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43001A74: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world1_1A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001A78: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x43001A7C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x43001A80: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43001A84: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43001A88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43001A8C: bne         $t7, $at, L_43001A9C
    if (ctx->r15 != ctx->r1) {
        // 0x43001A90: sll         $t9, $a2, 3
        ctx->r25 = S32(ctx->r6 << 3);
            goto L_43001A9C;
    }
    // 0x43001A90: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x43001A94: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x43001A98: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_43001A9C:
    // 0x43001A9C: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x43001AA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x43001AA4: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x43001AA8: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x43001AAC: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x43001AB0: nop

    // 0x43001AB4: sw          $t0, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r8;
    // 0x43001AB8: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x43001ABC: nop

    // 0x43001AC0: sw          $t1, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r9;
    // 0x43001AC4: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x43001AC8: jr          $ra
    // 0x43001ACC: sw          $t2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r10;
    return;
    // 0x43001ACC: sw          $t2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r10;
;}
RECOMP_FUNC void ovl_enemy_world1_1AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001AD0: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43001AD4: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x43001AD8: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x43001ADC: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43001AE0: jr          $ra
    // 0x43001AE4: sw          $t8, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r24;
    return;
    // 0x43001AE4: sw          $t8, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void ovl_enemy_world1_1AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001AEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001AF0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43001AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001AFC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43001B00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43001B04: jal         0x43004880
    // 0x43001B08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    ovl_enemy_world1_4880(rdram, ctx);
        goto after_0;
    // 0x43001B08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43001B0C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43001B10: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x43001B14: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43001B18: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x43001B1C: nop

    // 0x43001B20: bc1f        L_43001BC8
    if (!c1cs) {
        // 0x43001B24: nop
    
            goto L_43001BC8;
    }
    // 0x43001B24: nop

    // 0x43001B28: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001B2C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x43001B30: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x43001B34: nop

    // 0x43001B38: bc1f        L_43001B84
    if (!c1cs) {
        // 0x43001B3C: nop
    
            goto L_43001B84;
    }
    // 0x43001B3C: nop

    // 0x43001B40: lw          $t6, 0x19C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X19C);
    // 0x43001B44: nop

    // 0x43001B48: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43001B4C: nop

    // 0x43001B50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43001B54: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x43001B58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43001B5C: nop

    // 0x43001B60: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x43001B64: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001B68: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001B6C: nop

    // 0x43001B70: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43001B74: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x43001B78: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43001B7C: b           L_43001C10
    // 0x43001B80: sw          $t8, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r24;
        goto L_43001C10;
    // 0x43001B80: sw          $t8, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r24;
L_43001B84:
    // 0x43001B84: lw          $t9, 0x19C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X19C);
    // 0x43001B88: nop

    // 0x43001B8C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x43001B90: nop

    // 0x43001B94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43001B98: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43001B9C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x43001BA0: nop

    // 0x43001BA4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x43001BA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001BAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001BB0: nop

    // 0x43001BB4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43001BB8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x43001BBC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43001BC0: b           L_43001C10
    // 0x43001BC4: sw          $t1, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r9;
        goto L_43001C10;
    // 0x43001BC4: sw          $t1, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r9;
L_43001BC8:
    // 0x43001BC8: lw          $t2, 0x19C($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X19C);
    // 0x43001BCC: nop

    // 0x43001BD0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x43001BD4: nop

    // 0x43001BD8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001BDC: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x43001BE0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x43001BE4: nop

    // 0x43001BE8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x43001BEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001BF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001BF4: nop

    // 0x43001BF8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x43001BFC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x43001C00: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43001C04: bgez        $t4, L_43001C10
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43001C08: sw          $t4, 0x19C($a1)
        MEM_W(0X19C, ctx->r5) = ctx->r12;
            goto L_43001C10;
    }
    // 0x43001C08: sw          $t4, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r12;
    // 0x43001C0C: sw          $zero, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = 0;
L_43001C10:
    // 0x43001C10: lwc1        $f4, 0x184($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C14: nop

    // 0x43001C18: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x43001C1C: swc1        $f6, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f6.u32l;
    // 0x43001C20: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x43001C24: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C28: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x43001C2C: nop

    // 0x43001C30: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001C34: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43001C38: nop

    // 0x43001C3C: bc1f        L_43001C50
    if (!c1cs) {
        // 0x43001C40: nop
    
            goto L_43001C50;
    }
    // 0x43001C40: nop

    // 0x43001C44: swc1        $f2, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f2.u32l;
    // 0x43001C48: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C4C: nop

L_43001C50:
    // 0x43001C50: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x43001C54: nop

    // 0x43001C58: bc1f        L_43001C6C
    if (!c1cs) {
        // 0x43001C5C: nop
    
            goto L_43001C6C;
    }
    // 0x43001C5C: nop

    // 0x43001C60: swc1        $f14, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f14.u32l;
    // 0x43001C64: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C68: nop

L_43001C6C:
    // 0x43001C6C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43001C70: lw          $t9, 0x19C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X19C);
    // 0x43001C74: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x43001C78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001C7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001C80: nop

    // 0x43001C84: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x43001C88: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x43001C8C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43001C90: sw          $v1, 0x198($a1)
    MEM_W(0X198, ctx->r5) = ctx->r3;
    // 0x43001C94: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x43001C98: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x43001C9C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43001CA0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x43001CA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43001CA8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43001CAC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x43001CB0: nop

    // 0x43001CB4: bc1f        L_43001D04
    if (!c1cs) {
        // 0x43001CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43001D04;
    }
    // 0x43001CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001CBC: sw          $zero, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = 0;
    // 0x43001CC0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x43001CC4: nop

    // 0x43001CC8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x43001CCC: nop

    // 0x43001CD0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001CD4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43001CD8: nop

    // 0x43001CDC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x43001CE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001CE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001CE8: nop

    // 0x43001CEC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43001CF0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x43001CF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43001CF8: sw          $t3, 0x198($a1)
    MEM_W(0X198, ctx->r5) = ctx->r11;
    // 0x43001CFC: nop

    // 0x43001D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001D04:
    // 0x43001D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001D08: jr          $ra
    // 0x43001D0C: nop

    return;
    // 0x43001D0C: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D10: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001D14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001D18: nop

    // 0x43001D1C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43001D20: nop

    // 0x43001D24: bc1f        L_43001D34
    if (!c1cs) {
        // 0x43001D28: nop
    
            goto L_43001D34;
    }
    // 0x43001D28: nop

    // 0x43001D2C: b           L_43001D38
    // 0x43001D30: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
        goto L_43001D38;
    // 0x43001D30: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
L_43001D34:
    // 0x43001D34: swc1        $f12, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f12.u32l;
L_43001D38:
    // 0x43001D38: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43001D3C: lwc1        $f4, 0x184($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X184);
    // 0x43001D40: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43001D44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001D48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001D4C: nop

    // 0x43001D50: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43001D54: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x43001D58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43001D5C: jr          $ra
    // 0x43001D60: sw          $t7, 0x198($a0)
    MEM_W(0X198, ctx->r4) = ctx->r15;
    return;
    // 0x43001D60: sw          $t7, 0x198($a0)
    MEM_W(0X198, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_enemy_world1_1D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001D6C: lwc1        $f4, 0x188($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X188);
    // 0x43001D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001D74: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x43001D78: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x43001D7C: jal         0x43001AE8
    // 0x43001D80: nop

    ovl_enemy_world1_1AE8(rdram, ctx);
        goto after_0;
    // 0x43001D80: nop

    after_0:
    // 0x43001D84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001D88: jal         0x43003AFC
    // 0x43001D8C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_enemy_world1_3AFC(rdram, ctx);
        goto after_1;
    // 0x43001D8C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x43001D90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43001D94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43001D98: nop

    // 0x43001D9C: swc1        $f8, 0x188($t6)
    MEM_W(0X188, ctx->r14) = ctx->f8.u32l;
    // 0x43001DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001DA8: jr          $ra
    // 0x43001DAC: nop

    return;
    // 0x43001DAC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001DBC: jal         0x430014E4
    // 0x43001DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world1_14E4(rdram, ctx);
        goto after_0;
    // 0x43001DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43001DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001DC8: jal         0x43001554
    // 0x43001DCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world1_1554(rdram, ctx);
        goto after_1;
    // 0x43001DCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x43001DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001DD8: jr          $ra
    // 0x43001DDC: nop

    return;
    // 0x43001DDC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43001DE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43001DE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001DF0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43001DF4: bne         $a1, $zero, L_43001E10
    if (ctx->r5 != 0) {
        // 0x43001DF8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_43001E10;
    }
    // 0x43001DF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x43001DFC: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43001E00: nop

    // 0x43001E04: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x43001E08: bne         $t7, $zero, L_43001EBC
    if (ctx->r15 != 0) {
        // 0x43001E0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43001EBC;
    }
    // 0x43001E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001E10:
    // 0x43001E10: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43001E14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43001E18: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x43001E1C: beq         $t8, $zero, L_43001E50
    if (ctx->r24 == 0) {
        // 0x43001E20: or          $t9, $v0, $at
        ctx->r25 = ctx->r2 | ctx->r1;
            goto L_43001E50;
    }
    // 0x43001E20: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x43001E24: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
    // 0x43001E28: jal         0x43004BCC
    // 0x43001E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world1_4BCC(rdram, ctx);
        goto after_0;
    // 0x43001E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43001E30: lw          $t0, 0x54($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X54);
    // 0x43001E34: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x43001E38: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43001E3C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x43001E40: addiu       $at, $zero, -0x2801
    ctx->r1 = ADD32(0, -0X2801);
    // 0x43001E44: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
    // 0x43001E48: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x43001E4C: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
L_43001E50:
    // 0x43001E50: jal         0x43001DB0
    // 0x43001E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world1_1DB0(rdram, ctx);
        goto after_1;
    // 0x43001E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43001E58: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x43001E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E60: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x43001E64: jal         0x43001D64
    // 0x43001E68: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    ovl_enemy_world1_1D64(rdram, ctx);
        goto after_2;
    // 0x43001E68: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    after_2:
    // 0x43001E6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43001E78: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43001E7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43001E80: jal         0x430010F0
    // 0x43001E84: nop

    ovl_enemy_world1_10F0(rdram, ctx);
        goto after_3;
    // 0x43001E84: nop

    after_3:
    // 0x43001E88: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43001E8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x43001E90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x43001E94: bne         $t7, $zero, L_43001EB0
    if (ctx->r15 != 0) {
        // 0x43001E98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001EB0;
    }
    // 0x43001E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E9C: beq         $t8, $zero, L_43001EB0
    if (ctx->r24 == 0) {
        // 0x43001EA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001EB0;
    }
    // 0x43001EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001EA4: jal         0x430014D8
    // 0x43001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world1_14D8(rdram, ctx);
        goto after_4;
    // 0x43001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43001EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43001EB0:
    // 0x43001EB0: jal         0x43001EC8
    // 0x43001EB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world1_1EC8(rdram, ctx);
        goto after_5;
    // 0x43001EB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x43001EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001EBC:
    // 0x43001EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001EC0: jr          $ra
    // 0x43001EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43001EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world1_1EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001EC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43001ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001ED0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43001ED4: lw          $v0, 0x214($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X214);
    // 0x43001ED8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001EDC: beq         $v0, $at, L_43001F0C
    if (ctx->r2 == ctx->r1) {
        // 0x43001EE0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43001F0C;
    }
    // 0x43001EE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43001EE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x43001EE8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001EEC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43001EF0: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x43001EF4: jal         0x430006C4
    // 0x43001EF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43001EF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x43001EFC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43001F00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43001F04: sw          $t6, 0x214($a3)
    MEM_W(0X214, ctx->r7) = ctx->r14;
    // 0x43001F08: sw          $zero, 0x218($a3)
    MEM_W(0X218, ctx->r7) = 0;
L_43001F0C:
    // 0x43001F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001F10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43001F14: jr          $ra
    // 0x43001F18: nop

    return;
    // 0x43001F18: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F1C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43001F20: nop

    // 0x43001F24: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x43001F28: bne         $t7, $zero, L_43001F40
    if (ctx->r15 != 0) {
        // 0x43001F2C: nop
    
            goto L_43001F40;
    }
    // 0x43001F2C: nop

    // 0x43001F30: lwc1        $f4, 0x1D0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1D0);
    // 0x43001F34: lwc1        $f6, 0x1AC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1AC);
    // 0x43001F38: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x43001F3C: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
L_43001F40:
    // 0x43001F40: jr          $ra
    // 0x43001F44: nop

    return;
    // 0x43001F44: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001F50: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001F54: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x43001F58: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43001F5C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43001F60: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43001F64: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x43001F68: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001F6C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x43001F70: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43001F74: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x43001F78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x43001F7C: jal         0x43005218
    // 0x43001F80: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_0;
    // 0x43001F80: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x43001F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001F88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001F8C: jr          $ra
    // 0x43001F90: nop

    return;
    // 0x43001F90: nop

;}
RECOMP_FUNC void ovl_enemy_world1_1F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001F9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001FA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001FA4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43001FA8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43001FAC: lw          $t6, 0x214($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X214);
    // 0x43001FB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001FB4: beq         $t6, $at, L_43001FD0
    if (ctx->r14 == ctx->r1) {
        // 0x43001FB8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43001FD0;
    }
    // 0x43001FB8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43001FBC: lw          $a1, 0x218($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X218);
    // 0x43001FC0: jal         0x43001EC8
    // 0x43001FC4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_enemy_world1_1EC8(rdram, ctx);
        goto after_0;
    // 0x43001FC4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x43001FC8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43001FCC: nop

L_43001FD0:
    // 0x43001FD0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001FD4: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43001FD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43001FDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x43001FE0: lw          $t9, -0x6200($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6200);
    // 0x43001FE4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43001FE8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43001FEC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43001FF0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x43001FF4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x43001FF8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x43001FFC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x43002000: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43002004: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x43002008: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4300200C: jal         0x430006C4
    // 0x43002010: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x43002010: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x43002014: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43002018: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x4300201C: nop

    // 0x43002020: sw          $t0, 0x214($a3)
    MEM_W(0X214, ctx->r7) = ctx->r8;
    // 0x43002024: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x43002028: nop

    // 0x4300202C: sw          $t1, 0x218($a3)
    MEM_W(0X218, ctx->r7) = ctx->r9;
    // 0x43002030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002034: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43002038: jr          $ra
    // 0x4300203C: nop

    return;
    // 0x4300203C: nop

;}
RECOMP_FUNC void ovl_enemy_world1_2040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002040: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43002044: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300204C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002050: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002054: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43002058: jal         0x430006C4
    // 0x4300205C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x4300205C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x43002060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002064: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43002068: jal         0x43005218
    // 0x4300206C: addiu       $a2, $s0, 0x1EC
    ctx->r6 = ADD32(ctx->r16, 0X1EC);
    ovl_enemy_world1_5218(rdram, ctx);
        goto after_1;
    // 0x4300206C: addiu       $a2, $s0, 0x1EC
    ctx->r6 = ADD32(ctx->r16, 0X1EC);
    after_1:
    // 0x43002070: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002074: lwc1        $f4, -0x5FC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5FC8);
    // 0x43002078: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x4300207C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x43002080: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x43002084: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43002088: bc1f        L_430020A4
    if (!c1cs) {
        // 0x4300208C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430020A4;
    }
    // 0x4300208C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43002090: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43002094: nop

    // 0x43002098: swc1        $f6, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f6.u32l;
    // 0x4300209C: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x430020A0: nop

L_430020A4:
    // 0x430020A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430020A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x430020AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430020B0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x430020B4: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x430020B8: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x430020BC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x430020C0: nop

    // 0x430020C4: bc1f        L_430020D8
    if (!c1cs) {
        // 0x430020C8: nop
    
            goto L_430020D8;
    }
    // 0x430020C8: nop

    // 0x430020CC: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x430020D0: b           L_430020DC
    // 0x430020D4: swc1        $f16, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f16.u32l;
        goto L_430020DC;
    // 0x430020D4: swc1        $f16, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f16.u32l;
L_430020D8:
    // 0x430020D8: swc1        $f2, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f2.u32l;
L_430020DC:
    // 0x430020DC: lwc1        $f18, 0x1F0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x430020E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430020E4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x430020E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430020EC: jal         0x430006C4
    // 0x430020F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x430020F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x430020F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x430020F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430020FC: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x43002100: nop

    // 0x43002104: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x43002108: nop

    // 0x4300210C: bc1f        L_43002120
    if (!c1cs) {
        // 0x43002110: nop
    
            goto L_43002120;
    }
    // 0x43002110: nop

    // 0x43002114: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x43002118: b           L_43002124
    // 0x4300211C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_43002124;
    // 0x4300211C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_43002120:
    // 0x43002120: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_43002124:
    // 0x43002124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002128: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300212C: jr          $ra
    // 0x43002130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43002130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world1_2134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002134: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002138: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300213C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43002140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002144: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43002148: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x4300214C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43002150: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x43002154: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002158: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4300215C: jal         0x430006C4
    // 0x43002160: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x43002160: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x43002164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300216C: jr          $ra
    // 0x43002170: nop

    return;
    // 0x43002170: nop

;}
RECOMP_FUNC void ovl_enemy_world1_2174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002174: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300217C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43002180: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43002184: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43002188: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300218C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43002190: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002194: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x43002198: jal         0x430006C4
    // 0x4300219C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x4300219C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x430021A0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x430021A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430021A8: beq         $v0, $at, L_430021C4
    if (ctx->r2 == ctx->r1) {
        // 0x430021AC: addiu       $a1, $zero, 0x27
        ctx->r5 = ADD32(0, 0X27);
            goto L_430021C4;
    }
    // 0x430021AC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x430021B0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x430021B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x430021B8: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x430021BC: jal         0x430006C4
    // 0x430021C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x430021C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
L_430021C4:
    // 0x430021C4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430021C8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x430021CC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x430021D0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x430021D4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x430021D8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x430021DC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x430021E0: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x430021E4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x430021E8: jal         0x430006C4
    // 0x430021EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x430021EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x430021F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430021F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430021F8: jr          $ra
    // 0x430021FC: nop

    return;
    // 0x430021FC: nop

;}
RECOMP_FUNC void ovl_enemy_world1_2200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002200: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43002204: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43002208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300220C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43002210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002214: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x43002218: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4300221C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x43002220: jal         0x43002174
    // 0x43002224: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    ovl_enemy_world1_2174(rdram, ctx);
        goto after_0;
    // 0x43002224: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x43002228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300222C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43002230: jr          $ra
    // 0x43002234: nop

    return;
    // 0x43002234: nop

;}
RECOMP_FUNC void ovl_enemy_world1_2238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300223C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43002244: lbu         $t7, 0x260($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X260);
    // 0x43002248: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x4300224C: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43002250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43002254: bne         $at, $zero, L_43002264
    if (ctx->r1 != 0) {
        // 0x43002258: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43002264;
    }
    // 0x43002258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300225C: b           L_430022D4
    // 0x43002260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_430022D4;
    // 0x43002260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43002264:
    // 0x43002264: lbu         $t8, 0x261($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X261);
    // 0x43002268: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x4300226C: beq         $t8, $v0, L_430022D0
    if (ctx->r24 == ctx->r2) {
        // 0x43002270: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_430022D0;
    }
    // 0x43002270: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x43002274: lw          $t9, 0x264($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X264);
    // 0x43002278: sb          $a1, 0x261($a0)
    MEM_B(0X261, ctx->r4) = ctx->r5;
    // 0x4300227C: sh          $zero, 0x262($a0)
    MEM_H(0X262, ctx->r4) = 0;
    // 0x43002280: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x43002284: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x43002288: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300228C: andi        $t2, $v1, 0x4000
    ctx->r10 = ctx->r3 & 0X4000;
    // 0x43002290: beq         $t2, $zero, L_430022A4
    if (ctx->r10 == 0) {
        // 0x43002294: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_430022A4;
    }
    // 0x43002294: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x43002298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300229C: b           L_430022AC
    // 0x430022A0: nop

        goto L_430022AC;
    // 0x430022A0: nop

L_430022A4:
    // 0x430022A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430022A8: nop

L_430022AC:
    // 0x430022AC: beq         $t3, $zero, L_430022BC
    if (ctx->r11 == 0) {
        // 0x430022B0: andi        $a1, $v1, 0x3FFF
        ctx->r5 = ctx->r3 & 0X3FFF;
            goto L_430022BC;
    }
    // 0x430022B0: andi        $a1, $v1, 0x3FFF
    ctx->r5 = ctx->r3 & 0X3FFF;
    // 0x430022B4: b           L_430022C0
    // 0x430022B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430022C0;
    // 0x430022B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430022BC:
    // 0x430022BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430022C0:
    // 0x430022C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430022C4: jal         0x43002200
    // 0x430022C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_enemy_world1_2200(rdram, ctx);
        goto after_0;
    // 0x430022C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x430022CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430022D0:
    // 0x430022D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_430022D4:
    // 0x430022D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430022D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430022DC: jr          $ra
    // 0x430022E0: nop

    return;
    // 0x430022E0: nop

;}
