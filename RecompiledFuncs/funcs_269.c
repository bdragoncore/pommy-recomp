#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_7E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007E58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45007E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007E60: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45007E64: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x45007E68: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x45007E6C: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45007E70: bne         $v0, $at, L_45007E94
    if (ctx->r2 != ctx->r1) {
        // 0x45007E74: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_45007E94;
    }
    // 0x45007E74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x45007E78: addiu       $a1, $zero, 0x186
    ctx->r5 = ADD32(0, 0X186);
    // 0x45007E7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x45007E80: jal         0x45000F80
    // 0x45007E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x45007E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007E88: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x45007E8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45007E90: nop

L_45007E94:
    // 0x45007E94: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x45007E98: bne         $at, $zero, L_45007EAC
    if (ctx->r1 != 0) {
        // 0x45007E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007EAC;
    }
    // 0x45007E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007EA0: jal         0x45005C3C
    // 0x45007EA4: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x45007EA4: nop

    after_1:
    // 0x45007EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007EAC:
    // 0x45007EAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45007EB0: jr          $ra
    // 0x45007EB4: nop

    return;
    // 0x45007EB4: nop

;}
RECOMP_FUNC void ovl_mobj_main_7EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007EC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45007EC4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007EC8: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45007ECC: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x45007ED0: beq         $t7, $zero, L_45007EF0
    if (ctx->r15 == 0) {
        // 0x45007ED4: lui         $a2, 0x4501
        ctx->r6 = S32(0X4501 << 16);
            goto L_45007EF0;
    }
    // 0x45007ED4: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45007ED8: addiu       $a2, $a2, 0x1E8
    ctx->r6 = ADD32(ctx->r6, 0X1E8);
    // 0x45007EDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007EE0: jal         0x45005A5C
    // 0x45007EE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45007EE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007EE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007EEC: nop

L_45007EF0:
    // 0x45007EF0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45007EF4: jal         0x4500640C
    // 0x45007EF8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_1;
    // 0x45007EF8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x45007EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007F04: jr          $ra
    // 0x45007F08: nop

    return;
    // 0x45007F08: nop

;}
RECOMP_FUNC void ovl_mobj_main_7F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007F14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45007F18: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007F1C: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45007F20: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x45007F24: bne         $t7, $zero, L_45007F44
    if (ctx->r15 != 0) {
        // 0x45007F28: lui         $a2, 0x4501
        ctx->r6 = S32(0X4501 << 16);
            goto L_45007F44;
    }
    // 0x45007F28: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45007F2C: addiu       $a2, $a2, 0x1D4
    ctx->r6 = ADD32(ctx->r6, 0X1D4);
    // 0x45007F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007F34: jal         0x45005A5C
    // 0x45007F38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45007F38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007F3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007F40: nop

L_45007F44:
    // 0x45007F44: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45007F48: jal         0x450063D0
    // 0x45007F4C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_1;
    // 0x45007F4C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_1:
    // 0x45007F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007F58: jr          $ra
    // 0x45007F5C: nop

    return;
    // 0x45007F5C: nop

;}
RECOMP_FUNC void ovl_mobj_main_7F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007F68: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45007F6C: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45007F70: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x45007F74: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x45007F78: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45007F7C: beq         $t8, $zero, L_45007FA0
    if (ctx->r24 == 0) {
        // 0x45007F80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_45007FA0;
    }
    // 0x45007F80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x45007F84: slti        $at, $v0, 0x3B
    ctx->r1 = SIGNED(ctx->r2) < 0X3B ? 1 : 0;
    // 0x45007F88: bne         $at, $zero, L_45007FB8
    if (ctx->r1 != 0) {
        // 0x45007F8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007FB8;
    }
    // 0x45007F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007F90: jal         0x45005C3C
    // 0x45007F94: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45007F94: nop

    after_0:
    // 0x45007F98: b           L_45007FB8
    // 0x45007F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007FB8;
    // 0x45007F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007FA0:
    // 0x45007FA0: slti        $at, $v1, 0x1D
    ctx->r1 = SIGNED(ctx->r3) < 0X1D ? 1 : 0;
    // 0x45007FA4: bne         $at, $zero, L_45007FB8
    if (ctx->r1 != 0) {
        // 0x45007FA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007FB8;
    }
    // 0x45007FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007FAC: jal         0x45005C3C
    // 0x45007FB0: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x45007FB0: nop

    after_1:
    // 0x45007FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007FB8:
    // 0x45007FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007FBC: jr          $ra
    // 0x45007FC0: nop

    return;
    // 0x45007FC0: nop

