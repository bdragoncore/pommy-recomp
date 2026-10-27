#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_8E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008E9C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x45008EA0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x45008EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45008EA8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x45008EAC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45008EB0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x45008EB4: jal         0x450006C4
    // 0x45008EB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45008EB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x45008EBC: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45008EC0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x45008EC4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x45008EC8: jal         0x45000F34
    // 0x45008ECC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x45008ECC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x45008ED0: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45008ED4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x45008ED8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x45008EDC: jal         0x45000F34
    // 0x45008EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45008EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x45008EE4: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45008EE8: lw          $a2, 0x1D0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D0);
    // 0x45008EEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45008EF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45008EF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45008EF8: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x45008EFC: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x45008F00: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x45008F04: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x45008F08: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45008F0C: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x45008F10: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x45008F14: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x45008F18: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x45008F1C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45008F20: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45008F24: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x45008F28: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45008F2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45008F30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45008F34: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45008F38: jal         0x45000F34
    // 0x45008F3C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x45008F3C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x45008F40: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x45008F44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x45008F48: jr          $ra
    // 0x45008F4C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x45008F4C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_mobj_main_8F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45008F54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45008F58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x45008F5C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45008F60: addiu       $at, $zero, 0x115
    ctx->r1 = ADD32(0, 0X115);
    // 0x45008F64: bne         $t6, $at, L_45008F8C
    if (ctx->r14 != ctx->r1) {
        // 0x45008F68: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_45008F8C;
    }
    // 0x45008F68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45008F6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45008F70: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    // 0x45008F74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45008F78: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x45008F7C: jal         0x45002294
    // 0x45008F80: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_2294(rdram, ctx);
        goto after_0;
    // 0x45008F80: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x45008F84: b           L_45008FC4
    // 0x45008F88: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
        goto L_45008FC4;
    // 0x45008F88: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
L_45008F8C:
    // 0x45008F8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45008F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45008F94: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45008F98: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x45008F9C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x45008FA0: jal         0x45002294
    // 0x45008FA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_2294(rdram, ctx);
        goto after_1;
    // 0x45008FA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x45008FA8: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x45008FAC: addiu       $at, $zero, 0xE5
    ctx->r1 = ADD32(0, 0XE5);
    // 0x45008FB0: bne         $t7, $at, L_45008FC0
    if (ctx->r15 != ctx->r1) {
        // 0x45008FB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45008FC0;
    }
    // 0x45008FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45008FB8: jal         0x45000F80
    // 0x45008FBC: addiu       $a1, $zero, 0x1C8
    ctx->r5 = ADD32(0, 0X1C8);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x45008FBC: addiu       $a1, $zero, 0x1C8
    ctx->r5 = ADD32(0, 0X1C8);
    after_2:
L_45008FC0:
    // 0x45008FC0: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
L_45008FC4:
    // 0x45008FC4: nop

    // 0x45008FC8: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x45008FCC: sw          $t9, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r25;
    // 0x45008FD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45008FD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x45008FD8: jr          $ra
    // 0x45008FDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x45008FDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_8FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45008FE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45008FE4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45008FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45008FEC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45008FF0: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x45008FF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x45008FF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45008FFC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x45009000: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x45009004: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45009008: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x4500900C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x45009010: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x45009014: jal         0x450006C4
    // 0x45009018: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45009018: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x4500901C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45009024: jr          $ra
    // 0x45009028: nop

    return;
    // 0x45009028: nop

;}
RECOMP_FUNC void ovl_mobj_main_902C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500902C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009034: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x45009038: jal         0x45008FE0
    // 0x4500903C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_8FE0(rdram, ctx);
        goto after_0;
    // 0x4500903C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x45009040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009048: jr          $ra
    // 0x4500904C: nop

    return;
    // 0x4500904C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45009054: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45009058: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4500905C: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x45009060: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x45009064: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x45009068: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500906C: jal         0x45005B24
    // 0x45009070: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009070: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45009074: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45009078: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4500907C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45009080: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45009084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009088: jal         0x45005824
    // 0x4500908C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_5824(rdram, ctx);
        goto after_1;
    // 0x4500908C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x45009090: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45009094: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x45009098: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x4500909C: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x450090A0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x450090A4: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x450090A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450090AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x450090B0: jr          $ra
    // 0x450090B4: nop

    return;
    // 0x450090B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_90B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450090B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450090BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450090C0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450090C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450090C8: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x450090CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x450090D0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450090D4: ori         $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 | 0X8000;
    // 0x450090D8: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    // 0x450090DC: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x450090E0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x450090E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x450090E8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x450090EC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450090F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450090F4: jal         0x450006C4
    // 0x450090F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450090F8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x450090FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009100: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45009104: jr          $ra
    // 0x45009108: nop

    return;
    // 0x45009108: nop

