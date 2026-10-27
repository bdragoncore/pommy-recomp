#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80004E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004E4C: sw          $a0, 0x4720($at)
    MEM_W(0X4720, ctx->r1) = ctx->r4;
    // 0x80004E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004E54: sw          $a1, 0x4724($at)
    MEM_W(0X4724, ctx->r1) = ctx->r5;
    // 0x80004E58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004E5C: sw          $a2, 0x4728($at)
    MEM_W(0X4728, ctx->r1) = ctx->r6;
    // 0x80004E60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004E64: jr          $ra
    // 0x80004E68: sw          $a3, 0x472C($at)
    MEM_W(0X472C, ctx->r1) = ctx->r7;
    return;
    // 0x80004E68: sw          $a3, 0x472C($at)
    MEM_W(0X472C, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_80004E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004E70: sw          $a0, -0x16BC($at)
    MEM_W(-0X16BC, ctx->r1) = ctx->r4;
    // 0x80004E74: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004E78: sw          $a1, -0x16B8($at)
    MEM_W(-0X16B8, ctx->r1) = ctx->r5;
    // 0x80004E7C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004E80: jr          $ra
    // 0x80004E84: sw          $a2, -0x16B4($at)
    MEM_W(-0X16B4, ctx->r1) = ctx->r6;
    return;
    // 0x80004E84: sw          $a2, -0x16B4($at)
    MEM_W(-0X16B4, ctx->r1) = ctx->r6;
;}
RECOMP_FUNC void func_80004E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004E8C: jr          $ra
    // 0x80004E90: sw          $a0, -0x16AC($at)
    MEM_W(-0X16AC, ctx->r1) = ctx->r4;
    return;
    // 0x80004E90: sw          $a0, -0x16AC($at)
    MEM_W(-0X16AC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80004E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004E98: jr          $ra
    // 0x80004E9C: sw          $a0, -0x16B0($at)
    MEM_W(-0X16B0, ctx->r1) = ctx->r4;
    return;
    // 0x80004E9C: sw          $a0, -0x16B0($at)
    MEM_W(-0X16B0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80004EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004EA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004EA4: jr          $ra
    // 0x80004EA8: sw          $a0, -0x16C0($at)
    MEM_W(-0X16C0, ctx->r1) = ctx->r4;
    return;
    // 0x80004EA8: sw          $a0, -0x16C0($at)
    MEM_W(-0X16C0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80004EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004EB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80004EB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80004EB8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80004EBC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80004EC0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80004EC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004EC8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80004ECC: jal         0x80075300
    // 0x80004ED0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80004ED0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x80004ED4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80004ED8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80004EDC: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
    // 0x80004EE0: srl         $t6, $a1, 4
    ctx->r14 = S32(U32(ctx->r5) >> 4);
    // 0x80004EE4: jal         0x80075600
    // 0x80004EE8: sll         $a1, $t6, 4
    ctx->r5 = S32(ctx->r14 << 4);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80004EE8: sll         $a1, $t6, 4
    ctx->r5 = S32(ctx->r14 << 4);
    after_1:
    // 0x80004EEC: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80004EF0: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80004EF4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80004EF8: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x80004EFC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80004F00: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80004F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80004F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80004F0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80004F10: jal         0x80075470
    // 0x80004F14: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x80004F14: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x80004F18: bne         $v0, $zero, L_80004F3C
    if (ctx->r2 != 0) {
        // 0x80004F1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80004F3C;
    }
    // 0x80004F1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80004F20: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80004F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80004F28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004F2C: jal         0x80075330
    // 0x80004F30: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80004F30: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_3:
    // 0x80004F34: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80004F38: nop

L_80004F3C:
    // 0x80004F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80004F40: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80004F44: jr          $ra
    // 0x80004F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80004F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80004F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004F54: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80004F58: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80004F5C: addiu       $a2, $a2, 0x4748
    ctx->r6 = ADD32(ctx->r6, 0X4748);
    // 0x80004F60: addiu       $a1, $a1, 0x4730
    ctx->r5 = ADD32(ctx->r5, 0X4730);
    // 0x80004F64: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x80004F68: jal         0x80075190
    // 0x80004F6C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    osCreatePiManager_recomp(rdram, ctx);
        goto after_0;
    // 0x80004F6C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x80004F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004F78: jr          $ra
    // 0x80004F7C: nop

    return;
    // 0x80004F7C: nop

;}
RECOMP_FUNC void func_80004F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004F80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80004F84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80004F88: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80004F8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80004F90: beq         $a0, $zero, L_80004FA8
    if (ctx->r4 == 0) {
        // 0x80004F94: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80004FA8;
    }
    // 0x80004F94: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80004F98: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80004F9C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x80004FA0: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x80004FA4: sw          $s0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r16;
L_80004FA8:
    // 0x80004FA8: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80004FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004FB0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80004FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004FB8: jal         0x80075300
    // 0x80004FBC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80004FBC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80004FC0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80004FC4: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, 0X4838);
    // 0x80004FC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80004FCC: jal         0x80075F70
    // 0x80004FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80004FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80004FD4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80004FD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004FDC: beq         $a3, $zero, L_80005000
    if (ctx->r7 == 0) {
        // 0x80004FE0: nop
    
            goto L_80005000;
    }
    // 0x80004FE0: nop

    // 0x80004FE4: beq         $a3, $at, L_80005008
    if (ctx->r7 == ctx->r1) {
        // 0x80004FE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80005008;
    }
    // 0x80004FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80004FF0: beq         $a3, $at, L_80005020
    if (ctx->r7 == ctx->r1) {
        // 0x80004FF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80005020;
    }
    // 0x80004FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004FF8: b           L_80005048
    // 0x80004FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80005048;
    // 0x80004FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80005000:
    // 0x80005000: b           L_80005044
    // 0x80005004: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
        goto L_80005044;
    // 0x80005004: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
L_80005008:
    // 0x80005008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000500C: jal         0x80075330
    // 0x80005010: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80005010: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80005014: b           L_80005048
    // 0x80005018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80005048;
    // 0x80005018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000501C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80005020:
    // 0x80005020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80005024: jal         0x80075330
    // 0x80005028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80005028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8000502C: beq         $v0, $zero, L_80005048
    if (ctx->r2 == 0) {
        // 0x80005030: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80005048;
    }
    // 0x80005030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005034: jal         0x80007AB0
    // 0x80005038: nop

    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x80005038: nop

    after_4:
    // 0x8000503C: b           L_80005020
    // 0x80005040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80005020;
    // 0x80005040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80005044:
    // 0x80005044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80005048:
    // 0x80005048: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8000504C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80005050: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80005054: jr          $ra
    // 0x80005058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80005058: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000505C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000505C: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80005060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80005064: beq         $v0, $zero, L_8000507C
    if (ctx->r2 == 0) {
        // 0x80005068: nop
    
            goto L_8000507C;
    }
    // 0x80005068: nop

    // 0x8000506C: beq         $v0, $at, L_80005088
    if (ctx->r2 == ctx->r1) {
        // 0x80005070: nop
    
            goto L_80005088;
    }
    // 0x80005070: nop

    // 0x80005074: b           L_80005094
    // 0x80005078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80005094;
    // 0x80005078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000507C:
    // 0x8000507C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80005080: jr          $ra
    // 0x80005084: addiu       $v0, $v0, 0x5280
    ctx->r2 = ADD32(ctx->r2, 0X5280);
    return;
    // 0x80005084: addiu       $v0, $v0, 0x5280
    ctx->r2 = ADD32(ctx->r2, 0X5280);
L_80005088:
    // 0x80005088: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000508C: jr          $ra
    // 0x80005090: addiu       $v0, $v0, 0x5284
    ctx->r2 = ADD32(ctx->r2, 0X5284);
    return;
    // 0x80005090: addiu       $v0, $v0, 0x5284
    ctx->r2 = ADD32(ctx->r2, 0X5284);
L_80005094:
    // 0x80005094: jr          $ra
    // 0x80005098: nop

    return;
    // 0x80005098: nop

;}
RECOMP_FUNC void func_8000509C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000509C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800050A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800050A4: jal         0x8000505C
    // 0x800050A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_8000505C(rdram, ctx);
        goto after_0;
    // 0x800050A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
    // 0x800050AC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800050B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800050B4: beq         $v1, $zero, L_800050FC
    if (ctx->r3 == 0) {
        // 0x800050B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800050FC;
    }
    // 0x800050B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800050BC:
    // 0x800050BC: bne         $v1, $a1, L_800050E4
    if (ctx->r3 != ctx->r5) {
        // 0x800050C0: nop
    
            goto L_800050E4;
    }
    // 0x800050C0: nop

    // 0x800050C4: beq         $a0, $zero, L_800050D8
    if (ctx->r4 == 0) {
        // 0x800050C8: nop
    
            goto L_800050D8;
    }
    // 0x800050C8: nop

    // 0x800050CC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x800050D0: b           L_800050F8
    // 0x800050D4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
        goto L_800050F8;
    // 0x800050D4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_800050D8:
    // 0x800050D8: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x800050DC: b           L_800050F8
    // 0x800050E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_800050F8;
    // 0x800050E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_800050E4:
    // 0x800050E4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800050E8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800050EC: nop

    // 0x800050F0: bne         $v1, $zero, L_800050BC
    if (ctx->r3 != 0) {
        // 0x800050F4: nop
    
            goto L_800050BC;
    }
    // 0x800050F4: nop

L_800050F8:
    // 0x800050F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800050FC:
    // 0x800050FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005100: jr          $ra
    // 0x80005104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80005104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80005108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000510C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005110: jal         0x8000505C
    // 0x80005114: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8000505C(rdram, ctx);
        goto after_0;
    // 0x80005114: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x80005118: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8000511C: nop

    // 0x80005120: beq         $a1, $zero, L_80005154
    if (ctx->r5 == 0) {
        // 0x80005124: nop
    
            goto L_80005154;
    }
    // 0x80005124: nop

    // 0x80005128: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8000512C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80005130: beq         $v1, $zero, L_8000514C
    if (ctx->r3 == 0) {
        // 0x80005134: nop
    
            goto L_8000514C;
    }
    // 0x80005134: nop

L_80005138:
    // 0x80005138: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8000513C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80005140: nop

    // 0x80005144: bne         $v1, $zero, L_80005138
    if (ctx->r3 != 0) {
        // 0x80005148: nop
    
            goto L_80005138;
    }
    // 0x80005148: nop

L_8000514C:
    // 0x8000514C: b           L_80005158
    // 0x80005150: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
        goto L_80005158;
    // 0x80005150: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_80005154:
    // 0x80005154: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_80005158:
    // 0x80005158: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8000515C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005164: jr          $ra
    // 0x80005168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80005168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8000516C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000516C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80005170: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80005174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000517C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80005180: beq         $t7, $zero, L_8000519C
    if (ctx->r15 == 0) {
        // 0x80005184: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8000519C;
    }
    // 0x80005184: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80005188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000518C: beq         $t7, $at, L_800051AC
    if (ctx->r15 == ctx->r1) {
        // 0x80005190: nop
    
            goto L_800051AC;
    }
    // 0x80005190: nop

    // 0x80005194: b           L_800051B8
    // 0x80005198: nop

        goto L_800051B8;
    // 0x80005198: nop

L_8000519C:
    // 0x8000519C: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800051A0: lw          $s0, 0x5280($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5280);
    // 0x800051A4: b           L_800051B8
    // 0x800051A8: nop

        goto L_800051B8;
    // 0x800051A8: nop

L_800051AC:
    // 0x800051AC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800051B0: lw          $s0, 0x5284($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5284);
    // 0x800051B4: nop

L_800051B8:
    // 0x800051B8: beq         $s0, $zero, L_800051E4
    if (ctx->r16 == 0) {
        // 0x800051BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800051E4;
    }
    // 0x800051BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800051C0:
    // 0x800051C0: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x800051C4: nop

    // 0x800051C8: jalr        $t9
    // 0x800051CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800051CC: nop

    after_0:
    // 0x800051D0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800051D4: nop

    // 0x800051D8: bne         $s0, $zero, L_800051C0
    if (ctx->r16 != 0) {
        // 0x800051DC: nop
    
            goto L_800051C0;
    }
    // 0x800051DC: nop

    // 0x800051E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800051E4:
    // 0x800051E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800051E8: jr          $ra
    // 0x800051EC: nop

    return;
    // 0x800051EC: nop

;}
RECOMP_FUNC void func_800051F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800051F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800051F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800051F8: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x800051FC: addiu       $s4, $s4, 0x4838
    ctx->r20 = ADD32(ctx->r20, 0X4838);
    // 0x80005200: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80005204: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80005208: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000520C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80005210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80005214: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80005218: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000521C: jal         0x80000960
    // 0x80005220: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80000960(rdram, ctx);
        goto after_0;
    // 0x80005220: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80005224: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80005228: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8000522C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_80005230:
    // 0x80005230: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80005234:
    // 0x80005234: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80005238: jal         0x80075330
    // 0x8000523C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8000523C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x80005240: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80005244: nop

    // 0x80005248: beq         $v1, $s2, L_80005264
    if (ctx->r3 == ctx->r18) {
        // 0x8000524C: nop
    
            goto L_80005264;
    }
    // 0x8000524C: nop

    // 0x80005250: beq         $v1, $s3, L_80005274
    if (ctx->r3 == ctx->r19) {
        // 0x80005254: sll         $a0, $s2, 16
        ctx->r4 = S32(ctx->r18 << 16);
            goto L_80005274;
    }
    // 0x80005254: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x80005258: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8000525C: b           L_8000528C
    // 0x80005260: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
        goto L_8000528C;
    // 0x80005260: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_80005264:
    // 0x80005264: jal         0x8000516C
    // 0x80005268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8000516C(rdram, ctx);
        goto after_2;
    // 0x80005268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8000526C: b           L_80005234
    // 0x80005270: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_80005234;
    // 0x80005270: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80005274:
    // 0x80005274: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80005278: jal         0x8000516C
    // 0x8000527C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8000516C(rdram, ctx);
        goto after_3;
    // 0x8000527C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_3:
    // 0x80005280: b           L_80005234
    // 0x80005284: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_80005234;
    // 0x80005284: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80005288: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_8000528C:
    // 0x8000528C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80005290: jalr        $t9
    // 0x80005294: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80005294: nop

    after_4:
    // 0x80005298: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8000529C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800052A0: beq         $a0, $zero, L_80005230
    if (ctx->r4 == 0) {
        // 0x800052A4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80005230;
    }
    // 0x800052A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800052A8: jal         0x80075F70
    // 0x800052AC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x800052AC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x800052B0: b           L_80005234
    // 0x800052B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
        goto L_80005234;
    // 0x800052B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800052B8: nop

    // 0x800052BC: nop

    // 0x800052C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800052C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800052C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800052CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800052D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800052D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800052D8: jr          $ra
    // 0x800052DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800052DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800052E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800052E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800052E4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800052E8: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800052EC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x800052F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800052F4: addiu       $t6, $t6, 0x509C
    ctx->r14 = ADD32(ctx->r14, 0X509C);
    // 0x800052F8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800052FC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80005300: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80005304: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80005308: jal         0x80075300
    // 0x8000530C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8000530C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80005310: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80005314: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, 0X4838);
    // 0x80005318: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8000531C: jal         0x80075F70
    // 0x80005320: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80005320: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80005324: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80005328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000532C: jal         0x80075330
    // 0x80005330: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80005330: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80005334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005338: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8000533C: jr          $ra
    // 0x80005340: nop

    return;
    // 0x80005340: nop

