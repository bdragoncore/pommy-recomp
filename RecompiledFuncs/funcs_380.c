#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_story_4DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004DF4: jal         0x60000C1C
    // 0x60004DF8: nop

    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60004DF8: nop

    after_0:
    // 0x60004DFC: jal         0x60000DD8
    // 0x60004E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60004E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004E04: jal         0x60000850
    // 0x60004E08: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_850(rdram, ctx);
        goto after_2;
    // 0x60004E08: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x60004E0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E10: jal         0x600044B8
    // 0x60004E14: addiu       $a0, $a0, 0x77A8
    ctx->r4 = ADD32(ctx->r4, 0X77A8);
    ovl_demo_story_44B8(rdram, ctx);
        goto after_3;
    // 0x60004E14: addiu       $a0, $a0, 0x77A8
    ctx->r4 = ADD32(ctx->r4, 0X77A8);
    after_3:
    // 0x60004E18: bne         $v0, $zero, L_60004E50
    if (ctx->r2 != 0) {
        // 0x60004E1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60004E50;
    }
    // 0x60004E1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004E20: jal         0x60000850
    // 0x60004E24: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_850(rdram, ctx);
        goto after_4;
    // 0x60004E24: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60004E28: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E2C: jal         0x600044B8
    // 0x60004E30: addiu       $a0, $a0, 0x7850
    ctx->r4 = ADD32(ctx->r4, 0X7850);
    ovl_demo_story_44B8(rdram, ctx);
        goto after_5;
    // 0x60004E30: addiu       $a0, $a0, 0x7850
    ctx->r4 = ADD32(ctx->r4, 0X7850);
    after_5:
    // 0x60004E34: bne         $v0, $zero, L_60004E50
    if (ctx->r2 != 0) {
        // 0x60004E38: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60004E50;
    }
    // 0x60004E38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004E3C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x60004E40: jal         0x60000850
    // 0x60004E44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_demo_story_850(rdram, ctx);
        goto after_6;
    // 0x60004E44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x60004E48: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x60004E4C: nop

L_60004E50:
    // 0x60004E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004E58: jr          $ra
    // 0x60004E5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60004E5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_demo_story_4E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60004E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004E68: jal         0x60000C1C
    // 0x60004E6C: nop

    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60004E6C: nop

    after_0:
    // 0x60004E70: jal         0x60000DD8
    // 0x60004E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60004E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004E78: jal         0x60000DD8
    // 0x60004E7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_2;
    // 0x60004E7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60004E80: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x60004E84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004E88: jal         0x60000D9C
    // 0x60004E8C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    ovl_demo_story_D9C(rdram, ctx);
        goto after_3;
    // 0x60004E8C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x60004E90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60004E94: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x60004E98: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x60004E9C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x60004EA0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x60004EA4: jal         0x60000D60
    // 0x60004EA8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_4;
    // 0x60004EA8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x60004EAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004EB0: lwc1        $f6, 0x79A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79A8);
    // 0x60004EB4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x60004EB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60004EBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004EC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x60004EC4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60004EC8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x60004ECC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x60004ED0: jal         0x60000D78
    // 0x60004ED4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_5;
    // 0x60004ED4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x60004ED8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004EDC: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    // 0x60004EE0: jal         0x6000230C
    // 0x60004EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_230C(rdram, ctx);
        goto after_6;
    // 0x60004EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60004EE8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x60004EEC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x60004EF0: addiu       $a2, $zero, 0xA7
    ctx->r6 = ADD32(0, 0XA7);
    // 0x60004EF4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x60004EF8: jal         0x60000DC0
    // 0x60004EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_7;
    // 0x60004EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x60004F00: jal         0x60000850
    // 0x60004F04: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    ovl_demo_story_850(rdram, ctx);
        goto after_8;
    // 0x60004F04: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    after_8:
    // 0x60004F08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004F0C: lwc1        $f16, 0x79AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X79AC);
    // 0x60004F10: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x60004F14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60004F18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004F1C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x60004F20: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60004F24: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x60004F28: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x60004F2C: jal         0x60000D78
    // 0x60004F30: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_9;
    // 0x60004F30: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x60004F34: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F38: jal         0x60002198
    // 0x60004F3C: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    ovl_demo_story_2198(rdram, ctx);
        goto after_10;
    // 0x60004F3C: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    after_10:
    // 0x60004F40: jal         0x60000244
    // 0x60004F44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_demo_story_244(rdram, ctx);
        goto after_11;
    // 0x60004F44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_11:
    // 0x60004F48: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F4C: addiu       $a0, $a0, 0x76AC
    ctx->r4 = ADD32(ctx->r4, 0X76AC);
    // 0x60004F50: jal         0x600041FC
    // 0x60004F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_41FC(rdram, ctx);
        goto after_12;
    // 0x60004F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x60004F58: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F5C: lw          $a0, 0x76B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X76B0);
    // 0x60004F60: jal         0x60000850
    // 0x60004F64: nop

    ovl_demo_story_850(rdram, ctx);
        goto after_13;
    // 0x60004F64: nop

    after_13:
    // 0x60004F68: jal         0x60000850
    // 0x60004F6C: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    ovl_demo_story_850(rdram, ctx);
        goto after_14;
    // 0x60004F6C: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_14:
    // 0x60004F70: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F74: addiu       $a0, $a0, 0x76B4
    ctx->r4 = ADD32(ctx->r4, 0X76B4);
    // 0x60004F78: jal         0x600041FC
    // 0x60004F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_demo_story_41FC(rdram, ctx);
        goto after_15;
    // 0x60004F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x60004F80: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F84: lw          $a0, 0x76B8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X76B8);
    // 0x60004F88: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x60004F8C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004F90: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x60004F94: jal         0x60000850
    // 0x60004F98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    ovl_demo_story_850(rdram, ctx);
        goto after_16;
    // 0x60004F98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_16:
    // 0x60004F9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004FA0: lwc1        $f6, 0x79B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79B0);
    // 0x60004FA4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60004FA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60004FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004FB0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x60004FB4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60004FB8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x60004FBC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x60004FC0: jal         0x60000D78
    // 0x60004FC4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_17;
    // 0x60004FC4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x60004FC8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x60004FCC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x60004FD0: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x60004FD4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x60004FD8: jal         0x60000DC0
    // 0x60004FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_18;
    // 0x60004FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x60004FE0: jal         0x60000850
    // 0x60004FE4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_850(rdram, ctx);
        goto after_19;
    // 0x60004FE4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_19:
    // 0x60004FE8: jal         0x60000850
    // 0x60004FEC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_850(rdram, ctx);
        goto after_20;
    // 0x60004FEC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_20:
    // 0x60004FF0: jal         0x60000850
    // 0x60004FF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_demo_story_850(rdram, ctx);
        goto after_21;
    // 0x60004FF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_21:
    // 0x60004FF8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004FFC: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    // 0x60005000: jal         0x6000230C
    // 0x60005004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_demo_story_230C(rdram, ctx);
        goto after_22;
    // 0x60005004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x60005008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000500C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x60005010: jr          $ra
    // 0x60005014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60005014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_5018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005018: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x6000501C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60005020: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60005024: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60005028: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x6000502C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60005030: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005034: jal         0x60000C1C
    // 0x60005038: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60005038: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000503C: jal         0x60000DD8
    // 0x60005040: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x60005040: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60005044: jal         0x60000DD8
    // 0x60005048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_2;
    // 0x60005048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x6000504C: lw          $t6, 0x44($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X44);
    // 0x60005050: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x60005054: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x60005058: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x6000505C: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
    // 0x60005060: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60005064: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005068: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x6000506C: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x60005070: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x60005074: jal         0x60000D60
    // 0x60005078: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_3;
    // 0x60005078: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x6000507C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005080: lwc1        $f4, 0x79B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79B4);
    // 0x60005084: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x60005088: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000508C: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x60005090: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x60005094: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60005098: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x6000509C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x600050A0: jal         0x60000D78
    // 0x600050A4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_4;
    // 0x600050A4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x600050A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600050AC: jal         0x60002198
    // 0x600050B0: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    ovl_demo_story_2198(rdram, ctx);
        goto after_5;
    // 0x600050B0: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    after_5:
    // 0x600050B4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600050B8: addiu       $s1, $s1, 0x7664
    ctx->r17 = ADD32(ctx->r17, 0X7664);
    // 0x600050BC: jal         0x60002198
    // 0x600050C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_6;
    // 0x600050C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x600050C4: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x600050C8: jal         0x60000724
    // 0x600050CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_demo_story_724(rdram, ctx);
        goto after_7;
    // 0x600050CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x600050D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600050D4: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x600050D8: lw          $a0, 0x766C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X766C);
    // 0x600050DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600050E0: jal         0x600006C4
    // 0x600050E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_demo_story_6C4(rdram, ctx);
        goto after_8;
    // 0x600050E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x600050E8: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x600050EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600050F0: jal         0x60000310
    // 0x600050F4: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_310(rdram, ctx);
        goto after_9;
    // 0x600050F4: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x600050F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600050FC: lwc1        $f8, 0x79B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79B8);
    // 0x60005100: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60005104: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x60005108: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000510C: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x60005110: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60005114: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60005118: jal         0x6000031C
    // 0x6000511C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_31C(rdram, ctx);
        goto after_10;
    // 0x6000511C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x60005120: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005124: lwc1        $f4, 0x79BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79BC);
    // 0x60005128: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000512C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x60005130: lw          $a0, 0x766C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X766C);
    // 0x60005134: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005138: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x6000513C: jal         0x600006C4
    // 0x60005140: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_11;
    // 0x60005140: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x60005144: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005148: lw          $a0, 0x766C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X766C);
    // 0x6000514C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60005150: jal         0x600006C4
    // 0x60005154: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_12;
    // 0x60005154: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x60005158: lui         $at, 0x439E
    ctx->r1 = S32(0X439E << 16);
    // 0x6000515C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005160: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005164: lw          $a0, 0x766C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X766C);
    // 0x60005168: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x6000516C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60005170: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60005174: jal         0x600006C4
    // 0x60005178: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_6C4(rdram, ctx);
        goto after_13;
    // 0x60005178: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x6000517C: jal         0x60000244
    // 0x60005180: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_demo_story_244(rdram, ctx);
        goto after_14;
    // 0x60005180: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_14:
    // 0x60005184: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60005188: addiu       $s0, $s0, 0x76BC
    ctx->r16 = ADD32(ctx->r16, 0X76BC);
    // 0x6000518C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60005190: jal         0x600041FC
    // 0x60005194: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_demo_story_41FC(rdram, ctx);
        goto after_15;
    // 0x60005194: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x60005198: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x6000519C: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x600051A0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600051A4: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x600051A8: jal         0x60000850
    // 0x600051AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    ovl_demo_story_850(rdram, ctx);
        goto after_16;
    // 0x600051AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_16:
    // 0x600051B0: jal         0x600022AC
    // 0x600051B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_17;
    // 0x600051B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x600051B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600051BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600051C0: swc1        $f10, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f10.u32l;
    // 0x600051C4: lwc1        $f16, 0x79C0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X79C0);
    // 0x600051C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600051CC: swc1        $f16, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f16.u32l;
    // 0x600051D0: lwc1        $f18, 0x79C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X79C4);
    // 0x600051D4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x600051D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600051DC: swc1        $f18, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f18.u32l;
    // 0x600051E0: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x600051E4: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x600051E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600051EC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x600051F0: jal         0x60000D60
    // 0x600051F4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_18;
    // 0x600051F4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x600051F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600051FC: lwc1        $f6, 0x79C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79C8);
    // 0x60005200: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x60005204: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005208: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x6000520C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60005210: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60005214: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x60005218: jal         0x60000D78
    // 0x6000521C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_19;
    // 0x6000521C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x60005220: jal         0x60000850
    // 0x60005224: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_850(rdram, ctx);
        goto after_20;
    // 0x60005224: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_20:
    // 0x60005228: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000522C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60005230: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60005234: addiu       $s1, $s1, 0x6A0C
    ctx->r17 = ADD32(ctx->r17, 0X6A0C);
    // 0x60005238: addiu       $s2, $s2, 0x6A54
    ctx->r18 = ADD32(ctx->r18, 0X6A54);
    // 0x6000523C: addiu       $s0, $s0, 0x76C4
    ctx->r16 = ADD32(ctx->r16, 0X76C4);