;}
RECOMP_FUNC void ovl_mobj_main_910C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500910C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45009110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45009114: jal         0x450090B8
    // 0x45009118: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_mobj_main_90B8(rdram, ctx);
        goto after_0;
    // 0x45009118: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500911C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45009120: lui         $a1, 0x43AC
    ctx->r5 = S32(0X43AC << 16);
    // 0x45009124: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x45009128: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4500912C: jal         0x45005B24
    // 0x45009130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_1;
    // 0x45009130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x45009134: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45009138: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4500913C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x45009140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009144: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x45009148: jal         0x45005824
    // 0x4500914C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_mobj_main_5824(rdram, ctx);
        goto after_2;
    // 0x4500914C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x45009150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45009154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45009158: jr          $ra
    // 0x4500915C: nop

    return;
    // 0x4500915C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009160: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45009164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009168: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500916C: lwc1        $f0, 0x2278($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2278);
    // 0x45009170: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009174: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45009178: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4500917C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45009180: ori         $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 | 0X8000;
    // 0x45009184: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    // 0x45009188: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500918C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009190: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x45009194: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x45009198: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x4500919C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450091A0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450091A4: jal         0x450006C4
    // 0x450091A8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450091A8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x450091AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450091B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450091B4: jr          $ra
    // 0x450091B8: nop

    return;
    // 0x450091B8: nop

;}
RECOMP_FUNC void ovl_mobj_main_91BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450091BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x450091C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450091C4: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x450091C8: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x450091CC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x450091D0: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x450091D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x450091D8: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x450091DC: beq         $t8, $zero, L_45009358
    if (ctx->r24 == 0) {
        // 0x450091E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_45009358;
    }
    // 0x450091E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x450091E4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450091E8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x450091EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x450091F0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x450091F4: jal         0x450006C4
    // 0x450091F8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450091F8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x450091FC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45009200: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x45009204: lw          $t9, 0x184($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X184);
    // 0x45009208: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x4500920C: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x45009210: beq         $t0, $zero, L_450092B4
    if (ctx->r8 == 0) {
        // 0x45009214: nop
    
            goto L_450092B4;
    }
    // 0x45009214: nop

    // 0x45009218: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x4500921C: beq         $at, $zero, L_45009260
    if (ctx->r1 == 0) {
        // 0x45009220: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_45009260;
    }
    // 0x45009220: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x45009224: bne         $v1, $at, L_45009240
    if (ctx->r3 != ctx->r1) {
        // 0x45009228: lui         $at, 0x4501
        ctx->r1 = S32(0X4501 << 16);
            goto L_45009240;
    }
    // 0x45009228: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500922C: lwc1        $f0, 0x227C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X227C);
    // 0x45009230: nop

    // 0x45009234: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x45009238: b           L_45009340
    // 0x4500923C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_45009340;
    // 0x4500923C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_45009240:
    // 0x45009240: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45009244: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x45009248: lwc1        $f4, 0x2280($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2280);
    // 0x4500924C: nop

    // 0x45009250: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x45009254: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x45009258: b           L_45009340
    // 0x4500925C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_45009340;
    // 0x4500925C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_45009260:
    // 0x45009260: slti        $at, $v1, 0x15
    ctx->r1 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
    // 0x45009264: beq         $at, $zero, L_45009340
    if (ctx->r1 == 0) {
        // 0x45009268: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_45009340;
    }
    // 0x45009268: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4500926C: bne         $v1, $at, L_45009298
    if (ctx->r3 != ctx->r1) {
        // 0x45009270: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_45009298;
    }
    // 0x45009270: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x45009274: jal         0x45009160
    // 0x45009278: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_mobj_main_9160(rdram, ctx);
        goto after_1;
    // 0x45009278: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x4500927C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45009280: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45009284: lw          $t1, 0x184($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X184);
    // 0x45009288: nop

    // 0x4500928C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x45009290: b           L_4500936C
    // 0x45009294: sw          $t2, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r10;
        goto L_4500936C;
    // 0x45009294: sw          $t2, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r10;
L_45009298:
    // 0x45009298: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500929C: lwc1        $f8, 0x2284($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2284);
    // 0x450092A0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450092A4: nop

    // 0x450092A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x450092AC: b           L_45009340
    // 0x450092B0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
        goto L_45009340;
    // 0x450092B0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
L_450092B4:
    // 0x450092B4: beq         $at, $zero, L_450092EC
    if (ctx->r1 == 0) {
        // 0x450092B8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_450092EC;
    }
    // 0x450092B8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x450092BC: bne         $v1, $at, L_450092D0
    if (ctx->r3 != ctx->r1) {
        // 0x450092C0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_450092D0;
    }
    // 0x450092C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450092C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x450092C8: b           L_45009340
    // 0x450092CC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
        goto L_45009340;
    // 0x450092CC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
L_450092D0:
    // 0x450092D0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450092D4: lwc1        $f4, 0x2288($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2288);
    // 0x450092D8: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450092DC: nop

    // 0x450092E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x450092E4: b           L_45009340
    // 0x450092E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
        goto L_45009340;
    // 0x450092E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_450092EC:
    // 0x450092EC: slti        $at, $v1, 0x15
    ctx->r1 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
    // 0x450092F0: beq         $at, $zero, L_45009340
    if (ctx->r1 == 0) {
        // 0x450092F4: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_45009340;
    }
    // 0x450092F4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x450092F8: bne         $v1, $at, L_45009324
    if (ctx->r3 != ctx->r1) {
        // 0x450092FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_45009324;
    }
    // 0x450092FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x45009300: jal         0x450090B8
    // 0x45009304: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_mobj_main_90B8(rdram, ctx);
        goto after_2;
    // 0x45009304: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x45009308: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4500930C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45009310: lw          $t3, 0x184($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X184);
    // 0x45009314: nop

    // 0x45009318: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x4500931C: b           L_4500936C
    // 0x45009320: sw          $t4, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r12;
        goto L_4500936C;
    // 0x45009320: sw          $t4, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r12;
