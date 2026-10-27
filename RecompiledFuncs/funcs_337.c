#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world1_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60000F54: lw          $t6, 0x40D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X40D0);
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
    // 0x60000F70: addiu       $s0, $t7, 0x40D0
    ctx->r16 = ADD32(ctx->r15, 0X40D0);
    // 0x60000F74: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x60000F78: nop

L_60000F7C:
    // 0x60000F7C: jal         0x60000B98
    // 0x60000F80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world1_B98(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world1_FA8(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_stage_world1_6E8(rdram, ctx);
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

    ovl_stage_world1_6C4(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world1_1028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001028: jr          $ra
    // 0x6000102C: nop

    return;
    // 0x6000102C: nop

;}
RECOMP_FUNC void ovl_stage_world1_1030(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60001040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001048: jal         0x600009C4
    // 0x6000104C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world1_9C4(rdram, ctx);
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

    ovl_stage_world1_9D0(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world1_1098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000109C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600010A0: jal         0x60000C1C
    // 0x600010A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600010A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x600010A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600010AC: jal         0x600007E4
    // 0x600010B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world1_7E4(rdram, ctx);
        goto after_1;
    // 0x600010B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x600010B4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x600010B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x600010BC: beq         $t6, $zero, L_6000111C
    if (ctx->r14 == 0) {
        // 0x600010C0: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_6000111C;
    }
    // 0x600010C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600010C4: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600010C8: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600010CC: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x600010D0: sw          $t8, 0x4210($at)
    MEM_W(0X4210, ctx->r1) = ctx->r24;
    // 0x600010D4: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x600010D8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600010DC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x600010E0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600010E4: lw          $t1, 0x4210($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4210);
    // 0x600010E8: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x600010EC: beq         $t1, $zero, L_60001108
    if (ctx->r9 == 0) {
        // 0x600010F0: nop
    
            goto L_60001108;
    }
    // 0x600010F0: nop

    // 0x600010F4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x600010F8: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x600010FC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x60001100: b           L_60001140
    // 0x60001104: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_60001140;
    // 0x60001104: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_60001108:
    // 0x60001108: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x6000110C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001110: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001114: b           L_60001140
    // 0x60001118: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_60001140;
    // 0x60001118: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_6000111C:
    // 0x6000111C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001120: lw          $t6, 0x4210($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4210);
    // 0x60001124: nop

    // 0x60001128: beq         $t6, $zero, L_60001144
    if (ctx->r14 == 0) {
        // 0x6000112C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001144;
    }
    // 0x6000112C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001130: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60001134: nop

    // 0x60001138: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x6000113C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_60001140:
    // 0x60001140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001144:
    // 0x60001144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001148: jr          $ra
    // 0x6000114C: nop

    return;
    // 0x6000114C: nop

;}
RECOMP_FUNC void ovl_stage_world1_1150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001158: jal         0x60000BB0
    // 0x6000115C: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x6000115C: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_0:
    // 0x60001160: beq         $v0, $zero, L_6000118C
    if (ctx->r2 == 0) {
        // 0x60001164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000118C;
    }
    // 0x60001164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001168: jal         0x60000BB0
    // 0x6000116C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x6000116C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_1:
    // 0x60001170: beq         $v0, $zero, L_60001188
    if (ctx->r2 == 0) {
        // 0x60001174: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60001188;
    }
    // 0x60001174: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60001178: jal         0x60000E68
    // 0x6000117C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_2;
    // 0x6000117C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60001180: jal         0x60000B98
    // 0x60001184: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_3;
    // 0x60001184: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_3:
L_60001188:
    // 0x60001188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000118C:
    // 0x6000118C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001190: jr          $ra
    // 0x60001194: nop

    return;
    // 0x60001194: nop

;}
RECOMP_FUNC void ovl_stage_world1_1198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000119C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011A0: jal         0x60000DE4
    // 0x600011A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_0;
    // 0x600011A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600011A8: jal         0x60000CC4
    // 0x600011AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world1_CC4(rdram, ctx);
        goto after_1;
    // 0x600011AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x600011B0: jal         0x60000A6C
    // 0x600011B4: nop

    ovl_stage_world1_A6C(rdram, ctx);
        goto after_2;
    // 0x600011B4: nop

    after_2:
    // 0x600011B8: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    // 0x600011BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600011C0: jal         0x60000304
    // 0x600011C4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    ovl_stage_world1_304(rdram, ctx);
        goto after_3;
    // 0x600011C4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_3:
    // 0x600011C8: jal         0x60000A60
    // 0x600011CC: addiu       $a0, $zero, 0xA48
    ctx->r4 = ADD32(0, 0XA48);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_4;
    // 0x600011CC: addiu       $a0, $zero, 0xA48
    ctx->r4 = ADD32(0, 0XA48);
    after_4:
    // 0x600011D0: jal         0x60000B98
    // 0x600011D4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_5;
    // 0x600011D4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_5:
    // 0x600011D8: jal         0x60000B98
    // 0x600011DC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_6;
    // 0x600011DC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_6:
    // 0x600011E0: jal         0x60000B98
    // 0x600011E4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_7;
    // 0x600011E4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_7:
    // 0x600011E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600011F0: jr          $ra
    // 0x600011F4: nop

    return;
    // 0x600011F4: nop

;}
RECOMP_FUNC void ovl_stage_world1_11F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600011FC: lwc1        $f7, 0x4120($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4120);
    // 0x60001200: lwc1        $f6, 0x4124($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4124);
    // 0x60001204: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001208: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x6000120C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x60001210: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001214: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60001218: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001220: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x60001224: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x60001228: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x6000122C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x60001230: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x60001234: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x60001238: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x6000123C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x60001240: jal         0x600003D0
    // 0x60001244: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world1_3D0(rdram, ctx);
        goto after_0;
    // 0x60001244: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x60001248: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000124C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001250: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x60001254: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x60001258: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x6000125C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x60001260: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001264: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001268: nop

    // 0x6000126C: bc1f        L_600012B0
    if (!c1cs) {
        // 0x60001270: nop
    
            goto L_600012B0;
    }
    // 0x60001270: nop

    // 0x60001274: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001278: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x6000127C: nop

    // 0x60001280: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001284: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60001288: nop

    // 0x6000128C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001290: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001294: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001298: nop

    // 0x6000129C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600012A0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x600012A4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x600012A8: b           L_600012E8
    // 0x600012AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_600012E8;
    // 0x600012AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_600012B0:
    // 0x600012B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600012B4: nop

    // 0x600012B8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600012BC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x600012C0: nop

    // 0x600012C4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x600012C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012D0: nop

    // 0x600012D4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x600012D8: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x600012DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x600012E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x600012E4: nop

L_600012E8:
    // 0x600012E8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600012EC: nop

    // 0x600012F0: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x600012F4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x600012F8: nop

    // 0x600012FC: bc1f        L_60001334
    if (!c1cs) {
        // 0x60001300: nop
    
            goto L_60001334;
    }
    // 0x60001300: nop

    // 0x60001304: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001308: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x6000130C: nop

    // 0x60001310: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60001314: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001318: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000131C: nop

    // 0x60001320: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001324: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x60001328: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x6000132C: b           L_60001364
    // 0x60001330: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001364;
    // 0x60001330: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_60001334:
    // 0x60001334: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001338: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x6000133C: nop

    // 0x60001340: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001344: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001348: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000134C: nop

    // 0x60001350: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001354: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x60001358: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x6000135C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x60001360: nop

L_60001364:
    // 0x60001364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001368: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000136C: jr          $ra
    // 0x60001370: nop

    return;
    // 0x60001370: nop

;}
RECOMP_FUNC void ovl_stage_world1_1374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001374: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001378: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000137C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60001380: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001384: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001388: addiu       $s1, $s1, 0x4258
    ctx->r17 = ADD32(ctx->r17, 0X4258);
    // 0x6000138C: addiu       $s0, $s0, 0x4240
    ctx->r16 = ADD32(ctx->r16, 0X4240);
    // 0x60001390: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001394: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001398: addiu       $v1, $v1, 0x4280
    ctx->r3 = ADD32(ctx->r3, 0X4280);
    // 0x6000139C: addiu       $v0, $v0, 0x4270
    ctx->r2 = ADD32(ctx->r2, 0X4270);
    // 0x600013A0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600013A4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x600013A8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600013AC: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600013B0: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600013B4: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x600013B8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600013BC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x600013C0: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x600013C4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x600013C8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x600013CC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x600013D0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x600013D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600013D8: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x600013DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600013E0: jal         0x600006C4
    // 0x600013E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x600013E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x600013E8: jal         0x60000DE4
    // 0x600013EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_1;
    // 0x600013EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x600013F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600013F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600013F8: jal         0x600006C4
    // 0x600013FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x600013FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60001400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001404: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001408: jal         0x600003DC
    // 0x6000140C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world1_3DC(rdram, ctx);
        goto after_3;
    // 0x6000140C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x60001410: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001414: lwc1        $f13, 0x4128($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4128);
    // 0x60001418: lwc1        $f12, 0x412C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X412C);
    // 0x6000141C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001420: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001424: lwc1        $f9, 0x4130($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4130);
    // 0x60001428: lwc1        $f8, 0x4134($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4134);
    // 0x6000142C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001430: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60001434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001438: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x6000143C: nop

    // 0x60001440: bc1f        L_6000145C
    if (!c1cs) {
        // 0x60001444: nop
    
            goto L_6000145C;
    }
    // 0x60001444: nop

    // 0x60001448: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x6000144C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001450: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60001454: b           L_60001490
    // 0x60001458: swc1        $f16, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f16.u32l;
        goto L_60001490;
    // 0x60001458: swc1        $f16, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f16.u32l;
L_6000145C:
    // 0x6000145C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60001460: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001464: nop

    // 0x60001468: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x6000146C: nop

    // 0x60001470: bc1f        L_60001480
    if (!c1cs) {
        // 0x60001474: nop
    
            goto L_60001480;
    }
    // 0x60001474: nop

    // 0x60001478: b           L_60001484
    // 0x6000147C: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001484;
    // 0x6000147C: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001480:
    // 0x60001480: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001484:
    // 0x60001484: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60001488: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000148C: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
L_60001490:
    // 0x60001490: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001494: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001498: nop

    // 0x6000149C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600014A0: nop

    // 0x600014A4: bc1f        L_600014C0
    if (!c1cs) {
        // 0x600014A8: nop
    
            goto L_600014C0;
    }
    // 0x600014A8: nop

    // 0x600014AC: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014B4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x600014B8: b           L_600014CC
    // 0x600014BC: swc1        $f8, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f8.u32l;
        goto L_600014CC;
    // 0x600014BC: swc1        $f8, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f8.u32l;
L_600014C0:
    // 0x600014C0: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014C8: swc1        $f10, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f10.u32l;
L_600014CC:
    // 0x600014CC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600014D0: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x600014D4: nop

    // 0x600014D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600014DC: nop

    // 0x600014E0: bc1f        L_600014FC
    if (!c1cs) {
        // 0x600014E4: nop
    
            goto L_600014FC;
    }
    // 0x600014E4: nop

    // 0x600014E8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014F0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x600014F4: b           L_60001508
    // 0x600014F8: swc1        $f18, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f18.u32l;
        goto L_60001508;
    // 0x600014F8: swc1        $f18, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f18.u32l;
L_600014FC:
    // 0x600014FC: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001500: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001504: swc1        $f4, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f4.u32l;
L_60001508:
    // 0x60001508: jal         0x60000418
    // 0x6000150C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world1_418(rdram, ctx);
        goto after_4;
    // 0x6000150C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x60001510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001514: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001518: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000151C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001520: swc1        $f0, 0x4220($at)
    MEM_W(0X4220, ctx->r1) = ctx->f0.u32l;
    // 0x60001524: jr          $ra
    // 0x60001528: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001528: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world1_152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000152C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001530: jr          $ra
    // 0x60001534: sh          $a0, 0x42A2($at)
    MEM_H(0X42A2, ctx->r1) = ctx->r4;
    return;
    // 0x60001534: sh          $a0, 0x42A2($at)
    MEM_H(0X42A2, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void ovl_stage_world1_1538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001538: jr          $ra
    // 0x6000153C: nop

    return;
    // 0x6000153C: nop

;}
RECOMP_FUNC void ovl_stage_world1_1540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001540: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001544: addiu       $v0, $v0, 0x42A0
    ctx->r2 = ADD32(ctx->r2, 0X42A0);
    // 0x60001548: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x6000154C: jr          $ra
    // 0x60001550: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x60001550: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world1_1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000155C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001560: jal         0x60001540
    // 0x60001564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_1540(rdram, ctx);
        goto after_0;
    // 0x60001564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60001568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000156C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001570: jr          $ra
    // 0x60001574: nop

    return;
    // 0x60001574: nop

;}
RECOMP_FUNC void ovl_stage_world1_1578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001578: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x6000157C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001580: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001588: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x6000158C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x60001590: jal         0x600006C4
    // 0x60001594: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x60001594: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x60001598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000159C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x600015A0: jr          $ra
    // 0x600015A4: nop

    return;
    // 0x600015A4: nop

;}
RECOMP_FUNC void ovl_stage_world1_15A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600015AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015B0: jal         0x60001578
    // 0x600015B4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_0;
    // 0x600015B4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x600015B8: jal         0x60001554
    // 0x600015BC: nop

    ovl_stage_world1_1554(rdram, ctx);
        goto after_1;
    // 0x600015BC: nop

    after_1:
    // 0x600015C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600015C8: jr          $ra
    // 0x600015CC: nop

    return;
    // 0x600015CC: nop

;}
RECOMP_FUNC void ovl_stage_world1_15D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600015D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015D8: jal         0x60001554
    // 0x600015DC: nop

    ovl_stage_world1_1554(rdram, ctx);
        goto after_0;
    // 0x600015DC: nop

    after_0:
    // 0x600015E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600015E8: jr          $ra
    // 0x600015EC: nop

    return;
    // 0x600015EC: nop