;}
RECOMP_FUNC void ovl_mobj_main_7FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007FCC: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45007FD0: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x45007FD4: bne         $t6, $at, L_45007FEC
    if (ctx->r14 != ctx->r1) {
        // 0x45007FD8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_45007FEC;
    }
    // 0x45007FD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45007FDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45007FE0: b           L_45007FF8
    // 0x45007FE4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_45007FF8;
    // 0x45007FE4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45007FE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_45007FEC:
    // 0x45007FEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007FF0: nop

    // 0x45007FF4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_45007FF8:
    // 0x45007FF8: jal         0x4500640C
    // 0x45007FFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45007FFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45008000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008008: jr          $ra
    // 0x4500800C: nop

    return;
    // 0x4500800C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008018: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x4500801C: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x45008020: bne         $t6, $at, L_45008034
    if (ctx->r14 != ctx->r1) {
        // 0x45008024: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_45008034;
    }
    // 0x45008024: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45008028: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500802C: b           L_45008044
    // 0x45008030: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_45008044;
    // 0x45008030: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_45008034:
    // 0x45008034: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x45008038: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500803C: nop

    // 0x45008040: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_45008044:
    // 0x45008044: jal         0x450063D0
    // 0x45008048: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45008048: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x4500804C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008054: jr          $ra
    // 0x45008058: nop

    return;
    // 0x45008058: nop

;}
RECOMP_FUNC void ovl_mobj_main_805C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500805C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45008060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008068: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500806C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45008070: jal         0x4500640C
    // 0x45008074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45008074: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45008078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500807C: jal         0x45005D34
    // 0x45008080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45008080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x45008084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500808C: jr          $ra
    // 0x45008090: nop

    return;
    // 0x45008090: nop

;}
RECOMP_FUNC void ovl_mobj_main_8094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500809C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x450080A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450080A4: addiu       $at, $zero, 0xEE
    ctx->r1 = ADD32(0, 0XEE);
    // 0x450080A8: bne         $t6, $at, L_450080C8
    if (ctx->r14 != ctx->r1) {
        // 0x450080AC: lui         $a1, 0x4270
        ctx->r5 = S32(0X4270 << 16);
            goto L_450080C8;
    }
    // 0x450080AC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x450080B0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450080B4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x450080B8: jal         0x450063D0
    // 0x450080BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x450080BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450080C0: b           L_450080D8
    // 0x450080C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_450080D8;
    // 0x450080C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_450080C8:
    // 0x450080C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x450080CC: jal         0x450063D0
    // 0x450080D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_1;
    // 0x450080D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x450080D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_450080D8:
    // 0x450080D8: jal         0x45005D34
    // 0x450080DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_2;
    // 0x450080DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x450080E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450080E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450080E8: jr          $ra
    // 0x450080EC: nop

    return;
    // 0x450080EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_80F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450080F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450080F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450080F8: lw          $v1, 0x188($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X188);
    // 0x450080FC: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45008100: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x45008104: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x45008108: bne         $t8, $zero, L_45008180
    if (ctx->r24 != 0) {
        // 0x4500810C: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_45008180;
    }
    // 0x4500810C: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45008110: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x45008114: addiu       $at, $zero, 0xEE
    ctx->r1 = ADD32(0, 0XEE);
    // 0x45008118: bne         $t9, $at, L_45008154
    if (ctx->r25 != ctx->r1) {
        // 0x4500811C: nop
    
            goto L_45008154;
    }
    // 0x4500811C: nop

    // 0x45008120: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x45008124: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x45008128: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4500812C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45008130: nop

    // 0x45008134: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x45008138: nop

    // 0x4500813C: bc1f        L_45008184
    if (!c1cs) {
        // 0x45008140: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45008184;
    }
    // 0x45008140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008144: jal         0x45005C3C
    // 0x45008148: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45008148: nop

    after_0:
    // 0x4500814C: b           L_45008184
    // 0x45008150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45008184;
    // 0x45008150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45008154:
    // 0x45008154: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x45008158: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4500815C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x45008160: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45008164: nop

    // 0x45008168: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x4500816C: nop

    // 0x45008170: bc1f        L_45008184
    if (!c1cs) {
        // 0x45008174: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45008184;
    }
    // 0x45008174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008178: jal         0x45005C3C
    // 0x4500817C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x4500817C: nop

    after_1:
L_45008180:
    // 0x45008180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45008184:
    // 0x45008184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008188: jr          $ra
    // 0x4500818C: nop

    return;
    // 0x4500818C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008190: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008198: lwc1        $f4, 0x204($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X204);
    // 0x4500819C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450081A0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x450081A4: lwc1        $f6, 0x208($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X208);
    // 0x450081A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x450081AC: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x450081B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450081B4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x450081B8: lwc1        $f10, 0x20C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20C);
    // 0x450081BC: nop

    // 0x450081C0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x450081C4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450081C8: jal         0x450006C4
    // 0x450081CC: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450081CC: nop

    after_0:
    // 0x450081D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450081D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450081D8: jr          $ra
    // 0x450081DC: nop

    return;
    // 0x450081DC: nop