L_45009324:
    // 0x45009324: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45009328: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4500932C: lwc1        $f8, 0x228C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X228C);
    // 0x45009330: nop

    // 0x45009334: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x45009338: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4500933C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_45009340:
    // 0x45009340: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45009344: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45009348: jal         0x450006C4
    // 0x4500934C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4500934C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x45009350: b           L_45009370
    // 0x45009354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45009370;
    // 0x45009354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45009358:
    // 0x45009358: slti        $at, $v1, 0x159
    ctx->r1 = SIGNED(ctx->r3) < 0X159 ? 1 : 0;
    // 0x4500935C: bne         $at, $zero, L_45009370
    if (ctx->r1 != 0) {
        // 0x45009360: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45009370;
    }
    // 0x45009360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009364: jal         0x45005C10
    // 0x45009368: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_4;
    // 0x45009368: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_4500936C:
    // 0x4500936C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45009370:
    // 0x45009370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x45009374: jr          $ra
    // 0x45009378: nop

    return;
    // 0x45009378: nop

;}
RECOMP_FUNC void ovl_mobj_main_937C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500937C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45009380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009388: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500938C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45009390: jal         0x4500640C
    // 0x45009394: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45009394: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45009398: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500939C: jal         0x45005DA4
    // 0x450093A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_1;
    // 0x450093A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x450093A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450093A8: jal         0x45005D34
    // 0x450093AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_2;
    // 0x450093AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x450093B0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x450093B4: nop

    // 0x450093B8: sw          $zero, 0x188($t6)
    MEM_W(0X188, ctx->r14) = 0;
    // 0x450093BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450093C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450093C4: jr          $ra
    // 0x450093C8: nop

    return;
    // 0x450093C8: nop

;}
RECOMP_FUNC void ovl_mobj_main_93CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450093CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450093D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450093D4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450093D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x450093DC: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x450093E0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450093E4: jal         0x45005DA4
    // 0x450093E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_0;
    // 0x450093E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450093EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450093F0: jal         0x45005D34
    // 0x450093F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450093F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x450093F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450093FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009400: jr          $ra
    // 0x45009404: nop

    return;
    // 0x45009404: nop

;}
RECOMP_FUNC void ovl_mobj_main_9408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500940C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009410: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45009414: nop

    // 0x45009418: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4500941C: slti        $at, $v0, 0xAB
    ctx->r1 = SIGNED(ctx->r2) < 0XAB ? 1 : 0;
    // 0x45009420: bne         $at, $zero, L_45009430
    if (ctx->r1 != 0) {
        // 0x45009424: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_45009430;
    }
    // 0x45009424: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45009428: jal         0x45005C3C
    // 0x4500942C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x4500942C: nop

    after_0:
L_45009430:
    // 0x45009430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009438: jr          $ra
    // 0x4500943C: nop

    return;
    // 0x4500943C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009440: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009444: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45009448: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4500944C: jr          $ra
    // 0x45009450: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45009450: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_9454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009454: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009458: nop

    // 0x4500945C: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45009460: jr          $ra
    // 0x45009464: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45009464: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_9468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009468: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500946C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009470: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x45009474: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45009478: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x4500947C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x45009480: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x45009484: jal         0x450006C4
    // 0x45009488: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45009488: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x4500948C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45009490: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x45009494: lw          $t6, 0x184($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X184);
    // 0x45009498: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500949C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x450094A0: beq         $t7, $zero, L_450094EC
    if (ctx->r15 == 0) {
        // 0x450094A4: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_450094EC;
    }
    // 0x450094A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x450094A8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450094AC: lwc1        $f6, 0x2290($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2290);
    // 0x450094B0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450094B4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x450094B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x450094BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x450094C0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x450094C4: lwc1        $f10, 0x204($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X204);
    // 0x450094C8: nop

    // 0x450094CC: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x450094D0: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x450094D4: nop

    // 0x450094D8: bc1f        L_4500952C
    if (!c1cs) {
        // 0x450094DC: nop
    
            goto L_4500952C;
    }
    // 0x450094DC: nop

    // 0x450094E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x450094E4: b           L_4500952C
    // 0x450094E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4500952C;
    // 0x450094E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_450094EC:
    // 0x450094EC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450094F0: lwc1        $f4, 0x2294($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2294);
    // 0x450094F4: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450094F8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x450094FC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x45009500: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45009504: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x45009508: lwc1        $f10, 0x204($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X204);
    // 0x4500950C: nop

    // 0x45009510: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x45009514: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x45009518: nop

    // 0x4500951C: bc1f        L_4500952C
    if (!c1cs) {
        // 0x45009520: nop
    
            goto L_4500952C;
    }
    // 0x45009520: nop

    // 0x45009524: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x45009528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500952C:
    // 0x4500952C: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45009530: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x45009534: jal         0x450006C4
    // 0x45009538: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45009538: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x4500953C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x45009540: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45009544: beq         $v0, $zero, L_45009558
    if (ctx->r2 == 0) {
        // 0x45009548: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45009558;
    }
    // 0x45009548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500954C: jal         0x45005C10
    // 0x45009550: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_2;
    // 0x45009550: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x45009554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45009558:
    // 0x45009558: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4500955C: jr          $ra
    // 0x45009560: nop

    return;
    // 0x45009560: nop