;}
RECOMP_FUNC void ovl_stage_world1_15F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015F0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015F4: lwc1        $f12, 0x4230($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4230);
    // 0x600015F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600015FC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60001600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001604: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001608: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x6000160C: jal         0x600011F8
    // 0x60001610: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world1_11F8(rdram, ctx);
        goto after_0;
    // 0x60001610: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60001614: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x60001618: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x6000161C: jal         0x60001540
    // 0x60001620: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world1_1540(rdram, ctx);
        goto after_1;
    // 0x60001620: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x60001624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x6000162C: jr          $ra
    // 0x60001630: nop

    return;
    // 0x60001630: nop

;}
RECOMP_FUNC void ovl_stage_world1_1634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000163C: jal         0x6000034C
    // 0x60001640: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_0;
    // 0x60001640: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x60001644: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x60001648: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000164C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001650: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001658: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x6000165C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001664: jr          $ra
    // 0x60001668: swc1        $f10, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001668: swc1        $f10, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world1_166C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000166C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001670: lwc1        $f4, 0x422C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X422C);
    // 0x60001674: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001678: lwc1        $f6, 0x4228($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4228);
    // 0x6000167C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001680: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001684: nop

    // 0x60001688: bc1f        L_600016D8
    if (!c1cs) {
        // 0x6000168C: nop
    
            goto L_600016D8;
    }
    // 0x6000168C: nop

    // 0x60001690: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001694: lwc1        $f8, 0x4240($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4240);
    // 0x60001698: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000169C: lwc1        $f10, 0x4258($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4258);
    // 0x600016A0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x600016A4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x600016A8: nop

    // 0x600016AC: bc1f        L_600016C8
    if (!c1cs) {
        // 0x600016B0: nop
    
            goto L_600016C8;
    }
    // 0x600016B0: nop

    // 0x600016B4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600016B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600016BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016C0: jr          $ra
    // 0x600016C4: swc1        $f16, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x600016C4: swc1        $f16, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f16.u32l;
L_600016C8:
    // 0x600016C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600016CC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016D0: jr          $ra
    // 0x600016D4: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x600016D4: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
L_600016D8:
    // 0x600016D8: lwc1        $f4, 0x4248($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4248);
    // 0x600016DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016E0: lwc1        $f6, 0x4260($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4260);
    // 0x600016E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600016E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x600016EC: nop

    // 0x600016F0: bc1f        L_60001708
    if (!c1cs) {
        // 0x600016F4: nop
    
            goto L_60001708;
    }
    // 0x600016F4: nop

    // 0x600016F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600016FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001700: jr          $ra
    // 0x60001704: swc1        $f8, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001704: swc1        $f8, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f8.u32l;
L_60001708:
    // 0x60001708: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x6000170C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001710: swc1        $f10, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f10.u32l;
    // 0x60001714: jr          $ra
    // 0x60001718: nop

    return;
    // 0x60001718: nop

;}
RECOMP_FUNC void ovl_stage_world1_171C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000171C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001720: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001724: addiu       $v1, $v1, 0x4258
    ctx->r3 = ADD32(ctx->r3, 0X4258);
    // 0x60001728: addiu       $v0, $v0, 0x4240
    ctx->r2 = ADD32(ctx->r2, 0X4240);
    // 0x6000172C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001730: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001738: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x6000173C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001740: bc1f        L_60001754
    if (!c1cs) {
        // 0x60001744: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001754;
    }
    // 0x60001744: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60001748: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x6000174C: b           L_60001758
    // 0x60001750: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001758;
    // 0x60001750: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001754:
    // 0x60001754: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_60001758:
    // 0x60001758: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000175C: nop

    // 0x60001760: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001764: nop

    // 0x60001768: bc1f        L_600017AC
    if (!c1cs) {
        // 0x6000176C: nop
    
            goto L_600017AC;
    }
    // 0x6000176C: nop

    // 0x60001770: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001774: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001778: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000177C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001780: nop

    // 0x60001784: bc1f        L_600017A0
    if (!c1cs) {
        // 0x60001788: nop
    
            goto L_600017A0;
    }
    // 0x60001788: nop

    // 0x6000178C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001790: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001794: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001798: b           L_60001824
    // 0x6000179C: swc1        $f8, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f8.u32l;
        goto L_60001824;
    // 0x6000179C: swc1        $f8, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f8.u32l;
L_600017A0:
    // 0x600017A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600017A4: b           L_60001824
    // 0x600017A8: swc1        $f10, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f10.u32l;
        goto L_60001824;
    // 0x600017A8: swc1        $f10, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f10.u32l;
L_600017AC:
    // 0x600017AC: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600017B0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600017B4: nop

    // 0x600017B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x600017BC: nop

    // 0x600017C0: bc1f        L_600017D4
    if (!c1cs) {
        // 0x600017C4: nop
    
            goto L_600017D4;
    }
    // 0x600017C4: nop

    // 0x600017C8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x600017CC: b           L_600017D8
    // 0x600017D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_600017D8;
    // 0x600017D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_600017D4:
    // 0x600017D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_600017D8:
    // 0x600017D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x600017DC: nop

    // 0x600017E0: bc1f        L_6000181C
    if (!c1cs) {
        // 0x600017E4: nop
    
            goto L_6000181C;
    }
    // 0x600017E4: nop

    // 0x600017E8: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x600017EC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x600017F0: bc1f        L_6000180C
    if (!c1cs) {
        // 0x600017F4: nop
    
            goto L_6000180C;
    }
    // 0x600017F4: nop

    // 0x600017F8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600017FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001800: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001804: b           L_60001824
    // 0x60001808: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
        goto L_60001824;
    // 0x60001808: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
L_6000180C:
    // 0x6000180C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001810: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001814: b           L_60001824
    // 0x60001818: swc1        $f6, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f6.u32l;
        goto L_60001824;
    // 0x60001818: swc1        $f6, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f6.u32l;
L_6000181C:
    // 0x6000181C: jal         0x6000166C
    // 0x60001820: nop

    ovl_stage_world1_166C(rdram, ctx);
        goto after_0;
    // 0x60001820: nop

    after_0:
L_60001824:
    // 0x60001824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000182C: jr          $ra
    // 0x60001830: nop

    return;
    // 0x60001830: nop

;}
RECOMP_FUNC void ovl_stage_world1_1834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001834: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001838: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000183C: addiu       $v1, $v1, 0x4270
    ctx->r3 = ADD32(ctx->r3, 0X4270);
    // 0x60001840: addiu       $v0, $v0, 0x4240
    ctx->r2 = ADD32(ctx->r2, 0X4240);
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

    // 0x60001878: bc1f        L_600018C4
    if (!c1cs) {
        // 0x6000187C: nop
    
            goto L_600018C4;
    }
    // 0x6000187C: nop

    // 0x60001880: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001884: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
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

    // 0x600018B4: bc1f        L_600018C8
    if (!c1cs) {
        // 0x600018B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_600018C8;
    }
    // 0x600018B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600018BC: jr          $ra
    // 0x600018C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x600018C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600018C4:
    // 0x600018C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600018C8:
    // 0x600018C8: jr          $ra
    // 0x600018CC: nop

    return;
    // 0x600018CC: nop

;}
RECOMP_FUNC void ovl_stage_world1_18D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018D8: jal         0x6000034C
    // 0x600018DC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_0;
    // 0x600018DC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x600018E0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600018E4: addiu       $v1, $v1, 0x4214
    ctx->r3 = ADD32(ctx->r3, 0X4214);
    // 0x600018E8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x600018EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600018F0: beq         $a1, $t6, L_60001900
    if (ctx->r5 == ctx->r14) {
        // 0x600018F4: slti        $at, $v0, 0x51
        ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
            goto L_60001900;
    }
    // 0x600018F4: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x600018F8: beq         $at, $zero, L_60001988
    if (ctx->r1 == 0) {
        // 0x600018FC: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_60001988;
    }
    // 0x600018FC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
L_60001900:
    // 0x60001900: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001904: jal         0x6000034C
    // 0x60001908: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_1;
    // 0x60001908: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x6000190C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001910: sw          $v0, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r2;
    // 0x60001914: jal         0x6000034C
    // 0x60001918: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_2;
    // 0x60001918: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x6000191C: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x60001920: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001924: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001928: lw          $v1, 0x421C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X421C);
    // 0x6000192C: sw          $t7, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r15;
    // 0x60001930: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001934: beq         $v1, $zero, L_60001958
    if (ctx->r3 == 0) {
        // 0x60001938: sw          $zero, 0x4238($at)
        MEM_W(0X4238, ctx->r1) = 0;
            goto L_60001958;
    }
    // 0x60001938: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
    // 0x6000193C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001940: beq         $v1, $at, L_60001968
    if (ctx->r3 == ctx->r1) {
        // 0x60001944: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001968;
    }
    // 0x60001944: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001948: beq         $v1, $at, L_60001978
    if (ctx->r3 == ctx->r1) {
        // 0x6000194C: nop
    
            goto L_60001978;
    }
    // 0x6000194C: nop

    // 0x60001950: b           L_600019A0
    // 0x60001954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001958:
    // 0x60001958: jal         0x60001634
    // 0x6000195C: nop

    ovl_stage_world1_1634(rdram, ctx);
        goto after_3;
    // 0x6000195C: nop

    after_3:
    // 0x60001960: b           L_600019A0
    // 0x60001964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001968:
    // 0x60001968: jal         0x6000166C
    // 0x6000196C: nop

    ovl_stage_world1_166C(rdram, ctx);
        goto after_4;
    // 0x6000196C: nop

    after_4:
    // 0x60001970: b           L_600019A0
    // 0x60001974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001978:
    // 0x60001978: jal         0x6000171C
    // 0x6000197C: nop

    ovl_stage_world1_171C(rdram, ctx);
        goto after_5;
    // 0x6000197C: nop

    after_5:
    // 0x60001980: b           L_600019A0
    // 0x60001984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001988:
    // 0x60001988: jal         0x6000034C
    // 0x6000198C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world1_34C(rdram, ctx);
        goto after_6;
    // 0x6000198C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_6:
    // 0x60001990: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x60001994: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001998: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
    // 0x6000199C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019A0:
    // 0x600019A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600019A4: jr          $ra
    // 0x600019A8: nop

    return;
    // 0x600019A8: nop

;}
RECOMP_FUNC void ovl_stage_world1_19AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019AC: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600019B0: lw          $t6, 0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4298);
    // 0x600019B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x600019B8: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x600019BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600019C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600019C4: bne         $t7, $zero, L_600019D4
    if (ctx->r15 != 0) {
        // 0x600019C8: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_600019D4;
    }
    // 0x600019C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600019CC: b           L_600019D8
    // 0x600019D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_600019D8;
    // 0x600019D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600019D4:
    // 0x600019D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600019D8:
    // 0x600019D8: beq         $v0, $zero, L_600019F4
    if (ctx->r2 == 0) {
        // 0x600019DC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600019F4;
    }
    // 0x600019DC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600019E0: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x600019E4: jal         0x60000F28
    // 0x600019E8: nop

    ovl_stage_world1_F28(rdram, ctx);
        goto after_0;
    // 0x600019E8: nop

    after_0:
    // 0x600019EC: bne         $v0, $zero, L_60001A18
    if (ctx->r2 != 0) {
        // 0x600019F0: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001A18;
    }
    // 0x600019F0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
L_600019F4:
    // 0x600019F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600019F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019FC: sw          $a0, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r4;
    // 0x60001A00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A04: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x60001A08: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
    // 0x60001A0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A10: b           L_60001DBC
    // 0x60001A14: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
        goto L_60001DBC;
    // 0x60001A14: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
L_60001A18:
    // 0x60001A18: addiu       $v1, $v1, 0x4214
    ctx->r3 = ADD32(ctx->r3, 0X4214);
    // 0x60001A1C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x60001A20: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60001A24: bne         $t9, $at, L_60001A68
    if (ctx->r25 != ctx->r1) {
        // 0x60001A28: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60001A68;
    }
    // 0x60001A28: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001A2C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x60001A30: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x60001A34: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x60001A38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A3C: sw          $t1, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r9;
    // 0x60001A40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A44: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60001A48: addiu       $v0, $v0, 0x428C
    ctx->r2 = ADD32(ctx->r2, 0X428C);
    // 0x60001A4C: sw          $t2, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r10;
    // 0x60001A50: jal         0x60001554
    // 0x60001A54: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    ovl_stage_world1_1554(rdram, ctx);
        goto after_1;
    // 0x60001A54: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    after_1:
    // 0x60001A58: jal         0x60001578
    // 0x60001A5C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_2;
    // 0x60001A5C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_2:
    // 0x60001A60: b           L_60001DC0
    // 0x60001A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001DC0;
    // 0x60001A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001A68:
    // 0x60001A68: jal         0x6000034C
    // 0x60001A6C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_3;
    // 0x60001A6C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x60001A70: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60001A74: lw          $t3, 0x4214($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4214);
    // 0x60001A78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001A7C: bne         $t3, $at, L_60001A90
    if (ctx->r11 != ctx->r1) {
        // 0x60001A80: lui         $t4, 0x6000
        ctx->r12 = S32(0X6000 << 16);
            goto L_60001A90;
    }
    // 0x60001A80: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60001A84: lw          $t4, 0x4290($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4290);
    // 0x60001A88: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x60001A8C: beq         $s0, $t4, L_60001C8C
    if (ctx->r16 == ctx->r12) {
        // 0x60001A90: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_60001C8C;
    }
