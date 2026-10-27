#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world7_7F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F4C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43007F50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007F54: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43007F58: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x43007F5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007F60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43007F64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43007F68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007F6C: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43007F70: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x43007F74: blez        $t6, L_43007FD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43007F78: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007FD0;
    }
    // 0x43007F78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007F80: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x43007F84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x43007F88: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43007F8C:
    // 0x43007F8C: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43007F90: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43007F94: jal         0x430006C4
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43007F9C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43007FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x43007FA4: bne         $t7, $s3, L_43007FBC
    if (ctx->r15 != ctx->r19) {
        // 0x43007FA8: nop
    
            goto L_43007FBC;
    }
    // 0x43007FA8: nop

    // 0x43007FAC: bne         $t8, $s4, L_43007FBC
    if (ctx->r24 != ctx->r20) {
        // 0x43007FB0: nop
    
            goto L_43007FBC;
    }
    // 0x43007FB0: nop

    // 0x43007FB4: b           L_43007FD4
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007FD4;
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007FBC:
    // 0x43007FBC: lw          $t9, 0x22C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X22C);
    // 0x43007FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007FC4: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43007FC8: bne         $at, $zero, L_43007F8C
    if (ctx->r1 != 0) {
        // 0x43007FCC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43007F8C;
    }
    // 0x43007FCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43007FD0:
    // 0x43007FD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43007FD4:
    // 0x43007FD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007FD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007FDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007FE0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007FE4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007FE8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43007FEC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43007FF0: jr          $ra
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world7_7FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007FFC: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x43008000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008004: beq         $at, $zero, L_43008120
    if (ctx->r1 == 0) {
        // 0x43008008: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43008120;
    }
    // 0x43008008: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300800C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43008010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008014: addu        $at, $at, $t6
    gpr jr_addend_43008020 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008018: lw          $t6, -0x6068($at)
    ctx->r14 = ADD32(ctx->r1, -0X6068);
    // 0x4300801C: nop

    // 0x43008020: jr          $t6
    // 0x43008024: nop

    switch (jr_addend_43008020 >> 2) {
        case 0: goto L_43008120; break;
        case 1: goto L_43008028; break;
        case 2: goto L_4300804C; break;
        case 3: goto L_43008070; break;
        case 4: goto L_43008094; break;
        case 5: goto L_430080B8; break;
        case 6: goto L_430080DC; break;
        case 7: goto L_430080DC; break;
        case 8: goto L_430080DC; break;
        case 9: goto L_430080F8; break;
        case 10: goto L_43008120; break;
        case 11: goto L_43008100; break;
        default: switch_error(__func__, 0x43008020, 0x43009F98);
    }
    // 0x43008024: nop

L_43008028:
    // 0x43008028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300802C: jal         0x430068E8
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_0;
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43008034: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300803C: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008044: b           L_43008120
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4300804C:
    // 0x4300804C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008050: jal         0x430068E8
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_1;
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43008058: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4300805C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008060: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008068: b           L_43008120
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008070:
    // 0x43008070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008074: jal         0x430068E8
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_2;
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x4300807C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008084: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300808C: b           L_43008120
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008094:
    // 0x43008094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008098: jal         0x430068E8
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_3;
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x430080A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080A8: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080B0: b           L_43008120
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080B8:
    // 0x430080B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430080BC: jal         0x430068E8
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_4;
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x430080C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080CC: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080D4: b           L_43008120
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080DC:
    // 0x430080DC: jal         0x43007F4C
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_7F4C(rdram, ctx);
        goto after_5;
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_5:
    // 0x430080E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080E8: beq         $v0, $zero, L_43008124
    if (ctx->r2 == 0) {
        // 0x430080EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080F0: b           L_43008120
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080F8:
    // 0x430080F8: b           L_43008120
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008100:
    // 0x43008100: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008104: jal         0x43006908
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_6908(rdram, ctx);
        goto after_6;
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_6:
    // 0x4300810C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008114: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300811C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008120:
    // 0x43008120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008124:
    // 0x43008124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008128: jr          $ra
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_8130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300813C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x43008140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008144: bne         $v0, $at, L_43008168
    if (ctx->r2 != ctx->r1) {
        // 0x43008148: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_43008168;
    }
    // 0x43008148: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300814C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x43008150: jal         0x43005078
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_0;
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x43008158: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4300815C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43008160: b           L_43008190
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
        goto L_43008190;
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
L_43008168:
    // 0x43008168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300816C: bne         $v0, $at, L_43008190
    if (ctx->r2 != ctx->r1) {
        // 0x43008170: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_43008190;
    }
    // 0x43008170: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43008174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008178: jal         0x43005078
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_1;
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43008180: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43008184: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43008188: nop

    // 0x4300818C: sw          $a2, 0x1DC($t7)
    MEM_W(0X1DC, ctx->r15) = ctx->r6;
L_43008190:
    // 0x43008190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008198: jr          $ra
    // 0x4300819C: nop

    return;
    // 0x4300819C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430081A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430081A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430081A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430081AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430081B0: beq         $a1, $at, L_4300820C
    if (ctx->r5 == ctx->r1) {
        // 0x430081B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4300820C;
    }
    // 0x430081B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430081B8: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x430081BC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x430081C0: nop

    // 0x430081C4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x430081C8: bne         $at, $zero, L_43008210
    if (ctx->r1 != 0) {
        // 0x430081CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081D0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x430081D4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x430081D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430081DC: jal         0x43007FF8
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_enemy_world7_7FF8(rdram, ctx);
        goto after_0;
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x430081E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430081E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430081EC: beq         $v0, $zero, L_43008210
    if (ctx->r2 == 0) {
        // 0x430081F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430081F8: jal         0x43008130
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world7_8130(rdram, ctx);
        goto after_1;
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x43008200: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43008204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43008208: sw          $zero, 0x1D4($t8)
    MEM_W(0X1D4, ctx->r24) = 0;
L_4300820C:
    // 0x4300820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008210:
    // 0x43008210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008214: jr          $ra
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_821C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300821C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008224: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43008228: jal         0x430047A0
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world7_47A0(rdram, ctx);
        goto after_0;
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x43008230: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008234: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008238: jal         0x430047A0
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_world7_47A0(rdram, ctx);
        goto after_1;
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43008240: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008244: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008248: beq         $v1, $a1, L_43008268
    if (ctx->r3 == ctx->r5) {
        // 0x4300824C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008268;
    }
    // 0x4300824C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43008250: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43008254: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008258: bne         $t6, $at, L_43008268
    if (ctx->r14 != ctx->r1) {
        // 0x4300825C: nop
    
            goto L_43008268;
    }
    // 0x4300825C: nop

    // 0x43008260: b           L_43008284
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_43008284;
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_43008268:
    // 0x43008268: beq         $v0, $a1, L_43008288
    if (ctx->r2 == ctx->r5) {
        // 0x4300826C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300826C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008270: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43008274: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008278: bne         $t7, $at, L_43008288
    if (ctx->r15 != ctx->r1) {
        // 0x4300827C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300827C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43008284:
    // 0x43008284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008288:
    // 0x43008288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300828C: jr          $ra
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008294: beq         $a1, $zero, L_430082B0
    if (ctx->r5 == 0) {
        // 0x43008298: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_430082B0;
    }
    // 0x43008298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4300829C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x430082A0: nop

    // 0x430082A4: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x430082A8: bltz        $t7, L_430082D4
    if (SIGNED(ctx->r15) < 0) {
        // 0x430082AC: nop
    
            goto L_430082D4;
    }
    // 0x430082AC: nop

L_430082B0:
    // 0x430082B0: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430082B4: nop

    // 0x430082B8: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x430082BC: bne         $t8, $zero, L_430082D4
    if (ctx->r24 != 0) {
        // 0x430082C0: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430082D4;
    }
    // 0x430082C0: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x430082C4: bne         $t9, $zero, L_430082D4
    if (ctx->r25 != 0) {
        // 0x430082C8: sll         $t0, $v0, 9
        ctx->r8 = S32(ctx->r2 << 9);
            goto L_430082D4;
    }
    // 0x430082C8: sll         $t0, $v0, 9
    ctx->r8 = S32(ctx->r2 << 9);
    // 0x430082CC: bgez        $t0, L_430082D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x430082D0: nop
    
            goto L_430082D8;
    }
    // 0x430082D0: nop

L_430082D4:
    // 0x430082D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_430082D8:
    // 0x430082D8: jr          $ra
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_82E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430082E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430082E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430082EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430082F0: jal         0x43008294
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_8294(rdram, ctx);
        goto after_0;
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430082F8: beq         $v0, $zero, L_4300833C
    if (ctx->r2 == 0) {
        // 0x430082FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x430082FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008300: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x43008304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008308: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4300830C: jal         0x430047A0
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    ovl_enemy_world7_47A0(rdram, ctx);
        goto after_1;
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    after_1:
    // 0x43008314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008318: jal         0x430081A0
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world7_81A0(rdram, ctx);
        goto after_2;
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43008320: bne         $v0, $zero, L_4300833C
    if (ctx->r2 != 0) {
        // 0x43008324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x43008324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008328: jal         0x430047A0
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_47A0(rdram, ctx);
        goto after_3;
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x43008330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008334: jal         0x430081A0
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world7_81A0(rdram, ctx);
        goto after_4;
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
L_4300833C:
    // 0x4300833C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008344: jr          $ra
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_834C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300834C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43008350: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43008354: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008358: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_4300837C;
    }
    // 0x43008358: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4300835C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008360: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_4300837C;
    }
    // 0x43008360: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43008364: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008368: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_4300837C;
    }
    // 0x43008368: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4300836C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008370: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4300837C;
    }
    // 0x43008370: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43008374: bne         $v0, $at, L_43008388
    if (ctx->r2 != ctx->r1) {
        // 0x43008378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_43008388;
    }
    // 0x43008378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300837C:
    // 0x4300837C: jr          $ra
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008388:
    // 0x43008388: jr          $ra
    // 0x4300838C: nop

    return;
    // 0x4300838C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_8390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008390: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43008394: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300839C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430083A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430083A4: jal         0x43004880
    // 0x430083A8: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x430083A8: nop

    after_0:
    // 0x430083AC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x430083B0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430083B4: bne         $v1, $at, L_4300840C
    if (ctx->r3 != ctx->r1) {
        // 0x430083B8: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4300840C;
    }
    // 0x430083B8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x430083BC: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x430083C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430083C4: beq         $t6, $at, L_430083E4
    if (ctx->r14 == ctx->r1) {
        // 0x430083C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430083E4;
    }
    // 0x430083C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430083CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430083D0: lw          $a1, 0x64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X64);
    // 0x430083D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430083D8: jal         0x43004FFC
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4FFC(rdram, ctx);
        goto after_1;
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430083E4:
    // 0x430083E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430083E8: jal         0x43009954
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_2;
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x430083F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430083F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430083F8: jal         0x430006C4
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x43008400: b           L_4300855C
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008408: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_4300840C:
    // 0x4300840C: bne         $v1, $at, L_43008514
    if (ctx->r3 != ctx->r1) {
        // 0x43008410: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_43008514;
    }
    // 0x43008410: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x43008414: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43008418: nop

    // 0x4300841C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x43008420: bltz        $t8, L_430084FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x43008424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084FC;
    }
    // 0x43008424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008428: jal         0x4300834C
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_834C(rdram, ctx);
        goto after_4;
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43008430: beq         $v0, $zero, L_430084F8
    if (ctx->r2 == 0) {
        // 0x43008434: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_430084F8;
    }
    // 0x43008434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008438: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300843C: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008440: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x43008444: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008448: addiu       $t2, $t1, -0x6
    ctx->r10 = ADD32(ctx->r9, -0X6);
    // 0x4300844C: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x43008450: beq         $at, $zero, L_430084A0
    if (ctx->r1 == 0) {
        // 0x43008454: sw          $t0, 0x54($s0)
        MEM_W(0X54, ctx->r16) = ctx->r8;
            goto L_430084A0;
    }
    // 0x43008454: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008458: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x4300845C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008460: addu        $at, $at, $t2
    gpr jr_addend_4300846C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x43008464: lw          $t2, -0x6038($at)
    ctx->r10 = ADD32(ctx->r1, -0X6038);
    // 0x43008468: nop

    // 0x4300846C: jr          $t2
    // 0x43008470: nop

    switch (jr_addend_4300846C >> 2) {
        case 0: goto L_43008474; break;
        case 1: goto L_4300847C; break;
        case 2: goto L_43008484; break;
        case 3: goto L_4300848C; break;
        case 4: goto L_43008494; break;
        case 5: goto L_4300849C; break;
        default: switch_error(__func__, 0x4300846C, 0x43009FC8);
    }
    // 0x43008470: nop

L_43008474:
    // 0x43008474: b           L_430084A0
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
        goto L_430084A0;
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
L_4300847C:
    // 0x4300847C: b           L_430084A0
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
        goto L_430084A0;
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_43008484:
    // 0x43008484: b           L_430084A0
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
        goto L_430084A0;
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
L_4300848C:
    // 0x4300848C: b           L_430084A0
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
        goto L_430084A0;
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
L_43008494:
    // 0x43008494: b           L_430084A0
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
        goto L_430084A0;
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
L_4300849C:
    // 0x4300849C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
L_430084A0:
    // 0x430084A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430084A4: beq         $a1, $at, L_430084F8
    if (ctx->r5 == ctx->r1) {
        // 0x430084A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084F8;
    }
    // 0x430084A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430084AC: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x430084B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430084B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084B8: sll         $t3, $v0, 11
    ctx->r11 = S32(ctx->r2 << 11);
    // 0x430084BC: bgez        $t3, L_430084D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x430084C0: sll         $t4, $v0, 10
        ctx->r12 = S32(ctx->r2 << 10);
            goto L_430084D4;
    }
    // 0x430084C0: sll         $t4, $v0, 10
    ctx->r12 = S32(ctx->r2 << 10);
    // 0x430084C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430084C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084CC: b           L_430084E4
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_430084E4;
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_430084D4:
    // 0x430084D4: bgez        $t4, L_430084E4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x430084D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430084E4;
    }
    // 0x430084D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430084DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084E0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_430084E4:
    // 0x430084E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430084E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430084EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430084F0: jal         0x43001F48
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    ovl_enemy_world7_1F48(rdram, ctx);
        goto after_5;
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_5:
L_430084F8:
    // 0x430084F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430084FC:
    // 0x430084FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x43008500: jal         0x43009954
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_6;
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x43008508: b           L_4300855C
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008510: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_43008514:
    // 0x43008514: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300853C;
    }
    // 0x43008518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300851C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x43008520: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008524: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4300853C;
    }
    // 0x43008524: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x43008528: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x4300852C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_4300853C;
    }
    // 0x4300852C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43008530: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008534: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4300853C;
    }
    // 0x43008534: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x43008538: bne         $v1, $at, L_43008550
    if (ctx->r3 != ctx->r1) {
        // 0x4300853C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_43008550;
    }