;}
RECOMP_FUNC void ovl_mobj_main_9564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009564: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009568: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500956C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45009570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009574: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x45009578: jal         0x45009C10
    // 0x4500957C: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_0;
    // 0x4500957C: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    after_0:
    // 0x45009580: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009588: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500958C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009590: addiu       $a1, $zero, 0x362
    ctx->r5 = ADD32(0, 0X362);
    // 0x45009594: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009598: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500959C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x450095A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450095A4: jal         0x450075DC
    // 0x450095A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x450095A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x450095AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x450095B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x450095B4: jr          $ra
    // 0x450095B8: nop

    return;
    // 0x450095B8: nop

;}
RECOMP_FUNC void ovl_mobj_main_95BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450095BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450095C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x450095C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450095C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x450095CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x450095D0: jal         0x45009C10
    // 0x450095D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_0;
    // 0x450095D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x450095D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450095DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450095E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450095E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x450095E8: addiu       $a1, $zero, 0x363
    ctx->r5 = ADD32(0, 0X363);
    // 0x450095EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x450095F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x450095F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x450095F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450095FC: jal         0x450075DC
    // 0x45009600: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x45009600: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x45009604: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4500960C: jr          $ra
    // 0x45009610: nop

    return;
    // 0x45009610: nop

;}
RECOMP_FUNC void ovl_mobj_main_9614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500961C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45009620: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x45009624: jal         0x4500640C
    // 0x45009628: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45009628: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x4500962C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009630: jal         0x45005D34
    // 0x45009634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45009634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45009638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500963C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009640: jr          $ra
    // 0x45009644: nop

    return;
    // 0x45009644: nop

;}
RECOMP_FUNC void ovl_mobj_main_9648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500964C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45009650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009654: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009658: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500965C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45009660: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45009664: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45009668: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500966C: jal         0x45005B24
    // 0x45009670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45009674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500967C: jr          $ra
    // 0x45009680: nop

    return;
    // 0x45009680: nop

;}
RECOMP_FUNC void ovl_mobj_main_9684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009684: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45009688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500968C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45009690: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45009694: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45009698: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4500969C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450096A0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450096A4: jal         0x450006C4
    // 0x450096A8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450096A8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x450096AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x450096B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x450096B4: jal         0x450057BC
    // 0x450096B8: nop

    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x450096B8: nop

    after_1:
    // 0x450096BC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x450096C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x450096C4: beq         $a1, $at, L_450096DC
    if (ctx->r5 == ctx->r1) {
        // 0x450096C8: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_450096DC;
    }
    // 0x450096C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x450096CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x450096D0: jal         0x450057BC
    // 0x450096D4: nop

    ovl_mobj_main_57BC(rdram, ctx);
        goto after_2;
    // 0x450096D4: nop

    after_2:
    // 0x450096D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_450096DC:
    // 0x450096DC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x450096E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x450096E4: jal         0x45005B24
    // 0x450096E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_3;
    // 0x450096E8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x450096EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450096F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450096F4: jr          $ra
    // 0x450096F8: nop

    return;
    // 0x450096F8: nop

;}
RECOMP_FUNC void ovl_mobj_main_96FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450096FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009704: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x45009708: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4500970C: jal         0x45005B24
    // 0x45009710: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009710: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500971C: jr          $ra
    // 0x45009720: nop

    return;
    // 0x45009720: nop

;}
RECOMP_FUNC void ovl_mobj_main_9724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009724: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45009728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500972C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009730: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45009734: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45009738: jal         0x45005B24
    // 0x4500973C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x4500973C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009748: jr          $ra
    // 0x4500974C: nop

    return;
    // 0x4500974C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500975C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x45009760: jal         0x45005B24
    // 0x45009764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500976C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009770: jr          $ra
    // 0x45009774: nop

    return;
    // 0x45009774: nop

;}
RECOMP_FUNC void ovl_mobj_main_9778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500977C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009780: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x45009784: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x45009788: jal         0x45005B24
    // 0x4500978C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x4500978C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009798: jr          $ra
    // 0x4500979C: nop

    return;
    // 0x4500979C: nop

;}
RECOMP_FUNC void ovl_mobj_main_97A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450097A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450097A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450097A8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x450097AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x450097B0: jal         0x45005B24
    // 0x450097B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x450097B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x450097B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450097BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450097C0: jr          $ra
    // 0x450097C4: nop

    return;
    // 0x450097C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_97C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450097C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450097CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450097D0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x450097D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x450097D8: jal         0x45005B24
    // 0x450097DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x450097DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x450097E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450097E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450097E8: jr          $ra
    // 0x450097EC: nop

    return;
    // 0x450097EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_97F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450097F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450097F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450097F8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x450097FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x45009800: jal         0x45005B24
    // 0x45009804: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009804: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500980C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009810: jr          $ra
    // 0x45009814: nop

    return;
    // 0x45009814: nop

