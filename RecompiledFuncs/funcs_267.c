#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_4D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004D3C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45004D40: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45004D44: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45004D48: jr          $ra
    // 0x45004D4C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    return;
    // 0x45004D4C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_4D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004D50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004D54: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x45004D58: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x45004D5C: addiu       $t7, $t7, -0x20C4
    ctx->r15 = ADD32(ctx->r15, -0X20C4);
    // 0x45004D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004D64: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45004D68: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x45004D6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004D70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45004D74: jal         0x450006C4
    // 0x45004D78: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45004D78: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_0:
    // 0x45004D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004D80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45004D84: jr          $ra
    // 0x45004D88: nop

    return;
    // 0x45004D88: nop

;}
RECOMP_FUNC void ovl_mobj_main_4D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004D8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004D90: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x45004D94: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x45004D98: addiu       $t7, $t7, -0x20C4
    ctx->r15 = ADD32(ctx->r15, -0X20C4);
    // 0x45004D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004DA0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45004DA4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x45004DA8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004DAC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45004DB0: jal         0x450006C4
    // 0x45004DB4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45004DB4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_0:
    // 0x45004DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004DBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45004DC0: jr          $ra
    // 0x45004DC4: nop

    return;
    // 0x45004DC4: nop

;}
RECOMP_FUNC void ovl_mobj_main_4DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004DC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004DCC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45004DD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45004DD4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x45004DD8: sw          $zero, 0x204($a0)
    MEM_W(0X204, ctx->r4) = 0;
    // 0x45004DDC: sw          $t6, 0x210($a0)
    MEM_W(0X210, ctx->r4) = ctx->r14;
    // 0x45004DE0: swc1        $f0, 0x208($a0)
    MEM_W(0X208, ctx->r4) = ctx->f0.u32l;
    // 0x45004DE4: swc1        $f0, 0x20C($a0)
    MEM_W(0X20C, ctx->r4) = ctx->f0.u32l;
    // 0x45004DE8: jr          $ra
    // 0x45004DEC: swc1        $f4, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x45004DEC: swc1        $f4, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_4DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004DF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004DF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x45004DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45004DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45004E00: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45004E04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004E08: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45004E0C: jal         0x45005B24
    // 0x45004E10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45004E10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x45004E14: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x45004E18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004E1C: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    // 0x45004E20: bne         $t6, $at, L_45004E80
    if (ctx->r14 != ctx->r1) {
        // 0x45004E24: addiu       $t7, $zero, 0x384
        ctx->r15 = ADD32(0, 0X384);
            goto L_45004E80;
    }
    // 0x45004E24: addiu       $t7, $zero, 0x384
    ctx->r15 = ADD32(0, 0X384);
    // 0x45004E28: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x45004E2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45004E30: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x45004E34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004E38: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45004E3C: sw          $t7, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r15;
    // 0x45004E40: swc1        $f0, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f0.u32l;
    // 0x45004E44: swc1        $f0, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f0.u32l;
    // 0x45004E48: swc1        $f0, 0x1E4($s0)
    MEM_W(0X1E4, ctx->r16) = ctx->f0.u32l;
    // 0x45004E4C: sw          $zero, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = 0;
    // 0x45004E50: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x45004E54: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x45004E58: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x45004E5C: jal         0x450006C4
    // 0x45004E60: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45004E60: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x45004E64: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x45004E68: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x45004E6C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x45004E70: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x45004E74: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45004E78: jal         0x450006C4
    // 0x45004E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45004E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_45004E80:
    // 0x45004E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45004E84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45004E88: jr          $ra
    // 0x45004E8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x45004E8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_mobj_main_4E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004E90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45004E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004E9C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45004EA0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45004EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45004EA8: jal         0x45005B24
    // 0x45004EAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45004EAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45004EB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45004EB4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x45004EB8: nop

    // 0x45004EBC: swc1        $f4, 0x204($t6)
    MEM_W(0X204, ctx->r14) = ctx->f4.u32l;
    // 0x45004EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45004EC8: jr          $ra
    // 0x45004ECC: nop

    return;
    // 0x45004ECC: nop

;}
RECOMP_FUNC void ovl_mobj_main_4ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004ED0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x45004ED4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x45004ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004EDC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x45004EE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x45004EE4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x45004EE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45004EEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x45004EF0: addiu       $a2, $zero, 0x3D0
    ctx->r6 = ADD32(0, 0X3D0);
    // 0x45004EF4: jal         0x45000F34
    // 0x45004EF8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45004EF8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x45004EFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004F00: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x45004F04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45004F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004F0C: lui         $a3, 0x435C
    ctx->r7 = S32(0X435C << 16);
    // 0x45004F10: jal         0x4500192C
    // 0x45004F14: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_1;
    // 0x45004F14: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x45004F18: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x45004F1C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x45004F20: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x45004F24: addiu       $a3, $zero, 0x3D0
    ctx->r7 = ADD32(0, 0X3D0);
    // 0x45004F28: jal         0x45000F34
    // 0x45004F2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45004F2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x45004F30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45004F34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x45004F38: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x45004F3C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x45004F40: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x45004F44: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x45004F48: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x45004F4C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45004F50: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x45004F54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x45004F58: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x45004F5C: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x45004F60: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45004F64: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x45004F68: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45004F6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45004F70: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45004F74: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45004F78: jal         0x45000F34
    // 0x45004F7C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x45004F7C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x45004F80: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x45004F84: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x45004F88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x45004F8C: jal         0x45000F34
    // 0x45004F90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_4;
    // 0x45004F90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x45004F94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x45004F98: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    // 0x45004F9C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x45004FA0: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x45004FA4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45004FA8: sw          $t9, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r25;
    // 0x45004FAC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x45004FB0: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x45004FB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45004FB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004FBC: sw          $t2, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r10;
    // 0x45004FC0: sw          $t0, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = ctx->r8;
    // 0x45004FC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x45004FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45004FD0: addiu       $a2, $zero, 0x22F
    ctx->r6 = ADD32(0, 0X22F);
    // 0x45004FD4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x45004FD8: jal         0x45005878
    // 0x45004FDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_5878(rdram, ctx);
        goto after_5;
    // 0x45004FDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x45004FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004FE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45004FE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45004FEC: jal         0x45005B24
    // 0x45004FF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_6;
    // 0x45004FF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x45004FF4: jal         0x450041B4
    // 0x45004FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_7;
    // 0x45004FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x45004FFC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x45005000: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x45005004: jr          $ra
    // 0x45005008: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x45005008: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_500C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500500C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x45005010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005014: lw          $t6, 0x194($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X194);
    // 0x45005018: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500501C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x45005020: lw          $t7, 0x194($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X194);
    // 0x45005024: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45005028: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x4500502C: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x45005030: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x45005034: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x45005038: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x4500503C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x45005040: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x45005044: jal         0x4500109C
    // 0x45005048: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45005048: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4500504C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005050: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x45005054: jr          $ra
    // 0x45005058: nop

    return;
    // 0x45005058: nop

;}
RECOMP_FUNC void ovl_mobj_main_505C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500505C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005064: jal         0x4500500C
    // 0x45005068: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    ovl_mobj_main_500C(rdram, ctx);
        goto after_0;
    // 0x45005068: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    after_0:
    // 0x4500506C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005074: jr          $ra
    // 0x45005078: nop

    return;
    // 0x45005078: nop

;}
RECOMP_FUNC void ovl_mobj_main_507C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500507C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005084: jal         0x45004D3C
    // 0x45005088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_4D3C(rdram, ctx);
        goto after_0;
    // 0x45005088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500508C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45005090: jal         0x4500505C
    // 0x45005094: nop

    ovl_mobj_main_505C(rdram, ctx);
        goto after_1;
    // 0x45005094: nop

    after_1:
    // 0x45005098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500509C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450050A0: jr          $ra
    // 0x450050A4: nop

    return;
    // 0x450050A4: nop

;}
RECOMP_FUNC void ovl_mobj_main_50A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450050A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450050AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450050B0: jal         0x450041B4
    // 0x450050B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_0;
    // 0x450050B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450050B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450050BC: jal         0x4500505C
    // 0x450050C0: nop

    ovl_mobj_main_505C(rdram, ctx);
        goto after_1;
    // 0x450050C0: nop

    after_1:
    // 0x450050C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450050C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450050CC: jr          $ra
    // 0x450050D0: nop

    return;
    // 0x450050D0: nop

;}
RECOMP_FUNC void ovl_mobj_main_50D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450050D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450050D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x450050DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x450050E0: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x450050E4: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x450050E8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x450050EC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x450050F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x450050F4: addiu       $t7, $t7, 0x77C
    ctx->r15 = ADD32(ctx->r15, 0X77C);
    // 0x450050F8: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x450050FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45005100: bne         $a1, $at, L_4500513C
    if (ctx->r5 != ctx->r1) {
        // 0x45005104: addu        $v1, $t6, $t7
        ctx->r3 = ADD32(ctx->r14, ctx->r15);
            goto L_4500513C;
    }
    // 0x45005104: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x45005108: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500510C: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x45005110: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45005114: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45005118: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4500511C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x45005120: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x45005124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45005128: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x4500512C: jal         0x45005878
    // 0x45005130: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_5878(rdram, ctx);
        goto after_0;
    // 0x45005130: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45005134: b           L_45005178
    // 0x45005138: nop

        goto L_45005178;
    // 0x45005138: nop