L_60005240:
    // 0x60005240: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60005244: addiu       $t9, $t9, 0x76EC
    ctx->r25 = ADD32(ctx->r25, 0X76EC);
    // 0x60005248: sltu        $at, $s0, $t9
    ctx->r1 = ctx->r16 < ctx->r25 ? 1 : 0;
    // 0x6000524C: beq         $at, $zero, L_60005264
    if (ctx->r1 == 0) {
        // 0x60005250: nop
    
            goto L_60005264;
    }
    // 0x60005250: nop

    // 0x60005254: jal         0x60002198
    // 0x60005258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_21;
    // 0x60005258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x6000525C: b           L_6000526C
    // 0x60005260: nop

        goto L_6000526C;
    // 0x60005260: nop

L_60005264:
    // 0x60005264: jal         0x60002198
    // 0x60005268: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_22;
    // 0x60005268: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_22:
L_6000526C:
    // 0x6000526C: jal         0x60004B24
    // 0x60005270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_4B24(rdram, ctx);
        goto after_23;
    // 0x60005270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x60005274: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x60005278: jal         0x60000850
    // 0x6000527C: nop

    ovl_demo_story_850(rdram, ctx);
        goto after_24;
    // 0x6000527C: nop

    after_24:
    // 0x60005280: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60005284: addiu       $t0, $t0, 0x76EC
    ctx->r8 = ADD32(ctx->r8, 0X76EC);
    // 0x60005288: sltu        $at, $s0, $t0
    ctx->r1 = ctx->r16 < ctx->r8 ? 1 : 0;
    // 0x6000528C: beq         $at, $zero, L_600052AC
    if (ctx->r1 == 0) {
        // 0x60005290: nop
    
            goto L_600052AC;
    }
    // 0x60005290: nop

    // 0x60005294: jal         0x600022AC
    // 0x60005298: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_25;
    // 0x60005298: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x6000529C: jal         0x60000850
    // 0x600052A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_demo_story_850(rdram, ctx);
        goto after_26;
    // 0x600052A0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_26:
    // 0x600052A4: b           L_600052B4
    // 0x600052A8: nop

        goto L_600052B4;
    // 0x600052A8: nop

L_600052AC:
    // 0x600052AC: jal         0x600022AC
    // 0x600052B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_27;
    // 0x600052B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_27:
L_600052B4:
    // 0x600052B4: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600052B8: addiu       $t1, $t1, 0x7700
    ctx->r9 = ADD32(ctx->r9, 0X7700);
    // 0x600052BC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x600052C0: bne         $s0, $t1, L_60005240
    if (ctx->r16 != ctx->r9) {
        // 0x600052C4: nop
    
            goto L_60005240;
    }
    // 0x600052C4: nop

    // 0x600052C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600052CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600052D0: swc1        $f20, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f20.u32l;
    // 0x600052D4: swc1        $f20, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f20.u32l;
    // 0x600052D8: swc1        $f10, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f10.u32l;
    // 0x600052DC: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x600052E0: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x600052E4: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x600052E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600052EC: jal         0x60000D60
    // 0x600052F0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    ovl_demo_story_D60(rdram, ctx);
        goto after_28;
    // 0x600052F0: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    after_28:
    // 0x600052F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600052F8: jal         0x600022AC
    // 0x600052FC: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    ovl_demo_story_22AC(rdram, ctx);
        goto after_29;
    // 0x600052FC: addiu       $a0, $a0, 0x75D4
    ctx->r4 = ADD32(ctx->r4, 0X75D4);
    after_29:
    // 0x60005300: jal         0x600022AC
    // 0x60005304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_30;
    // 0x60005304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_30:
    // 0x60005308: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000530C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60005310: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60005314: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60005318: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x6000531C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60005320: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60005324: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x60005328: jr          $ra
    // 0x6000532C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x6000532C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_5330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005330: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60005334: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60005338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000533C: addiu       $t7, $t7, 0x78FC
    ctx->r15 = ADD32(ctx->r15, 0X78FC);
    // 0x60005340: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x60005344: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x60005348: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x6000534C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x60005350: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x60005354: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x60005358: beq         $a0, $zero, L_60005374
    if (ctx->r4 == 0) {
        // 0x6000535C: sw          $t0, 0x4($t6)
        MEM_W(0X4, ctx->r14) = ctx->r8;
            goto L_60005374;
    }
    // 0x6000535C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x60005360: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60005364: beq         $a0, $at, L_600054AC
    if (ctx->r4 == ctx->r1) {
        // 0x60005368: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_600054AC;
    }
    // 0x60005368: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000536C: b           L_60005604
    // 0x60005370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60005604;
    // 0x60005370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60005374:
    // 0x60005374: lui         $a1, 0x5757
    ctx->r5 = S32(0X5757 << 16);
    // 0x60005378: ori         $a1, $a1, 0x57FF
    ctx->r5 = ctx->r5 | 0X57FF;
    // 0x6000537C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x60005380: jal         0x60000DC0
    // 0x60005384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_0;
    // 0x60005384: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60005388: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x6000538C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60005390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005394: jal         0x60000DC0
    // 0x60005398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_1;
    // 0x60005398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x6000539C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x600053A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600053A4: ori         $a2, $zero, 0x8001
    ctx->r6 = 0 | 0X8001;
    // 0x600053A8: jal         0x60000DC0
    // 0x600053AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_2;
    // 0x600053AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x600053B0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x600053B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600053B8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x600053BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600053C0: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x600053C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600053C8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x600053CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600053D0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x600053D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600053D8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x600053DC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x600053E0: jal         0x60000DC0
    // 0x600053E4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_3;
    // 0x600053E4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x600053E8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x600053EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600053F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600053F4: jal         0x60000DC0
    // 0x600053F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_4;
    // 0x600053F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600053FC: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x60005400: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60005404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60005408: jal         0x60000DC0
    // 0x6000540C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_5;
    // 0x6000540C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60005410: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x60005414: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005418: ori         $a2, $zero, 0x8003
    ctx->r6 = 0 | 0X8003;
    // 0x6000541C: jal         0x60000DC0
    // 0x60005420: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_6;
    // 0x60005420: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60005424: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x60005428: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x6000542C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x60005430: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60005434: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005438: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x6000543C: jal         0x60000DC0
    // 0x60005440: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_7;
    // 0x60005440: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_7:
    // 0x60005444: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60005448: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000544C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60005450: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60005454: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60005458: lui         $a2, 0xFF00
    ctx->r6 = S32(0XFF00 << 16);
    // 0x6000545C: ori         $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 | 0XFF;
    // 0x60005460: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60005464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000546C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x60005470: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x60005474: jal         0x60000DC0
    // 0x60005478: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_8;
    // 0x60005478: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x6000547C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60005480: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005484: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x60005488: jal         0x60000DC0
    // 0x6000548C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_9;
    // 0x6000548C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60005490: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x60005494: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000549C: jal         0x60000DC0
    // 0x600054A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_10;
    // 0x600054A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x600054A4: b           L_60005604
    // 0x600054A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60005604;
    // 0x600054A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600054AC:
    // 0x600054AC: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x600054B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600054B4: jal         0x60000DC0
    // 0x600054B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_11;
    // 0x600054B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x600054BC: lui         $a1, 0x3939
    ctx->r5 = S32(0X3939 << 16);
    // 0x600054C0: ori         $a1, $a1, 0x39FF
    ctx->r5 = ctx->r5 | 0X39FF;
    // 0x600054C4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x600054C8: jal         0x60000DC0
    // 0x600054CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_12;
    // 0x600054CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x600054D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x600054D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600054D8: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x600054DC: jal         0x60000DC0
    // 0x600054E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_13;
    // 0x600054E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x600054E4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x600054E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600054EC: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x600054F0: jal         0x60000DC0
    // 0x600054F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_14;
    // 0x600054F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x600054F8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x600054FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60005500: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x60005504: jal         0x60000DC0
    // 0x60005508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_15;
    // 0x60005508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x6000550C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005510: lwc1        $f4, 0x79CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79CC);
    // 0x60005514: lui         $at, 0x45E1
    ctx->r1 = S32(0X45E1 << 16);
    // 0x60005518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000551C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005520: lwc1        $f8, 0x79D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79D0);
    // 0x60005524: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60005528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000552C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x60005530: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60005534: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x60005538: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x6000553C: jal         0x60000DC0
    // 0x60005540: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_16;
    // 0x60005540: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x60005544: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005548: lwc1        $f10, 0x79D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X79D4);
    // 0x6000554C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005550: lwc1        $f16, 0x79D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X79D8);
    // 0x60005554: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005558: lwc1        $f18, 0x79DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X79DC);
    // 0x6000555C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60005560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60005564: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x60005568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000556C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x60005570: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x60005574: jal         0x60000DC0
    // 0x60005578: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_17;
    // 0x60005578: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x6000557C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60005580: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60005584: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x60005588: jal         0x60000DC0
    // 0x6000558C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_18;
    // 0x6000558C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x60005590: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005594: lwc1        $f4, 0x79E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79E0);
    // 0x60005598: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000559C: lwc1        $f6, 0x79E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79E4);
    // 0x600055A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055A4: lwc1        $f8, 0x79E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79E8);
    // 0x600055A8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x600055AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600055B0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600055B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600055B8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x600055BC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x600055C0: jal         0x60000DC0
    // 0x600055C4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_19;
    // 0x600055C4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x600055C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055CC: lwc1        $f10, 0x79EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X79EC);
    // 0x600055D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055D4: lwc1        $f16, 0x79F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X79F0);
    // 0x600055D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055DC: lwc1        $f18, 0x79F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X79F4);
    // 0x600055E0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x600055E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600055E8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x600055EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600055F0: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x600055F4: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x600055F8: jal         0x60000DC0
    // 0x600055FC: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    ovl_demo_story_DC0(rdram, ctx);
        goto after_20;
    // 0x600055FC: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_20:
    // 0x60005600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60005604:
    // 0x60005604: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x60005608: jr          $ra
    // 0x6000560C: nop

    return;
    // 0x6000560C: nop