;}
RECOMP_FUNC void ovl_mobj_main_9818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500981C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009820: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009824: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x45009828: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500982C: bne         $t7, $zero, L_45009864
    if (ctx->r15 != 0) {
        // 0x45009830: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_45009864;
    }
    // 0x45009830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009834: sw          $t8, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r24;
    // 0x45009838: jal         0x45005D34
    // 0x4500983C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_0;
    // 0x4500983C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45009840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009844: jal         0x450057BC
    // 0x45009848: addiu       $a1, $zero, 0x311
    ctx->r5 = ADD32(0, 0X311);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45009848: addiu       $a1, $zero, 0x311
    ctx->r5 = ADD32(0, 0X311);
    after_1:
    // 0x4500984C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009850: nop

    // 0x45009854: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
    // 0x45009858: nop

    // 0x4500985C: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x45009860: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
L_45009864:
    // 0x45009864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500986C: jr          $ra
    // 0x45009870: nop

    return;
    // 0x45009870: nop

;}
RECOMP_FUNC void ovl_mobj_main_9874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500987C: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45009880: nop

    // 0x45009884: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x45009888: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x4500988C: bne         $at, $zero, L_4500989C
    if (ctx->r1 != 0) {
        // 0x45009890: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_4500989C;
    }
    // 0x45009890: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45009894: jal         0x45005C3C
    // 0x45009898: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45009898: nop

    after_0:
L_4500989C:
    // 0x4500989C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450098A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450098A4: jr          $ra
    // 0x450098A8: nop

    return;
    // 0x450098A8: nop

;}
RECOMP_FUNC void ovl_mobj_main_98AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450098AC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450098B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450098B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450098B8: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x450098BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450098C0: bc1f        L_450098D8
    if (!c1cs) {
        // 0x450098C4: lui         $a1, 0x41F0
        ctx->r5 = S32(0X41F0 << 16);
            goto L_450098D8;
    }
    // 0x450098C4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x450098C8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450098CC: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x450098D0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450098D4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_450098D8:
    // 0x450098D8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450098DC: jal         0x450063D0
    // 0x450098E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x450098E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450098E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450098E8: jal         0x45005D34
    // 0x450098EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450098EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x450098F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450098F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450098F8: jr          $ra
    // 0x450098FC: nop

    return;
    // 0x450098FC: nop

;}
RECOMP_FUNC void ovl_mobj_main_9900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009900: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45009904: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500990C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x45009910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009914: bc1f        L_4500992C
    if (!c1cs) {
        // 0x45009918: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_4500992C;
    }
    // 0x45009918: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500991C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009920: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45009924: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45009928: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_4500992C:
    // 0x4500992C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45009930: jal         0x4500640C
    // 0x45009934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45009934: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45009938: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500993C: jal         0x45005D34
    // 0x45009940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45009940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45009944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500994C: jr          $ra
    // 0x45009950: nop

    return;
    // 0x45009950: nop

;}
RECOMP_FUNC void ovl_mobj_main_9954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500995C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009964: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45009968: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500996C: jal         0x45005DA4
    // 0x45009970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_0;
    // 0x45009970: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45009974: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500997C: addiu       $a1, $zero, 0x36C
    ctx->r5 = ADD32(0, 0X36C);
    // 0x45009980: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x45009984: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x45009988: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x4500998C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x45009990: jal         0x45000FA0
    // 0x45009994: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_1;
    // 0x45009994: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x45009998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500999C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450099A0: jr          $ra
    // 0x450099A4: nop

    return;
    // 0x450099A4: nop

;}
RECOMP_FUNC void ovl_mobj_main_99A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450099A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450099AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x450099B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450099B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x450099B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x450099BC: jal         0x45009C10
    // 0x450099C0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_0;
    // 0x450099C0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x450099C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450099C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450099CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450099D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x450099D4: addiu       $a1, $zero, 0x386
    ctx->r5 = ADD32(0, 0X386);
    // 0x450099D8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x450099DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x450099E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x450099E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450099E8: jal         0x450075DC
    // 0x450099EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x450099EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x450099F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x450099F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x450099F8: jr          $ra
    // 0x450099FC: nop

    return;
    // 0x450099FC: nop

;}
RECOMP_FUNC void ovl_mobj_main_9A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009A00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009A04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009A08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45009A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009A10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x45009A14: jal         0x45009C10
    // 0x45009A18: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_0;
    // 0x45009A18: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_0:
    // 0x45009A1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009A20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009A24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009A28: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009A2C: addiu       $a1, $zero, 0x387
    ctx->r5 = ADD32(0, 0X387);
    // 0x45009A30: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45009A38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009A3C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009A40: jal         0x450075DC
    // 0x45009A44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x45009A44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x45009A48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009A50: jr          $ra
    // 0x45009A54: nop

    return;
    // 0x45009A54: nop