L_4500513C:
    // 0x4500513C: addiu       $at, $zero, 0x114
    ctx->r1 = ADD32(0, 0X114);
    // 0x45005140: bne         $a1, $at, L_45005178
    if (ctx->r5 != ctx->r1) {
        // 0x45005144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45005178;
    }
    // 0x45005144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005148: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500514C: lhu         $a2, 0x0($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X0);
    // 0x45005150: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x45005154: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x45005158: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x4500515C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45005160: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x45005164: jal         0x45005878
    // 0x45005168: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    ovl_mobj_main_5878(rdram, ctx);
        goto after_1;
    // 0x45005168: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    after_1:
    // 0x4500516C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005170: jal         0x45004020
    // 0x45005174: addiu       $a1, $zero, 0x3DC
    ctx->r5 = ADD32(0, 0X3DC);
    ovl_mobj_main_4020(rdram, ctx);
        goto after_2;
    // 0x45005174: addiu       $a1, $zero, 0x3DC
    ctx->r5 = ADD32(0, 0X3DC);
    after_2:
L_45005178:
    // 0x45005178: jal         0x450041B4
    // 0x4500517C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_3;
    // 0x4500517C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x45005180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45005184: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x45005188: jr          $ra
    // 0x4500518C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4500518C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_5190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4500519C: jal         0x4500500C
    // 0x450051A0: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    ovl_mobj_main_500C(rdram, ctx);
        goto after_0;
    // 0x450051A0: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    after_0:
    // 0x450051A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450051A8: jal         0x450041B4
    // 0x450051AC: nop

    ovl_mobj_main_41B4(rdram, ctx);
        goto after_1;
    // 0x450051AC: nop

    after_1:
    // 0x450051B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450051B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450051B8: jr          $ra
    // 0x450051BC: nop

    return;
    // 0x450051BC: nop

;}
RECOMP_FUNC void ovl_mobj_main_51C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450051C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450051C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450051C8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450051CC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x450051D0: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x450051D4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450051D8: jal         0x450041B4
    // 0x450051DC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_0;
    // 0x450051DC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x450051E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450051E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450051E8: jr          $ra
    // 0x450051EC: nop

    return;
    // 0x450051EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_51F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450051F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450051F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450051F8: jal         0x450047AC
    // 0x450051FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_0;
    // 0x450051FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45005200: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45005204: jal         0x4500505C
    // 0x45005208: nop

    ovl_mobj_main_505C(rdram, ctx);
        goto after_1;
    // 0x45005208: nop

    after_1:
    // 0x4500520C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45005210: jal         0x450051C0
    // 0x45005214: nop

    ovl_mobj_main_51C0(rdram, ctx);
        goto after_2;
    // 0x45005214: nop

    after_2:
    // 0x45005218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500521C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005220: jr          $ra
    // 0x45005224: nop

    return;
    // 0x45005224: nop

;}
RECOMP_FUNC void ovl_mobj_main_5228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005228: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4500522C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x45005230: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x45005234: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x45005238: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x4500523C: addiu       $s0, $s0, 0x1CC
    ctx->r16 = ADD32(ctx->r16, 0X1CC);
    // 0x45005240: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x45005244: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x45005248: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4500524C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x45005250: addiu       $a2, $zero, 0x731
    ctx->r6 = ADD32(0, 0X731);
    // 0x45005254: jal         0x45000F34
    // 0x45005258: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45005258: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x4500525C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45005260: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x45005264: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x45005268: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500526C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x45005270: jal         0x4500192C
    // 0x45005274: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_1;
    // 0x45005274: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x45005278: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x4500527C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45005280: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x45005284: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x45005288: jal         0x45000F34
    // 0x4500528C: addiu       $a3, $zero, 0x731
    ctx->r7 = ADD32(0, 0X731);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x4500528C: addiu       $a3, $zero, 0x731
    ctx->r7 = ADD32(0, 0X731);
    after_2:
    // 0x45005290: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x45005294: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x45005298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4500529C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x450052A0: jal         0x45000F34
    // 0x450052A4: addiu       $a3, $zero, 0x73D
    ctx->r7 = ADD32(0, 0X73D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x450052A4: addiu       $a3, $zero, 0x73D
    ctx->r7 = ADD32(0, 0X73D);
    after_3:
    // 0x450052A8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x450052AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450052B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x450052B4: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x450052B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x450052BC: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x450052C0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x450052C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x450052C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x450052CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x450052D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x450052D4: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x450052D8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x450052DC: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x450052E0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x450052E4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x450052E8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x450052EC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x450052F0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x450052F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x450052F8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x450052FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45005300: jal         0x45000F34
    // 0x45005304: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_4;
    // 0x45005304: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_4:
    // 0x45005308: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x4500530C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x45005310: sw          $t0, 0x1C8($v0)
    MEM_W(0X1C8, ctx->r2) = ctx->r8;
    // 0x45005314: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x45005318: nop

    // 0x4500531C: sw          $t1, 0x1D0($v0)
    MEM_W(0X1D0, ctx->r2) = ctx->r9;
    // 0x45005320: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x45005324: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x45005328: jr          $ra
    // 0x4500532C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4500532C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_mobj_main_5330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005338: jal         0x45004454
    // 0x4500533C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_4454(rdram, ctx);
        goto after_0;
    // 0x4500533C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45005340: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45005344: jal         0x4500505C
    // 0x45005348: nop

    ovl_mobj_main_505C(rdram, ctx);
        goto after_1;
    // 0x45005348: nop

    after_1:
    // 0x4500534C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45005350: jal         0x450041B4
    // 0x45005354: nop

    ovl_mobj_main_41B4(rdram, ctx);
        goto after_2;
    // 0x45005354: nop

    after_2:
    // 0x45005358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500535C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005360: jr          $ra
    // 0x45005364: nop

    return;
    // 0x45005364: nop

;}
RECOMP_FUNC void ovl_mobj_main_5368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005368: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x4500536C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45005370: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45005374: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x45005378: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500537C: slti        $at, $v0, 0xE3
    ctx->r1 = SIGNED(ctx->r2) < 0XE3 ? 1 : 0;
    // 0x45005380: bne         $at, $zero, L_450053D4
    if (ctx->r1 != 0) {
        // 0x45005384: slti        $at, $v0, 0xED
        ctx->r1 = SIGNED(ctx->r2) < 0XED ? 1 : 0;
            goto L_450053D4;
    }
    // 0x45005384: slti        $at, $v0, 0xED
    ctx->r1 = SIGNED(ctx->r2) < 0XED ? 1 : 0;
    // 0x45005388: bne         $at, $zero, L_450053B4
    if (ctx->r1 != 0) {
        // 0x4500538C: addiu       $t6, $v0, -0x10B
        ctx->r14 = ADD32(ctx->r2, -0X10B);
            goto L_450053B4;
    }
    // 0x4500538C: addiu       $t6, $v0, -0x10B
    ctx->r14 = ADD32(ctx->r2, -0X10B);
    // 0x45005390: sltiu       $at, $t6, 0x1B
    ctx->r1 = ctx->r14 < 0X1B ? 1 : 0;
    // 0x45005394: beq         $at, $zero, L_45005670
    if (ctx->r1 == 0) {
        // 0x45005398: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_45005670;
    }
    // 0x45005398: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4500539C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450053A0: addu        $at, $at, $t6
    gpr jr_addend_450053AC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x450053A4: lw          $t6, 0x2138($at)
    ctx->r14 = ADD32(ctx->r1, 0X2138);
    // 0x450053A8: nop

    // 0x450053AC: jr          $t6
    // 0x450053B0: nop

    switch (jr_addend_450053AC >> 2) {
        case 0: goto L_450054CC; break;
        case 1: goto L_45005670; break;
        case 2: goto L_45005670; break;
        case 3: goto L_45005670; break;
        case 4: goto L_45005670; break;
        case 5: goto L_45005670; break;
        case 6: goto L_45005670; break;
        case 7: goto L_45005670; break;
        case 8: goto L_45005670; break;
        case 9: goto L_45005670; break;
        case 10: goto L_45005670; break;
        case 11: goto L_45005670; break;
        case 12: goto L_45005670; break;
        case 13: goto L_450053FC; break;
        case 14: goto L_45005670; break;
        case 15: goto L_45005670; break;
        case 16: goto L_45005670; break;
        case 17: goto L_45005670; break;
        case 18: goto L_45005670; break;
        case 19: goto L_45005454; break;
        case 20: goto L_45005470; break;
        case 21: goto L_45005670; break;
        case 22: goto L_45005670; break;
        case 23: goto L_45005670; break;
        case 24: goto L_45005670; break;
        case 25: goto L_45005488; break;
        case 26: goto L_450054B0; break;
        default: switch_error(__func__, 0x450053AC, 0x45012138);
    }
    // 0x450053B0: nop