;}
RECOMP_FUNC void ovl_demo_story_5610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005610: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005614: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60005618: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x6000561C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x60005620: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x60005624: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60005628: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000562C: jal         0x60000C1C
    // 0x60005630: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60005630: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005634: jal         0x60000250
    // 0x60005638: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    ovl_demo_story_250(rdram, ctx);
        goto after_1;
    // 0x60005638: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x6000563C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005640: sw          $zero, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = 0;
    // 0x60005644: jal         0x60000850
    // 0x60005648: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_demo_story_850(rdram, ctx);
        goto after_2;
    // 0x60005648: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x6000564C: jal         0x60000A6C
    // 0x60005650: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_3;
    // 0x60005650: nop

    after_3:
    // 0x60005654: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60005658: jal         0x60001334
    // 0x6000565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_4;
    // 0x6000565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60005660: jal         0x60000118
    // 0x60005664: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    ovl_demo_story_118(rdram, ctx);
        goto after_5;
    // 0x60005664: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    after_5:
    // 0x60005668: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000566C: jal         0x60004C94
    // 0x60005670: sw          $v0, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->r2;
    ovl_demo_story_4C94(rdram, ctx);
        goto after_6;
    // 0x60005670: sw          $v0, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->r2;
    after_6:
    // 0x60005674: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x60005678: nop
    
            goto L_600058F0;
    }
    // 0x60005678: nop

    // 0x6000567C: jal         0x60005330
    // 0x60005680: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_5330(rdram, ctx);
        goto after_7;
    // 0x60005680: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60005684: jal         0x60004C04
    // 0x60005688: addiu       $a0, $zero, 0xBF0
    ctx->r4 = ADD32(0, 0XBF0);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_8;
    // 0x60005688: addiu       $a0, $zero, 0xBF0
    ctx->r4 = ADD32(0, 0XBF0);
    after_8:
    // 0x6000568C: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x60005690: nop
    
            goto L_600058F0;
    }
    // 0x60005690: nop

    // 0x60005694: jal         0x60000A6C
    // 0x60005698: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_9;
    // 0x60005698: nop

    after_9:
    // 0x6000569C: jal         0x60004DEC
    // 0x600056A0: nop

    ovl_demo_story_4DEC(rdram, ctx);
        goto after_10;
    // 0x600056A0: nop

    after_10:
    // 0x600056A4: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x600056A8: nop
    
            goto L_600058F0;
    }
    // 0x600056A8: nop

    // 0x600056AC: jal         0x60005330
    // 0x600056B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_5330(rdram, ctx);
        goto after_11;
    // 0x600056B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x600056B4: jal         0x60004C04
    // 0x600056B8: addiu       $a0, $zero, 0xBF1
    ctx->r4 = ADD32(0, 0XBF1);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_12;
    // 0x600056B8: addiu       $a0, $zero, 0xBF1
    ctx->r4 = ADD32(0, 0XBF1);
    after_12:
    // 0x600056BC: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x600056C0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600058F0;
    }
    // 0x600056C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600056C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600056C8: jal         0x600001C0
    // 0x600056CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_1C0(rdram, ctx);
        goto after_13;
    // 0x600056CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x600056D0: jal         0x60005330
    // 0x600056D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_5330(rdram, ctx);
        goto after_14;
    // 0x600056D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x600056D8: jal         0x60004C04
    // 0x600056DC: addiu       $a0, $zero, 0xC05
    ctx->r4 = ADD32(0, 0XC05);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_15;
    // 0x600056DC: addiu       $a0, $zero, 0xC05
    ctx->r4 = ADD32(0, 0XC05);
    after_15:
    // 0x600056E0: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x600056E4: nop
    
            goto L_600058F0;
    }
    // 0x600056E4: nop

    // 0x600056E8: jal         0x60005330
    // 0x600056EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_5330(rdram, ctx);
        goto after_16;
    // 0x600056EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x600056F0: jal         0x600007E4
    // 0x600056F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_7E4(rdram, ctx);
        goto after_17;
    // 0x600056F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x600056F8: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x600056FC: nop

    // 0x60005700: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x60005704: jal         0x60000A6C
    // 0x60005708: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    ovl_demo_story_A6C(rdram, ctx);
        goto after_18;
    // 0x60005708: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    after_18:
    // 0x6000570C: jal         0x60004E60
    // 0x60005710: nop

    ovl_demo_story_4E60(rdram, ctx);
        goto after_19;
    // 0x60005710: nop

    after_19:
    // 0x60005714: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x60005718: nop
    
            goto L_600058F0;
    }
    // 0x60005718: nop

    // 0x6000571C: jal         0x60005330
    // 0x60005720: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_5330(rdram, ctx);
        goto after_20;
    // 0x60005720: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x60005724: jal         0x60004C04
    // 0x60005728: addiu       $a0, $zero, 0xBF2
    ctx->r4 = ADD32(0, 0XBF2);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_21;
    // 0x60005728: addiu       $a0, $zero, 0xBF2
    ctx->r4 = ADD32(0, 0XBF2);
    after_21:
    // 0x6000572C: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x60005730: nop
    
            goto L_600058F0;
    }
    // 0x60005730: nop

    // 0x60005734: jal         0x60005330
    // 0x60005738: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_story_5330(rdram, ctx);
        goto after_22;
    // 0x60005738: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x6000573C: jal         0x600007E4
    // 0x60005740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_7E4(rdram, ctx);
        goto after_23;
    // 0x60005740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x60005744: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x60005748: nop

    // 0x6000574C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x60005750: jal         0x60000A6C
    // 0x60005754: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    ovl_demo_story_A6C(rdram, ctx);
        goto after_24;
    // 0x60005754: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    after_24:
    // 0x60005758: jal         0x60005018
    // 0x6000575C: nop

    ovl_demo_story_5018(rdram, ctx);
        goto after_25;
    // 0x6000575C: nop

    after_25:
    // 0x60005760: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x60005764: nop
    
            goto L_600058F0;
    }
    // 0x60005764: nop

    // 0x60005768: jal         0x60005330
    // 0x6000576C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_5330(rdram, ctx);
        goto after_26;
    // 0x6000576C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x60005770: jal         0x60004C04
    // 0x60005774: addiu       $a0, $zero, 0xBF3
    ctx->r4 = ADD32(0, 0XBF3);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_27;
    // 0x60005774: addiu       $a0, $zero, 0xBF3
    ctx->r4 = ADD32(0, 0XBF3);
    after_27:
    // 0x60005778: bne         $v0, $zero, L_600058F0
    if (ctx->r2 != 0) {
        // 0x6000577C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600058F0;
    }
    // 0x6000577C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005780: jal         0x600022AC
    // 0x60005784: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_22AC(rdram, ctx);
        goto after_28;
    // 0x60005784: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_28:
    // 0x60005788: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000578C: addiu       $a0, $a0, 0x115C
    ctx->r4 = ADD32(ctx->r4, 0X115C);
    // 0x60005790: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60005794: jal         0x6000064C
    // 0x60005798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_64C(rdram, ctx);
        goto after_29;
    // 0x60005798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x6000579C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600057A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x600057A4: addiu       $s2, $s2, 0x7A04
    ctx->r18 = ADD32(ctx->r18, 0X7A04);
    // 0x600057A8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x600057AC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x600057B0: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x600057B4: addiu       $t2, $zero, 0x140
    ctx->r10 = ADD32(0, 0X140);
    // 0x600057B8: swc1        $f0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f0.u32l;
    // 0x600057BC: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x600057C0: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x600057C4: sw          $t2, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r10;
    // 0x600057C8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x600057CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600057D0: jal         0x60000244
    // 0x600057D4: sw          $t4, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r12;
    ovl_demo_story_244(rdram, ctx);
        goto after_30;
    // 0x600057D4: sw          $t4, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r12;
    after_30:
    // 0x600057D8: lui         $s1, 0x8888
    ctx->r17 = S32(0X8888 << 16);
    // 0x600057DC: ori         $s1, $s1, 0x8800
    ctx->r17 = ctx->r17 | 0X8800;
    // 0x600057E0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x600057E4: addiu       $s0, $zero, 0x78
    ctx->r16 = ADD32(0, 0X78);
    // 0x600057E8: subu        $t6, $s0, $s5
    ctx->r14 = SUB32(ctx->r16, ctx->r21);
L_600057EC:
    // 0x600057EC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x600057F0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x600057F4: or          $t8, $t7, $s1
    ctx->r24 = ctx->r15 | ctx->r17;
    // 0x600057F8: jal         0x6000085C
    // 0x600057FC: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    ovl_demo_story_85C(rdram, ctx);
        goto after_31;
    // 0x600057FC: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    after_31:
    // 0x60005800: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60005804: slti        $at, $s5, 0x3C
    ctx->r1 = SIGNED(ctx->r21) < 0X3C ? 1 : 0;
    // 0x60005808: bne         $at, $zero, L_600057EC
    if (ctx->r1 != 0) {
        // 0x6000580C: subu        $t6, $s0, $s5
        ctx->r14 = SUB32(ctx->r16, ctx->r21);
            goto L_600057EC;
    }
    // 0x6000580C: subu        $t6, $s0, $s5
    ctx->r14 = SUB32(ctx->r16, ctx->r21);
    // 0x60005810: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x60005814: addiu       $s0, $zero, 0x100
    ctx->r16 = ADD32(0, 0X100);
L_60005818:
    // 0x60005818: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x6000581C: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x60005820: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60005824: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x60005828: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x6000582C: jal         0x6000085C
    // 0x60005830: sw          $s0, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r16;
    ovl_demo_story_85C(rdram, ctx);
        goto after_32;
    // 0x60005830: sw          $s0, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r16;
    after_32:
    // 0x60005834: addiu       $s0, $s0, -0x40
    ctx->r16 = ADD32(ctx->r16, -0X40);
    // 0x60005838: slti        $at, $s0, -0x3F
    ctx->r1 = SIGNED(ctx->r16) < -0X3F ? 1 : 0;
    // 0x6000583C: beq         $at, $zero, L_60005818
    if (ctx->r1 == 0) {
        // 0x60005840: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_60005818;
    }
    // 0x60005840: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x60005844: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x60005848: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x6000584C: addiu       $s4, $zero, 0x17
    ctx->r20 = ADD32(0, 0X17);
    // 0x60005850: addiu       $s0, $zero, 0xC1
    ctx->r16 = ADD32(0, 0XC1);
    // 0x60005854: addiu       $s5, $zero, -0x80
    ctx->r21 = ADD32(0, -0X80);