;}
RECOMP_FUNC void ovl_mobj_main_9A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009A58: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45009A5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x45009A60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45009A64: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x45009A68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45009A6C: beq         $at, $zero, L_45009AD8
    if (ctx->r1 == 0) {
        // 0x45009A70: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_45009AD8;
    }
    // 0x45009A70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x45009A74: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x45009A78: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45009A7C: addu        $at, $at, $t6
    gpr jr_addend_45009A88 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45009A80: lw          $t6, 0x2298($at)
    ctx->r14 = ADD32(ctx->r1, 0X2298);
    // 0x45009A84: nop

    // 0x45009A88: jr          $t6
    // 0x45009A8C: nop

    switch (jr_addend_45009A88 >> 2) {
        case 0: goto L_45009A90; break;
        case 1: goto L_45009A9C; break;
        case 2: goto L_45009AAC; break;
        case 3: goto L_45009ABC; break;
        case 4: goto L_45009ACC; break;
        default: switch_error(__func__, 0x45009A88, 0x45012298);
    }
    // 0x45009A8C: nop

L_45009A90:
    // 0x45009A90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45009A94: b           L_45009ADC
    // 0x45009A98: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
        goto L_45009ADC;
    // 0x45009A98: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_45009A9C:
    // 0x45009A9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009AA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45009AA4: b           L_45009ADC
    // 0x45009AA8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
        goto L_45009ADC;
    // 0x45009AA8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_45009AAC:
    // 0x45009AAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x45009AB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45009AB4: b           L_45009ADC
    // 0x45009AB8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
        goto L_45009ADC;
    // 0x45009AB8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_45009ABC:
    // 0x45009ABC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x45009AC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45009AC4: b           L_45009ADC
    // 0x45009AC8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
        goto L_45009ADC;
    // 0x45009AC8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_45009ACC:
    // 0x45009ACC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x45009AD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45009AD4: nop

L_45009AD8:
    // 0x45009AD8: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
L_45009ADC:
    // 0x45009ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009AE0: bc1t        L_45009AF4
    if (c1cs) {
        // 0x45009AE4: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_45009AF4;
    }
    // 0x45009AE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x45009AE8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45009AEC: jal         0x45005824
    // 0x45009AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_mobj_main_5824(rdram, ctx);
        goto after_0;
    // 0x45009AF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_45009AF4:
    // 0x45009AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45009AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45009AFC: jr          $ra
    // 0x45009B00: nop

    return;
    // 0x45009B00: nop

;}
RECOMP_FUNC void ovl_mobj_main_9B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009B04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009B08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009B0C: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45009B10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45009B14: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x45009B18: beq         $t6, $zero, L_45009B60
    if (ctx->r14 == 0) {
        // 0x45009B1C: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_45009B60;
    }
    // 0x45009B1C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45009B20: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45009B24: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x45009B28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009B2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009B30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009B34: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45009B38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x45009B3C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x45009B40: addiu       $a1, $zero, 0x378
    ctx->r5 = ADD32(0, 0X378);
    // 0x45009B44: addiu       $a2, $zero, 0x378
    ctx->r6 = ADD32(0, 0X378);
    // 0x45009B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45009B4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009B50: jal         0x450075DC
    // 0x45009B54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009B54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009B58: b           L_45009B6C
    // 0x45009B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_45009B6C;
    // 0x45009B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45009B60:
    // 0x45009B60: jal         0x45005B24
    // 0x45009B64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_1;
    // 0x45009B64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x45009B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45009B6C:
    // 0x45009B6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009B70: jr          $ra
    // 0x45009B74: nop

    return;
    // 0x45009B74: nop

;}
RECOMP_FUNC void ovl_mobj_main_9B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009B7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009B80: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45009B84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45009B88: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x45009B8C: bne         $t6, $zero, L_45009BD0
    if (ctx->r14 != 0) {
        // 0x45009B90: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_45009BD0;
    }
    // 0x45009B90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45009B94: ori         $t7, $v0, 0x20
    ctx->r15 = ctx->r2 | 0X20;
    // 0x45009B98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009B9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009BA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009BA4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45009BA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x45009BAC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x45009BB0: addiu       $a1, $zero, 0x379
    ctx->r5 = ADD32(0, 0X379);
    // 0x45009BB4: addiu       $a2, $zero, 0x379
    ctx->r6 = ADD32(0, 0X379);
    // 0x45009BB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45009BBC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009BC0: jal         0x450075DC
    // 0x45009BC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009BC4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009BC8: b           L_45009BDC
    // 0x45009BCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_45009BDC;
    // 0x45009BCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45009BD0:
    // 0x45009BD0: jal         0x45005B24
    // 0x45009BD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_1;
    // 0x45009BD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x45009BD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45009BDC:
    // 0x45009BDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009BE0: jr          $ra
    // 0x45009BE4: nop

    return;
    // 0x45009BE4: nop