;}
RECOMP_FUNC void ovl_mobj_main_81E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450081E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450081E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450081E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450081EC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x450081F0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x450081F4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x450081F8: jal         0x45008190
    // 0x450081FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_8190(rdram, ctx);
        goto after_0;
    // 0x450081FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45008200: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x45008204: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45008208: beq         $t6, $zero, L_45008224
    if (ctx->r14 == 0) {
        // 0x4500820C: nop
    
            goto L_45008224;
    }
    // 0x4500820C: nop

    // 0x45008210: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45008214: nop

    // 0x45008218: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x4500821C: b           L_45008234
    // 0x45008220: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
        goto L_45008234;
    // 0x45008220: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
L_45008224:
    // 0x45008224: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
    // 0x45008228: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500822C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x45008230: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
L_45008234:
    // 0x45008234: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x45008238: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x4500823C: beq         $t1, $zero, L_45008258
    if (ctx->r9 == 0) {
        // 0x45008240: nop
    
            goto L_45008258;
    }
    // 0x45008240: nop

    // 0x45008244: lw          $t2, 0x184($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X184);
    // 0x45008248: nop

    // 0x4500824C: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x45008250: b           L_45008268
    // 0x45008254: sw          $t3, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r11;
        goto L_45008268;
    // 0x45008254: sw          $t3, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r11;
L_45008258:
    // 0x45008258: lw          $t4, 0x184($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X184);
    // 0x4500825C: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x45008260: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x45008264: sw          $t5, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r13;
L_45008268:
    // 0x45008268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500826C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008270: jr          $ra
    // 0x45008274: nop

    return;
    // 0x45008274: nop

;}
RECOMP_FUNC void ovl_mobj_main_8278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500827C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008280: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45008284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008288: jal         0x450081E0
    // 0x4500828C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_81E0(rdram, ctx);
        goto after_0;
    // 0x4500828C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45008290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008298: jr          $ra
    // 0x4500829C: nop

    return;
    // 0x4500829C: nop

;}
RECOMP_FUNC void ovl_mobj_main_82A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450082A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450082A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450082A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x450082AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x450082B0: jal         0x450081E0
    // 0x450082B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_81E0(rdram, ctx);
        goto after_0;
    // 0x450082B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x450082B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450082BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450082C0: jr          $ra
    // 0x450082C4: nop

    return;
    // 0x450082C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_82C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450082C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450082CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450082D0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x450082D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x450082D8: jal         0x450081E0
    // 0x450082DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_81E0(rdram, ctx);
        goto after_0;
    // 0x450082DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x450082E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450082E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450082E8: jr          $ra
    // 0x450082EC: nop

    return;
    // 0x450082EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_82F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450082F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450082F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450082F8: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x450082FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x45008300: jal         0x450081E0
    // 0x45008304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_81E0(rdram, ctx);
        goto after_0;
    // 0x45008304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45008308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500830C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008310: jr          $ra
    // 0x45008314: nop

    return;
    // 0x45008314: nop

;}
RECOMP_FUNC void ovl_mobj_main_8318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008318: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4500831C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45008320: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45008324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008328: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500832C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x45008330: jal         0x450006C4
    // 0x45008334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x45008338: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x4500833C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45008340: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x45008344: beq         $t6, $zero, L_450083B4
    if (ctx->r14 == 0) {
        // 0x45008348: andi        $t9, $v0, 0x8000
        ctx->r25 = ctx->r2 & 0X8000;
            goto L_450083B4;
    }
    // 0x45008348: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x4500834C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x45008350: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45008354: nop

    // 0x45008358: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4500835C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x45008360: lwc1        $f10, 0x208($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X208);
    // 0x45008364: nop

    // 0x45008368: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x4500836C: nop

    // 0x45008370: bc1f        L_45008458
    if (!c1cs) {
        // 0x45008374: nop
    
            goto L_45008458;
    }
    // 0x45008374: nop

    // 0x45008378: lw          $t7, 0x184($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X184);
    // 0x4500837C: nop

    // 0x45008380: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x45008384: bne         $t8, $zero, L_4500839C
    if (ctx->r24 != 0) {
        // 0x45008388: nop
    
            goto L_4500839C;
    }
    // 0x45008388: nop

    // 0x4500838C: jal         0x45008278
    // 0x45008390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8278(rdram, ctx);
        goto after_1;
    // 0x45008390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x45008394: b           L_450083A4
    // 0x45008398: nop

        goto L_450083A4;
    // 0x45008398: nop