L_60005858:
    // 0x60005858: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x6000585C: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x60005860: sw          $s5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r21;
    // 0x60005864: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60005868: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x6000586C: mtc1        $s4, $f16
    ctx->f16.u32l = ctx->r20;
    // 0x60005870: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x60005874: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x60005878: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x6000587C: sw          $s3, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r19;
    // 0x60005880: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x60005884: nop

    // 0x60005888: swc1        $f18, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f18.u32l;
    // 0x6000588C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x60005890: jal         0x6000085C
    // 0x60005894: sw          $s0, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->r16;
    ovl_demo_story_85C(rdram, ctx);
        goto after_33;
    // 0x60005894: sw          $s0, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->r16;
    after_33:
    // 0x60005898: addiu       $s0, $s0, -0x30
    ctx->r16 = ADD32(ctx->r16, -0X30);
    // 0x6000589C: slti        $at, $s0, -0x2E
    ctx->r1 = SIGNED(ctx->r16) < -0X2E ? 1 : 0;
    // 0x600058A0: addiu       $s1, $s1, -0x20
    ctx->r17 = ADD32(ctx->r17, -0X20);
    // 0x600058A4: addiu       $s3, $s3, 0x40
    ctx->r19 = ADD32(ctx->r19, 0X40);
    // 0x600058A8: beq         $at, $zero, L_60005858
    if (ctx->r1 == 0) {
        // 0x600058AC: addiu       $s4, $s4, 0x18
        ctx->r20 = ADD32(ctx->r20, 0X18);
            goto L_60005858;
    }
    // 0x600058AC: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x600058B0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x600058B4: addiu       $s0, $zero, 0x100
    ctx->r16 = ADD32(0, 0X100);
    // 0x600058B8: addiu       $s3, $zero, -0x40
    ctx->r19 = ADD32(0, -0X40);
L_600058BC:
    // 0x600058BC: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x600058C0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x600058C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600058C8: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x600058CC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x600058D0: jal         0x6000085C
    // 0x600058D4: sw          $s0, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r16;
    ovl_demo_story_85C(rdram, ctx);
        goto after_34;
    // 0x600058D4: sw          $s0, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r16;
    after_34:
    // 0x600058D8: addiu       $s0, $s0, -0x40
    ctx->r16 = ADD32(ctx->r16, -0X40);
    // 0x600058DC: bne         $s3, $s0, L_600058BC
    if (ctx->r19 != ctx->r16) {
        // 0x600058E0: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_600058BC;
    }
    // 0x600058E0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x600058E4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x600058E8: jal         0x60000550
    // 0x600058EC: nop

    ovl_demo_story_550(rdram, ctx);
        goto after_35;
    // 0x600058EC: nop

    after_35:
L_600058F0:
    // 0x600058F0: jal         0x60000A6C
    // 0x600058F4: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_36;
    // 0x600058F4: nop

    after_36:
    // 0x600058F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600058FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60005900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005904: jal         0x60000238
    // 0x60005908: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_demo_story_238(rdram, ctx);
        goto after_37;
    // 0x60005908: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_37:
    // 0x6000590C: jal         0x60000208
    // 0x60005910: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_38;
    // 0x60005910: nop

    after_38:
    // 0x60005914: jal         0x60000124
    // 0x60005918: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    ovl_demo_story_124(rdram, ctx);
        goto after_39;
    // 0x60005918: addiu       $a0, $zero, 0xBE6
    ctx->r4 = ADD32(0, 0XBE6);
    after_39:
    // 0x6000591C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005920: lw          $a0, 0x78F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78F8);
    // 0x60005924: nop

    // 0x60005928: beq         $a0, $zero, L_6000593C
    if (ctx->r4 == 0) {
        // 0x6000592C: lw          $v0, 0x34($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X34);
            goto L_6000593C;
    }
    // 0x6000592C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x60005930: jal         0x6000082C
    // 0x60005934: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_40;
    // 0x60005934: nop

    after_40:
    // 0x60005938: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_6000593C:
    // 0x6000593C: nop

    // 0x60005940: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x60005944: nop

    // 0x60005948: ori         $t0, $t9, 0x200
    ctx->r8 = ctx->r25 | 0X200;
    // 0x6000594C: jal         0x60000838
    // 0x60005950: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    ovl_demo_story_838(rdram, ctx);
        goto after_41;
    // 0x60005950: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    after_41:
    // 0x60005954: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60005958: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000595C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60005960: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60005964: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60005968: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x6000596C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x60005970: jr          $ra
    // 0x60005974: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x60005974: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_demo_story_5978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000597C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005980: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005984: addiu       $a0, $a0, 0x5610
    ctx->r4 = ADD32(ctx->r4, 0X5610);
    // 0x60005988: ori         $a1, $zero, 0xFFF6
    ctx->r5 = 0 | 0XFFF6;
    // 0x6000598C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60005990: jal         0x60000820
    // 0x60005994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60005994: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60005998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000599C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600059A0: jr          $ra
    // 0x600059A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600059A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_59A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600059A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600059AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600059B0: jal         0x60000868
    // 0x600059B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x600059B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600059B8: jal         0x60000C1C
    // 0x600059BC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_1;
    // 0x600059BC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x600059C0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x600059C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600059C8: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x600059CC: jal         0x60000A6C
    // 0x600059D0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    ovl_demo_story_A6C(rdram, ctx);
        goto after_2;
    // 0x600059D0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_2:
    // 0x600059D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x600059D8: jal         0x60000A60
    // 0x600059DC: nop

    ovl_demo_story_A60(rdram, ctx);
        goto after_3;
    // 0x600059DC: nop

    after_3:
    // 0x600059E0: jal         0x60000A6C
    // 0x600059E4: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_4;
    // 0x600059E4: nop

    after_4:
    // 0x600059E8: jal         0x6000085C
    // 0x600059EC: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_5;
    // 0x600059EC: nop

    after_5:
    // 0x600059F0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600059F4: nop

    // 0x600059F8: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600059FC: beq         $t9, $zero, L_60005A20
    if (ctx->r25 == 0) {
        // 0x60005A00: nop
    
            goto L_60005A20;
    }
    // 0x60005A00: nop

L_60005A04:
    // 0x60005A04: jal         0x6000085C
    // 0x60005A08: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_6;
    // 0x60005A08: nop

    after_6:
    // 0x60005A0C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005A10: nop

    // 0x60005A14: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60005A18: bne         $t1, $zero, L_60005A04
    if (ctx->r9 != 0) {
        // 0x60005A1C: nop
    
            goto L_60005A04;
    }
    // 0x60005A1C: nop

L_60005A20:
    // 0x60005A20: jal         0x60000A6C
    // 0x60005A24: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_7;
    // 0x60005A24: nop

    after_7:
    // 0x60005A28: jal         0x60000838
    // 0x60005A2C: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_8;
    // 0x60005A2C: nop

    after_8:
    // 0x60005A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005A34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005A38: jr          $ra
    // 0x60005A3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60005A3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_demo_story_5A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005A44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60005A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005A4C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005A50: addiu       $a0, $a0, 0x59A8
    ctx->r4 = ADD32(ctx->r4, 0X59A8);
    // 0x60005A54: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005A5C: jal         0x60000820
    // 0x60005A60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60005A60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60005A64: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60005A68: nop

    // 0x60005A6C: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60005A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005A78: jr          $ra
    // 0x60005A7C: nop

    return;
    // 0x60005A7C: nop

;}
RECOMP_FUNC void ovl_demo_story_5A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005A80: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60005A84: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60005A88: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x60005A8C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x60005A90: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x60005A94: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60005A98: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x60005A9C: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60005AA0: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x60005AA4: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60005AA8: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x60005AAC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005AB0: jal         0x60000C1C
    // 0x60005AB4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60005AB4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60005AB8: jal         0x60000868
    // 0x60005ABC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    ovl_demo_story_868(rdram, ctx);
        goto after_1;
    // 0x60005ABC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_1:
    // 0x60005AC0: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x60005AC4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60005AC8: lw          $a2, 0x7A00($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7A00);
    // 0x60005ACC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x60005AD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005AD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x60005AD8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60005ADC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60005AE0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x60005AE4: jal         0x600006B8
    // 0x60005AE8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_demo_story_6B8(rdram, ctx);
        goto after_2;
    // 0x60005AE8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_2:
    // 0x60005AEC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005AF0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60005AF4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x60005AF8: jal         0x60000874
    // 0x60005AFC: addiu       $a0, $a0, 0x27C4
    ctx->r4 = ADD32(ctx->r4, 0X27C4);
    ovl_demo_story_874(rdram, ctx);
        goto after_3;
    // 0x60005AFC: addiu       $a0, $a0, 0x27C4
    ctx->r4 = ADD32(ctx->r4, 0X27C4);
    after_3:
    // 0x60005B00: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x60005B04: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x60005B08: bne         $t7, $at, L_60005B18
    if (ctx->r15 != ctx->r1) {
        // 0x60005B0C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_60005B18;
    }
    // 0x60005B0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60005B10: jal         0x60000640
    // 0x60005B14: addiu       $a1, $zero, 0x164
    ctx->r5 = ADD32(0, 0X164);
    ovl_demo_story_640(rdram, ctx);
        goto after_4;
    // 0x60005B14: addiu       $a1, $zero, 0x164
    ctx->r5 = ADD32(0, 0X164);
    after_4:
L_60005B18:
    // 0x60005B18: lui         $at, 0x404C
    ctx->r1 = S32(0X404C << 16);
    // 0x60005B1C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60005B20: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60005B24: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005B28: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60005B2C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005B30: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x60005B34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005B38: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
L_60005B3C:
    // 0x60005B3C: subu        $t9, $t8, $s0
    ctx->r25 = SUB32(ctx->r24, ctx->r16);
    // 0x60005B40: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60005B44: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60005B48: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60005B4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60005B50: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x60005B54: jal         0x6000055C
    // 0x60005B58: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_5;
    // 0x60005B58: nop

    after_5:
    // 0x60005B5C: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x60005B60: nop

    // 0x60005B64: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60005B68: mul.s       $f0, $f8, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x60005B6C: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x60005B70: nop

    // 0x60005B74: bc1f        L_60005B84
    if (!c1cs) {
        // 0x60005B78: nop
    
            goto L_60005B84;
    }
    // 0x60005B78: nop

    // 0x60005B7C: b           L_60005B88
    // 0x60005B80: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60005B88;
    // 0x60005B80: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60005B84:
    // 0x60005B84: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_60005B88:
    // 0x60005B88: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x60005B8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60005B90: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60005B94: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60005B98: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60005B9C: nop

    // 0x60005BA0: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60005BA4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x60005BA8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x60005BAC: jal         0x600005D4
    // 0x60005BB0: nop

    ovl_demo_story_5D4(rdram, ctx);
        goto after_6;
    // 0x60005BB0: nop

    after_6:
    // 0x60005BB4: jal         0x6000085C
    // 0x60005BB8: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_7;
    // 0x60005BB8: nop

    after_7:
    // 0x60005BBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005BC0: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x60005BC4: bne         $at, $zero, L_60005B3C
    if (ctx->r1 != 0) {
        // 0x60005BC8: addiu       $t8, $zero, 0xC8
        ctx->r24 = ADD32(0, 0XC8);
            goto L_60005B3C;
    }
    // 0x60005BC8: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x60005BCC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x60005BD0: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x60005BD4: bne         $t1, $at, L_60005C18
    if (ctx->r9 != ctx->r1) {
        // 0x60005BD8: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_60005C18;
    }
    // 0x60005BD8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x60005BDC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x60005BE0: nop

    // 0x60005BE4: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60005BE8: beq         $t3, $zero, L_60005CE0
    if (ctx->r11 == 0) {
        // 0x60005BEC: nop
    
            goto L_60005CE0;
    }
    // 0x60005BEC: nop