L_450053B4:
    // 0x450053B4: addiu       $at, $zero, 0xEB
    ctx->r1 = ADD32(0, 0XEB);
    // 0x450053B8: beq         $v0, $at, L_4500550C
    if (ctx->r2 == ctx->r1) {
        // 0x450053BC: addiu       $t2, $zero, 0x1C2
        ctx->r10 = ADD32(0, 0X1C2);
            goto L_4500550C;
    }
    // 0x450053BC: addiu       $t2, $zero, 0x1C2
    ctx->r10 = ADD32(0, 0X1C2);
    // 0x450053C0: addiu       $at, $zero, 0xEC
    ctx->r1 = ADD32(0, 0XEC);
    // 0x450053C4: beq         $v0, $at, L_450055E8
    if (ctx->r2 == ctx->r1) {
        // 0x450053C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_450055E8;
    }
    // 0x450053C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450053CC: b           L_45005674
    // 0x450053D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450053D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450053D4:
    // 0x450053D4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x450053D8: beq         $v0, $at, L_45005600
    if (ctx->r2 == ctx->r1) {
        // 0x450053DC: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_45005600;
    }
    // 0x450053DC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x450053E0: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x450053E4: beq         $v0, $at, L_450054E4
    if (ctx->r2 == ctx->r1) {
        // 0x450053E8: addiu       $at, $zero, 0xE2
        ctx->r1 = ADD32(0, 0XE2);
            goto L_450054E4;
    }
    // 0x450053E8: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    // 0x450053EC: beq         $v0, $at, L_45005660
    if (ctx->r2 == ctx->r1) {
        // 0x450053F0: nop
    
            goto L_45005660;
    }
    // 0x450053F0: nop

    // 0x450053F4: b           L_45005674
    // 0x450053F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450053F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450053FC:
    // 0x450053FC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45005400: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x45005404: jal         0x450006C4
    // 0x45005408: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005408: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x4500540C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x45005410: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x45005414: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x45005418: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x4500541C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45005420: jal         0x450006C4
    // 0x45005424: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45005424: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x45005428: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x4500542C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45005430: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x45005434: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x45005438: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x4500543C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45005440: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x45005444: jal         0x450006C4
    // 0x45005448: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45005448: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x4500544C: b           L_45005674
    // 0x45005450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x45005450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005454:
    // 0x45005454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005458: jal         0x45004020
    // 0x4500545C: addiu       $a1, $zero, 0x2B4
    ctx->r5 = ADD32(0, 0X2B4);
    ovl_mobj_main_4020(rdram, ctx);
        goto after_3;
    // 0x4500545C: addiu       $a1, $zero, 0x2B4
    ctx->r5 = ADD32(0, 0X2B4);
    after_3:
    // 0x45005460: jal         0x450047AC
    // 0x45005464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_4;
    // 0x45005464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x45005468: b           L_45005674
    // 0x4500546C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x4500546C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005470:
    // 0x45005470: jal         0x45004DF0
    // 0x45005474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_4DF0(rdram, ctx);
        goto after_5;
    // 0x45005474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x45005478: jal         0x45004D3C
    // 0x4500547C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_4D3C(rdram, ctx);
        goto after_6;
    // 0x4500547C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x45005480: b           L_45005674
    // 0x45005484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x45005484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005488:
    // 0x45005488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500548C: jal         0x45004020
    // 0x45005490: addiu       $a1, $zero, 0x6BA
    ctx->r5 = ADD32(0, 0X6BA);
    ovl_mobj_main_4020(rdram, ctx);
        goto after_7;
    // 0x45005490: addiu       $a1, $zero, 0x6BA
    ctx->r5 = ADD32(0, 0X6BA);
    after_7:
    // 0x45005494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005498: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x4500549C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x450054A0: jal         0x45005B24
    // 0x450054A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_8;
    // 0x450054A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x450054A8: b           L_45005674
    // 0x450054AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450054AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450054B0:
    // 0x450054B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450054B4: jal         0x45004020
    // 0x450054B8: addiu       $a1, $zero, 0xF9
    ctx->r5 = ADD32(0, 0XF9);
    ovl_mobj_main_4020(rdram, ctx);
        goto after_9;
    // 0x450054B8: addiu       $a1, $zero, 0xF9
    ctx->r5 = ADD32(0, 0XF9);
    after_9:
    // 0x450054BC: jal         0x450041B4
    // 0x450054C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_10;
    // 0x450054C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x450054C4: b           L_45005674
    // 0x450054C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450054C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450054CC:
    // 0x450054CC: jal         0x45004454
    // 0x450054D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_4454(rdram, ctx);
        goto after_11;
    // 0x450054D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x450054D4: jal         0x450047AC
    // 0x450054D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_12;
    // 0x450054D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x450054DC: b           L_45005670
    // 0x450054E0: sw          $zero, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = 0;
        goto L_45005670;
    // 0x450054E0: sw          $zero, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = 0;
L_450054E4:
    // 0x450054E4: jal         0x45005190
    // 0x450054E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5190(rdram, ctx);
        goto after_13;
    // 0x450054E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x450054EC: jal         0x450047AC
    // 0x450054F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_14;
    // 0x450054F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x450054F4: lw          $t0, 0x184($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X184);
    // 0x450054F8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x450054FC: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x45005500: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x45005504: b           L_45005670
    // 0x45005508: sw          $t1, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r9;
        goto L_45005670;
    // 0x45005508: sw          $t1, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r9;
L_4500550C:
    // 0x4500550C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x45005510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45005514: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x45005518: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500551C: sw          $t2, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r10;
    // 0x45005520: sw          $zero, 0x1E4($s0)
    MEM_W(0X1E4, ctx->r16) = 0;
    // 0x45005524: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x45005528: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x4500552C: swc1        $f6, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f6.u32l;
    // 0x45005530: jal         0x450006C4
    // 0x45005534: swc1        $f8, 0x1EC($s0)
    MEM_W(0X1EC, ctx->r16) = ctx->f8.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_15;
    // 0x45005534: swc1        $f8, 0x1EC($s0)
    MEM_W(0X1EC, ctx->r16) = ctx->f8.u32l;
    after_15:
    // 0x45005538: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x4500553C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45005540: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x45005544: jal         0x450006C4
    // 0x45005548: sw          $a0, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->r4;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_16;
    // 0x45005548: sw          $a0, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->r4;
    after_16:
    // 0x4500554C: bne         $v0, $zero, L_45005578
    if (ctx->r2 != 0) {
        // 0x45005550: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_45005578;
    }
    // 0x45005550: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x45005554: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x45005558: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500555C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45005560: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x45005564: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x45005568: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x4500556C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45005570: jal         0x450006C4
    // 0x45005574: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_17;
    // 0x45005574: nop

    after_17:
L_45005578:
    // 0x45005578: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4500557C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45005580: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45005584: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x45005588: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x4500558C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x45005590: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45005594: jal         0x450006C4
    // 0x45005598: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_18;
    // 0x45005598: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_18:
    // 0x4500559C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x450055A0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x450055A4: jal         0x450006C4
    // 0x450055A8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_19;
    // 0x450055A8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_19:
    // 0x450055AC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x450055B0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x450055B4: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x450055B8: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x450055BC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x450055C0: jal         0x450006C4
    // 0x450055C4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_20;
    // 0x450055C4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_20:
    // 0x450055C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x450055CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450055D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450055D4: addiu       $a1, $zero, 0x37C
    ctx->r5 = ADD32(0, 0X37C);
    // 0x450055D8: jal         0x45000FA0
    // 0x450055DC: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_21;
    // 0x450055DC: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    after_21:
    // 0x450055E0: b           L_45005674
    // 0x450055E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450055E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450055E8:
    // 0x450055E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x450055EC: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    // 0x450055F0: jal         0x45004020
    // 0x450055F4: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    ovl_mobj_main_4020(rdram, ctx);
        goto after_22;
    // 0x450055F4: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    after_22:
    // 0x450055F8: b           L_45005674
    // 0x450055FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x450055FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005600:
    // 0x45005600: lui         $t5, 0x4501
    ctx->r13 = S32(0X4501 << 16);
    // 0x45005604: addiu       $t5, $t5, 0x156C
    ctx->r13 = ADD32(ctx->r13, 0X156C);
    // 0x45005608: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x4500560C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x45005610: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x45005614: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x45005618: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x4500561C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x45005620: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x45005624: addiu       $a1, $a1, -0x5884
    ctx->r5 = ADD32(ctx->r5, -0X5884);
    // 0x45005628: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x4500562C: jal         0x4500070C
    // 0x45005630: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    ovl_mobj_main_70C(rdram, ctx);
        goto after_23;
    // 0x45005630: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    after_23:
    // 0x45005634: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x45005638: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500563C: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
    // 0x45005640: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x45005644: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x45005648: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x4500564C: lw          $a0, 0x1CC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1CC);
    // 0x45005650: jal         0x45000718
    // 0x45005654: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_718(rdram, ctx);
        goto after_24;
    // 0x45005654: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_24:
    // 0x45005658: b           L_45005674
    // 0x4500565C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45005674;
    // 0x4500565C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005660:
    // 0x45005660: jal         0x450047AC
    // 0x45005664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_25;
    // 0x45005664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x45005668: jal         0x450051C0
    // 0x4500566C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_51C0(rdram, ctx);
        goto after_26;
    // 0x4500566C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
