#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000E9C: jr          $t1
    // 0x45000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_mobj_main_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EA8: jr          $t1
    // 0x45000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_mobj_main_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EB4: jr          $t1
    // 0x45000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_mobj_main_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EC0: jr          $t1
    // 0x45000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_mobj_main_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000ECC: jr          $t1
    // 0x45000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_mobj_main_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000ED8: jr          $t1
    // 0x45000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_mobj_main_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EE4: jr          $t1
    // 0x45000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_mobj_main_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EF0: jr          $t1
    // 0x45000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_mobj_main_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000EFC: jr          $t1
    // 0x45000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_mobj_main_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F08: jr          $t1
    // 0x45000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_mobj_main_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F14: jr          $t1
    // 0x45000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_mobj_main_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F20: jr          $t1
    // 0x45000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_mobj_main_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F2C: jr          $t1
    // 0x45000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_mobj_main_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F38: jr          $t1
    // 0x45000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_mobj_main_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000F44: jr          $t1
    // 0x45000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x45000F4C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45000F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45000F58: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45000F5C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x45000F60: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x45000F64: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45000F68: jal         0x4500109C
    // 0x45000F6C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45000F6C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_0:
    // 0x45000F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45000F74: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x45000F78: jr          $ra
    // 0x45000F7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x45000F7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_mobj_main_F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45000F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45000F88: jal         0x45000F50
    // 0x45000F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_F50(rdram, ctx);
        goto after_0;
    // 0x45000F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x45000F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45000F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45000F98: jr          $ra
    // 0x45000F9C: nop

    return;
    // 0x45000F9C: nop

;}
RECOMP_FUNC void ovl_mobj_main_FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45000FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45000FA8: jal         0x45000F50
    // 0x45000FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_F50(rdram, ctx);
        goto after_0;
    // 0x45000FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x45000FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45000FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45000FB8: jr          $ra
    // 0x45000FBC: nop

    return;
    // 0x45000FBC: nop

;}
RECOMP_FUNC void ovl_mobj_main_FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45000FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45000FC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45000FCC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x45000FD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45000FD4: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x45000FD8: beq         $t6, $zero, L_45001010
    if (ctx->r14 == 0) {
        // 0x45000FDC: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_45001010;
    }
    // 0x45000FDC: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x45000FE0: bne         $t7, $zero, L_45000FFC
    if (ctx->r15 != 0) {
        // 0x45000FE4: ori         $t0, $v0, 0x1
        ctx->r8 = ctx->r2 | 0X1;
            goto L_45000FFC;
    }
    // 0x45000FE4: ori         $t0, $v0, 0x1
    ctx->r8 = ctx->r2 | 0X1;
    // 0x45000FE8: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45000FEC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x45000FF0: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x45000FF4: bne         $t9, $zero, L_45001008
    if (ctx->r25 != 0) {
        // 0x45000FF8: and         $t1, $v0, $at
        ctx->r9 = ctx->r2 & ctx->r1;
            goto L_45001008;
    }
    // 0x45000FF8: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
L_45000FFC:
    // 0x45000FFC: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x45001000: b           L_45001034
    // 0x45001004: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_45001034;
    // 0x45001004: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_45001008:
    // 0x45001008: b           L_45001034
    // 0x4500100C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
        goto L_45001034;
    // 0x4500100C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_45001010:
    // 0x45001010: lw          $t2, 0x184($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X184);
    // 0x45001014: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x45001018: andi        $t3, $t2, 0x10
    ctx->r11 = ctx->r10 & 0X10;
    // 0x4500101C: bne         $t3, $zero, L_45001030
    if (ctx->r11 != 0) {
        // 0x45001020: and         $t5, $v0, $at
        ctx->r13 = ctx->r2 & ctx->r1;
            goto L_45001030;
    }
    // 0x45001020: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x45001024: ori         $t4, $v0, 0x1
    ctx->r12 = ctx->r2 | 0X1;
    // 0x45001028: b           L_45001034
    // 0x4500102C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_45001034;
    // 0x4500102C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_45001030:
    // 0x45001030: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
L_45001034:
    // 0x45001034: beq         $v1, $zero, L_45001090
    if (ctx->r3 == 0) {
        // 0x45001038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45001090;
    }
    // 0x45001038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500103C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45001040: lui         $v0, 0x4501
    ctx->r2 = S32(0X4501 << 16);
    // 0x45001044: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x45001048: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x4500104C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45001050: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x45001054: lbu         $v0, 0x786($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X786);
    // 0x45001058: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x4500105C: bne         $v0, $at, L_4500106C
    if (ctx->r2 != ctx->r1) {
        // 0x45001060: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_4500106C;
    }
    // 0x45001060: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45001064: b           L_4500106C
    // 0x45001068: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_4500106C;
    // 0x45001068: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_4500106C:
    // 0x4500106C: beq         $v1, $zero, L_4500108C
    if (ctx->r3 == 0) {
        // 0x45001070: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_4500108C;
    }
    // 0x45001070: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x45001074: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45001078: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x4500107C: lw          $t9, 0x480($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X480);
    // 0x45001080: nop

    // 0x45001084: jalr        $t9
    // 0x45001088: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x45001088: nop

    after_0:
L_4500108C:
    // 0x4500108C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45001090:
    // 0x45001090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45001094: jr          $ra
    // 0x45001098: nop

    return;
    // 0x45001098: nop

;}
RECOMP_FUNC void ovl_mobj_main_109C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500109C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450010A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450010A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450010A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x450010AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x450010B0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x450010B4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x450010B8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x450010BC: jal         0x450007FC
    // 0x450010C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_7FC(rdram, ctx);
        goto after_0;
    // 0x450010C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x450010C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450010C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x450010CC: jr          $ra
    // 0x450010D0: nop

    return;
    // 0x450010D0: nop

;}
RECOMP_FUNC void ovl_mobj_main_10D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450010D4: jr          $ra
    // 0x450010D8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x450010D8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_mobj_main_10DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450010DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450010E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x450010E4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x450010E8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x450010EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x450010F0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x450010F4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x450010F8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x450010FC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x45001100: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x45001104: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x45001108: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x4500110C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x45001110: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x45001114: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x45001118: sw          $zero, 0x58($v1)
    MEM_W(0X58, ctx->r3) = 0;
    // 0x4500111C: sw          $a1, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r5;
    // 0x45001120: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x45001124: sw          $a1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r5;
    // 0x45001128: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x4500112C: sw          $a1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r5;
    // 0x45001130: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x45001134: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x45001138: swc1        $f0, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f0.u32l;
    // 0x4500113C: swc1        $f0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f0.u32l;
    // 0x45001140: swc1        $f0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f0.u32l;
    // 0x45001144: swc1        $f0, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f0.u32l;
    // 0x45001148: swc1        $f0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f0.u32l;
    // 0x4500114C: swc1        $f0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f0.u32l;
    // 0x45001150: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x45001154: swc1        $f0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f0.u32l;
    // 0x45001158: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x4500115C: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x45001160: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x45001164: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x45001168: jr          $ra
    // 0x4500116C: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    return;
    // 0x4500116C: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_mobj_main_1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001170: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x45001174: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x45001178: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x4500117C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x45001180: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x45001184: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x45001188: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x4500118C: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x45001190: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x45001194: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x45001198: sw          $a3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r7;
    // 0x4500119C: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x450011A0: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x450011A4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x450011A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x450011AC: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x450011B0: addiu       $v1, $a0, 0x38
    ctx->r3 = ADD32(ctx->r4, 0X38);
    // 0x450011B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_450011B8:
    // 0x450011B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x450011BC: sw          $a2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r6;
    // 0x450011C0: sw          $a3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r7;
    // 0x450011C4: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x450011C8: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x450011CC: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x450011D0: sw          $a2, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r6;
    // 0x450011D4: sw          $a3, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r7;
    // 0x450011D8: sw          $t0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r8;
    // 0x450011DC: sw          $t1, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r9;
    // 0x450011E0: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
    // 0x450011E4: sw          $a2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r6;
    // 0x450011E8: sw          $a3, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r7;
    // 0x450011EC: sw          $t0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r8;
    // 0x450011F0: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    // 0x450011F4: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x450011F8: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x450011FC: sw          $a2, -0x6C($v1)
    MEM_W(-0X6C, ctx->r3) = ctx->r6;
    // 0x45001200: sw          $a3, -0x68($v1)
    MEM_W(-0X68, ctx->r3) = ctx->r7;
    // 0x45001204: sw          $t0, -0x64($v1)
    MEM_W(-0X64, ctx->r3) = ctx->r8;
    // 0x45001208: sw          $t1, -0x60($v1)
    MEM_W(-0X60, ctx->r3) = ctx->r9;
    // 0x4500120C: bne         $v0, $a1, L_450011B8
    if (ctx->r2 != ctx->r5) {
        // 0x45001210: sw          $zero, -0x5C($v1)
        MEM_W(-0X5C, ctx->r3) = 0;
            goto L_450011B8;
    }
    // 0x45001210: sw          $zero, -0x5C($v1)
    MEM_W(-0X5C, ctx->r3) = 0;
    // 0x45001214: sw          $t1, 0x124($a0)
    MEM_W(0X124, ctx->r4) = ctx->r9;
    // 0x45001218: jr          $ra
    // 0x4500121C: sw          $a3, 0x128($a0)
    MEM_W(0X128, ctx->r4) = ctx->r7;
    return;
    // 0x4500121C: sw          $a3, 0x128($a0)
    MEM_W(0X128, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void ovl_mobj_main_1220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45001224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45001228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500122C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45001230: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x45001234: jal         0x4500109C
    // 0x45001238: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45001238: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4500123C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001240: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x45001244: jal         0x4500109C
    // 0x45001248: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x45001248: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x4500124C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x45001250: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x45001254: sw          $zero, 0x180($s0)
    MEM_W(0X180, ctx->r16) = 0;
    // 0x45001258: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500125C: sw          $t6, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r14;
    // 0x45001260: sw          $zero, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = 0;
    // 0x45001264: jal         0x45001170
    // 0x45001268: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    ovl_mobj_main_1170(rdram, ctx);
        goto after_2;
    // 0x45001268: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    after_2:
    // 0x4500126C: jal         0x450010D4
    // 0x45001270: addiu       $a0, $s0, 0x1C8
    ctx->r4 = ADD32(ctx->r16, 0X1C8);
    ovl_mobj_main_10D4(rdram, ctx);
        goto after_3;
    // 0x45001270: addiu       $a0, $s0, 0x1C8
    ctx->r4 = ADD32(ctx->r16, 0X1C8);
    after_3:
    // 0x45001274: jal         0x450010DC
    // 0x45001278: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    ovl_mobj_main_10DC(rdram, ctx);
        goto after_4;
    // 0x45001278: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    after_4:
    // 0x4500127C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45001280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45001284: jr          $ra
    // 0x45001288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x45001288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_128C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500128C: addiu       $sp, $sp, -0x2D0
    ctx->r29 = ADD32(ctx->r29, -0X2D0);
    // 0x45001290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45001294: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x45001298: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x4500129C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x450012A0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x450012A4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x450012A8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x450012AC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x450012B0: jal         0x4500109C
    // 0x450012B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x450012B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x450012B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450012BC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x450012C0: jr          $ra
    // 0x450012C4: addiu       $sp, $sp, 0x2D0
    ctx->r29 = ADD32(ctx->r29, 0X2D0);
    return;
    // 0x450012C4: addiu       $sp, $sp, 0x2D0
    ctx->r29 = ADD32(ctx->r29, 0X2D0);
;}
RECOMP_FUNC void ovl_mobj_main_12C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450012C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450012CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450012D0: jal         0x4500128C
    // 0x450012D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_128C(rdram, ctx);
        goto after_0;
    // 0x450012D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x450012D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x450012DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x450012E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x450012E4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