L_60005BF0:
    // 0x60005BF0: jal         0x6000085C
    // 0x60005BF4: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_8;
    // 0x60005BF4: nop

    after_8:
    // 0x60005BF8: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x60005BFC: nop

    // 0x60005C00: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x60005C04: bne         $t5, $zero, L_60005BF0
    if (ctx->r13 != 0) {
        // 0x60005C08: nop
    
            goto L_60005BF0;
    }
    // 0x60005C08: nop

    // 0x60005C0C: b           L_60005CE0
    // 0x60005C10: nop

        goto L_60005CE0;
    // 0x60005C10: nop

    // 0x60005C14: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_60005C18:
    // 0x60005C18: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x60005C1C: beq         $t6, $at, L_60005C30
    if (ctx->r14 == ctx->r1) {
        // 0x60005C20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60005C30;
    }
    // 0x60005C20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005C24: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x60005C28: bne         $t6, $at, L_60005C48
    if (ctx->r14 != ctx->r1) {
        // 0x60005C2C: nop
    
            goto L_60005C48;
    }
    // 0x60005C2C: nop

L_60005C30:
    // 0x60005C30: jal         0x6000085C
    // 0x60005C34: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_9;
    // 0x60005C34: nop

    after_9:
    // 0x60005C38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005C3C: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x60005C40: bne         $s0, $at, L_60005C30
    if (ctx->r16 != ctx->r1) {
        // 0x60005C44: nop
    
            goto L_60005C30;
    }
    // 0x60005C44: nop

L_60005C48:
    // 0x60005C48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005C4C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
L_60005C50:
    // 0x60005C50: subu        $t8, $t7, $s0
    ctx->r24 = SUB32(ctx->r15, ctx->r16);
    // 0x60005C54: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x60005C58: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x60005C5C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60005C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60005C64: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60005C68: jal         0x6000055C
    // 0x60005C6C: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_10;
    // 0x60005C6C: nop

    after_10:
    // 0x60005C70: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x60005C74: nop

    // 0x60005C78: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60005C7C: mul.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x60005C80: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x60005C84: nop

    // 0x60005C88: bc1f        L_60005C98
    if (!c1cs) {
        // 0x60005C8C: nop
    
            goto L_60005C98;
    }
    // 0x60005C8C: nop

    // 0x60005C90: b           L_60005C9C
    // 0x60005C94: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60005C9C;
    // 0x60005C94: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60005C98:
    // 0x60005C98: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_60005C9C:
    // 0x60005C9C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x60005CA0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x60005CA4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x60005CA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60005CAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60005CB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60005CB4: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60005CB8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x60005CBC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x60005CC0: jal         0x600005D4
    // 0x60005CC4: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    ovl_demo_story_5D4(rdram, ctx);
        goto after_11;
    // 0x60005CC4: subu        $a1, $t1, $t0
    ctx->r5 = SUB32(ctx->r9, ctx->r8);
    after_11:
    // 0x60005CC8: jal         0x6000085C
    // 0x60005CCC: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_12;
    // 0x60005CCC: nop

    after_12:
    // 0x60005CD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005CD4: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x60005CD8: bne         $s0, $at, L_60005C50
    if (ctx->r16 != ctx->r1) {
        // 0x60005CDC: addiu       $t7, $zero, 0x78
        ctx->r15 = ADD32(0, 0X78);
            goto L_60005C50;
    }
    // 0x60005CDC: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
L_60005CE0:
    // 0x60005CE0: jal         0x60000A6C
    // 0x60005CE4: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_13;
    // 0x60005CE4: nop

    after_13:
    // 0x60005CE8: jal         0x60000838
    // 0x60005CEC: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_14;
    // 0x60005CEC: nop

    after_14:
    // 0x60005CF0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60005CF4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60005CF8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60005CFC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60005D00: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60005D04: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60005D08: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60005D0C: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60005D10: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60005D14: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x60005D18: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x60005D1C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x60005D20: jr          $ra
    // 0x60005D24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60005D24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_demo_story_5D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60005D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005D34: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005D38: addiu       $a0, $a0, 0x5A80
    ctx->r4 = ADD32(ctx->r4, 0X5A80);
    // 0x60005D3C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005D44: jal         0x60000820
    // 0x60005D48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60005D48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60005D4C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60005D50: nop

    // 0x60005D54: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60005D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005D60: jr          $ra
    // 0x60005D64: nop

    return;
    // 0x60005D64: nop

;}
RECOMP_FUNC void ovl_demo_story_5D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005D68: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x60005D6C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60005D70: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x60005D74: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x60005D78: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60005D7C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60005D80: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60005D84: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60005D88: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60005D8C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60005D90: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005D94: jal         0x60000868
    // 0x60005D98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_demo_story_868(rdram, ctx);
        goto after_0;
    // 0x60005D98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60005D9C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60005DA0: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x60005DA4: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x60005DA8: addiu       $v1, $v1, 0x7908
    ctx->r3 = ADD32(ctx->r3, 0X7908);
    // 0x60005DAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60005DB0:
    // 0x60005DB0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x60005DB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005DB8: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60005DBC: beq         $at, $zero, L_60005E1C
    if (ctx->r1 == 0) {
        // 0x60005DC0: slti        $at, $s0, 0x8
        ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
            goto L_60005E1C;
    }
    // 0x60005DC0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60005DC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60005DC8: addiu       $t9, $v0, -0x3
    ctx->r25 = ADD32(ctx->r2, -0X3);
    // 0x60005DCC: subu        $t7, $a3, $t6
    ctx->r15 = SUB32(ctx->r7, ctx->r14);
    // 0x60005DD0: bgez        $t7, L_60005DE4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x60005DD4: andi        $t8, $t7, 0x3
        ctx->r24 = ctx->r15 & 0X3;
            goto L_60005DE4;
    }
    // 0x60005DD4: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x60005DD8: beq         $t8, $zero, L_60005DE4
    if (ctx->r24 == 0) {
        // 0x60005DDC: nop
    
            goto L_60005DE4;
    }
    // 0x60005DDC: nop

    // 0x60005DE0: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_60005DE4:
    // 0x60005DE4: slt         $a0, $t9, $a3
    ctx->r4 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x60005DE8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x60005DEC: beq         $a0, $zero, L_60005E04
    if (ctx->r4 == 0) {
        // 0x60005DF0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60005E04;
    }
    // 0x60005DF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005DF4: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x60005DF8: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x60005DFC: b           L_60005E28
    // 0x60005E00: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
        goto L_60005E28;
    // 0x60005E00: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_60005E04:
    // 0x60005E04: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x60005E08: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x60005E0C: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x60005E10: b           L_60005E28
    // 0x60005E14: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
        goto L_60005E28;
    // 0x60005E14: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x60005E18: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
L_60005E1C:
    // 0x60005E1C: bne         $at, $zero, L_60005DB0
    if (ctx->r1 != 0) {
        // 0x60005E20: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_60005DB0;
    }
    // 0x60005E20: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60005E24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60005E28:
    // 0x60005E28: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60005E2C: lw          $a2, 0x7A00($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X7A00);
    // 0x60005E30: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x60005E34: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x60005E38: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60005E3C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x60005E40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60005E44: jal         0x600006B8
    // 0x60005E48: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    ovl_demo_story_6B8(rdram, ctx);
        goto after_1;
    // 0x60005E48: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_1:
    // 0x60005E4C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x60005E50: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005E54: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60005E58: addiu       $a0, $a0, 0x27C4
    ctx->r4 = ADD32(ctx->r4, 0X27C4);
    // 0x60005E5C: jal         0x60000874
    // 0x60005E60: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    ovl_demo_story_874(rdram, ctx);
        goto after_2;
    // 0x60005E60: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    after_2:
    // 0x60005E64: lw          $v1, 0x74($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X74);
    // 0x60005E68: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x60005E6C: beq         $v1, $zero, L_60005EA4
    if (ctx->r3 == 0) {
        // 0x60005E70: nop
    
            goto L_60005EA4;
    }
    // 0x60005E70: nop

    // 0x60005E74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60005E78: beq         $v1, $at, L_60005ED4
    if (ctx->r3 == ctx->r1) {
        // 0x60005E7C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60005ED4;
    }
    // 0x60005E7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60005E80: beq         $v1, $at, L_60005F28
    if (ctx->r3 == ctx->r1) {
        // 0x60005E84: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60005F28;
    }
    // 0x60005E84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60005E88: beq         $v1, $at, L_60005F60
    if (ctx->r3 == ctx->r1) {
        // 0x60005E8C: nop
    
            goto L_60005F60;
    }
    // 0x60005E8C: nop

    // 0x60005E90: lwc1        $f26, 0x68($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X68);
    // 0x60005E94: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60005E98: lwc1        $f22, 0x64($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60005E9C: b           L_60005FB4
    // 0x60005EA0: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
        goto L_60005FB4;
    // 0x60005EA0: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
L_60005EA4:
    // 0x60005EA4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005EA8: lui         $at, 0xC398
    ctx->r1 = S32(0XC398 << 16);
    // 0x60005EAC: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60005EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005EB4: lui         $at, 0x43A8
    ctx->r1 = S32(0X43A8 << 16);
    // 0x60005EB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005EBC: swc1        $f24, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f24.u32l;
    // 0x60005EC0: swc1        $f24, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f24.u32l;
    // 0x60005EC4: mov.s       $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    ctx->f26.fl = ctx->f22.fl;
    // 0x60005EC8: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x60005ECC: b           L_60005FB0
    // 0x60005ED0: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
        goto L_60005FB0;
    // 0x60005ED0: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
L_60005ED4:
    // 0x60005ED4: lw          $t6, 0x50($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X50);
    // 0x60005ED8: lui         $at, 0x4424
    ctx->r1 = S32(0X4424 << 16);
    // 0x60005EDC: lw          $t5, 0x4C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4C);
    // 0x60005EE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005EE4: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x60005EE8: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x60005EEC: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x60005EF0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x60005EF4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60005EF8: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x60005EFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60005F00: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005F04: lui         $at, 0xC180
    ctx->r1 = S32(0XC180 << 16);
    // 0x60005F08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60005F0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005F10: swc1        $f18, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f18.u32l;
    // 0x60005F14: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x60005F18: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60005F1C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x60005F20: b           L_60005FB0
    // 0x60005F24: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
        goto L_60005FB0;
    // 0x60005F24: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