;}
RECOMP_FUNC void ovl_mobj_main_9BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009BF0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x45009BF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x45009BF8: jal         0x45005B24
    // 0x45009BFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45009BFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45009C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009C08: jr          $ra
    // 0x45009C0C: nop

    return;
    // 0x45009C0C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009C18: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x45009C1C: beq         $a1, $zero, L_45009C38
    if (ctx->r5 == 0) {
        // 0x45009C20: sw          $a2, 0x218($a0)
        MEM_W(0X218, ctx->r4) = ctx->r6;
            goto L_45009C38;
    }
    // 0x45009C20: sw          $a2, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r6;
    // 0x45009C24: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009C28: nop

    // 0x45009C2C: ori         $t7, $t6, 0xC0
    ctx->r15 = ctx->r14 | 0XC0;
    // 0x45009C30: b           L_45009C48
    // 0x45009C34: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
        goto L_45009C48;
    // 0x45009C34: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_45009C38:
    // 0x45009C38: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45009C3C: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x45009C40: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x45009C44: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
L_45009C48:
    // 0x45009C48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x45009C4C: lui         $t2, 0x4501
    ctx->r10 = S32(0X4501 << 16);
    // 0x45009C50: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x45009C54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x45009C58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x45009C5C: addiu       $t2, $t2, -0x390
    ctx->r10 = ADD32(ctx->r10, -0X390);
    // 0x45009C60: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x45009C64: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45009C68: jal         0x45005A5C
    // 0x45009C6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45009C6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45009C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009C78: jr          $ra
    // 0x45009C7C: nop

    return;
    // 0x45009C7C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009C80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009C88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45009C8C: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45009C90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45009C94: addiu       $a2, $a2, 0x29C
    ctx->r6 = ADD32(ctx->r6, 0X29C);
    // 0x45009C98: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45009C9C: jal         0x45005A5C
    // 0x45009CA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45009CA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45009CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009CA8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45009CAC: jal         0x4500640C
    // 0x45009CB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_1;
    // 0x45009CB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x45009CB4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x45009CB8: nop

    // 0x45009CBC: sw          $zero, 0x188($t6)
    MEM_W(0X188, ctx->r14) = 0;
    // 0x45009CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009CC8: jr          $ra
    // 0x45009CCC: nop

    return;
    // 0x45009CCC: nop

;}
RECOMP_FUNC void ovl_mobj_main_9CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009CD8: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45009CDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45009CE0: addiu       $a2, $a2, 0x2B0
    ctx->r6 = ADD32(ctx->r6, 0X2B0);
    // 0x45009CE4: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45009CE8: jal         0x45005A5C
    // 0x45009CEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45009CEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45009CF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009CF4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x45009CF8: jal         0x450063D0
    // 0x45009CFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_1;
    // 0x45009CFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x45009D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009D08: jr          $ra
    // 0x45009D0C: nop

    return;
    // 0x45009D0C: nop

;}
RECOMP_FUNC void ovl_mobj_main_9D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009D18: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45009D1C: nop

    // 0x45009D20: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x45009D24: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x45009D28: bne         $at, $zero, L_45009D38
    if (ctx->r1 != 0) {
        // 0x45009D2C: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_45009D38;
    }
    // 0x45009D2C: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x45009D30: jal         0x45005C3C
    // 0x45009D34: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45009D34: nop

    after_0:
L_45009D38:
    // 0x45009D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009D40: jr          $ra
    // 0x45009D44: nop

    return;
    // 0x45009D44: nop

;}
RECOMP_FUNC void ovl_mobj_main_9D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009D48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009D4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009D54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009D58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009D5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x45009D60: addiu       $a1, $zero, 0x383
    ctx->r5 = ADD32(0, 0X383);
    // 0x45009D64: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009D68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45009D6C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009D70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45009D74: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009D78: jal         0x450075DC
    // 0x45009D7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009D7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009D80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009D88: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009D8C: jal         0x45009C10
    // 0x45009D90: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_1;
    // 0x45009D90: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    after_1:
    // 0x45009D94: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x45009D98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009D9C: beq         $t6, $zero, L_45009DC0
    if (ctx->r14 == 0) {
        // 0x45009DA0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_45009DC0;
    }
    // 0x45009DA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009DA4: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45009DA8: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x45009DAC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x45009DB0: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x45009DB4: ori         $t0, $t8, 0x40
    ctx->r8 = ctx->r24 | 0X40;
    // 0x45009DB8: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
    // 0x45009DBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45009DC0:
    // 0x45009DC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009DC4: jr          $ra
    // 0x45009DC8: nop

    return;
    // 0x45009DC8: nop

;}
RECOMP_FUNC void ovl_mobj_main_9DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009DCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009DD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009DD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009DD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009DE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45009DE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009DE8: addiu       $a1, $zero, 0x384
    ctx->r5 = ADD32(0, 0X384);
    // 0x45009DEC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009DF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45009DF4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009DF8: jal         0x450075DC
    // 0x45009DFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009DFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009E00: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009E08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009E0C: jal         0x45009C10
    // 0x45009E10: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_1;
    // 0x45009E10: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    after_1:
    // 0x45009E14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009E1C: jr          $ra
    // 0x45009E20: nop

    return;
    // 0x45009E20: nop