L_450012E8:
    // 0x450012E8: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x450012EC: nop

    // 0x450012F0: bne         $v0, $t6, L_45001314
    if (ctx->r2 != ctx->r14) {
        // 0x450012F4: nop
    
            goto L_45001314;
    }
    // 0x450012F4: nop

    // 0x450012F8: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x450012FC: addiu       $a0, $a0, -0x710
    ctx->r4 = ADD32(ctx->r4, -0X710);
    // 0x45001300: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x45001304: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x45001308: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x4500130C: b           L_450013A8
    // 0x45001310: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
        goto L_450013A8;
    // 0x45001310: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_45001314:
    // 0x45001314: lw          $t9, 0x2AC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001318: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x4500131C: bne         $v0, $t9, L_45001340
    if (ctx->r2 != ctx->r25) {
        // 0x45001320: nop
    
            goto L_45001340;
    }
    // 0x45001320: nop

    // 0x45001324: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x45001328: addiu       $a0, $a0, -0x710
    ctx->r4 = ADD32(ctx->r4, -0X710);
    // 0x4500132C: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x45001330: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x45001334: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x45001338: b           L_450013A8
    // 0x4500133C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
        goto L_450013A8;
    // 0x4500133C: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
L_45001340:
    // 0x45001340: lw          $t2, 0x2AC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001344: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x45001348: bne         $v0, $t2, L_4500136C
    if (ctx->r2 != ctx->r10) {
        // 0x4500134C: nop
    
            goto L_4500136C;
    }
    // 0x4500134C: nop

    // 0x45001350: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x45001354: addiu       $a0, $a0, -0x710
    ctx->r4 = ADD32(ctx->r4, -0X710);
    // 0x45001358: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x4500135C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x45001360: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x45001364: b           L_450013A8
    // 0x45001368: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
        goto L_450013A8;
    // 0x45001368: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
L_4500136C:
    // 0x4500136C: lw          $t5, 0x2AC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001370: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x45001374: bne         $v0, $t5, L_4500139C
    if (ctx->r2 != ctx->r13) {
        // 0x45001378: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_4500139C;
    }
    // 0x45001378: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x4500137C: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x45001380: addiu       $a0, $a0, -0x710
    ctx->r4 = ADD32(ctx->r4, -0X710);
    // 0x45001384: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x45001388: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x4500138C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45001390: b           L_450013A8
    // 0x45001394: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_450013A8;
    // 0x45001394: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x45001398: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_4500139C:
    // 0x4500139C: bne         $a0, $a1, L_450012E8
    if (ctx->r4 != ctx->r5) {
        // 0x450013A0: addiu       $v1, $v1, 0x2A8
        ctx->r3 = ADD32(ctx->r3, 0X2A8);
            goto L_450012E8;
    }
    // 0x450013A0: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x450013A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_450013A8:
    // 0x450013A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450013AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450013B0: jr          $ra
    // 0x450013B4: nop

    return;
    // 0x450013B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_13B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450013B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450013BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450013C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x450013C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x450013C8: jal         0x4500128C
    // 0x450013CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_128C(rdram, ctx);
        goto after_0;
    // 0x450013CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x450013D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x450013D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x450013D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x450013DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x450013E0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
L_450013E4:
    // 0x450013E4: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x450013E8: nop

    // 0x450013EC: beq         $v0, $t6, L_4500140C
    if (ctx->r2 == ctx->r14) {
        // 0x450013F0: nop
    
            goto L_4500140C;
    }
    // 0x450013F0: nop

    // 0x450013F4: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x450013F8: nop

    // 0x450013FC: bne         $a1, $t7, L_4500140C
    if (ctx->r5 != ctx->r15) {
        // 0x45001400: nop
    
            goto L_4500140C;
    }
    // 0x45001400: nop

    // 0x45001404: b           L_45001490
    // 0x45001408: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_45001490;
    // 0x45001408: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4500140C:
    // 0x4500140C: lw          $t8, 0x2AC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001410: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x45001414: beq         $v0, $t8, L_45001434
    if (ctx->r2 == ctx->r24) {
        // 0x45001418: nop
    
            goto L_45001434;
    }
    // 0x45001418: nop

    // 0x4500141C: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x45001420: nop

    // 0x45001424: bne         $a1, $t9, L_45001434
    if (ctx->r5 != ctx->r25) {
        // 0x45001428: nop
    
            goto L_45001434;
    }
    // 0x45001428: nop

    // 0x4500142C: b           L_45001490
    // 0x45001430: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_45001490;
    // 0x45001430: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_45001434:
    // 0x45001434: lw          $t0, 0x2AC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001438: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x4500143C: beq         $v0, $t0, L_4500145C
    if (ctx->r2 == ctx->r8) {
        // 0x45001440: nop
    
            goto L_4500145C;
    }
    // 0x45001440: nop

    // 0x45001444: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x45001448: nop

    // 0x4500144C: bne         $a1, $t1, L_4500145C
    if (ctx->r5 != ctx->r9) {
        // 0x45001450: nop
    
            goto L_4500145C;
    }
    // 0x45001450: nop

    // 0x45001454: b           L_45001490
    // 0x45001458: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_45001490;
    // 0x45001458: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4500145C:
    // 0x4500145C: lw          $t2, 0x2AC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2AC);
    // 0x45001460: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x45001464: beq         $v0, $t2, L_45001484
    if (ctx->r2 == ctx->r10) {
        // 0x45001468: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_45001484;
    }
    // 0x45001468: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x4500146C: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x45001470: nop

    // 0x45001474: bne         $a1, $t3, L_45001484
    if (ctx->r5 != ctx->r11) {
        // 0x45001478: nop
    
            goto L_45001484;
    }
    // 0x45001478: nop

    // 0x4500147C: b           L_45001490
    // 0x45001480: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_45001490;
    // 0x45001480: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_45001484:
    // 0x45001484: bne         $a0, $a2, L_450013E4
    if (ctx->r4 != ctx->r6) {
        // 0x45001488: addiu       $v1, $v1, 0x2A8
        ctx->r3 = ADD32(ctx->r3, 0X2A8);
            goto L_450013E4;
    }
    // 0x45001488: addiu       $v1, $v1, 0x2A8
    ctx->r3 = ADD32(ctx->r3, 0X2A8);
    // 0x4500148C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_45001490:
    // 0x45001490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45001494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45001498: jr          $ra
    // 0x4500149C: nop

    return;
    // 0x4500149C: nop

;}
RECOMP_FUNC void ovl_mobj_main_14A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450014A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450014A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450014A8: lw          $v0, 0x180($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X180);
    // 0x450014AC: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x450014B0: beq         $v0, $zero, L_450014D8
    if (ctx->r2 == 0) {
        // 0x450014B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450014D8;
    }
    // 0x450014B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450014B8: beq         $v0, $at, L_450014CC
    if (ctx->r2 == ctx->r1) {
        // 0x450014BC: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_450014CC;
    }
    // 0x450014BC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x450014C0: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x450014C4: bne         $v0, $at, L_450014D8
    if (ctx->r2 != ctx->r1) {
        // 0x450014C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450014D8;
    }
    // 0x450014C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450014CC:
    // 0x450014CC: jal         0x4500109C
    // 0x450014D0: addiu       $a2, $a0, 0x18C
    ctx->r6 = ADD32(ctx->r4, 0X18C);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x450014D0: addiu       $a2, $a0, 0x18C
    ctx->r6 = ADD32(ctx->r4, 0X18C);
    after_0:
    // 0x450014D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450014D8:
    // 0x450014D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450014DC: jr          $ra
    // 0x450014E0: nop

    return;
    // 0x450014E0: nop

;}
RECOMP_FUNC void ovl_mobj_main_14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450014E4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x450014E8: nop

    // 0x450014EC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x450014F0: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x450014F4: nop

    // 0x450014F8: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x450014FC: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x45001500: nop

    // 0x45001504: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x45001508: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x4500150C: nop

    // 0x45001510: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x45001514: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x45001518: nop

    // 0x4500151C: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x45001520: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x45001524: jr          $ra
    // 0x45001528: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
    return;
    // 0x45001528: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500152C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x45001530: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45001534: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x45001538: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4500153C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45001540: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x45001544: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x45001548: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500154C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45001550: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x45001554: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x45001558: beq         $v0, $zero, L_4500157C
    if (ctx->r2 == 0) {
        // 0x4500155C: sw          $t6, 0x18($a1)
        MEM_W(0X18, ctx->r5) = ctx->r14;
            goto L_4500157C;
    }
    // 0x4500155C: sw          $t6, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r14;
    // 0x45001560: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x45001564: beq         $v0, $at, L_45001584
    if (ctx->r2 == ctx->r1) {
        // 0x45001568: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_45001584;
    }
    // 0x45001568: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x4500156C: beq         $v0, $at, L_45001584
    if (ctx->r2 == ctx->r1) {
        // 0x45001570: nop
    
            goto L_45001584;
    }
    // 0x45001570: nop

    // 0x45001574: b           L_45001628
    // 0x45001578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_45001628;
    // 0x45001578: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500157C:
    // 0x4500157C: b           L_45001624
    // 0x45001580: sw          $s2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r18;
        goto L_45001624;
    // 0x45001580: sw          $s2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r18;