L_60005F28:
    // 0x60005F28: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x60005F2C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60005F30: lui         $at, 0xC398
    ctx->r1 = S32(0XC398 << 16);
    // 0x60005F34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005F38: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x60005F3C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60005F40: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005F44: lui         $at, 0x43A8
    ctx->r1 = S32(0X43A8 << 16);
    // 0x60005F48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60005F4C: swc1        $f24, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f24.u32l;
    // 0x60005F50: swc1        $f24, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f24.u32l;
    // 0x60005F54: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x60005F58: b           L_60005FB0
    // 0x60005F5C: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
        goto L_60005FB0;
    // 0x60005F5C: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
L_60005F60:
    // 0x60005F60: lw          $t9, 0x50($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X50);
    // 0x60005F64: lw          $t8, 0x4C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4C);
    // 0x60005F68: lui         $at, 0x4424
    ctx->r1 = S32(0X4424 << 16);
    // 0x60005F6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005F70: sra         $t1, $t9, 1
    ctx->r9 = S32(SIGNED(ctx->r25) >> 1);
    // 0x60005F74: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x60005F78: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x60005F7C: lui         $at, 0x4398
    ctx->r1 = S32(0X4398 << 16);
    // 0x60005F80: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60005F84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60005F88: lui         $at, 0x433C
    ctx->r1 = S32(0X433C << 16);
    // 0x60005F8C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005F90: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60005F94: lui         $at, 0xC180
    ctx->r1 = S32(0XC180 << 16);
    // 0x60005F98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60005F9C: swc1        $f18, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f18.u32l;
    // 0x60005FA0: swc1        $f6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f6.u32l;
    // 0x60005FA4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60005FA8: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x60005FAC: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
L_60005FB0:
    // 0x60005FB0: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
L_60005FB4:
    // 0x60005FB4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60005FB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005FBC: sub.s       $f18, $f26, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x60005FC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60005FC4: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x60005FC8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005FCC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_60005FD0:
    // 0x60005FD0: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x60005FD4: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60005FD8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60005FDC: mul.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60005FE0: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60005FE4: nop

    // 0x60005FE8: bc1f        L_60005FF8
    if (!c1cs) {
        // 0x60005FEC: nop
    
            goto L_60005FF8;
    }
    // 0x60005FEC: nop

    // 0x60005FF0: b           L_60005FFC
    // 0x60005FF4: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_60005FFC;
    // 0x60005FF4: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_60005FF8:
    // 0x60005FF8: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_60005FFC:
    // 0x60005FFC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60006000: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60006004: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60006008: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000600C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60006010: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60006014: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60006018: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000601C: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x60006020: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60006024: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x60006028: nop

    // 0x6000602C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60006030: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x60006034: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60006038: jal         0x6000055C
    // 0x6000603C: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_3;
    // 0x6000603C: nop

    after_3:
    // 0x60006040: jal         0x6000085C
    // 0x60006044: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_4;
    // 0x60006044: nop

    after_4:
    // 0x60006048: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000604C: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x60006050: bne         $at, $zero, L_60005FD0
    if (ctx->r1 != 0) {
        // 0x60006054: nop
    
            goto L_60005FD0;
    }
    // 0x60006054: nop

    // 0x60006058: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x6000605C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006060: blez        $t4, L_60006098
    if (SIGNED(ctx->r12) <= 0) {
        // 0x60006064: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_60006098;
    }
    // 0x60006064: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_60006068:
    // 0x60006068: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x6000606C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60006070: jal         0x6000055C
    // 0x60006074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_demo_story_55C(rdram, ctx);
        goto after_5;
    // 0x60006074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x60006078: jal         0x6000085C
    // 0x6000607C: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_6;
    // 0x6000607C: nop

    after_6:
    // 0x60006080: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x60006084: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006088: bne         $s0, $t5, L_60006068
    if (ctx->r16 != ctx->r13) {
        // 0x6000608C: nop
    
            goto L_60006068;
    }
    // 0x6000608C: nop

    // 0x60006090: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006094: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_60006098:
    // 0x60006098: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x6000609C: blez        $t6, L_6000613C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x600060A0: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_6000613C;
    }
    // 0x600060A0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x600060A4: sub.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f26.fl;
    // 0x600060A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600060AC: nop

    // 0x600060B0: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x600060B4: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_600060B8:
    // 0x600060B8: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x600060BC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x600060C0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600060C4: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x600060C8: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x600060CC: nop

    // 0x600060D0: bc1f        L_600060E0
    if (!c1cs) {
        // 0x600060D4: nop
    
            goto L_600060E0;
    }
    // 0x600060D4: nop

    // 0x600060D8: b           L_600060E4
    // 0x600060DC: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
        goto L_600060E4;
    // 0x600060DC: add.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f20.fl;
L_600060E0:
    // 0x600060E0: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_600060E4:
    // 0x600060E4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x600060E8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x600060EC: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x600060F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600060F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600060F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600060FC: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x60006100: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x60006104: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x60006108: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x6000610C: nop

    // 0x60006110: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60006114: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x60006118: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x6000611C: jal         0x6000055C
    // 0x60006120: nop

    ovl_demo_story_55C(rdram, ctx);
        goto after_7;
    // 0x60006120: nop

    after_7:
    // 0x60006124: jal         0x6000085C
    // 0x60006128: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_8;
    // 0x60006128: nop

    after_8:
    // 0x6000612C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x60006130: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006134: bne         $s0, $t9, L_600060B8
    if (ctx->r16 != ctx->r25) {
        // 0x60006138: nop
    
            goto L_600060B8;
    }
    // 0x60006138: nop

L_6000613C:
    // 0x6000613C: jal         0x60000838
    // 0x60006140: nop

    ovl_demo_story_838(rdram, ctx);
        goto after_9;
    // 0x60006140: nop

    after_9:
    // 0x60006144: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60006148: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000614C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60006150: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60006154: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60006158: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x6000615C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60006160: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60006164: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60006168: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x6000616C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x60006170: jr          $ra
    // 0x60006174: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x60006174: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_demo_story_6178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000617C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60006180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006184: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006188: addiu       $a0, $a0, 0x5D68
    ctx->r4 = ADD32(ctx->r4, 0X5D68);
    // 0x6000618C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006194: jal         0x60000820
    // 0x60006198: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60006198: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x6000619C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x600061A0: nop

    // 0x600061A4: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x600061A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600061B0: jr          $ra
    // 0x600061B4: nop

    return;
    // 0x600061B4: nop

;}
RECOMP_FUNC void ovl_demo_story_61B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600061B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600061BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600061C0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x600061C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x600061C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600061CC: jal         0x60000C1C
    // 0x600061D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x600061D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x600061D4: jal         0x60000A6C
    // 0x600061D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    ovl_demo_story_A6C(rdram, ctx);
        goto after_1;
    // 0x600061D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_1:
    // 0x600061DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600061E0: jal         0x60000DF0
    // 0x600061E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_demo_story_DF0(rdram, ctx);
        goto after_2;
    // 0x600061E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x600061E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600061EC:
    // 0x600061EC: jal         0x6000085C
    // 0x600061F0: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_3;
    // 0x600061F0: nop

    after_3:
    // 0x600061F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600061F8: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x600061FC: bne         $at, $zero, L_600061EC
    if (ctx->r1 != 0) {
        // 0x60006200: nop
    
            goto L_600061EC;
    }
    // 0x60006200: nop

    // 0x60006204: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006208: addiu       $a0, $a0, 0xFBC
    ctx->r4 = ADD32(ctx->r4, 0XFBC);
    // 0x6000620C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60006210: jal         0x6000064C
    // 0x60006214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_story_64C(rdram, ctx);
        goto after_4;
    // 0x60006214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x60006218: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x6000621C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60006220: addiu       $s3, $s3, 0x7A04
    ctx->r19 = ADD32(ctx->r19, 0X7A04);
    // 0x60006224: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x60006228: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x6000622C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x60006230: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x60006234: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x60006238: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x6000623C: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x60006240: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60006244: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x60006248: addiu       $t2, $zero, 0x26
    ctx->r10 = ADD32(0, 0X26);
    // 0x6000624C: sw          $t0, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r8;
    // 0x60006250: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x60006254: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006258: addiu       $s1, $zero, 0x34
    ctx->r17 = ADD32(0, 0X34);
    // 0x6000625C: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
L_60006260:
    // 0x60006260: jal         0x60005D28
    // 0x60006264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_5D28(rdram, ctx);
        goto after_5;
    // 0x60006264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x60006268: jal         0x60000850
    // 0x6000626C: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    ovl_demo_story_850(rdram, ctx);
        goto after_6;
    // 0x6000626C: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_6:
    // 0x60006270: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006274: bne         $s0, $s1, L_60006260
    if (ctx->r16 != ctx->r17) {
        // 0x60006278: nop
    
            goto L_60006260;
    }
    // 0x60006278: nop

    // 0x6000627C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x60006280: nop

    // 0x60006284: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x60006288: beq         $t5, $zero, L_600062AC
    if (ctx->r13 == 0) {
        // 0x6000628C: nop
    
            goto L_600062AC;
    }
    // 0x6000628C: nop

L_60006290:
    // 0x60006290: jal         0x6000085C
    // 0x60006294: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_7;
    // 0x60006294: nop

    after_7:
    // 0x60006298: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x6000629C: nop

    // 0x600062A0: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600062A4: bne         $t7, $zero, L_60006290
    if (ctx->r15 != 0) {
        // 0x600062A8: nop
    
            goto L_60006290;
    }
    // 0x600062A8: nop