L_45005670:
    // 0x45005670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45005674:
    // 0x45005674: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45005678: jr          $ra
    // 0x4500567C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x4500567C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_mobj_main_5680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005680: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005684: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x45005688: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500568C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x45005690: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x45005694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005698: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4500569C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x450056A0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x450056A4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x450056A8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450056AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450056B0: jal         0x450006C4
    // 0x450056B4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450056B4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x450056B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450056BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450056C0: jr          $ra
    // 0x450056C4: nop

    return;
    // 0x450056C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_56C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450056C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450056CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x450056D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450056D4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x450056D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450056DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x450056E0: jal         0x45000310
    // 0x450056E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_mobj_main_310(rdram, ctx);
        goto after_0;
    // 0x450056E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x450056E8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450056EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x450056F0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x450056F4: lwc1        $f8, 0x204($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X204);
    // 0x450056F8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x450056FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x45005700: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x45005704: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x45005708: jal         0x4500031C
    // 0x4500570C: nop

    ovl_mobj_main_31C(rdram, ctx);
        goto after_1;
    // 0x4500570C: nop

    after_1:
    // 0x45005710: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x45005714: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x45005718: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x4500571C: lwc1        $f4, 0x20C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20C);
    // 0x45005720: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x45005724: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x45005728: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x4500572C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x45005730: lwc1        $f8, 0x208($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X208);
    // 0x45005734: nop

    // 0x45005738: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4500573C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x45005740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005748: jr          $ra
    // 0x4500574C: nop

    return;
    // 0x4500574C: nop

;}
RECOMP_FUNC void ovl_mobj_main_5750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45005754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005758: lw          $t6, 0x194($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X194);
    // 0x4500575C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45005760: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x45005764: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45005768: jal         0x4500109C
    // 0x4500576C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x4500576C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x45005770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005774: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45005778: jr          $ra
    // 0x4500577C: nop

    return;
    // 0x4500577C: nop

;}
RECOMP_FUNC void ovl_mobj_main_5780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005780: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45005784: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45005788: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x4500578C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45005790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005794: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x45005798: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4500579C: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x450057A0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x450057A4: jal         0x4500109C
    // 0x450057A8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x450057A8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x450057AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450057B0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450057B4: jr          $ra
    // 0x450057B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x450057B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_57BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450057BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450057C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450057C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450057C8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x450057CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450057D0: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x450057D4: jal         0x450006C4
    // 0x450057D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450057D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x450057DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450057E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450057E4: jr          $ra
    // 0x450057E8: nop

    return;
    // 0x450057E8: nop

;}
RECOMP_FUNC void ovl_mobj_main_57EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450057EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450057F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x450057F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450057F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450057FC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x45005800: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x45005804: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45005808: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x4500580C: jal         0x450006C4
    // 0x45005810: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005810: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45005814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005818: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4500581C: jr          $ra
    // 0x45005820: nop

    return;
    // 0x45005820: nop

;}
RECOMP_FUNC void ovl_mobj_main_5824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005824: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005828: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4500582C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x45005830: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x45005834: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x45005838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500583C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45005840: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45005844: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x45005848: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x4500584C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x45005850: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x45005854: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x45005858: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500585C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x45005860: jal         0x450006C4
    // 0x45005864: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005864: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45005868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500586C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45005870: jr          $ra
    // 0x45005874: nop

    return;
    // 0x45005874: nop

;}
RECOMP_FUNC void ovl_mobj_main_5878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005878: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500587C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45005880: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x45005884: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x45005888: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x4500588C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x45005890: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x45005894: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x45005898: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4500589C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450058A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x450058A4: jal         0x450006C4
    // 0x450058A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450058A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
    // 0x450058AC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x450058B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x450058B4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x450058B8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x450058BC: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x450058C0: jal         0x45005824
    // 0x450058C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_mobj_main_5824(rdram, ctx);
        goto after_1;
    // 0x450058C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x450058C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450058CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x450058D0: jr          $ra
    // 0x450058D4: nop

    return;
    // 0x450058D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_58D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450058D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x450058DC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x450058E0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x450058E4: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x450058E8: bc1f        L_45005900
    if (!c1cs) {
        // 0x450058EC: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_45005900;
    }
    // 0x450058EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x450058F0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x450058F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x450058F8: b           L_45005908
    // 0x450058FC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_45005908;
    // 0x450058FC: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
L_45005900:
    // 0x45005900: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45005904: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_45005908:
    // 0x45005908: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x4500590C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45005910: bc1f        L_45005940
    if (!c1cs) {
        // 0x45005914: neg.s       $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
            goto L_45005940;
    }
    // 0x45005914: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x45005918: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x4500591C: nop

    // 0x45005920: bc1f        L_45005934
    if (!c1cs) {
        // 0x45005924: nop
    
            goto L_45005934;
    }
    // 0x45005924: nop

    // 0x45005928: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x4500592C: b           L_45005960
    // 0x45005930: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_45005960;
    // 0x45005930: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
L_45005934:
    // 0x45005934: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x45005938: b           L_45005960
    // 0x4500593C: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_45005960;
    // 0x4500593C: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
L_45005940:
    // 0x45005940: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x45005944: nop

    // 0x45005948: bc1f        L_45005958
    if (!c1cs) {
        // 0x4500594C: nop
    
            goto L_45005958;
    }
    // 0x4500594C: nop

    // 0x45005950: b           L_4500595C
    // 0x45005954: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
        goto L_4500595C;
    // 0x45005954: add.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f12.fl + ctx->f18.fl;
L_45005958:
    // 0x45005958: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_4500595C:
    // 0x4500595C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_45005960:
    // 0x45005960: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x45005964: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45005968: bc1f        L_45005978
    if (!c1cs) {
        // 0x4500596C: lui         $at, 0xC334
        ctx->r1 = S32(0XC334 << 16);
            goto L_45005978;
    }
    // 0x4500596C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x45005970: b           L_4500597C
    // 0x45005974: add.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f18.fl;
        goto L_4500597C;
    // 0x45005974: add.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f18.fl;
L_45005978:
    // 0x45005978: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_4500597C:
    // 0x4500597C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x45005980: nop

    // 0x45005984: bc1f        L_450059B4
    if (!c1cs) {
        // 0x45005988: nop
    
            goto L_450059B4;
    }
    // 0x45005988: nop

    // 0x4500598C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x45005990: nop

    // 0x45005994: bc1f        L_450059A8
    if (!c1cs) {
        // 0x45005998: nop
    
            goto L_450059A8;
    }
    // 0x45005998: nop

    // 0x4500599C: add.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x450059A0: b           L_450059D4
    // 0x450059A4: sub.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_450059D4;
    // 0x450059A4: sub.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f18.fl;
L_450059A8:
    // 0x450059A8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x450059AC: b           L_450059D4
    // 0x450059B0: sub.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f18.fl;
        goto L_450059D4;
    // 0x450059B0: sub.s       $f14, $f0, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f18.fl;
L_450059B4:
    // 0x450059B4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x450059B8: nop

    // 0x450059BC: bc1f        L_450059CC
    if (!c1cs) {
        // 0x450059C0: nop
    
            goto L_450059CC;
    }
    // 0x450059C0: nop

    // 0x450059C4: b           L_450059D0
    // 0x450059C8: add.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f18.fl;
        goto L_450059D0;
    // 0x450059C8: add.s       $f0, $f14, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f18.fl;
L_450059CC:
    // 0x450059CC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_450059D0:
    // 0x450059D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_450059D4:
    // 0x450059D4: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x450059D8: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x450059DC: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x450059E0: bc1f        L_450059F0
    if (!c1cs) {
        // 0x450059E4: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_450059F0;
    }
    // 0x450059E4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x450059E8: b           L_45005A0C
    // 0x450059EC: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
        goto L_45005A0C;
    // 0x450059EC: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_450059F0:
    // 0x450059F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450059F4: nop

    // 0x450059F8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x450059FC: nop

    // 0x45005A00: bc1f        L_45005A0C
    if (!c1cs) {
        // 0x45005A04: nop
    
            goto L_45005A0C;
    }
    // 0x45005A04: nop

    // 0x45005A08: add.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f18.fl;
L_45005A0C:
    // 0x45005A0C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x45005A10: nop

    // 0x45005A14: bc1f        L_45005A2C
    if (!c1cs) {
        // 0x45005A18: nop
    
            goto L_45005A2C;
    }
    // 0x45005A18: nop

    // 0x45005A1C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x45005A20: nop

    // 0x45005A24: bc1t        L_45005A4C
    if (c1cs) {
        // 0x45005A28: nop
    
            goto L_45005A4C;
    }
    // 0x45005A28: nop

L_45005A2C:
    // 0x45005A2C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x45005A30: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45005A34: bc1f        L_45005A54
    if (!c1cs) {
        // 0x45005A38: nop
    
            goto L_45005A54;
    }
    // 0x45005A38: nop

    // 0x45005A3C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x45005A40: nop

    // 0x45005A44: bc1f        L_45005A54
    if (!c1cs) {
        // 0x45005A48: nop
    
            goto L_45005A54;
    }
    // 0x45005A48: nop