L_4500839C:
    // 0x4500839C: jal         0x450082A0
    // 0x450083A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_82A0(rdram, ctx);
        goto after_2;
    // 0x450083A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_450083A4:
    // 0x450083A4: jal         0x45005C10
    // 0x450083A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_3;
    // 0x450083A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x450083AC: b           L_4500846C
    // 0x450083B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500846C;
    // 0x450083B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450083B4:
    // 0x450083B4: beq         $t9, $zero, L_4500840C
    if (ctx->r25 == 0) {
        // 0x450083B8: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_4500840C;
    }
    // 0x450083B8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x450083BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x450083C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x450083C4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x450083C8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x450083CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x450083D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x450083D4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x450083D8: lwc1        $f6, 0x208($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X208);
    // 0x450083DC: nop

    // 0x450083E0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x450083E4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x450083E8: nop

    // 0x450083EC: bc1f        L_45008458
    if (!c1cs) {
        // 0x450083F0: nop
    
            goto L_45008458;
    }
    // 0x450083F0: nop

    // 0x450083F4: jal         0x450082F0
    // 0x450083F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_82F0(rdram, ctx);
        goto after_4;
    // 0x450083F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x450083FC: jal         0x45005C10
    // 0x45008400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_5;
    // 0x45008400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x45008404: b           L_4500846C
    // 0x45008408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500846C;
    // 0x45008408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500840C:
    // 0x4500840C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45008410: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45008414: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x45008418: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x4500841C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45008420: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x45008424: lwc1        $f10, 0x208($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X208);
    // 0x45008428: nop

    // 0x4500842C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x45008430: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x45008434: nop

    // 0x45008438: bc1f        L_45008458
    if (!c1cs) {
        // 0x4500843C: nop
    
            goto L_45008458;
    }
    // 0x4500843C: nop

    // 0x45008440: jal         0x450082C8
    // 0x45008444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_82C8(rdram, ctx);
        goto after_6;
    // 0x45008444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x45008448: jal         0x45005C10
    // 0x4500844C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_7;
    // 0x4500844C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x45008450: b           L_4500846C
    // 0x45008454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500846C;
    // 0x45008454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45008458:
    // 0x45008458: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500845C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45008460: jal         0x450006C4
    // 0x45008464: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_8;
    // 0x45008464: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_8:
    // 0x45008468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500846C:
    // 0x4500846C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45008470: jr          $ra
    // 0x45008474: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x45008474: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_8478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008478: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x4500847C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x45008480: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45008484: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x45008488: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x4500848C: lw          $a2, 0x1D0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D0);
    // 0x45008490: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45008494: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x45008498: jal         0x45000F34
    // 0x4500849C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x4500849C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x450084A0: lw          $a2, 0x1CC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1CC);
    // 0x450084A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450084A8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x450084AC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x450084B0: jal         0x45000F34
    // 0x450084B4: addiu       $a3, $zero, 0x731
    ctx->r7 = ADD32(0, 0X731);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x450084B4: addiu       $a3, $zero, 0x731
    ctx->r7 = ADD32(0, 0X731);
    after_1:
    // 0x450084B8: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x450084BC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x450084C0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x450084C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450084C8: jal         0x45000F34
    // 0x450084CC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x450084CC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x450084D0: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x450084D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450084D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x450084DC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x450084E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450084E4: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x450084E8: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x450084EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x450084F0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x450084F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x450084F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450084FC: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x45008500: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x45008504: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x45008508: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x4500850C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x45008510: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x45008514: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45008518: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x4500851C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45008520: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45008524: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45008528: jal         0x45000F34
    // 0x4500852C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x4500852C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x45008530: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x45008534: nop

    // 0x45008538: sw          $t0, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = ctx->r8;
    // 0x4500853C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x45008540: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x45008544: jr          $ra
    // 0x45008548: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x45008548: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_854C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500854C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008554: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008558: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4500855C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45008560: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008564: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45008568: jal         0x450006C4
    // 0x4500856C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500856C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x45008570: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008574: jal         0x450057BC
    // 0x45008578: addiu       $a1, $zero, 0x39A
    ctx->r5 = ADD32(0, 0X39A);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45008578: addiu       $a1, $zero, 0x39A
    ctx->r5 = ADD32(0, 0X39A);
    after_1:
    // 0x4500857C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008580: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x45008584: jal         0x450057BC
    // 0x45008588: nop

    ovl_mobj_main_57BC(rdram, ctx);
        goto after_2;
    // 0x45008588: nop

    after_2:
    // 0x4500858C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x45008590: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008594: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x45008598: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500859C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x450085A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x450085A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x450085A8: jal         0x45005B24
    // 0x450085AC: nop

    ovl_mobj_main_5B24(rdram, ctx);
        goto after_3;
    // 0x450085AC: nop

    after_3:
    // 0x450085B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450085B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450085B8: jr          $ra
    // 0x450085BC: nop

    return;
    // 0x450085BC: nop

;}
RECOMP_FUNC void ovl_mobj_main_85C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450085C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450085C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450085C8: addiu       $a1, $zero, 0x39B
    ctx->r5 = ADD32(0, 0X39B);
    // 0x450085CC: jal         0x4500854C
    // 0x450085D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_854C(rdram, ctx);
        goto after_0;
    // 0x450085D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x450085D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450085D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450085DC: jr          $ra
    // 0x450085E0: nop

    return;
    // 0x450085E0: nop