L_600062AC:
    // 0x600062AC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x600062B0: jal         0x60000550
    // 0x600062B4: nop

    ovl_demo_story_550(rdram, ctx);
        goto after_8;
    // 0x600062B4: nop

    after_8:
    // 0x600062B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600062BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600062C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600062C4: jal         0x60000238
    // 0x600062C8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_demo_story_238(rdram, ctx);
        goto after_9;
    // 0x600062C8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_9:
    // 0x600062CC: jal         0x60000208
    // 0x600062D0: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_10;
    // 0x600062D0: nop

    after_10:
    // 0x600062D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600062D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600062DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600062E0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x600062E4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x600062E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x600062EC: jr          $ra
    // 0x600062F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600062F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_62F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600062F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600062F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600062FC: jal         0x60000C1C
    // 0x60006300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60006300: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006304: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006308: jal         0x60000850
    // 0x6000630C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_demo_story_850(rdram, ctx);
        goto after_1;
    // 0x6000630C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x60006310: jal         0x60000A6C
    // 0x60006314: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_2;
    // 0x60006314: nop

    after_2:
    // 0x60006318: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000631C: jal         0x60001334
    // 0x60006320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_3;
    // 0x60006320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60006324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000632C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006330: jal         0x60000220
    // 0x60006334: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_demo_story_220(rdram, ctx);
        goto after_4;
    // 0x60006334: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x60006338: jal         0x60000118
    // 0x6000633C: addiu       $a0, $zero, 0xBF5
    ctx->r4 = ADD32(0, 0XBF5);
    ovl_demo_story_118(rdram, ctx);
        goto after_5;
    // 0x6000633C: addiu       $a0, $zero, 0xBF5
    ctx->r4 = ADD32(0, 0XBF5);
    after_5:
    // 0x60006340: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006344: sw          $v0, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->r2;
    // 0x60006348: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000634C: sw          $zero, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = 0;
    // 0x60006350: jal         0x60005A40
    // 0x60006354: addiu       $a0, $zero, 0xAFA
    ctx->r4 = ADD32(0, 0XAFA);
    ovl_demo_story_5A40(rdram, ctx);
        goto after_6;
    // 0x60006354: addiu       $a0, $zero, 0xAFA
    ctx->r4 = ADD32(0, 0XAFA);
    after_6:
    // 0x60006358: jal         0x60000850
    // 0x6000635C: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    ovl_demo_story_850(rdram, ctx);
        goto after_7;
    // 0x6000635C: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_7:
    // 0x60006360: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006364: jal         0x60002198
    // 0x60006368: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_2198(rdram, ctx);
        goto after_8;
    // 0x60006368: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_8:
    // 0x6000636C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006370: addiu       $a0, $a0, 0x2670
    ctx->r4 = ADD32(ctx->r4, 0X2670);
    // 0x60006374: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000637C: jal         0x60000820
    // 0x60006380: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_9;
    // 0x60006380: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60006384: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006388: jal         0x600061B8
    // 0x6000638C: sw          $v0, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = ctx->r2;
    ovl_demo_story_61B8(rdram, ctx);
        goto after_10;
    // 0x6000638C: sw          $v0, 0x78F8($at)
    MEM_W(0X78F8, ctx->r1) = ctx->r2;
    after_10:
    // 0x60006390: jal         0x60000A6C
    // 0x60006394: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_11;
    // 0x60006394: nop

    after_11:
    // 0x60006398: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x6000639C: nop

    // 0x600063A0: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600063A4: beq         $t7, $zero, L_600063C8
    if (ctx->r15 == 0) {
        // 0x600063A8: nop
    
            goto L_600063C8;
    }
    // 0x600063A8: nop

L_600063AC:
    // 0x600063AC: jal         0x6000085C
    // 0x600063B0: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_12;
    // 0x600063B0: nop

    after_12:
    // 0x600063B4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600063B8: nop

    // 0x600063BC: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600063C0: bne         $t9, $zero, L_600063AC
    if (ctx->r25 != 0) {
        // 0x600063C4: nop
    
            goto L_600063AC;
    }
    // 0x600063C4: nop

L_600063C8:
    // 0x600063C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600063CC: lw          $a0, 0x78F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78F8);
    // 0x600063D0: nop

    // 0x600063D4: beq         $a0, $zero, L_600063E4
    if (ctx->r4 == 0) {
        // 0x600063D8: nop
    
            goto L_600063E4;
    }
    // 0x600063D8: nop

    // 0x600063DC: jal         0x6000082C
    // 0x600063E0: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_13;
    // 0x600063E0: nop

    after_13:
L_600063E4:
    // 0x600063E4: jal         0x60000124
    // 0x600063E8: addiu       $a0, $zero, 0xBF5
    ctx->r4 = ADD32(0, 0XBF5);
    ovl_demo_story_124(rdram, ctx);
        goto after_14;
    // 0x600063E8: addiu       $a0, $zero, 0xBF5
    ctx->r4 = ADD32(0, 0XBF5);
    after_14:
    // 0x600063EC: jal         0x60000A6C
    // 0x600063F0: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_15;
    // 0x600063F0: nop

    after_15:
    // 0x600063F4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600063F8: nop

    // 0x600063FC: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x60006400: jal         0x60000838
    // 0x60006404: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_demo_story_838(rdram, ctx);
        goto after_16;
    // 0x60006404: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_16:
    // 0x60006408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000640C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60006410: jr          $ra
    // 0x60006414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_demo_story_6418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000641C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006420: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006424: addiu       $a0, $a0, 0x62F4
    ctx->r4 = ADD32(ctx->r4, 0X62F4);
    // 0x60006428: ori         $a1, $zero, 0xFFF6
    ctx->r5 = 0 | 0XFFF6;
    // 0x6000642C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006430: jal         0x60000820
    // 0x60006434: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60006434: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60006438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006440: jr          $ra
    // 0x60006444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60006444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_6448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006448: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x6000644C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60006450: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x60006454: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60006458: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000645C: jal         0x60000C1C
    // 0x60006460: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x60006460: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006464: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60006468: jal         0x60000DD8
    // 0x6000646C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_1;
    // 0x6000646C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60006470: jal         0x60000DD8
    // 0x60006474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_2;
    // 0x60006474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60006478: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x6000647C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006480: jal         0x60000DF0
    // 0x60006484: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_demo_story_DF0(rdram, ctx);
        goto after_3;
    // 0x60006484: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x60006488: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x6000648C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60006490: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x60006494: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x60006498: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x6000649C: jal         0x60000D60
    // 0x600064A0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_4;
    // 0x600064A0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x600064A4: jal         0x60000118
    // 0x600064A8: addiu       $a0, $zero, 0xBFB
    ctx->r4 = ADD32(0, 0XBFB);
    ovl_demo_story_118(rdram, ctx);
        goto after_5;
    // 0x600064A8: addiu       $a0, $zero, 0xBFB
    ctx->r4 = ADD32(0, 0XBFB);
    after_5:
    // 0x600064AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600064B0: sw          $v0, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->r2;
    // 0x600064B4: jal         0x60004C04
    // 0x600064B8: addiu       $a0, $zero, 0xAFD
    ctx->r4 = ADD32(0, 0XAFD);
    ovl_demo_story_4C04(rdram, ctx);
        goto after_6;
    // 0x600064B8: addiu       $a0, $zero, 0xAFD
    ctx->r4 = ADD32(0, 0XAFD);
    after_6:
    // 0x600064BC: jal         0x60000A6C
    // 0x600064C0: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_7;
    // 0x600064C0: nop

    after_7:
    // 0x600064C4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600064C8: jal         0x60001334
    // 0x600064CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_8;
    // 0x600064CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x600064D0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600064D4: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600064D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600064DC: addiu       $s2, $s2, 0x755C
    ctx->r18 = ADD32(ctx->r18, 0X755C);
    // 0x600064E0: addiu       $s1, $s1, 0x7908
    ctx->r17 = ADD32(ctx->r17, 0X7908);
L_600064E4:
    // 0x600064E4: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x600064E8: nop

    // 0x600064EC: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x600064F0: beq         $at, $zero, L_60006524
    if (ctx->r1 == 0) {
        // 0x600064F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_60006524;
    }
    // 0x600064F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_600064F8:
    // 0x600064F8: jal         0x60006178
    // 0x600064FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    ovl_demo_story_6178(rdram, ctx);
        goto after_9;
    // 0x600064FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_9:
    // 0x60006500: jal         0x60006178
    // 0x60006504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_6178(rdram, ctx);
        goto after_10;
    // 0x60006504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x60006508: jal         0x60000850
    // 0x6000650C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_850(rdram, ctx);
        goto after_11;
    // 0x6000650C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_11:
    // 0x60006510: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x60006514: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006518: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x6000651C: bne         $at, $zero, L_600064F8
    if (ctx->r1 != 0) {
        // 0x60006520: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_600064F8;
    }
    // 0x60006520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_60006524:
    // 0x60006524: jal         0x60000850
    // 0x60006528: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_demo_story_850(rdram, ctx);
        goto after_12;
    // 0x60006528: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_12:
    // 0x6000652C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60006534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006538: jal         0x60000238
    // 0x6000653C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_demo_story_238(rdram, ctx);
        goto after_13;
    // 0x6000653C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_13:
    // 0x60006540: jal         0x60000208
    // 0x60006544: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_14;
    // 0x60006544: nop

    after_14:
    // 0x60006548: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000654C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60006550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006554: jal         0x60000220
    // 0x60006558: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_demo_story_220(rdram, ctx);
        goto after_15;
    // 0x60006558: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x6000655C: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60006560: addiu       $t8, $t8, 0x75B0
    ctx->r24 = ADD32(ctx->r24, 0X75B0);
    // 0x60006564: sltu        $at, $s2, $t8
    ctx->r1 = ctx->r18 < ctx->r24 ? 1 : 0;
    // 0x60006568: beq         $at, $zero, L_60006580
    if (ctx->r1 == 0) {
        // 0x6000656C: nop
    
            goto L_60006580;
    }
    // 0x6000656C: nop

    // 0x60006570: jal         0x60002E28
    // 0x60006574: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_2E28(rdram, ctx);
        goto after_16;
    // 0x60006574: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_16:
    // 0x60006578: b           L_6000658C
    // 0x6000657C: nop

        goto L_6000658C;
    // 0x6000657C: nop

L_60006580:
    // 0x60006580: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x60006584: jal         0x60005A40
    // 0x60006588: nop

    ovl_demo_story_5A40(rdram, ctx);
        goto after_17;
    // 0x60006588: nop

    after_17:
L_6000658C:
    // 0x6000658C: jal         0x60000A6C
    // 0x60006590: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_18;
    // 0x60006590: nop

    after_18:
    // 0x60006594: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60006598: jal         0x60001334
    // 0x6000659C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_19;
    // 0x6000659C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x600065A0: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x600065A4: addiu       $t9, $t9, 0x75BC
    ctx->r25 = ADD32(ctx->r25, 0X75BC);
    // 0x600065A8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x600065AC: sltu        $at, $s2, $t9
    ctx->r1 = ctx->r18 < ctx->r25 ? 1 : 0;
    // 0x600065B0: bne         $at, $zero, L_600064E4
    if (ctx->r1 != 0) {
        // 0x600065B4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_600064E4;
    }
    // 0x600065B4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x600065B8: jal         0x60000850
    // 0x600065BC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_demo_story_850(rdram, ctx);
        goto after_20;
    // 0x600065BC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_20:
    // 0x600065C0: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x600065C4: nop

    // 0x600065C8: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x600065CC: beq         $t1, $zero, L_600065F0
    if (ctx->r9 == 0) {
        // 0x600065D0: nop
    
            goto L_600065F0;
    }
    // 0x600065D0: nop

L_600065D4:
    // 0x600065D4: jal         0x6000085C
    // 0x600065D8: nop

    ovl_demo_story_85C(rdram, ctx);
        goto after_21;
    // 0x600065D8: nop

    after_21:
    // 0x600065DC: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x600065E0: nop

    // 0x600065E4: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x600065E8: bne         $t3, $zero, L_600065D4
    if (ctx->r11 != 0) {
        // 0x600065EC: nop
    
            goto L_600065D4;
    }
    // 0x600065EC: nop