L_45005A4C:
    // 0x45005A4C: jr          $ra
    // 0x45005A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x45005A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_45005A54:
    // 0x45005A54: jr          $ra
    // 0x45005A58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x45005A58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_5A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005A5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x45005A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x45005A68: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x45005A6C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x45005A70: jal         0x450014A0
    // 0x45005A74: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    ovl_mobj_main_14A0(rdram, ctx);
        goto after_0;
    // 0x45005A74: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x45005A78: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x45005A7C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x45005A80: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x45005A84: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x45005A88: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x45005A8C: jal         0x4500152C
    // 0x45005A90: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    ovl_mobj_main_152C(rdram, ctx);
        goto after_1;
    // 0x45005A90: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_1:
    // 0x45005A94: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x45005A98: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x45005A9C: jal         0x4500109C
    // 0x45005AA0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_2;
    // 0x45005AA0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x45005AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005AA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x45005AAC: jr          $ra
    // 0x45005AB0: nop

    return;
    // 0x45005AB0: nop

;}
RECOMP_FUNC void ovl_mobj_main_5AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005AB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005ABC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45005AC0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45005AC4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45005AC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x45005ACC: jal         0x450006C4
    // 0x45005AD0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005AD0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45005AD4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x45005AD8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x45005ADC: beq         $t7, $zero, L_45005AF8
    if (ctx->r15 == 0) {
        // 0x45005AE0: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_45005AF8;
    }
    // 0x45005AE0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x45005AE4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x45005AE8: nop

    // 0x45005AEC: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x45005AF0: b           L_45005B00
    // 0x45005AF4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_45005B00;
    // 0x45005AF4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_45005AF8:
    // 0x45005AF8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x45005AFC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_45005B00:
    // 0x45005B00: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x45005B04: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x45005B08: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x45005B0C: jal         0x450006C4
    // 0x45005B10: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45005B10: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x45005B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45005B1C: jr          $ra
    // 0x45005B20: nop

    return;
    // 0x45005B20: nop

;}
RECOMP_FUNC void ovl_mobj_main_5B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005B24: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x45005B28: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45005B2C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x45005B30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x45005B34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x45005B38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005B3C: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x45005B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005B44: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x45005B48: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45005B4C: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45005B50: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x45005B54: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x45005B58: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x45005B5C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x45005B60: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45005B64: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x45005B68: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45005B6C: jal         0x450006C4
    // 0x45005B70: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005B70: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x45005B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45005B7C: jr          $ra
    // 0x45005B80: nop

    return;
    // 0x45005B80: nop

;}
RECOMP_FUNC void ovl_mobj_main_5B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45005B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005B8C: lw          $t6, 0x178($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X178);
    // 0x45005B90: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45005B94: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x45005B98: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x45005B9C: lw          $t8, -0x704($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X704);
    // 0x45005BA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45005BA4: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x45005BA8: beq         $t8, $zero, L_45005C00
    if (ctx->r24 == 0) {
        // 0x45005BAC: addiu       $a2, $a2, 0x58
        ctx->r6 = ADD32(ctx->r6, 0X58);
            goto L_45005C00;
    }
    // 0x45005BAC: addiu       $a2, $a2, 0x58
    ctx->r6 = ADD32(ctx->r6, 0X58);
    // 0x45005BB0: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
    // 0x45005BB4: nop

    // 0x45005BB8: sll         $t0, $t9, 15
    ctx->r8 = S32(ctx->r25 << 15);
    // 0x45005BBC: bgez        $t0, L_45005BFC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x45005BC0: nop
    
            goto L_45005BFC;
    }
    // 0x45005BC0: nop

    // 0x45005BC4: lw          $t1, 0x10($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X10);
    // 0x45005BC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45005BCC: ori         $t2, $t1, 0x2
    ctx->r10 = ctx->r9 | 0X2;
    // 0x45005BD0: sw          $t2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r10;
    // 0x45005BD4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x45005BD8: jal         0x4500109C
    // 0x45005BDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45005BDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x45005BE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45005BE4: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x45005BE8: lw          $t3, 0x184($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X184);
    // 0x45005BEC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x45005BF0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45005BF4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x45005BF8: sw          $t4, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r12;
L_45005BFC:
    // 0x45005BFC: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
L_45005C00:
    // 0x45005C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45005C08: jr          $ra
    // 0x45005C0C: nop

    return;
    // 0x45005C0C: nop

;}
RECOMP_FUNC void ovl_mobj_main_5C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005C18: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45005C1C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45005C20: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45005C24: jal         0x45005B84
    // 0x45005C28: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_5B84(rdram, ctx);
        goto after_0;
    // 0x45005C28: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x45005C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005C34: jr          $ra
    // 0x45005C38: nop

    return;
    // 0x45005C38: nop

;}
RECOMP_FUNC void ovl_mobj_main_5C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45005C40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45005C44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45005C48: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45005C4C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45005C50: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45005C54: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x45005C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45005C5C: beq         $t9, $zero, L_45005CBC
    if (ctx->r25 == 0) {
        // 0x45005C60: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_45005CBC;
    }
    // 0x45005C60: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45005C64: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x45005C68: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45005C6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x45005C70: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x45005C74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x45005C78: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x45005C7C: lbu         $v1, 0x786($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X786);
    // 0x45005C80: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45005C84: bne         $v1, $at, L_45005C94
    if (ctx->r3 != ctx->r1) {
        // 0x45005C88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_45005C94;
    }
    // 0x45005C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x45005C8C: b           L_45005C94
    // 0x45005C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_45005C94;
    // 0x45005C90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45005C94:
    // 0x45005C94: beq         $v0, $zero, L_45005D0C
    if (ctx->r2 == 0) {
        // 0x45005C98: sll         $t2, $v1, 3
        ctx->r10 = S32(ctx->r3 << 3);
            goto L_45005D0C;
    }
    // 0x45005C98: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x45005C9C: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45005CA0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x45005CA4: lw          $t9, 0x47C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47C);
    // 0x45005CA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005CAC: jalr        $t9
    // 0x45005CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x45005CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x45005CB4: b           L_45005D0C
    // 0x45005CB8: nop

        goto L_45005D0C;
    // 0x45005CB8: nop

L_45005CBC:
    // 0x45005CBC: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x45005CC0: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45005CC4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x45005CC8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x45005CCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x45005CD0: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x45005CD4: lbu         $v1, 0x786($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X786);
    // 0x45005CD8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45005CDC: bne         $v1, $at, L_45005CEC
    if (ctx->r3 != ctx->r1) {
        // 0x45005CE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_45005CEC;
    }
    // 0x45005CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x45005CE4: b           L_45005CEC
    // 0x45005CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_45005CEC;
    // 0x45005CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45005CEC:
    // 0x45005CEC: beq         $v0, $zero, L_45005D0C
    if (ctx->r2 == 0) {
        // 0x45005CF0: sll         $t5, $v1, 3
        ctx->r13 = S32(ctx->r3 << 3);
            goto L_45005D0C;
    }
    // 0x45005CF0: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x45005CF4: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45005CF8: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x45005CFC: lw          $t9, 0x47C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47C);
    // 0x45005D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005D04: jalr        $t9
    // 0x45005D08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x45005D08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_45005D0C:
    // 0x45005D0C: jal         0x45005B84
    // 0x45005D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5B84(rdram, ctx);
        goto after_2;
    // 0x45005D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x45005D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45005D18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45005D1C: jal         0x45001CE0
    // 0x45005D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_3;
    // 0x45005D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x45005D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45005D28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45005D2C: jr          $ra
    // 0x45005D30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x45005D30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_5D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005D34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005D38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005D3C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45005D40: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45005D44: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45005D48: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x45005D4C: jal         0x450006C4
    // 0x45005D50: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005D50: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45005D54: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x45005D58: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x45005D5C: beq         $t7, $zero, L_45005D78
    if (ctx->r15 == 0) {
        // 0x45005D60: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_45005D78;
    }
    // 0x45005D60: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x45005D64: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x45005D68: nop

    // 0x45005D6C: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x45005D70: b           L_45005D80
    // 0x45005D74: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
        goto L_45005D80;
    // 0x45005D74: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_45005D78:
    // 0x45005D78: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x45005D7C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_45005D80:
    // 0x45005D80: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x45005D84: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x45005D88: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x45005D8C: jal         0x450006C4
    // 0x45005D90: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45005D90: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x45005D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005D98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45005D9C: jr          $ra
    // 0x45005DA0: nop

    return;
    // 0x45005DA0: nop

;}
RECOMP_FUNC void ovl_mobj_main_5DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005DA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45005DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005DAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45005DB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45005DB4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45005DB8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x45005DBC: jal         0x450006C4
    // 0x45005DC0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45005DC0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45005DC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x45005DC8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x45005DCC: beq         $t7, $zero, L_45005DE8
    if (ctx->r15 == 0) {
        // 0x45005DD0: ori         $t1, $t0, 0x4
        ctx->r9 = ctx->r8 | 0X4;
            goto L_45005DE8;
    }
    // 0x45005DD0: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x45005DD4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x45005DD8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x45005DDC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x45005DE0: b           L_45005DEC
    // 0x45005DE4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_45005DEC;
    // 0x45005DE4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_45005DE8:
    // 0x45005DE8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_45005DEC:
    // 0x45005DEC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x45005DF0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x45005DF4: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x45005DF8: jal         0x450006C4
    // 0x45005DFC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45005DFC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x45005E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005E04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45005E08: jr          $ra
    // 0x45005E0C: nop

    return;
    // 0x45005E0C: nop