L_60001A90:
    // 0x60001A90: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x60001A94: jal         0x6000034C
    // 0x60001A98: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world1_34C(rdram, ctx);
        goto after_4;
    // 0x60001A98: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x60001A9C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AA0: lw          $v1, 0x4290($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4290);
    // 0x60001AA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60001AA8: beq         $v1, $zero, L_60001AC4
    if (ctx->r3 == 0) {
        // 0x60001AAC: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_60001AC4;
    }
    // 0x60001AAC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x60001AB0: beq         $a0, $v1, L_60001AC4
    if (ctx->r4 == ctx->r3) {
        // 0x60001AB4: nop
    
            goto L_60001AC4;
    }
    // 0x60001AB4: nop

    // 0x60001AB8: bne         $s0, $v1, L_60001B2C
    if (ctx->r16 != ctx->r3) {
        // 0x60001ABC: slti        $at, $v0, 0x19
        ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
            goto L_60001B2C;
    }
    // 0x60001ABC: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x60001AC0: beq         $at, $zero, L_60001B2C
    if (ctx->r1 == 0) {
        // 0x60001AC4: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001B2C;
    }
L_60001AC4:
    // 0x60001AC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AC8: sw          $t5, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r13;
    // 0x60001ACC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001AD0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AD4: addiu       $v0, $v0, 0x428C
    ctx->r2 = ADD32(ctx->r2, 0X428C);
    // 0x60001AD8: sw          $zero, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = 0;
    // 0x60001ADC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60001AE0: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001AE4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60001AE8: beq         $s0, $v1, L_60001B00
    if (ctx->r16 == ctx->r3) {
        // 0x60001AEC: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_60001B00;
    }
    // 0x60001AEC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60001AF0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x60001AF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AF8: b           L_60001B08
    // 0x60001AFC: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
        goto L_60001B08;
    // 0x60001AFC: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
L_60001B00:
    // 0x60001B00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B04: sw          $t9, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r25;
L_60001B08:
    // 0x60001B08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B0C: lwc1        $f4, 0x4224($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x60001B10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B14: jal         0x600015F0
    // 0x60001B18: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
    ovl_stage_world1_15F0(rdram, ctx);
        goto after_5;
    // 0x60001B18: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
    after_5:
    // 0x60001B1C: jal         0x60001578
    // 0x60001B20: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_6;
    // 0x60001B20: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_6:
    // 0x60001B24: b           L_60001DC0
    // 0x60001B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001DC0;
    // 0x60001B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001B2C:
    // 0x60001B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001B30: beq         $a1, $v1, L_60001B44
    if (ctx->r5 == ctx->r3) {
        // 0x60001B34: nop
    
            goto L_60001B44;
    }
    // 0x60001B34: nop

    // 0x60001B38: bne         $s0, $v1, L_60001BAC
    if (ctx->r16 != ctx->r3) {
        // 0x60001B3C: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_60001BAC;
    }
    // 0x60001B3C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x60001B40: beq         $at, $zero, L_60001BAC
    if (ctx->r1 == 0) {
        // 0x60001B44: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001BAC;
    }
L_60001B44:
    // 0x60001B44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B48: sw          $a1, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r5;
    // 0x60001B4C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001B50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B54: addiu       $v0, $v0, 0x428C
    ctx->r2 = ADD32(ctx->r2, 0X428C);
    // 0x60001B58: sw          $a0, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r4;
    // 0x60001B5C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60001B60: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001B64: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x60001B68: beq         $s0, $v1, L_60001B80
    if (ctx->r16 == ctx->r3) {
        // 0x60001B6C: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_60001B80;
    }
    // 0x60001B6C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x60001B70: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60001B74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B78: b           L_60001B88
    // 0x60001B7C: sw          $t2, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r10;
        goto L_60001B88;
    // 0x60001B7C: sw          $t2, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r10;
L_60001B80:
    // 0x60001B80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B84: sw          $t3, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r11;
L_60001B88:
    // 0x60001B88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B8C: lwc1        $f6, 0x4224($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x60001B90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B94: jal         0x600015F0
    // 0x60001B98: swc1        $f6, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f6.u32l;
    ovl_stage_world1_15F0(rdram, ctx);
        goto after_7;
    // 0x60001B98: swc1        $f6, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f6.u32l;
    after_7:
    // 0x60001B9C: jal         0x60001578
    // 0x60001BA0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_8;
    // 0x60001BA0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_8:
    // 0x60001BA4: b           L_60001DC0
    // 0x60001BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001DC0;
    // 0x60001BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001BAC:
    // 0x60001BAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BB0: lwc1        $f8, 0x4220($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4220);
    // 0x60001BB4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001BB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001BBC: nop

    // 0x60001BC0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x60001BC4: nop

    // 0x60001BC8: bc1f        L_60001C8C
    if (!c1cs) {
        // 0x60001BCC: nop
    
            goto L_60001C8C;
    }
    // 0x60001BCC: nop

    // 0x60001BD0: jal         0x600006DC
    // 0x60001BD4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world1_6DC(rdram, ctx);
        goto after_9;
    // 0x60001BD4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_9:
    // 0x60001BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001BDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001BE0: blez        $v0, L_60001C3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001BE4: sw          $zero, 0x50($sp)
        MEM_W(0X50, ctx->r29) = 0;
            goto L_60001C3C;
    }
    // 0x60001BE4: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x60001BE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001BEC:
    // 0x60001BEC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x60001BF0: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001BF4: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x60001BF8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x60001BFC: addiu       $a1, $a1, 0x4270
    ctx->r5 = ADD32(ctx->r5, 0X4270);
    // 0x60001C00: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x60001C04: jal         0x60000418
    // 0x60001C08: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    ovl_stage_world1_418(rdram, ctx);
        goto after_10;
    // 0x60001C08: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_10:
    // 0x60001C0C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001C10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001C14: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x60001C18: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x60001C1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001C20: bc1f        L_60001C34
    if (!c1cs) {
        // 0x60001C24: slt         $at, $s1, $v1
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_60001C34;
    }
    // 0x60001C24: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60001C28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60001C2C: b           L_60001C3C
    // 0x60001C30: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
        goto L_60001C3C;
    // 0x60001C30: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_60001C34:
    // 0x60001C34: bne         $at, $zero, L_60001BEC
    if (ctx->r1 != 0) {
        // 0x60001C38: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001BEC;
    }
    // 0x60001C38: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001C3C:
    // 0x60001C3C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x60001C40: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x60001C44: bne         $t8, $zero, L_60001C8C
    if (ctx->r24 != 0) {
        // 0x60001C48: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001C8C;
    }
    // 0x60001C48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C4C: sw          $t9, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r25;
    // 0x60001C50: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C54: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x60001C58: sw          $t0, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r8;
    // 0x60001C5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C60: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x60001C64: sw          $t1, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r9;
    // 0x60001C68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C6C: lwc1        $f18, 0x4224($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x60001C70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C74: jal         0x600015F0
    // 0x60001C78: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
    ovl_stage_world1_15F0(rdram, ctx);
        goto after_11;
    // 0x60001C78: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
    after_11:
    // 0x60001C7C: jal         0x60001578
    // 0x60001C80: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_12;
    // 0x60001C80: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_12:
    // 0x60001C84: b           L_60001DC0
    // 0x60001C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001DC0;
    // 0x60001C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001C8C:
    // 0x60001C8C: jal         0x600006DC
    // 0x60001C90: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world1_6DC(rdram, ctx);
        goto after_13;
    // 0x60001C90: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_13:
    // 0x60001C94: beq         $v0, $zero, L_60001DB4
    if (ctx->r2 == 0) {
        // 0x60001C98: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60001DB4;
    }
    // 0x60001C98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001C9C: blez        $v0, L_60001DB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001CA0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001DB4;
    }
    // 0x60001CA0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001CA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001CA8:
    // 0x60001CA8: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x60001CAC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001CB0: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x60001CB4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x60001CB8: addiu       $a1, $a1, 0x4270
    ctx->r5 = ADD32(ctx->r5, 0X4270);
    // 0x60001CBC: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x60001CC0: jal         0x60000418
    // 0x60001CC4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_stage_world1_418(rdram, ctx);
        goto after_14;
    // 0x60001CC4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_14:
    // 0x60001CC8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001CCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001CD0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x60001CD4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x60001CD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001CDC: bc1f        L_60001DAC
    if (!c1cs) {
        // 0x60001CE0: nop
    
            goto L_60001DAC;
    }
    // 0x60001CE0: nop

    // 0x60001CE4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x60001CE8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001CEC: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x60001CF0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x60001CF4: addiu       $a0, $a0, 0x4270
    ctx->r4 = ADD32(ctx->r4, 0X4270);
    // 0x60001CF8: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x60001CFC: jal         0x600003DC
    // 0x60001D00: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world1_3DC(rdram, ctx);
        goto after_15;
    // 0x60001D00: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_15:
    // 0x60001D04: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D08: lwc1        $f13, 0x4138($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4138);
    // 0x60001D0C: lwc1        $f12, 0x413C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X413C);
    // 0x60001D10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D14: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60001D18: lwc1        $f11, 0x4140($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4140);
    // 0x60001D1C: lwc1        $f10, 0x4144($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4144);
    // 0x60001D20: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x60001D24: mul.d       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x60001D28: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x60001D2C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001D30: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001D34: nop

    // 0x60001D38: bc1f        L_60001D54
    if (!c1cs) {
        // 0x60001D3C: nop
    
            goto L_60001D54;
    }
    // 0x60001D3C: nop

    // 0x60001D40: sub.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f0.d - ctx->f12.d;
    // 0x60001D44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D48: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x60001D4C: b           L_60001D88
    // 0x60001D50: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
        goto L_60001D88;
    // 0x60001D50: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
L_60001D54:
    // 0x60001D54: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x60001D58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60001D5C: nop

    // 0x60001D60: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x60001D64: nop

    // 0x60001D68: bc1f        L_60001D78
    if (!c1cs) {
        // 0x60001D6C: nop
    
            goto L_60001D78;
    }
    // 0x60001D6C: nop

    // 0x60001D70: b           L_60001D7C
    // 0x60001D74: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001D7C;
    // 0x60001D74: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001D78:
    // 0x60001D78: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001D7C:
    // 0x60001D7C: cvt.s.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f6.fl = CVT_S_D(ctx->f2.d);
    // 0x60001D80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D84: swc1        $f6, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f6.u32l;
L_60001D88:
    // 0x60001D88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D8C: sw          $zero, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = 0;
    // 0x60001D90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D94: sw          $t8, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = ctx->r24;
    // 0x60001D98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D9C: sw          $t9, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r25;
    // 0x60001DA0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DA4: b           L_60001DBC
    // 0x60001DA8: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
        goto L_60001DBC;
    // 0x60001DA8: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
L_60001DAC:
    // 0x60001DAC: bne         $s1, $v1, L_60001CA8
    if (ctx->r17 != ctx->r3) {
        // 0x60001DB0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001CA8;
    }
    // 0x60001DB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001DB4:
    // 0x60001DB4: jal         0x600018D0
    // 0x60001DB8: nop

    ovl_stage_world1_18D0(rdram, ctx);
        goto after_16;
    // 0x60001DB8: nop

    after_16:
L_60001DBC:
    // 0x60001DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001DC0:
    // 0x60001DC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001DC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001DC8: jr          $ra
    // 0x60001DCC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60001DCC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world1_1DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001DD0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001DD4: addiu       $v0, $v0, 0x4240
    ctx->r2 = ADD32(ctx->r2, 0X4240);
    // 0x60001DD8: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001DDC: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60001DE0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x60001DE4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60001DE8: bc1f        L_60001E24
    if (!c1cs) {
        // 0x60001DEC: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_60001E24;
    }
    // 0x60001DEC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x60001DF0: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x60001DF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001DF8: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60001DFC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x60001E00: nop

    // 0x60001E04: bc1f        L_60001E24
    if (!c1cs) {
        // 0x60001E08: nop
    
            goto L_60001E24;
    }
    // 0x60001E08: nop

    // 0x60001E0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001E10: nop

    // 0x60001E14: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60001E18: nop

    // 0x60001E1C: bc1t        L_60001EF4
    if (c1cs) {
        // 0x60001E20: nop
    
            goto L_60001EF4;
    }
    // 0x60001E20: nop

L_60001E24:
    // 0x60001E24: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x60001E28: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60001E2C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x60001E30: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60001E34: bc1f        L_60001E6C
    if (!c1cs) {
        // 0x60001E38: nop
    
            goto L_60001E6C;
    }
    // 0x60001E38: nop

    // 0x60001E3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001E40: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x60001E44: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x60001E48: nop

    // 0x60001E4C: bc1f        L_60001E6C
    if (!c1cs) {
        // 0x60001E50: nop
    
            goto L_60001E6C;
    }
    // 0x60001E50: nop

    // 0x60001E54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001E58: nop

    // 0x60001E5C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60001E60: nop

    // 0x60001E64: bc1t        L_60001EF4
    if (c1cs) {
        // 0x60001E68: nop
    
            goto L_60001EF4;
    }
    // 0x60001E68: nop

L_60001E6C:
    // 0x60001E6C: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001E70: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x60001E74: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x60001E78: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60001E7C: bc1f        L_60001EB4
    if (!c1cs) {
        // 0x60001E80: nop
    
            goto L_60001EB4;
    }
    // 0x60001E80: nop

    // 0x60001E84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001E88: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x60001E8C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x60001E90: nop

    // 0x60001E94: bc1f        L_60001EB4
    if (!c1cs) {
        // 0x60001E98: nop
    
            goto L_60001EB4;
    }
    // 0x60001E98: nop

    // 0x60001E9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001EA0: nop

    // 0x60001EA4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60001EA8: nop

    // 0x60001EAC: bc1t        L_60001EF4
    if (c1cs) {
        // 0x60001EB0: nop
    
            goto L_60001EF4;
    }
    // 0x60001EB0: nop

L_60001EB4:
    // 0x60001EB4: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x60001EB8: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x60001EBC: bc1f        L_60001EFC
    if (!c1cs) {
        // 0x60001EC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001EFC;
    }
    // 0x60001EC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001EC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001EC8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60001ECC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x60001ED0: nop

    // 0x60001ED4: bc1t        L_60001EF4
    if (c1cs) {
        // 0x60001ED8: nop
    
            goto L_60001EF4;
    }
    // 0x60001ED8: nop

    // 0x60001EDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001EE0: nop

    // 0x60001EE4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60001EE8: nop

    // 0x60001EEC: bc1f        L_60001EFC
    if (!c1cs) {
        // 0x60001EF0: nop
    
            goto L_60001EFC;
    }
    // 0x60001EF0: nop