L_45001584:
    // 0x45001584: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x45001588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500158C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x45001590: lwc1        $f4, 0x4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4);
    // 0x45001594: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x45001598: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x4500159C: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x450015A0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x450015A4: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x450015A8: lwc1        $f8, 0xC($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XC);
    // 0x450015AC: nop

    // 0x450015B0: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x450015B4: lw          $t8, 0x10($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X10);
    // 0x450015B8: jal         0x4500109C
    // 0x450015BC: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x450015BC: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    after_0:
    // 0x450015C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x450015C4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x450015C8: sw          $t9, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = ctx->r25;
    // 0x450015CC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x450015D0: addiu       $s2, $s0, 0x1B0
    ctx->r18 = ADD32(ctx->r16, 0X1B0);
    // 0x450015D4: sw          $t0, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->r8;
    // 0x450015D8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x450015DC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x450015E0: sw          $t1, 0x194($s0)
    MEM_W(0X194, ctx->r16) = ctx->r9;
    // 0x450015E4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x450015E8: nop

    // 0x450015EC: sw          $t2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r10;
    // 0x450015F0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x450015F4: nop

    // 0x450015F8: beq         $t3, $zero, L_4500160C
    if (ctx->r11 == 0) {
        // 0x450015FC: nop
    
            goto L_4500160C;
    }
    // 0x450015FC: nop

    // 0x45001600: addiu       $s2, $s0, 0x1B0
    ctx->r18 = ADD32(ctx->r16, 0X1B0);
    // 0x45001604: b           L_45001610
    // 0x45001608: sw          $s2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r18;
        goto L_45001610;
    // 0x45001608: sw          $s2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r18;
L_4500160C:
    // 0x4500160C: sw          $t4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r12;
L_45001610:
    // 0x45001610: jal         0x450014E4
    // 0x45001614: addiu       $a1, $s0, 0x198
    ctx->r5 = ADD32(ctx->r16, 0X198);
    ovl_mobj_main_14E4(rdram, ctx);
        goto after_1;
    // 0x45001614: addiu       $a1, $s0, 0x198
    ctx->r5 = ADD32(ctx->r16, 0X198);
    after_1:
    // 0x45001618: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x4500161C: jal         0x450014E4
    // 0x45001620: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_mobj_main_14E4(rdram, ctx);
        goto after_2;
    // 0x45001620: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_45001624:
    // 0x45001624: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45001628:
    // 0x45001628: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500162C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x45001630: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x45001634: jr          $ra
    // 0x45001638: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x45001638: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_mobj_main_163C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500163C: addiu       $t6, $a0, -0x4
    ctx->r14 = ADD32(ctx->r4, -0X4);
    // 0x45001640: sltiu       $at, $t6, 0x11A
    ctx->r1 = ctx->r14 < 0X11A ? 1 : 0;
    // 0x45001644: beq         $at, $zero, L_450016B8
    if (ctx->r1 == 0) {
        // 0x45001648: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_450016B8;
    }
    // 0x45001648: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4500164C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001650: addu        $at, $at, $t6
    gpr jr_addend_4500165C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45001654: lw          $t6, 0x17D8($at)
    ctx->r14 = ADD32(ctx->r1, 0X17D8);
    // 0x45001658: nop

    // 0x4500165C: jr          $t6
    // 0x45001660: nop

    switch (jr_addend_4500165C >> 2) {
        case 0: goto L_45001694; break;
        case 1: goto L_45001664; break;
        case 2: goto L_45001664; break;
        case 3: goto L_450016B8; break;
        case 4: goto L_45001664; break;
        case 5: goto L_45001664; break;
        case 6: goto L_45001664; break;
        case 7: goto L_450016B8; break;
        case 8: goto L_450016B8; break;
        case 9: goto L_450016B8; break;
        case 10: goto L_450016B8; break;
        case 11: goto L_450016B8; break;
        case 12: goto L_450016B8; break;
        case 13: goto L_45001664; break;
        case 14: goto L_450016B8; break;
        case 15: goto L_450016B8; break;
        case 16: goto L_450016B8; break;
        case 17: goto L_450016B8; break;
        case 18: goto L_450016B8; break;
        case 19: goto L_450016B8; break;
        case 20: goto L_450016B8; break;
        case 21: goto L_45001664; break;
        case 22: goto L_45001664; break;
        case 23: goto L_45001664; break;
        case 24: goto L_450016B8; break;
        case 25: goto L_450016B8; break;
        case 26: goto L_45001664; break;
        case 27: goto L_45001664; break;
        case 28: goto L_45001664; break;
        case 29: goto L_45001664; break;
        case 30: goto L_450016B8; break;
        case 31: goto L_450016B8; break;
        case 32: goto L_450016B8; break;
        case 33: goto L_450016B8; break;
        case 34: goto L_450016B8; break;
        case 35: goto L_450016B8; break;
        case 36: goto L_45001664; break;
        case 37: goto L_450016B8; break;
        case 38: goto L_450016B8; break;
        case 39: goto L_45001664; break;
        case 40: goto L_450016A0; break;
        case 41: goto L_450016B8; break;
        case 42: goto L_450016B8; break;
        case 43: goto L_450016B8; break;
        case 44: goto L_450016B8; break;
        case 45: goto L_450016B8; break;
        case 46: goto L_45001664; break;
        case 47: goto L_45001664; break;
        case 48: goto L_450016B8; break;
        case 49: goto L_450016B8; break;
        case 50: goto L_450016B8; break;
        case 51: goto L_450016B8; break;
        case 52: goto L_45001664; break;
        case 53: goto L_45001664; break;
        case 54: goto L_450016B8; break;
        case 55: goto L_45001670; break;
        case 56: goto L_450016B8; break;
        case 57: goto L_450016B8; break;
        case 58: goto L_45001670; break;
        case 59: goto L_45001664; break;
        case 60: goto L_450016B8; break;
        case 61: goto L_45001664; break;
        case 62: goto L_450016B8; break;
        case 63: goto L_450016B8; break;
        case 64: goto L_45001664; break;
        case 65: goto L_45001664; break;
        case 66: goto L_450016B8; break;
        case 67: goto L_45001664; break;
        case 68: goto L_450016B8; break;
        case 69: goto L_450016B8; break;
        case 70: goto L_45001664; break;
        case 71: goto L_45001664; break;
        case 72: goto L_45001664; break;
        case 73: goto L_45001664; break;
        case 74: goto L_45001664; break;
        case 75: goto L_45001664; break;
        case 76: goto L_450016B8; break;
        case 77: goto L_4500167C; break;
        case 78: goto L_450016B8; break;
        case 79: goto L_450016B8; break;
        case 80: goto L_45001664; break;
        case 81: goto L_450016B8; break;
        case 82: goto L_450016B8; break;
        case 83: goto L_45001664; break;
        case 84: goto L_45001664; break;
        case 85: goto L_450016B8; break;
        case 86: goto L_450016B8; break;
        case 87: goto L_450016B8; break;
        case 88: goto L_450016B8; break;
        case 89: goto L_450016B8; break;
        case 90: goto L_450016B8; break;
        case 91: goto L_450016B8; break;
        case 92: goto L_450016B8; break;
        case 93: goto L_45001670; break;
        case 94: goto L_450016B8; break;
        case 95: goto L_450016B8; break;
        case 96: goto L_450016AC; break;
        case 97: goto L_45001664; break;
        case 98: goto L_45001664; break;
        case 99: goto L_45001664; break;
        case 100: goto L_45001664; break;
        case 101: goto L_450016B8; break;
        case 102: goto L_450016B8; break;
        case 103: goto L_45001664; break;
        case 104: goto L_45001664; break;
        case 105: goto L_450016B8; break;
        case 106: goto L_450016B8; break;
        case 107: goto L_45001664; break;
        case 108: goto L_45001664; break;
        case 109: goto L_45001664; break;
        case 110: goto L_450016B8; break;
        case 111: goto L_45001664; break;
        case 112: goto L_45001664; break;
        case 113: goto L_450016B8; break;
        case 114: goto L_450016B8; break;
        case 115: goto L_450016B8; break;
        case 116: goto L_450016B8; break;
        case 117: goto L_45001664; break;
        case 118: goto L_450016B8; break;
        case 119: goto L_45001664; break;
        case 120: goto L_450016B8; break;
        case 121: goto L_450016B8; break;
        case 122: goto L_450016B8; break;
        case 123: goto L_450016B8; break;
        case 124: goto L_450016B8; break;
        case 125: goto L_45001664; break;
        case 126: goto L_450016AC; break;
        case 127: goto L_450016AC; break;
        case 128: goto L_450016AC; break;
        case 129: goto L_450016B8; break;
        case 130: goto L_450016AC; break;
        case 131: goto L_450016AC; break;
        case 132: goto L_450016AC; break;
        case 133: goto L_450016B8; break;
        case 134: goto L_450016B8; break;
        case 135: goto L_450016B8; break;
        case 136: goto L_450016B8; break;
        case 137: goto L_450016B8; break;
        case 138: goto L_45001664; break;
        case 139: goto L_45001664; break;
        case 140: goto L_45001664; break;
        case 141: goto L_45001664; break;
        case 142: goto L_450016B8; break;
        case 143: goto L_450016B8; break;
        case 144: goto L_45001664; break;
        case 145: goto L_450016B8; break;
        case 146: goto L_450016B8; break;
        case 147: goto L_450016B8; break;
        case 148: goto L_450016B8; break;
        case 149: goto L_45001664; break;
        case 150: goto L_45001664; break;
        case 151: goto L_450016B8; break;
        case 152: goto L_450016B8; break;
        case 153: goto L_45001664; break;
        case 154: goto L_450016B8; break;
        case 155: goto L_450016B8; break;
        case 156: goto L_450016B8; break;
        case 157: goto L_450016B8; break;
        case 158: goto L_450016B8; break;
        case 159: goto L_45001664; break;
        case 160: goto L_450016B8; break;
        case 161: goto L_45001664; break;
        case 162: goto L_450016B8; break;
        case 163: goto L_450016B8; break;
        case 164: goto L_450016B8; break;
        case 165: goto L_450016B8; break;
        case 166: goto L_450016B8; break;
        case 167: goto L_450016B8; break;
        case 168: goto L_45001664; break;
        case 169: goto L_450016B8; break;
        case 170: goto L_450016B8; break;
        case 171: goto L_450016B8; break;
        case 172: goto L_45001664; break;
        case 173: goto L_45001664; break;
        case 174: goto L_45001664; break;
        case 175: goto L_45001664; break;
        case 176: goto L_45001664; break;
        case 177: goto L_450016B8; break;
        case 178: goto L_450016B8; break;
        case 179: goto L_45001664; break;
        case 180: goto L_45001664; break;
        case 181: goto L_450016B8; break;
        case 182: goto L_450016B8; break;
        case 183: goto L_450016B8; break;
        case 184: goto L_450016B8; break;
        case 185: goto L_450016B8; break;
        case 186: goto L_450016B8; break;
        case 187: goto L_450016B8; break;
        case 188: goto L_45001664; break;
        case 189: goto L_450016B8; break;
        case 190: goto L_450016B8; break;
        case 191: goto L_450016B8; break;
        case 192: goto L_450016B8; break;
        case 193: goto L_45001664; break;
        case 194: goto L_45001664; break;
        case 195: goto L_45001664; break;
        case 196: goto L_450016B8; break;
        case 197: goto L_450016B8; break;
        case 198: goto L_450016B8; break;
        case 199: goto L_450016B8; break;
        case 200: goto L_45001694; break;
        case 201: goto L_450016B8; break;
        case 202: goto L_45001664; break;
        case 203: goto L_45001664; break;
        case 204: goto L_450016B8; break;
        case 205: goto L_450016B8; break;
        case 206: goto L_45001664; break;
        case 207: goto L_45001664; break;
        case 208: goto L_45001694; break;
        case 209: goto L_45001664; break;
        case 210: goto L_45001694; break;
        case 211: goto L_45001664; break;
        case 212: goto L_45001664; break;
        case 213: goto L_450016B8; break;
        case 214: goto L_45001664; break;
        case 215: goto L_45001664; break;
        case 216: goto L_450016B8; break;
        case 217: goto L_45001664; break;
        case 218: goto L_450016B8; break;
        case 219: goto L_450016B8; break;
        case 220: goto L_450016B8; break;
        case 221: goto L_45001664; break;
        case 222: goto L_450016B8; break;
        case 223: goto L_450016B8; break;
        case 224: goto L_450016B8; break;
        case 225: goto L_450016B8; break;
        case 226: goto L_450016B8; break;
        case 227: goto L_450016B8; break;
        case 228: goto L_450016B8; break;
        case 229: goto L_450016B8; break;
        case 230: goto L_450016B8; break;
        case 231: goto L_45001688; break;
        case 232: goto L_450016B8; break;
        case 233: goto L_450016AC; break;
        case 234: goto L_450016B8; break;
        case 235: goto L_450016B8; break;
        case 236: goto L_45001664; break;
        case 237: goto L_45001664; break;
        case 238: goto L_450016B8; break;
        case 239: goto L_45001664; break;
        case 240: goto L_450016B8; break;
        case 241: goto L_450016B8; break;
        case 242: goto L_450016B8; break;
        case 243: goto L_450016B8; break;
        case 244: goto L_45001688; break;
        case 245: goto L_450016B8; break;
        case 246: goto L_450016B8; break;
        case 247: goto L_45001664; break;
        case 248: goto L_450016B8; break;
        case 249: goto L_450016B8; break;
        case 250: goto L_450016B8; break;
        case 251: goto L_450016B8; break;
        case 252: goto L_450016B8; break;
        case 253: goto L_450016B8; break;
        case 254: goto L_450016B8; break;
        case 255: goto L_450016B8; break;
        case 256: goto L_45001664; break;
        case 257: goto L_45001664; break;
        case 258: goto L_45001664; break;
        case 259: goto L_450016B8; break;
        case 260: goto L_450016B8; break;
        case 261: goto L_450016B8; break;
        case 262: goto L_450016B8; break;
        case 263: goto L_450016B8; break;
        case 264: goto L_450016B8; break;
        case 265: goto L_450016B8; break;
        case 266: goto L_450016B8; break;
        case 267: goto L_450016B8; break;
        case 268: goto L_450016B8; break;
        case 269: goto L_45001664; break;
        case 270: goto L_45001664; break;
        case 271: goto L_45001664; break;
        case 272: goto L_450016B8; break;
        case 273: goto L_450016B8; break;
        case 274: goto L_45001694; break;
        case 275: goto L_450016B8; break;
        case 276: goto L_450016B8; break;
        case 277: goto L_450016B8; break;
        case 278: goto L_450016B8; break;
        case 279: goto L_450016B8; break;
        case 280: goto L_450016B8; break;
        case 281: goto L_45001664; break;
        default: switch_error(__func__, 0x4500165C, 0x450117D8);
    }
    // 0x45001660: nop

