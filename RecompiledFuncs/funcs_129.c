#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_demon_ED4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_EE0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_EEC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_EF8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F04(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_F50(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x43000F6C: lw          $t6, -0x5AC0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5AC0);
    // 0x43000F70: nop

    // 0x43000F74: jr          $t6
    // 0x43000F78: nop

    switch (jr_addend_43000F74 >> 2) {
        case 0: goto L_43000F7C; break;
        case 1: goto L_43000F8C; break;
        case 2: goto L_43000F94; break;
        case 3: goto L_43000F94; break;
        case 4: goto L_43000F94; break;
        default: switch_error(__func__, 0x43000F74, 0x4300A540);
    }
    // 0x43000F78: nop

L_43000F7C:
    // 0x43000F7C: jal         0x43000FB0
    // 0x43000F80: nop

    ovl_boss_demon_FB0(rdram, ctx);
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

    ovl_boss_demon_1034(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43000FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43000FB8: jal         0x43008FA4
    // 0x43000FBC: nop

    ovl_boss_demon_8FA4(rdram, ctx);
        goto after_0;
    // 0x43000FBC: nop

    after_0:
    // 0x43000FC0: jal         0x43009C28
    // 0x43000FC4: nop

    ovl_boss_demon_9C28(rdram, ctx);
        goto after_1;
    // 0x43000FC4: nop

    after_1:
    // 0x43000FC8: jal         0x430013F0
    // 0x43000FCC: nop

    ovl_boss_demon_13F0(rdram, ctx);
        goto after_2;
    // 0x43000FCC: nop

    after_2:
    // 0x43000FD0: jal         0x43009CA4
    // 0x43000FD4: nop

    ovl_boss_demon_9CA4(rdram, ctx);
        goto after_3;
    // 0x43000FD4: nop

    after_3:
    // 0x43000FD8: jal         0x430089DC
    // 0x43000FDC: nop

    ovl_boss_demon_89DC(rdram, ctx);
        goto after_4;
    // 0x43000FDC: nop

    after_4:
    // 0x43000FE0: jal         0x43003CDC
    // 0x43000FE4: nop

    ovl_boss_demon_3CDC(rdram, ctx);
        goto after_5;
    // 0x43000FE4: nop

    after_5:
    // 0x43000FE8: jal         0x43001940
    // 0x43000FEC: nop

    ovl_boss_demon_1940(rdram, ctx);
        goto after_6;
    // 0x43000FEC: nop

    after_6:
    // 0x43000FF0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43000FF4: jal         0x43001170
    // 0x43000FF8: sw          $v0, -0x57E8($at)
    MEM_W(-0X57E8, ctx->r1) = ctx->r2;
    ovl_boss_demon_1170(rdram, ctx);
        goto after_7;
    // 0x43000FF8: sw          $v0, -0x57E8($at)
    MEM_W(-0X57E8, ctx->r1) = ctx->r2;
    after_7:
    // 0x43000FFC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001000: addiu       $t7, $t7, -0x5E50
    ctx->r15 = ADD32(ctx->r15, -0X5E50);
    // 0x43001004: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43001008: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300100C: addiu       $t6, $t6, -0x5808
    ctx->r14 = ADD32(ctx->r14, -0X5808);
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
RECOMP_FUNC void ovl_boss_demon_1034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300103C: jal         0x43009CAC
    // 0x43001040: nop

    ovl_boss_demon_9CAC(rdram, ctx);
        goto after_0;
    // 0x43001040: nop

    after_0:
    // 0x43001044: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001048: lw          $a0, -0x57E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X57E8);
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
    // 0x43001060: jal         0x4300898C
    // 0x43001064: nop

    ovl_boss_demon_898C(rdram, ctx);
        goto after_2;
    // 0x43001064: nop

    after_2:
    // 0x43001068: jal         0x43001238
    // 0x4300106C: nop

    ovl_boss_demon_1238(rdram, ctx);
        goto after_3;
    // 0x4300106C: nop

    after_3:
    // 0x43001070: jal         0x43004020
    // 0x43001074: nop

    ovl_boss_demon_4020(rdram, ctx);
        goto after_4;
    // 0x43001074: nop

    after_4:
    // 0x43001078: jal         0x43009DB8
    // 0x4300107C: nop

    ovl_boss_demon_9DB8(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1090(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x430010BC: addiu       $s4, $s4, -0x57F8
    ctx->r20 = ADD32(ctx->r20, -0X57F8);
    // 0x430010C0: addiu       $s3, $s3, -0x5808
    ctx->r19 = ADD32(ctx->r19, -0X5808);
    // 0x430010C4: addiu       $s2, $s2, -0x57EC
    ctx->r18 = ADD32(ctx->r18, -0X57EC);
    // 0x430010C8: addiu       $s0, $s0, -0x5810
    ctx->r16 = ADD32(ctx->r16, -0X5810);
    // 0x430010CC: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
L_430010D0:
    // 0x430010D0: jal         0x43000DE4
    // 0x430010D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_DE4(rdram, ctx);
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
    ovl_boss_demon_6C4(rdram, ctx);
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
    // 0x4300110C: jal         0x43003CAC
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_demon_3CAC(rdram, ctx);
        goto after_2;
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x43001114: jal         0x43001480
    // 0x43001118: nop

    ovl_boss_demon_1480(rdram, ctx);
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
    ovl_boss_demon_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001178: jal         0x43000DE4
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_DE4(rdram, ctx);
        goto after_0;
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43001180: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001184: addiu       $v1, $v1, -0x5810
    ctx->r3 = ADD32(ctx->r3, -0X5810);
    // 0x43001188: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300118C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43001190: addiu       $t6, $t6, -0x5E44
    ctx->r14 = ADD32(ctx->r14, -0X5E44);
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
    ovl_boss_demon_6C4(rdram, ctx);
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
    ovl_boss_demon_820(rdram, ctx);
        goto after_2;
    // 0x430011D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430011D4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430011D8: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430011DC: sw          $v0, -0x5520($at)
    MEM_W(-0X5520, ctx->r1) = ctx->r2;
    // 0x430011E0: addiu       $t0, $t0, -0x5E44
    ctx->r8 = ADD32(ctx->r8, -0X5E44);
    // 0x430011E4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x430011E8: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430011EC: addiu       $t9, $t9, -0x5808
    ctx->r25 = ADD32(ctx->r25, -0X5808);
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
    // 0x43001204: addiu       $v1, $v1, -0x57F8
    ctx->r3 = ADD32(ctx->r3, -0X57F8);
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
    // 0x4300122C: sw          $zero, -0x57EC($at)
    MEM_W(-0X57EC, ctx->r1) = 0;
    // 0x43001230: jr          $ra
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_1238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300123C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001244: lw          $a0, -0x5520($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5520);
    // 0x43001248: jal         0x4300082C
    // 0x4300124C: nop

    ovl_boss_demon_82C(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001260: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43001264: addiu       $t0, $t0, -0x5524
    ctx->r8 = ADD32(ctx->r8, -0X5524);
    // 0x43001268: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x4300126C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001270: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x43001274: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x43001278: lh          $v1, -0x5588($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5588);
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
    // 0x43001290: addiu       $t9, $t9, -0x57E0
    ctx->r25 = ADD32(ctx->r25, -0X57E0);
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
RECOMP_FUNC void ovl_boss_demon_12B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430012B0: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430012B4: addiu       $v1, $v1, -0x57E0
    ctx->r3 = ADD32(ctx->r3, -0X57E0);
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
    // 0x430012E8: addiu       $a1, $a1, -0x5524
    ctx->r5 = ADD32(ctx->r5, -0X5524);
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
    // 0x43001314: sh          $v0, -0x5588($at)
    MEM_H(-0X5588, ctx->r1) = ctx->r2;
L_43001318:
    // 0x43001318: jr          $ra
    // 0x4300131C: nop

    return;
    // 0x4300131C: nop

;}
RECOMP_FUNC void ovl_boss_demon_1320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001320: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001324: lw          $t6, -0x57E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X57E0);
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
    // 0x43001334: lw          $v0, -0x57DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X57DC);
    // 0x43001338: jr          $ra
    // 0x4300133C: nop

    return;
    // 0x4300133C: nop

L_43001340:
    // 0x43001340: lw          $t7, -0x57D4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X57D4);
    // 0x43001344: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001348: bne         $a0, $t7, L_43001360
    if (ctx->r4 != ctx->r15) {
        // 0x4300134C: addiu       $v1, $v1, -0x57C8
        ctx->r3 = ADD32(ctx->r3, -0X57C8);
            goto L_43001360;
    }
    // 0x4300134C: addiu       $v1, $v1, -0x57C8
    ctx->r3 = ADD32(ctx->r3, -0X57C8);
    // 0x43001350: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001354: lw          $v0, -0x57D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X57D0);
    // 0x43001358: jr          $ra
    // 0x4300135C: nop

    return;
    // 0x4300135C: nop

L_43001360:
    // 0x43001360: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001364: addiu       $v0, $v0, -0x5588
    ctx->r2 = ADD32(ctx->r2, -0X5588);
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
RECOMP_FUNC void ovl_boss_demon_13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430013F0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430013F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430013F8: sw          $t6, -0x57E0($at)
    MEM_W(-0X57E0, ctx->r1) = ctx->r14;
    // 0x430013FC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001400: sh          $zero, -0x5588($at)
    MEM_H(-0X5588, ctx->r1) = 0;
    // 0x43001404: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001408: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4300140C: sw          $t7, -0x57D4($at)
    MEM_W(-0X57D4, ctx->r1) = ctx->r15;
    // 0x43001410: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001414: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43001418: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300141C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001420: addiu       $a0, $a0, -0x5584
    ctx->r4 = ADD32(ctx->r4, -0X5584);
    // 0x43001424: addiu       $v1, $v1, -0x57C8
    ctx->r3 = ADD32(ctx->r3, -0X57C8);
    // 0x43001428: sh          $t8, -0x5586($at)
    MEM_H(-0X5586, ctx->r1) = ctx->r24;
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
    // 0x4300147C: sh          $zero, -0x5524($at)
    MEM_H(-0X5524, ctx->r1) = 0;
    return;
    // 0x4300147C: sh          $zero, -0x5524($at)
    MEM_H(-0X5524, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_1480(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x430014A0: addiu       $s3, $s3, -0x5588
    ctx->r19 = ADD32(ctx->r19, -0X5588);
    // 0x430014A4: addiu       $s0, $s0, -0x57E0
    ctx->r16 = ADD32(ctx->r16, -0X57E0);
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
    ovl_boss_demon_6C4(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001520: jr          $ra
    // 0x43001524: nop

    return;
    // 0x43001524: nop

;}
RECOMP_FUNC void ovl_boss_demon_1528(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x43001558: lwc1        $f6, -0x5A70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A70);
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
    // 0x4300157C: lwc1        $f4, -0x5A6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A6C);
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
RECOMP_FUNC void ovl_boss_demon_15A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430015A0: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430015A4: addiu       $t6, $t6, -0x5808
    ctx->r14 = ADD32(ctx->r14, -0X5808);
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
    // 0x430015D0: lwc1        $f4, -0x5A68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A68);
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
    // 0x430015E0: lwc1        $f6, -0x5A64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A64);
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
    // 0x430015F0: lwc1        $f10, -0x5A60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A60);
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
    // 0x43001628: lwc1        $f8, -0x5A5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A5C);
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
RECOMP_FUNC void ovl_boss_demon_1664(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x4300168C: jal         0x43009030
    // 0x43001690: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_9030(rdram, ctx);
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
    // 0x430016A0: jal         0x43009030
    // 0x430016A4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    ovl_boss_demon_9030(rdram, ctx);
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
    // 0x430016B4: jal         0x43009030
    // 0x430016B8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    ovl_boss_demon_9030(rdram, ctx);
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
    // 0x430016C8: jal         0x43009030
    // 0x430016CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    ovl_boss_demon_9030(rdram, ctx);
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
    // 0x430016DC: jal         0x43009030
    // 0x430016E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    ovl_boss_demon_9030(rdram, ctx);
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
    // 0x430016F0: jal         0x43009030
    // 0x430016F4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    ovl_boss_demon_9030(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001740: jr          $ra
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    return;
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_1748(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_1764(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_boss_demon_868(rdram, ctx);
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
    // 0x430017A4: addiu       $s5, $s5, -0x5808
    ctx->r21 = ADD32(ctx->r21, -0X5808);
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
    // 0x430017C4: jal         0x43008DF8
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_1;
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x430017CC: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430017D0: lwc1        $f14, 0x24($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430017D4: jal         0x43008EC4
    // 0x430017D8: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_2;
    // 0x430017D8: nop

    after_2:
    // 0x430017DC: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430017E0: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x430017E4: jal         0x43008EC4
    // 0x430017E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    ovl_boss_demon_8EC4(rdram, ctx);
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
    // 0x43001800: jal         0x430092C8
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_demon_92C8(rdram, ctx);
        goto after_4;
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x43001808: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300180C: jal         0x43009E70
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_5;
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x43001814: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x43001818: jal         0x4300A030
    // 0x4300181C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_A030(rdram, ctx);
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
    ovl_boss_demon_D60(rdram, ctx);
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

    ovl_boss_demon_D54(rdram, ctx);
        goto after_11;
    // 0x430018C0: nop

    after_11:
    // 0x430018C4: jal         0x4300085C
    // 0x430018C8: nop

    ovl_boss_demon_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_190C(uint8_t* rdram, recomp_context* ctx) {
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

    ovl_boss_demon_82C(rdram, ctx);
        goto after_0;
    // 0x43001920: nop

    after_0:
    // 0x43001924: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001928: jal         0x430000F4
    // 0x4300192C: nop

    ovl_boss_demon_F4(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1940(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_boss_demon_E8(rdram, ctx);
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
    ovl_boss_demon_DF0(rdram, ctx);
        goto after_1;
    // 0x43001960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x43001964: jal         0x43000DD8
    // 0x43001968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_DD8(rdram, ctx);
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
    // 0x43001994: lwc1        $f8, -0x5A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A58);
    // 0x43001998: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300199C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430019A0: addiu       $t7, $t7, -0x57F8
    ctx->r15 = ADD32(ctx->r15, -0X57F8);
    // 0x430019A4: addiu       $v1, $v1, -0x5930
    ctx->r3 = ADD32(ctx->r3, -0X5930);
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
    ovl_boss_demon_820(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_demon_1A60(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x43001A70: addiu       $t8, $t8, -0x5DFC
    ctx->r24 = ADD32(ctx->r24, -0X5DFC);
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
    // 0x43001A90: bne         $v0, $a2, L_43001AC8
    if (ctx->r2 != ctx->r6) {
        // 0x43001A94: nop
    
            goto L_43001AC8;
    }
    // 0x43001A94: nop

    // 0x43001A98: bltz        $a2, L_43001AC8
    if (SIGNED(ctx->r6) < 0) {
        // 0x43001A9C: nop
    
            goto L_43001AC8;
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
    // 0x43001AB0: lw          $t9, 0x88($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X88);
    // 0x43001AB4: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x43001AB8: jalr        $t9
    // 0x43001ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43001ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43001AC0: b           L_43001B30
    // 0x43001AC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_43001B30;
    // 0x43001AC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_43001AC8:
    // 0x43001AC8: bltz        $a2, L_43001B00
    if (SIGNED(ctx->r6) < 0) {
        // 0x43001ACC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_43001B00;
    }
    // 0x43001ACC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43001AD0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43001AD4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43001AD8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x43001ADC: jal         0x43000DC0
    // 0x43001AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_2;
    // 0x43001AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43001AE4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43001AE8: jal         0x43009C7C
    // 0x43001AEC: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_3;
    // 0x43001AEC: nop

    after_3:
    // 0x43001AF0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x43001AF4: nop

    // 0x43001AF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43001AFC: nop

L_43001B00:
    // 0x43001B00: bltz        $v0, L_43001B2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x43001B04: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_43001B2C;
    }
    // 0x43001B04: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43001B08: jal         0x43009C50
    // 0x43001B0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_boss_demon_9C50(rdram, ctx);
        goto after_4;
    // 0x43001B0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x43001B10: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x43001B14: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x43001B18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43001B1C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x43001B20: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x43001B24: jal         0x43000DC0
    // 0x43001B28: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_5;
    // 0x43001B28: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    after_5:
L_43001B2C:
    // 0x43001B2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_43001B30:
    // 0x43001B30: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43001B34: addiu       $t1, $t1, -0x5DD0
    ctx->r9 = ADD32(ctx->r9, -0X5DD0);
    // 0x43001B38: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x43001B3C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x43001B40: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43001B44: nop

    // 0x43001B48: bne         $t2, $a0, L_43001B58
    if (ctx->r10 != ctx->r4) {
        // 0x43001B4C: nop
    
            goto L_43001B58;
    }
    // 0x43001B4C: nop

    // 0x43001B50: bgez        $a0, L_43001BCC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43001B54: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43001BCC;
    }
    // 0x43001B54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43001B58:
    // 0x43001B58: bltz        $a0, L_43001B88
    if (SIGNED(ctx->r4) < 0) {
        // 0x43001B5C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_43001B88;
    }
    // 0x43001B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43001B60: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43001B64: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x43001B68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x43001B6C: jal         0x43000DC0
    // 0x43001B70: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_6;
    // 0x43001B70: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x43001B74: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x43001B78: jal         0x43009C7C
    // 0x43001B7C: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_7;
    // 0x43001B7C: nop

    after_7:
    // 0x43001B80: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x43001B84: nop

L_43001B88:
    // 0x43001B88: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43001B8C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x43001B90: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x43001B94: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x43001B98: nop

    // 0x43001B9C: bltz        $a0, L_43001BC8
    if (SIGNED(ctx->r4) < 0) {
        // 0x43001BA0: sw          $a0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r4;
            goto L_43001BC8;
    }
    // 0x43001BA0: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x43001BA4: jal         0x43009C50
    // 0x43001BA8: nop

    ovl_boss_demon_9C50(rdram, ctx);
        goto after_8;
    // 0x43001BA8: nop

    after_8:
    // 0x43001BAC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x43001BB0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x43001BB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43001BB8: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x43001BBC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x43001BC0: jal         0x43000DC0
    // 0x43001BC4: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_9;
    // 0x43001BC4: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_9:
L_43001BC8:
    // 0x43001BC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43001BCC:
    // 0x43001BCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43001BD0: jr          $ra
    // 0x43001BD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001BD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_1BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001BD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001BDC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001BE0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43001BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001BE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001BEC: jal         0x43008DF8
    // 0x43001BF0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_0;
    // 0x43001BF0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x43001BF4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43001BF8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43001BFC: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x43001C00: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43001C04: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43001C08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43001C0C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43001C10: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x43001C14: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43001C18: bc1f        L_43001C2C
    if (!c1cs) {
        // 0x43001C1C: nop
    
            goto L_43001C2C;
    }
    // 0x43001C1C: nop

    // 0x43001C20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001C24: b           L_43001C44
    // 0x43001C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43001C44;
    // 0x43001C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001C2C:
    // 0x43001C2C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43001C30: jal         0x43008EC4
    // 0x43001C34: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_1;
    // 0x43001C34: nop

    after_1:
    // 0x43001C38: jal         0x43009274
    // 0x43001C3C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_9274(rdram, ctx);
        goto after_2;
    // 0x43001C3C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43001C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001C44:
    // 0x43001C44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001C48: jr          $ra
    // 0x43001C4C: nop

    return;
    // 0x43001C4C: nop

;}
RECOMP_FUNC void ovl_boss_demon_1C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001C50: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001C54: lw          $t6, -0x54A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X54A8);
    // 0x43001C58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43001C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001C60: bne         $t6, $zero, L_43001C78
    if (ctx->r14 != 0) {
        // 0x43001C64: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_43001C78;
    }
    // 0x43001C64: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43001C68: jal         0x430093A8
    // 0x43001C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_boss_demon_93A8(rdram, ctx);
        goto after_0;
    // 0x43001C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x43001C70: b           L_43001CC0
    // 0x43001C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43001CC0;
    // 0x43001C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001C78:
    // 0x43001C78: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43001C7C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x43001C80: lw          $v0, 0x28($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X28);
    // 0x43001C84: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x43001C88: bne         $v0, $zero, L_43001CAC
    if (ctx->r2 != 0) {
        // 0x43001C8C: addiu       $a2, $zero, 0x25
        ctx->r6 = ADD32(0, 0X25);
            goto L_43001CAC;
    }
    // 0x43001C8C: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x43001C90: addiu       $a3, $t7, 0x10
    ctx->r7 = ADD32(ctx->r15, 0X10);
    // 0x43001C94: jal         0x43000DC0
    // 0x43001C98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43001C98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x43001C9C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x43001CA0: nop

    // 0x43001CA4: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    // 0x43001CA8: nop

L_43001CAC:
    // 0x43001CAC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x43001CB0: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x43001CB4: jal         0x43009400
    // 0x43001CB8: sw          $t9, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r25;
    ovl_boss_demon_9400(rdram, ctx);
        goto after_2;
    // 0x43001CB8: sw          $t9, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r25;
    after_2:
    // 0x43001CBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001CC0:
    // 0x43001CC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43001CC4: jr          $ra
    // 0x43001CC8: nop

    return;
    // 0x43001CC8: nop

;}
RECOMP_FUNC void ovl_boss_demon_1CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001CCC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001CD0: addiu       $v1, $v1, -0x5500
    ctx->r3 = ADD32(ctx->r3, -0X5500);
    // 0x43001CD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43001CD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43001CDC: bne         $v0, $zero, L_43001D18
    if (ctx->r2 != 0) {
        // 0x43001CE0: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_43001D18;
    }
    // 0x43001CE0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43001CE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x43001CE8: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x43001CEC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001CF0: addiu       $t7, $t7, -0x54C8
    ctx->r15 = ADD32(ctx->r15, -0X54C8);
    // 0x43001CF4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x43001CF8: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x43001CFC: nop

    // 0x43001D00: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x43001D04: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x43001D08: nop

    // 0x43001D0C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x43001D10: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001D14: sw          $a1, -0x54A0($at)
    MEM_W(-0X54A0, ctx->r1) = ctx->r5;
L_43001D18:
    // 0x43001D18: jr          $ra
    // 0x43001D1C: nop

    return;
    // 0x43001D1C: nop

;}
RECOMP_FUNC void ovl_boss_demon_1D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43001D24: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001D28: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001D30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43001D34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43001D38: addiu       $v1, $v1, -0x54C8
    ctx->r3 = ADD32(ctx->r3, -0X54C8);
    // 0x43001D3C: addiu       $v0, $v0, -0x54E8
    ctx->r2 = ADD32(ctx->r2, -0X54E8);
L_43001D40:
    // 0x43001D40: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x43001D44: nop

    // 0x43001D48: beq         $a0, $zero, L_43001D80
    if (ctx->r4 == 0) {
        // 0x43001D4C: nop
    
            goto L_43001D80;
    }
    // 0x43001D4C: nop

    // 0x43001D50: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x43001D54: nop

    // 0x43001D58: bne         $a2, $t6, L_43001D80
    if (ctx->r6 != ctx->r14) {
        // 0x43001D5C: nop
    
            goto L_43001D80;
    }
    // 0x43001D5C: nop

    // 0x43001D60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x43001D64: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x43001D68: nop

    // 0x43001D6C: jalr        $t9
    // 0x43001D70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43001D70: nop

    after_0:
    // 0x43001D74: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x43001D78: b           L_43001D94
    // 0x43001D7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
        goto L_43001D94;
    // 0x43001D7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_43001D80:
    // 0x43001D80: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43001D84: bne         $v0, $v1, L_43001D40
    if (ctx->r2 != ctx->r3) {
        // 0x43001D88: nop
    
            goto L_43001D40;
    }
    // 0x43001D88: nop

    // 0x43001D8C: jal         0x43009388
    // 0x43001D90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_demon_9388(rdram, ctx);
        goto after_1;
    // 0x43001D90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
L_43001D94:
    // 0x43001D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001D98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43001D9C: jr          $ra
    // 0x43001DA0: nop

    return;
    // 0x43001DA0: nop

;}
RECOMP_FUNC void ovl_boss_demon_1DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001DA8: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001DAC: lw          $t6, -0x5E30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5E30);
    // 0x43001DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001DB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43001DB8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001DBC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43001DC0: lwc1        $f12, 0xC($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XC);
    // 0x43001DC4: jal         0x43009E70
    // 0x43001DC8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x43001DC8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    after_0:
    // 0x43001DCC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001DD0: lw          $t7, -0x5E30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5E30);
    // 0x43001DD4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x43001DD8: lwc1        $f12, 0xC($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0XC);
    // 0x43001DDC: jal         0x4300A030
    // 0x43001DE0: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x43001DE0: nop

    after_1:
    // 0x43001DE4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001DE8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43001DEC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001DF0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43001DF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43001DF8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x43001DFC: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43001E00: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x43001E04: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43001E08: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x43001E0C: add.s       $f2, $f16, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x43001E10: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x43001E14: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x43001E18: nop

    // 0x43001E1C: bc1f        L_43001EC4
    if (!c1cs) {
        // 0x43001E20: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_43001EC4;
    }
    // 0x43001E20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001E24: lw          $t9, -0x549C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X549C);
    // 0x43001E28: lw          $t8, -0x54A8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X54A8);
    // 0x43001E2C: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x43001E30: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x43001E34: bne         $at, $zero, L_43001EC4
    if (ctx->r1 != 0) {
        // 0x43001E38: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_43001EC4;
    }
    // 0x43001E38: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001E3C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001E40: jal         0x4300079C
    // 0x43001E44: nop

    ovl_boss_demon_79C(rdram, ctx);
        goto after_2;
    // 0x43001E44: nop

    after_2:
    // 0x43001E48: bne         $v0, $zero, L_43001EC4
    if (ctx->r2 != 0) {
        // 0x43001E4C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_43001EC4;
    }
    // 0x43001E4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001E50: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001E54: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001E58: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43001E5C: nop

    // 0x43001E60: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43001E64: jal         0x4300A1A0
    // 0x43001E68: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_3;
    // 0x43001E68: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_3:
    // 0x43001E6C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x43001E70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43001E74: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001E78: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x43001E7C: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x43001E80: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001E84: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001E88: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x43001E8C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43001E90: nop

    // 0x43001E94: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x43001E98: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x43001E9C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x43001EA0: jal         0x43000784
    // 0x43001EA4: nop

    ovl_boss_demon_784(rdram, ctx);
        goto after_4;
    // 0x43001EA4: nop

    after_4:
    // 0x43001EA8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x43001EAC: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    // 0x43001EB0: jal         0x43000280
    // 0x43001EB4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    ovl_boss_demon_280(rdram, ctx);
        goto after_5;
    // 0x43001EB4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_5:
    // 0x43001EB8: b           L_43001ED0
    // 0x43001EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43001ED0;
    // 0x43001EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43001EC0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_43001EC4:
    // 0x43001EC4: jal         0x43009388
    // 0x43001EC8: nop

    ovl_boss_demon_9388(rdram, ctx);
        goto after_6;
    // 0x43001EC8: nop

    after_6:
    // 0x43001ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001ED0:
    // 0x43001ED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001ED4: jr          $ra
    // 0x43001ED8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001ED8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_1EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001EE0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43001EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001EE8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43001EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001EF0: jal         0x43009030
    // 0x43001EF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_demon_9030(rdram, ctx);
        goto after_0;
    // 0x43001EF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x43001EF8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001EFC: addiu       $a0, $a0, -0x5DA4
    ctx->r4 = ADD32(ctx->r4, -0X5DA4);
    // 0x43001F00: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x43001F04: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43001F08: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x43001F0C: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x43001F10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43001F14: bc1f        L_43001F60
    if (!c1cs) {
        // 0x43001F18: lui         $t6, 0x4301
        ctx->r14 = S32(0X4301 << 16);
            goto L_43001F60;
    }
    // 0x43001F18: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001F1C: addiu       $v0, $t6, -0x5DA4
    ctx->r2 = ADD32(ctx->r14, -0X5DA4);
    // 0x43001F20: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43001F24: mtc1        $zero, $f13
    ctx->f_odd[(13 - 1) * 2] = 0;
    // 0x43001F28: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x43001F2C: nop

L_43001F30:
    // 0x43001F30: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x43001F34: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x43001F38: c.le.d      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.d <= ctx->f12.d;
    // 0x43001F3C: nop

    // 0x43001F40: bc1t        L_43001F60
    if (c1cs) {
        // 0x43001F44: nop
    
            goto L_43001F60;
    }
    // 0x43001F44: nop

    // 0x43001F48: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43001F4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43001F50: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x43001F54: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43001F58: bc1t        L_43001F30
    if (c1cs) {
        // 0x43001F5C: nop
    
            goto L_43001F30;
    }
    // 0x43001F5C: nop

L_43001F60:
    // 0x43001F60: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x43001F64: addu        $t7, $a0, $v0
    ctx->r15 = ADD32(ctx->r4, ctx->r2);
    // 0x43001F68: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x43001F6C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001F70: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x43001F74: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43001F78: bc1f        L_43001F8C
    if (!c1cs) {
        // 0x43001F7C: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_43001F8C;
    }
    // 0x43001F7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x43001F80: lw          $a0, -0x5D8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5D8C);
    // 0x43001F84: jal         0x430095D8
    // 0x43001F88: nop

    ovl_boss_demon_95D8(rdram, ctx);
        goto after_1;
    // 0x43001F88: nop

    after_1:
L_43001F8C:
    // 0x43001F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001F94: jr          $ra
    // 0x43001F98: nop

    return;
    // 0x43001F98: nop

;}
RECOMP_FUNC void ovl_boss_demon_1F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43001FA0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x43001FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001FA8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43001FAC: jal         0x43009030
    // 0x43001FB0: nop

    ovl_boss_demon_9030(rdram, ctx);
        goto after_0;
    // 0x43001FB0: nop

    after_0:
    // 0x43001FB4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001FB8: lwc1        $f12, -0x5A50($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5A50);
    // 0x43001FBC: jal         0x43009030
    // 0x43001FC0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    ovl_boss_demon_9030(rdram, ctx);
        goto after_1;
    // 0x43001FC0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x43001FC4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x43001FC8: jal         0x4300A030
    // 0x43001FCC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_A030(rdram, ctx);
        goto after_2;
    // 0x43001FCC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43001FD0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43001FD4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43001FD8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43001FDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43001FE0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43001FE4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x43001FE8: jal         0x43009E70
    // 0x43001FEC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_3;
    // 0x43001FEC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x43001FF0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43001FF4: nop

    // 0x43001FF8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x43001FFC: jal         0x43008FC8
    // 0x43002000: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    ovl_boss_demon_8FC8(rdram, ctx);
        goto after_4;
    // 0x43002000: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x43002004: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x43002008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x4300200C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43002010: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x43002014: lw          $a1, -0x5D78($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5D78);
    // 0x43002018: jal         0x43006F8C
    // 0x4300201C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    ovl_boss_demon_6F8C(rdram, ctx);
        goto after_5;
    // 0x4300201C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x43002020: beq         $v0, $zero, L_43002030
    if (ctx->r2 == 0) {
        // 0x43002024: lui         $t8, 0x4300
        ctx->r24 = S32(0X4300 << 16);
            goto L_43002030;
    }
    // 0x43002024: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43002028: addiu       $t8, $t8, 0x1EDC
    ctx->r24 = ADD32(ctx->r24, 0X1EDC);
    // 0x4300202C: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
L_43002030:
    // 0x43002030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002034: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43002038: jr          $ra
    // 0x4300203C: nop

    return;
    // 0x4300203C: nop

;}
RECOMP_FUNC void ovl_boss_demon_2040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002040: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43002044: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x43002048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300204C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x43002050: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x43002054: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x43002058: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x4300205C: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43002060: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x43002064: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43002068: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x4300206C: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43002070: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43002074: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002078: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x4300207C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43002080: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43002084: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002088: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300208C: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x43002090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002094: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300209C: jalr        $t9
    // 0x430020A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430020A0: nop

    after_0:
    // 0x430020A4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x430020A8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x430020AC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x430020B0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x430020B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430020B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x430020BC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x430020C0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430020C4: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x430020C8: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430020CC: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430020D0: lwc1        $f24, -0x5A44($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X5A44);
    // 0x430020D4: lwc1        $f25, -0x5A48($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X5A48);
    // 0x430020D8: addiu       $s1, $s1, -0x5500
    ctx->r17 = ADD32(ctx->r17, -0X5500);
    // 0x430020DC: addiu       $s3, $s3, -0x5808
    ctx->r19 = ADD32(ctx->r19, -0X5808);
    // 0x430020E0: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x430020E4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_430020E8:
    // 0x430020E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430020EC: beq         $t6, $zero, L_43002118
    if (ctx->r14 == 0) {
        // 0x430020F0: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_43002118;
    }
    // 0x430020F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x430020F4: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430020F8: lw          $t7, -0x54A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X54A8);
    // 0x430020FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x43002100: bne         $t7, $zero, L_43002110
    if (ctx->r15 != 0) {
        // 0x43002104: nop
    
            goto L_43002110;
    }
    // 0x43002104: nop

    // 0x43002108: b           L_43002244
    // 0x4300210C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_43002244;
    // 0x4300210C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_43002110:
    // 0x43002110: b           L_43002244
    // 0x43002114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002244;
    // 0x43002114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002118:
    // 0x43002118: jal         0x43001BD8
    // 0x4300211C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_demon_1BD8(rdram, ctx);
        goto after_1;
    // 0x4300211C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x43002120: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43002124: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43002128: jal         0x43009274
    // 0x4300212C: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    ovl_boss_demon_9274(rdram, ctx);
        goto after_2;
    // 0x4300212C: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    after_2:
    // 0x43002130: jal         0x43009E28
    // 0x43002134: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_9E28(rdram, ctx);
        goto after_3;
    // 0x43002134: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x43002138: swc1        $f26, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f26.u32l;
    // 0x4300213C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x43002140: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x43002144: c.lt.s      $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f8.fl < ctx->f28.fl;
    // 0x43002148: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x4300214C: bc1f        L_4300215C
    if (!c1cs) {
        // 0x43002150: nop
    
            goto L_4300215C;
    }
    // 0x43002150: nop

    // 0x43002154: b           L_43002168
    // 0x43002158: swc1        $f30, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f30.u32l;
        goto L_43002168;
    // 0x43002158: swc1        $f30, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f30.u32l;
L_4300215C:
    // 0x4300215C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43002160: nop

    // 0x43002164: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_43002168:
    // 0x43002168: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x4300216C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43002170: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x43002174: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002178: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x4300217C: nop

    // 0x43002180: bc1f        L_43002198
    if (!c1cs) {
        // 0x43002184: nop
    
            goto L_43002198;
    }
    // 0x43002184: nop

    // 0x43002188: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300218C: lwc1        $f4, -0x5A40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A40);
    // 0x43002190: b           L_430021A4
    // 0x43002194: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
        goto L_430021A4;
    // 0x43002194: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
L_43002198:
    // 0x43002198: lwc1        $f6, -0x5A3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A3C);
    // 0x4300219C: nop

    // 0x430021A0: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
L_430021A4:
    // 0x430021A4: c.lt.d      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.d < ctx->f24.d;
    // 0x430021A8: nop

    // 0x430021AC: bc1t        L_43002210
    if (c1cs) {
        // 0x430021B0: lui         $at, 0x4448
        ctx->r1 = S32(0X4448 << 16);
            goto L_43002210;
    }
    // 0x430021B0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x430021B4: lwc1        $f12, 0x34($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X34);
    // 0x430021B8: jal         0x43009088
    // 0x430021BC: nop

    ovl_boss_demon_9088(rdram, ctx);
        goto after_4;
    // 0x430021BC: nop

    after_4:
    // 0x430021C0: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x430021C4: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x430021C8: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x430021CC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x430021D0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x430021D4: swc1        $f16, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f16.u32l;
    // 0x430021D8: jalr        $t9
    // 0x430021DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x430021DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430021E0: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x430021E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430021E8: jalr        $t9
    // 0x430021EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430021EC: nop

    after_6:
    // 0x430021F0: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x430021F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x430021F8: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x430021FC: jal         0x43008B98
    // 0x43002200: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_7;
    // 0x43002200: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x43002204: b           L_430020E8
    // 0x43002208: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
        goto L_430020E8;
    // 0x43002208: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x4300220C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
L_43002210:
    // 0x43002210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43002214: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x43002218: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300221C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x43002220: nop

    // 0x43002224: bc1t        L_4300223C
    if (c1cs) {
        // 0x43002228: nop
    
            goto L_4300223C;
    }
    // 0x43002228: nop

    // 0x4300222C: lw          $t8, -0x54A8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X54A8);
    // 0x43002230: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x43002234: bne         $t8, $zero, L_43002244
    if (ctx->r24 != 0) {
        // 0x43002238: nop
    
            goto L_43002244;
    }
    // 0x43002238: nop

L_4300223C:
    // 0x4300223C: b           L_43002244
    // 0x43002240: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_43002244;
    // 0x43002240: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_43002244:
    // 0x43002244: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x43002248: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300224C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43002250: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002254: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002258: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4300225C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002260: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002264: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002268: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x4300226C: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43002270: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43002274: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43002278: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x4300227C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x43002280: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43002284: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43002288: jr          $ra
    // 0x4300228C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x4300228C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_boss_demon_2290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002290: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43002294: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x43002298: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300229C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x430022A0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x430022A4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x430022A8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x430022AC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430022B0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x430022B4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430022B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430022BC: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x430022C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430022C4: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430022C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430022CC: jalr        $t9
    // 0x430022D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430022D0: nop

    after_0:
    // 0x430022D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430022D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430022DC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x430022E0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x430022E4: lwc1        $f4, -0x5A38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A38);
    // 0x430022E8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430022EC: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x430022F0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430022F4: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430022F8: lwc1        $f22, -0x5A2C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X5A2C);
    // 0x430022FC: lwc1        $f23, -0x5A30($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X5A30);
    // 0x43002300: addiu       $s1, $s1, -0x5500
    ctx->r17 = ADD32(ctx->r17, -0X5500);
    // 0x43002304: addiu       $s3, $s3, -0x5808
    ctx->r19 = ADD32(ctx->r19, -0X5808);
    // 0x43002308: addiu       $s2, $sp, 0x44
    ctx->r18 = ADD32(ctx->r29, 0X44);
    // 0x4300230C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_43002310:
    // 0x43002310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002314: beq         $t6, $zero, L_43002324
    if (ctx->r14 == 0) {
        // 0x43002318: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_43002324;
    }
    // 0x43002318: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x4300231C: b           L_4300237C
    // 0x43002320: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
        goto L_4300237C;
    // 0x43002320: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_43002324:
    // 0x43002324: jal         0x43001BD8
    // 0x43002328: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_demon_1BD8(rdram, ctx);
        goto after_1;
    // 0x43002328: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x4300232C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43002330: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43002334: jal         0x43009274
    // 0x43002338: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    ovl_boss_demon_9274(rdram, ctx);
        goto after_2;
    // 0x43002338: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    after_2:
    // 0x4300233C: jal         0x43009E28
    // 0x43002340: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_9E28(rdram, ctx);
        goto after_3;
    // 0x43002340: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x43002344: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x43002348: c.lt.d      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.d < ctx->f22.d;
    // 0x4300234C: nop

    // 0x43002350: bc1t        L_43002378
    if (c1cs) {
        // 0x43002354: nop
    
            goto L_43002378;
    }
    // 0x43002354: nop

    // 0x43002358: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x4300235C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43002360: jalr        $t9
    // 0x43002364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43002368: jal         0x43008B98
    // 0x4300236C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_5;
    // 0x4300236C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x43002370: b           L_43002310
    // 0x43002374: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
        goto L_43002310;
    // 0x43002374: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_43002378:
    // 0x43002378: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_4300237C:
    // 0x4300237C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43002380: nop

    // 0x43002384: lw          $t9, 0xA8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA8);
    // 0x43002388: nop

    // 0x4300238C: jalr        $t9
    // 0x43002390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002390: nop

    after_6:
    // 0x43002394: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43002398: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x4300239C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x430023A0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x430023A4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x430023A8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430023AC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430023B0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x430023B4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x430023B8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x430023BC: jr          $ra
    // 0x430023C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x430023C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_demon_23C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430023C4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x430023C8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x430023CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430023D0: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x430023D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430023D8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x430023DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x430023E0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x430023E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x430023E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x430023EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430023F0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430023F4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x430023F8: addiu       $s6, $s6, -0x5930
    ctx->r22 = ADD32(ctx->r22, -0X5930);
    // 0x430023FC: lw          $s3, 0x58($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X58);
    // 0x43002400: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002404: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x43002408: jal         0x43008DB8
    // 0x4300240C: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    ovl_boss_demon_8DB8(rdram, ctx);
        goto after_0;
    // 0x4300240C: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x43002410: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x43002414: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002418: nop

    // 0x4300241C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x43002420: nop

    // 0x43002424: bc1f        L_4300249C
    if (!c1cs) {
        // 0x43002428: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_4300249C;
    }
    // 0x43002428: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4300242C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43002430: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002434: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x43002438: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x4300243C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002440: jalr        $t9
    // 0x43002444: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002444: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x43002448: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x4300244C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43002450:
    // 0x43002450: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43002454: jal         0x43001BD8
    // 0x43002458: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    ovl_boss_demon_1BD8(rdram, ctx);
        goto after_2;
    // 0x43002458: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x4300245C: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x43002460: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43002464: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43002468: nop

    // 0x4300246C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x43002470: nop

    // 0x43002474: bc1t        L_430024A0
    if (c1cs) {
        // 0x43002478: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_430024A0;
    }
    // 0x43002478: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4300247C: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43002480: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002484: jalr        $t9
    // 0x43002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4300248C: jal         0x43008B98
    // 0x43002490: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_4;
    // 0x43002490: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x43002494: b           L_43002450
    // 0x43002498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43002450;
    // 0x43002498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4300249C:
    // 0x4300249C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_430024A0:
    // 0x430024A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430024A4: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x430024A8: addiu       $s5, $s5, -0x5808
    ctx->r21 = ADD32(ctx->r21, -0X5808);
    // 0x430024AC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x430024B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430024B4: jal         0x43008DB8
    // 0x430024B8: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    ovl_boss_demon_8DB8(rdram, ctx);
        goto after_5;
    // 0x430024B8: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x430024BC: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x430024C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430024C4: nop

    // 0x430024C8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x430024CC: nop

    // 0x430024D0: bc1f        L_43002548
    if (!c1cs) {
        // 0x430024D4: nop
    
            goto L_43002548;
    }
    // 0x430024D4: nop

    // 0x430024D8: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x430024DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430024E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430024E4: jalr        $t9
    // 0x430024E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430024E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x430024EC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430024F0: lw          $t6, -0x54A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X54A8);
    // 0x430024F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430024F8: beq         $t6, $zero, L_4300250C
    if (ctx->r14 == 0) {
        // 0x430024FC: lui         $a1, 0x80FF
        ctx->r5 = S32(0X80FF << 16);
            goto L_4300250C;
    }
    // 0x430024FC: lui         $a1, 0x80FF
    ctx->r5 = S32(0X80FF << 16);
    // 0x43002500: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x43002504: jal         0x43005F50
    // 0x43002508: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_boss_demon_5F50(rdram, ctx);
        goto after_7;
    // 0x43002508: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
L_4300250C:
    // 0x4300250C: lw          $t9, 0xBC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XBC);
    // 0x43002510: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002514: jalr        $t9
    // 0x43002518: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43002518: nop

    after_8:
    // 0x4300251C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43002520: lw          $t7, -0x54A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X54A8);
    // 0x43002524: nop

    // 0x43002528: beq         $t7, $zero, L_4300253C
    if (ctx->r15 == 0) {
        // 0x4300252C: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_4300253C;
    }
    // 0x4300252C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x43002530: jal         0x43005F90
    // 0x43002534: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_demon_5F90(rdram, ctx);
        goto after_9;
    // 0x43002534: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x43002538: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_4300253C:
    // 0x4300253C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002540: b           L_4300256C
    // 0x43002544: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
        goto L_4300256C;
    // 0x43002544: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_43002548:
    // 0x43002548: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300254C: lw          $t8, -0x54A8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X54A8);
    // 0x43002550: lui         $a1, 0x80FF
    ctx->r5 = S32(0X80FF << 16);
    // 0x43002554: beq         $t8, $zero, L_4300256C
    if (ctx->r24 == 0) {
        // 0x43002558: ori         $a1, $a1, 0x8000
        ctx->r5 = ctx->r5 | 0X8000;
            goto L_4300256C;
    }
    // 0x43002558: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x4300255C: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43002560: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x43002564: jal         0x43005FC0
    // 0x43002568: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_boss_demon_5FC0(rdram, ctx);
        goto after_10;
    // 0x43002568: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_10:
L_4300256C:
    // 0x4300256C: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x43002570: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002574: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43002578: jalr        $t9
    // 0x4300257C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x4300257C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x43002580: lw          $t9, 0x84($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X84);
    // 0x43002584: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002588: jalr        $t9
    // 0x4300258C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x4300258C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_12:
    // 0x43002590: lw          $t9, 0xAC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XAC);
    // 0x43002594: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002598: jalr        $t9
    // 0x4300259C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x4300259C: nop

    after_13:
    // 0x430025A0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x430025A4: addiu       $a0, $zero, 0x2F8
    ctx->r4 = ADD32(0, 0X2F8);
    // 0x430025A8: jal         0x43000280
    // 0x430025AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_14;
    // 0x430025AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x430025B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430025B4: lwc1        $f8, -0x5A28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A28);
    // 0x430025B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430025BC: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x430025C0: lw          $t9, 0x98($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X98);
    // 0x430025C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430025C8: jalr        $t9
    // 0x430025CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x430025CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_15:
    // 0x430025D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430025D4: lw          $a0, -0x5E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E2C);
    // 0x430025D8: nop

    // 0x430025DC: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x430025E0: nop

    // 0x430025E4: jalr        $t9
    // 0x430025E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x430025E8: nop

    after_16:
    // 0x430025EC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430025F0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x430025F4: lwc1        $f21, -0x5A20($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X5A20);
    // 0x430025F8: lwc1        $f20, -0x5A1C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5A1C);
    // 0x430025FC: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_43002600:
    // 0x43002600: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43002604: lw          $t1, -0x54A8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X54A8);
    // 0x43002608: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x4300260C: bne         $t1, $zero, L_4300262C
    if (ctx->r9 != 0) {
        // 0x43002610: nop
    
            goto L_4300262C;
    }
    // 0x43002610: nop

    // 0x43002614: lw          $t2, -0x5500($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5500);
    // 0x43002618: nop

    // 0x4300261C: beq         $t2, $zero, L_4300262C
    if (ctx->r10 == 0) {
        // 0x43002620: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_4300262C;
    }
    // 0x43002620: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x43002624: b           L_430027AC
    // 0x43002628: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
        goto L_430027AC;
    // 0x43002628: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
L_4300262C:
    // 0x4300262C: bne         $s4, $zero, L_43002720
    if (ctx->r20 != 0) {
        // 0x43002630: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_43002720;
    }
    // 0x43002630: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x43002634: jal         0x43008DB8
    // 0x43002638: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_8DB8(rdram, ctx);
        goto after_17;
    // 0x43002638: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_17:
    // 0x4300263C: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x43002640: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43002644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002648: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x4300264C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002650: bc1f        L_43002720
    if (!c1cs) {
        // 0x43002654: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_43002720;
    }
    // 0x43002654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002658: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x4300265C: lui         $s1, 0x4300
    ctx->r17 = S32(0X4300 << 16);
    // 0x43002660: lui         $s2, 0x4300
    ctx->r18 = S32(0X4300 << 16);
    // 0x43002664: addiu       $s2, $s2, 0x1D20
    ctx->r18 = ADD32(ctx->r18, 0X1D20);
    // 0x43002668: addiu       $s1, $s1, 0x1C50
    ctx->r17 = ADD32(ctx->r17, 0X1C50);
    // 0x4300266C: jalr        $t9
    // 0x43002670: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x43002670: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_18:
    // 0x43002674: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    // 0x43002678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300267C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002680: jalr        $t9
    // 0x43002684: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x43002684: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x43002688: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x4300268C: lw          $t4, -0x5E30($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5E30);
    // 0x43002690: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002694: lw          $v0, 0x40($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X40);
    // 0x43002698: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x4300269C: sw          $s1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r17;
    // 0x430026A0: sw          $s2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r18;
    // 0x430026A4: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x430026A8: lw          $t9, 0x90($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X90);
    // 0x430026AC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x430026B0: jalr        $t9
    // 0x430026B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x430026B4: nop

    after_20:
    // 0x430026B8: lw          $t9, 0x9C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X9C);
    // 0x430026BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430026C0: jalr        $t9
    // 0x430026C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x430026C4: nop

    after_21:
    // 0x430026C8: lw          $t9, 0xB0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XB0);
    // 0x430026CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430026D0: jalr        $t9
    // 0x430026D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x430026D4: nop

    after_22:
    // 0x430026D8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x430026DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430026E0: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x430026E4: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430026E8: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x430026EC: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x430026F0: lw          $a0, -0x5E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E2C);
    // 0x430026F4: nop

    // 0x430026F8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x430026FC: nop

    // 0x43002700: jalr        $t9
    // 0x43002704: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x43002704: nop

    after_23:
    // 0x43002708: jal         0x43006024
    // 0x4300270C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_demon_6024(rdram, ctx);
        goto after_24;
    // 0x4300270C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_24:
    // 0x43002710: addiu       $a0, $zero, 0x2EF
    ctx->r4 = ADD32(0, 0X2EF);
    // 0x43002714: jal         0x43000280
    // 0x43002718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_25;
    // 0x43002718: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_25:
    // 0x4300271C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_43002720:
    // 0x43002720: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x43002724: jal         0x43008DB8
    // 0x43002728: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_8DB8(rdram, ctx);
        goto after_26;
    // 0x43002728: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_26:
    // 0x4300272C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x43002730: c.lt.d      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.d < ctx->f6.d;
    // 0x43002734: nop

    // 0x43002738: bc1t        L_430027AC
    if (c1cs) {
        // 0x4300273C: nop
    
            goto L_430027AC;
    }
    // 0x4300273C: nop

    // 0x43002740: beq         $s4, $zero, L_43002760
    if (ctx->r20 == 0) {
        // 0x43002744: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_43002760;
    }
    // 0x43002744: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x43002748: lw          $t9, 0x8C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8C);
    // 0x4300274C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002750: jalr        $t9
    // 0x43002754: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_27;
    // 0x43002754: nop

    after_27:
    // 0x43002758: beq         $v0, $zero, L_430027AC
    if (ctx->r2 == 0) {
        // 0x4300275C: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_430027AC;
    }
    // 0x4300275C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
L_43002760:
    // 0x43002760: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43002764: jal         0x43008DF8
    // 0x43002768: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_28;
    // 0x43002768: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_28:
    // 0x4300276C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43002770: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43002774: jal         0x43008EC4
    // 0x43002778: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_29;
    // 0x43002778: nop

    after_29:
    // 0x4300277C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43002780: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002784: jalr        $t9
    // 0x43002788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x43002788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x4300278C: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43002790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002794: jalr        $t9
    // 0x43002798: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x43002798: nop

    after_31:
    // 0x4300279C: jal         0x43008B98
    // 0x430027A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_32;
    // 0x430027A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_32:
    // 0x430027A4: b           L_43002600
    // 0x430027A8: nop

        goto L_43002600;
    // 0x430027A8: nop

L_430027AC:
    // 0x430027AC: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x430027B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430027B4: jalr        $t9
    // 0x430027B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x430027B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x430027BC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430027C0: lw          $a0, -0x5E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E2C);
    // 0x430027C4: nop

    // 0x430027C8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x430027CC: nop

    // 0x430027D0: jalr        $t9
    // 0x430027D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x430027D4: nop

    after_34:
    // 0x430027D8: lw          $t9, 0x94($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X94);
    // 0x430027DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430027E0: jalr        $t9
    // 0x430027E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x430027E4: nop

    after_35:
    // 0x430027E8: lw          $t9, 0x9C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X9C);
    // 0x430027EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430027F0: jalr        $t9
    // 0x430027F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x430027F4: nop

    after_36:
    // 0x430027F8: lui         $t5, 0x4301
    ctx->r13 = S32(0X4301 << 16);
    // 0x430027FC: lw          $t5, -0x54A8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X54A8);
    // 0x43002800: nop

    // 0x43002804: beq         $t5, $zero, L_43002818
    if (ctx->r13 == 0) {
        // 0x43002808: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_43002818;
    }
    // 0x43002808: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x4300280C: jal         0x43006070
    // 0x43002810: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_demon_6070(rdram, ctx);
        goto after_37;
    // 0x43002810: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_37:
    // 0x43002814: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_43002818:
    // 0x43002818: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x4300281C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002820: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002824: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43002828: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x4300282C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x43002830: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x43002834: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x43002838: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x4300283C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x43002840: jr          $ra
    // 0x43002844: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x43002844: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_boss_demon_2848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300284C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43002850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002858: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4300285C: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x43002860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002864: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300286C: jalr        $t9
    // 0x43002870: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43002870: nop

    after_0:
    // 0x43002874: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43002878: addiu       $s1, $s1, -0x5500
    ctx->r17 = ADD32(ctx->r17, -0X5500);
    // 0x4300287C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
L_43002880:
    // 0x43002880: nop

    // 0x43002884: beq         $t6, $zero, L_43002894
    if (ctx->r14 == 0) {
        // 0x43002888: nop
    
            goto L_43002894;
    }
    // 0x43002888: nop

    // 0x4300288C: b           L_430028D8
    // 0x43002890: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_430028D8;
    // 0x43002890: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_43002894:
    // 0x43002894: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43002898: nop

    // 0x4300289C: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x430028A0: nop

    // 0x430028A4: jalr        $t9
    // 0x430028A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430028A8: nop

    after_1:
    // 0x430028AC: beq         $v0, $zero, L_430028D8
    if (ctx->r2 == 0) {
        // 0x430028B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_430028D8;
    }
    // 0x430028B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430028B4: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x430028B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028BC: jalr        $t9
    // 0x430028C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430028C0: nop

    after_2:
    // 0x430028C4: jal         0x43008B98
    // 0x430028C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_3;
    // 0x430028C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x430028CC: b           L_43002880
    // 0x430028D0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
        goto L_43002880;
    // 0x430028D0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x430028D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430028D8:
    // 0x430028D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430028DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430028E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430028E4: jr          $ra
    // 0x430028E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430028E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_28EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430028EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430028F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430028F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430028F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430028FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43002900: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002904: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43002908: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x4300290C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002910: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x43002914: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43002918: addiu       $s4, $s4, -0x5808
    ctx->r20 = ADD32(ctx->r20, -0X5808);
    // 0x4300291C: addiu       $s2, $s2, -0x5500
    ctx->r18 = ADD32(ctx->r18, -0X5500);
    // 0x43002920: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x43002924: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
L_43002928:
    // 0x43002928: beq         $v0, $zero, L_43002938
    if (ctx->r2 == 0) {
        // 0x4300292C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_43002938;
    }
    // 0x4300292C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x43002930: b           L_43002984
    // 0x43002934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43002984;
    // 0x43002934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43002938:
    // 0x43002938: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x4300293C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002940: bne         $t6, $zero, L_43002980
    if (ctx->r14 != 0) {
        // 0x43002944: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_43002980;
    }
    // 0x43002944: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43002948: jal         0x43001BD8
    // 0x4300294C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_boss_demon_1BD8(rdram, ctx);
        goto after_0;
    // 0x4300294C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x43002950: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43002954: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002958: jalr        $t9
    // 0x4300295C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300295C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43002960: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43002964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002968: jalr        $t9
    // 0x4300296C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x4300296C: nop

    after_2:
    // 0x43002970: jal         0x43008B98
    // 0x43002974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_3;
    // 0x43002974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43002978: b           L_43002928
    // 0x4300297C: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
        goto L_43002928;
    // 0x4300297C: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
L_43002980:
    // 0x43002980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43002984:
    // 0x43002984: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43002988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300298C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43002990: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43002994: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43002998: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4300299C: jr          $ra
    // 0x430029A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x430029A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_demon_29A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430029A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430029A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430029AC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x430029B0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x430029B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430029B8: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430029BC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x430029C0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x430029C4: addiu       $a2, $a2, -0x5808
    ctx->r6 = ADD32(ctx->r6, -0X5808);
    // 0x430029C8: jal         0x43008DF8
    // 0x430029CC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_0;
    // 0x430029CC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x430029D0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430029D4: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430029D8: jal         0x43008EC4
    // 0x430029DC: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_1;
    // 0x430029DC: nop

    after_1:
    // 0x430029E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430029E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430029E8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430029EC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x430029F0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x430029F4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x430029F8: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x430029FC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43002A00: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x43002A04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43002A08: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x43002A0C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x43002A10: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43002A14: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x43002A18: jal         0x43006AD0
    // 0x43002A1C: nop

    ovl_boss_demon_6AD0(rdram, ctx);
        goto after_2;
    // 0x43002A1C: nop

    after_2:
    // 0x43002A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002A24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43002A28: jr          $ra
    // 0x43002A2C: nop

    return;
    // 0x43002A2C: nop

;}
RECOMP_FUNC void ovl_boss_demon_2A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002A30: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x43002A34: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002A38: lwc1        $f4, -0x5A18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A18);
    // 0x43002A3C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43002A40: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x43002A44: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x43002A48: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x43002A4C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x43002A50: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43002A54: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43002A58: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43002A5C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43002A60: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43002A64: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43002A68: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002A6C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43002A70: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43002A74: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43002A78: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002A7C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43002A80: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002A84: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x43002A88: lw          $t6, -0x54A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X54A8);
    // 0x43002A8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43002A90: bne         $t6, $at, L_43002AA0
    if (ctx->r14 != ctx->r1) {
        // 0x43002A94: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43002AA0;
    }
    // 0x43002A94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002A98: b           L_43002AA4
    // 0x43002A9C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_43002AA4;
    // 0x43002A9C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_43002AA0:
    // 0x43002AA0: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
L_43002AA4:
    // 0x43002AA4: blez        $s3, L_43002B88
    if (SIGNED(ctx->r19) <= 0) {
        // 0x43002AA8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43002B88;
    }
    // 0x43002AA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43002AAC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x43002AB0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x43002AB4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x43002AB8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x43002ABC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43002AC0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x43002AC4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43002AC8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43002ACC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43002AD0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x43002AD4: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
L_43002AD8:
    // 0x43002AD8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43002ADC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43002AE0: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002AE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002AE8: jalr        $t9
    // 0x43002AEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43002AEC: nop

    after_0:
    // 0x43002AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002AF4: jal         0x430028EC
    // 0x43002AF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_boss_demon_28EC(rdram, ctx);
        goto after_1;
    // 0x43002AF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x43002AFC: beq         $v0, $zero, L_43002B0C
    if (ctx->r2 == 0) {
        // 0x43002B00: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_43002B0C;
    }
    // 0x43002B00: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002B04: b           L_43002BB0
    // 0x43002B08: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_43002BB0;
    // 0x43002B08: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_43002B0C:
    // 0x43002B0C: lw          $t7, 0x58($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X58);
    // 0x43002B10: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x43002B14: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x43002B18: jal         0x43009588
    // 0x43002B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_9588(rdram, ctx);
        goto after_2;
    // 0x43002B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43002B20: jal         0x43009030
    // 0x43002B24: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    ovl_boss_demon_9030(rdram, ctx);
        goto after_3;
    // 0x43002B24: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_3:
    // 0x43002B28: add.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x43002B2C: jal         0x43009030
    // 0x43002B30: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    ovl_boss_demon_9030(rdram, ctx);
        goto after_4;
    // 0x43002B30: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_4:
    // 0x43002B34: nop

    // 0x43002B38: div.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = DIV_S(ctx->f20.fl, ctx->f30.fl);
    // 0x43002B3C: sub.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x43002B40: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x43002B44: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x43002B48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x43002B4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002B50: jal         0x430029A4
    // 0x43002B54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_demon_29A4(rdram, ctx);
        goto after_5;
    // 0x43002B54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x43002B58: addiu       $a0, $zero, 0x2F1
    ctx->r4 = ADD32(0, 0X2F1);
    // 0x43002B5C: jal         0x43000280
    // 0x43002B60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_6;
    // 0x43002B60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43002B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002B68: jal         0x430028EC
    // 0x43002B6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_boss_demon_28EC(rdram, ctx);
        goto after_7;
    // 0x43002B6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_7:
    // 0x43002B70: beq         $v0, $zero, L_43002B80
    if (ctx->r2 == 0) {
        // 0x43002B74: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_43002B80;
    }
    // 0x43002B74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43002B78: b           L_43002BB0
    // 0x43002B7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_43002BB0;
    // 0x43002B7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_43002B80:
    // 0x43002B80: bne         $s1, $s3, L_43002AD8
    if (ctx->r17 != ctx->r19) {
        // 0x43002B84: nop
    
            goto L_43002AD8;
    }
    // 0x43002B84: nop

L_43002B88:
    // 0x43002B88: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43002B8C: nop

    // 0x43002B90: lw          $t9, 0xBC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XBC);
    // 0x43002B94: nop

    // 0x43002B98: jalr        $t9
    // 0x43002B9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43002B9C: nop

    after_8:
    // 0x43002BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002BA4: jal         0x430028EC
    // 0x43002BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_boss_demon_28EC(rdram, ctx);
        goto after_9;
    // 0x43002BA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43002BAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_43002BB0:
    // 0x43002BB0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x43002BB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002BB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002BBC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002BC0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002BC4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002BC8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002BCC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43002BD0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43002BD4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43002BD8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43002BDC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43002BE0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43002BE4: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x43002BE8: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x43002BEC: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x43002BF0: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x43002BF4: jr          $ra
    // 0x43002BF8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x43002BF8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_boss_demon_2BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002BFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43002C00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43002C04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43002C08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002C0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002C10: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x43002C14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43002C18: blez        $a1, L_43002C64
    if (SIGNED(ctx->r5) <= 0) {
        // 0x43002C1C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43002C64;
    }
    // 0x43002C1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43002C20:
    // 0x43002C20: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x43002C24: nop

    // 0x43002C28: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43002C2C: nop

    // 0x43002C30: jalr        $t9
    // 0x43002C34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43002C34: nop

    after_0:
    // 0x43002C38: beq         $v0, $zero, L_43002C68
    if (ctx->r2 == 0) {
        // 0x43002C3C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43002C68;
    }
    // 0x43002C3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43002C40: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43002C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002C48: jalr        $t9
    // 0x43002C4C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002C4C: nop

    after_1:
    // 0x43002C50: jal         0x43008B98
    // 0x43002C54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_2;
    // 0x43002C54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x43002C58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43002C5C: bne         $s0, $s2, L_43002C20
    if (ctx->r16 != ctx->r18) {
        // 0x43002C60: nop
    
            goto L_43002C20;
    }
    // 0x43002C60: nop

L_43002C64:
    // 0x43002C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43002C68:
    // 0x43002C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43002C6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43002C70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43002C74: jr          $ra
    // 0x43002C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43002C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_2C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002C84: jal         0x43002BFC
    // 0x43002C88: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    ovl_boss_demon_2BFC(rdram, ctx);
        goto after_0;
    // 0x43002C88: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_0:
    // 0x43002C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002C94: jr          $ra
    // 0x43002C98: nop

    return;
    // 0x43002C98: nop

;}
RECOMP_FUNC void ovl_boss_demon_2C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002C9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43002CA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002CA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43002CA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002CAC: jal         0x43000244
    // 0x43002CB0: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    ovl_boss_demon_244(rdram, ctx);
        goto after_0;
    // 0x43002CB0: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    after_0:
    // 0x43002CB4: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002CB8: lw          $t6, -0x54AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X54AC);
    // 0x43002CBC: addiu       $a0, $zero, 0x8B2
    ctx->r4 = ADD32(0, 0X8B2);
    // 0x43002CC0: slti        $at, $t6, 0xC
    ctx->r1 = SIGNED(ctx->r14) < 0XC ? 1 : 0;
    // 0x43002CC4: bne         $at, $zero, L_43002CD4
    if (ctx->r1 != 0) {
        // 0x43002CC8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43002CD4;
    }
    // 0x43002CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002CCC: jal         0x43000C10
    // 0x43002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_C10(rdram, ctx);
        goto after_1;
    // 0x43002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_43002CD4:
    // 0x43002CD4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x43002CD8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43002CDC: lw          $s0, 0x58($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X58);
    // 0x43002CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002CE4: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43002CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002CEC: jalr        $t9
    // 0x43002CF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43002CF0: nop

    after_2:
    // 0x43002CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002CF8: lui         $a1, 0xFF00
    ctx->r5 = S32(0XFF00 << 16);
    // 0x43002CFC: jal         0x43005F70
    // 0x43002D00: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_boss_demon_5F70(rdram, ctx);
        goto after_3;
    // 0x43002D00: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x43002D04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43002D08: jal         0x43002C7C
    // 0x43002D0C: nop

    ovl_boss_demon_2C7C(rdram, ctx);
        goto after_4;
    // 0x43002D0C: nop

    after_4:
    // 0x43002D10: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43002D14: addiu       $a2, $a2, -0x54AC
    ctx->r6 = ADD32(ctx->r6, -0X54AC);
    // 0x43002D18: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x43002D1C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43002D20: addiu       $a1, $a1, -0x54A8
    ctx->r5 = ADD32(ctx->r5, -0X54A8);
    // 0x43002D24: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x43002D28: addiu       $v1, $t8, 0x1
    ctx->r3 = ADD32(ctx->r24, 0X1);
    // 0x43002D2C: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x43002D30: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x43002D34: bne         $at, $zero, L_43002D48
    if (ctx->r1 != 0) {
        // 0x43002D38: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43002D48;
    }
    // 0x43002D38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43002D3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43002D40: b           L_43002D5C
    // 0x43002D44: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_43002D5C;
    // 0x43002D44: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_43002D48:
    // 0x43002D48: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x43002D4C: bne         $at, $zero, L_43002D5C
    if (ctx->r1 != 0) {
        // 0x43002D50: nop
    
            goto L_43002D5C;
    }
    // 0x43002D50: nop

    // 0x43002D54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43002D58: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_43002D5C:
    // 0x43002D5C: beq         $a0, $v0, L_43002D6C
    if (ctx->r4 == ctx->r2) {
        // 0x43002D60: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_43002D6C;
    }
    // 0x43002D60: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x43002D64: b           L_43002DB0
    // 0x43002D68: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_43002DB0;
    // 0x43002D68: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_43002D6C:
    // 0x43002D6C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002D70: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43002D74: lw          $t4, -0x57EC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X57EC);
    // 0x43002D78: sw          $t3, -0x54A4($at)
    MEM_W(-0X54A4, ctx->r1) = ctx->r11;
    // 0x43002D7C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002D84: jal         0x43006070
    // 0x43002D88: sw          $t4, -0x5494($at)
    MEM_W(-0X5494, ctx->r1) = ctx->r12;
    ovl_boss_demon_6070(rdram, ctx);
        goto after_5;
    // 0x43002D88: sw          $t4, -0x5494($at)
    MEM_W(-0X5494, ctx->r1) = ctx->r12;
    after_5:
    // 0x43002D8C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43002D90: addiu       $a1, $a1, -0x54A8
    ctx->r5 = ADD32(ctx->r5, -0X54A8);
    // 0x43002D94: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x43002D98: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x43002D9C: beq         $t5, $zero, L_43002DAC
    if (ctx->r13 == 0) {
        // 0x43002DA0: nop
    
            goto L_43002DAC;
    }
    // 0x43002DA0: nop

    // 0x43002DA4: b           L_43002DAC
    // 0x43002DA8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
        goto L_43002DAC;
    // 0x43002DA8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_43002DAC:
    // 0x43002DAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002DB0:
    // 0x43002DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002DB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43002DB8: jr          $ra
    // 0x43002DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43002DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_2DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002DC0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43002DC4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002DC8: lwc1        $f4, -0x5A14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A14);
    // 0x43002DCC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x43002DD0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x43002DD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002DD8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43002DDC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x43002DE0: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x43002DE4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x43002DE8: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43002DEC: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43002DF0: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002DF4: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43002DF8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43002DFC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43002E00: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002E04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43002E08: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43002E0C: addiu       $s0, $s0, -0x54C8
    ctx->r16 = ADD32(ctx->r16, -0X54C8);
    // 0x43002E10: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x43002E14: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x43002E18: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43002E1C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43002E20: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002E24: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x43002E28: jal         0x43008EC4
    // 0x43002E2C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_0;
    // 0x43002E2C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x43002E30: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43002E34: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43002E38: jal         0x43008EC4
    // 0x43002E3C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_1;
    // 0x43002E3C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_1:
    // 0x43002E40: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43002E44: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x43002E48: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x43002E4C: jalr        $t9
    // 0x43002E50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43002E50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x43002E54: lw          $s2, 0x58($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X58);
    // 0x43002E58: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43002E5C: lw          $t9, 0xA4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XA4);
    // 0x43002E60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002E64: jalr        $t9
    // 0x43002E68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43002E68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x43002E6C: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43002E70: addiu       $s3, $s3, -0x5E2C
    ctx->r19 = ADD32(ctx->r19, -0X5E2C);
    // 0x43002E74: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43002E78: nop

    // 0x43002E7C: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x43002E80: nop

    // 0x43002E84: jalr        $t9
    // 0x43002E88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002E88: nop

    after_4:
    // 0x43002E8C: jal         0x43000244
    // 0x43002E90: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    ovl_boss_demon_244(rdram, ctx);
        goto after_5;
    // 0x43002E90: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_5:
    // 0x43002E94: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43002E98: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43002E9C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002EA0: lwc1        $f22, -0x5A10($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X5A10);
    // 0x43002EA4: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x43002EA8: lw          $t9, 0x8C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8C);
L_43002EAC:
    // 0x43002EAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002EB0: jalr        $t9
    // 0x43002EB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002EB4: nop

    after_6:
    // 0x43002EB8: bne         $v0, $zero, L_43002EE4
    if (ctx->r2 != 0) {
        // 0x43002EBC: nop
    
            goto L_43002EE4;
    }
    // 0x43002EBC: nop

    // 0x43002EC0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43002EC4: nop

    // 0x43002EC8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x43002ECC: nop

    // 0x43002ED0: jalr        $t9
    // 0x43002ED4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43002ED4: nop

    after_7:
    // 0x43002ED8: sltiu       $v0, $s0, 0x1
    ctx->r2 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x43002EDC: bne         $v0, $zero, L_43002F1C
    if (ctx->r2 != 0) {
        // 0x43002EE0: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_43002F1C;
    }
    // 0x43002EE0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43002EE4:
    // 0x43002EE4: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43002EE8: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x43002EEC: jalr        $t9
    // 0x43002EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43002EF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x43002EF4: lw          $t9, 0xA0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA0);
    // 0x43002EF8: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x43002EFC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43002F00: jalr        $t9
    // 0x43002F04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43002F04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x43002F08: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x43002F0C: jal         0x43008B98
    // 0x43002F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_10;
    // 0x43002F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x43002F14: b           L_43002EAC
    // 0x43002F18: lw          $t9, 0x8C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8C);
        goto L_43002EAC;
    // 0x43002F18: lw          $t9, 0x8C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8C);
L_43002F1C:
    // 0x43002F1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002F20: lwc1        $f8, -0x5A0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A0C);
    // 0x43002F24: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002F28: swc1        $f8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f8.u32l;
    // 0x43002F2C: lw          $t6, -0x54A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X54A8);
    // 0x43002F30: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43002F34: bne         $t6, $zero, L_43002F44
    if (ctx->r14 != 0) {
        // 0x43002F38: addiu       $a0, $a0, -0x5808
        ctx->r4 = ADD32(ctx->r4, -0X5808);
            goto L_43002F44;
    }
    // 0x43002F38: addiu       $a0, $a0, -0x5808
    ctx->r4 = ADD32(ctx->r4, -0X5808);
    // 0x43002F3C: b           L_43002F78
    // 0x43002F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43002F78;
    // 0x43002F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43002F44:
    // 0x43002F44: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43002F48: jal         0x43008DB8
    // 0x43002F4C: addiu       $a1, $a1, -0x57F8
    ctx->r5 = ADD32(ctx->r5, -0X57F8);
    ovl_boss_demon_8DB8(rdram, ctx);
        goto after_11;
    // 0x43002F4C: addiu       $a1, $a1, -0x57F8
    ctx->r5 = ADD32(ctx->r5, -0X57F8);
    after_11:
    // 0x43002F50: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x43002F54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43002F58: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002F5C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x43002F60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43002F64: bc1f        L_43002F74
    if (!c1cs) {
        // 0x43002F68: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_43002F74;
    }
    // 0x43002F68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x43002F6C: b           L_43002F78
    // 0x43002F70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_43002F78;
    // 0x43002F70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_43002F74:
    // 0x43002F74: sw          $t7, -0x54A4($at)
    MEM_W(-0X54A4, ctx->r1) = ctx->r15;
L_43002F78:
    // 0x43002F78: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43002F7C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43002F80: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43002F84: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002F88: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002F8C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002F90: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002F94: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002F98: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002F9C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x43002FA0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x43002FA4: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x43002FA8: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x43002FAC: jr          $ra
    // 0x43002FB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43002FB0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_demon_2FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002FB4: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002FB8: lw          $t6, -0x5498($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5498);
    // 0x43002FBC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43002FC0: lw          $v1, -0x54A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X54A8);
    // 0x43002FC4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x43002FC8: subu        $v0, $t7, $t6
    ctx->r2 = SUB32(ctx->r15, ctx->r14);
    // 0x43002FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43002FD0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43002FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002FD8: beq         $at, $zero, L_43002FE8
    if (ctx->r1 == 0) {
        // 0x43002FDC: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_43002FE8;
    }
    // 0x43002FDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43002FE0: b           L_430030A4
    // 0x43002FE4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_430030A4;
    // 0x43002FE4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_43002FE8:
    // 0x43002FE8: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43002FEC: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43002FF0: lw          $t9, -0x5494($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5494);
    // 0x43002FF4: lw          $t8, -0x57EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X57EC);
    // 0x43002FF8: nop

    // 0x43002FFC: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x43003000: sltiu       $at, $t0, 0x3C
    ctx->r1 = ctx->r8 < 0X3C ? 1 : 0;
    // 0x43003004: beq         $at, $zero, L_43003014
    if (ctx->r1 == 0) {
        // 0x43003008: nop
    
            goto L_43003014;
    }
    // 0x43003008: nop

    // 0x4300300C: b           L_430030A4
    // 0x43003010: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_430030A4;
    // 0x43003010: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_43003014:
    // 0x43003014: bne         $v0, $v1, L_43003088
    if (ctx->r2 != ctx->r3) {
        // 0x43003018: nop
    
            goto L_43003088;
    }
    // 0x43003018: nop

    // 0x4300301C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x43003020: nop

    // 0x43003024: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x43003028: jal         0x43009E70
    // 0x4300302C: nop

    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x4300302C: nop

    after_0:
    // 0x43003030: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x43003034: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x43003038: lwc1        $f12, 0xC($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0XC);
    // 0x4300303C: jal         0x4300A030
    // 0x43003040: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x43003040: nop

    after_1:
    // 0x43003044: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003048: addiu       $v0, $v0, -0x54C8
    ctx->r2 = ADD32(ctx->r2, -0X54C8);
    // 0x4300304C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43003050: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43003054: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43003058: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4300305C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43003060: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x43003064: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x43003068: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x4300306C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x43003070: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x43003074: nop

    // 0x43003078: bc1f        L_43003088
    if (!c1cs) {
        // 0x4300307C: nop
    
            goto L_43003088;
    }
    // 0x4300307C: nop

    // 0x43003080: b           L_430030A4
    // 0x43003084: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_430030A4;
    // 0x43003084: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_43003088:
    // 0x43003088: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x4300308C: lw          $t3, -0x54A0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X54A0);
    // 0x43003090: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43003094: bne         $t3, $at, L_430030A4
    if (ctx->r11 != ctx->r1) {
        // 0x43003098: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_430030A4;
    }
    // 0x43003098: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x4300309C: b           L_430030A4
    // 0x430030A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_430030A4;
    // 0x430030A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_430030A4:
    // 0x430030A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430030A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430030AC: jr          $ra
    // 0x430030B0: nop

    return;
    // 0x430030B0: nop

;}