L_60001EF4:
    // 0x60001EF4: jr          $ra
    // 0x60001EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001EFC:
    // 0x60001EFC: jr          $ra
    // 0x60001F00: nop

    return;
    // 0x60001F00: nop

;}
RECOMP_FUNC void ovl_stage_world1_1F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001F04: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x60001F08: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60001F0C: lui         $at, 0x410C
    ctx->r1 = S32(0X410C << 16);
    // 0x60001F10: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60001F14: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60001F18: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60001F1C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60001F20: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60001F24: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x60001F28: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60001F2C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60001F30: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F34: lwc1        $f26, 0x4148($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X4148);
    // 0x60001F38: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60001F3C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60001F40: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60001F44: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x60001F48: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x60001F4C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x60001F50: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60001F54: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60001F58: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60001F5C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001F60: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x60001F64: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60001F68: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x60001F6C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60001F70: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60001F74: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60001F78: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60001F7C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60001F80: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60001F84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60001F88: addiu       $s1, $s1, 0x40F4
    ctx->r17 = ADD32(ctx->r17, 0X40F4);
    // 0x60001F8C: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x60001F90: addiu       $s3, $zero, -0x100
    ctx->r19 = ADD32(0, -0X100);
    // 0x60001F94: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x60001F98: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x60001F9C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x60001FA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001FA4:
    // 0x60001FA4: mul.s       $f4, $f20, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x60001FA8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60001FAC: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x60001FB0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60001FB4: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x60001FB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60001FBC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60001FC0: nop

    // 0x60001FC4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001FC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001FCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001FD0: nop

    // 0x60001FD4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60001FD8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60001FDC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001FE0: or          $t8, $t7, $s3
    ctx->r24 = ctx->r15 | ctx->r19;
    // 0x60001FE4: jal         0x600006C4
    // 0x60001FE8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x60001FE8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    after_0:
    // 0x60001FEC: jal         0x600009D0
    // 0x60001FF0: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_stage_world1_9D0(rdram, ctx);
        goto after_1;
    // 0x60001FF0: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_1:
    // 0x60001FF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001FF8: bne         $s0, $s4, L_60001FA4
    if (ctx->r16 != ctx->r20) {
        // 0x60001FFC: nop
    
            goto L_60001FA4;
    }
    // 0x60001FFC: nop

    // 0x60002000: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x60002004: jal         0x600009D0
    // 0x60002008: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    ovl_stage_world1_9D0(rdram, ctx);
        goto after_2;
    // 0x60002008: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    after_2:
    // 0x6000200C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60002010: bne         $s5, $s6, L_60001FA4
    if (ctx->r21 != ctx->r22) {
        // 0x60002014: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001FA4;
    }
    // 0x60002014: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002018: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x6000201C: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x60002020: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x60002024: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60002028: jal         0x600006C4
    // 0x6000202C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x6000202C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x60002030: jal         0x600009AC
    // 0x60002034: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_4;
    // 0x60002034: nop

    after_4:
    // 0x60002038: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x6000203C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002040: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002044: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002048: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000204C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002050: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002054: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002058: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000205C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002060: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002064: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002068: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x6000206C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60002070: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x60002074: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60002078: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x6000207C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60002080: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x60002084: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x60002088: jr          $ra
    // 0x6000208C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x6000208C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_stage_world1_2090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002090: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60002094: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60002098: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000209C: addiu       $s1, $s1, 0x4240
    ctx->r17 = ADD32(ctx->r17, 0X4240);
    // 0x600020A0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x600020A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600020A8: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600020AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600020B0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x600020B4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600020B8: bc1f        L_6000227C
    if (!c1cs) {
        // 0x600020BC: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_6000227C;
    }
    // 0x600020BC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600020C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600020C4: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x600020C8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600020CC: jal         0x600006C4
    // 0x600020D0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_0;
    // 0x600020D0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x600020D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x600020D8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x600020DC: jal         0x600015A8
    // 0x600020E0: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    ovl_stage_world1_15A8(rdram, ctx);
        goto after_1;
    // 0x600020E0: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    after_1:
    // 0x600020E4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600020E8: addiu       $a2, $a2, 0x42A0
    ctx->r6 = ADD32(ctx->r6, 0X42A0);
    // 0x600020EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600020F0: jal         0x60000808
    // 0x600020F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_808(rdram, ctx);
        goto after_2;
    // 0x600020F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x600020F8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600020FC: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002100: addiu       $s0, $s0, 0x4214
    ctx->r16 = ADD32(ctx->r16, 0X4214);
    // 0x60002104: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x60002108: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x6000210C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x60002110: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x60002114: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002118: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000211C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x60002120: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60002124: sw          $zero, 0x4238($at)
    MEM_W(0X4238, ctx->r1) = 0;
    // 0x60002128: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x6000212C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x60002130: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002134: jal         0x600007F0
    // 0x60002138: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world1_7F0(rdram, ctx);
        goto after_3;
    // 0x60002138: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x6000213C: jal         0x60001578
    // 0x60002140: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_4;
    // 0x60002140: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_4:
    // 0x60002144: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002148: addiu       $a0, $a0, 0x1F04
    ctx->r4 = ADD32(ctx->r4, 0X1F04);
    // 0x6000214C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002154: jal         0x60000994
    // 0x60002158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_5;
    // 0x60002158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x6000215C: jal         0x60000244
    // 0x60002160: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    ovl_stage_world1_244(rdram, ctx);
        goto after_6;
    // 0x60002160: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_6:
    // 0x60002164: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002168: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_6000216C:
    // 0x6000216C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002170: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60002174: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002178: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x6000217C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002180: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x60002184: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x60002188: jal         0x600006C4
    // 0x6000218C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_7;
    // 0x6000218C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60002190: jal         0x600009D0
    // 0x60002194: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_8;
    // 0x60002194: nop

    after_8:
    // 0x60002198: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000219C: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x600021A0: bne         $at, $zero, L_6000216C
    if (ctx->r1 != 0) {
        // 0x600021A4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_6000216C;
    }
    // 0x600021A4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600021A8: jal         0x60000340
    // 0x600021AC: nop

    ovl_stage_world1_340(rdram, ctx);
        goto after_9;
    // 0x600021AC: nop

    after_9:
    // 0x600021B0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x600021B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600021B8: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x600021BC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600021C0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x600021C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600021C8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x600021CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600021D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x600021D4: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x600021D8: jal         0x60000340
    // 0x600021DC: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    ovl_stage_world1_340(rdram, ctx);
        goto after_10;
    // 0x600021DC: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    after_10:
    // 0x600021E0: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x600021E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600021E8: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x600021EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600021F0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x600021F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600021F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600021FC: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x60002200: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x60002204: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x60002208: jal         0x600006C4
    // 0x6000220C: nop

    ovl_stage_world1_6C4(rdram, ctx);
        goto after_11;
    // 0x6000220C: nop

    after_11:
    // 0x60002210: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002214: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_60002218:
    // 0x60002218: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000221C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60002220: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002224: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60002228: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000222C: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x60002230: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x60002234: jal         0x600006C4
    // 0x60002238: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_12;
    // 0x60002238: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x6000223C: jal         0x600009D0
    // 0x60002240: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_13;
    // 0x60002240: nop

    after_13:
    // 0x60002244: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002248: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x6000224C: bne         $s0, $at, L_60002218
    if (ctx->r16 != ctx->r1) {
        // 0x60002250: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60002218;
    }
    // 0x60002250: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60002254: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x60002258: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x6000225C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x60002260: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002264: jal         0x600007F0
    // 0x60002268: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world1_7F0(rdram, ctx);
        goto after_14;
    // 0x60002268: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_14:
    // 0x6000226C: jal         0x60001578
    // 0x60002270: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world1_1578(rdram, ctx);
        goto after_15;
    // 0x60002270: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_15:
    // 0x60002274: b           L_6000269C
    // 0x60002278: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002278: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_6000227C:
    // 0x6000227C: lw          $v1, 0x4298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4298);
    // 0x60002280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002284: andi        $t2, $v1, 0x1
    ctx->r10 = ctx->r3 & 0X1;
    // 0x60002288: beq         $t2, $zero, L_60002298
    if (ctx->r10 == 0) {
        // 0x6000228C: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_60002298;
    }
    // 0x6000228C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002290: b           L_60002298
    // 0x60002294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002298;
    // 0x60002294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002298:
    // 0x60002298: beq         $v0, $zero, L_600022FC
    if (ctx->r2 == 0) {
        // 0x6000229C: addiu       $s0, $s0, 0x4214
        ctx->r16 = ADD32(ctx->r16, 0X4214);
            goto L_600022FC;
    }
    // 0x6000229C: addiu       $s0, $s0, 0x4214
    ctx->r16 = ADD32(ctx->r16, 0X4214);
    // 0x600022A0: jal         0x60001554
    // 0x600022A4: nop

    ovl_stage_world1_1554(rdram, ctx);
        goto after_16;
    // 0x600022A4: nop

    after_16:
    // 0x600022A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600022AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600022B0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600022B4: addiu       $v0, $v0, 0x4110
    ctx->r2 = ADD32(ctx->r2, 0X4110);
    // 0x600022B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600022BC: lwc1        $f6, 0x414C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X414C);
    // 0x600022C0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600022C4: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x600022C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x600022CC: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x600022D0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600022D4: nop

    // 0x600022D8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x600022DC: nop

    // 0x600022E0: bc1f        L_6000269C
    if (!c1cs) {
        // 0x600022E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_6000269C;
    }
    // 0x600022E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600022E8: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600022EC: jal         0x6000152C
    // 0x600022F0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    ovl_stage_world1_152C(rdram, ctx);
        goto after_17;
    // 0x600022F0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_17:
    // 0x600022F4: b           L_6000269C
    // 0x600022F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x600022F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600022FC:
    // 0x600022FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60002300: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002304: beq         $v0, $zero, L_60002334
    if (ctx->r2 == 0) {
        // 0x60002308: addiu       $s1, $s1, 0x4238
        ctx->r17 = ADD32(ctx->r17, 0X4238);
            goto L_60002334;
    }
    // 0x60002308: addiu       $s1, $s1, 0x4238
    ctx->r17 = ADD32(ctx->r17, 0X4238);
    // 0x6000230C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002310: beq         $v0, $at, L_600025BC
    if (ctx->r2 == ctx->r1) {
        // 0x60002314: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600025BC;
    }
    // 0x60002314: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60002318: beq         $v0, $at, L_600025F8
    if (ctx->r2 == ctx->r1) {
        // 0x6000231C: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_600025F8;
    }
    // 0x6000231C: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x60002320: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60002324: beq         $v0, $at, L_60002648
    if (ctx->r2 == ctx->r1) {
        // 0x60002328: nop
    
            goto L_60002648;
    }
    // 0x60002328: nop

    // 0x6000232C: b           L_6000269C
    // 0x60002330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002334:
    // 0x60002334: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x60002338: nop

    // 0x6000233C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x60002340: bne         $at, $zero, L_60002538
    if (ctx->r1 != 0) {
        // 0x60002344: nop
    
            goto L_60002538;
    }
    // 0x60002344: nop

    // 0x60002348: jal         0x60001834
    // 0x6000234C: nop

    ovl_stage_world1_1834(rdram, ctx);
        goto after_18;
    // 0x6000234C: nop

    after_18:
    // 0x60002350: beq         $v0, $zero, L_60002538
    if (ctx->r2 == 0) {
        // 0x60002354: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002538;
    }
    // 0x60002354: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002358: addiu       $v1, $v1, 0x421C
    ctx->r3 = ADD32(ctx->r3, 0X421C);
    // 0x6000235C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60002360: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002364: bne         $t4, $at, L_60002528
    if (ctx->r12 != ctx->r1) {
        // 0x60002368: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002528;
    }
    // 0x60002368: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000236C: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x60002370: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x60002374: addiu       $t6, $zero, -0x1E
    ctx->r14 = ADD32(0, -0X1E);
    // 0x60002378: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x6000237C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60002380: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x60002384: jal         0x60000340
    // 0x60002388: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    ovl_stage_world1_340(rdram, ctx);
        goto after_19;
    // 0x60002388: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    after_19:
    // 0x6000238C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002390: lwc1        $f13, 0x4150($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4150);
    // 0x60002394: lwc1        $f12, 0x4154($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x60002398: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000239C: lwc1        $f15, 0x4158($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X4158);
    // 0x600023A0: lwc1        $f14, 0x415C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X415C);
    // 0x600023A4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600023A8: addiu       $s0, $s0, 0x4230
    ctx->r16 = ADD32(ctx->r16, 0X4230);
    // 0x600023AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600023B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600023B4: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600023B8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600023BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x600023C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600023C4: mul.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600023C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600023CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600023D0: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x600023D4: c.le.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d <= ctx->f18.d;
    // 0x600023D8: nop

    // 0x600023DC: bc1f        L_6000243C
    if (!c1cs) {
        // 0x600023E0: nop
    
            goto L_6000243C;
    }
    // 0x600023E0: nop

    // 0x600023E4: jal         0x60000340
    // 0x600023E8: nop

    ovl_stage_world1_340(rdram, ctx);
        goto after_20;
    // 0x600023E8: nop

    after_20:
    // 0x600023EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600023F0: lwc1        $f13, 0x4160($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4160);
    // 0x600023F4: lwc1        $f12, 0x4164($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4164);
    // 0x600023F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600023FC: lwc1        $f15, 0x4168($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X4168);
    // 0x60002400: lwc1        $f14, 0x416C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x60002404: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002408: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000240C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002410: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002414: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60002418: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000241C: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002420: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x60002424: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60002428: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x6000242C: sub.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f6.d - ctx->f14.d;
    // 0x60002430: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x60002434: b           L_60002698
    // 0x60002438: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
        goto L_60002698;
    // 0x60002438: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_6000243C:
    // 0x6000243C: jal         0x60000340
    // 0x60002440: nop

    ovl_stage_world1_340(rdram, ctx);
        goto after_21;
    // 0x60002440: nop

    after_21:
    // 0x60002444: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002448: lwc1        $f13, 0x4170($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4170);
    // 0x6000244C: lwc1        $f12, 0x4174($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4174);
    // 0x60002450: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002458: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x6000245C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002460: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x60002464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002468: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x6000246C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60002470: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002474: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x60002478: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x6000247C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x60002480: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x60002484: nop

    // 0x60002488: bc1f        L_600024E0
    if (!c1cs) {
        // 0x6000248C: nop
    
            goto L_600024E0;
    }
    // 0x6000248C: nop

    // 0x60002490: jal         0x60000340
    // 0x60002494: nop

    ovl_stage_world1_340(rdram, ctx);
        goto after_22;
    // 0x60002494: nop

    after_22:
    // 0x60002498: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000249C: lwc1        $f13, 0x4180($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4180);
    // 0x600024A0: lwc1        $f12, 0x4184($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4184);
    // 0x600024A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600024A8: lwc1        $f15, 0x4188($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X4188);
    // 0x600024AC: lwc1        $f14, 0x418C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x600024B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600024B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600024B8: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600024BC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600024C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x600024C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600024C8: mul.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600024CC: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600024D0: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x600024D4: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x600024D8: b           L_6000251C
    // 0x600024DC: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
        goto L_6000251C;
    // 0x600024DC: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