;}
RECOMP_FUNC void func_80005344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005344: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80005348: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000534C: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80005350: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80005354: addiu       $t7, $t7, 0x5108
    ctx->r15 = ADD32(ctx->r15, 0X5108);
    // 0x80005358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000535C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80005360: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80005364: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80005368: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000536C: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x80005370: sw          $a2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r6;
    // 0x80005374: sh          $t6, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r14;
    // 0x80005378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000537C: jal         0x80075300
    // 0x80005380: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80005380: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80005384: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80005388: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, 0X4838);
    // 0x8000538C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80005390: jal         0x80075F70
    // 0x80005394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80005394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80005398: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000539C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800053A0: jal         0x80075330
    // 0x800053A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800053A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800053A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800053AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800053B0: jr          $ra
    // 0x800053B4: nop

    return;
    // 0x800053B4: nop

;}
RECOMP_FUNC void func_800053B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800053B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800053BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800053C0: sw          $zero, 0x5280($at)
    MEM_W(0X5280, ctx->r1) = 0;
    // 0x800053C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800053C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800053CC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800053D0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800053D4: sw          $zero, 0x5284($at)
    MEM_W(0X5284, ctx->r1) = 0;
    // 0x800053D8: addiu       $a1, $a1, 0x47B8
    ctx->r5 = ADD32(ctx->r5, 0X47B8);
    // 0x800053DC: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x800053E0: jal         0x80075300
    // 0x800053E4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x800053E4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x800053E8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800053EC: addiu       $a1, $a1, 0x47A0
    ctx->r5 = ADD32(ctx->r5, 0X47A0);
    // 0x800053F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800053F4: jal         0x80075B70
    // 0x800053F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800053F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x800053FC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80005400: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80005404: addiu       $a1, $a1, 0x4850
    ctx->r5 = ADD32(ctx->r5, 0X4850);
    // 0x80005408: addiu       $a0, $a0, 0x4838
    ctx->r4 = ADD32(ctx->r4, 0X4838);
    // 0x8000540C: jal         0x80075300
    // 0x80005410: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80005410: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80005414: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80005418: addiu       $t6, $t6, 0x5280
    ctx->r14 = ADD32(ctx->r14, 0X5280);
    // 0x8000541C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80005420: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80005424: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80005428: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8000542C: addiu       $a2, $a2, 0x51F0
    ctx->r6 = ADD32(ctx->r6, 0X51F0);
    // 0x80005430: addiu       $a0, $a0, 0x48D0
    ctx->r4 = ADD32(ctx->r4, 0X48D0);
    // 0x80005434: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80005438: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8000543C: jal         0x80075C30
    // 0x80005440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80005440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80005444: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80005448: jal         0x80075D80
    // 0x8000544C: addiu       $a0, $a0, 0x48D0
    ctx->r4 = ADD32(ctx->r4, 0X48D0);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x8000544C: addiu       $a0, $a0, 0x48D0
    ctx->r4 = ADD32(ctx->r4, 0X48D0);
    after_4:
    // 0x80005450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80005458: jr          $ra
    // 0x8000545C: nop

    return;
    // 0x8000545C: nop