;}
RECOMP_FUNC void ovl_mobj_main_9E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009E24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009E28: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009E2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009E30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009E34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009E38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45009E3C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009E40: addiu       $a1, $zero, 0x385
    ctx->r5 = ADD32(0, 0X385);
    // 0x45009E44: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x45009E48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45009E4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009E50: jal         0x450075DC
    // 0x45009E54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009E54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009E58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45009E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45009E60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x45009E64: jal         0x45009C10
    // 0x45009E68: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    ovl_mobj_main_9C10(rdram, ctx);
        goto after_1;
    // 0x45009E68: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_1:
    // 0x45009E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009E70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009E74: jr          $ra
    // 0x45009E78: nop

    return;
    // 0x45009E78: nop

;}
RECOMP_FUNC void ovl_mobj_main_9E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009E7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009E80: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45009E84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009E88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009E8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45009E90: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45009E94: addiu       $a1, $zero, 0x6B3
    ctx->r5 = ADD32(0, 0X6B3);
    // 0x45009E98: addiu       $a2, $zero, 0x6B4
    ctx->r6 = ADD32(0, 0X6B4);
    // 0x45009E9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45009EA0: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x45009EA4: jal         0x450075DC
    // 0x45009EA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009EA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009EB4: jr          $ra
    // 0x45009EB8: nop

    return;
    // 0x45009EB8: nop

;}
RECOMP_FUNC void ovl_mobj_main_9EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009EBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009EC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009EC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009EC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009ECC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009ED0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009ED4: addiu       $a1, $zero, 0x6B5
    ctx->r5 = ADD32(0, 0X6B5);
    // 0x45009ED8: addiu       $a2, $zero, 0x6B6
    ctx->r6 = ADD32(0, 0X6B6);
    // 0x45009EDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45009EE0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009EE4: jal         0x450075DC
    // 0x45009EE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009EE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009EEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009EF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009EF4: jr          $ra
    // 0x45009EF8: nop

    return;
    // 0x45009EF8: nop

;}
RECOMP_FUNC void ovl_mobj_main_9EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009EFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45009F00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45009F04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45009F08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009F0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45009F10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45009F14: addiu       $a1, $zero, 0x6B7
    ctx->r5 = ADD32(0, 0X6B7);
    // 0x45009F18: addiu       $a2, $zero, 0x6B8
    ctx->r6 = ADD32(0, 0X6B8);
    // 0x45009F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x45009F20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45009F24: jal         0x450075DC
    // 0x45009F28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45009F28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45009F2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45009F30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45009F34: jr          $ra
    // 0x45009F38: nop

    return;
    // 0x45009F38: nop

;}
RECOMP_FUNC void ovl_mobj_main_9F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45009F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45009F44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45009F48: jal         0x45005750
    // 0x45009F4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_mobj_main_5750(rdram, ctx);
        goto after_0;
    // 0x45009F4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x45009F50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45009F54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x45009F58: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009F5C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45009F60: addiu       $v1, $zero, 0x12C0
    ctx->r3 = ADD32(0, 0X12C0);
    // 0x45009F64: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45009F68: bne         $a1, $v1, L_45009F90
    if (ctx->r5 != ctx->r3) {
        // 0x45009F6C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_45009F90;
    }
    // 0x45009F6C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45009F70: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x45009F74: bne         $t8, $zero, L_45009F90
    if (ctx->r24 != 0) {
        // 0x45009F78: ori         $t9, $t7, 0x8000
        ctx->r25 = ctx->r15 | 0X8000;
            goto L_45009F90;
    }
    // 0x45009F78: ori         $t9, $t7, 0x8000
    ctx->r25 = ctx->r15 | 0X8000;
    // 0x45009F7C: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    // 0x45009F80: jal         0x4500500C
    // 0x45009F84: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    ovl_mobj_main_500C(rdram, ctx);
        goto after_1;
    // 0x45009F84: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_1:
    // 0x45009F88: b           L_45009FC0
    // 0x45009F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45009FC0;
    // 0x45009F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45009F90:
    // 0x45009F90: beq         $a1, $v1, L_45009FC0
    if (ctx->r5 == ctx->r3) {
        // 0x45009F94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45009FC0;
    }
    // 0x45009F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45009F98: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45009F9C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x45009FA0: andi        $t0, $v0, 0x8000
    ctx->r8 = ctx->r2 & 0X8000;
    // 0x45009FA4: beq         $t0, $zero, L_45009FBC
    if (ctx->r8 == 0) {
        // 0x45009FA8: ori         $at, $at, 0x7FFF
        ctx->r1 = ctx->r1 | 0X7FFF;
            goto L_45009FBC;
    }
    // 0x45009FA8: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x45009FAC: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x45009FB0: sw          $t1, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r9;
    // 0x45009FB4: jal         0x4500500C
    // 0x45009FB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_mobj_main_500C(rdram, ctx);
        goto after_2;
    // 0x45009FB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
L_45009FBC:
    // 0x45009FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45009FC0:
    // 0x45009FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45009FC4: jr          $ra
    // 0x45009FC8: nop

    return;
    // 0x45009FC8: nop

;}
RECOMP_FUNC void ovl_mobj_main_9FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009FCC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009FD0: nop

    // 0x45009FD4: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45009FD8: jr          $ra
    // 0x45009FDC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45009FDC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