L_600024E0:
    // 0x600024E0: jal         0x60000340
    // 0x600024E4: nop

    ovl_stage_world1_340(rdram, ctx);
        goto after_23;
    // 0x600024E4: nop

    after_23:
    // 0x600024E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600024EC: lwc1        $f13, 0x4190($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4190);
    // 0x600024F0: lwc1        $f12, 0x4194($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x600024F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600024F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600024FC: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002500: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002504: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60002508: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000250C: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002510: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60002514: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x60002518: add.d       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f10.d + ctx->f8.d;
L_6000251C:
    // 0x6000251C: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x60002520: b           L_60002698
    // 0x60002524: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
        goto L_60002698;
    // 0x60002524: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_60002528:
    // 0x60002528: jal         0x600018D0
    // 0x6000252C: nop

    ovl_stage_world1_18D0(rdram, ctx);
        goto after_24;
    // 0x6000252C: nop

    after_24:
    // 0x60002530: b           L_6000269C
    // 0x60002534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002538:
    // 0x60002538: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000253C: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x60002540: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60002544: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002548: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x6000254C: blez        $t8, L_600025AC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60002550: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_600025AC;
    }
    // 0x60002550: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002554: lui         $at, 0x4311
    ctx->r1 = S32(0X4311 << 16);
    // 0x60002558: addiu       $s0, $s0, 0x4230
    ctx->r16 = ADD32(ctx->r16, 0X4230);
    // 0x6000255C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002560: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002564: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x60002568: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x6000256C: lui         $a2, 0x4409
    ctx->r6 = S32(0X4409 << 16);
    // 0x60002570: lui         $a3, 0x4422
    ctx->r7 = S32(0X4422 << 16);
    // 0x60002574: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002578: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x6000257C: jal         0x60001DD0
    // 0x60002580: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world1_1DD0(rdram, ctx);
        goto after_25;
    // 0x60002580: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_25:
    // 0x60002584: beq         $v0, $zero, L_6000259C
    if (ctx->r2 == 0) {
        // 0x60002588: nop
    
            goto L_6000259C;
    }
    // 0x60002588: nop

    // 0x6000258C: jal         0x600019AC
    // 0x60002590: nop

    ovl_stage_world1_19AC(rdram, ctx);
        goto after_26;
    // 0x60002590: nop

    after_26:
    // 0x60002594: b           L_6000269C
    // 0x60002598: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002598: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_6000259C:
    // 0x6000259C: jal         0x600015F0
    // 0x600025A0: nop

    ovl_stage_world1_15F0(rdram, ctx);
        goto after_27;
    // 0x600025A0: nop

    after_27:
    // 0x600025A4: b           L_6000269C
    // 0x600025A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x600025A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025AC:
    // 0x600025AC: jal         0x600019AC
    // 0x600025B0: nop

    ovl_stage_world1_19AC(rdram, ctx);
        goto after_28;
    // 0x600025B0: nop

    after_28:
    // 0x600025B4: b           L_6000269C
    // 0x600025B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x600025B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025BC:
    // 0x600025BC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600025C0: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x600025C4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x600025C8: nop

    // 0x600025CC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x600025D0: blez        $t1, L_600025E8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x600025D4: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_600025E8;
    }
    // 0x600025D4: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x600025D8: jal         0x600015D0
    // 0x600025DC: nop

    ovl_stage_world1_15D0(rdram, ctx);
        goto after_29;
    // 0x600025DC: nop

    after_29:
    // 0x600025E0: b           L_6000269C
    // 0x600025E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x600025E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025E8:
    // 0x600025E8: jal         0x600019AC
    // 0x600025EC: nop

    ovl_stage_world1_19AC(rdram, ctx);
        goto after_30;
    // 0x600025EC: nop

    after_30:
    // 0x600025F0: b           L_6000269C
    // 0x600025F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x600025F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025F8:
    // 0x600025F8: beq         $t3, $zero, L_60002608
    if (ctx->r11 == 0) {
        // 0x600025FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002608;
    }
    // 0x600025FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002600: b           L_60002608
    // 0x60002604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002608;
    // 0x60002604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002608:
    // 0x60002608: bne         $v0, $zero, L_60002698
    if (ctx->r2 != 0) {
        // 0x6000260C: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002698;
    }
    // 0x6000260C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002610: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x60002614: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x60002618: nop

    // 0x6000261C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x60002620: blez        $t5, L_60002638
    if (SIGNED(ctx->r13) <= 0) {
        // 0x60002624: sw          $t5, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r13;
            goto L_60002638;
    }
    // 0x60002624: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x60002628: jal         0x60001554
    // 0x6000262C: nop

    ovl_stage_world1_1554(rdram, ctx);
        goto after_31;
    // 0x6000262C: nop

    after_31:
    // 0x60002630: b           L_6000269C
    // 0x60002634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002638:
    // 0x60002638: jal         0x600019AC
    // 0x6000263C: nop

    ovl_stage_world1_19AC(rdram, ctx);
        goto after_32;
    // 0x6000263C: nop

    after_32:
    // 0x60002640: b           L_6000269C
    // 0x60002644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x60002644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002648:
    // 0x60002648: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000264C: addiu       $v0, $v0, 0x4218
    ctx->r2 = ADD32(ctx->r2, 0X4218);
    // 0x60002650: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60002654: nop

    // 0x60002658: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x6000265C: blez        $t8, L_60002690
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60002660: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60002690;
    }
    // 0x60002660: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002664: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x60002668: beq         $at, $zero, L_60002680
    if (ctx->r1 == 0) {
        // 0x6000266C: nop
    
            goto L_60002680;
    }
    // 0x6000266C: nop

    // 0x60002670: jal         0x60001554
    // 0x60002674: nop

    ovl_stage_world1_1554(rdram, ctx);
        goto after_33;
    // 0x60002674: nop

    after_33:
    // 0x60002678: b           L_6000269C
    // 0x6000267C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x6000267C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002680:
    // 0x60002680: jal         0x600015F0
    // 0x60002684: nop

    ovl_stage_world1_15F0(rdram, ctx);
        goto after_34;
    // 0x60002684: nop

    after_34:
    // 0x60002688: b           L_6000269C
    // 0x6000268C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_6000269C;
    // 0x6000268C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002690:
    // 0x60002690: jal         0x600019AC
    // 0x60002694: nop

    ovl_stage_world1_19AC(rdram, ctx);
        goto after_35;
    // 0x60002694: nop

    after_35:
L_60002698:
    // 0x60002698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_6000269C:
    // 0x6000269C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x600026A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x600026A4: jr          $ra
    // 0x600026A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x600026A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world1_26AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600026AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600026B0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600026B4: addiu       $a2, $a2, 0x42A0
    ctx->r6 = ADD32(ctx->r6, 0X42A0);
    // 0x600026B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600026BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600026C0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x600026C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600026C8: jal         0x60000808
    // 0x600026CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world1_808(rdram, ctx);
        goto after_0;
    // 0x600026CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x600026D0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600026D4: addiu       $a2, $a2, 0x42A0
    ctx->r6 = ADD32(ctx->r6, 0X42A0);
    // 0x600026D8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x600026DC: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x600026E0: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x600026E4: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x600026E8: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x600026EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600026F0: jal         0x60000808
    // 0x600026F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_808(rdram, ctx);
        goto after_1;
    // 0x600026F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600026F8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600026FC: addiu       $v0, $v0, 0x4238
    ctx->r2 = ADD32(ctx->r2, 0X4238);
    // 0x60002700: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60002704: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002708: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000270C: lw          $a0, 0x40F4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X40F4);
    // 0x60002710: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002714: sw          $zero, 0x4234($at)
    MEM_W(0X4234, ctx->r1) = 0;
    // 0x60002718: addiu       $a2, $a2, 0x4240
    ctx->r6 = ADD32(ctx->r6, 0X4240);
    // 0x6000271C: jal         0x600006C4
    // 0x60002720: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x60002720: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60002724: jal         0x60000DE4
    // 0x60002728: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_3;
    // 0x60002728: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x6000272C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002730: addiu       $a2, $a2, 0x4258
    ctx->r6 = ADD32(ctx->r6, 0X4258);
    // 0x60002734: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002738: jal         0x600006C4
    // 0x6000273C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_4;
    // 0x6000273C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60002740: jal         0x60001374
    // 0x60002744: nop

    ovl_stage_world1_1374(rdram, ctx);
        goto after_5;
    // 0x60002744: nop

    after_5:
    // 0x60002748: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000274C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002750: sw          $zero, 0x421C($at)
    MEM_W(0X421C, ctx->r1) = 0;
    // 0x60002754: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002758: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
    // 0x6000275C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002760: sw          $zero, 0x428C($at)
    MEM_W(0X428C, ctx->r1) = 0;
    // 0x60002764: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002768: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x6000276C: sw          $t8, 0x4290($at)
    MEM_W(0X4290, ctx->r1) = ctx->r24;
    // 0x60002770: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002774: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60002778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000277C: sw          $t9, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r25;
    // 0x60002780: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002784: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x60002788: sw          $t0, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r8;
    // 0x6000278C: jr          $ra
    // 0x60002790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world1_2794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002794: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002798: beq         $a0, $zero, L_60002820
    if (ctx->r4 == 0) {
        // 0x6000279C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002820;
    }
    // 0x6000279C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600027A0: jal         0x60000DE4
    // 0x600027A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_0;
    // 0x600027A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x600027A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600027AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600027B0: jal         0x600006C4
    // 0x600027B4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_1;
    // 0x600027B4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600027B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x600027BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600027C0: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x600027C4: jal         0x60000DE4
    // 0x600027C8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_2;
    // 0x600027C8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x600027CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600027D0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600027D4: jal         0x600006C4
    // 0x600027D8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x600027D8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600027DC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600027E0: addiu       $a2, $a2, 0x42A8
    ctx->r6 = ADD32(ctx->r6, 0X42A8);
    // 0x600027E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600027E8: jal         0x60000808
    // 0x600027EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world1_808(rdram, ctx);
        goto after_4;
    // 0x600027EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600027F0: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600027F4: lw          $t8, 0x42A8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X42A8);
    // 0x600027F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600027FC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002800: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x60002804: sw          $t9, 0x42A8($at)
    MEM_W(0X42A8, ctx->r1) = ctx->r25;
    // 0x60002808: addiu       $a2, $a2, 0x42A8
    ctx->r6 = ADD32(ctx->r6, 0X42A8);
    // 0x6000280C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002810: jal         0x60000808
    // 0x60002814: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world1_808(rdram, ctx);
        goto after_5;
    // 0x60002814: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x60002818: b           L_600028A4
    // 0x6000281C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028A4;
    // 0x6000281C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002820:
    // 0x60002820: jal         0x60000DE4
    // 0x60002824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_6;
    // 0x60002824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60002828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000282C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002830: jal         0x600006C4
    // 0x60002834: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_7;
    // 0x60002834: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002838: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x6000283C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002840: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002844: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002848: jal         0x60000DE4
    // 0x6000284C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_8;
    // 0x6000284C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002850: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002854: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002858: jal         0x600006C4
    // 0x6000285C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_9;
    // 0x6000285C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002860: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002864: addiu       $a2, $a2, 0x42A8
    ctx->r6 = ADD32(ctx->r6, 0X42A8);
    // 0x60002868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000286C: jal         0x60000808
    // 0x60002870: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world1_808(rdram, ctx);
        goto after_10;
    // 0x60002870: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002874: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002878: lw          $t2, 0x42A8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X42A8);
    // 0x6000287C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002880: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002884: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002888: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000288C: sw          $t3, 0x42A8($at)
    MEM_W(0X42A8, ctx->r1) = ctx->r11;
    // 0x60002890: addiu       $a2, $a2, 0x42A8
    ctx->r6 = ADD32(ctx->r6, 0X42A8);
    // 0x60002894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002898: jal         0x60000808
    // 0x6000289C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world1_808(rdram, ctx);
        goto after_11;
    // 0x6000289C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x600028A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600028A4:
    // 0x600028A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600028A8: jr          $ra
    // 0x600028AC: nop

    return;
    // 0x600028AC: nop