;}
RECOMP_FUNC void func_80005460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005460: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80005464: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80005468: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8000546C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x80005470: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x80005474: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x80005478: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x8000547C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80005480: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x80005484: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80005488: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x8000548C: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x80005490: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80005494: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80005498: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x8000549C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x800054A0: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x800054A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800054A8: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x800054AC: addiu       $t0, $t0, 0x52A8
    ctx->r8 = ADD32(ctx->r8, 0X52A8);
    // 0x800054B0: addiu       $t1, $t1, 0x52B0
    ctx->r9 = ADD32(ctx->r9, 0X52B0);
    // 0x800054B4: addiu       $t2, $t2, 0x5298
    ctx->r10 = ADD32(ctx->r10, 0X5298);
    // 0x800054B8: addiu       $t3, $t3, 0x5290
    ctx->r11 = ADD32(ctx->r11, 0X5290);
    // 0x800054BC: addiu       $t4, $t4, 0x2B8
    ctx->r12 = ADD32(ctx->r12, 0X2B8);
    // 0x800054C0: addiu       $t5, $t5, 0x2D8
    ctx->r13 = ADD32(ctx->r13, 0X2D8);
    // 0x800054C4: addiu       $s3, $s3, 0x52A0
    ctx->r19 = ADD32(ctx->r19, 0X52A0);
    // 0x800054C8: addiu       $s1, $s1, 0x2DC
    ctx->r17 = ADD32(ctx->r17, 0X2DC);
    // 0x800054CC: addiu       $s0, $zero, -0x201
    ctx->r16 = ADD32(0, -0X201);
    // 0x800054D0: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x800054D4: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x800054D8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800054DC: addiu       $s6, $zero, -0x801
    ctx->r22 = ADD32(0, -0X801);
    // 0x800054E0: addiu       $s7, $zero, -0x101
    ctx->r23 = ADD32(0, -0X101);
    // 0x800054E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800054E8: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
L_800054EC:
    // 0x800054EC: addu        $a3, $t3, $a0
    ctx->r7 = ADD32(ctx->r11, ctx->r4);
    // 0x800054F0: addu        $t8, $t5, $a1
    ctx->r24 = ADD32(ctx->r13, ctx->r5);
    // 0x800054F4: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x800054F8: lb          $v1, 0x0($t8)
    ctx->r3 = MEM_B(ctx->r24, 0X0);
    // 0x800054FC: addu        $t7, $t4, $a0
    ctx->r15 = ADD32(ctx->r12, ctx->r4);
    // 0x80005500: addu        $a2, $t2, $a0
    ctx->r6 = ADD32(ctx->r10, ctx->r4);
    // 0x80005504: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x80005508: bltz        $v1, L_80005520
    if (SIGNED(ctx->r3) < 0) {
        // 0x8000550C: sh          $t6, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r14;
            goto L_80005520;
    }
    // 0x8000550C: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80005510: sll         $fp, $s5, 16
    ctx->r30 = S32(ctx->r21 << 16);
    // 0x80005514: sra         $t9, $fp, 16
    ctx->r25 = S32(SIGNED(ctx->r30) >> 16);
    // 0x80005518: b           L_80005524
    // 0x8000551C: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
        goto L_80005524;
    // 0x8000551C: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
L_80005520:
    // 0x80005520: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_80005524:
    // 0x80005524: multu       $v1, $fp
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80005528: mflo        $t6
    ctx->r14 = lo;
    // 0x8000552C: addiu       $t7, $t6, -0x1E
    ctx->r15 = ADD32(ctx->r14, -0X1E);
    // 0x80005530: blez        $t7, L_80005560
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80005534: addu        $t8, $s1, $a1
        ctx->r24 = ADD32(ctx->r17, ctx->r5);
            goto L_80005560;
    }
    // 0x80005534: addu        $t8, $s1, $a1
    ctx->r24 = ADD32(ctx->r17, ctx->r5);
    // 0x80005538: blez        $fp, L_80005550
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8000553C: nop
    
            goto L_80005550;
    }
    // 0x8000553C: nop

    // 0x80005540: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x80005544: ori         $t8, $v0, 0x100
    ctx->r24 = ctx->r2 | 0X100;
    // 0x80005548: b           L_8000555C
    // 0x8000554C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
        goto L_8000555C;
    // 0x8000554C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_80005550:
    // 0x80005550: and         $v0, $v0, $s7
    ctx->r2 = ctx->r2 & ctx->r23;
    // 0x80005554: ori         $t6, $v0, 0x200
    ctx->r14 = ctx->r2 | 0X200;
    // 0x80005558: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
L_8000555C:
    // 0x8000555C: addu        $t8, $s1, $a1
    ctx->r24 = ADD32(ctx->r17, ctx->r5);
L_80005560:
    // 0x80005560: lb          $v1, 0x0($t8)
    ctx->r3 = MEM_B(ctx->r24, 0X0);
    // 0x80005564: nop

    // 0x80005568: bltz        $v1, L_8000557C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8000556C: sll         $fp, $s5, 16
        ctx->r30 = S32(ctx->r21 << 16);
            goto L_8000557C;
    }
    // 0x8000556C: sll         $fp, $s5, 16
    ctx->r30 = S32(ctx->r21 << 16);
    // 0x80005570: sra         $t9, $fp, 16
    ctx->r25 = S32(SIGNED(ctx->r30) >> 16);
    // 0x80005574: b           L_80005580
    // 0x80005578: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
        goto L_80005580;
    // 0x80005578: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
L_8000557C:
    // 0x8000557C: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_80005580:
    // 0x80005580: multu       $v1, $fp
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80005584: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x80005588: mflo        $t6
    ctx->r14 = lo;
    // 0x8000558C: addiu       $t7, $t6, -0x1E
    ctx->r15 = ADD32(ctx->r14, -0X1E);
    // 0x80005590: blez        $t7, L_800055BC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80005594: nop
    
            goto L_800055BC;
    }
    // 0x80005594: nop

    // 0x80005598: blez        $fp, L_800055B0
    if (SIGNED(ctx->r30) <= 0) {
        // 0x8000559C: nop
    
            goto L_800055B0;
    }
    // 0x8000559C: nop

    // 0x800055A0: and         $v0, $v0, $s2
    ctx->r2 = ctx->r2 & ctx->r18;
    // 0x800055A4: ori         $t8, $v0, 0x800
    ctx->r24 = ctx->r2 | 0X800;
    // 0x800055A8: b           L_800055BC
    // 0x800055AC: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
        goto L_800055BC;
    // 0x800055AC: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_800055B0:
    // 0x800055B0: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x800055B4: ori         $t6, $v0, 0x400
    ctx->r14 = ctx->r2 | 0X400;
    // 0x800055B8: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
L_800055BC:
    // 0x800055BC: lhu         $ra, 0x0($a2)
    ctx->r31 = MEM_HU(ctx->r6, 0X0);
    // 0x800055C0: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x800055C4: xor         $t8, $ra, $v0
    ctx->r24 = ctx->r31 ^ ctx->r2;
    // 0x800055C8: and         $t9, $t8, $v0
    ctx->r25 = ctx->r24 & ctx->r2;
    // 0x800055CC: beq         $v0, $ra, L_800055E8
    if (ctx->r2 == ctx->r31) {
        // 0x800055D0: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_800055E8;
    }
    // 0x800055D0: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x800055D4: addu        $t6, $t1, $a0
    ctx->r14 = ADD32(ctx->r9, ctx->r4);
    // 0x800055D8: sh          $s4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r20;
    // 0x800055DC: addu        $t8, $t0, $a0
    ctx->r24 = ADD32(ctx->r8, ctx->r4);
    // 0x800055E0: b           L_80005618
    // 0x800055E4: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
        goto L_80005618;
    // 0x800055E4: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
L_800055E8:
    // 0x800055E8: addu        $a2, $t1, $a0
    ctx->r6 = ADD32(ctx->r9, ctx->r4);
    // 0x800055EC: lh          $a3, 0x0($a2)
    ctx->r7 = MEM_H(ctx->r6, 0X0);
    // 0x800055F0: addu        $t7, $t0, $a0
    ctx->r15 = ADD32(ctx->r8, ctx->r4);
    // 0x800055F4: blez        $a3, L_8000560C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x800055F8: addiu       $t9, $a3, -0x1
        ctx->r25 = ADD32(ctx->r7, -0X1);
            goto L_8000560C;
    }
    // 0x800055F8: addiu       $t9, $a3, -0x1
    ctx->r25 = ADD32(ctx->r7, -0X1);
    // 0x800055FC: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80005600: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x80005604: b           L_80005618
    // 0x80005608: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
        goto L_80005618;
    // 0x80005608: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_8000560C:
    // 0x8000560C: addu        $t8, $t0, $a0
    ctx->r24 = ADD32(ctx->r8, ctx->r4);
    // 0x80005610: sh          $s5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r21;
    // 0x80005614: sh          $v0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r2;
L_80005618:
    // 0x80005618: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8000561C: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80005620: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80005624: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x80005628: bne         $at, $zero, L_800054EC
    if (ctx->r1 != 0) {
        // 0x8000562C: sll         $a0, $a1, 1
        ctx->r4 = S32(ctx->r5 << 1);
            goto L_800054EC;
    }
    // 0x8000562C: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x80005630: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80005634: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80005638: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8000563C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x80005640: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x80005644: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x80005648: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x8000564C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x80005650: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x80005654: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x80005658: jr          $ra
    // 0x8000565C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000565C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80005660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005660: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80005664: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80005668: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x8000566C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80005670: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80005674: addiu       $a2, $a2, 0x52B0
    ctx->r6 = ADD32(ctx->r6, 0X52B0);
    // 0x80005678: addiu       $a3, $a3, 0x52A8
    ctx->r7 = ADD32(ctx->r7, 0X52A8);
    // 0x8000567C: addiu       $t0, $t0, 0x52A0
    ctx->r8 = ADD32(ctx->r8, 0X52A0);
    // 0x80005680: addiu       $t1, $t1, 0x5298
    ctx->r9 = ADD32(ctx->r9, 0X5298);
    // 0x80005684: addiu       $t2, $t2, 0x5290
    ctx->r10 = ADD32(ctx->r10, 0X5290);
    // 0x80005688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000568C:
    // 0x8000568C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80005690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80005694: addu        $t6, $a3, $v1
    ctx->r14 = ADD32(ctx->r7, ctx->r3);
    // 0x80005698: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8000569C: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x800056A0: addu        $t7, $t0, $v1
    ctx->r15 = ADD32(ctx->r8, ctx->r3);
    // 0x800056A4: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800056A8: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x800056AC: addu        $t8, $t1, $v1
    ctx->r24 = ADD32(ctx->r9, ctx->r3);
    // 0x800056B0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x800056B4: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x800056B8: addu        $a0, $a2, $v1
    ctx->r4 = ADD32(ctx->r6, ctx->r3);
    // 0x800056BC: addu        $t9, $t2, $v1
    ctx->r25 = ADD32(ctx->r10, ctx->r3);
    // 0x800056C0: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x800056C4: bne         $at, $zero, L_8000568C
    if (ctx->r1 != 0) {
        // 0x800056C8: sh          $zero, 0x0($a0)
        MEM_H(0X0, ctx->r4) = 0;
            goto L_8000568C;
    }
    // 0x800056C8: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x800056CC: jr          $ra
    // 0x800056D0: nop

    return;
    // 0x800056D0: nop