L_45001664:
    // 0x45001664: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x45001668: jr          $ra
    // 0x4500166C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    return;
    // 0x4500166C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
L_45001670:
    // 0x45001670: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x45001674: jr          $ra
    // 0x45001678: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x45001678: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
L_4500167C:
    // 0x4500167C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x45001680: jr          $ra
    // 0x45001684: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    return;
    // 0x45001684: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
L_45001688:
    // 0x45001688: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x4500168C: jr          $ra
    // 0x45001690: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    return;
    // 0x45001690: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
L_45001694:
    // 0x45001694: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x45001698: jr          $ra
    // 0x4500169C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    return;
    // 0x4500169C: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
L_450016A0:
    // 0x450016A0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x450016A4: jr          $ra
    // 0x450016A8: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    return;
    // 0x450016A8: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
L_450016AC:
    // 0x450016AC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x450016B0: jr          $ra
    // 0x450016B4: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    return;
    // 0x450016B4: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
L_450016B8:
    // 0x450016B8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x450016BC: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x450016C0: jr          $ra
    // 0x450016C4: nop

    return;
    // 0x450016C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_16C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450016C8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x450016CC: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x450016D0: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x450016D4: addiu       $t7, $t7, 0x77C
    ctx->r15 = ADD32(ctx->r15, 0X77C);
    // 0x450016D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x450016DC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x450016E0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x450016E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450016E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450016EC: sll         $t8, $v0, 14
    ctx->r24 = S32(ctx->r2 << 14);
    // 0x450016F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450016F4: bgez        $t8, L_45001708
    if (SIGNED(ctx->r24) >= 0) {
        // 0x450016F8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_45001708;
    }
    // 0x450016F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450016FC: addiu       $t9, $zero, 0x83
    ctx->r25 = ADD32(0, 0X83);
    // 0x45001700: b           L_45001720
    // 0x45001704: sw          $t9, 0x180($a0)
    MEM_W(0X180, ctx->r4) = ctx->r25;
        goto L_45001720;
    // 0x45001704: sw          $t9, 0x180($a0)
    MEM_W(0X180, ctx->r4) = ctx->r25;
L_45001708:
    // 0x45001708: sll         $t0, $v0, 13
    ctx->r8 = S32(ctx->r2 << 13);
    // 0x4500170C: bgez        $t0, L_4500171C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x45001710: addiu       $t1, $zero, 0x81
        ctx->r9 = ADD32(0, 0X81);
            goto L_4500171C;
    }
    // 0x45001710: addiu       $t1, $zero, 0x81
    ctx->r9 = ADD32(0, 0X81);
    // 0x45001714: b           L_45001720
    // 0x45001718: sw          $zero, 0x180($s0)
    MEM_W(0X180, ctx->r16) = 0;
        goto L_45001720;
    // 0x45001718: sw          $zero, 0x180($s0)
    MEM_W(0X180, ctx->r16) = 0;
L_4500171C:
    // 0x4500171C: sw          $t1, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->r9;
L_45001720:
    // 0x45001720: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45001724: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x45001728: sll         $t2, $v0, 15
    ctx->r10 = S32(ctx->r2 << 15);
    // 0x4500172C: bgez        $t2, L_45001740
    if (SIGNED(ctx->r10) >= 0) {
        // 0x45001730: andi        $t4, $v0, 0x8000
        ctx->r12 = ctx->r2 & 0X8000;
            goto L_45001740;
    }
    // 0x45001730: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x45001734: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x45001738: b           L_45001794
    // 0x4500173C: sw          $t3, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r11;
        goto L_45001794;
    // 0x4500173C: sw          $t3, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r11;
L_45001740:
    // 0x45001740: beq         $t4, $zero, L_45001754
    if (ctx->r12 == 0) {
        // 0x45001744: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_45001754;
    }
    // 0x45001744: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x45001748: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x4500174C: b           L_45001794
    // 0x45001750: sw          $t5, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r13;
        goto L_45001794;
    // 0x45001750: sw          $t5, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r13;
L_45001754:
    // 0x45001754: beq         $t6, $zero, L_45001768
    if (ctx->r14 == 0) {
        // 0x45001758: andi        $t8, $v0, 0x2000
        ctx->r24 = ctx->r2 & 0X2000;
            goto L_45001768;
    }
    // 0x45001758: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x4500175C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x45001760: b           L_45001794
    // 0x45001764: sw          $t7, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r15;
        goto L_45001794;
    // 0x45001764: sw          $t7, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r15;
L_45001768:
    // 0x45001768: beq         $t8, $zero, L_4500177C
    if (ctx->r24 == 0) {
        // 0x4500176C: andi        $t0, $v0, 0x1000
        ctx->r8 = ctx->r2 & 0X1000;
            goto L_4500177C;
    }
    // 0x4500176C: andi        $t0, $v0, 0x1000
    ctx->r8 = ctx->r2 & 0X1000;
    // 0x45001770: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x45001774: b           L_45001794
    // 0x45001778: sw          $t9, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r25;
        goto L_45001794;
    // 0x45001778: sw          $t9, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r25;
L_4500177C:
    // 0x4500177C: beq         $t0, $zero, L_45001790
    if (ctx->r8 == 0) {
        // 0x45001780: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_45001790;
    }
    // 0x45001780: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x45001784: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x45001788: b           L_45001794
    // 0x4500178C: sw          $t1, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r9;
        goto L_45001794;
    // 0x4500178C: sw          $t1, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r9;
L_45001790:
    // 0x45001790: sw          $t2, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r10;
L_45001794:
    // 0x45001794: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x45001798: jal         0x4500163C
    // 0x4500179C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_mobj_main_163C(rdram, ctx);
        goto after_0;
    // 0x4500179C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x450017A0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x450017A4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x450017A8: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x450017AC: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x450017B0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x450017B4: lw          $t4, 0x180($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X180);
    // 0x450017B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x450017BC: beq         $t5, $at, L_450017F0
    if (ctx->r13 == ctx->r1) {
        // 0x450017C0: sw          $t4, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r12;
            goto L_450017F0;
    }
    // 0x450017C0: sw          $t4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r12;
    // 0x450017C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x450017C8: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x450017CC: lbu         $t7, 0x2($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2);
    // 0x450017D0: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x450017D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x450017D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x450017DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x450017E0: addiu       $t9, $t9, -0x5CC
    ctx->r25 = ADD32(ctx->r25, -0X5CC);
    // 0x450017E4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x450017E8: b           L_4500187C
    // 0x450017EC: sw          $t0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r8;
        goto L_4500187C;
    // 0x450017EC: sw          $t0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r8;