;}
RECOMP_FUNC void ovl_stage_world1_28B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600028B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600028B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600028B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600028BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600028C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600028C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600028C8: jal         0x60000C1C
    // 0x600028CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600028CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600028D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600028D4: jal         0x600009C4
    // 0x600028D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_1;
    // 0x600028D8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x600028DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600028E0: nop

    // 0x600028E4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600028E8: beq         $t7, $zero, L_6000290C
    if (ctx->r15 == 0) {
        // 0x600028EC: nop
    
            goto L_6000290C;
    }
    // 0x600028EC: nop

L_600028F0:
    // 0x600028F0: jal         0x600009D0
    // 0x600028F4: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_2;
    // 0x600028F4: nop

    after_2:
    // 0x600028F8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600028FC: nop

    // 0x60002900: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60002904: bne         $t9, $zero, L_600028F0
    if (ctx->r25 != 0) {
        // 0x60002908: nop
    
            goto L_600028F0;
    }
    // 0x60002908: nop

L_6000290C:
    // 0x6000290C: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002910: addiu       $s4, $s4, 0x40F4
    ctx->r20 = ADD32(ctx->r20, 0X40F4);
    // 0x60002914: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60002918: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x6000291C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002920: jal         0x600006C4
    // 0x60002924: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x60002924: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x60002928: jal         0x60001098
    // 0x6000292C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_1098(rdram, ctx);
        goto after_4;
    // 0x6000292C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60002930: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60002934: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x60002938: sll         $t1, $t0, 9
    ctx->r9 = S32(ctx->r8 << 9);
    // 0x6000293C: bgez        $t1, L_60002960
    if (SIGNED(ctx->r9) >= 0) {
        // 0x60002940: nop
    
            goto L_60002960;
    }
    // 0x60002940: nop

L_60002944:
    // 0x60002944: jal         0x600009D0
    // 0x60002948: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_5;
    // 0x60002948: nop

    after_5:
    // 0x6000294C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60002950: nop

    // 0x60002954: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x60002958: bne         $t3, $zero, L_60002944
    if (ctx->r11 != 0) {
        // 0x6000295C: nop
    
            goto L_60002944;
    }
    // 0x6000295C: nop

L_60002960:
    // 0x60002960: jal         0x600009D0
    // 0x60002964: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_6;
    // 0x60002964: nop

    after_6:
    // 0x60002968: jal         0x60002794
    // 0x6000296C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_2794(rdram, ctx);
        goto after_7;
    // 0x6000296C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002970: jal         0x600007E4
    // 0x60002974: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world1_7E4(rdram, ctx);
        goto after_8;
    // 0x60002974: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x60002978: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000297C: addiu       $a2, $a2, 0x4294
    ctx->r6 = ADD32(ctx->r6, 0X4294);
    // 0x60002980: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x60002984: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x60002988: sw          $t4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r12;
    // 0x6000298C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x60002990: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x60002994: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x60002998: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000299C: sw          $t6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r14;
    // 0x600029A0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600029A4: nop

    // 0x600029A8: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x600029AC: nop

    // 0x600029B0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x600029B4: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x600029B8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x600029BC: nop

    // 0x600029C0: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x600029C4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600029C8: jal         0x600007F0
    // 0x600029CC: nop

    ovl_stage_world1_7F0(rdram, ctx);
        goto after_9;
    // 0x600029CC: nop

    after_9:
    // 0x600029D0: jal         0x600026AC
    // 0x600029D4: nop

    ovl_stage_world1_26AC(rdram, ctx);
        goto after_10;
    // 0x600029D4: nop

    after_10:
    // 0x600029D8: jal         0x60000B98
    // 0x600029DC: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_11;
    // 0x600029DC: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_11:
    // 0x600029E0: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x600029E4: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600029E8: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600029EC: addiu       $s1, $s1, 0x42A0
    ctx->r17 = ADD32(ctx->r17, 0X42A0);
    // 0x600029F0: addiu       $s2, $s2, 0x4234
    ctx->r18 = ADD32(ctx->r18, 0X4234);
    // 0x600029F4: addiu       $s3, $s3, 0x4238
    ctx->r19 = ADD32(ctx->r19, 0X4238);
    // 0x600029F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_600029FC:
    // 0x600029FC: nop

    // 0x60002A00: andi        $t1, $v0, 0x2000
    ctx->r9 = ctx->r2 & 0X2000;
    // 0x60002A04: beq         $t1, $zero, L_60002AAC
    if (ctx->r9 == 0) {
        // 0x60002A08: andi        $t2, $v0, 0x2
        ctx->r10 = ctx->r2 & 0X2;
            goto L_60002AAC;
    }
    // 0x60002A08: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x60002A0C: beq         $t2, $zero, L_60002A24
    if (ctx->r10 == 0) {
        // 0x60002A10: nop
    
            goto L_60002A24;
    }
    // 0x60002A10: nop

    // 0x60002A14: jal         0x600009AC
    // 0x60002A18: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_12;
    // 0x60002A18: nop

    after_12:
    // 0x60002A1C: b           L_60002A30
    // 0x60002A20: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
        goto L_60002A30;
    // 0x60002A20: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_60002A24:
    // 0x60002A24: jal         0x60000A6C
    // 0x60002A28: nop

    ovl_stage_world1_A6C(rdram, ctx);
        goto after_13;
    // 0x60002A28: nop

    after_13:
    // 0x60002A2C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_60002A30:
    // 0x60002A30: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002A34: jal         0x600006C4
    // 0x60002A38: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_14;
    // 0x60002A38: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_14:
    // 0x60002A3C: jal         0x60001098
    // 0x60002A40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_1098(rdram, ctx);
        goto after_15;
    // 0x60002A40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x60002A44: jal         0x60000A60
    // 0x60002A48: addiu       $a0, $zero, 0xAB4
    ctx->r4 = ADD32(0, 0XAB4);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_16;
    // 0x60002A48: addiu       $a0, $zero, 0xAB4
    ctx->r4 = ADD32(0, 0XAB4);
    after_16:
    // 0x60002A4C: jal         0x600009C4
    // 0x60002A50: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_17;
    // 0x60002A50: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_17:
    // 0x60002A54: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x60002A58: nop

    // 0x60002A5C: andi        $t4, $t3, 0x800
    ctx->r12 = ctx->r11 & 0X800;
    // 0x60002A60: beq         $t4, $zero, L_60002A84
    if (ctx->r12 == 0) {
        // 0x60002A64: nop
    
            goto L_60002A84;
    }
    // 0x60002A64: nop

L_60002A68:
    // 0x60002A68: jal         0x600009D0
    // 0x60002A6C: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_18;
    // 0x60002A6C: nop

    after_18:
    // 0x60002A70: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60002A74: nop

    // 0x60002A78: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60002A7C: bne         $t6, $zero, L_60002A68
    if (ctx->r14 != 0) {
        // 0x60002A80: nop
    
            goto L_60002A68;
    }
    // 0x60002A80: nop

L_60002A84:
    // 0x60002A84: jal         0x60000244
    // 0x60002A88: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world1_244(rdram, ctx);
        goto after_19;
    // 0x60002A88: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_19:
    // 0x60002A8C: jal         0x60000B98
    // 0x60002A90: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_20;
    // 0x60002A90: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_20:
    // 0x60002A94: jal         0x60000B98
    // 0x60002A98: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_21;
    // 0x60002A98: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    after_21:
    // 0x60002A9C: jal         0x60002794
    // 0x60002AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_2794(rdram, ctx);
        goto after_22;
    // 0x60002AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x60002AA4: jal         0x600009AC
    // 0x60002AA8: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_23;
    // 0x60002AA8: nop

    after_23:
L_60002AAC:
    // 0x60002AAC: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x60002AB0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x60002AB4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x60002AB8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x60002ABC: jal         0x60001374
    // 0x60002AC0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    ovl_stage_world1_1374(rdram, ctx);
        goto after_24;
    // 0x60002AC0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    after_24:
    // 0x60002AC4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x60002AC8: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002ACC: jal         0x60000CE8
    // 0x60002AD0: addiu       $a1, $a1, 0x4298
    ctx->r5 = ADD32(ctx->r5, 0X4298);
    ovl_stage_world1_CE8(rdram, ctx);
        goto after_25;
    // 0x60002AD0: addiu       $a1, $a1, 0x4298
    ctx->r5 = ADD32(ctx->r5, 0X4298);
    after_25:
    // 0x60002AD4: jal         0x60002090
    // 0x60002AD8: nop

    ovl_stage_world1_2090(rdram, ctx);
        goto after_26;
    // 0x60002AD8: nop

    after_26:
    // 0x60002ADC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x60002AE0: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x60002AE4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60002AE8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60002AEC: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x60002AF0: sw          $t0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r8;
    // 0x60002AF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002AF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002AFC: jal         0x60000808
    // 0x60002B00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_808(rdram, ctx);
        goto after_27;
    // 0x60002B00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x60002B04: jal         0x600009D0
    // 0x60002B08: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_28;
    // 0x60002B08: nop

    after_28:
    // 0x60002B0C: b           L_600029FC
    // 0x60002B10: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_600029FC;
    // 0x60002B10: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x60002B14: nop

    // 0x60002B18: nop

    // 0x60002B1C: nop

    // 0x60002B20: nop

    // 0x60002B24: nop

    // 0x60002B28: nop

    // 0x60002B2C: nop

    // 0x60002B30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002B34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002B38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002B40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002B44: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002B48: jr          $ra
    // 0x60002B4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60002B4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world1_2B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002B58: jal         0x60000C1C
    // 0x60002B5C: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60002B5C: nop

    after_0:
    // 0x60002B60: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002B64: nop

    // 0x60002B68: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x60002B6C: bltz        $t7, L_60002BC0
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002B70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002BC0;
    }
    // 0x60002B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002B74: jal         0x60000BB0
    // 0x60002B78: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x60002B78: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_1:
    // 0x60002B7C: bne         $v0, $zero, L_60002B90
    if (ctx->r2 != 0) {
        // 0x60002B80: addiu       $a0, $zero, 0x12
        ctx->r4 = ADD32(0, 0X12);
            goto L_60002B90;
    }
    // 0x60002B80: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002B84: jal         0x60000A60
    // 0x60002B88: addiu       $a0, $zero, 0xAB3
    ctx->r4 = ADD32(0, 0XAB3);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_2;
    // 0x60002B88: addiu       $a0, $zero, 0xAB3
    ctx->r4 = ADD32(0, 0XAB3);
    after_2:
    // 0x60002B8C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
L_60002B90:
    // 0x60002B90: jal         0x60000E68
    // 0x60002B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_3;
    // 0x60002B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60002B98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x60002B9C: jal         0x60000E68
    // 0x60002BA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_4;
    // 0x60002BA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60002BA4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002BA8: addiu       $a0, $a0, 0x28B0
    ctx->r4 = ADD32(ctx->r4, 0X28B0);
    // 0x60002BAC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002BB0: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x60002BB4: jal         0x60000994
    // 0x60002BB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_5;
    // 0x60002BB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60002BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002BC0:
    // 0x60002BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002BC4: jr          $ra
    // 0x60002BC8: nop

    return;
    // 0x60002BC8: nop

;}
RECOMP_FUNC void ovl_stage_world1_2BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002BD4: jal         0x60000B98
    // 0x60002BD8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_0;
    // 0x60002BD8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_0:
    // 0x60002BDC: jal         0x60000C7C
    // 0x60002BE0: nop

    ovl_stage_world1_C7C(rdram, ctx);
        goto after_1;
    // 0x60002BE0: nop

    after_1:
    // 0x60002BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002BEC: jr          $ra
    // 0x60002BF0: nop

    return;
    // 0x60002BF0: nop

;}
RECOMP_FUNC void ovl_stage_world1_2BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002BFC: jal         0x60000EEC
    // 0x60002C00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_0;
    // 0x60002C00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x60002C04: jal         0x600009AC
    // 0x60002C08: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_1;
    // 0x60002C08: nop

    after_1:
    // 0x60002C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002C14: jr          $ra
    // 0x60002C18: nop

    return;
    // 0x60002C18: nop

;}
RECOMP_FUNC void ovl_stage_world1_2C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C24: jal         0x60000BB0
    // 0x60002C28: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60002C28: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_0:
    // 0x60002C2C: beq         $v0, $zero, L_60002CB0
    if (ctx->r2 == 0) {
        // 0x60002C30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CB0;
    }
    // 0x60002C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C34: jal         0x60000BB0
    // 0x60002C38: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x60002C38: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_1:
    // 0x60002C3C: bne         $v0, $zero, L_60002CB0
    if (ctx->r2 != 0) {
        // 0x60002C40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CB0;
    }
    // 0x60002C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C44: jal         0x60000DE4
    // 0x60002C48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_2;
    // 0x60002C48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60002C4C: jal         0x60000CC4
    // 0x60002C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world1_CC4(rdram, ctx);
        goto after_3;
    // 0x60002C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60002C54: jal         0x60000A6C
    // 0x60002C58: nop

    ovl_stage_world1_A6C(rdram, ctx);
        goto after_4;
    // 0x60002C58: nop

    after_4:
    // 0x60002C5C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60002C60: jal         0x60000E68
    // 0x60002C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_5;
    // 0x60002C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60002C68: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x60002C6C: jal         0x60000E68
    // 0x60002C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_6;
    // 0x60002C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60002C74: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    // 0x60002C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002C7C: jal         0x60000304
    // 0x60002C80: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    ovl_stage_world1_304(rdram, ctx);
        goto after_7;
    // 0x60002C80: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_7:
    // 0x60002C84: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002C88: addiu       $a0, $a0, 0x2BF4
    ctx->r4 = ADD32(ctx->r4, 0X2BF4);
    // 0x60002C8C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C94: jal         0x60000994
    // 0x60002C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_8;
    // 0x60002C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x60002C9C: jal         0x60000A60
    // 0x60002CA0: addiu       $a0, $zero, 0xA47
    ctx->r4 = ADD32(0, 0XA47);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_9;
    // 0x60002CA0: addiu       $a0, $zero, 0xA47
    ctx->r4 = ADD32(0, 0XA47);
    after_9:
    // 0x60002CA4: jal         0x60000B98
    // 0x60002CA8: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_10;
    // 0x60002CA8: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_10:
    // 0x60002CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002CB0:
    // 0x60002CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002CB4: jr          $ra
    // 0x60002CB8: nop

    return;
    // 0x60002CB8: nop