;}
RECOMP_FUNC void func_800056E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800056E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800056E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800056E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800056EC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800056F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800056F4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800056F8: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x800056FC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80005700: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005704: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80005708: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x8000570C: addiu       $a1, $a1, 0x5C04
    ctx->r5 = ADD32(ctx->r5, 0X5C04);
    // 0x80005710: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80005714: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80005718: jal         0x80004F80
    // 0x8000571C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x8000571C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80005720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80005728: jr          $ra
    // 0x8000572C: nop

    return;
    // 0x8000572C: nop

;}
RECOMP_FUNC void func_80005730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005730: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80005734: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80005738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000573C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80005740: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80005744: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005748: or          $t7, $a2, $zero
    ctx->r15 = ctx->r6 | 0;
    // 0x8000574C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80005750: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005754: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80005758: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
    // 0x8000575C: addiu       $a1, $a1, 0x5CFC
    ctx->r5 = ADD32(ctx->r5, 0X5CFC);
    // 0x80005760: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80005764: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80005768: jal         0x80004F80
    // 0x8000576C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x8000576C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80005770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80005778: jr          $ra
    // 0x8000577C: nop

    return;
    // 0x8000577C: nop

;}
RECOMP_FUNC void func_80005780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005780: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80005784: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80005788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000578C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80005790: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005794: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005798: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8000579C: addiu       $a1, $a1, 0x5DB8
    ctx->r5 = ADD32(ctx->r5, 0X5DB8);
    // 0x800057A0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800057A4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x800057A8: jal         0x80004F80
    // 0x800057AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x800057AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x800057B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800057B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800057B8: jr          $ra
    // 0x800057BC: nop

    return;
    // 0x800057BC: nop

;}
RECOMP_FUNC void func_800057C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800057C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800057C4: beq         $a0, $zero, L_800058E0
    if (ctx->r4 == 0) {
        // 0x800057C8: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_800058E0;
    }
    // 0x800057C8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800057CC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800057D0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800057D4: addiu       $t1, $t1, -0x16A0
    ctx->r9 = ADD32(ctx->r9, -0X16A0);
    // 0x800057D8: addiu       $t2, $t2, -0x1664
    ctx->r10 = ADD32(ctx->r10, -0X1664);
    // 0x800057DC: addiu       $t3, $zero, 0xDF
    ctx->r11 = ADD32(0, 0XDF);
    // 0x800057E0: addiu       $t0, $zero, 0xDE
    ctx->r8 = ADD32(0, 0XDE);
L_800057E4:
    // 0x800057E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800057E8: blez        $a0, L_80005880
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800057EC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80005880;
    }
    // 0x800057EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800057F0: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x800057F4: slti        $at, $v0, 0xB6
    ctx->r1 = SIGNED(ctx->r2) < 0XB6 ? 1 : 0;
    // 0x800057F8: bne         $t0, $a2, L_80005850
    if (ctx->r8 != ctx->r6) {
        // 0x800057FC: nop
    
            goto L_80005850;
    }
    // 0x800057FC: nop

    // 0x80005800: bne         $at, $zero, L_80005828
    if (ctx->r1 != 0) {
        // 0x80005804: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80005828;
    }
    // 0x80005804: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005808: slti        $at, $v1, 0xC5
    ctx->r1 = SIGNED(ctx->r3) < 0XC5 ? 1 : 0;
    // 0x8000580C: beq         $at, $zero, L_80005828
    if (ctx->r1 == 0) {
        // 0x80005810: addiu       $t6, $v1, -0x3A
        ctx->r14 = ADD32(ctx->r3, -0X3A);
            goto L_80005828;
    }
    // 0x80005810: addiu       $t6, $v1, -0x3A
    ctx->r14 = ADD32(ctx->r3, -0X3A);
    // 0x80005814: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x80005818: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8000581C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80005820: b           L_800058D4
    // 0x80005824: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_800058D4;
    // 0x80005824: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80005828:
    // 0x80005828: slti        $at, $v1, 0xCA
    ctx->r1 = SIGNED(ctx->r3) < 0XCA ? 1 : 0;
    // 0x8000582C: bne         $at, $zero, L_80005880
    if (ctx->r1 != 0) {
        // 0x80005830: slti        $at, $v1, 0xCF
        ctx->r1 = SIGNED(ctx->r3) < 0XCF ? 1 : 0;
            goto L_80005880;
    }
    // 0x80005830: slti        $at, $v1, 0xCF
    ctx->r1 = SIGNED(ctx->r3) < 0XCF ? 1 : 0;
    // 0x80005834: beq         $at, $zero, L_80005880
    if (ctx->r1 == 0) {
        // 0x80005838: addiu       $t7, $v1, -0x3F
        ctx->r15 = ADD32(ctx->r3, -0X3F);
            goto L_80005880;
    }
    // 0x80005838: addiu       $t7, $v1, -0x3F
    ctx->r15 = ADD32(ctx->r3, -0X3F);
    // 0x8000583C: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x80005840: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80005844: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80005848: b           L_800058D4
    // 0x8000584C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_800058D4;
    // 0x8000584C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80005850:
    // 0x80005850: bne         $t3, $a2, L_80005880
    if (ctx->r11 != ctx->r6) {
        // 0x80005854: slti        $at, $v0, 0xCA
        ctx->r1 = SIGNED(ctx->r2) < 0XCA ? 1 : 0;
            goto L_80005880;
    }
    // 0x80005854: slti        $at, $v0, 0xCA
    ctx->r1 = SIGNED(ctx->r2) < 0XCA ? 1 : 0;
    // 0x80005858: bne         $at, $zero, L_80005880
    if (ctx->r1 != 0) {
        // 0x8000585C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80005880;
    }
    // 0x8000585C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005860: slti        $at, $v1, 0xCF
    ctx->r1 = SIGNED(ctx->r3) < 0XCF ? 1 : 0;
    // 0x80005864: beq         $at, $zero, L_80005880
    if (ctx->r1 == 0) {
        // 0x80005868: addiu       $t8, $v1, -0x3A
        ctx->r24 = ADD32(ctx->r3, -0X3A);
            goto L_80005880;
    }
    // 0x80005868: addiu       $t8, $v1, -0x3A
    ctx->r24 = ADD32(ctx->r3, -0X3A);
    // 0x8000586C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x80005870: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80005874: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80005878: b           L_800058D4
    // 0x8000587C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_800058D4;
    // 0x8000587C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80005880:
    // 0x80005880: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80005884: bne         $at, $zero, L_800058A8
    if (ctx->r1 != 0) {
        // 0x80005888: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800058A8;
    }
    // 0x80005888: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000588C: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80005890: beq         $at, $zero, L_800058A8
    if (ctx->r1 == 0) {
        // 0x80005894: addu        $t9, $t1, $v0
        ctx->r25 = ADD32(ctx->r9, ctx->r2);
            goto L_800058A8;
    }
    // 0x80005894: addu        $t9, $t1, $v0
    ctx->r25 = ADD32(ctx->r9, ctx->r2);
    // 0x80005898: lbu         $t6, -0x20($t9)
    ctx->r14 = MEM_BU(ctx->r25, -0X20);
    // 0x8000589C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800058A0: b           L_800058D4
    // 0x800058A4: sb          $t6, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r14;
        goto L_800058D4;
    // 0x800058A4: sb          $t6, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r14;
L_800058A8:
    // 0x800058A8: slti        $at, $v1, 0xA1
    ctx->r1 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x800058AC: bne         $at, $zero, L_800058CC
    if (ctx->r1 != 0) {
        // 0x800058B0: slti        $at, $v1, 0xE0
        ctx->r1 = SIGNED(ctx->r3) < 0XE0 ? 1 : 0;
            goto L_800058CC;
    }
    // 0x800058B0: slti        $at, $v1, 0xE0
    ctx->r1 = SIGNED(ctx->r3) < 0XE0 ? 1 : 0;
    // 0x800058B4: beq         $at, $zero, L_800058CC
    if (ctx->r1 == 0) {
        // 0x800058B8: addu        $t7, $t2, $v1
        ctx->r15 = ADD32(ctx->r10, ctx->r3);
            goto L_800058CC;
    }
    // 0x800058B8: addu        $t7, $t2, $v1
    ctx->r15 = ADD32(ctx->r10, ctx->r3);
    // 0x800058BC: lbu         $t8, -0xA1($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0XA1);
    // 0x800058C0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800058C4: b           L_800058D4
    // 0x800058C8: sb          $t8, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r24;
        goto L_800058D4;
    // 0x800058C8: sb          $t8, -0x1($a3)
    MEM_B(-0X1, ctx->r7) = ctx->r24;