;}
RECOMP_FUNC void ovl_mobj_main_85E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450085E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450085E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450085EC: addiu       $a1, $zero, 0x39C
    ctx->r5 = ADD32(0, 0X39C);
    // 0x450085F0: jal         0x4500854C
    // 0x450085F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_854C(rdram, ctx);
        goto after_0;
    // 0x450085F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x450085F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450085FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008600: jr          $ra
    // 0x45008604: nop

    return;
    // 0x45008604: nop

;}
RECOMP_FUNC void ovl_mobj_main_8608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500860C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45008614: addiu       $a1, $zero, 0x39D
    ctx->r5 = ADD32(0, 0X39D);
    // 0x45008618: jal         0x4500854C
    // 0x4500861C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_854C(rdram, ctx);
        goto after_0;
    // 0x4500861C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x45008620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45008624: jal         0x45000FA0
    // 0x45008628: addiu       $a1, $zero, 0xF7
    ctx->r5 = ADD32(0, 0XF7);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_1;
    // 0x45008628: addiu       $a1, $zero, 0xF7
    ctx->r5 = ADD32(0, 0XF7);
    after_1:
    // 0x4500862C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008634: jr          $ra
    // 0x45008638: nop

    return;
    // 0x45008638: nop

;}
RECOMP_FUNC void ovl_mobj_main_863C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500863C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45008640: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45008644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45008648: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500864C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008650: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x45008654: jal         0x450006C4
    // 0x45008658: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008658: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x4500865C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45008660: jal         0x450057BC
    // 0x45008664: addiu       $a1, $zero, 0x3AD
    ctx->r5 = ADD32(0, 0X3AD);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45008664: addiu       $a1, $zero, 0x3AD
    ctx->r5 = ADD32(0, 0X3AD);
    after_1:
    // 0x45008668: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x4500866C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45008670: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x45008674: beq         $t6, $zero, L_4500869C
    if (ctx->r14 == 0) {
        // 0x45008678: andi        $t7, $v0, 0x20
        ctx->r15 = ctx->r2 & 0X20;
            goto L_4500869C;
    }
    // 0x45008678: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x4500867C: jal         0x450057BC
    // 0x45008680: addiu       $a1, $zero, 0x3AF
    ctx->r5 = ADD32(0, 0X3AF);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_2;
    // 0x45008680: addiu       $a1, $zero, 0x3AF
    ctx->r5 = ADD32(0, 0X3AF);
    after_2:
    // 0x45008684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45008688: jal         0x450057BC
    // 0x4500868C: addiu       $a1, $zero, 0x3B3
    ctx->r5 = ADD32(0, 0X3B3);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_3;
    // 0x4500868C: addiu       $a1, $zero, 0x3B3
    ctx->r5 = ADD32(0, 0X3B3);
    after_3:
    // 0x45008690: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x45008694: nop

    // 0x45008698: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
L_4500869C:
    // 0x4500869C: bne         $t7, $zero, L_450086C4
    if (ctx->r15 != 0) {
        // 0x450086A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_450086C4;
    }
    // 0x450086A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450086A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450086A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450086AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x450086B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x450086B4: jal         0x45005B24
    // 0x450086B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_4;
    // 0x450086B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x450086BC: b           L_450086DC
    // 0x450086C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_450086DC;
    // 0x450086C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450086C4:
    // 0x450086C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450086C8: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x450086CC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x450086D0: jal         0x45005B24
    // 0x450086D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_5;
    // 0x450086D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x450086D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450086DC:
    // 0x450086DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x450086E0: jr          $ra
    // 0x450086E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x450086E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_86E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450086E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450086EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450086F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450086F4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450086F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450086FC: jal         0x4500640C
    // 0x45008700: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45008700: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45008704: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x45008708: nop

    // 0x4500870C: sw          $zero, 0x188($t6)
    MEM_W(0X188, ctx->r14) = 0;
    // 0x45008710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008718: jr          $ra
    // 0x4500871C: nop

    return;
    // 0x4500871C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008720: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45008724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500872C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45008730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45008734: jal         0x450063D0
    // 0x45008738: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45008738: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_0:
    // 0x4500873C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x45008740: addiu       $t6, $zero, 0x4B
    ctx->r14 = ADD32(0, 0X4B);
    // 0x45008744: sw          $t6, 0x188($t7)
    MEM_W(0X188, ctx->r15) = ctx->r14;
    // 0x45008748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500874C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008750: jr          $ra
    // 0x45008754: nop

    return;
    // 0x45008754: nop

;}
RECOMP_FUNC void ovl_mobj_main_8758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500875C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008760: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008764: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x45008768: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x4500876C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45008770: jal         0x4500863C
    // 0x45008774: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_863C(rdram, ctx);
        goto after_0;
    // 0x45008774: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x45008778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500877C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008780: jr          $ra
    // 0x45008784: nop

    return;
    // 0x45008784: nop