;}
RECOMP_FUNC void ovl_stage_world1_2CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002CC4: jal         0x60000EEC
    // 0x60002CC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_0;
    // 0x60002CC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x60002CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002CD4: jr          $ra
    // 0x60002CD8: nop

    return;
    // 0x60002CD8: nop

;}
RECOMP_FUNC void ovl_stage_world1_2CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002CE4: jal         0x60000C1C
    // 0x60002CE8: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60002CE8: nop

    after_0:
    // 0x60002CEC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60002CF0: nop

    // 0x60002CF4: bne         $t6, $zero, L_60002D20
    if (ctx->r14 != 0) {
        // 0x60002CF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D20;
    }
    // 0x60002CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CFC: jal         0x60000B98
    // 0x60002D00: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_1;
    // 0x60002D00: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    after_1:
    // 0x60002D04: jal         0x60000B38
    // 0x60002D08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world1_B38(rdram, ctx);
        goto after_2;
    // 0x60002D08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x60002D0C: jal         0x60000B5C
    // 0x60002D10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world1_B5C(rdram, ctx);
        goto after_3;
    // 0x60002D10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x60002D14: jal         0x60000A60
    // 0x60002D18: addiu       $a0, $zero, 0xAB2
    ctx->r4 = ADD32(0, 0XAB2);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_4;
    // 0x60002D18: addiu       $a0, $zero, 0xAB2
    ctx->r4 = ADD32(0, 0XAB2);
    after_4:
    // 0x60002D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002D20:
    // 0x60002D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D24: jr          $ra
    // 0x60002D28: nop

    return;
    // 0x60002D28: nop

;}
RECOMP_FUNC void ovl_stage_world1_2D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D34: jal         0x60000C1C
    // 0x60002D38: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60002D38: nop

    after_0:
    // 0x60002D3C: jal         0x60000B98
    // 0x60002D40: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_1;
    // 0x60002D40: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    after_1:
    // 0x60002D44: jal         0x60000A60
    // 0x60002D48: addiu       $a0, $zero, 0xAB6
    ctx->r4 = ADD32(0, 0XAB6);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_2;
    // 0x60002D48: addiu       $a0, $zero, 0xAB6
    ctx->r4 = ADD32(0, 0XAB6);
    after_2:
    // 0x60002D4C: jal         0x60001030
    // 0x60002D50: nop

    ovl_stage_world1_1030(rdram, ctx);
        goto after_3;
    // 0x60002D50: nop

    after_3:
    // 0x60002D54: jal         0x60002794
    // 0x60002D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_2794(rdram, ctx);
        goto after_4;
    // 0x60002D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60002D5C: jal         0x600009AC
    // 0x60002D60: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_5;
    // 0x60002D60: nop

    after_5:
    // 0x60002D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D6C: jr          $ra
    // 0x60002D70: nop

    return;
    // 0x60002D70: nop

;}
RECOMP_FUNC void ovl_stage_world1_2D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D7C: jal         0x6000025C
    // 0x60002D80: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world1_25C(rdram, ctx);
        goto after_0;
    // 0x60002D80: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60002D84: jal         0x60000244
    // 0x60002D88: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world1_244(rdram, ctx);
        goto after_1;
    // 0x60002D88: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60002D8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002D90: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60002D94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60002D98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60002D9C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60002DA0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60002DA4: jal         0x60000E74
    // 0x60002DA8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_2;
    // 0x60002DA8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x60002DAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002DB0: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60002DB4: jal         0x600006C4
    // 0x60002DB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x60002DB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60002DBC: jal         0x60000EEC
    // 0x60002DC0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_4;
    // 0x60002DC0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_4:
    // 0x60002DC4: jal         0x60000EEC
    // 0x60002DC8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_5;
    // 0x60002DC8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_5:
    // 0x60002DCC: jal         0x60000EEC
    // 0x60002DD0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_6;
    // 0x60002DD0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x60002DD4: jal         0x60000EEC
    // 0x60002DD8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_7;
    // 0x60002DD8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_7:
    // 0x60002DDC: jal         0x600009AC
    // 0x60002DE0: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_8;
    // 0x60002DE0: nop

    after_8:
    // 0x60002DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002DE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002DEC: jr          $ra
    // 0x60002DF0: nop

    return;
    // 0x60002DF0: nop

;}
RECOMP_FUNC void ovl_stage_world1_2DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002DFC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60002E00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60002E04: jal         0x60001098
    // 0x60002E08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_1098(rdram, ctx);
        goto after_0;
    // 0x60002E08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60002E0C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60002E10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002E14: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60002E1C: lwc1        $f8, 0x4198($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4198);
    // 0x60002E20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002E24: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x60002E28: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x60002E2C: jal         0x60000DE4
    // 0x60002E30: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_1;
    // 0x60002E30: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60002E34: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x60002E38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60002E3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002E40: jal         0x600006C4
    // 0x60002E44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x60002E44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60002E48: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x60002E4C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60002E50: jal         0x60000DE4
    // 0x60002E54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_3;
    // 0x60002E54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60002E58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002E5C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60002E60: jal         0x600006C4
    // 0x60002E64: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_4;
    // 0x60002E64: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x60002E68: jal         0x60000DE4
    // 0x60002E6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_5;
    // 0x60002E6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60002E70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002E74: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002E78: jal         0x600006C4
    // 0x60002E7C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_6;
    // 0x60002E7C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60002E80: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x60002E84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002E88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x60002E8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002E90: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x60002E94: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_60002E98:
    // 0x60002E98: jal         0x60002794
    // 0x60002E9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_2794(rdram, ctx);
        goto after_7;
    // 0x60002E9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002EA0: jal         0x600009D0
    // 0x60002EA4: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_8;
    // 0x60002EA4: nop

    after_8:
    // 0x60002EA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002EAC: bne         $s0, $s1, L_60002E98
    if (ctx->r16 != ctx->r17) {
        // 0x60002EB0: nop
    
            goto L_60002E98;
    }
    // 0x60002EB0: nop

    // 0x60002EB4: jal         0x600009AC
    // 0x60002EB8: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_9;
    // 0x60002EB8: nop

    after_9:
    // 0x60002EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002EC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60002EC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002EC8: jr          $ra
    // 0x60002ECC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002ECC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world1_2ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002ED8: jal         0x60000BB0
    // 0x60002EDC: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60002EDC: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    after_0:
    // 0x60002EE0: bne         $v0, $zero, L_60002F04
    if (ctx->r2 != 0) {
        // 0x60002EE4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002F04;
    }
    // 0x60002EE4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002EE8: addiu       $a0, $a0, 0x2D2C
    ctx->r4 = ADD32(ctx->r4, 0X2D2C);
    // 0x60002EEC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002EF4: jal         0x60000994
    // 0x60002EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x60002EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60002EFC: b           L_60002F2C
    // 0x60002F00: nop

        goto L_60002F2C;
    // 0x60002F00: nop

L_60002F04:
    // 0x60002F04: jal         0x60000BB0
    // 0x60002F08: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x60002F08: addiu       $a0, $zero, 0xAC
    ctx->r4 = ADD32(0, 0XAC);
    after_2:
    // 0x60002F0C: beq         $v0, $zero, L_60002F2C
    if (ctx->r2 == 0) {
        // 0x60002F10: nop
    
            goto L_60002F2C;
    }
    // 0x60002F10: nop

    // 0x60002F14: jal         0x60000BB0
    // 0x60002F18: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_3;
    // 0x60002F18: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_3:
    // 0x60002F1C: bne         $v0, $zero, L_60002F2C
    if (ctx->r2 != 0) {
        // 0x60002F20: nop
    
            goto L_60002F2C;
    }
    // 0x60002F20: nop

    // 0x60002F24: jal         0x6000025C
    // 0x60002F28: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world1_25C(rdram, ctx);
        goto after_4;
    // 0x60002F28: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
L_60002F2C:
    // 0x60002F2C: jal         0x60000BB0
    // 0x60002F30: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_5;
    // 0x60002F30: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_5:
    // 0x60002F34: beq         $v0, $zero, L_60002F5C
    if (ctx->r2 == 0) {
        // 0x60002F38: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002F5C;
    }
    // 0x60002F38: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F40: addiu       $a0, $a0, 0x2D74
    ctx->r4 = ADD32(ctx->r4, 0X2D74);
    // 0x60002F44: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002F4C: jal         0x60000994
    // 0x60002F50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_6;
    // 0x60002F50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60002F54: b           L_60002F74
    // 0x60002F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002F74;
    // 0x60002F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F5C:
    // 0x60002F5C: addiu       $a0, $a0, 0x2DF4
    ctx->r4 = ADD32(ctx->r4, 0X2DF4);
    // 0x60002F60: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002F68: jal         0x60000994
    // 0x60002F6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_7;
    // 0x60002F6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60002F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F74:
    // 0x60002F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F78: jr          $ra
    // 0x60002F7C: nop

    return;
    // 0x60002F7C: nop

;}
RECOMP_FUNC void ovl_stage_world1_2F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F88: jal         0x60000A60
    // 0x60002F8C: addiu       $a0, $zero, 0xA49
    ctx->r4 = ADD32(0, 0XA49);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_0;
    // 0x60002F8C: addiu       $a0, $zero, 0xA49
    ctx->r4 = ADD32(0, 0XA49);
    after_0:
    // 0x60002F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F98: jr          $ra
    // 0x60002F9C: nop

    return;
    // 0x60002F9C: nop

;}
RECOMP_FUNC void ovl_stage_world1_2FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002FA8: jal         0x60000A60
    // 0x60002FAC: addiu       $a0, $zero, 0xAB5
    ctx->r4 = ADD32(0, 0XAB5);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_0;
    // 0x60002FAC: addiu       $a0, $zero, 0xAB5
    ctx->r4 = ADD32(0, 0XAB5);
    after_0:
    // 0x60002FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002FB8: jr          $ra
    // 0x60002FBC: nop

    return;
    // 0x60002FBC: nop

;}
RECOMP_FUNC void ovl_stage_world1_2FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002FC8: jal         0x60000BB0
    // 0x60002FCC: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60002FCC: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60002FD0: beq         $v0, $zero, L_60003034
    if (ctx->r2 == 0) {
        // 0x60002FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003034;
    }
    // 0x60002FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FD8: jal         0x60000BB0
    // 0x60002FDC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x60002FDC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60002FE0: beq         $v0, $zero, L_60003034
    if (ctx->r2 == 0) {
        // 0x60002FE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003034;
    }
    // 0x60002FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FE8: jal         0x60000BB0
    // 0x60002FEC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x60002FEC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x60002FF0: beq         $v0, $zero, L_60003034
    if (ctx->r2 == 0) {
        // 0x60002FF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003034;
    }
    // 0x60002FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FF8: jal         0x60000BB0
    // 0x60002FFC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_3;
    // 0x60002FFC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x60003000: beq         $v0, $zero, L_60003034
    if (ctx->r2 == 0) {
        // 0x60003004: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003034;
    }
    // 0x60003004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003008: jal         0x60000BB0
    // 0x6000300C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_4;
    // 0x6000300C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x60003010: bne         $v0, $zero, L_60003034
    if (ctx->r2 != 0) {
        // 0x60003014: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003034;
    }
    // 0x60003014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003018: jal         0x60000B98
    // 0x6000301C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_5;
    // 0x6000301C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_5:
    // 0x60003020: jal         0x60000244
    // 0x60003024: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world1_244(rdram, ctx);
        goto after_6;
    // 0x60003024: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_6:
    // 0x60003028: jal         0x60000EEC
    // 0x6000302C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_7;
    // 0x6000302C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x60003030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003034:
    // 0x60003034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003038: jr          $ra
    // 0x6000303C: nop

    return;
    // 0x6000303C: nop

;}
RECOMP_FUNC void ovl_stage_world1_3040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003048: jal         0x60000C1C
    // 0x6000304C: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x6000304C: nop

    after_0:
    // 0x60003050: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60003054: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003058: nop

    // 0x6000305C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60003060: beq         $t7, $zero, L_60003070
    if (ctx->r15 == 0) {
        // 0x60003064: nop
    
            goto L_60003070;
    }
    // 0x60003064: nop

    // 0x60003068: jal         0x600009AC
    // 0x6000306C: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_1;
    // 0x6000306C: nop

    after_1:
L_60003070:
    // 0x60003070: jal         0x60000FA8
    // 0x60003074: nop

    ovl_stage_world1_FA8(rdram, ctx);
        goto after_2;
    // 0x60003074: nop

    after_2:
    // 0x60003078: jal         0x60000EF8
    // 0x6000307C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world1_EF8(rdram, ctx);
        goto after_3;
    // 0x6000307C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x60003080: jal         0x60000EEC
    // 0x60003084: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_4;
    // 0x60003084: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_4:
    // 0x60003088: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x6000308C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003090: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003094: addiu       $a0, $zero, 0xAB7
    ctx->r4 = ADD32(0, 0XAB7);
    // 0x60003098: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x6000309C: jal         0x60000A60
    // 0x600030A0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world1_A60(rdram, ctx);
        goto after_5;
    // 0x600030A0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_5:
    // 0x600030A4: jal         0x60001030
    // 0x600030A8: nop

    ovl_stage_world1_1030(rdram, ctx);
        goto after_6;
    // 0x600030A8: nop

    after_6:
    // 0x600030AC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x600030B0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x600030B4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x600030B8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600030BC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x600030C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600030C4: jal         0x60002794
    // 0x600030C8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    ovl_stage_world1_2794(rdram, ctx);
        goto after_7;
    // 0x600030C8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    after_7:
    // 0x600030CC: jal         0x60001098
    // 0x600030D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_1098(rdram, ctx);
        goto after_8;
    // 0x600030D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x600030D4: jal         0x60000BB0
    // 0x600030D8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_9;
    // 0x600030D8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_9:
    // 0x600030DC: beq         $v0, $zero, L_600030F4
    if (ctx->r2 == 0) {
        // 0x600030E0: nop
    
            goto L_600030F4;
    }
    // 0x600030E0: nop

    // 0x600030E4: jal         0x60000C7C
    // 0x600030E8: nop

    ovl_stage_world1_C7C(rdram, ctx);
        goto after_10;
    // 0x600030E8: nop

    after_10:
    // 0x600030EC: b           L_60003144
    // 0x600030F0: nop

        goto L_60003144;
    // 0x600030F0: nop