L_450017F0:
    // 0x450017F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x450017F4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x450017F8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x450017FC: addiu       $v0, $s0, 0x1DC
    ctx->r2 = ADD32(ctx->r16, 0X1DC);
    // 0x45001800: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x45001804: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x45001808: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x4500180C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45001810: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x45001814: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x45001818: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
    // 0x4500181C: lw          $t3, 0x10($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X10);
    // 0x45001820: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x45001824: swc1        $f2, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f2.u32l;
    // 0x45001828: lw          $t4, 0x10($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X10);
    // 0x4500182C: ori         $t0, $zero, 0x8B01
    ctx->r8 = 0 | 0X8B01;
    // 0x45001830: swc1        $f0, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f0.u32l;
    // 0x45001834: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x45001838: nop

    // 0x4500183C: sw          $zero, 0x10($t5)
    MEM_W(0X10, ctx->r13) = 0;
    // 0x45001840: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x45001844: nop

    // 0x45001848: swc1        $f12, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f12.u32l;
    // 0x4500184C: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x45001850: nop

    // 0x45001854: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
    // 0x45001858: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x4500185C: nop

    // 0x45001860: swc1        $f12, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f12.u32l;
    // 0x45001864: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x45001868: nop

    // 0x4500186C: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
    // 0x45001870: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x45001874: nop

    // 0x45001878: sw          $t0, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->r8;
L_4500187C:
    // 0x4500187C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45001880: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45001884: sll         $t2, $v0, 13
    ctx->r10 = S32(ctx->r2 << 13);
    // 0x45001888: bgez        $t2, L_450018A8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x4500188C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_450018A8;
    }
    // 0x4500188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001890: lbu         $t3, 0x3($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3);
    // 0x45001894: lui         $t5, 0x4501
    ctx->r13 = S32(0X4501 << 16);
    // 0x45001898: addiu       $t5, $t5, -0x400
    ctx->r13 = ADD32(ctx->r13, -0X400);
    // 0x4500189C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x450018A0: b           L_450018C0
    // 0x450018A4: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
        goto L_450018C0;
    // 0x450018A4: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
L_450018A8:
    // 0x450018A8: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x450018AC: addiu       $t8, $t8, -0x390
    ctx->r24 = ADD32(ctx->r24, -0X390);
    // 0x450018B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x450018B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x450018B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x450018BC: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
L_450018C0:
    // 0x450018C0: jal         0x4500152C
    // 0x450018C4: andi        $a3, $v0, 0x8
    ctx->r7 = ctx->r2 & 0X8;
    ovl_mobj_main_152C(rdram, ctx);
        goto after_1;
    // 0x450018C4: andi        $a3, $v0, 0x8
    ctx->r7 = ctx->r2 & 0X8;
    after_1:
    // 0x450018C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450018CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x450018D0: jr          $ra
    // 0x450018D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x450018D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_mobj_main_18D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450018D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450018DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450018E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450018E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x450018E8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450018EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x450018F0: jal         0x450006C4
    // 0x450018F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450018F4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x450018F8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450018FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x45001900: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x45001904: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45001908: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500190C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x45001910: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x45001914: jal         0x450006C4
    // 0x45001918: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45001918: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4500191C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45001920: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45001924: jr          $ra
    // 0x45001928: nop

    return;
    // 0x45001928: nop

;}
RECOMP_FUNC void ovl_mobj_main_192C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500192C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45001930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45001934: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45001938: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4500193C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45001940: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x45001944: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45001948: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4500194C: jal         0x450006C4
    // 0x45001950: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45001950: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x45001954: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x45001958: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500195C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x45001960: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45001964: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x45001968: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4500196C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x45001970: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x45001974: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x45001978: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x4500197C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45001980: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x45001984: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x45001988: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x4500198C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45001990: jal         0x45000F34
    // 0x45001994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x45001994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x45001998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500199C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450019A0: jr          $ra
    // 0x450019A4: nop

    return;
    // 0x450019A4: nop

;}
RECOMP_FUNC void ovl_mobj_main_19A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450019A8: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x450019AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x450019B0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x450019B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x450019B8: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x450019BC: lw          $t7, -0x704($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X704);
    // 0x450019C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450019C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450019C8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x450019CC: lw          $a3, 0x60($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X60);
    // 0x450019D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450019D4: beq         $t7, $zero, L_45001C74
    if (ctx->r15 == 0) {
        // 0x450019D8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_45001C74;
    }
    // 0x450019D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x450019DC: sra         $t0, $a3, 24
    ctx->r8 = S32(SIGNED(ctx->r7) >> 24);
    // 0x450019E0: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x450019E4: sw          $a1, 0x178($a0)
    MEM_W(0X178, ctx->r4) = ctx->r5;
    // 0x450019E8: sltiu       $at, $t8, 0x9
    ctx->r1 = ctx->r24 < 0X9 ? 1 : 0;
    // 0x450019EC: sw          $a3, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r7;
    // 0x450019F0: sw          $a2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r6;
    // 0x450019F4: beq         $at, $zero, L_45001AA8
    if (ctx->r1 == 0) {
        // 0x450019F8: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_45001AA8;
    }
    // 0x450019F8: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x450019FC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x45001A00: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001A04: addu        $at, $at, $t9
    gpr jr_addend_45001A10 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x45001A08: lw          $t9, 0x1C40($at)
    ctx->r25 = ADD32(ctx->r1, 0X1C40);
    // 0x45001A0C: nop

    // 0x45001A10: jr          $t9
    // 0x45001A14: nop

    switch (jr_addend_45001A10 >> 2) {
        case 0: goto L_45001A18; break;
        case 1: goto L_45001A2C; break;
        case 2: goto L_45001A40; break;
        case 3: goto L_45001A54; break;
        case 4: goto L_45001A64; break;
        case 5: goto L_45001A78; break;
        case 6: goto L_45001A88; break;
        case 7: goto L_45001A98; break;
        case 8: goto L_45001C74; break;
        default: switch_error(__func__, 0x45001A10, 0x45011C40);
    }
    // 0x45001A14: nop

L_45001A18:
    // 0x45001A18: lw          $t1, 0x68($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X68);
    // 0x45001A1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45001A20: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x45001A24: b           L_45001AA8
    // 0x45001A28: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
        goto L_45001AA8;
    // 0x45001A28: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
L_45001A2C:
    // 0x45001A2C: lw          $t3, 0x68($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X68);
    // 0x45001A30: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x45001A34: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x45001A38: b           L_45001AA8
    // 0x45001A3C: sw          $t4, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r12;
        goto L_45001AA8;
    // 0x45001A3C: sw          $t4, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r12;
L_45001A40:
    // 0x45001A40: lw          $t5, 0x68($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X68);
    // 0x45001A44: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45001A48: ori         $t6, $t5, 0x6
    ctx->r14 = ctx->r13 | 0X6;
    // 0x45001A4C: b           L_45001AA8
    // 0x45001A50: sw          $t6, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r14;
        goto L_45001AA8;
    // 0x45001A50: sw          $t6, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r14;
L_45001A54:
    // 0x45001A54: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x45001A58: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x45001A5C: b           L_45001AA8
    // 0x45001A60: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
        goto L_45001AA8;
    // 0x45001A60: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
L_45001A64:
    // 0x45001A64: lw          $t8, 0x68($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X68);
    // 0x45001A68: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x45001A6C: ori         $t9, $t8, 0x6
    ctx->r25 = ctx->r24 | 0X6;
    // 0x45001A70: b           L_45001AA8
    // 0x45001A74: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
        goto L_45001AA8;
    // 0x45001A74: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
L_45001A78:
    // 0x45001A78: lw          $t1, 0x68($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X68);
    // 0x45001A7C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x45001A80: b           L_45001AA8
    // 0x45001A84: sw          $t1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r9;
        goto L_45001AA8;
    // 0x45001A84: sw          $t1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r9;
L_45001A88:
    // 0x45001A88: lw          $t2, 0x68($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X68);
    // 0x45001A8C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x45001A90: b           L_45001AA8
    // 0x45001A94: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
        goto L_45001AA8;
    // 0x45001A94: sw          $t2, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r10;
L_45001A98:
    // 0x45001A98: lw          $t3, 0x68($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X68);
    // 0x45001A9C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x45001AA0: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x45001AA4: sw          $t4, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r12;
L_45001AA8:
    // 0x45001AA8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x45001AAC: beq         $v1, $at, L_45001B0C
    if (ctx->r3 == ctx->r1) {
        // 0x45001AB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45001B0C;
    }
    // 0x45001AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001AB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45001AB8: addiu       $a2, $v0, 0x58
    ctx->r6 = ADD32(ctx->r2, 0X58);
    // 0x45001ABC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x45001AC0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x45001AC4: jal         0x4500109C
    // 0x45001AC8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45001AC8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x45001ACC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x45001AD0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x45001AD4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x45001AD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x45001ADC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45001AE0: bne         $t5, $at, L_45001B0C
    if (ctx->r13 != ctx->r1) {
        // 0x45001AE4: lui         $a0, 0x4501
        ctx->r4 = S32(0X4501 << 16);
            goto L_45001B0C;
    }
    // 0x45001AE4: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x45001AE8: addiu       $a0, $a0, 0x17A0
    ctx->r4 = ADD32(ctx->r4, 0X17A0);
    // 0x45001AEC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x45001AF0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x45001AF4: jal         0x4500007C
    // 0x45001AF8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    ovl_mobj_main_7C(rdram, ctx);
        goto after_1;
    // 0x45001AF8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x45001AFC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x45001B00: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x45001B04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x45001B08: nop

L_45001B0C:
    // 0x45001B0C: addiu       $t6, $v1, -0x2
    ctx->r14 = ADD32(ctx->r3, -0X2);
    // 0x45001B10: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x45001B14: beq         $at, $zero, L_45001C0C
    if (ctx->r1 == 0) {
        // 0x45001B18: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_45001C0C;
    }
    // 0x45001B18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x45001B1C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001B20: addu        $at, $at, $t6
    gpr jr_addend_45001B2C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45001B24: lw          $t6, 0x1C64($at)
    ctx->r14 = ADD32(ctx->r1, 0X1C64);
    // 0x45001B28: nop

    // 0x45001B2C: jr          $t6
    // 0x45001B30: nop

    switch (jr_addend_45001B2C >> 2) {
        case 0: goto L_45001B34; break;
        case 1: goto L_45001B88; break;
        case 2: goto L_45001BA0; break;
        case 3: goto L_45001BE0; break;
        case 4: goto L_45001BF4; break;
        default: switch_error(__func__, 0x45001B2C, 0x45011C64);
    }
    // 0x45001B30: nop