L_800058CC:
    // 0x800058CC: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x800058D0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_800058D4:
    // 0x800058D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800058D8: bne         $a0, $zero, L_800057E4
    if (ctx->r4 != 0) {
        // 0x800058DC: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_800057E4;
    }
    // 0x800058DC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_800058E0:
    // 0x800058E0: jr          $ra
    // 0x800058E4: nop

    return;
    // 0x800058E4: nop

;}
RECOMP_FUNC void func_800058E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800058E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800058EC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800058F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800058F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800058F8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800058FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80005900: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80005904: jal         0x80077310
    // 0x80005908: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    _bzero(rdram, ctx);
        goto after_0;
    // 0x80005908: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x8000590C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80005910: jal         0x80077310
    // 0x80005914: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bzero(rdram, ctx);
        goto after_1;
    // 0x80005914: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80005918: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8000591C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80005920: addiu       $v1, $zero, 0x2E
    ctx->r3 = ADD32(0, 0X2E);
    // 0x80005924: or          $t4, $t0, $zero
    ctx->r12 = ctx->r8 | 0;
L_80005928:
    // 0x80005928: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x8000592C: nop

    // 0x80005930: beq         $v0, $zero, L_80005958
    if (ctx->r2 == 0) {
        // 0x80005934: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80005958;
    }
    // 0x80005934: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80005938: beq         $v1, $v0, L_80005958
    if (ctx->r3 == ctx->r2) {
        // 0x8000593C: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_80005958;
    }
    // 0x8000593C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80005940: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80005944: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80005948: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000594C: b           L_80005928
    // 0x80005950: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
        goto L_80005928;
    // 0x80005950: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80005954: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80005958:
    // 0x80005958: jal         0x800057C0
    // 0x8000595C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_800057C0(rdram, ctx);
        goto after_2;
    // 0x8000595C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_2:
    // 0x80005960: lbu         $t8, 0x0($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X0);
    // 0x80005964: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80005968: beq         $t8, $zero, L_800059A0
    if (ctx->r24 == 0) {
        // 0x8000596C: or          $t0, $t4, $zero
        ctx->r8 = ctx->r12 | 0;
            goto L_800059A0;
    }
    // 0x8000596C: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x80005970: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80005974:
    // 0x80005974: lbu         $t9, 0x0($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X0);
    // 0x80005978: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8000597C: beq         $t9, $zero, L_80005998
    if (ctx->r25 == 0) {
        // 0x80005980: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_80005998;
    }
    // 0x80005980: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80005984: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80005988: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8000598C: b           L_80005974
    // 0x80005990: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
        goto L_80005974;
    // 0x80005990: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80005994: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80005998:
    // 0x80005998: jal         0x800057C0
    // 0x8000599C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_800057C0(rdram, ctx);
        goto after_3;
    // 0x8000599C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_3:
L_800059A0:
    // 0x800059A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800059A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800059A8: jr          $ra
    // 0x800059AC: nop

    return;
    // 0x800059AC: nop

;}
RECOMP_FUNC void func_800059B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800059B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800059B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800059B8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800059BC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800059C0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800059C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800059C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800059CC: jal         0x800058E8
    // 0x800059D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800058E8(rdram, ctx);
        goto after_0;
    // 0x800059D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x800059D4: lh          $t6, 0x5A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5A);
    // 0x800059D8: lhu         $t7, 0x5E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X5E);
    // 0x800059DC: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800059E0: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x800059E4: addiu       $t9, $sp, 0x20
    ctx->r25 = ADD32(ctx->r29, 0X20);
    // 0x800059E8: addiu       $t0, $sp, 0x1C
    ctx->r8 = ADD32(ctx->r29, 0X1C);
    // 0x800059EC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800059F0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x800059F4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x800059F8: addiu       $a1, $a1, 0x5EC0
    ctx->r5 = ADD32(ctx->r5, 0X5EC0);
    // 0x800059FC: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80005A00: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80005A04: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80005A08: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    // 0x80005A0C: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x80005A10: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80005A14: jal         0x80004F80
    // 0x80005A18: sh          $t1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r9;
    func_80004F80(rdram, ctx);
        goto after_1;
    // 0x80005A18: sh          $t1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r9;
    after_1:
    // 0x80005A1C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80005A20: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80005A24: nop

    // 0x80005A28: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80005A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005A30: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x80005A34: jr          $ra
    // 0x80005A38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80005A38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80005A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005A3C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80005A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005A44: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80005A48: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80005A4C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80005A50: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80005A54: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80005A58: jal         0x800058E8
    // 0x80005A5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_800058E8(rdram, ctx);
        goto after_0;
    // 0x80005A5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80005A60: lh          $t6, 0x52($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X52);
    // 0x80005A64: lhu         $t7, 0x56($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X56);
    // 0x80005A68: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x80005A6C: addiu       $t9, $sp, 0x1C
    ctx->r25 = ADD32(ctx->r29, 0X1C);
    // 0x80005A70: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x80005A74: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005A78: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80005A7C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80005A80: addiu       $a1, $a1, 0x5E60
    ctx->r5 = ADD32(ctx->r5, 0X5E60);
    // 0x80005A84: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80005A88: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80005A8C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80005A90: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
    // 0x80005A94: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x80005A98: jal         0x80004F80
    // 0x80005A9C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_80004F80(rdram, ctx);
        goto after_1;
    // 0x80005A9C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_1:
    // 0x80005AA0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80005AA4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80005AA8: nop

    // 0x80005AAC: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80005AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005AB4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80005AB8: jr          $ra
    // 0x80005ABC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80005ABC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80005AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80005AC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80005AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005ACC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80005AD0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80005AD4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005AD8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005ADC: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80005AE0: addiu       $a1, $a1, 0x5D6C
    ctx->r5 = ADD32(ctx->r5, 0X5D6C);
    // 0x80005AE4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80005AE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80005AEC: jal         0x80004F80
    // 0x80005AF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80005AF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x80005AF4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80005AF8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80005AFC: jal         0x80077EC0
    // 0x80005B00: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    _bcopy(rdram, ctx);
        goto after_1;
    // 0x80005B00: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x80005B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005B08: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80005B0C: jr          $ra
    // 0x80005B10: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80005B10: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80005B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005B14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80005B18: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80005B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005B20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80005B24: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80005B28: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80005B2C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005B30: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005B34: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80005B38: addiu       $a1, $a1, 0x5F94
    ctx->r5 = ADD32(ctx->r5, 0X5F94);
    // 0x80005B3C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80005B40: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80005B44: jal         0x80004F80
    // 0x80005B48: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80005B48: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80005B4C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80005B50: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80005B54: nop

    // 0x80005B58: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80005B5C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80005B60: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80005B64: nop

    // 0x80005B68: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80005B6C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80005B70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80005B74: nop

    // 0x80005B78: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80005B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005B80: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80005B84: jr          $ra
    // 0x80005B88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80005B88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80005B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005B8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80005B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005B94: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80005B98: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005B9C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005BA0: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80005BA4: addiu       $a1, $a1, 0x6028
    ctx->r5 = ADD32(ctx->r5, 0X6028);
    // 0x80005BA8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80005BAC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80005BB0: jal         0x80004F80
    // 0x80005BB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80005BB4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x80005BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80005BC0: jr          $ra
    // 0x80005BC4: nop

    return;
    // 0x80005BC4: nop

;}
RECOMP_FUNC void func_80005BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005BC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80005BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005BD0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80005BD4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80005BD8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80005BDC: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80005BE0: addiu       $a1, $a1, 0x6068
    ctx->r5 = ADD32(ctx->r5, 0X6068);
    // 0x80005BE4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80005BE8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80005BEC: jal         0x80004F80
    // 0x80005BF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80005BF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x80005BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005BF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80005BFC: jr          $ra
    // 0x80005C00: nop

    return;
    // 0x80005C00: nop

;}
RECOMP_FUNC void func_80005C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005C04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80005C08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80005C0C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80005C10: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80005C14: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80005C18: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80005C1C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80005C20: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80005C24: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x80005C28: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80005C2C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80005C30: blez        $t6, L_80005CD4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80005C34: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80005CD4;
    }
    // 0x80005C34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80005C38: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80005C3C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80005C40: addiu       $s2, $s2, 0x5460
    ctx->r18 = ADD32(ctx->r18, 0X5460);
    // 0x80005C44: addiu       $s3, $s3, 0x52C0
    ctx->r19 = ADD32(ctx->r19, 0X52C0);
    // 0x80005C48: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
L_80005C4C:
    // 0x80005C4C: lh          $t7, 0x0($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X0);
    // 0x80005C50: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80005C54: multu       $t7, $s4
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80005C58: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80005C5C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80005C60: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80005C64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80005C68: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80005C6C: mflo        $t8
    ctx->r24 = lo;
    // 0x80005C70: addu        $a0, $s3, $t8
    ctx->r4 = ADD32(ctx->r19, ctx->r24);
    // 0x80005C74: jal         0x80078B64
    // 0x80005C78: nop

    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80005C78: nop

    after_0:
    // 0x80005C7C: bne         $v0, $zero, L_80005CD4
    if (ctx->r2 != 0) {
        // 0x80005C80: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_80005CD4;
    }
    // 0x80005C80: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80005C84: lh          $t0, 0x8($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X8);
    // 0x80005C88: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80005C8C: subu        $v0, $t0, $s0
    ctx->r2 = SUB32(ctx->r8, ctx->r16);
    // 0x80005C90: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80005C94: beq         $at, $zero, L_80005CAC
    if (ctx->r1 == 0) {
        // 0x80005C98: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80005CAC;
    }
    // 0x80005C98: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80005C9C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80005CA0: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80005CA4: b           L_80005CAC
    // 0x80005CA8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
        goto L_80005CAC;
    // 0x80005CA8: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