L_600065F0:
    // 0x600065F0: jal         0x60000A6C
    // 0x600065F4: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_22;
    // 0x600065F4: nop

    after_22:
    // 0x600065F8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600065FC: jal         0x60001334
    // 0x60006600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_23;
    // 0x60006600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x60006604: jal         0x60000DD8
    // 0x60006608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_story_DD8(rdram, ctx);
        goto after_24;
    // 0x60006608: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x6000660C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60006610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006614: jal         0x60000DF0
    // 0x60006618: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_demo_story_DF0(rdram, ctx);
        goto after_25;
    // 0x60006618: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_25:
    // 0x6000661C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60006620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60006624: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x60006628: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x6000662C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x60006630: jal         0x60000D60
    // 0x60006634: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    ovl_demo_story_D60(rdram, ctx);
        goto after_26;
    // 0x60006634: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_26:
    // 0x60006638: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000663C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60006640: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60006644: lwc1        $f8, 0x79F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79F8);
    // 0x60006648: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000664C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x60006650: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x60006654: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x60006658: jal         0x60000D78
    // 0x6000665C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_demo_story_D78(rdram, ctx);
        goto after_27;
    // 0x6000665C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_27:
    // 0x60006660: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60006664: addiu       $s2, $s2, 0x68A4
    ctx->r18 = ADD32(ctx->r18, 0X68A4);
    // 0x60006668: jal         0x60002198
    // 0x6000666C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_2198(rdram, ctx);
        goto after_28;
    // 0x6000666C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_28:
    // 0x60006670: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006674: addiu       $a0, $a0, 0x2670
    ctx->r4 = ADD32(ctx->r4, 0X2670);
    // 0x60006678: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000667C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006680: jal         0x60000820
    // 0x60006684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_29;
    // 0x60006684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x60006688: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000668C: addiu       $s1, $s1, 0x78F8
    ctx->r17 = ADD32(ctx->r17, 0X78F8);
    // 0x60006690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60006694: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x60006698: jal         0x60005D28
    // 0x6000669C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    ovl_demo_story_5D28(rdram, ctx);
        goto after_30;
    // 0x6000669C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_30:
    // 0x600066A0: jal         0x60000850
    // 0x600066A4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_demo_story_850(rdram, ctx);
        goto after_31;
    // 0x600066A4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_31:
    // 0x600066A8: jal         0x60005D28
    // 0x600066AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_demo_story_5D28(rdram, ctx);
        goto after_32;
    // 0x600066AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x600066B0: jal         0x60000850
    // 0x600066B4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_demo_story_850(rdram, ctx);
        goto after_33;
    // 0x600066B4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_33:
    // 0x600066B8: jal         0x60000A6C
    // 0x600066BC: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_34;
    // 0x600066BC: nop

    after_34:
    // 0x600066C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600066C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600066C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600066CC: jal         0x60000238
    // 0x600066D0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_demo_story_238(rdram, ctx);
        goto after_35;
    // 0x600066D0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_35:
    // 0x600066D4: jal         0x60000208
    // 0x600066D8: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_36;
    // 0x600066D8: nop

    after_36:
    // 0x600066DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x600066E0: jal         0x6000082C
    // 0x600066E4: nop

    ovl_demo_story_82C(rdram, ctx);
        goto after_37;
    // 0x600066E4: nop

    after_37:
    // 0x600066E8: jal         0x600022AC
    // 0x600066EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_story_22AC(rdram, ctx);
        goto after_38;
    // 0x600066EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_38:
    // 0x600066F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600066F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600066F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600066FC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60006700: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60006704: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x60006708: jr          $ra
    // 0x6000670C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x6000670C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_6710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006718: jal         0x60000C1C
    // 0x6000671C: nop

    ovl_demo_story_C1C(rdram, ctx);
        goto after_0;
    // 0x6000671C: nop

    after_0:
    // 0x60006720: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60006724: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60006728: nop

    // 0x6000672C: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x60006730: bgez        $t7, L_60006740
    if (SIGNED(ctx->r15) >= 0) {
        // 0x60006734: nop
    
            goto L_60006740;
    }
    // 0x60006734: nop

    // 0x60006738: jal         0x6000025C
    // 0x6000673C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_demo_story_25C(rdram, ctx);
        goto after_1;
    // 0x6000673C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
L_60006740:
    // 0x60006740: jal         0x60000850
    // 0x60006744: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_demo_story_850(rdram, ctx);
        goto after_2;
    // 0x60006744: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60006748: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000674C: jal         0x60001334
    // 0x60006750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_story_1334(rdram, ctx);
        goto after_3;
    // 0x60006750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60006754: jal         0x60000A6C
    // 0x60006758: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_4;
    // 0x60006758: nop

    after_4:
    // 0x6000675C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60006764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006768: jal         0x60000220
    // 0x6000676C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_demo_story_220(rdram, ctx);
        goto after_5;
    // 0x6000676C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x60006770: jal         0x60006448
    // 0x60006774: nop

    ovl_demo_story_6448(rdram, ctx);
        goto after_6;
    // 0x60006774: nop

    after_6:
    // 0x60006778: jal         0x60000A6C
    // 0x6000677C: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_7;
    // 0x6000677C: nop

    after_7:
    // 0x60006780: jal         0x60000268
    // 0x60006784: nop

    ovl_demo_story_268(rdram, ctx);
        goto after_8;
    // 0x60006784: nop

    after_8:
    // 0x60006788: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000678C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60006790: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006794: jal         0x60000238
    // 0x60006798: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_demo_story_238(rdram, ctx);
        goto after_9;
    // 0x60006798: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_9:
    // 0x6000679C: jal         0x60000208
    // 0x600067A0: nop

    ovl_demo_story_208(rdram, ctx);
        goto after_10;
    // 0x600067A0: nop

    after_10:
    // 0x600067A4: jal         0x60000124
    // 0x600067A8: addiu       $a0, $zero, 0xBFB
    ctx->r4 = ADD32(0, 0XBFB);
    ovl_demo_story_124(rdram, ctx);
        goto after_11;
    // 0x600067A8: addiu       $a0, $zero, 0xBFB
    ctx->r4 = ADD32(0, 0XBFB);
    after_11:
    // 0x600067AC: jal         0x60000A6C
    // 0x600067B0: nop

    ovl_demo_story_A6C(rdram, ctx);
        goto after_12;
    // 0x600067B0: nop

    after_12:
    // 0x600067B4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600067B8: jal         0x600022AC
    // 0x600067BC: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    ovl_demo_story_22AC(rdram, ctx);
        goto after_13;
    // 0x600067BC: addiu       $a0, $a0, 0x68A4
    ctx->r4 = ADD32(ctx->r4, 0X68A4);
    after_13:
    // 0x600067C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x600067C4: nop

    // 0x600067C8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x600067CC: nop

    // 0x600067D0: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x600067D4: jal         0x60000838
    // 0x600067D8: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    ovl_demo_story_838(rdram, ctx);
        goto after_14;
    // 0x600067D8: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    after_14:
    // 0x600067DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600067E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600067E4: jr          $ra
    // 0x600067E8: nop

    return;
    // 0x600067E8: nop

;}
RECOMP_FUNC void ovl_demo_story_67EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600067EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600067F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600067F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600067F8: addiu       $a0, $a0, 0x6710
    ctx->r4 = ADD32(ctx->r4, 0X6710);
    // 0x600067FC: ori         $a1, $zero, 0xFFF6
    ctx->r5 = 0 | 0XFFF6;
    // 0x60006800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006804: jal         0x60000820
    // 0x60006808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_story_820(rdram, ctx);
        goto after_0;
    // 0x60006808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x6000680C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006814: jr          $ra
    // 0x60006818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60006818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_681C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000681C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006820: beq         $a0, $zero, L_6000684C
    if (ctx->r4 == 0) {
        // 0x60006824: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_6000684C;
    }
    // 0x60006824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006828: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000682C: beq         $a0, $at, L_6000685C
    if (ctx->r4 == ctx->r1) {
        // 0x60006830: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_6000685C;
    }
    // 0x60006830: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006834: beq         $a0, $at, L_6000686C
    if (ctx->r4 == ctx->r1) {
        // 0x60006838: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_6000686C;
    }
    // 0x60006838: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000683C: beq         $a0, $at, L_6000687C
    if (ctx->r4 == ctx->r1) {
        // 0x60006840: nop
    
            goto L_6000687C;
    }
    // 0x60006840: nop

    // 0x60006844: b           L_6000688C
    // 0x60006848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000688C;
    // 0x60006848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000684C:
    // 0x6000684C: jal         0x60003FD0
    // 0x60006850: nop

    ovl_demo_story_3FD0(rdram, ctx);
        goto after_0;
    // 0x60006850: nop

    after_0:
    // 0x60006854: b           L_60006888
    // 0x60006858: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_60006888;
    // 0x60006858: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_6000685C:
    // 0x6000685C: jal         0x60005978
    // 0x60006860: nop

    ovl_demo_story_5978(rdram, ctx);
        goto after_1;
    // 0x60006860: nop

    after_1:
    // 0x60006864: b           L_60006888
    // 0x60006868: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_60006888;
    // 0x60006868: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_6000686C:
    // 0x6000686C: jal         0x60006418
    // 0x60006870: nop

    ovl_demo_story_6418(rdram, ctx);
        goto after_2;
    // 0x60006870: nop

    after_2:
    // 0x60006874: b           L_60006888
    // 0x60006878: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_60006888;
    // 0x60006878: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_6000687C:
    // 0x6000687C: jal         0x600067EC
    // 0x60006880: nop

    ovl_demo_story_67EC(rdram, ctx);
        goto after_3;
    // 0x60006880: nop

    after_3:
    // 0x60006884: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_60006888:
    // 0x60006888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000688C:
    // 0x6000688C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x60006890: jr          $ra
    // 0x60006894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x6D8C
    ctx->r2 = ADD32(ctx->r2, 0X6D8C);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x6D8C
    ctx->r2 = ADD32(ctx->r2, 0X6D8C);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world4_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world4_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_stage_world4_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_stage_world4_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_stage_world4_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_stage_world4_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_stage_world4_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_stage_world4_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_stage_world4_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_stage_world4_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_stage_world4_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_stage_world4_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_stage_world4_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_stage_world4_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_stage_world4_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_stage_world4_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_stage_world4_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_stage_world4_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_stage_world4_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_stage_world4_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000F8: jr          $t1
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_stage_world4_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000104: jr          $t1
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_stage_world4_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000110: jr          $t1
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_stage_world4_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000011C: jr          $t1
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_stage_world4_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000128: jr          $t1
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_stage_world4_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_stage_world4_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000140: jr          $t1
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_stage_world4_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000014C: jr          $t1
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_stage_world4_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000158: jr          $t1
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_stage_world4_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000164: jr          $t1
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_stage_world4_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000170: jr          $t1
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