L_45001B34:
    // 0x45001B34: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x45001B38: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45001B3C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x45001B40: beq         $t8, $zero, L_45001B6C
    if (ctx->r24 == 0) {
        // 0x45001B44: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_45001B6C;
    }
    // 0x45001B44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x45001B48: lw          $t9, 0x184($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X184);
    // 0x45001B4C: nop

    // 0x45001B50: andi        $t1, $t9, 0x10
    ctx->r9 = ctx->r25 & 0X10;
    // 0x45001B54: bne         $t1, $zero, L_45001B64
    if (ctx->r9 != 0) {
        // 0x45001B58: nop
    
            goto L_45001B64;
    }
    // 0x45001B58: nop

    // 0x45001B5C: b           L_45001B6C
    // 0x45001B60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_45001B6C;
    // 0x45001B60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_45001B64:
    // 0x45001B64: b           L_45001B6C
    // 0x45001B68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_45001B6C;
    // 0x45001B68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_45001B6C:
    // 0x45001B6C: bne         $t0, $at, L_45001C0C
    if (ctx->r8 != ctx->r1) {
        // 0x45001B70: nop
    
            goto L_45001C0C;
    }
    // 0x45001B70: nop

    // 0x45001B74: lw          $t2, 0x184($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X184);
    // 0x45001B78: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x45001B7C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x45001B80: b           L_45001C0C
    // 0x45001B84: sw          $t3, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r11;
        goto L_45001C0C;
    // 0x45001B84: sw          $t3, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r11;
L_45001B88:
    // 0x45001B88: lw          $t4, 0x60($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X60);
    // 0x45001B8C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x45001B90: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x45001B94: sw          $t5, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r13;
    // 0x45001B98: b           L_45001C0C
    // 0x45001B9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_45001C0C;
    // 0x45001B9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_45001BA0:
    // 0x45001BA0: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x45001BA4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x45001BA8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x45001BAC: beq         $t7, $zero, L_45001BD8
    if (ctx->r15 == 0) {
        // 0x45001BB0: nop
    
            goto L_45001BD8;
    }
    // 0x45001BB0: nop

    // 0x45001BB4: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x45001BB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45001BBC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x45001BC0: sw          $t9, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r25;
    // 0x45001BC4: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x45001BC8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x45001BCC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x45001BD0: b           L_45001C0C
    // 0x45001BD4: sw          $t2, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r10;
        goto L_45001C0C;
    // 0x45001BD4: sw          $t2, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r10;
L_45001BD8:
    // 0x45001BD8: b           L_45001C0C
    // 0x45001BDC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_45001C0C;
    // 0x45001BDC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_45001BE0:
    // 0x45001BE0: lw          $t3, 0x184($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X184);
    // 0x45001BE4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x45001BE8: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x45001BEC: b           L_45001C0C
    // 0x45001BF0: sw          $t4, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r12;
        goto L_45001C0C;
    // 0x45001BF0: sw          $t4, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r12;
L_45001BF4:
    // 0x45001BF4: lw          $t5, 0x184($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X184);
    // 0x45001BF8: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x45001BFC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x45001C00: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x45001C04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45001C08: sw          $t6, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r14;
L_45001C0C:
    // 0x45001C0C: beq         $v1, $zero, L_45001C78
    if (ctx->r3 == 0) {
        // 0x45001C10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45001C78;
    }
    // 0x45001C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45001C14: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x45001C18: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x45001C1C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x45001C20: sw          $t8, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r24;
    // 0x45001C24: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x45001C28: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45001C2C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x45001C30: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x45001C34: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x45001C38: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x45001C3C: lbu         $v1, 0x786($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X786);
    // 0x45001C40: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45001C44: bne         $v1, $at, L_45001C54
    if (ctx->r3 != ctx->r1) {
        // 0x45001C48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_45001C54;
    }
    // 0x45001C48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x45001C4C: b           L_45001C54
    // 0x45001C50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_45001C54;
    // 0x45001C50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45001C54:
    // 0x45001C54: beq         $v0, $zero, L_45001C74
    if (ctx->r2 == 0) {
        // 0x45001C58: sll         $t2, $v1, 3
        ctx->r10 = S32(ctx->r3 << 3);
            goto L_45001C74;
    }
    // 0x45001C58: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x45001C5C: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45001C60: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x45001C64: lw          $t9, 0x480($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X480);
    // 0x45001C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001C6C: jalr        $t9
    // 0x45001C70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x45001C70: nop

    after_2:
L_45001C74:
    // 0x45001C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45001C78:
    // 0x45001C78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45001C7C: jr          $ra
    // 0x45001C80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x45001C80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_mobj_main_1C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001C84: lui         $t6, 0x4501
    ctx->r14 = S32(0X4501 << 16);
    // 0x45001C88: lw          $t6, -0x704($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X704);
    // 0x45001C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45001C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45001C94: beq         $t6, $zero, L_45001CD0
    if (ctx->r14 == 0) {
        // 0x45001C98: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_45001CD0;
    }
    // 0x45001C98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45001C9C: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x45001CA0: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x45001CA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x45001CA8: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x45001CAC: addiu       $t9, $a0, 0x170
    ctx->r25 = ADD32(ctx->r4, 0X170);
    // 0x45001CB0: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
    // 0x45001CB4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x45001CB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45001CBC: sw          $t0, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->r8;
    // 0x45001CC0: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x45001CC4: addiu       $a2, $v0, 0x58
    ctx->r6 = ADD32(ctx->r2, 0X58);
    // 0x45001CC8: jal         0x4500109C
    // 0x45001CCC: sw          $t1, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->r9;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45001CCC: sw          $t1, 0x174($a0)
    MEM_W(0X174, ctx->r4) = ctx->r9;
    after_0:
L_45001CD0:
    // 0x45001CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45001CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45001CD8: jr          $ra
    // 0x45001CDC: nop

    return;
    // 0x45001CDC: nop

;}
RECOMP_FUNC void ovl_mobj_main_1CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001CE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x45001CE4: lui         $t6, 0x4501
    ctx->r14 = S32(0X4501 << 16);
    // 0x45001CE8: lw          $t6, -0x704($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X704);
    // 0x45001CEC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x45001CF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x45001CF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45001CF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45001CFC: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x45001D00: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x45001D04: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x45001D08: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x45001D0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x45001D10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x45001D14: bne         $t6, $zero, L_45001D24
    if (ctx->r14 != 0) {
        // 0x45001D18: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_45001D24;
    }
    // 0x45001D18: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x45001D1C: b           L_45001DC0
    // 0x45001D20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_45001DC0;
    // 0x45001D20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45001D24:
    // 0x45001D24: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x45001D28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x45001D2C: blez        $v1, L_45001DBC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x45001D30: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_45001DBC;
    }
    // 0x45001D30: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x45001D34: lui         $s4, 0xFF
    ctx->r20 = S32(0XFF << 16);
    // 0x45001D38: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x45001D3C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_45001D40:
    // 0x45001D40: lw          $v0, 0x60($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X60);
    // 0x45001D44: nop

    // 0x45001D48: and         $t7, $v0, $s4
    ctx->r15 = ctx->r2 & ctx->r20;
    // 0x45001D4C: bne         $s6, $t7, L_45001DAC
    if (ctx->r22 != ctx->r15) {
        // 0x45001D50: nop
    
            goto L_45001DAC;
    }
    // 0x45001D50: nop

    // 0x45001D54: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x45001D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001D5C: bne         $s5, $t8, L_45001D78
    if (ctx->r21 != ctx->r24) {
        // 0x45001D60: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_45001D78;
    }
    // 0x45001D60: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x45001D64: jal         0x45001C84
    // 0x45001D68: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_mobj_main_1C84(rdram, ctx);
        goto after_0;
    // 0x45001D68: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x45001D6C: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x45001D70: b           L_45001DB0
    // 0x45001D74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_45001DB0;
    // 0x45001D74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_45001D78:
    // 0x45001D78: bne         $s3, $zero, L_45001D98
    if (ctx->r19 != 0) {
        // 0x45001D7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45001D98;
    }
    // 0x45001D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001D84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x45001D88: jal         0x450019A8
    // 0x45001D8C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_mobj_main_19A8(rdram, ctx);
        goto after_1;
    // 0x45001D8C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x45001D90: b           L_45001DA8
    // 0x45001D94: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
        goto L_45001DA8;
    // 0x45001D94: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
L_45001D98:
    // 0x45001D98: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x45001D9C: jal         0x450019A8
    // 0x45001DA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_mobj_main_19A8(rdram, ctx);
        goto after_2;
    // 0x45001DA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x45001DA4: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
L_45001DA8:
    // 0x45001DA8: nop

L_45001DAC:
    // 0x45001DAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_45001DB0:
    // 0x45001DB0: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x45001DB4: bne         $at, $zero, L_45001D40
    if (ctx->r1 != 0) {
        // 0x45001DB8: addiu       $s2, $s2, 0x1C
        ctx->r18 = ADD32(ctx->r18, 0X1C);
            goto L_45001D40;
    }
    // 0x45001DB8: addiu       $s2, $s2, 0x1C
    ctx->r18 = ADD32(ctx->r18, 0X1C);
L_45001DBC:
    // 0x45001DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45001DC0:
    // 0x45001DC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x45001DC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45001DC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x45001DCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x45001DD0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x45001DD4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x45001DD8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x45001DDC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x45001DE0: jr          $ra
    // 0x45001DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x45001DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_mobj_main_1DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001DE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45001DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45001DF0: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x45001DF4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45001DF8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x45001DFC: jal         0x450012C8
    // 0x45001E00: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_mobj_main_12C8(rdram, ctx);
        goto after_0;
    // 0x45001E00: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x45001E04: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45001E08: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45001E0C: addiu       $v1, $v1, 0x2CF0
    ctx->r3 = ADD32(ctx->r3, 0X2CF0);
    // 0x45001E10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45001E14: bne         $a2, $at, L_45001E20
    if (ctx->r6 != ctx->r1) {
        // 0x45001E18: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_45001E20;
    }
    // 0x45001E18: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x45001E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_45001E20:
    // 0x45001E20: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x45001E24: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x45001E28: jal         0x450016C8
    // 0x45001E2C: nop

    ovl_mobj_main_16C8(rdram, ctx);
        goto after_1;
    // 0x45001E2C: nop

    after_1:
    // 0x45001E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45001E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45001E38: jr          $ra
    // 0x45001E3C: nop

    return;
    // 0x45001E3C: nop