L_80005CAC:
    // 0x80005CAC: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    // 0x80005CB0: jal         0x80077EC0
    // 0x80005CB4: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
    _bcopy(rdram, ctx);
        goto after_1;
    // 0x80005CB4: addu        $a1, $t2, $s0
    ctx->r5 = ADD32(ctx->r10, ctx->r16);
    after_1:
    // 0x80005CB8: addiu       $s0, $s0, 0x100
    ctx->r16 = ADD32(ctx->r16, 0X100);
    // 0x80005CBC: lh          $t5, 0x8($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X8);
    // 0x80005CC0: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x80005CC4: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80005CC8: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80005CCC: bne         $at, $zero, L_80005C4C
    if (ctx->r1 != 0) {
        // 0x80005CD0: nop
    
            goto L_80005C4C;
    }
    // 0x80005CD0: nop

L_80005CD4:
    // 0x80005CD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80005CD8: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80005CDC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80005CE0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80005CE4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80005CE8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80005CEC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80005CF0: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80005CF4: jr          $ra
    // 0x80005CF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80005CF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80005CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005CFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80005D00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005D04: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80005D08: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x80005D0C: addiu       $v0, $v0, 0xFF
    ctx->r2 = ADD32(ctx->r2, 0XFF);
    // 0x80005D10: andi        $t6, $v0, 0xFF00
    ctx->r14 = ctx->r2 & 0XFF00;
    // 0x80005D14: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80005D18: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80005D1C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80005D20: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80005D24: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x80005D28: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80005D2C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80005D30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80005D34: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x80005D38: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80005D3C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80005D40: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80005D44: addiu       $t2, $t2, 0x52C0
    ctx->r10 = ADD32(ctx->r10, 0X52C0);
    // 0x80005D48: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80005D4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80005D50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80005D54: jal         0x80078B64
    // 0x80005D58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80005D58: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_0:
    // 0x80005D5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80005D64: jr          $ra
    // 0x80005D68: nop

    return;
    // 0x80005D68: nop

;}
RECOMP_FUNC void func_80005D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005D74: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80005D78: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80005D7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80005D80: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80005D84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80005D88: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80005D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80005D90: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80005D94: addiu       $t8, $t8, 0x52C0
    ctx->r24 = ADD32(ctx->r24, 0X52C0);
    // 0x80005D98: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x80005D9C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80005DA0: jal         0x80077CE0
    // 0x80005DA4: addiu       $a2, $a3, 0x8
    ctx->r6 = ADD32(ctx->r7, 0X8);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x80005DA4: addiu       $a2, $a3, 0x8
    ctx->r6 = ADD32(ctx->r7, 0X8);
    after_0:
    // 0x80005DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80005DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80005DB0: jr          $ra
    // 0x80005DB4: nop

    return;
    // 0x80005DB4: nop

;}
RECOMP_FUNC void func_80005DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005DB8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80005DBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005DC0: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80005DC4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80005DC8: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    // 0x80005DCC: lh          $t8, 0x30($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X30);
    // 0x80005DD0: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80005DD4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80005DD8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80005DDC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80005DE0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80005DE4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80005DE8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80005DEC: addiu       $t1, $t1, 0x52C0
    ctx->r9 = ADD32(ctx->r9, 0X52C0);
    // 0x80005DF0: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x80005DF4: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x80005DF8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80005DFC: jal         0x80077CE0
    // 0x80005E00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x80005E00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80005E04: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80005E08: bne         $v0, $zero, L_80005E50
    if (ctx->r2 != 0) {
        // 0x80005E0C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80005E50;
    }
    // 0x80005E0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005E10: lh          $t2, 0x0($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X0);
    // 0x80005E14: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80005E18: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80005E1C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80005E20: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80005E24: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80005E28: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80005E2C: addiu       $t4, $t4, 0x52C0
    ctx->r12 = ADD32(ctx->r12, 0X52C0);
    // 0x80005E30: lhu         $a1, 0x40($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X40);
    // 0x80005E34: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80005E38: addiu       $t5, $sp, 0x42
    ctx->r13 = ADD32(ctx->r29, 0X42);
    // 0x80005E3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80005E40: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x80005E44: jal         0x80078820
    // 0x80005E48: addiu       $a3, $sp, 0x46
    ctx->r7 = ADD32(ctx->r29, 0X46);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_1;
    // 0x80005E48: addiu       $a3, $sp, 0x46
    ctx->r7 = ADD32(ctx->r29, 0X46);
    after_1:
    // 0x80005E4C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80005E50:
    // 0x80005E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005E54: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80005E58: jr          $ra
    // 0x80005E5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80005E5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80005E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80005E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005E68: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80005E6C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80005E70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80005E74: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80005E78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80005E7C: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x80005E80: lhu         $a1, 0x2($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X2);
    // 0x80005E84: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80005E88: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80005E8C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80005E90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80005E94: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80005E98: addiu       $t8, $t8, 0x52C0
    ctx->r24 = ADD32(ctx->r24, 0X52C0);
    // 0x80005E9C: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x80005EA0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80005EA4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80005EA8: jal         0x800781D0
    // 0x80005EAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80005EAC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x80005EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80005EB8: jr          $ra
    // 0x80005EBC: nop

    return;
    // 0x80005EBC: nop

;}
RECOMP_FUNC void func_80005EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005EC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80005EC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80005EC8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80005ECC: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80005ED0: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x80005ED4: lhu         $a1, 0x2($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X2);
    // 0x80005ED8: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80005EDC: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80005EE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80005EE4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80005EE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80005EEC: lh          $t1, 0x10($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X10);
    // 0x80005EF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80005EF4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80005EF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80005EFC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80005F00: addiu       $t8, $t8, 0x52C0
    ctx->r24 = ADD32(ctx->r24, 0X52C0);
    // 0x80005F04: addiu       $t2, $t0, 0x14
    ctx->r10 = ADD32(ctx->r8, 0X14);
    // 0x80005F08: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80005F0C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80005F10: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x80005F14: jal         0x800783A0
    // 0x80005F18: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_0;
    // 0x80005F18: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x80005F1C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80005F20: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80005F24: bne         $v0, $at, L_80005F84
    if (ctx->r2 != ctx->r1) {
        // 0x80005F28: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80005F84;
    }
    // 0x80005F28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005F2C: lh          $t3, 0x0($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X0);
    // 0x80005F30: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80005F34: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
    // 0x80005F38: lhu         $t4, 0x2($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X2);
    // 0x80005F3C: nop

    // 0x80005F40: sh          $t4, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r12;
    // 0x80005F44: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x80005F48: nop

    // 0x80005F4C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80005F50: lw          $t6, 0x8($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X8);
    // 0x80005F54: nop

    // 0x80005F58: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80005F5C: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x80005F60: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x80005F64: jal         0x80005E60
    // 0x80005F68: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_80005E60(rdram, ctx);
        goto after_1;
    // 0x80005F68: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_1:
    // 0x80005F6C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80005F70: bne         $v0, $zero, L_80005F84
    if (ctx->r2 != 0) {
        // 0x80005F74: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80005F84;
    }
    // 0x80005F74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005F78: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80005F7C: nop

    // 0x80005F80: sw          $t8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r24;
L_80005F84:
    // 0x80005F84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80005F88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80005F8C: jr          $ra
    // 0x80005F90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80005F90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80005F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80005F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005F9C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80005FA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80005FA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80005FA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80005FAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80005FB0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80005FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80005FB8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80005FBC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80005FC0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80005FC4: addiu       $t8, $t8, 0x52C0
    ctx->r24 = ADD32(ctx->r24, 0X52C0);
    // 0x80005FC8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80005FCC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80005FD0: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x80005FD4: jal         0x80077A10
    // 0x80005FD8: addiu       $a2, $a3, 0x8
    ctx->r6 = ADD32(ctx->r7, 0X8);
    osPfsNumFiles_recomp(rdram, ctx);
        goto after_0;
    // 0x80005FD8: addiu       $a2, $a3, 0x8
    ctx->r6 = ADD32(ctx->r7, 0X8);
    after_0:
    // 0x80005FDC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80005FE0: bne         $v0, $zero, L_80006018
    if (ctx->r2 != 0) {
        // 0x80005FE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80006018;
    }
    // 0x80005FE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80005FE8: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80005FEC: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80005FF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80005FF4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80005FF8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80005FFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80006000: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80006004: addiu       $t1, $t1, 0x52C0
    ctx->r9 = ADD32(ctx->r9, 0X52C0);
    // 0x80006008: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8000600C: jal         0x80077B40
    // 0x80006010: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_1;
    // 0x80006010: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    after_1:
    // 0x80006014: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80006018:
    // 0x80006018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000601C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006020: jr          $ra
    // 0x80006024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80006024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80006028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000602C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006030: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80006034: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80006038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000603C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80006040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80006044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80006048: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8000604C: addiu       $t8, $t8, 0x52C0
    ctx->r24 = ADD32(ctx->r24, 0X52C0);
    // 0x80006050: jal         0x800779B0
    // 0x80006054: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    osPfsRepairId_recomp(rdram, ctx);
        goto after_0;
    // 0x80006054: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80006058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000605C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006060: jr          $ra
    // 0x80006064: nop

    return;
    // 0x80006064: nop