;}
RECOMP_FUNC void ovl_mobj_main_8788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500878C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008790: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008794: nop

    // 0x45008798: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x4500879C: jal         0x4500863C
    // 0x450087A0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_863C(rdram, ctx);
        goto after_0;
    // 0x450087A0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x450087A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450087A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450087AC: jr          $ra
    // 0x450087B0: nop

    return;
    // 0x450087B0: nop

;}
RECOMP_FUNC void ovl_mobj_main_87B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450087B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450087B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450087BC: jal         0x4500863C
    // 0x450087C0: nop

    ovl_mobj_main_863C(rdram, ctx);
        goto after_0;
    // 0x450087C0: nop

    after_0:
    // 0x450087C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450087C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450087CC: jr          $ra
    // 0x450087D0: nop

    return;
    // 0x450087D0: nop

;}
RECOMP_FUNC void ovl_mobj_main_87D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450087D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450087D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450087DC: jal         0x4500863C
    // 0x450087E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_863C(rdram, ctx);
        goto after_0;
    // 0x450087E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450087E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450087E8: jal         0x450057BC
    // 0x450087EC: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x450087EC: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    after_1:
    // 0x450087F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450087F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450087F8: jr          $ra
    // 0x450087FC: nop

    return;
    // 0x450087FC: nop

;}
RECOMP_FUNC void ovl_mobj_main_8800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008808: lw          $v1, 0x188($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X188);
    // 0x4500880C: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45008810: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x45008814: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x45008818: bne         $t8, $zero, L_45008854
    if (ctx->r24 != 0) {
        // 0x4500881C: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_45008854;
    }
    // 0x4500881C: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45008820: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x45008824: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x45008828: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4500882C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45008830: nop

    // 0x45008834: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x45008838: nop

    // 0x4500883C: bc1f        L_45008884
    if (!c1cs) {
        // 0x45008840: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45008884;
    }
    // 0x45008840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008844: jal         0x45005C3C
    // 0x45008848: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45008848: nop

    after_0:
    // 0x4500884C: b           L_45008884
    // 0x45008850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45008884;
    // 0x45008850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45008854:
    // 0x45008854: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x45008858: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4500885C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x45008860: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45008864: nop

    // 0x45008868: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x4500886C: nop

    // 0x45008870: bc1f        L_45008884
    if (!c1cs) {
        // 0x45008874: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45008884;
    }
    // 0x45008874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008878: jal         0x45005C3C
    // 0x4500887C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x4500887C: nop

    after_1:
    // 0x45008880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45008884:
    // 0x45008884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008888: jr          $ra
    // 0x4500888C: nop

    return;
    // 0x4500888C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008890: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008898: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500889C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x450088A0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450088A4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450088A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450088AC: jal         0x45005DA4
    // 0x450088B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_0;
    // 0x450088B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x450088B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450088B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x450088BC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x450088C0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x450088C4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x450088C8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x450088CC: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x450088D0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x450088D4: jal         0x450006C4
    // 0x450088D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x450088D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x450088DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450088E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450088E4: jr          $ra
    // 0x450088E8: nop

    return;
    // 0x450088E8: nop

;}
RECOMP_FUNC void ovl_mobj_main_88EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450088EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450088F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450088F4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450088F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x450088FC: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45008900: jal         0x45005DA4
    // 0x45008904: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_0;
    // 0x45008904: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x45008908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500890C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008910: jr          $ra
    // 0x45008914: nop

    return;
    // 0x45008914: nop

;}
RECOMP_FUNC void ovl_mobj_main_8918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008918: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500891C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008920: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x45008924: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x45008928: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500892C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x45008930: jal         0x450006C4
    // 0x45008934: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008934: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x45008938: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500893C: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x45008940: lwc1        $f4, 0x2268($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2268);
    // 0x45008944: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45008948: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4500894C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45008950: bc1f        L_45008968
    if (!c1cs) {
        // 0x45008954: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_45008968;
    }
    // 0x45008954: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x45008958: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500895C: lwc1        $f6, 0x226C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X226C);
    // 0x45008960: b           L_45008974
    // 0x45008964: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
        goto L_45008974;
    // 0x45008964: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
L_45008968:
    // 0x45008968: lwc1        $f8, 0x2270($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2270);
    // 0x4500896C: nop

    // 0x45008970: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
L_45008974:
    // 0x45008974: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x45008978: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x4500897C: bc1f        L_45008990
    if (!c1cs) {
        // 0x45008980: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_45008990;
    }
    // 0x45008980: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x45008984: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x45008988: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x4500898C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_45008990:
    // 0x45008990: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45008994: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x45008998: jal         0x450006C4
    // 0x4500899C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500899C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x450089A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x450089A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x450089A8: beq         $t9, $zero, L_450089BC
    if (ctx->r25 == 0) {
        // 0x450089AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450089BC;
    }
    // 0x450089AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450089B0: jal         0x45005C3C
    // 0x450089B4: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_2;
    // 0x450089B4: nop

    after_2:
    // 0x450089B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450089BC:
    // 0x450089BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x450089C0: jr          $ra
    // 0x450089C4: nop

    return;
    // 0x450089C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_89C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450089C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450089CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450089D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450089D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450089D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x450089DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x450089E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450089E4: addiu       $a1, $zero, 0x276
    ctx->r5 = ADD32(0, 0X276);
    // 0x450089E8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x450089EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x450089F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450089F4: jal         0x450075DC
    // 0x450089F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x450089F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x450089FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45008A00: nop

    // 0x45008A04: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008A08: nop

    // 0x45008A0C: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x45008A10: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45008A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008A18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45008A1C: jr          $ra
    // 0x45008A20: nop

    return;
    // 0x45008A20: nop