L_4300853C:
    // 0x4300853C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008540: jal         0x43009954
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_7;
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
    // 0x43008548: b           L_4300855C
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008550:
    // 0x43008550: b           L_4300855C
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4300855C;
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300855C:
    // 0x4300855C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008564: jr          $ra
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world7_856C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300856C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43008570: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008574: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300857C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008580: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43008584: jal         0x430006C4
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x4300858C: bne         $v0, $zero, L_430085F0
    if (ctx->r2 != 0) {
        // 0x43008590: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430085F0;
    }
    // 0x43008590: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008594: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43008598: lwc1        $f4, -0x6020($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6020);
    // 0x4300859C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430085A0: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x430085A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430085A8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x430085AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x430085B0: bc1f        L_430085C4
    if (!c1cs) {
        // 0x430085B4: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_430085C4;
    }
    // 0x430085B4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430085B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430085BC: jal         0x43005078
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_1;
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
L_430085C4:
    // 0x430085C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430085C8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x430085CC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x430085D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x430085D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430085D8: jal         0x430006C4
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x430085E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430085E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430085E8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x430085EC: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
L_430085F0:
    // 0x430085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430085F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430085F8: jr          $ra
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world7_8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008600: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008604: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008608: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300860C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008610: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43008614: jal         0x43004880
    // 0x43008618: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43008618: nop

    after_0:
    // 0x4300861C: lhu         $t6, 0x262($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X262);
    // 0x43008620: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008624: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43008628: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x4300862C: bgez        $t8, L_43008644
    if (SIGNED(ctx->r24) >= 0) {
        // 0x43008630: sh          $t7, 0x262($s0)
        MEM_H(0X262, ctx->r16) = ctx->r15;
            goto L_43008644;
    }
    // 0x43008630: sh          $t7, 0x262($s0)
    MEM_H(0X262, ctx->r16) = ctx->r15;
    // 0x43008634: jal         0x4300856C
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_856C(rdram, ctx);
        goto after_1;
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300863C: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008640: nop

L_43008644:
    // 0x43008644: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x43008648: beq         $t9, $zero, L_43008664
    if (ctx->r25 == 0) {
        // 0x4300864C: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_43008664;
    }
    // 0x4300864C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x43008650: jal         0x43004B88
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4B88(rdram, ctx);
        goto after_2;
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008658: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300865C: nop

    // 0x43008660: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_43008664:
    // 0x43008664: beq         $t0, $zero, L_43008690
    if (ctx->r8 == 0) {
        // 0x43008668: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_43008690;
    }
    // 0x43008668: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x4300866C: jal         0x43008390
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_8390(rdram, ctx);
        goto after_3;
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008674: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x43008678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300867C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43008680: jal         0x43005064
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    ovl_enemy_world7_5064(rdram, ctx);
        goto after_4;
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    after_4:
    // 0x43008688: b           L_430087F8
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008690:
    // 0x43008690: beq         $t3, $zero, L_430086AC
    if (ctx->r11 == 0) {
        // 0x43008694: andi        $t4, $v1, 0x4000
        ctx->r12 = ctx->r3 & 0X4000;
            goto L_430086AC;
    }
    // 0x43008694: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
    // 0x43008698: jal         0x430035F8
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_35F8(rdram, ctx);
        goto after_5;
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430086A0: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x430086A4: nop

    // 0x430086A8: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