;}
RECOMP_FUNC void func_80006068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000606C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80006070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006074: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006078: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x8000607C: jal         0x800773B0
    // 0x80006080: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    osPfsIsPlug_recomp(rdram, ctx);
        goto after_0;
    // 0x80006080: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    after_0:
    // 0x80006084: beq         $v0, $zero, L_80006090
    if (ctx->r2 == 0) {
        // 0x80006088: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_80006090;
    }
    // 0x80006088: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000608C: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_80006090:
    // 0x80006090: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80006094: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x80006098: lh          $a2, 0x0($t6)
    ctx->r6 = MEM_H(ctx->r14, 0X0);
    // 0x8000609C: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x800060A0: srav        $t8, $t7, $a2
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r6 & 31));
    // 0x800060A4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800060A8: bne         $t9, $zero, L_800060B8
    if (ctx->r25 != 0) {
        // 0x800060AC: sll         $t0, $a2, 2
        ctx->r8 = S32(ctx->r6 << 2);
            goto L_800060B8;
    }
    // 0x800060AC: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x800060B0: b           L_800060D8
    // 0x800060B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800060D8;
    // 0x800060B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800060B8:
    // 0x800060B8: subu        $t0, $t0, $a2
    ctx->r8 = SUB32(ctx->r8, ctx->r6);
    // 0x800060BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800060C0: addu        $t0, $t0, $a2
    ctx->r8 = ADD32(ctx->r8, ctx->r6);
    // 0x800060C4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x800060C8: addiu       $t1, $t1, 0x52C0
    ctx->r9 = ADD32(ctx->r9, 0X52C0);
    // 0x800060CC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800060D0: jal         0x800776A0
    // 0x800060D4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    osPfsInitPak_recomp(rdram, ctx);
        goto after_1;
    // 0x800060D4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_1:
L_800060D8:
    // 0x800060D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800060DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800060E0: jr          $ra
    // 0x800060E4: nop

    return;
    // 0x800060E4: nop

;}
RECOMP_FUNC void func_800060E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800060E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800060EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800060F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800060F4: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x800060F8: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
L_800060FC:
    // 0x800060FC: jal         0x80006068
    // 0x80006100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006068(rdram, ctx);
        goto after_0;
    // 0x80006100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80006104: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80006108: nop

    // 0x8000610C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006110: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80006114: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80006118: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8000611C: bne         $at, $zero, L_800060FC
    if (ctx->r1 != 0) {
        // 0x80006120: sh          $t7, 0x24($sp)
        MEM_H(0X24, ctx->r29) = ctx->r15;
            goto L_800060FC;
    }
    // 0x80006120: sh          $t7, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r15;
    // 0x80006124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80006128: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000612C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006130: jr          $ra
    // 0x80006134: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80006134: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80006138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006138: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000613C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006140: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80006144: addiu       $a1, $a1, 0x60E8
    ctx->r5 = ADD32(ctx->r5, 0X60E8);
    // 0x80006148: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8000614C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80006150: jal         0x80004F80
    // 0x80006154: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006154: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000615C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006160: jr          $ra
    // 0x80006164: nop

    return;
    // 0x80006164: nop

;}
RECOMP_FUNC void func_80006170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80006174: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80006178: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8000617C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006180: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80006184: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80006188: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8000618C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80006190: or          $t8, $a2, $zero
    ctx->r24 = ctx->r6 | 0;
    // 0x80006194: or          $t9, $a3, $zero
    ctx->r25 = ctx->r7 | 0;
    // 0x80006198: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x8000619C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800061A0: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x800061A4: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x800061A8: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x800061AC: addiu       $a1, $a1, 0x6284
    ctx->r5 = ADD32(ctx->r5, 0X6284);
    // 0x800061B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800061B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x800061B8: jal         0x80004F80
    // 0x800061BC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x800061BC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800061C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800061C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800061C8: jr          $ra
    // 0x800061CC: nop

    return;
    // 0x800061CC: nop

;}
RECOMP_FUNC void func_800061D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800061D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800061D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800061D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800061DC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800061E0: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800061E4: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x800061E8: addiu       $a1, $a1, 0x62E4
    ctx->r5 = ADD32(ctx->r5, 0X62E4);
    // 0x800061EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800061F0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800061F4: jal         0x80004F80
    // 0x800061F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x800061F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800061FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006200: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80006204: jr          $ra
    // 0x80006208: nop

    return;
    // 0x80006208: nop

;}
RECOMP_FUNC void func_8000620C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000620C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80006210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006214: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80006218: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8000621C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80006220: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80006224: addiu       $a1, $a1, 0x6320
    ctx->r5 = ADD32(ctx->r5, 0X6320);
    // 0x80006228: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8000622C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80006230: jal         0x80004F80
    // 0x80006234: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006234: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000623C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80006240: jr          $ra
    // 0x80006244: nop

    return;
    // 0x80006244: nop

;}
RECOMP_FUNC void func_80006248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000624C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006250: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80006254: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80006258: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x8000625C: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80006260: addiu       $a1, $a1, 0x6358
    ctx->r5 = ADD32(ctx->r5, 0X6358);
    // 0x80006264: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80006268: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x8000626C: jal         0x80004F80
    // 0x80006270: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006270: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006278: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000627C: jr          $ra
    // 0x80006280: nop

    return;
    // 0x80006280: nop

;}
RECOMP_FUNC void func_80006284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006284: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80006288: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000628C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80006290: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80006294: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80006298: addiu       $t8, $t8, 0x5700
    ctx->r24 = ADD32(ctx->r24, 0X5700);
    // 0x8000629C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800062A0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x800062A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800062A8: beq         $t9, $zero, L_800062DC
    if (ctx->r25 == 0) {
        // 0x800062AC: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_800062DC;
    }
    // 0x800062AC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800062B0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x800062B4: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x800062B8: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x800062BC: nop

    // 0x800062C0: sh          $t2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r10;
    // 0x800062C4: lh          $t3, 0x4($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4);
    // 0x800062C8: nop

    // 0x800062CC: sh          $t3, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r11;
    // 0x800062D0: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x800062D4: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x800062D8: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
L_800062DC:
    // 0x800062DC: jr          $ra
    // 0x800062E0: nop

    return;
    // 0x800062E0: nop

;}
RECOMP_FUNC void func_800062E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800062E4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x800062E8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800062EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800062F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800062F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800062F8: addiu       $t8, $t8, 0x5700
    ctx->r24 = ADD32(ctx->r24, 0X5700);
    // 0x800062FC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80006300: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x80006304: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80006308: beq         $t9, $zero, L_80006318
    if (ctx->r25 == 0) {
        // 0x8000630C: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_80006318;
    }
    // 0x8000630C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80006310: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x80006314: sh          $t1, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r9;
L_80006318:
    // 0x80006318: jr          $ra
    // 0x8000631C: nop

    return;
    // 0x8000631C: nop

;}
RECOMP_FUNC void func_80006320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006320: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80006324: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80006328: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000632C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80006330: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80006334: addiu       $t8, $t8, 0x5700
    ctx->r24 = ADD32(ctx->r24, 0X5700);
    // 0x80006338: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8000633C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x80006340: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80006344: beq         $t9, $zero, L_80006350
    if (ctx->r25 == 0) {
        // 0x80006348: nop
    
            goto L_80006350;
    }
    // 0x80006348: nop

    // 0x8000634C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
L_80006350:
    // 0x80006350: jr          $ra
    // 0x80006354: nop

    return;
    // 0x80006354: nop

;}
RECOMP_FUNC void func_80006358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006358: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000635C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006360: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80006364: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x80006368: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8000636C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80006370: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80006374: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80006378: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8000637C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80006380: addiu       $t7, $t7, 0x5560
    ctx->r15 = ADD32(ctx->r15, 0X5560);
    // 0x80006384: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006388: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x8000638C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80006390: jal         0x80079154
    // 0x80006394: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    osMotorInit_recomp(rdram, ctx);
        goto after_0;
    // 0x80006394: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    bm64u2_motor_init_done(rdram, ctx);
    // 0x80006398: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8000639C: bne         $v0, $zero, L_80006408
    if (ctx->r2 != 0) {
        // 0x800063A0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80006408;
    }
    // 0x800063A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800063A4: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x800063A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800063AC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800063B0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800063B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800063B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800063BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800063C0: sh          $t8, 0x5700($at)
    MEM_H(0X5700, ctx->r1) = ctx->r24;
    // 0x800063C4: lh          $t1, 0x0($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X0);
    // 0x800063C8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x800063CC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800063D0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800063D4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800063D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800063DC: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800063E0: addiu       $t3, $t3, 0x5560
    ctx->r11 = ADD32(ctx->r11, 0X5560);
    // 0x800063E4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x800063E8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x800063EC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800063F0: jal         0x80078EE0
    // 0x800063F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osMotorAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x800063F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800063F8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800063FC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80006400: b           L_80006428
    // 0x80006404: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
        goto L_80006428;
    // 0x80006404: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
L_80006408:
    // 0x80006408: lh          $t4, 0x0($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X0);
    // 0x8000640C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80006410: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80006414: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80006418: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000641C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80006420: sh          $zero, 0x5700($at)
    MEM_H(0X5700, ctx->r1) = 0;
    // 0x80006424: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
L_80006428:
    // 0x80006428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000642C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80006430: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80006434: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80006438: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000643C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80006440: sh          $zero, 0x5702($at)
    MEM_H(0X5702, ctx->r1) = 0;
    // 0x80006444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80006448: jr          $ra
    // 0x8000644C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8000644C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80006450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006450: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80006454: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006458: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000645C: sh          $zero, 0x574C($at)
    MEM_H(0X574C, ctx->r1) = 0;
    // 0x80006460: addiu       $a0, $a0, 0x5700
    ctx->r4 = ADD32(ctx->r4, 0X5700);
    // 0x80006464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8000646C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80006470: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_80006474:
    // 0x80006474: sh          $v0, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r2;
    // 0x80006478: lh          $t6, 0x4($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4);
    // 0x8000647C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006480: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006484: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80006488: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000648C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80006490: mflo        $t7
    ctx->r15 = lo;
    // 0x80006494: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x80006498: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x8000649C: nop

    // 0x800064A0: beq         $t8, $zero, L_800064B0
    if (ctx->r24 == 0) {
        // 0x800064A4: nop
    
            goto L_800064B0;
    }
    // 0x800064A4: nop

    // 0x800064A8: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
    // 0x800064AC: sh          $a3, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r7;