;}
RECOMP_FUNC void ovl_mobj_main_8A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008A24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45008A28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45008A2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45008A30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45008A34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45008A38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45008A3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45008A40: addiu       $a1, $zero, 0x276
    ctx->r5 = ADD32(0, 0X276);
    // 0x45008A44: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45008A48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45008A4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45008A50: jal         0x450075DC
    // 0x45008A54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45008A54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45008A58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45008A5C: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x45008A60: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008A64: nop

    // 0x45008A68: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45008A6C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45008A70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008A74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45008A78: jr          $ra
    // 0x45008A7C: nop

    return;
    // 0x45008A7C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008A80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45008A84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45008A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45008A8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45008A90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45008A94: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45008A98: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45008A9C: addiu       $a1, $zero, 0x33A
    ctx->r5 = ADD32(0, 0X33A);
    // 0x45008AA0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45008AA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45008AA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45008AAC: jal         0x450075DC
    // 0x45008AB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45008AB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45008AB4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45008AB8: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x45008ABC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008AC0: addiu       $a1, $zero, 0xF7
    ctx->r5 = ADD32(0, 0XF7);
    // 0x45008AC4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45008AC8: jal         0x45000FA0
    // 0x45008ACC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_1;
    // 0x45008ACC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_1:
    // 0x45008AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45008AD8: jr          $ra
    // 0x45008ADC: nop

    return;
    // 0x45008ADC: nop

;}
RECOMP_FUNC void ovl_mobj_main_8AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008AE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45008AE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45008AE8: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x45008AEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45008AF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45008AF4: addiu       $a1, $zero, 0x394
    ctx->r5 = ADD32(0, 0X394);
    // 0x45008AF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45008AFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45008B00: addiu       $a2, $zero, 0x395
    ctx->r6 = ADD32(0, 0X395);
    // 0x45008B04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45008B08: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x45008B0C: jal         0x450075DC
    // 0x45008B10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45008B10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45008B14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45008B18: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45008B1C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45008B24: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45008B28: jal         0x45005D34
    // 0x45008B2C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45008B2C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_1:
    // 0x45008B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008B34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45008B38: jr          $ra
    // 0x45008B3C: nop

    return;
    // 0x45008B3C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45008B44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45008B48: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x45008B4C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45008B50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45008B54: addiu       $a1, $zero, 0x394
    ctx->r5 = ADD32(0, 0X394);
    // 0x45008B58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45008B5C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45008B60: addiu       $a2, $zero, 0x3C4
    ctx->r6 = ADD32(0, 0X3C4);
    // 0x45008B64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45008B68: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x45008B6C: jal         0x450075DC
    // 0x45008B70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45008B70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45008B74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45008B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45008B7C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008B80: nop

    // 0x45008B84: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45008B88: jal         0x45005D34
    // 0x45008B8C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45008B8C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_1:
    // 0x45008B90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45008B98: jr          $ra
    // 0x45008B9C: nop

    return;
    // 0x45008B9C: nop

;}
RECOMP_FUNC void ovl_mobj_main_8BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45008BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008BA8: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45008BAC: nop

    // 0x45008BB0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x45008BB4: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x45008BB8: bne         $at, $zero, L_45008BC8
    if (ctx->r1 != 0) {
        // 0x45008BBC: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_45008BC8;
    }
    // 0x45008BBC: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45008BC0: jal         0x45005C3C
    // 0x45008BC4: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45008BC4: nop

    after_0:
L_45008BC8:
    // 0x45008BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45008BD0: jr          $ra
    // 0x45008BD4: nop

    return;
    // 0x45008BD4: nop

;}
RECOMP_FUNC void ovl_mobj_main_8BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008BD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008BDC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45008BE0: lwc1        $f0, 0x2274($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2274);
    // 0x45008BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008BE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008BEC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x45008BF0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x45008BF4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x45008BF8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008BFC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45008C00: jal         0x450006C4
    // 0x45008C04: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008C04: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x45008C08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008C0C: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45008C10: addiu       $a2, $a2, 0x15C
    ctx->r6 = ADD32(ctx->r6, 0X15C);
    // 0x45008C14: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45008C18: jal         0x45005A5C
    // 0x45008C1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_1;
    // 0x45008C1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x45008C20: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x45008C24: nop

    // 0x45008C28: lw          $t7, 0x184($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X184);
    // 0x45008C2C: nop

    // 0x45008C30: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x45008C34: sw          $t8, 0x184($v0)
    MEM_W(0X184, ctx->r2) = ctx->r24;
    // 0x45008C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008C3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45008C40: jr          $ra
    // 0x45008C44: nop

    return;
    // 0x45008C44: nop