;}
RECOMP_FUNC void ovl_mobj_main_1E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001E40: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45001E44: addiu       $v1, $v1, 0x2CF0
    ctx->r3 = ADD32(ctx->r3, 0X2CF0);
    // 0x45001E48: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x45001E4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x45001E50: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x45001E54: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x45001E58: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x45001E5C: jr          $ra
    // 0x45001E60: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x45001E60: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_mobj_main_1E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001E64: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x45001E68: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45001E6C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x45001E70: lwc1        $f4, 0x1B0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1B0);
    // 0x45001E74: lwc1        $f8, 0x1B4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1B4);
    // 0x45001E78: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x45001E7C: lwc1        $f16, 0x1B8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1B8);
    // 0x45001E80: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x45001E84: swc1        $f6, 0x1B0($a0)
    MEM_W(0X1B0, ctx->r4) = ctx->f6.u32l;
    // 0x45001E88: swc1        $f10, 0x1B4($a0)
    MEM_W(0X1B4, ctx->r4) = ctx->f10.u32l;
    // 0x45001E8C: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x45001E90: lwc1        $f6, 0x1BC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1BC);
    // 0x45001E94: lwc1        $f10, 0x1C0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C0);
    // 0x45001E98: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x45001E9C: lwc1        $f18, 0x1C4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X1C4);
    // 0x45001EA0: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x45001EA4: swc1        $f4, 0x1B8($a0)
    MEM_W(0X1B8, ctx->r4) = ctx->f4.u32l;
    // 0x45001EA8: add.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x45001EAC: swc1        $f8, 0x1BC($a0)
    MEM_W(0X1BC, ctx->r4) = ctx->f8.u32l;
    // 0x45001EB0: swc1        $f16, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->f16.u32l;
    // 0x45001EB4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x45001EB8: nop

    // 0x45001EBC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x45001EC0: jr          $ra
    // 0x45001EC4: swc1        $f6, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x45001EC4: swc1        $f6, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_1EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001EC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x45001ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45001ED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45001ED4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45001ED8: jal         0x450013B8
    // 0x45001EDC: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45001EDC: nop

    after_0:
    // 0x45001EE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x45001EE4: jal         0x45003AAC
    // 0x45001EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_mobj_main_3AAC(rdram, ctx);
        goto after_1;
    // 0x45001EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x45001EEC: lw          $v0, 0x180($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X180);
    // 0x45001EF0: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x45001EF4: beq         $v0, $at, L_45001F08
    if (ctx->r2 == ctx->r1) {
        // 0x45001EF8: lui         $t8, 0x4501
        ctx->r24 = S32(0X4501 << 16);
            goto L_45001F08;
    }
    // 0x45001EF8: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45001EFC: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x45001F00: bne         $v0, $at, L_45001F6C
    if (ctx->r2 != ctx->r1) {
        // 0x45001F04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45001F6C;
    }
    // 0x45001F04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45001F08:
    // 0x45001F08: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x45001F0C: addiu       $t8, $t8, 0x77C
    ctx->r24 = ADD32(ctx->r24, 0X77C);
    // 0x45001F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x45001F14: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x45001F18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45001F1C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x45001F20: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x45001F24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45001F28: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x45001F2C: beq         $t0, $zero, L_45001F6C
    if (ctx->r8 == 0) {
        // 0x45001F30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45001F6C;
    }
    // 0x45001F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45001F34: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45001F38: jal         0x450006C4
    // 0x45001F3C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45001F3C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x45001F40: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x45001F44: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x45001F48: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45001F4C: jal         0x45001E64
    // 0x45001F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_1E64(rdram, ctx);
        goto after_3;
    // 0x45001F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x45001F54: lw          $t1, 0x50($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X50);
    // 0x45001F58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45001F5C: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x45001F60: sw          $t2, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r10;
    // 0x45001F64: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x45001F68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45001F6C:
    // 0x45001F6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45001F70: jr          $ra
    // 0x45001F74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x45001F74: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_mobj_main_1F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45001F78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45001F7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45001F80: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45001F84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x45001F88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x45001F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45001F90: jal         0x4500128C
    // 0x45001F94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_128C(rdram, ctx);
        goto after_0;
    // 0x45001F94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x45001F98: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001F9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x45001FA0: sw          $zero, -0x710($at)
    MEM_W(-0X710, ctx->r1) = 0;
    // 0x45001FA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x45001FA8: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
    // 0x45001FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_45001FB0:
    // 0x45001FB0: jal         0x45001220
    // 0x45001FB4: addiu       $s0, $s0, 0x2A8
    ctx->r16 = ADD32(ctx->r16, 0X2A8);
    ovl_mobj_main_1220(rdram, ctx);
        goto after_1;
    // 0x45001FB4: addiu       $s0, $s0, 0x2A8
    ctx->r16 = ADD32(ctx->r16, 0X2A8);
    after_1:
    // 0x45001FB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x45001FBC: bne         $s1, $s2, L_45001FB0
    if (ctx->r17 != ctx->r18) {
        // 0x45001FC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45001FB0;
    }
    // 0x45001FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45001FC4: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001FC8: sw          $s0, 0x2CF8($at)
    MEM_W(0X2CF8, ctx->r1) = ctx->r16;
    // 0x45001FCC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001FD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45001FD4: lui         $a0, 0x4500
    ctx->r4 = S32(0X4500 << 16);
    // 0x45001FD8: sw          $t6, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r14;
    // 0x45001FDC: addiu       $a0, $a0, 0x3ED0
    ctx->r4 = ADD32(ctx->r4, 0X3ED0);
    // 0x45001FE0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x45001FE4: addiu       $a2, $zero, 0x1800
    ctx->r6 = ADD32(0, 0X1800);
    // 0x45001FE8: jal         0x45000820
    // 0x45001FEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_820(rdram, ctx);
        goto after_2;
    // 0x45001FEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x45001FF0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001FF4: sw          $v0, 0x2CF4($at)
    MEM_W(0X2CF4, ctx->r1) = ctx->r2;
    // 0x45001FF8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45001FFC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x45002000: sw          $t7, 0x2CF0($at)
    MEM_W(0X2CF0, ctx->r1) = ctx->r15;
    // 0x45002004: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x45002008: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500200C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45002010: sw          $v1, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = ctx->r3;
    // 0x45002014: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45002018: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500201C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x45002020: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x45002024: sw          $v1, -0x708($at)
    MEM_W(-0X708, ctx->r1) = ctx->r3;
    // 0x45002028: jr          $ra
    // 0x4500202C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4500202C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_2030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002030: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45002034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45002038: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500203C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45002040: jal         0x450013B8
    // 0x45002044: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45002044: nop

    after_0:
    // 0x45002048: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4500204C: jal         0x450014A0
    // 0x45002050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_mobj_main_14A0(rdram, ctx);
        goto after_1;
    // 0x45002050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x45002054: lw          $v0, 0x1C8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C8);
    // 0x45002058: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500205C: beq         $v0, $at, L_45002084
    if (ctx->r2 == ctx->r1) {
        // 0x45002060: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_45002084;
    }
    // 0x45002060: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x45002064: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x45002068: beq         $v0, $at, L_45002098
    if (ctx->r2 == ctx->r1) {
        // 0x4500206C: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_45002098;
    }
    // 0x4500206C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x45002070: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x45002074: beq         $v0, $at, L_450020AC
    if (ctx->r2 == ctx->r1) {
        // 0x45002078: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_450020AC;
    }
    // 0x45002078: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4500207C: b           L_450020B8
    // 0x45002080: nop

        goto L_450020B8;
    // 0x45002080: nop

L_45002084:
    // 0x45002084: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45002088: jal         0x45000F34
    // 0x4500208C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x4500208C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x45002090: b           L_450020B8
    // 0x45002094: nop

        goto L_450020B8;
    // 0x45002094: nop

L_45002098:
    // 0x45002098: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x4500209C: jal         0x45000F34
    // 0x450020A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x450020A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x450020A4: b           L_450020B8
    // 0x450020A8: nop

        goto L_450020B8;
    // 0x450020A8: nop

L_450020AC:
    // 0x450020AC: lw          $a0, 0x1CC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1CC);
    // 0x450020B0: jal         0x450006C4
    // 0x450020B4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_4;
    // 0x450020B4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_4:
L_450020B8:
    // 0x450020B8: lui         $v0, 0x4501
    ctx->r2 = S32(0X4501 << 16);
    // 0x450020BC: addiu       $v0, $v0, -0x710
    ctx->r2 = ADD32(ctx->r2, -0X710);
    // 0x450020C0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x450020C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450020C8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x450020CC: jal         0x45001220
    // 0x450020D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_mobj_main_1220(rdram, ctx);
        goto after_5;
    // 0x450020D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_5:
    // 0x450020D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450020D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x450020DC: jr          $ra
    // 0x450020E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x450020E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_20E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450020E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x450020E8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x450020EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450020F0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x450020F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x450020F8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x450020FC: jal         0x450006C4
    // 0x45002100: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45002100: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x45002104: bne         $v0, $zero, L_45002240
    if (ctx->r2 != 0) {
        // 0x45002108: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002240;
    }
    // 0x45002108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500210C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x45002110: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x45002114: beq         $t6, $zero, L_45002140
    if (ctx->r14 == 0) {
        // 0x45002118: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_45002140;
    }
    // 0x45002118: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500211C: bne         $t6, $at, L_45002138
    if (ctx->r14 != ctx->r1) {
        // 0x45002120: lw          $t8, 0x40($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X40);
            goto L_45002138;
    }
    // 0x45002120: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x45002124: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x45002128: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500212C: beq         $t7, $at, L_45002144
    if (ctx->r15 == ctx->r1) {
        // 0x45002130: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_45002144;
    }
    // 0x45002130: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45002134: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
L_45002138:
    // 0x45002138: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500213C: bne         $t8, $at, L_4500223C
    if (ctx->r24 != ctx->r1) {
        // 0x45002140: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_4500223C;
    }
L_45002140:
    // 0x45002140: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_45002144:
    // 0x45002144: jal         0x450006C4
    // 0x45002148: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45002148: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x4500214C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x45002150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45002154: jal         0x450006C4
    // 0x45002158: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45002158: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x4500215C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45002160: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x45002164: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x45002168: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x4500216C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x45002170: bc1t        L_4500223C
    if (c1cs) {
        // 0x45002174: addiu       $a1, $zero, 0x1B
        ctx->r5 = ADD32(0, 0X1B);
            goto L_4500223C;
    }
    // 0x45002174: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x45002178: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4500217C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x45002180: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x45002184: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x45002188: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x4500218C: jal         0x450006C4
    // 0x45002190: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x45002190: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x45002194: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x45002198: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4500219C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450021A0: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x450021A4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x450021A8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x450021AC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450021B0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x450021B4: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x450021B8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x450021BC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x450021C0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x450021C4: bc1f        L_450021EC
    if (!c1cs) {
        // 0x450021C8: sub.s       $f2, $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_450021EC;
    }
    // 0x450021C8: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x450021CC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x450021D0: nop

    // 0x450021D4: bc1f        L_450021EC
    if (!c1cs) {
        // 0x450021D8: nop
    
            goto L_450021EC;
    }
    // 0x450021D8: nop

    // 0x450021DC: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x450021E0: nop

    // 0x450021E4: bc1t        L_45002240
    if (c1cs) {
        // 0x450021E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002240;
    }
    // 0x450021E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450021EC:
    // 0x450021EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x450021F0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x450021F4: bc1f        L_45002220
    if (!c1cs) {
        // 0x450021F8: addiu       $t9, $sp, 0x1C
        ctx->r25 = ADD32(ctx->r29, 0X1C);
            goto L_45002220;
    }
    // 0x450021F8: addiu       $t9, $sp, 0x1C
    ctx->r25 = ADD32(ctx->r29, 0X1C);
    // 0x450021FC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x45002200: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45002204: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x45002208: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x4500220C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x45002210: nop

    // 0x45002214: bc1f        L_45002224
    if (!c1cs) {
        // 0x45002218: lw          $a0, 0x5C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X5C);
            goto L_45002224;
    }
    // 0x45002218: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x4500221C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_45002220:
    // 0x45002220: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