L_800064B0:
    // 0x800064B0: bne         $at, $zero, L_80006474
    if (ctx->r1 != 0) {
        // 0x800064B4: nop
    
            goto L_80006474;
    }
    // 0x800064B4: nop

    // 0x800064B8: jr          $ra
    // 0x800064BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800064BC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800064C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800064C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800064C4: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800064C8: lh          $t6, 0x574C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X574C);
    // 0x800064CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800064D0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800064D4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800064D8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800064DC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800064E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800064E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800064E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800064EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800064F0: bne         $t6, $zero, L_80006580
    if (ctx->r14 != 0) {
        // 0x800064F4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80006580;
    }
    // 0x800064F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800064F8: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x800064FC: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80006500: addiu       $s3, $s3, 0x5560
    ctx->r19 = ADD32(ctx->r19, 0X5560);
    // 0x80006504: addiu       $s7, $s7, 0x5700
    ctx->r23 = ADD32(ctx->r23, 0X5700);
    // 0x80006508: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000650C: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x80006510: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
L_80006514:
    // 0x80006514: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006518: mflo        $t7
    ctx->r15 = lo;
    // 0x8000651C: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x80006520: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80006524: nop

    // 0x80006528: beq         $t8, $zero, L_80006560
    if (ctx->r24 == 0) {
        // 0x8000652C: nop
    
            goto L_80006560;
    }
    // 0x8000652C: nop

    // 0x80006530: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80006534: nop

    // 0x80006538: beq         $v0, $zero, L_80006560
    if (ctx->r2 == 0) {
        // 0x8000653C: nop
    
            goto L_80006560;
    }
    // 0x8000653C: nop

    // 0x80006540: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006544: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80006548: sh          $t9, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r25;
    // 0x8000654C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80006550: mflo        $t0
    ctx->r8 = lo;
    // 0x80006554: addu        $a0, $s3, $t0
    ctx->r4 = ADD32(ctx->r19, ctx->r8);
    // 0x80006558: jal         0x80078EE0
    // 0x8000655C: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x8000655C: nop

    after_0:
L_80006560:
    // 0x80006560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80006564: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x80006568: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8000656C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80006570: bne         $at, $zero, L_80006514
    if (ctx->r1 != 0) {
        // 0x80006574: nop
    
            goto L_80006514;
    }
    // 0x80006574: nop

    // 0x80006578: b           L_80006740
    // 0x8000657C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80006740;
    // 0x8000657C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80006580:
    // 0x80006580: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80006584: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80006588: addiu       $s3, $s3, 0x5560
    ctx->r19 = ADD32(ctx->r19, 0X5560);
    // 0x8000658C: addiu       $s7, $s7, 0x5700
    ctx->r23 = ADD32(ctx->r23, 0X5700);
    // 0x80006590: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80006594: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x80006598: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8000659C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x800065A0: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x800065A4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_800065A8:
    // 0x800065A8: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800065AC: mflo        $t3
    ctx->r11 = lo;
    // 0x800065B0: addu        $s0, $s7, $t3
    ctx->r16 = ADD32(ctx->r23, ctx->r11);
    // 0x800065B4: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x800065B8: nop

    // 0x800065BC: beq         $v0, $s2, L_800065DC
    if (ctx->r2 == ctx->r18) {
        // 0x800065C0: nop
    
            goto L_800065DC;
    }
    // 0x800065C0: nop

    // 0x800065C4: beq         $v0, $s5, L_80006624
    if (ctx->r2 == ctx->r21) {
        // 0x800065C8: nop
    
            goto L_80006624;
    }
    // 0x800065C8: nop

    // 0x800065CC: beq         $v0, $s6, L_80006648
    if (ctx->r2 == ctx->r22) {
        // 0x800065D0: nop
    
            goto L_80006648;
    }
    // 0x800065D0: nop

    // 0x800065D4: b           L_80006728
    // 0x800065D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80006728;
    // 0x800065D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800065DC:
    // 0x800065DC: lh          $t4, 0xA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XA);
    // 0x800065E0: nop

    // 0x800065E4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800065E8: sh          $t5, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r13;
    // 0x800065EC: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x800065F0: nop

    // 0x800065F4: bne         $t6, $zero, L_80006604
    if (ctx->r14 != 0) {
        // 0x800065F8: nop
    
            goto L_80006604;
    }
    // 0x800065F8: nop

    // 0x800065FC: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x80006600: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
L_80006604:
    // 0x80006604: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000660C: mflo        $t7
    ctx->r15 = lo;
    // 0x80006610: addu        $a0, $s3, $t7
    ctx->r4 = ADD32(ctx->r19, ctx->r15);
    // 0x80006614: jal         0x80078EE0
    // 0x80006618: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_1;
    // 0x80006618: nop

    after_1:
    // 0x8000661C: b           L_80006728
    // 0x80006620: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80006728;
    // 0x80006620: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80006624:
    // 0x80006624: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80006628: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8000662C: mflo        $t8
    ctx->r24 = lo;
    // 0x80006630: addu        $a0, $s3, $t8
    ctx->r4 = ADD32(ctx->r19, ctx->r24);
    // 0x80006634: jal         0x80078EE0
    // 0x80006638: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_2;
    // 0x80006638: nop

    after_2:
    // 0x8000663C: sh          $s5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r21;
    // 0x80006640: b           L_80006724
    // 0x80006644: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
        goto L_80006724;
    // 0x80006644: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
L_80006648:
    // 0x80006648: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8000664C: nop

    // 0x80006650: bgtz        $v1, L_800066F4
    if (SIGNED(ctx->r3) > 0) {
        // 0x80006654: nop
    
            goto L_800066F4;
    }
    // 0x80006654: nop

    // 0x80006658: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8000665C: nop

    // 0x80006660: beq         $v0, $s2, L_80006678
    if (ctx->r2 == ctx->r18) {
        // 0x80006664: nop
    
            goto L_80006678;
    }
    // 0x80006664: nop

    // 0x80006668: beq         $v0, $s5, L_800066B8
    if (ctx->r2 == ctx->r21) {
        // 0x8000666C: nop
    
            goto L_800066B8;
    }
    // 0x8000666C: nop

    // 0x80006670: b           L_800066F8
    // 0x80006674: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
        goto L_800066F8;
    // 0x80006674: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
L_80006678:
    // 0x80006678: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x8000667C: nop

    // 0x80006680: beq         $t9, $zero, L_800066F4
    if (ctx->r25 == 0) {
        // 0x80006684: nop
    
            goto L_800066F4;
    }
    // 0x80006684: nop

    // 0x80006688: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000668C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80006690: mflo        $t0
    ctx->r8 = lo;
    // 0x80006694: addu        $a0, $s3, $t0
    ctx->r4 = ADD32(ctx->r19, ctx->r8);
    // 0x80006698: jal         0x80078EE0
    // 0x8000669C: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_3;
    // 0x8000669C: nop

    after_3:
    // 0x800066A0: lh          $t1, 0x4($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4);
    // 0x800066A4: sh          $s5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r21;
    // 0x800066A8: sh          $t1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r9;
    // 0x800066AC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x800066B0: b           L_800066F8
    // 0x800066B4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
        goto L_800066F8;
    // 0x800066B4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
L_800066B8:
    // 0x800066B8: lh          $t2, 0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X6);
    // 0x800066BC: nop

    // 0x800066C0: beq         $t2, $zero, L_800066F4
    if (ctx->r10 == 0) {
        // 0x800066C4: nop
    
            goto L_800066F4;
    }
    // 0x800066C4: nop

    // 0x800066C8: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800066CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800066D0: mflo        $t3
    ctx->r11 = lo;
    // 0x800066D4: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x800066D8: jal         0x80078EE0
    // 0x800066DC: nop

    __osMotorAccess_recomp(rdram, ctx);
        goto after_4;
    // 0x800066DC: nop

    after_4:
    // 0x800066E0: lh          $t4, 0x6($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X6);
    // 0x800066E4: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x800066E8: sh          $t4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r12;
    // 0x800066EC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x800066F0: nop

L_800066F4:
    // 0x800066F4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
L_800066F8:
    // 0x800066F8: addiu       $t5, $v1, -0x1
    ctx->r13 = ADD32(ctx->r3, -0X1);
    // 0x800066FC: beq         $v0, $zero, L_80006724
    if (ctx->r2 == 0) {
        // 0x80006700: sh          $t5, 0x8($s0)
        MEM_H(0X8, ctx->r16) = ctx->r13;
            goto L_80006724;
    }
    // 0x80006700: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    // 0x80006704: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80006708: sh          $t6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r14;
    // 0x8000670C: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x80006710: nop

    // 0x80006714: bne         $t7, $zero, L_80006724
    if (ctx->r15 != 0) {
        // 0x80006718: nop
    
            goto L_80006724;
    }
    // 0x80006718: nop

    // 0x8000671C: sh          $s2, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r18;
    // 0x80006720: sh          $s6, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r22;
L_80006724:
    // 0x80006724: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80006728:
    // 0x80006728: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x8000672C: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80006730: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80006734: bne         $at, $zero, L_800065A8
    if (ctx->r1 != 0) {
        // 0x80006738: nop
    
            goto L_800065A8;
    }
    // 0x80006738: nop

    // 0x8000673C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80006740:
    // 0x80006740: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80006744: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80006748: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000674C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80006750: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80006754: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80006758: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000675C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80006760: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80006764: jr          $ra
    // 0x80006768: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80006768: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