;}
RECOMP_FUNC void ovl_mobj_main_8C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008C48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008C4C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45008C50: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45008C54: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x45008C58: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x45008C5C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x45008C60: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x45008C64: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x45008C68: lbu         $t4, 0x43($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X43);
    // 0x45008C6C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45008C70: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x45008C74: sll         $t2, $t6, 8
    ctx->r10 = S32(ctx->r14 << 8);
    // 0x45008C78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45008C7C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x45008C80: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x45008C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008C88: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008C8C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x45008C90: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x45008C94: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x45008C98: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008C9C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45008CA0: jal         0x450006C4
    // 0x45008CA4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008CA4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_0:
    // 0x45008CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008CAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45008CB0: jr          $ra
    // 0x45008CB4: nop

    return;
    // 0x45008CB4: nop

;}
RECOMP_FUNC void ovl_mobj_main_8CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008CB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008CC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45008CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45008CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008CCC: jal         0x45008C48
    // 0x45008CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45008CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008CDC: jr          $ra
    // 0x45008CE0: nop

    return;
    // 0x45008CE0: nop

;}
RECOMP_FUNC void ovl_mobj_main_8CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008CE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008CE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008CEC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x45008CF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45008CF4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x45008CF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008CFC: jal         0x45008C48
    // 0x45008D00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008D00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45008D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008D0C: jr          $ra
    // 0x45008D10: nop

    return;
    // 0x45008D10: nop

;}
RECOMP_FUNC void ovl_mobj_main_8D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008D14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008D18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008D1C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x45008D20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45008D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45008D28: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x45008D2C: jal         0x45008C48
    // 0x45008D30: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008D30: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x45008D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008D3C: jr          $ra
    // 0x45008D40: nop

    return;
    // 0x45008D40: nop

;}
RECOMP_FUNC void ovl_mobj_main_8D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008D44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008D4C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x45008D50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45008D54: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x45008D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008D5C: jal         0x45008C48
    // 0x45008D60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008D60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45008D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008D6C: jr          $ra
    // 0x45008D70: nop

    return;
    // 0x45008D70: nop

;}
RECOMP_FUNC void ovl_mobj_main_8D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008D74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008D7C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x45008D80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45008D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45008D88: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x45008D8C: jal         0x45008C48
    // 0x45008D90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008D90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45008D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008D98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008D9C: jr          $ra
    // 0x45008DA0: nop

    return;
    // 0x45008DA0: nop

;}
RECOMP_FUNC void ovl_mobj_main_8DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008DA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45008DA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45008DAC: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x45008DB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45008DB4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x45008DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008DBC: jal         0x45008C48
    // 0x45008DC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_0;
    // 0x45008DC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x45008DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45008DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45008DCC: jr          $ra
    // 0x45008DD0: nop

    return;
    // 0x45008DD0: nop

;}
RECOMP_FUNC void ovl_mobj_main_8DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008DD4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008DD8: nop

    // 0x45008DDC: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x45008DE0: jr          $ra
    // 0x45008DE4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45008DE4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_8DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008DE8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45008DEC: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x45008DF0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45008DF4: jr          $ra
    // 0x45008DF8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45008DF8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_8DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008DFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008E04: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008E08: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008E0C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45008E10: jal         0x450006C4
    // 0x45008E14: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008E14: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x45008E18: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008E1C: jal         0x450057BC
    // 0x45008E20: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45008E20: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    after_1:
    // 0x45008E24: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x45008E28: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x45008E2C: lw          $a1, 0x1CC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1CC);
    // 0x45008E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008E34: jal         0x45000F34
    // 0x45008E38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45008E38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x45008E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008E40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45008E44: jr          $ra
    // 0x45008E48: nop

    return;
    // 0x45008E48: nop

;}
RECOMP_FUNC void ovl_mobj_main_8E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008E54: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008E58: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008E5C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45008E60: jal         0x450006C4
    // 0x45008E64: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008E64: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x45008E68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45008E6C: jal         0x450057BC
    // 0x45008E70: addiu       $a1, $zero, 0x3B0
    ctx->r5 = ADD32(0, 0X3B0);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45008E70: addiu       $a1, $zero, 0x3B0
    ctx->r5 = ADD32(0, 0X3B0);
    after_1:
    // 0x45008E74: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x45008E78: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x45008E7C: lw          $a1, 0x1CC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1CC);
    // 0x45008E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45008E84: jal         0x45000F34
    // 0x45008E88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45008E88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x45008E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45008E90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45008E94: jr          $ra
    // 0x45008E98: nop

    return;
    // 0x45008E98: nop

;}