L_45002224:
    // 0x45002224: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45002228: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x4500222C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x45002230: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x45002234: jal         0x450006C4
    // 0x45002238: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_4;
    // 0x45002238: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
L_4500223C:
    // 0x4500223C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002240:
    // 0x45002240: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x45002244: jr          $ra
    // 0x45002248: nop

    return;
    // 0x45002248: nop

;}
RECOMP_FUNC void ovl_mobj_main_224C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500224C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45002250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45002254: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45002258: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x4500225C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x45002260: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x45002264: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x45002268: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x4500226C: nop

    // 0x45002270: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x45002274: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x45002278: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4500227C: jal         0x4500109C
    // 0x45002280: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45002280: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x45002284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002288: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4500228C: jr          $ra
    // 0x45002290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x45002290: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_mobj_main_2294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002294: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45002298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500229C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450022A0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x450022A4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x450022A8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x450022AC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450022B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450022B4: jal         0x450006C4
    // 0x450022B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450022B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x450022BC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x450022C0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x450022C4: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450022C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x450022CC: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x450022D0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x450022D4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450022D8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x450022DC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x450022E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x450022E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x450022E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x450022EC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x450022F0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x450022F4: jal         0x4500224C
    // 0x450022F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_224C(rdram, ctx);
        goto after_1;
    // 0x450022F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x450022FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002300: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45002304: jr          $ra
    // 0x45002308: nop

    return;
    // 0x45002308: nop

;}
RECOMP_FUNC void ovl_mobj_main_230C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500230C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45002310: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45002314: lui         $a0, 0x4501
    ctx->r4 = S32(0X4501 << 16);
    // 0x45002318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500231C: lw          $a0, 0x2CF4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2CF4);
    // 0x45002320: jal         0x4500082C
    // 0x45002324: nop

    ovl_mobj_main_82C(rdram, ctx);
        goto after_0;
    // 0x45002324: nop

    after_0:
    // 0x45002328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500232C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45002330: jr          $ra
    // 0x45002334: nop

    return;
    // 0x45002334: nop

;}
RECOMP_FUNC void ovl_mobj_main_2338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500233C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45002340: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x45002344: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x45002348: beq         $v0, $at, L_450023B0
    if (ctx->r2 == ctx->r1) {
        // 0x4500234C: addiu       $at, $zero, 0xB2
        ctx->r1 = ADD32(0, 0XB2);
            goto L_450023B0;
    }
    // 0x4500234C: addiu       $at, $zero, 0xB2
    ctx->r1 = ADD32(0, 0XB2);
    // 0x45002350: beq         $v0, $at, L_450023B0
    if (ctx->r2 == ctx->r1) {
        // 0x45002354: addiu       $at, $zero, 0xEC
        ctx->r1 = ADD32(0, 0XEC);
            goto L_450023B0;
    }
    // 0x45002354: addiu       $at, $zero, 0xEC
    ctx->r1 = ADD32(0, 0XEC);
    // 0x45002358: beq         $v0, $at, L_45002380
    if (ctx->r2 == ctx->r1) {
        // 0x4500235C: addiu       $at, $zero, 0xEF
        ctx->r1 = ADD32(0, 0XEF);
            goto L_45002380;
    }
    // 0x4500235C: addiu       $at, $zero, 0xEF
    ctx->r1 = ADD32(0, 0XEF);
    // 0x45002360: beq         $v0, $at, L_45002380
    if (ctx->r2 == ctx->r1) {
        // 0x45002364: addiu       $at, $zero, 0x106
        ctx->r1 = ADD32(0, 0X106);
            goto L_45002380;
    }
    // 0x45002364: addiu       $at, $zero, 0x106
    ctx->r1 = ADD32(0, 0X106);
    // 0x45002368: beq         $v0, $at, L_450023A0
    if (ctx->r2 == ctx->r1) {
        // 0x4500236C: addiu       $at, $zero, 0x113
        ctx->r1 = ADD32(0, 0X113);
            goto L_450023A0;
    }
    // 0x4500236C: addiu       $at, $zero, 0x113
    ctx->r1 = ADD32(0, 0X113);
    // 0x45002370: beq         $v0, $at, L_45002390
    if (ctx->r2 == ctx->r1) {
        // 0x45002374: nop
    
            goto L_45002390;
    }
    // 0x45002374: nop

    // 0x45002378: b           L_450023BC
    // 0x4500237C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450023BC;
    // 0x4500237C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002380:
    // 0x45002380: jal         0x45000F80
    // 0x45002384: addiu       $a1, $zero, 0x390
    ctx->r5 = ADD32(0, 0X390);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x45002384: addiu       $a1, $zero, 0x390
    ctx->r5 = ADD32(0, 0X390);
    after_0:
    // 0x45002388: b           L_450023BC
    // 0x4500238C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450023BC;
    // 0x4500238C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002390:
    // 0x45002390: jal         0x45000F80
    // 0x45002394: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x45002394: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_1:
    // 0x45002398: b           L_450023BC
    // 0x4500239C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450023BC;
    // 0x4500239C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450023A0:
    // 0x450023A0: jal         0x45000F80
    // 0x450023A4: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x450023A4: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_2:
    // 0x450023A8: b           L_450023BC
    // 0x450023AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450023BC;
    // 0x450023AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450023B0:
    // 0x450023B0: jal         0x45000F80
    // 0x450023B4: addiu       $a1, $zero, 0xDA
    ctx->r5 = ADD32(0, 0XDA);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_3;
    // 0x450023B4: addiu       $a1, $zero, 0xDA
    ctx->r5 = ADD32(0, 0XDA);
    after_3:
    // 0x450023B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450023BC:
    // 0x450023BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450023C0: jr          $ra
    // 0x450023C4: nop

    return;
    // 0x450023C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_23C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450023C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x450023CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450023D0: beq         $a1, $zero, L_4500240C
    if (ctx->r5 == 0) {
        // 0x450023D4: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_4500240C;
    }
    // 0x450023D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x450023D8: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x450023DC: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x450023E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x450023E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x450023E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x450023EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x450023F0: lbu         $t9, 0x787($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X787);
    // 0x450023F4: lui         $t2, 0x4501
    ctx->r10 = S32(0X4501 << 16);
    // 0x450023F8: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x450023FC: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x45002400: addiu       $t2, $t2, 0x67C
    ctx->r10 = ADD32(ctx->r10, 0X67C);
    // 0x45002404: b           L_45002438
    // 0x45002408: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
        goto L_45002438;
    // 0x45002408: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
L_4500240C:
    // 0x4500240C: lw          $t3, 0xC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC);
    // 0x45002410: lui         $t5, 0x4501
    ctx->r13 = S32(0X4501 << 16);
    // 0x45002414: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x45002418: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x4500241C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x45002420: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x45002424: lbu         $t5, 0x787($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X787);
    // 0x45002428: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x4500242C: addiu       $t7, $t7, 0x67C
    ctx->r15 = ADD32(ctx->r15, 0X67C);
    // 0x45002430: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x45002434: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_45002438:
    // 0x45002438: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4500243C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002440: beq         $a1, $at, L_4500246C
    if (ctx->r5 == ctx->r1) {
        // 0x45002444: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_4500246C;
    }
    // 0x45002444: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x45002448: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x4500244C: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x45002450: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x45002454: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x45002458: jal         0x45002294
    // 0x4500245C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_2294(rdram, ctx);
        goto after_0;
    // 0x4500245C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45002460: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45002464: nop

    // 0x45002468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_4500246C:
    // 0x4500246C: lui         $t1, 0x4501
    ctx->r9 = S32(0X4501 << 16);
    // 0x45002470: beq         $t8, $zero, L_450024B0
    if (ctx->r24 == 0) {
        // 0x45002474: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_450024B0;
    }
    // 0x45002474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45002478: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x4500247C: addiu       $t1, $t1, 0x77C
    ctx->r9 = ADD32(ctx->r9, 0X77C);
    // 0x45002480: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x45002484: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x45002488: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x4500248C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x45002490: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x45002494: nop

    // 0x45002498: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x4500249C: bgez        $t3, L_450024B0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x450024A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_450024B0;
    }
    // 0x450024A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450024A4: jal         0x45002338
    // 0x450024A8: nop

    ovl_mobj_main_2338(rdram, ctx);
        goto after_1;
    // 0x450024A8: nop

    after_1:
    // 0x450024AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450024B0:
    // 0x450024B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x450024B4: jr          $ra
    // 0x450024B8: nop

    return;
    // 0x450024B8: nop

;}
RECOMP_FUNC void ovl_mobj_main_24BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450024BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450024C0: bne         $a1, $zero, L_450024DC
    if (ctx->r5 != 0) {
        // 0x450024C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_450024DC;
    }
    // 0x450024C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450024C8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450024CC: nop

    // 0x450024D0: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x450024D4: beq         $t7, $zero, L_450024FC
    if (ctx->r15 == 0) {
        // 0x450024D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450024FC;
    }
    // 0x450024D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450024DC:
    // 0x450024DC: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x450024E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x450024E4: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x450024E8: bne         $t8, $zero, L_450024F8
    if (ctx->r24 != 0) {
        // 0x450024EC: ori         $t9, $v0, 0x2
        ctx->r25 = ctx->r2 | 0X2;
            goto L_450024F8;
    }
    // 0x450024EC: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x450024F0: jal         0x450023C8
    // 0x450024F4: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    ovl_mobj_main_23C8(rdram, ctx);
        goto after_0;
    // 0x450024F4: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    after_0:
L_450024F8:
    // 0x450024F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450024FC:
    // 0x450024FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45002500: jr          $ra
    // 0x45002504: nop

    return;
    // 0x45002504: nop

;}