;}
RECOMP_FUNC void ovl_mobj_main_5E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005E10: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45005E14: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x45005E18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45005E1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45005E20: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x45005E24: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x45005E28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45005E2C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x45005E30: bc1t        L_45005E64
    if (c1cs) {
        // 0x45005E34: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_45005E64;
    }
    // 0x45005E34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x45005E38: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x45005E3C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x45005E40: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x45005E44: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45005E48: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x45005E4C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45005E50: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45005E54: jal         0x45000F34
    // 0x45005E58: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45005E58: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x45005E5C: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x45005E60: nop

L_45005E64:
    // 0x45005E64: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45005E68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45005E6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x45005E70: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x45005E74: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x45005E78: bc1t        L_45005E94
    if (c1cs) {
        // 0x45005E7C: addiu       $a0, $zero, 0x1B
        ctx->r4 = ADD32(0, 0X1B);
            goto L_45005E94;
    }
    // 0x45005E7C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x45005E80: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x45005E84: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x45005E88: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x45005E8C: jal         0x45000F34
    // 0x45005E90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x45005E90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
L_45005E94:
    // 0x45005E94: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x45005E98: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x45005E9C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45005EA0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x45005EA4: jal         0x45000F34
    // 0x45005EA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45005EA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x45005EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45005EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45005EB4: jr          $ra
    // 0x45005EB8: nop

    return;
    // 0x45005EB8: nop

;}
RECOMP_FUNC void ovl_mobj_main_5EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005EBC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45005EC0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x45005EC4: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x45005EC8: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x45005ECC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x45005ED0: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x45005ED4: swc1        $f6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f6.u32l;
    // 0x45005ED8: jr          $ra
    // 0x45005EDC: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x45005EDC: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_5EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005EE4: bne         $a1, $a2, L_45005F08
    if (ctx->r5 != ctx->r6) {
        // 0x45005EE8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_45005F08;
    }
    // 0x45005EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005EEC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x45005EF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45005EF4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x45005EF8: nop

    // 0x45005EFC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x45005F00: b           L_45005F88
    // 0x45005F04: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
        goto L_45005F88;
    // 0x45005F04: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
L_45005F08:
    // 0x45005F08: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x45005F0C: bne         $t6, $a2, L_45005F24
    if (ctx->r14 != ctx->r6) {
        // 0x45005F10: addiu       $t7, $a1, 0x2
        ctx->r15 = ADD32(ctx->r5, 0X2);
            goto L_45005F24;
    }
    // 0x45005F10: addiu       $t7, $a1, 0x2
    ctx->r15 = ADD32(ctx->r5, 0X2);
    // 0x45005F14: jal         0x450018D8
    // 0x45005F18: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_0;
    // 0x45005F18: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x45005F1C: b           L_45005F8C
    // 0x45005F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45005F8C;
    // 0x45005F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005F24:
    // 0x45005F24: bne         $t7, $a2, L_45005F3C
    if (ctx->r15 != ctx->r6) {
        // 0x45005F28: addiu       $t8, $a1, 0x3
        ctx->r24 = ADD32(ctx->r5, 0X3);
            goto L_45005F3C;
    }
    // 0x45005F28: addiu       $t8, $a1, 0x3
    ctx->r24 = ADD32(ctx->r5, 0X3);
    // 0x45005F2C: jal         0x450018D8
    // 0x45005F30: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_1;
    // 0x45005F30: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x45005F34: b           L_45005F8C
    // 0x45005F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45005F8C;
    // 0x45005F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005F3C:
    // 0x45005F3C: bne         $t8, $a2, L_45005F60
    if (ctx->r24 != ctx->r6) {
        // 0x45005F40: addiu       $t9, $a1, 0x4
        ctx->r25 = ADD32(ctx->r5, 0X4);
            goto L_45005F60;
    }
    // 0x45005F40: addiu       $t9, $a1, 0x4
    ctx->r25 = ADD32(ctx->r5, 0X4);
    // 0x45005F44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x45005F48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45005F4C: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x45005F50: nop

    // 0x45005F54: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x45005F58: b           L_45005F88
    // 0x45005F5C: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
        goto L_45005F88;
    // 0x45005F5C: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
L_45005F60:
    // 0x45005F60: bne         $t9, $a2, L_45005F78
    if (ctx->r25 != ctx->r6) {
        // 0x45005F64: addiu       $t0, $a1, 0x5
        ctx->r8 = ADD32(ctx->r5, 0X5);
            goto L_45005F78;
    }
    // 0x45005F64: addiu       $t0, $a1, 0x5
    ctx->r8 = ADD32(ctx->r5, 0X5);
    // 0x45005F68: jal         0x450018D8
    // 0x45005F6C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_2;
    // 0x45005F6C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_2:
    // 0x45005F70: b           L_45005F8C
    // 0x45005F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45005F8C;
    // 0x45005F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005F78:
    // 0x45005F78: bne         $t0, $a2, L_45005F8C
    if (ctx->r8 != ctx->r6) {
        // 0x45005F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45005F8C;
    }
    // 0x45005F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45005F80: jal         0x450018D8
    // 0x45005F84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_3;
    // 0x45005F84: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
L_45005F88:
    // 0x45005F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005F8C:
    // 0x45005F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45005F90: jr          $ra
    // 0x45005F94: nop

    return;
    // 0x45005F94: nop

;}
RECOMP_FUNC void ovl_mobj_main_5F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45005F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45005F9C: bne         $a1, $a2, L_45005FC8
    if (ctx->r5 != ctx->r6) {
        // 0x45005FA0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_45005FC8;
    }
    // 0x45005FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45005FA4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x45005FA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45005FAC: nop

    // 0x45005FB0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45005FB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45005FB8: jal         0x45005EBC
    // 0x45005FBC: nop

    ovl_mobj_main_5EBC(rdram, ctx);
        goto after_0;
    // 0x45005FBC: nop

    after_0:
    // 0x45005FC0: b           L_45006074
    // 0x45005FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006074;
    // 0x45005FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005FC8:
    // 0x45005FC8: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x45005FCC: bne         $t6, $a2, L_45005FF8
    if (ctx->r14 != ctx->r6) {
        // 0x45005FD0: addiu       $t7, $a1, 0x2
        ctx->r15 = ADD32(ctx->r5, 0X2);
            goto L_45005FF8;
    }
    // 0x45005FD0: addiu       $t7, $a1, 0x2
    ctx->r15 = ADD32(ctx->r5, 0X2);
    // 0x45005FD4: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x45005FD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45005FDC: nop

    // 0x45005FE0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45005FE4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45005FE8: jal         0x45005EBC
    // 0x45005FEC: nop

    ovl_mobj_main_5EBC(rdram, ctx);
        goto after_1;
    // 0x45005FEC: nop

    after_1:
    // 0x45005FF0: b           L_45006074
    // 0x45005FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006074;
    // 0x45005FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45005FF8:
    // 0x45005FF8: bne         $t7, $a2, L_45006024
    if (ctx->r15 != ctx->r6) {
        // 0x45005FFC: addiu       $t8, $a1, 0x3
        ctx->r24 = ADD32(ctx->r5, 0X3);
            goto L_45006024;
    }
    // 0x45005FFC: addiu       $t8, $a1, 0x3
    ctx->r24 = ADD32(ctx->r5, 0X3);
    // 0x45006000: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x45006004: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45006008: nop

    // 0x4500600C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45006010: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45006014: jal         0x45005EBC
    // 0x45006018: nop

    ovl_mobj_main_5EBC(rdram, ctx);
        goto after_2;
    // 0x45006018: nop

    after_2:
    // 0x4500601C: b           L_45006074
    // 0x45006020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006074;
    // 0x45006020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006024:
    // 0x45006024: bne         $t8, $a2, L_45006050
    if (ctx->r24 != ctx->r6) {
        // 0x45006028: addiu       $t9, $a1, 0x4
        ctx->r25 = ADD32(ctx->r5, 0X4);
            goto L_45006050;
    }
    // 0x45006028: addiu       $t9, $a1, 0x4
    ctx->r25 = ADD32(ctx->r5, 0X4);
    // 0x4500602C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x45006030: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45006034: nop

    // 0x45006038: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x4500603C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45006040: jal         0x45005EBC
    // 0x45006044: nop

    ovl_mobj_main_5EBC(rdram, ctx);
        goto after_3;
    // 0x45006044: nop

    after_3:
    // 0x45006048: b           L_45006074
    // 0x4500604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006074;
    // 0x4500604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006050:
    // 0x45006050: bne         $t9, $a2, L_45006070
    if (ctx->r25 != ctx->r6) {
        // 0x45006054: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_45006070;
    }
    // 0x45006054: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x45006058: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500605C: nop

    // 0x45006060: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x45006064: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45006068: jal         0x45005EBC
    // 0x4500606C: nop

    ovl_mobj_main_5EBC(rdram, ctx);
        goto after_4;
    // 0x4500606C: nop

    after_4:
L_45006070:
    // 0x45006070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006074:
    // 0x45006074: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006078: jr          $ra
    // 0x4500607C: nop

    return;
    // 0x4500607C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45006084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45006088: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4500608C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x45006090: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006094: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x45006098: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4500609C: slti        $at, $t7, 0x39
    ctx->r1 = SIGNED(ctx->r15) < 0X39 ? 1 : 0;
    // 0x450060A0: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x450060A4: beq         $at, $zero, L_4500617C
    if (ctx->r1 == 0) {
        // 0x450060A8: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_4500617C;
    }
    // 0x450060A8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x450060AC: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x450060B0: beq         $at, $zero, L_450060E0
    if (ctx->r1 == 0) {
        // 0x450060B4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_450060E0;
    }
    // 0x450060B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x450060B8: bne         $t7, $at, L_450060CC
    if (ctx->r15 != ctx->r1) {
        // 0x450060BC: lui         $a1, 0x40D5
        ctx->r5 = S32(0X40D5 << 16);
            goto L_450060CC;
    }
    // 0x450060BC: lui         $a1, 0x40D5
    ctx->r5 = S32(0X40D5 << 16);
    // 0x450060C0: jal         0x45000F80
    // 0x450060C4: addiu       $a1, $zero, 0x174
    ctx->r5 = ADD32(0, 0X174);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x450060C4: addiu       $a1, $zero, 0x174
    ctx->r5 = ADD32(0, 0X174);
    after_0:
    // 0x450060C8: lui         $a1, 0x40D5
    ctx->r5 = S32(0X40D5 << 16);
L_450060CC:
    // 0x450060CC: ori         $a1, $a1, 0x5555
    ctx->r5 = ctx->r5 | 0X5555;
    // 0x450060D0: jal         0x450018D8
    // 0x450060D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_1;
    // 0x450060D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x450060D8: b           L_45006180
    // 0x450060DC: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
        goto L_45006180;
    // 0x450060DC: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
L_450060E0:
    // 0x450060E0: slti        $at, $s0, 0x1A
    ctx->r1 = SIGNED(ctx->r16) < 0X1A ? 1 : 0;
    // 0x450060E4: beq         $at, $zero, L_45006100
    if (ctx->r1 == 0) {
        // 0x450060E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45006100;
    }
    // 0x450060E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x450060EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x450060F0: jal         0x45005EE0
    // 0x450060F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_mobj_main_5EE0(rdram, ctx);
        goto after_2;
    // 0x450060F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x450060F8: b           L_45006180
    // 0x450060FC: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
        goto L_45006180;
    // 0x450060FC: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
L_45006100:
    // 0x45006100: slti        $at, $s0, 0x34
    ctx->r1 = SIGNED(ctx->r16) < 0X34 ? 1 : 0;
    // 0x45006104: beq         $at, $zero, L_45006138
    if (ctx->r1 == 0) {
        // 0x45006108: lui         $at, 0x4361
        ctx->r1 = S32(0X4361 << 16);
            goto L_45006138;
    }
    // 0x45006108: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x4500610C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45006110: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45006114: swc1        $f4, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f4.u32l;
    // 0x45006118: lwc1        $f6, 0x21B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X21B0);
    // 0x4500611C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x45006120: bne         $s0, $at, L_4500617C
    if (ctx->r16 != ctx->r1) {
        // 0x45006124: swc1        $f6, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
            goto L_4500617C;
    }
    // 0x45006124: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x45006128: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500612C: lwc1        $f8, 0x21B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X21B4);
    // 0x45006130: b           L_4500617C
    // 0x45006134: swc1        $f8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f8.u32l;
        goto L_4500617C;
    // 0x45006134: swc1        $f8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f8.u32l;
L_45006138:
    // 0x45006138: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
    // 0x4500613C: beq         $at, $zero, L_4500617C
    if (ctx->r1 == 0) {
        // 0x45006140: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500617C;
    }
    // 0x45006140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45006144: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x45006148: jal         0x45005F98
    // 0x4500614C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_mobj_main_5F98(rdram, ctx);
        goto after_3;
    // 0x4500614C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x45006150: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x45006154: bne         $s0, $at, L_4500617C
    if (ctx->r16 != ctx->r1) {
        // 0x45006158: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500617C;
    }
    // 0x45006158: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500615C: jal         0x45000F80
    // 0x45006160: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_4;
    // 0x45006160: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    after_4:
    // 0x45006164: lw          $a0, 0x1CC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1CC);
    // 0x45006168: lw          $a1, 0x1D0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1D0);
    // 0x4500616C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45006170: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x45006174: jal         0x45005E10
    // 0x45006178: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_mobj_main_5E10(rdram, ctx);
        goto after_5;
    // 0x45006178: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
L_4500617C:
    // 0x4500617C: slti        $at, $s0, 0x39
    ctx->r1 = SIGNED(ctx->r16) < 0X39 ? 1 : 0;
L_45006180:
    // 0x45006180: bne         $at, $zero, L_45006198
    if (ctx->r1 != 0) {
        // 0x45006184: slti        $at, $s0, 0x40
        ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
            goto L_45006198;
    }
    // 0x45006184: slti        $at, $s0, 0x40
    ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x45006188: beq         $at, $zero, L_4500619C
    if (ctx->r1 == 0) {
        // 0x4500618C: slti        $at, $s0, 0x40
        ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
            goto L_4500619C;
    }
    // 0x4500618C: slti        $at, $s0, 0x40
    ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x45006190: jal         0x45005C3C
    // 0x45006194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_6;
    // 0x45006194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
L_45006198:
    // 0x45006198: slti        $at, $s0, 0x40
    ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
L_4500619C:
    // 0x4500619C: bne         $at, $zero, L_45006264
    if (ctx->r1 != 0) {
        // 0x450061A0: slti        $at, $s0, 0x5B
        ctx->r1 = SIGNED(ctx->r16) < 0X5B ? 1 : 0;
            goto L_45006264;
    }
    // 0x450061A0: slti        $at, $s0, 0x5B
    ctx->r1 = SIGNED(ctx->r16) < 0X5B ? 1 : 0;
    // 0x450061A4: beq         $at, $zero, L_450061EC
    if (ctx->r1 == 0) {
        // 0x450061A8: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_450061EC;
    }
    // 0x450061A8: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x450061AC: bne         $s0, $at, L_450061BC
    if (ctx->r16 != ctx->r1) {
        // 0x450061B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_450061BC;
    }
    // 0x450061B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x450061B4: jal         0x45000F80
    // 0x450061B8: addiu       $a1, $zero, 0x174
    ctx->r5 = ADD32(0, 0X174);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_7;
    // 0x450061B8: addiu       $a1, $zero, 0x174
    ctx->r5 = ADD32(0, 0X174);
    after_7:
L_450061BC:
    // 0x450061BC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x450061C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x450061C4: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450061C8: swc1        $f10, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f10.u32l;
    // 0x450061CC: lwc1        $f16, 0x21B8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X21B8);
    // 0x450061D0: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x450061D4: bne         $s0, $at, L_45006264
    if (ctx->r16 != ctx->r1) {
        // 0x450061D8: swc1        $f16, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
            goto L_45006264;
    }
    // 0x450061D8: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    // 0x450061DC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450061E0: lwc1        $f18, 0x21BC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X21BC);
    // 0x450061E4: b           L_45006264
    // 0x450061E8: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
        goto L_45006264;
    // 0x450061E8: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
L_450061EC:
    // 0x450061EC: slti        $at, $s0, 0x64
    ctx->r1 = SIGNED(ctx->r16) < 0X64 ? 1 : 0;
    // 0x450061F0: beq         $at, $zero, L_4500620C
    if (ctx->r1 == 0) {
        // 0x450061F4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500620C;
    }
    // 0x450061F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x450061F8: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    // 0x450061FC: jal         0x45005F98
    // 0x45006200: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_mobj_main_5F98(rdram, ctx);
        goto after_8;
    // 0x45006200: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x45006204: b           L_45006268
    // 0x45006208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_45006268;
    // 0x45006208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500620C:
    // 0x4500620C: slti        $at, $s0, 0x73
    ctx->r1 = SIGNED(ctx->r16) < 0X73 ? 1 : 0;
    // 0x45006210: beq         $at, $zero, L_45006230
    if (ctx->r1 == 0) {
        // 0x45006214: lui         $at, 0x4501
        ctx->r1 = S32(0X4501 << 16);
            goto L_45006230;
    }
    // 0x45006214: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45006218: lwc1        $f6, 0x21C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X21C0);
    // 0x4500621C: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x45006220: nop

    // 0x45006224: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x45006228: b           L_45006264
    // 0x4500622C: swc1        $f8, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f8.u32l;
        goto L_45006264;
    // 0x4500622C: swc1        $f8, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f8.u32l;