L_430086AC:
    // 0x430086AC: beq         $t4, $zero, L_430086BC
    if (ctx->r12 == 0) {
        // 0x430086B0: nop
    
            goto L_430086BC;
    }
    // 0x430086B0: nop

    // 0x430086B4: jal         0x43004B08
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4B08(rdram, ctx);
        goto after_6;
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_430086BC:
    // 0x430086BC: jal         0x430082E0
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_82E0(rdram, ctx);
        goto after_7;
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430086C4: jal         0x43008390
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_8390(rdram, ctx);
        goto after_8;
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430086CC: bne         $v0, $zero, L_430087F8
    if (ctx->r2 != 0) {
        // 0x430086D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x430086D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430086D4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x430086D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430086DC: beq         $v0, $zero, L_43008708
    if (ctx->r2 == 0) {
        // 0x430086E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43008708;
    }
    // 0x430086E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430086E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430086E8: beq         $v0, $at, L_43008718
    if (ctx->r2 == ctx->r1) {
        // 0x430086EC: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_43008718;
    }
    // 0x430086EC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x430086F0: beq         $v0, $a0, L_430087CC
    if (ctx->r2 == ctx->r4) {
        // 0x430086F4: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_430087CC;
    }
    // 0x430086F4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430086F8: beq         $v1, $at, L_430087CC
    if (ctx->r3 == ctx->r1) {
        // 0x430086FC: nop
    
            goto L_430087CC;
    }
    // 0x430086FC: nop

    // 0x43008700: b           L_430087F8
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008708:
    // 0x43008708: jal         0x43005078
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_9;
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008710: b           L_430087F8
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008718:
    // 0x43008718: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300871C: nop

    // 0x43008720: andi        $t5, $v1, 0x1000
    ctx->r13 = ctx->r3 & 0X1000;
    // 0x43008724: bne         $t5, $zero, L_430087F4
    if (ctx->r13 != 0) {
        // 0x43008728: andi        $t6, $v1, 0x8
        ctx->r14 = ctx->r3 & 0X8;
            goto L_430087F4;
    }
    // 0x43008728: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x4300872C: bne         $t6, $zero, L_430087F8
    if (ctx->r14 != 0) {
        // 0x43008730: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x43008730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008734: jal         0x43007C80
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_7C80(rdram, ctx);
        goto after_10;
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4300873C: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43008740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008744: jal         0x430048A4
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_enemy_world7_48A4(rdram, ctx);
        goto after_11;
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_11:
    // 0x4300874C: bne         $v0, $zero, L_430087F4
    if (ctx->r2 != 0) {
        // 0x43008750: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430087F4;
    }
    // 0x43008750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008754: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x43008758: nop

    // 0x4300875C: sra         $t7, $v0, 5
    ctx->r15 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43008760: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x43008764: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x43008768: bne         $at, $zero, L_43008778
    if (ctx->r1 != 0) {
        // 0x4300876C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_43008778;
    }
    // 0x4300876C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x43008770: b           L_4300878C
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
        goto L_4300878C;
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
L_43008778:
    // 0x43008778: bgez        $v0, L_43008788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300877C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43008788;
    }
    // 0x4300877C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008780: b           L_43008788
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43008788;
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43008788:
    // 0x43008788: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_4300878C:
    // 0x4300878C: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43008790: sllv        $t0, $t9, $v1
    ctx->r8 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x43008794: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x43008798: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4300879C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x430087A0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x430087A4: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x430087A8: sw          $t4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r12;
    // 0x430087AC: jal         0x430077E4
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_77E4(rdram, ctx);
        goto after_12;
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430087B4: lw          $t5, 0x54($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X54);
    // 0x430087B8: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x430087BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430087C0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x430087C4: b           L_430087F4
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
        goto L_430087F4;
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_430087CC:
    // 0x430087CC: bne         $a0, $v0, L_430087E0
    if (ctx->r4 != ctx->r2) {
        // 0x430087D0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_430087E0;
    }
    // 0x430087D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430087D4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x430087D8: b           L_430087E8
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_430087E8;
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_430087E0:
    // 0x430087E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x430087E4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_430087E8:
    // 0x430087E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430087EC: jal         0x43009954
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_13;
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_13:
L_430087F4:
    // 0x430087F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430087F8:
    // 0x430087F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430087FC: jr          $ra
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world7_8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300880C: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x43008810: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x43008818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300881C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43008820: lwc1        $f4, 0x220($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008824: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x43008828: addiu       $t9, $t9, -0x5D50
    ctx->r25 = ADD32(ctx->r25, -0X5D50);
    // 0x4300882C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x43008830: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43008834: lwc1        $f8, 0x220($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4300883C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43008840: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008844: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43008848: bc1t        L_430088A0
    if (c1cs) {
        // 0x4300884C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430088A0;
    }
    // 0x4300884C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008850: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008854: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x43008858: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x4300885C: jal         0x430006C4
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43008864: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4300886C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x43008870: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x43008874: lwc1        $f16, 0x228($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X228);
    // 0x43008878: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x4300887C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43008880: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x43008884: lwc1        $f18, 0x224($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X224);
    // 0x43008888: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4300888C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008890: jal         0x43005218
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x43008898: b           L_430088B0
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430088B0;
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088A0:
    // 0x430088A0: lwc1        $f4, -0x601C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X601C);
    // 0x430088A4: nop

    // 0x430088A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430088AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088B0:
    // 0x430088B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430088B4: jr          $ra
    // 0x430088B8: nop

    return;
    // 0x430088B8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_88BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430088C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430088C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430088C8: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x430088CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430088D0: beq         $v0, $t6, L_43008974
    if (ctx->r2 == ctx->r14) {
        // 0x430088D4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008974;
    }
    // 0x430088D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430088D8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x430088DC: nop

    // 0x430088E0: beq         $v0, $t7, L_43008978
    if (ctx->r2 == ctx->r15) {
        // 0x430088E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x430088E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430088E8: jal         0x43008804
    // 0x430088EC: nop

    ovl_enemy_world7_8804(rdram, ctx);
        goto after_0;
    // 0x430088EC: nop

    after_0:
    // 0x430088F0: jal         0x43003A60
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_3A60(rdram, ctx);
        goto after_1;
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430088F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430088FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43008900: jal         0x43009954
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_2;
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x43008908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x4300890C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008910: beq         $v0, $at, L_4300892C
    if (ctx->r2 == ctx->r1) {
        // 0x43008914: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300892C;
    }
    // 0x43008914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008918: jal         0x43003880
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_3880(rdram, ctx);
        goto after_3;
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008920: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008924: nop

    // 0x43008928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300892C:
    // 0x4300892C: beq         $v0, $at, L_43008948
    if (ctx->r2 == ctx->r1) {
        // 0x43008930: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43008948;
    }
    // 0x43008930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008934: jal         0x43008600
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_8600(rdram, ctx);
        goto after_4;
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300893C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008940: nop

    // 0x43008944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43008948:
    // 0x43008948: beq         $v0, $at, L_43008958
    if (ctx->r2 == ctx->r1) {
        // 0x4300894C: nop
    
            goto L_43008958;
    }
    // 0x4300894C: nop

    // 0x43008950: jal         0x43002E4C
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_2E4C(rdram, ctx);
        goto after_5;
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008958:
    // 0x43008958: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300895C: nop

    // 0x43008960: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43008964: beq         $t9, $zero, L_43008978
    if (ctx->r25 == 0) {
        // 0x43008968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x43008968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300896C: jal         0x43002D7C
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_2D7C(rdram, ctx);
        goto after_6;
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43008974:
    // 0x43008974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008978:
    // 0x43008978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300897C: jr          $ra
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x5D5C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D5C);
    // 0x43008990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008994: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x43008998: beq         $at, $zero, L_430089DC
    if (ctx->r1 == 0) {
        // 0x4300899C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_430089DC;
    }
    // 0x4300899C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089A0:
    // 0x430089A0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430089A4: nop

    // 0x430089A8: beq         $a1, $t6, L_430089C8
    if (ctx->r5 == ctx->r14) {
        // 0x430089AC: nop
    
            goto L_430089C8;
    }
    // 0x430089AC: nop

    // 0x430089B0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x430089B4: nop

    // 0x430089B8: beq         $a1, $t7, L_430089C8
    if (ctx->r5 == ctx->r15) {
        // 0x430089BC: nop
    
            goto L_430089C8;
    }
    // 0x430089BC: nop

    // 0x430089C0: jr          $ra
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_430089C8:
    // 0x430089C8: addiu       $v0, $v0, 0x268
    ctx->r2 = ADD32(ctx->r2, 0X268);
    // 0x430089CC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x430089D0: bne         $at, $zero, L_430089A0
    if (ctx->r1 != 0) {
        // 0x430089D4: nop
    
            goto L_430089A0;
    }
    // 0x430089D4: nop

    // 0x430089D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089DC:
    // 0x430089DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430089E0: jr          $ra
    // 0x430089E4: nop

    return;
    // 0x430089E4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_89E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430089EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430089F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430089F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430089F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430089FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008A04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008A08: jal         0x43005250
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x5D70($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X5D70);
    // 0x43008A18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x43008A1C: blez        $s4, L_43008AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43008A20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008AE0;
    }
    // 0x43008A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008A24: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x43008A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x43008A2C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_43008A30:
    // 0x43008A30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43008A34: jal         0x43008984
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_enemy_world7_8984(rdram, ctx);
        goto after_1;
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43008A3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43008A44: beq         $t6, $s2, L_43008AE0
    if (ctx->r14 == ctx->r18) {
        // 0x43008A48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_43008AE0;
    }
    // 0x43008A48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43008A4C: jal         0x43005218
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_2;
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x43008A54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43008A58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008A5C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x43008A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008A64: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x43008A68: beq         $t8, $zero, L_43008A80
    if (ctx->r24 == 0) {
        // 0x43008A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_43008A80;
    }
    // 0x43008A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x43008A70: jal         0x43005218
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_3;
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x43008A78: b           L_43008AD8
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_43008AD8;
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008A80:
    // 0x43008A80: beq         $t9, $zero, L_43008AC8
    if (ctx->r25 == 0) {
        // 0x43008A84: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008A84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A88: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x43008A8C: nop

    // 0x43008A90: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x43008A94: nop

    // 0x43008A98: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43008A9C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    // 0x43008AA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x43008AA4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008AA8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x43008AAC: nop

    // 0x43008AB0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x43008AB4: bne         $t5, $zero, L_43008AC8
    if (ctx->r13 != 0) {
        // 0x43008AB8: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008AB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008ABC: jal         0x430088BC
    // 0x43008AC0: nop

    ovl_enemy_world7_88BC(rdram, ctx);
        goto after_4;
    // 0x43008AC0: nop

    after_4:
    // 0x43008AC4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_43008AC8:
    // 0x43008AC8: nop

    // 0x43008ACC: addiu       $t7, $t6, 0x268
    ctx->r15 = ADD32(ctx->r14, 0X268);
    // 0x43008AD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x43008AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008AD8:
    // 0x43008AD8: bne         $s0, $s4, L_43008A30
    if (ctx->r16 != ctx->r20) {
        // 0x43008ADC: nop
    
            goto L_43008A30;
    }
    // 0x43008ADC: nop

L_43008AE0:
    // 0x43008AE0: bne         $s4, $zero, L_43008AF4
    if (ctx->r20 != 0) {
        // 0x43008AE4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_43008AF4;
    }
    // 0x43008AE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AE8: jal         0x43002C70
    // 0x43008AEC: nop

    ovl_enemy_world7_2C70(rdram, ctx);
        goto after_5;
    // 0x43008AEC: nop

    after_5:
    // 0x43008AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_43008AF4:
    // 0x43008AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43008B04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43008B08: jr          $ra
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world7_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_world7_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_world7_85C(rdram, ctx);
        goto after_1;
    // 0x43008B24: nop

    after_1:
    // 0x43008B28: b           L_43008B18
    // 0x43008B2C: nop

        goto L_43008B18;
    // 0x43008B2C: nop

    // 0x43008B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B38: jr          $ra
    // 0x43008B3C: nop

    return;
    // 0x43008B3C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008B48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43008B4C: nop

    // 0x43008B50: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008B54: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x43008B58: beq         $at, $zero, L_43008C50
    if (ctx->r1 == 0) {
        // 0x43008B5C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43008C50;
    }
    // 0x43008B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43008B60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008B64: addu        $at, $at, $t7
    gpr jr_addend_43008B70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008B68: lw          $t7, -0x6018($at)
    ctx->r15 = ADD32(ctx->r1, -0X6018);
    // 0x43008B6C: nop

    // 0x43008B70: jr          $t7
    // 0x43008B74: nop

    switch (jr_addend_43008B70 >> 2) {
        case 0: goto L_43008B78; break;
        case 1: goto L_43008C50; break;
        case 2: goto L_43008C50; break;
        case 3: goto L_43008BC8; break;
        case 4: goto L_43008C50; break;
        case 5: goto L_43008B98; break;
        case 6: goto L_43008B88; break;
        case 7: goto L_43008BA8; break;
        case 8: goto L_43008C50; break;
        case 9: goto L_43008C50; break;
        case 10: goto L_43008BD8; break;
        case 11: goto L_43008C48; break;
        case 12: goto L_43008C50; break;
        case 13: goto L_43008C50; break;
        case 14: goto L_43008C50; break;
        case 15: goto L_43008C50; break;
        case 16: goto L_43008C18; break;
        case 17: goto L_43008C08; break;
        case 18: goto L_43008C50; break;
        case 19: goto L_43008C38; break;
        case 20: goto L_43008BB8; break;
        case 21: goto L_43008C28; break;
        case 22: goto L_43008BF8; break;
        case 23: goto L_43008BE8; break;
        default: switch_error(__func__, 0x43008B70, 0x43009FE8);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_world7_528C(rdram, ctx);
        goto after_0;
    // 0x43008B7C: nop

    after_0:
    // 0x43008B80: b           L_43008C54
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B88:
    // 0x43008B88: jal         0x43005348
    // 0x43008B8C: nop

    ovl_enemy_world7_5348(rdram, ctx);
        goto after_1;
    // 0x43008B8C: nop

    after_1:
    // 0x43008B90: b           L_43008C54
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B98:
    // 0x43008B98: jal         0x430053BC
    // 0x43008B9C: nop

    ovl_enemy_world7_53BC(rdram, ctx);
        goto after_2;
    // 0x43008B9C: nop

    after_2:
    // 0x43008BA0: b           L_43008C54
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BA8:
    // 0x43008BA8: jal         0x43005400
    // 0x43008BAC: nop

    ovl_enemy_world7_5400(rdram, ctx);
        goto after_3;
    // 0x43008BAC: nop

    after_3:
    // 0x43008BB0: b           L_43008C54
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB8:
    // 0x43008BB8: jal         0x43005424
    // 0x43008BBC: nop

    ovl_enemy_world7_5424(rdram, ctx);
        goto after_4;
    // 0x43008BBC: nop

    after_4:
    // 0x43008BC0: b           L_43008C54
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC8:
    // 0x43008BC8: jal         0x4300547C
    // 0x43008BCC: nop

    ovl_enemy_world7_547C(rdram, ctx);
        goto after_5;
    // 0x43008BCC: nop

    after_5:
    // 0x43008BD0: b           L_43008C54
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BD8:
    // 0x43008BD8: jal         0x43005924
    // 0x43008BDC: nop

    ovl_enemy_world7_5924(rdram, ctx);
        goto after_6;
    // 0x43008BDC: nop

    after_6:
    // 0x43008BE0: b           L_43008C54
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BE8:
    // 0x43008BE8: jal         0x430062D8
    // 0x43008BEC: nop

    ovl_enemy_world7_62D8(rdram, ctx);
        goto after_7;
    // 0x43008BEC: nop

    after_7:
    // 0x43008BF0: b           L_43008C54
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BF8:
    // 0x43008BF8: jal         0x43006368
    // 0x43008BFC: nop

    ovl_enemy_world7_6368(rdram, ctx);
        goto after_8;
    // 0x43008BFC: nop

    after_8:
    // 0x43008C00: b           L_43008C54
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C08:
    // 0x43008C08: jal         0x430063CC
    // 0x43008C0C: nop

    ovl_enemy_world7_63CC(rdram, ctx);
        goto after_9;
    // 0x43008C0C: nop

    after_9:
    // 0x43008C10: b           L_43008C54
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C18:
    // 0x43008C18: jal         0x43006448
    // 0x43008C1C: nop

    ovl_enemy_world7_6448(rdram, ctx);
        goto after_10;
    // 0x43008C1C: nop

    after_10:
    // 0x43008C20: b           L_43008C54
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C28:
    // 0x43008C28: jal         0x43006488
    // 0x43008C2C: nop

    ovl_enemy_world7_6488(rdram, ctx);
        goto after_11;
    // 0x43008C2C: nop

    after_11:
    // 0x43008C30: b           L_43008C54
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C38:
    // 0x43008C38: jal         0x430064EC
    // 0x43008C3C: nop

    ovl_enemy_world7_64EC(rdram, ctx);
        goto after_12;
    // 0x43008C3C: nop

    after_12:
    // 0x43008C40: b           L_43008C54
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C48:
    // 0x43008C48: jal         0x430066D0
    // 0x43008C4C: nop

    ovl_enemy_world7_66D0(rdram, ctx);
        goto after_13;
    // 0x43008C4C: nop

    after_13:
L_43008C50:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C54:
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008C64: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008C6C: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008C78: beq         $at, $zero, L_43008E9C
    if (ctx->r1 == 0) {
        // 0x43008C7C: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43008E9C;
    }
    // 0x43008C7C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43008C80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008C84: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008C88: addu        $at, $at, $t6
    gpr jr_addend_43008C94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008C8C: lw          $t6, -0x5FB0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5FB0);
    // 0x43008C90: nop

    // 0x43008C94: jr          $t6
    // 0x43008C98: nop

    switch (jr_addend_43008C94 >> 2) {
        case 0: goto L_43008D34; break;
        case 1: goto L_43008D4C; break;
        case 2: goto L_43008E9C; break;
        case 3: goto L_43008E9C; break;
        case 4: goto L_43008E9C; break;
        case 5: goto L_43008E9C; break;
        case 6: goto L_43008E9C; break;
        case 7: goto L_43008E9C; break;
        case 8: goto L_43008E9C; break;
        case 9: goto L_43008E9C; break;
        case 10: goto L_43008E9C; break;
        case 11: goto L_43008E9C; break;
        case 12: goto L_43008E9C; break;
        case 13: goto L_43008C9C; break;
        case 14: goto L_43008E30; break;
        case 15: goto L_43008E9C; break;
        case 16: goto L_43008E9C; break;
        case 17: goto L_43008E9C; break;
        case 18: goto L_43008CEC; break;
        default: switch_error(__func__, 0x43008C94, 0x4300A050);
    }
    // 0x43008C98: nop

L_43008C9C:
    // 0x43008C9C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008CA0: addiu       $t8, $t8, -0x6440
    ctx->r24 = ADD32(ctx->r24, -0X6440);
    // 0x43008CA4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x43008CA8: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x43008CAC: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008CB0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008CB4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x43008CB8: jal         0x43001428
    // 0x43008CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1428(rdram, ctx);
        goto after_0;
    // 0x43008CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43008CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CC4: jal         0x43004AD8
    // 0x43008CC8: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_1;
    // 0x43008CC8: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    after_1:
    // 0x43008CCC: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008CD0: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x43008CD4: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008CD8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008CDC: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008CE0: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x43008CE4: b           L_43008E9C
    // 0x43008CE8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
        goto L_43008E9C;
    // 0x43008CE8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
L_43008CEC:
    // 0x43008CEC: jal         0x43001F1C
    // 0x43008CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_2;
    // 0x43008CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CF8: jal         0x43002238
    // 0x43008CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_3;
    // 0x43008CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x43008D00: beq         $v0, $zero, L_43008D10
    if (ctx->r2 == 0) {
        // 0x43008D04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D10;
    }
    // 0x43008D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D08: jal         0x43004AD8
    // 0x43008D0C: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_4;
    // 0x43008D0C: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    after_4:
L_43008D10:
    // 0x43008D10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D18: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008D1C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008D20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008D24: jal         0x430010F0
    // 0x43008D28: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_5;
    // 0x43008D28: nop

    after_5:
    // 0x43008D2C: b           L_43008EA0
    // 0x43008D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008EA0;
    // 0x43008D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D34:
    // 0x43008D34: jal         0x430014D8
    // 0x43008D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_6;
    // 0x43008D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43008D3C: jal         0x43004E48
    // 0x43008D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4E48(rdram, ctx);
        goto after_7;
    // 0x43008D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43008D44: b           L_43008EA0
    // 0x43008D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008EA0;
    // 0x43008D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D4C:
    // 0x43008D4C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D50: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x43008D54: beq         $v1, $zero, L_43008D80
    if (ctx->r3 == 0) {
        // 0x43008D58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D80;
    }
    // 0x43008D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D5C: beq         $v1, $at, L_43008DA4
    if (ctx->r3 == ctx->r1) {
        // 0x43008D60: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43008DA4;
    }
    // 0x43008D60: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43008D64: beq         $v1, $at, L_43008DCC
    if (ctx->r3 == ctx->r1) {
        // 0x43008D68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008DCC;
    }
    // 0x43008D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D6C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x43008D70: beq         $v1, $at, L_43008DE4
    if (ctx->r3 == ctx->r1) {
        // 0x43008D74: nop
    
            goto L_43008DE4;
    }
    // 0x43008D74: nop

    // 0x43008D78: b           L_43008E0C
    // 0x43008D7C: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43008E0C;
    // 0x43008D7C: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43008D80:
    // 0x43008D80: jal         0x43002238
    // 0x43008D84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_8;
    // 0x43008D84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x43008D88: beq         $v0, $zero, L_43008D98
    if (ctx->r2 == 0) {
        // 0x43008D8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D98;
    }
    // 0x43008D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D90: jal         0x43004AD8
    // 0x43008D94: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_9;
    // 0x43008D94: addiu       $a1, $zero, 0x526
    ctx->r5 = ADD32(0, 0X526);
    after_9:
L_43008D98:
    // 0x43008D98: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D9C: b           L_43008E0C
    // 0x43008DA0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43008E0C;
    // 0x43008DA0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43008DA4:
    // 0x43008DA4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43008DA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43008DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DB0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008DB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008DB8: jal         0x430010F0
    // 0x43008DBC: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_10;
    // 0x43008DBC: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_10:
    // 0x43008DC0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008DC4: b           L_43008E0C
    // 0x43008DC8: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43008E0C;
    // 0x43008DC8: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43008DCC:
    // 0x43008DCC: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    // 0x43008DD0: jal         0x43001630
    // 0x43008DD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world7_1630(rdram, ctx);
        goto after_11;
    // 0x43008DD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x43008DD8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008DDC: b           L_43008E0C
    // 0x43008DE0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43008E0C;
    // 0x43008DE0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43008DE4:
    // 0x43008DE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008DF0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008DF4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008DF8: jal         0x430010F0
    // 0x43008DFC: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_12;
    // 0x43008DFC: nop

    after_12:
    // 0x43008E00: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008E04: nop

    // 0x43008E08: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43008E0C:
    // 0x43008E0C: bne         $at, $zero, L_43008EA0
    if (ctx->r1 != 0) {
        // 0x43008E10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008EA0;
    }
    // 0x43008E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E14: jal         0x43004D80
    // 0x43008E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_13;
    // 0x43008E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43008E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E20: jal         0x43005078
    // 0x43008E24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_14;
    // 0x43008E24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x43008E28: b           L_43008EA0
    // 0x43008E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008EA0;
    // 0x43008E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008E30:
    // 0x43008E30: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008E34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008E38: bne         $v1, $at, L_43008E88
    if (ctx->r3 != ctx->r1) {
        // 0x43008E3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E88;
    }
    // 0x43008E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E40: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008E44: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43008E48: bne         $t3, $at, L_43008E54
    if (ctx->r11 != ctx->r1) {
        // 0x43008E4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_43008E54;
    }
    // 0x43008E4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43008E50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_43008E54:
    // 0x43008E54: jal         0x43002238
    // 0x43008E58: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_15;
    // 0x43008E58: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_15:
    // 0x43008E5C: beq         $v0, $zero, L_43008E6C
    if (ctx->r2 == 0) {
        // 0x43008E60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E6C;
    }
    // 0x43008E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E64: jal         0x43004AD8
    // 0x43008E68: addiu       $a1, $zero, 0x527
    ctx->r5 = ADD32(0, 0X527);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_16;
    // 0x43008E68: addiu       $a1, $zero, 0x527
    ctx->r5 = ADD32(0, 0X527);
    after_16:
L_43008E6C:
    // 0x43008E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008E74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008E78: jal         0x43001DE0
    // 0x43008E7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_17;
    // 0x43008E7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x43008E80: b           L_43008EA0
    // 0x43008E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008EA0;
    // 0x43008E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008E88:
    // 0x43008E88: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43008E8C: bne         $at, $zero, L_43008E9C
    if (ctx->r1 != 0) {
        // 0x43008E90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E9C;
    }
    // 0x43008E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E94: jal         0x43005078
    // 0x43008E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_18;
    // 0x43008E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
L_43008E9C:
    // 0x43008E9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008EA0:
    // 0x43008EA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008EA4: jr          $ra
    // 0x43008EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008EA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_8EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008EB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43008EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008EB8: beq         $a1, $v1, L_43008F48
    if (ctx->r5 == ctx->r3) {
        // 0x43008EBC: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008F48;
    }
    // 0x43008EBC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008EC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43008EC4: beq         $a1, $at, L_43008F58
    if (ctx->r5 == ctx->r1) {
        // 0x43008EC8: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43008F58;
    }
    // 0x43008EC8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43008ECC: beq         $a1, $at, L_43008EE4
    if (ctx->r5 == ctx->r1) {
        // 0x43008ED0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_43008EE4;
    }
    // 0x43008ED0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x43008ED4: beq         $a1, $at, L_43008FAC
    if (ctx->r5 == ctx->r1) {
        // 0x43008ED8: nop
    
            goto L_43008FAC;
    }
    // 0x43008ED8: nop

    // 0x43008EDC: b           L_43008FE4
    // 0x43008EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EE4:
    // 0x43008EE4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x43008EE8: jal         0x43001428
    // 0x43008EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_1428(rdram, ctx);
        goto after_0;
    // 0x43008EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43008EF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008EF4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x43008EF8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x43008EFC: jal         0x430010F0
    // 0x43008F00: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_1;
    // 0x43008F00: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_1:
    // 0x43008F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008F08: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008F0C: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x43008F10: lw          $t6, 0x1C8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C8);
    // 0x43008F14: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x43008F18: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x43008F1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008F20: sw          $t7, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r15;
    // 0x43008F24: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x43008F28: lwc1        $f6, -0x5F64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5F64);
    // 0x43008F2C: lwc1        $f4, 0x1D0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1D0);
    // 0x43008F30: nop

    // 0x43008F34: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43008F38: jal         0x43001F1C
    // 0x43008F3C: swc1        $f8, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->f8.u32l;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_2;
    // 0x43008F3C: swc1        $f8, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->f8.u32l;
    after_2:
    // 0x43008F40: b           L_43008FE4
    // 0x43008F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F48:
    // 0x43008F48: jal         0x43004E48
    // 0x43008F4C: nop

    ovl_enemy_world7_4E48(rdram, ctx);
        goto after_3;
    // 0x43008F4C: nop

    after_3:
    // 0x43008F50: b           L_43008FE4
    // 0x43008F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F58:
    // 0x43008F58: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x43008F5C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x43008F60: bne         $v0, $zero, L_43008F84
    if (ctx->r2 != 0) {
        // 0x43008F64: nop
    
            goto L_43008F84;
    }
    // 0x43008F64: nop

    // 0x43008F68: lwc1        $f16, 0x1AC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1AC);
    // 0x43008F6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43008F70: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43008F74: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43008F78: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x43008F7C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x43008F80: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
L_43008F84:
    // 0x43008F84: slti        $at, $v0, 0x5A
    ctx->r1 = SIGNED(ctx->r2) < 0X5A ? 1 : 0;
    // 0x43008F88: bne         $at, $zero, L_43008FE4
    if (ctx->r1 != 0) {
        // 0x43008F8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008FE4;
    }
    // 0x43008F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008F90: jal         0x43004D80
    // 0x43008F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_4;
    // 0x43008F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x43008F98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008F9C: jal         0x43005078
    // 0x43008FA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_5;
    // 0x43008FA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x43008FA4: b           L_43008FE4
    // 0x43008FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FAC:
    // 0x43008FAC: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x43008FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008FB4: bne         $v1, $v0, L_43008FD0
    if (ctx->r3 != ctx->r2) {
        // 0x43008FB8: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43008FD0;
    }
    // 0x43008FB8: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43008FBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008FC0: jal         0x43001DE0
    // 0x43008FC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_6;
    // 0x43008FC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x43008FC8: b           L_43008FE4
    // 0x43008FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FD0:
    // 0x43008FD0: bne         $at, $zero, L_43008FE4
    if (ctx->r1 != 0) {
        // 0x43008FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008FE4;
    }
    // 0x43008FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008FD8: jal         0x43005078
    // 0x43008FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_7;
    // 0x43008FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x43008FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FE4:
    // 0x43008FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008FE8: jr          $ra
    // 0x43008FEC: nop

    return;
    // 0x43008FEC: nop

;}
RECOMP_FUNC void ovl_enemy_world7_8FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008FF4: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008FF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008FFC: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43009000: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009008: beq         $at, $zero, L_43009168
    if (ctx->r1 == 0) {
        // 0x4300900C: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43009168;
    }
    // 0x4300900C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43009010: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009014: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009018: addu        $at, $at, $t6
    gpr jr_addend_43009024 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4300901C: lw          $t6, -0x5F60($at)
    ctx->r14 = ADD32(ctx->r1, -0X5F60);
    // 0x43009020: nop

    // 0x43009024: jr          $t6
    // 0x43009028: nop

    switch (jr_addend_43009024 >> 2) {
        case 0: goto L_43009070; break;
        case 1: goto L_43009088; break;
        case 2: goto L_43009168; break;
        case 3: goto L_43009168; break;
        case 4: goto L_43009168; break;
        case 5: goto L_43009168; break;
        case 6: goto L_43009168; break;
        case 7: goto L_43009168; break;
        case 8: goto L_43009168; break;
        case 9: goto L_43009168; break;
        case 10: goto L_43009168; break;
        case 11: goto L_43009168; break;
        case 12: goto L_43009168; break;
        case 13: goto L_4300902C; break;
        case 14: goto L_430090FC; break;
        case 15: goto L_43009168; break;
        case 16: goto L_43009168; break;
        case 17: goto L_43009168; break;
        case 18: goto L_43009054; break;
        default: switch_error(__func__, 0x43009024, 0x4300A0A0);
    }
    // 0x43009028: nop

L_4300902C:
    // 0x4300902C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43009030: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009034: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43009038: addiu       $t8, $t8, -0x6438
    ctx->r24 = ADD32(ctx->r24, -0X6438);
    // 0x4300903C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x43009040: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43009044: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009048: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x4300904C: b           L_43009168
    // 0x43009050: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43009168;
    // 0x43009050: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43009054:
    // 0x43009054: jal         0x43001F1C
    // 0x43009058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x4300905C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009060: jal         0x43002238
    // 0x43009064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_1;
    // 0x43009064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43009068: b           L_4300916C
    // 0x4300906C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300916C;
    // 0x4300906C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009070:
    // 0x43009070: jal         0x430014D8
    // 0x43009074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_2;
    // 0x43009074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43009078: jal         0x43004E48
    // 0x4300907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4E48(rdram, ctx);
        goto after_3;
    // 0x4300907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009080: b           L_4300916C
    // 0x43009084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300916C;
    // 0x43009084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009088:
    // 0x43009088: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300908C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009090: bne         $v0, $zero, L_430090D8
    if (ctx->r2 != 0) {
        // 0x43009094: slti        $at, $v0, 0x1E
        ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
            goto L_430090D8;
    }
    // 0x43009094: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x43009098: jal         0x43002238
    // 0x4300909C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_4;
    // 0x4300909C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x430090A0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x430090A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430090A8: lwc1        $f6, 0x1AC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x430090AC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430090B0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x430090B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090B8: addiu       $a1, $zero, 0x21E
    ctx->r5 = ADD32(0, 0X21E);
    // 0x430090BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430090C0: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x430090C4: jal         0x43001630
    // 0x430090C8: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    ovl_enemy_world7_1630(rdram, ctx);
        goto after_5;
    // 0x430090C8: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x430090CC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430090D0: nop

    // 0x430090D4: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_430090D8:
    // 0x430090D8: bne         $at, $zero, L_4300916C
    if (ctx->r1 != 0) {
        // 0x430090DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300916C;
    }
    // 0x430090DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430090E0: jal         0x43004D80
    // 0x430090E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_6;
    // 0x430090E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x430090E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090EC: jal         0x43005078
    // 0x430090F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_7;
    // 0x430090F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x430090F4: b           L_4300916C
    // 0x430090F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300916C;
    // 0x430090F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430090FC:
    // 0x430090FC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009100: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009104: bne         $v0, $at, L_43009158
    if (ctx->r2 != ctx->r1) {
        // 0x43009108: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009158;
    }
    // 0x43009108: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x4300910C: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009110: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009114: bne         $t1, $at, L_43009130
    if (ctx->r9 != ctx->r1) {
        // 0x43009118: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009130;
    }
    // 0x43009118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300911C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009120: jal         0x43002238
    // 0x43009124: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_8;
    // 0x43009124: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x43009128: b           L_4300913C
    // 0x4300912C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_4300913C;
    // 0x4300912C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009130:
    // 0x43009130: jal         0x43002238
    // 0x43009134: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_9;
    // 0x43009134: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x43009138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4300913C:
    // 0x4300913C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009140: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009144: jal         0x43001DE0
    // 0x43009148: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_10;
    // 0x43009148: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x4300914C: b           L_4300916C
    // 0x43009150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300916C;
    // 0x43009150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009154: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43009158:
    // 0x43009158: bne         $at, $zero, L_43009168
    if (ctx->r1 != 0) {
        // 0x4300915C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009168;
    }
    // 0x4300915C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009160: jal         0x43005078
    // 0x43009164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_11;
    // 0x43009164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_43009168:
    // 0x43009168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300916C:
    // 0x4300916C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009170: jr          $ra
    // 0x43009174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_9178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300917C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009184: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300918C: beq         $at, $zero, L_430095A8
    if (ctx->r1 == 0) {
        // 0x43009190: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_430095A8;
    }
    // 0x43009190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009194: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009198: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300919C: addu        $at, $at, $t6
    gpr jr_addend_430091A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430091A0: lw          $t6, -0x5F14($at)
    ctx->r14 = ADD32(ctx->r1, -0X5F14);
    // 0x430091A4: nop

    // 0x430091A8: jr          $t6
    // 0x430091AC: nop

    switch (jr_addend_430091A8 >> 2) {
        case 0: goto L_43009210; break;
        case 1: goto L_43009278; break;
        case 2: goto L_430095A8; break;
        case 3: goto L_430094D0; break;
        case 4: goto L_430094E4; break;
        case 5: goto L_43009528; break;
        case 6: goto L_430095A8; break;
        case 7: goto L_430095A8; break;
        case 8: goto L_430095A8; break;
        case 9: goto L_430095A8; break;
        case 10: goto L_430095A8; break;
        case 11: goto L_430095A8; break;
        case 12: goto L_430095A8; break;
        case 13: goto L_430091B0; break;
        case 14: goto L_43009544; break;
        case 15: goto L_430095A8; break;
        case 16: goto L_430095A8; break;
        case 17: goto L_430095A8; break;
        case 18: goto L_430091D8; break;
        case 19: goto L_430095A8; break;
        case 20: goto L_430095A8; break;
        case 21: goto L_43009228; break;
        case 22: goto L_430095A8; break;
        case 23: goto L_4300946C; break;
        default: switch_error(__func__, 0x430091A8, 0x4300A0EC);
    }
    // 0x430091AC: nop

L_430091B0:
    // 0x430091B0: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x430091B4: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430091B8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x430091BC: addiu       $t8, $t8, -0x6430
    ctx->r24 = ADD32(ctx->r24, -0X6430);
    // 0x430091C0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x430091C4: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x430091C8: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x430091CC: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x430091D0: b           L_430095A8
    // 0x430091D4: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_430095A8;
    // 0x430091D4: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_430091D8:
    // 0x430091D8: jal         0x43001F1C
    // 0x430091DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x430091DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430091E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091E4: jal         0x43002238
    // 0x430091E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_1;
    // 0x430091E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430091EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430091F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091F4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430091F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x430091FC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009200: jal         0x430010F0
    // 0x43009204: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_2;
    // 0x43009204: nop

    after_2:
    // 0x43009208: b           L_430095AC
    // 0x4300920C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x4300920C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009210:
    // 0x43009210: jal         0x430014D8
    // 0x43009214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_3;
    // 0x43009214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009218: jal         0x43004E48
    // 0x4300921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4E48(rdram, ctx);
        goto after_4;
    // 0x4300921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43009220: b           L_430095AC
    // 0x43009224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009228:
    // 0x43009228: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300922C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009230: beq         $v0, $at, L_43009250
    if (ctx->r2 == ctx->r1) {
        // 0x43009234: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_43009250;
    }
    // 0x43009234: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43009238: beq         $v0, $at, L_43009260
    if (ctx->r2 == ctx->r1) {
        // 0x4300923C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_43009260;
    }
    // 0x4300923C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x43009240: beq         $v0, $at, L_43009270
    if (ctx->r2 == ctx->r1) {
        // 0x43009244: nop
    
            goto L_43009270;
    }
    // 0x43009244: nop

    // 0x43009248: b           L_430095AC
    // 0x4300924C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x4300924C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009250:
    // 0x43009250: jal         0x43001F1C
    // 0x43009254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_5;
    // 0x43009254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43009258: b           L_430095AC
    // 0x4300925C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x4300925C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009260:
    // 0x43009260: jal         0x430014D8
    // 0x43009264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_6;
    // 0x43009264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43009268: b           L_430095AC
    // 0x4300926C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x4300926C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009270:
    // 0x43009270: b           L_430095A8
    // 0x43009274: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
        goto L_430095A8;
    // 0x43009274: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
L_43009278:
    // 0x43009278: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x4300927C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009280: beq         $v0, $at, L_43009298
    if (ctx->r2 == ctx->r1) {
        // 0x43009284: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43009298;
    }
    // 0x43009284: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43009288: beq         $v0, $at, L_430093A0
    if (ctx->r2 == ctx->r1) {
        // 0x4300928C: nop
    
            goto L_430093A0;
    }
    // 0x4300928C: nop

    // 0x43009290: b           L_430095AC
    // 0x43009294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009298:
    // 0x43009298: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300929C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x430092A0: beq         $v1, $zero, L_430092DC
    if (ctx->r3 == 0) {
        // 0x430092A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430092DC;
    }
    // 0x430092A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092A8: beq         $v1, $at, L_430092F4
    if (ctx->r3 == ctx->r1) {
        // 0x430092AC: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_430092F4;
    }
    // 0x430092AC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x430092B0: beq         $v1, $at, L_4300930C
    if (ctx->r3 == ctx->r1) {
        // 0x430092B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300930C;
    }
    // 0x430092B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092B8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x430092BC: beq         $v1, $at, L_4300932C
    if (ctx->r3 == ctx->r1) {
        // 0x430092C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300932C;
    }
    // 0x430092C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092C4: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x430092C8: beq         $v1, $at, L_43009348
    if (ctx->r3 == ctx->r1) {
        // 0x430092CC: nop
    
            goto L_43009348;
    }
    // 0x430092CC: nop

    // 0x430092D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430092D4: b           L_4300937C
    // 0x430092D8: slti        $at, $v1, 0x34
    ctx->r1 = SIGNED(ctx->r3) < 0X34 ? 1 : 0;
        goto L_4300937C;
    // 0x430092D8: slti        $at, $v1, 0x34
    ctx->r1 = SIGNED(ctx->r3) < 0X34 ? 1 : 0;
L_430092DC:
    // 0x430092DC: jal         0x43002238
    // 0x430092E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_7;
    // 0x430092E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x430092E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430092E8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430092EC: b           L_43009378
    // 0x430092F0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_43009378;
    // 0x430092F0: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_430092F4:
    // 0x430092F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430092F8: lwc1        $f4, -0x5EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5EB4);
    // 0x430092FC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009300: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009304: b           L_43009378
    // 0x43009308: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_43009378;
    // 0x43009308: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_4300930C:
    // 0x4300930C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43009310: lui         $a2, 0x42D2
    ctx->r6 = S32(0X42D2 << 16);
    // 0x43009314: jal         0x430010F0
    // 0x43009318: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_8;
    // 0x43009318: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_8:
    // 0x4300931C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009320: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009324: b           L_43009378
    // 0x43009328: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_43009378;
    // 0x43009328: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_4300932C:
    // 0x4300932C: addiu       $a1, $zero, 0x20A
    ctx->r5 = ADD32(0, 0X20A);
    // 0x43009330: jal         0x43001630
    // 0x43009334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world7_1630(rdram, ctx);
        goto after_9;
    // 0x43009334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x43009338: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300933C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009340: b           L_4300937C
    // 0x43009344: slti        $at, $v1, 0x34
    ctx->r1 = SIGNED(ctx->r3) < 0X34 ? 1 : 0;
        goto L_4300937C;
    // 0x43009344: slti        $at, $v1, 0x34
    ctx->r1 = SIGNED(ctx->r3) < 0X34 ? 1 : 0;
L_43009348:
    // 0x43009348: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300934C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009350: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009354: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009358: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300935C: jal         0x430010F0
    // 0x43009360: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_10;
    // 0x43009360: nop

    after_10:
    // 0x43009364: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009368: lwc1        $f6, -0x5EB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5EB0);
    // 0x4300936C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009370: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009374: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
L_43009378:
    // 0x43009378: slti        $at, $v1, 0x34
    ctx->r1 = SIGNED(ctx->r3) < 0X34 ? 1 : 0;
L_4300937C:
    // 0x4300937C: bne         $at, $zero, L_430095A8
    if (ctx->r1 != 0) {
        // 0x43009380: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430095A8;
    }
    // 0x43009380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009384: jal         0x43004D80
    // 0x43009388: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_11;
    // 0x43009388: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    after_11:
    // 0x4300938C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009390: jal         0x43005078
    // 0x43009394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_12;
    // 0x43009394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x43009398: b           L_430095AC
    // 0x4300939C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x4300939C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093A0:
    // 0x430093A0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430093A4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x430093A8: beq         $v1, $zero, L_430093D8
    if (ctx->r3 == 0) {
        // 0x430093AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430093D8;
    }
    // 0x430093AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093B0: beq         $v1, $at, L_430093F0
    if (ctx->r3 == ctx->r1) {
        // 0x430093B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430093F0;
    }
    // 0x430093B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093B8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x430093BC: beq         $v1, $at, L_4300940C
    if (ctx->r3 == ctx->r1) {
        // 0x430093C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300940C;
    }
    // 0x430093C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093C4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x430093C8: beq         $v1, $at, L_43009420
    if (ctx->r3 == ctx->r1) {
        // 0x430093CC: nop
    
            goto L_43009420;
    }
    // 0x430093CC: nop

    // 0x430093D0: b           L_43009448
    // 0x430093D4: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
        goto L_43009448;
    // 0x430093D4: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
L_430093D8:
    // 0x430093D8: jal         0x43002238
    // 0x430093DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_13;
    // 0x430093DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x430093E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430093E4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430093E8: b           L_43009444
    // 0x430093EC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_43009444;
    // 0x430093EC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_430093F0:
    // 0x430093F0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x430093F4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x430093F8: jal         0x430010F0
    // 0x430093FC: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_14;
    // 0x430093FC: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_14:
    // 0x43009400: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009404: b           L_43009448
    // 0x43009408: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
        goto L_43009448;
    // 0x43009408: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
L_4300940C:
    // 0x4300940C: jal         0x43002238
    // 0x43009410: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_15;
    // 0x43009410: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x43009414: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009418: b           L_43009448
    // 0x4300941C: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
        goto L_43009448;
    // 0x4300941C: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
L_43009420:
    // 0x43009420: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009428: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x4300942C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009430: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009434: jal         0x430010F0
    // 0x43009438: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_16;
    // 0x43009438: nop

    after_16:
    // 0x4300943C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009440: nop

L_43009444:
    // 0x43009444: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
L_43009448:
    // 0x43009448: bne         $at, $zero, L_430095AC
    if (ctx->r1 != 0) {
        // 0x4300944C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430095AC;
    }
    // 0x4300944C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009450: jal         0x43004D80
    // 0x43009454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_17;
    // 0x43009454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x43009458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300945C: jal         0x43005078
    // 0x43009460: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_18;
    // 0x43009460: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x43009464: b           L_430095AC
    // 0x43009468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300946C:
    // 0x4300946C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x43009470: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009474: bne         $v0, $at, L_430094A4
    if (ctx->r2 != ctx->r1) {
        // 0x43009478: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_430094A4;
    }
    // 0x43009478: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4300947C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009480: nop

    // 0x43009484: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x43009488: bne         $at, $zero, L_43009498
    if (ctx->r1 != 0) {
        // 0x4300948C: slti        $at, $v1, 0x2F
        ctx->r1 = SIGNED(ctx->r3) < 0X2F ? 1 : 0;
            goto L_43009498;
    }
    // 0x4300948C: slti        $at, $v1, 0x2F
    ctx->r1 = SIGNED(ctx->r3) < 0X2F ? 1 : 0;
    // 0x43009490: bne         $at, $zero, L_430095AC
    if (ctx->r1 != 0) {
        // 0x43009494: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430095AC;
    }
    // 0x43009494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009498:
    // 0x43009498: b           L_430095A8
    // 0x4300949C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430095A8;
    // 0x4300949C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x430094A0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_430094A4:
    // 0x430094A4: bne         $v0, $at, L_430095AC
    if (ctx->r2 != ctx->r1) {
        // 0x430094A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430095AC;
    }
    // 0x430094A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430094AC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430094B0: nop

    // 0x430094B4: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x430094B8: bne         $at, $zero, L_430094C8
    if (ctx->r1 != 0) {
        // 0x430094BC: slti        $at, $v1, 0x3D
        ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_430094C8;
    }
    // 0x430094BC: slti        $at, $v1, 0x3D
    ctx->r1 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x430094C0: bne         $at, $zero, L_430095AC
    if (ctx->r1 != 0) {
        // 0x430094C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430095AC;
    }
    // 0x430094C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094C8:
    // 0x430094C8: b           L_430095A8
    // 0x430094CC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430095A8;
    // 0x430094CC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_430094D0:
    // 0x430094D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094D4: jal         0x43004CE0
    // 0x430094D8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    ovl_enemy_world7_4CE0(rdram, ctx);
        goto after_19;
    // 0x430094D8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_19:
    // 0x430094DC: b           L_430095AC
    // 0x430094E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x430094E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094E4:
    // 0x430094E4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430094E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094EC: bne         $v0, $zero, L_43009518
    if (ctx->r2 != 0) {
        // 0x430094F0: nop
    
            goto L_43009518;
    }
    // 0x430094F0: nop

    // 0x430094F4: jal         0x43002238
    // 0x430094F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_20;
    // 0x430094F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_20:
    // 0x430094FC: beq         $v0, $zero, L_43009518
    if (ctx->r2 == 0) {
        // 0x43009500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009518;
    }
    // 0x43009500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009504: jal         0x43004AD8
    // 0x43009508: addiu       $a1, $zero, 0x505
    ctx->r5 = ADD32(0, 0X505);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_21;
    // 0x43009508: addiu       $a1, $zero, 0x505
    ctx->r5 = ADD32(0, 0X505);
    after_21:
    // 0x4300950C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009510: jal         0x43004AD8
    // 0x43009514: addiu       $a1, $zero, 0x506
    ctx->r5 = ADD32(0, 0X506);
    ovl_enemy_world7_4AD8(rdram, ctx);
        goto after_22;
    // 0x43009514: addiu       $a1, $zero, 0x506
    ctx->r5 = ADD32(0, 0X506);
    after_22:
L_43009518:
    // 0x43009518: jal         0x43004BF0
    // 0x4300951C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4BF0(rdram, ctx);
        goto after_23;
    // 0x4300951C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x43009520: b           L_430095AC
    // 0x43009524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009528:
    // 0x43009528: jal         0x43004C74
    // 0x4300952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4C74(rdram, ctx);
        goto after_24;
    // 0x4300952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x43009530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009534: jal         0x43005078
    // 0x43009538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_25;
    // 0x43009538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x4300953C: b           L_430095AC
    // 0x43009540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009544:
    // 0x43009544: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009548: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300954C: bne         $v1, $at, L_43009578
    if (ctx->r3 != ctx->r1) {
        // 0x43009550: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009578;
    }
    // 0x43009550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009554: jal         0x43002238
    // 0x43009558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_26;
    // 0x43009558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_26:
    // 0x4300955C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009564: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009568: jal         0x43001DE0
    // 0x4300956C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_27;
    // 0x4300956C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_27:
    // 0x43009570: b           L_430095AC
    // 0x43009574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009578:
    // 0x43009578: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4300957C: bne         $v1, $at, L_43009594
    if (ctx->r3 != ctx->r1) {
        // 0x43009580: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009594;
    }
    // 0x43009580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009584: jal         0x43002238
    // 0x43009588: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_28;
    // 0x43009588: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_28:
    // 0x4300958C: b           L_430095AC
    // 0x43009590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430095AC;
    // 0x43009590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009594:
    // 0x43009594: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x43009598: bne         $v1, $at, L_430095A8
    if (ctx->r3 != ctx->r1) {
        // 0x4300959C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430095A8;
    }
    // 0x4300959C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095A0: jal         0x43005078
    // 0x430095A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_29;
    // 0x430095A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_29:
L_430095A8:
    // 0x430095A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430095AC:
    // 0x430095AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430095B0: jr          $ra
    // 0x430095B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430095B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_95B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430095B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430095BC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x430095C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430095C4: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x430095C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430095CC: beq         $at, $zero, L_43009944
    if (ctx->r1 == 0) {
        // 0x430095D0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_43009944;
    }
    // 0x430095D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430095D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430095D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430095DC: addu        $at, $at, $t6
    gpr jr_addend_430095E8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430095E0: lw          $t6, -0x5EAC($at)
    ctx->r14 = ADD32(ctx->r1, -0X5EAC);
    // 0x430095E4: nop

    // 0x430095E8: jr          $t6
    // 0x430095EC: nop

    switch (jr_addend_430095E8 >> 2) {
        case 0: goto L_43009650; break;
        case 1: goto L_43009660; break;
        case 2: goto L_43009944; break;
        case 3: goto L_43009880; break;
        case 4: goto L_43009894; break;
        case 5: goto L_430098BC; break;
        case 6: goto L_43009944; break;
        case 7: goto L_43009944; break;
        case 8: goto L_43009944; break;
        case 9: goto L_43009944; break;
        case 10: goto L_43009944; break;
        case 11: goto L_43009944; break;
        case 12: goto L_43009944; break;
        case 13: goto L_430095F0; break;
        case 14: goto L_430098D8; break;
        case 15: goto L_43009944; break;
        case 16: goto L_43009944; break;
        case 17: goto L_43009944; break;
        case 18: goto L_43009618; break;
        case 19: goto L_43009944; break;
        case 20: goto L_43009944; break;
        case 21: goto L_43009944; break;
        case 22: goto L_43009944; break;
        case 23: goto L_43009834; break;
        default: switch_error(__func__, 0x430095E8, 0x4300A154);
    }
    // 0x430095EC: nop

L_430095F0:
    // 0x430095F0: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x430095F4: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430095F8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x430095FC: addiu       $t8, $t8, -0x6424
    ctx->r24 = ADD32(ctx->r24, -0X6424);
    // 0x43009600: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x43009604: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43009608: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x4300960C: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43009610: b           L_43009944
    // 0x43009614: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43009944;
    // 0x43009614: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43009618:
    // 0x43009618: jal         0x43001F1C
    // 0x4300961C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x4300961C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009624: jal         0x43002238
    // 0x43009628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_1;
    // 0x43009628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x4300962C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009634: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009638: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4300963C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009640: jal         0x430010F0
    // 0x43009644: nop

    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_2;
    // 0x43009644: nop

    after_2:
    // 0x43009648: b           L_43009948
    // 0x4300964C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x4300964C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009650:
    // 0x43009650: jal         0x43004E48
    // 0x43009654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4E48(rdram, ctx);
        goto after_3;
    // 0x43009654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009658: b           L_43009948
    // 0x4300965C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x4300965C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009660:
    // 0x43009660: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x43009664: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009668: beq         $v0, $at, L_43009680
    if (ctx->r2 == ctx->r1) {
        // 0x4300966C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43009680;
    }
    // 0x4300966C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43009670: beq         $v0, $at, L_43009780
    if (ctx->r2 == ctx->r1) {
        // 0x43009674: nop
    
            goto L_43009780;
    }
    // 0x43009674: nop

    // 0x43009678: b           L_43009948
    // 0x4300967C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x4300967C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009680:
    // 0x43009680: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009684: nop

    // 0x43009688: sltiu       $at, $v1, 0x19
    ctx->r1 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x4300968C: beq         $at, $zero, L_43009754
    if (ctx->r1 == 0) {
        // 0x43009690: sll         $t1, $v1, 2
        ctx->r9 = S32(ctx->r3 << 2);
            goto L_43009754;
    }
    // 0x43009690: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x43009694: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009698: addu        $at, $at, $t1
    gpr jr_addend_430096A4 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x4300969C: lw          $t1, -0x5E4C($at)
    ctx->r9 = ADD32(ctx->r1, -0X5E4C);
    // 0x430096A0: nop

    // 0x430096A4: jr          $t1
    // 0x430096A8: nop

    switch (jr_addend_430096A4 >> 2) {
        case 0: goto L_430096AC; break;
        case 1: goto L_43009754; break;
        case 2: goto L_43009754; break;
        case 3: goto L_43009754; break;
        case 4: goto L_43009754; break;
        case 5: goto L_43009754; break;
        case 6: goto L_43009754; break;
        case 7: goto L_43009754; break;
        case 8: goto L_43009754; break;
        case 9: goto L_43009754; break;
        case 10: goto L_43009754; break;
        case 11: goto L_430096D0; break;
        case 12: goto L_43009754; break;
        case 13: goto L_43009754; break;
        case 14: goto L_43009748; break;
        case 15: goto L_430096FC; break;
        case 16: goto L_43009754; break;
        case 17: goto L_43009754; break;
        case 18: goto L_43009754; break;
        case 19: goto L_43009754; break;
        case 20: goto L_43009754; break;
        case 21: goto L_43009754; break;
        case 22: goto L_43009754; break;
        case 23: goto L_43009754; break;
        case 24: goto L_43009718; break;
        default: switch_error(__func__, 0x430096A4, 0x4300A1B4);
    }
    // 0x430096A8: nop

L_430096AC:
    // 0x430096AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096B0: jal         0x43002238
    // 0x430096B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_4;
    // 0x430096B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x430096B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430096BC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430096C0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430096C4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x430096C8: b           L_43009754
    // 0x430096CC: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
        goto L_43009754;
    // 0x430096CC: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
L_430096D0:
    // 0x430096D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430096D4: lwc1        $f6, -0x5DE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5DE8);
    // 0x430096D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096DC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x430096E0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x430096E4: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    // 0x430096E8: jal         0x430010F0
    // 0x430096EC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_5;
    // 0x430096EC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x430096F0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430096F4: b           L_43009758
    // 0x430096F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_43009758;
    // 0x430096F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_430096FC:
    // 0x430096FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009700: addiu       $a1, $zero, 0x210
    ctx->r5 = ADD32(0, 0X210);
    // 0x43009704: jal         0x43001630
    // 0x43009708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world7_1630(rdram, ctx);
        goto after_6;
    // 0x43009708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x4300970C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009710: b           L_43009758
    // 0x43009714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_43009758;
    // 0x43009714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_43009718:
    // 0x43009718: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300971C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009720: lwc1        $f8, -0x5DE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5DE4);
    // 0x43009724: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009728: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4300972C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009734: jal         0x430010F0
    // 0x43009738: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    ovl_enemy_world7_10F0(rdram, ctx);
        goto after_7;
    // 0x43009738: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    after_7:
    // 0x4300973C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009740: b           L_43009758
    // 0x43009744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_43009758;
    // 0x43009744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_43009748:
    // 0x43009748: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300974C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009750: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_43009754:
    // 0x43009754: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_43009758:
    // 0x43009758: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x4300975C: bne         $at, $zero, L_43009944
    if (ctx->r1 != 0) {
        // 0x43009760: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009944;
    }
    // 0x43009760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009764: jal         0x43004D80
    // 0x43009768: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_8;
    // 0x43009768: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    after_8:
    // 0x4300976C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009770: jal         0x43005078
    // 0x43009774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_9;
    // 0x43009774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43009778: b           L_43009948
    // 0x4300977C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x4300977C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009780:
    // 0x43009780: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009784: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x43009788: beq         $v1, $zero, L_430097AC
    if (ctx->r3 == 0) {
        // 0x4300978C: nop
    
            goto L_430097AC;
    }
    // 0x4300978C: nop

    // 0x43009790: beq         $v1, $at, L_430097CC
    if (ctx->r3 == ctx->r1) {
        // 0x43009794: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430097CC;
    }
    // 0x43009794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009798: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x4300979C: beq         $v1, $at, L_430097F8
    if (ctx->r3 == ctx->r1) {
        // 0x430097A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430097F8;
    }
    // 0x430097A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097A4: b           L_43009810
    // 0x430097A8: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
        goto L_43009810;
    // 0x430097A8: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
L_430097AC:
    // 0x430097AC: jal         0x430014D8
    // 0x430097B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_10;
    // 0x430097B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x430097B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097B8: jal         0x43002238
    // 0x430097BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_11;
    // 0x430097BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x430097C0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430097C4: b           L_43009810
    // 0x430097C8: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
        goto L_43009810;
    // 0x430097C8: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
L_430097CC:
    // 0x430097CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430097D0: lwc1        $f10, -0x5DE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5DE0);
    // 0x430097D4: lui         $a2, 0x4233
    ctx->r6 = S32(0X4233 << 16);
    // 0x430097D8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x430097DC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x430097E0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x430097E4: jal         0x43004610
    // 0x430097E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_world7_4610(rdram, ctx);
        goto after_12;
    // 0x430097E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x430097EC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430097F0: b           L_43009810
    // 0x430097F4: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
        goto L_43009810;
    // 0x430097F4: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
L_430097F8:
    // 0x430097F8: addiu       $a1, $zero, 0x208
    ctx->r5 = ADD32(0, 0X208);
    // 0x430097FC: jal         0x43001630
    // 0x43009800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world7_1630(rdram, ctx);
        goto after_13;
    // 0x43009800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x43009804: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009808: nop

    // 0x4300980C: slti        $at, $v1, 0x23
    ctx->r1 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
L_43009810:
    // 0x43009810: bne         $at, $zero, L_43009948
    if (ctx->r1 != 0) {
        // 0x43009814: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009948;
    }
    // 0x43009814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009818: jal         0x43004D80
    // 0x4300981C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_14;
    // 0x4300981C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x43009820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009824: jal         0x43005078
    // 0x43009828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_15;
    // 0x43009828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x4300982C: b           L_43009948
    // 0x43009830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x43009830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009834:
    // 0x43009834: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x43009838: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300983C: bne         $t2, $at, L_43009948
    if (ctx->r10 != ctx->r1) {
        // 0x43009840: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009948;
    }
    // 0x43009840: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009844: lw          $t3, 0x4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X4);
    // 0x43009848: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x4300984C: beq         $t3, $at, L_4300985C
    if (ctx->r11 == ctx->r1) {
        // 0x43009850: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_4300985C;
    }
    // 0x43009850: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43009854: b           L_43009944
    // 0x43009858: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_43009944;
    // 0x43009858: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_4300985C:
    // 0x4300985C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009860: nop

    // 0x43009864: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x43009868: bne         $at, $zero, L_43009878
    if (ctx->r1 != 0) {
        // 0x4300986C: slti        $at, $v1, 0x19
        ctx->r1 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
            goto L_43009878;
    }
    // 0x4300986C: slti        $at, $v1, 0x19
    ctx->r1 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x43009870: bne         $at, $zero, L_43009948
    if (ctx->r1 != 0) {
        // 0x43009874: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009948;
    }
    // 0x43009874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009878:
    // 0x43009878: b           L_43009944
    // 0x4300987C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_43009944;
    // 0x4300987C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_43009880:
    // 0x43009880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009884: jal         0x43004CE0
    // 0x43009888: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    ovl_enemy_world7_4CE0(rdram, ctx);
        goto after_16;
    // 0x43009888: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_16:
    // 0x4300988C: b           L_43009948
    // 0x43009890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x43009890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009894:
    // 0x43009894: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300989C: bne         $v0, $zero, L_430098AC
    if (ctx->r2 != 0) {
        // 0x430098A0: nop
    
            goto L_430098AC;
    }
    // 0x430098A0: nop

    // 0x430098A4: jal         0x43002238
    // 0x430098A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_17;
    // 0x430098A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
L_430098AC:
    // 0x430098AC: jal         0x43004BF0
    // 0x430098B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4BF0(rdram, ctx);
        goto after_18;
    // 0x430098B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x430098B4: b           L_43009948
    // 0x430098B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x430098B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098BC:
    // 0x430098BC: jal         0x43004C74
    // 0x430098C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4C74(rdram, ctx);
        goto after_19;
    // 0x430098C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x430098C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098C8: jal         0x43005078
    // 0x430098CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_20;
    // 0x430098CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x430098D0: b           L_43009948
    // 0x430098D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x430098D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098D8:
    // 0x430098D8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430098E0: bne         $v1, $at, L_43009934
    if (ctx->r3 != ctx->r1) {
        // 0x430098E4: slti        $at, $v1, 0x32
        ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
            goto L_43009934;
    }
    // 0x430098E4: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x430098E8: lw          $t5, 0x1E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1E4);
    // 0x430098EC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430098F0: bne         $t5, $at, L_4300990C
    if (ctx->r13 != ctx->r1) {
        // 0x430098F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300990C;
    }
    // 0x430098F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098FC: jal         0x43002238
    // 0x43009900: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_21;
    // 0x43009900: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_21:
    // 0x43009904: b           L_43009918
    // 0x43009908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43009918;
    // 0x43009908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4300990C:
    // 0x4300990C: jal         0x43002238
    // 0x43009910: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_2238(rdram, ctx);
        goto after_22;
    // 0x43009910: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_22:
    // 0x43009914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009918:
    // 0x43009918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300991C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009920: jal         0x43001DE0
    // 0x43009924: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_23;
    // 0x43009924: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_23:
    // 0x43009928: b           L_43009948
    // 0x4300992C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009948;
    // 0x4300992C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009930: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
L_43009934:
    // 0x43009934: bne         $at, $zero, L_43009944
    if (ctx->r1 != 0) {
        // 0x43009938: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009944;
    }
    // 0x43009938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300993C: jal         0x43005078
    // 0x43009940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_24;
    // 0x43009940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
L_43009944:
    // 0x43009944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009948:
    // 0x43009948: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4300994C: jr          $ra
    // 0x43009950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009950: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world7_9954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300995C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43009960: nop

    // 0x43009964: addiu       $t7, $t6, -0x29
    ctx->r15 = ADD32(ctx->r14, -0X29);
    // 0x43009968: sltiu       $at, $t7, 0x1B
    ctx->r1 = ctx->r15 < 0X1B ? 1 : 0;
    // 0x4300996C: beq         $at, $zero, L_430099CC
    if (ctx->r1 == 0) {
        // 0x43009970: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_430099CC;
    }
    // 0x43009970: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43009974: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009978: addu        $at, $at, $t7
    gpr jr_addend_43009984 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4300997C: lw          $t7, -0x5DDC($at)
    ctx->r15 = ADD32(ctx->r1, -0X5DDC);
    // 0x43009980: nop

    // 0x43009984: jr          $t7
    // 0x43009988: nop

    switch (jr_addend_43009984 >> 2) {
        case 0: goto L_4300998C; break;
        case 1: goto L_430099CC; break;
        case 2: goto L_430099CC; break;
        case 3: goto L_430099CC; break;
        case 4: goto L_430099CC; break;
        case 5: goto L_430099CC; break;
        case 6: goto L_43009998; break;
        case 7: goto L_430099A4; break;
        case 8: goto L_430099B0; break;
        case 9: goto L_430099BC; break;
        case 10: goto L_430099CC; break;
        case 11: goto L_430099CC; break;
        case 12: goto L_430099CC; break;
        case 13: goto L_430099CC; break;
        case 14: goto L_430099CC; break;
        case 15: goto L_430099CC; break;
        case 16: goto L_430099CC; break;
        case 17: goto L_430099CC; break;
        case 18: goto L_430099CC; break;
        case 19: goto L_430099CC; break;
        case 20: goto L_430099CC; break;
        case 21: goto L_430099CC; break;
        case 22: goto L_430099CC; break;
        case 23: goto L_4300998C; break;
        case 24: goto L_430099A4; break;
        case 25: goto L_43009998; break;
        case 26: goto L_43009998; break;
        default: switch_error(__func__, 0x43009984, 0x4300A224);
    }
    // 0x43009988: nop

L_4300998C:
    // 0x4300998C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009990: b           L_430099C4
    // 0x43009994: addiu       $v0, $v0, -0x6A48
    ctx->r2 = ADD32(ctx->r2, -0X6A48);
        goto L_430099C4;
    // 0x43009994: addiu       $v0, $v0, -0x6A48
    ctx->r2 = ADD32(ctx->r2, -0X6A48);
L_43009998:
    // 0x43009998: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300999C: b           L_430099C4
    // 0x430099A0: addiu       $v0, $v0, -0x6E88
    ctx->r2 = ADD32(ctx->r2, -0X6E88);
        goto L_430099C4;
    // 0x430099A0: addiu       $v0, $v0, -0x6E88
    ctx->r2 = ADD32(ctx->r2, -0X6E88);
L_430099A4:
    // 0x430099A4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430099A8: b           L_430099C4
    // 0x430099AC: addiu       $v0, $v0, -0x7010
    ctx->r2 = ADD32(ctx->r2, -0X7010);
        goto L_430099C4;
    // 0x430099AC: addiu       $v0, $v0, -0x7010
    ctx->r2 = ADD32(ctx->r2, -0X7010);
L_430099B0:
    // 0x430099B0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430099B4: b           L_430099C4
    // 0x430099B8: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
        goto L_430099C4;
    // 0x430099B8: addiu       $v0, $v0, -0x7154
    ctx->r2 = ADD32(ctx->r2, -0X7154);
L_430099BC:
    // 0x430099BC: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430099C0: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_430099C4:
    // 0x430099C4: jalr        $v0
    // 0x430099C8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x430099C8: nop

    after_0:
L_430099CC:
    // 0x430099CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430099D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430099D4: jr          $ra
    // 0x430099D8: nop

    return;
    // 0x430099D8: nop

;}
RECOMP_FUNC void ovl_enemy_world8_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000000: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43000004: jr          $ra
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    return;
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    // 0x4300000C: nop

;}
RECOMP_FUNC void ovl_enemy_world8_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000014: jr          $t1
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world8_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000020: jr          $t1
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_enemy_world8_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300002C: jr          $t1
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_enemy_world8_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000038: jr          $t1
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_enemy_world8_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000044: jr          $t1
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_enemy_world8_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000050: jr          $t1
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_enemy_world8_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300005C: jr          $t1
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_enemy_world8_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000068: jr          $t1
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_enemy_world8_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000074: jr          $t1
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_enemy_world8_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000080: jr          $t1
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_enemy_world8_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300008C: jr          $t1
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_enemy_world8_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000098: jr          $t1
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_enemy_world8_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000A4: jr          $t1
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_enemy_world8_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000B0: jr          $t1
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_enemy_world8_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000BC: jr          $t1
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_enemy_world8_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000C8: jr          $t1
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_enemy_world8_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000D4: jr          $t1
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_enemy_world8_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000E0: jr          $t1
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_enemy_world8_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000EC: jr          $t1
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_enemy_world8_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000F8: jr          $t1
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_enemy_world8_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000104: jr          $t1
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_enemy_world8_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000110: jr          $t1
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_enemy_world8_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300011C: jr          $t1
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_enemy_world8_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000128: jr          $t1
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_enemy_world8_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000134: jr          $t1
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_enemy_world8_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000140: jr          $t1
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