L_600030F4:
    // 0x600030F4: jal         0x60000B98
    // 0x600030F8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_11;
    // 0x600030F8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_11:
    // 0x600030FC: jal         0x60000BEC
    // 0x60003100: nop

    ovl_stage_world1_BEC(rdram, ctx);
        goto after_12;
    // 0x60003100: nop

    after_12:
    // 0x60003104: lbu         $t3, 0x3($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X3);
    // 0x60003108: nop

    // 0x6000310C: andi        $t4, $t3, 0x80
    ctx->r12 = ctx->r11 & 0X80;
    // 0x60003110: bne         $t4, $zero, L_60003138
    if (ctx->r12 != 0) {
        // 0x60003114: addiu       $a0, $zero, 0x8B6
        ctx->r4 = ADD32(0, 0X8B6);
            goto L_60003138;
    }
    // 0x60003114: addiu       $a0, $zero, 0x8B6
    ctx->r4 = ADD32(0, 0X8B6);
    // 0x60003118: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x6000311C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003120: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x60003124: jal         0x60000B38
    // 0x60003128: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    ovl_stage_world1_B38(rdram, ctx);
        goto after_13;
    // 0x60003128: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    after_13:
    // 0x6000312C: jal         0x60000B5C
    // 0x60003130: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_B5C(rdram, ctx);
        goto after_14;
    // 0x60003130: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x60003134: addiu       $a0, $zero, 0x8B6
    ctx->r4 = ADD32(0, 0X8B6);
L_60003138:
    // 0x60003138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000313C: jal         0x60000C10
    // 0x60003140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world1_C10(rdram, ctx);
        goto after_15;
    // 0x60003140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
L_60003144:
    // 0x60003144: jal         0x600009AC
    // 0x60003148: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_16;
    // 0x60003148: nop

    after_16:
    // 0x6000314C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003154: jr          $ra
    // 0x60003158: nop

    return;
    // 0x60003158: nop

;}
RECOMP_FUNC void ovl_stage_world1_315C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000315C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003164: jal         0x600009C4
    // 0x60003168: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_0;
    // 0x60003168: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x6000316C: jal         0x60000BA4
    // 0x60003170: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world1_BA4(rdram, ctx);
        goto after_1;
    // 0x60003170: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60003174: jal         0x600009AC
    // 0x60003178: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_2;
    // 0x60003178: nop

    after_2:
    // 0x6000317C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003184: jr          $ra
    // 0x60003188: nop

    return;
    // 0x60003188: nop

;}
RECOMP_FUNC void ovl_stage_world1_318C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000318C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003194: jal         0x60000BB0
    // 0x60003198: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60003198: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x6000319C: bne         $v0, $zero, L_6000324C
    if (ctx->r2 != 0) {
        // 0x600031A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000324C;
    }
    // 0x600031A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031A4: jal         0x60000BB0
    // 0x600031A8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x600031A8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x600031AC: beq         $v0, $zero, L_6000324C
    if (ctx->r2 == 0) {
        // 0x600031B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000324C;
    }
    // 0x600031B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031B4: jal         0x60000BB0
    // 0x600031B8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x600031B8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x600031BC: bne         $v0, $zero, L_6000324C
    if (ctx->r2 != 0) {
        // 0x600031C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000324C;
    }
    // 0x600031C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031C4: jal         0x60000BB0
    // 0x600031C8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_3;
    // 0x600031C8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_3:
    // 0x600031CC: bne         $v0, $zero, L_60003210
    if (ctx->r2 != 0) {
        // 0x600031D0: nop
    
            goto L_60003210;
    }
    // 0x600031D0: nop

    // 0x600031D4: jal         0x60000B98
    // 0x600031D8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_4;
    // 0x600031D8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_4:
    // 0x600031DC: jal         0x60000B98
    // 0x600031E0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_5;
    // 0x600031E0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_5:
    // 0x600031E4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600031E8: jal         0x60000E68
    // 0x600031EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_6;
    // 0x600031EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x600031F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031F4: addiu       $a0, $a0, 0x315C
    ctx->r4 = ADD32(ctx->r4, 0X315C);
    // 0x600031F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600031FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003200: jal         0x60000994
    // 0x60003204: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_7;
    // 0x60003204: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60003208: b           L_6000324C
    // 0x6000320C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000324C;
    // 0x6000320C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003210:
    // 0x60003210: jal         0x60000DE4
    // 0x60003214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_8;
    // 0x60003214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60003218: jal         0x60000CC4
    // 0x6000321C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world1_CC4(rdram, ctx);
        goto after_9;
    // 0x6000321C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x60003220: jal         0x60000A6C
    // 0x60003224: nop

    ovl_stage_world1_A6C(rdram, ctx);
        goto after_10;
    // 0x60003224: nop

    after_10:
    // 0x60003228: jal         0x60000B98
    // 0x6000322C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_11;
    // 0x6000322C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_11:
    // 0x60003230: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003234: addiu       $a0, $a0, 0x3040
    ctx->r4 = ADD32(ctx->r4, 0X3040);
    // 0x60003238: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000323C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003240: jal         0x60000994
    // 0x60003244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_12;
    // 0x60003244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x60003248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000324C:
    // 0x6000324C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003250: jr          $ra
    // 0x60003254: nop

    return;
    // 0x60003254: nop

;}
RECOMP_FUNC void ovl_stage_world1_3258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003258: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000325C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60003260: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003264: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60003268: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x6000326C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003270:
    // 0x60003270: jal         0x60000BB0
    // 0x60003274: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60003274: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_0:
    // 0x60003278: bne         $v0, $zero, L_6000332C
    if (ctx->r2 != 0) {
        // 0x6000327C: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_6000332C;
    }
    // 0x6000327C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003280: jal         0x600009D0
    // 0x60003284: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_1;
    // 0x60003284: nop

    after_1:
    // 0x60003288: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000328C: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60003290: bne         $at, $zero, L_60003270
    if (ctx->r1 != 0) {
        // 0x60003294: nop
    
            goto L_60003270;
    }
    // 0x60003294: nop

    // 0x60003298: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000329C: jal         0x60000E68
    // 0x600032A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_2;
    // 0x600032A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600032A4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600032A8: jal         0x60000E68
    // 0x600032AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_3;
    // 0x600032AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600032B0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600032B4: jal         0x60000E68
    // 0x600032B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_4;
    // 0x600032B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600032BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600032C0: jal         0x60000E68
    // 0x600032C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E68(rdram, ctx);
        goto after_5;
    // 0x600032C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x600032C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600032CC:
    // 0x600032CC: jal         0x60000BB0
    // 0x600032D0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_6;
    // 0x600032D0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_6:
    // 0x600032D4: bne         $v0, $zero, L_6000332C
    if (ctx->r2 != 0) {
        // 0x600032D8: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_6000332C;
    }
    // 0x600032D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600032DC: jal         0x600009D0
    // 0x600032E0: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_7;
    // 0x600032E0: nop

    after_7:
    // 0x600032E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600032E8: bne         $s0, $s1, L_600032CC
    if (ctx->r16 != ctx->r17) {
        // 0x600032EC: nop
    
            goto L_600032CC;
    }
    // 0x600032EC: nop

    // 0x600032F0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600032F4: jal         0x60000E68
    // 0x600032F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_8;
    // 0x600032F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x600032FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003300: jal         0x60000E68
    // 0x60003304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_9;
    // 0x60003304: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x60003308: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000330C: jal         0x60000E68
    // 0x60003310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_10;
    // 0x60003310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x60003314: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003318: jal         0x60000E68
    // 0x6000331C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world1_E68(rdram, ctx);
        goto after_11;
    // 0x6000331C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x60003320: b           L_60003270
    // 0x60003324: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_60003270;
    // 0x60003324: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003328: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_6000332C:
    // 0x6000332C: jal         0x60000E80
    // 0x60003330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E80(rdram, ctx);
        goto after_12;
    // 0x60003330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x60003334: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003338: jal         0x60000E80
    // 0x6000333C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E80(rdram, ctx);
        goto after_13;
    // 0x6000333C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x60003340: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003344: jal         0x60000E80
    // 0x60003348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E80(rdram, ctx);
        goto after_14;
    // 0x60003348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x6000334C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003350: jal         0x60000E80
    // 0x60003354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world1_E80(rdram, ctx);
        goto after_15;
    // 0x60003354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x60003358: jal         0x600009AC
    // 0x6000335C: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_16;
    // 0x6000335C: nop

    after_16:
    // 0x60003360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003364: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60003368: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x6000336C: jr          $ra
    // 0x60003370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world1_3374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000337C: jal         0x60000BB0
    // 0x60003380: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60003380: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_0:
    // 0x60003384: bne         $v0, $zero, L_600033A0
    if (ctx->r2 != 0) {
        // 0x60003388: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600033A0;
    }
    // 0x60003388: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000338C: addiu       $a0, $a0, 0x3258
    ctx->r4 = ADD32(ctx->r4, 0X3258);
    // 0x60003390: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003398: jal         0x60000994
    // 0x6000339C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x6000339C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_600033A0:
    // 0x600033A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600033A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600033A8: jr          $ra
    // 0x600033AC: nop

    return;
    // 0x600033AC: nop

;}
RECOMP_FUNC void ovl_stage_world1_33B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600033B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033B8: lui         $a1, 0x44CE
    ctx->r5 = S32(0X44CE << 16);
    // 0x600033BC: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x600033C0: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    // 0x600033C4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x600033C8: jal         0x60000274
    // 0x600033CC: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    ovl_stage_world1_274(rdram, ctx);
        goto after_0;
    // 0x600033CC: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    after_0:
    // 0x600033D0: jal         0x600009AC
    // 0x600033D4: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_1;
    // 0x600033D4: nop

    after_1:
    // 0x600033D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600033DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600033E0: jr          $ra
    // 0x600033E4: nop

    return;
    // 0x600033E4: nop

;}
RECOMP_FUNC void ovl_stage_world1_33E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600033EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033F0: jal         0x60000BB0
    // 0x600033F4: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x600033F4: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_0:
    // 0x600033F8: bne         $v0, $zero, L_6000348C
    if (ctx->r2 != 0) {
        // 0x600033FC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000348C;
    }
    // 0x600033FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003400: addiu       $a0, $a0, 0x33B0
    ctx->r4 = ADD32(ctx->r4, 0X33B0);
    // 0x60003404: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000340C: jal         0x60000994
    // 0x60003410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x60003410: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003414: jal         0x60000E74
    // 0x60003418: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_2;
    // 0x60003418: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x6000341C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003420: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003424: jal         0x600006C4
    // 0x60003428: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x60003428: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x6000342C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x60003430: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003434: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x60003438: jal         0x60000E74
    // 0x6000343C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_4;
    // 0x6000343C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_4:
    // 0x60003440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003444: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003448: jal         0x600006C4
    // 0x6000344C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_5;
    // 0x6000344C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x60003450: jal         0x60000E74
    // 0x60003454: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_6;
    // 0x60003454: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x60003458: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000345C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003460: jal         0x600006C4
    // 0x60003464: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_7;
    // 0x60003464: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60003468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x6000346C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003470: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x60003474: jal         0x60000E74
    // 0x60003478: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_8;
    // 0x60003478: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_8:
    // 0x6000347C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003480: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003484: jal         0x600006C4
    // 0x60003488: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_9;
    // 0x60003488: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
L_6000348C:
    // 0x6000348C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003490: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003494: jr          $ra
    // 0x60003498: nop

    return;
    // 0x60003498: nop

;}
RECOMP_FUNC void ovl_stage_world1_349C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000349C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600034A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600034A4: jal         0x60000C1C
    // 0x600034A8: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600034A8: nop

    after_0:
    // 0x600034AC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600034B0: nop

    // 0x600034B4: bne         $t6, $zero, L_60003508
    if (ctx->r14 != 0) {
        // 0x600034B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003508;
    }
    // 0x600034B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034BC: jal         0x60000BB0
    // 0x600034C0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x600034C0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_1:
    // 0x600034C4: beq         $v0, $zero, L_60003508
    if (ctx->r2 == 0) {
        // 0x600034C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003508;
    }
    // 0x600034C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034CC: jal         0x60000BB0
    // 0x600034D0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x600034D0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
    // 0x600034D4: bne         $v0, $zero, L_60003508
    if (ctx->r2 != 0) {
        // 0x600034D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003508;
    }
    // 0x600034D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034DC: jal         0x60000BB0
    // 0x600034E0: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_3;
    // 0x600034E0: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_3:
    // 0x600034E4: beq         $v0, $zero, L_60003508
    if (ctx->r2 == 0) {
        // 0x600034E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003508;
    }
    // 0x600034E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034EC: jal         0x60000BB0
    // 0x600034F0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_4;
    // 0x600034F0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_4:
    // 0x600034F4: bne         $v0, $zero, L_60003508
    if (ctx->r2 != 0) {
        // 0x600034F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003508;
    }
    // 0x600034F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034FC: jal         0x60000B98
    // 0x60003500: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_5;
    // 0x60003500: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_5:
    // 0x60003504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003508:
    // 0x60003508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000350C: jr          $ra
    // 0x60003510: nop

    return;
    // 0x60003510: nop

;}