L_45006230:
    // 0x45006230: slti        $at, $s0, 0x79
    ctx->r1 = SIGNED(ctx->r16) < 0X79 ? 1 : 0;
    // 0x45006234: beq         $at, $zero, L_45006264
    if (ctx->r1 == 0) {
        // 0x45006238: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45006264;
    }
    // 0x45006238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500623C: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    // 0x45006240: jal         0x45005EE0
    // 0x45006244: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_mobj_main_5EE0(rdram, ctx);
        goto after_9;
    // 0x45006244: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x45006248: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x4500624C: bne         $s0, $at, L_45006264
    if (ctx->r16 != ctx->r1) {
        // 0x45006250: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45006264;
    }
    // 0x45006250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45006254: jal         0x45000F80
    // 0x45006258: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_10;
    // 0x45006258: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    after_10:
    // 0x4500625C: jal         0x45005C3C
    // 0x45006260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_11;
    // 0x45006260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
L_45006264:
    // 0x45006264: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_45006268:
    // 0x45006268: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4500626C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x45006270: jr          $ra
    // 0x45006274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x45006274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_6278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006278: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4500627C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45006280: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x45006284: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x45006288: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500628C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45006290: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45006294: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45006298: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500629C: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x450062A0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x450062A4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x450062A8: jal         0x45000F34
    // 0x450062AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x450062AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x450062B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x450062B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x450062B8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x450062BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450062C0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x450062C4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x450062C8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x450062CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x450062D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x450062D4: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x450062D8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x450062DC: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x450062E0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x450062E4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x450062E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x450062EC: jal         0x450006C4
    // 0x450062F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x450062F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x450062F4: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x450062F8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x450062FC: lw          $a0, 0x1CC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1CC);
    // 0x45006300: lw          $a1, 0x1D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1D0);
    // 0x45006304: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45006308: jal         0x45005E10
    // 0x4500630C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_5E10(rdram, ctx);
        goto after_2;
    // 0x4500630C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x45006310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45006314: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x45006318: jr          $ra
    // 0x4500631C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4500631C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_6320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006320: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45006324: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45006328: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500632C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x45006330: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45006334: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45006338: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x4500633C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45006340: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45006344: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x45006348: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500634C: jal         0x45000F34
    // 0x45006350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45006350: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45006354: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x45006358: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500635C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x45006360: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x45006364: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45006368: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500636C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x45006370: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45006374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45006378: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500637C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x45006380: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x45006384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45006388: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4500638C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x45006390: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x45006394: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45006398: jal         0x450006C4
    // 0x4500639C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500639C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x450063A0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x450063A4: sw          $t8, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r24;
    // 0x450063A8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x450063AC: lw          $a0, 0x1CC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1CC);
    // 0x450063B0: lw          $a1, 0x1D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1D0);
    // 0x450063B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450063B8: jal         0x45005E10
    // 0x450063BC: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    ovl_mobj_main_5E10(rdram, ctx);
        goto after_2;
    // 0x450063BC: lui         $a2, 0x4280
    ctx->r6 = S32(0X4280 << 16);
    after_2:
    // 0x450063C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x450063C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x450063C8: jr          $ra
    // 0x450063CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x450063CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_63D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450063D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450063D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450063D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450063DC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x450063E0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450063E4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x450063E8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x450063EC: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x450063F0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450063F4: jal         0x45005B24
    // 0x450063F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x450063F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x450063FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006404: jr          $ra
    // 0x45006408: nop

    return;
    // 0x45006408: nop

;}
RECOMP_FUNC void ovl_mobj_main_640C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500640C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006414: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006418: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x4500641C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45006420: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45006424: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x45006428: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x4500642C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45006430: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45006434: jal         0x45005B24
    // 0x45006438: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45006438: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x4500643C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006444: jr          $ra
    // 0x45006448: nop

    return;
    // 0x45006448: nop

;}
RECOMP_FUNC void ovl_mobj_main_644C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500644C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006458: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500645C: jal         0x450063D0
    // 0x45006460: lui         $a1, 0x41F8
    ctx->r5 = S32(0X41F8 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006460: lui         $a1, 0x41F8
    ctx->r5 = S32(0X41F8 << 16);
    after_0:
    // 0x45006464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500646C: jr          $ra
    // 0x45006470: nop

    return;
    // 0x45006470: nop

;}
RECOMP_FUNC void ovl_mobj_main_6474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006474: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500647C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006480: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006484: jal         0x4500640C
    // 0x45006488: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006488: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500648C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006494: jr          $ra
    // 0x45006498: nop

    return;
    // 0x45006498: nop

;}
RECOMP_FUNC void ovl_mobj_main_649C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500649C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450064A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450064A4: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x450064A8: lw          $v1, 0x184($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X184);
    // 0x450064AC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x450064B0: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x450064B4: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x450064B8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x450064BC: beq         $t8, $zero, L_450064FC
    if (ctx->r24 == 0) {
        // 0x450064C0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_450064FC;
    }
    // 0x450064C0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x450064C4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x450064C8: bne         $t7, $at, L_450064E4
    if (ctx->r15 != ctx->r1) {
        // 0x450064CC: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_450064E4;
    }
    // 0x450064CC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x450064D0: jal         0x45000F80
    // 0x450064D4: addiu       $a1, $zero, 0xDB
    ctx->r5 = ADD32(0, 0XDB);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x450064D4: addiu       $a1, $zero, 0xDB
    ctx->r5 = ADD32(0, 0XDB);
    after_0:
    // 0x450064D8: b           L_45006534
    // 0x450064DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006534;
    // 0x450064DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450064E0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_450064E4:
    // 0x450064E4: bne         $v0, $at, L_45006534
    if (ctx->r2 != ctx->r1) {
        // 0x450064E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006534;
    }
    // 0x450064E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450064EC: jal         0x45005C3C
    // 0x450064F0: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x450064F0: nop

    after_1:
    // 0x450064F4: b           L_45006534
    // 0x450064F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006534;
    // 0x450064F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450064FC:
    // 0x450064FC: bne         $v1, $zero, L_45006530
    if (ctx->r3 != 0) {
        // 0x45006500: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_45006530;
    }
    // 0x45006500: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45006504: bne         $v0, $at, L_45006520
    if (ctx->r2 != ctx->r1) {
        // 0x45006508: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_45006520;
    }
    // 0x45006508: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4500650C: jal         0x45000F80
    // 0x45006510: addiu       $a1, $zero, 0xDB
    ctx->r5 = ADD32(0, 0XDB);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x45006510: addiu       $a1, $zero, 0xDB
    ctx->r5 = ADD32(0, 0XDB);
    after_2:
    // 0x45006514: b           L_45006534
    // 0x45006518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006534;
    // 0x45006518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500651C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_45006520:
    // 0x45006520: bne         $v0, $at, L_45006534
    if (ctx->r2 != ctx->r1) {
        // 0x45006524: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006534;
    }
    // 0x45006524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006528: jal         0x45005C3C
    // 0x4500652C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x4500652C: nop

    after_3:
L_45006530:
    // 0x45006530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006534:
    // 0x45006534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006538: jr          $ra
    // 0x4500653C: nop

    return;
    // 0x4500653C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006540: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500654C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006550: jal         0x450063D0
    // 0x45006554: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006554: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_0:
    // 0x45006558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500655C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006560: jr          $ra
    // 0x45006564: nop

    return;
    // 0x45006564: nop

;}
RECOMP_FUNC void ovl_mobj_main_6568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006568: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500656C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006574: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006578: jal         0x4500640C
    // 0x4500657C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x4500657C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45006580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006588: jr          $ra
    // 0x4500658C: nop

    return;
    // 0x4500658C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006598: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x4500659C: lw          $v1, 0x184($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X184);
    // 0x450065A0: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x450065A4: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x450065A8: sw          $v0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r2;
    // 0x450065AC: beq         $t8, $zero, L_450065D4
    if (ctx->r24 == 0) {
        // 0x450065B0: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_450065D4;
    }
    // 0x450065B0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x450065B4: addiu       $a1, $zero, 0x8A
    ctx->r5 = ADD32(0, 0X8A);
    // 0x450065B8: jal         0x45000F80
    // 0x450065BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x450065BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450065C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450065C4: jal         0x45005C3C
    // 0x450065C8: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x450065C8: nop

    after_1:
    // 0x450065CC: b           L_4500660C
    // 0x450065D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500660C;
    // 0x450065D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450065D4:
    // 0x450065D4: bne         $v1, $zero, L_45006608
    if (ctx->r3 != 0) {
        // 0x450065D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_45006608;
    }
    // 0x450065D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x450065DC: bne         $v0, $at, L_450065F8
    if (ctx->r2 != ctx->r1) {
        // 0x450065E0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_450065F8;
    }
    // 0x450065E0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x450065E4: jal         0x45000F80
    // 0x450065E8: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x450065E8: addiu       $a1, $zero, 0x89
    ctx->r5 = ADD32(0, 0X89);
    after_2:
    // 0x450065EC: b           L_4500660C
    // 0x450065F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500660C;
    // 0x450065F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450065F4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
L_450065F8:
    // 0x450065F8: bne         $v0, $at, L_4500660C
    if (ctx->r2 != ctx->r1) {
        // 0x450065FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500660C;
    }
    // 0x450065FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006600: jal         0x45005C3C
    // 0x45006604: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x45006604: nop

    after_3:
L_45006608:
    // 0x45006608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500660C:
    // 0x4500660C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006610: jr          $ra
    // 0x45006614: nop

    return;
    // 0x45006614: nop

;}
