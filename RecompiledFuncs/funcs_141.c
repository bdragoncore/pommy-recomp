#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_devil_1740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001740: jr          $ra
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    return;
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_devil_1748(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_devil_1764(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_boss_devil_868(rdram, ctx);
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
    // 0x430017A4: addiu       $s5, $s5, -0x4858
    ctx->r21 = ADD32(ctx->r21, -0X4858);
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
    // 0x430017C4: jal         0x43009D68
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_boss_devil_9D68(rdram, ctx);
        goto after_1;
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x430017CC: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430017D0: lwc1        $f14, 0x24($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430017D4: jal         0x43009E34
    // 0x430017D8: nop

    ovl_boss_devil_9E34(rdram, ctx);
        goto after_2;
    // 0x430017D8: nop

    after_2:
    // 0x430017DC: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430017E0: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x430017E4: jal         0x43009E34
    // 0x430017E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    ovl_boss_devil_9E34(rdram, ctx);
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
    // 0x43001800: jal         0x4300A238
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_devil_A238(rdram, ctx);
        goto after_4;
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x43001808: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300180C: jal         0x4300ADE0
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_5;
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x43001814: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x43001818: jal         0x4300AFA0
    // 0x4300181C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_devil_AFA0(rdram, ctx);
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
    ovl_boss_devil_D60(rdram, ctx);
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

    ovl_boss_devil_D54(rdram, ctx);
        goto after_11;
    // 0x430018C0: nop

    after_11:
    // 0x430018C4: jal         0x4300085C
    // 0x430018C8: nop

    ovl_boss_devil_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_devil_190C(uint8_t* rdram, recomp_context* ctx) {
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

    ovl_boss_devil_82C(rdram, ctx);
        goto after_0;
    // 0x43001920: nop

    after_0:
    // 0x43001924: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001928: jal         0x430000F4
    // 0x4300192C: nop

    ovl_boss_devil_F4(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_devil_1940(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_boss_devil_E8(rdram, ctx);
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
    ovl_boss_devil_DF0(rdram, ctx);
        goto after_1;
    // 0x43001960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x43001964: jal         0x43000DD8
    // 0x43001968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_DD8(rdram, ctx);
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
    // 0x43001994: lwc1        $f8, -0x4A98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4A98);
    // 0x43001998: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300199C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430019A0: addiu       $t7, $t7, -0x4848
    ctx->r15 = ADD32(ctx->r15, -0X4848);
    // 0x430019A4: addiu       $v1, $v1, -0x4980
    ctx->r3 = ADD32(ctx->r3, -0X4980);
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
    ovl_boss_devil_820(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_devil_1A60(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x43001A70: addiu       $t8, $t8, -0x4E98
    ctx->r24 = ADD32(ctx->r24, -0X4E98);
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
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43001AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43001AE4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43001AE8: jal         0x4300ABEC
    // 0x43001AEC: nop

    ovl_boss_devil_ABEC(rdram, ctx);
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
    // 0x43001B08: jal         0x4300ABC0
    // 0x43001B0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_boss_devil_ABC0(rdram, ctx);
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
    ovl_boss_devil_DC0(rdram, ctx);
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
    // 0x43001B34: addiu       $t1, $t1, -0x4E74
    ctx->r9 = ADD32(ctx->r9, -0X4E74);
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
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_6;
    // 0x43001B70: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x43001B74: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x43001B78: jal         0x4300ABEC
    // 0x43001B7C: nop

    ovl_boss_devil_ABEC(rdram, ctx);
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
    // 0x43001BA4: jal         0x4300ABC0
    // 0x43001BA8: nop

    ovl_boss_devil_ABC0(rdram, ctx);
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
    ovl_boss_devil_DC0(rdram, ctx);
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
RECOMP_FUNC void ovl_boss_devil_1BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001BD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43001BDC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001BE4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x43001BE8: addiu       $t6, $t6, -0x4848
    ctx->r14 = ADD32(ctx->r14, -0X4848);
    // 0x43001BEC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43001BF0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43001BF4: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x43001BF8: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43001BFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43001C00: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x43001C04: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43001C08: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43001C0C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43001C10: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x43001C14: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x43001C18: addiu       $a1, $a1, -0x4858
    ctx->r5 = ADD32(ctx->r5, -0X4858);
    // 0x43001C1C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x43001C20: jal         0x43009D68
    // 0x43001C24: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_9D68(rdram, ctx);
        goto after_0;
    // 0x43001C24: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x43001C28: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43001C2C: addiu       $t0, $t0, -0x4858
    ctx->r8 = ADD32(ctx->r8, -0X4858);
    // 0x43001C30: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x43001C34: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x43001C38: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x43001C3C: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x43001C40: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x43001C44: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x43001C48: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x43001C4C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x43001C50: nop

    // 0x43001C54: sw          $at, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r1;
    // 0x43001C58: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001C5C: lwc1        $f8, -0x4A84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4A84);
    // 0x43001C60: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43001C64: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001C68: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43001C6C: lwc1        $f10, -0x4A80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4A80);
    // 0x43001C70: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43001C74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43001C78: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43001C7C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x43001C80: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x43001C84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43001C88: add.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x43001C8C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x43001C90: add.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x43001C94: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x43001C98: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
    // 0x43001C9C: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x43001CA0: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x43001CA4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x43001CA8: nop

    // 0x43001CAC: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x43001CB0: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x43001CB4: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    // 0x43001CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001CBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43001CC0: jr          $ra
    // 0x43001CC4: nop

    return;
    // 0x43001CC4: nop

;}
RECOMP_FUNC void ovl_boss_devil_1CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001CC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001CCC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001CD0: lw          $t6, -0x4EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4EC0);
    // 0x43001CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001CD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43001CDC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001CE0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43001CE4: lwc1        $f12, 0xC($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XC);
    // 0x43001CE8: jal         0x4300ADE0
    // 0x43001CEC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_0;
    // 0x43001CEC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    after_0:
    // 0x43001CF0: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001CF4: lw          $t7, -0x4EC0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4EC0);
    // 0x43001CF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x43001CFC: lwc1        $f12, 0xC($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0XC);
    // 0x43001D00: jal         0x4300AFA0
    // 0x43001D04: nop

    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_1;
    // 0x43001D04: nop

    after_1:
    // 0x43001D08: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001D0C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43001D10: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001D14: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43001D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43001D1C: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x43001D20: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001D24: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x43001D28: add.s       $f2, $f16, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x43001D2C: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x43001D30: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x43001D34: nop

    // 0x43001D38: bc1f        L_43001DC0
    if (!c1cs) {
        // 0x43001D3C: nop
    
            goto L_43001DC0;
    }
    // 0x43001D3C: nop

    // 0x43001D40: jal         0x4300079C
    // 0x43001D44: nop

    ovl_boss_devil_79C(rdram, ctx);
        goto after_2;
    // 0x43001D44: nop

    after_2:
    // 0x43001D48: bne         $v0, $zero, L_43001DC4
    if (ctx->r2 != 0) {
        // 0x43001D4C: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_43001DC4;
    }
    // 0x43001D4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001D50: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001D54: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001D58: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43001D5C: nop

    // 0x43001D60: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43001D64: jal         0x4300B110
    // 0x43001D68: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_3;
    // 0x43001D68: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_3:
    // 0x43001D6C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x43001D70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43001D74: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001D78: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x43001D7C: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x43001D80: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43001D84: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43001D88: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x43001D8C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43001D90: nop

    // 0x43001D94: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x43001D98: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x43001D9C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x43001DA0: jal         0x43000784
    // 0x43001DA4: nop

    ovl_boss_devil_784(rdram, ctx);
        goto after_4;
    // 0x43001DA4: nop

    after_4:
    // 0x43001DA8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x43001DAC: addiu       $a0, $zero, 0x305
    ctx->r4 = ADD32(0, 0X305);
    // 0x43001DB0: jal         0x43000280
    // 0x43001DB4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    ovl_boss_devil_280(rdram, ctx);
        goto after_5;
    // 0x43001DB4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_5:
    // 0x43001DB8: b           L_43001DD0
    // 0x43001DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43001DD0;
    // 0x43001DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001DC0:
    // 0x43001DC0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_43001DC4:
    // 0x43001DC4: jal         0x4300A2F8
    // 0x43001DC8: nop

    ovl_boss_devil_A2F8(rdram, ctx);
        goto after_6;
    // 0x43001DC8: nop

    after_6:
    // 0x43001DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001DD0:
    // 0x43001DD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001DD4: jr          $ra
    // 0x43001DD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001DD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_1DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001DE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001DE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43001DEC: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43001DF0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43001DF4: jal         0x4300AD98
    // 0x43001DF8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_boss_devil_AD98(rdram, ctx);
        goto after_0;
    // 0x43001DF8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x43001DFC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E00: lwc1        $f3, -0x4A78($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4A78);
    // 0x43001E04: lwc1        $f2, -0x4A74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4A74);
    // 0x43001E08: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x43001E0C: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x43001E10: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x43001E14: bc1f        L_43001E28
    if (!c1cs) {
        // 0x43001E18: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_43001E28;
    }
    // 0x43001E18: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43001E1C: b           L_43001E9C
    // 0x43001E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43001E9C;
    // 0x43001E20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43001E24: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_43001E28:
    // 0x43001E28: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x43001E2C: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x43001E30: jal         0x4300AD98
    // 0x43001E34: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    ovl_boss_devil_AD98(rdram, ctx);
        goto after_1;
    // 0x43001E34: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    after_1:
    // 0x43001E38: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E3C: lwc1        $f3, -0x4A70($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4A70);
    // 0x43001E40: lwc1        $f2, -0x4A6C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4A6C);
    // 0x43001E44: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x43001E48: c.lt.d      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.d < ctx->f18.d;
    // 0x43001E4C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x43001E50: bc1f        L_43001E64
    if (!c1cs) {
        // 0x43001E54: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_43001E64;
    }
    // 0x43001E54: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x43001E58: b           L_43001E9C
    // 0x43001E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43001E9C;
    // 0x43001E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43001E60: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_43001E64:
    // 0x43001E64: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x43001E68: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x43001E6C: jal         0x4300AD98
    // 0x43001E70: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_boss_devil_AD98(rdram, ctx);
        goto after_2;
    // 0x43001E70: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_2:
    // 0x43001E74: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E78: lwc1        $f3, -0x4A68($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4A68);
    // 0x43001E7C: lwc1        $f2, -0x4A64($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4A64);
    // 0x43001E80: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x43001E84: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x43001E88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43001E8C: bc1f        L_43001E9C
    if (!c1cs) {
        // 0x43001E90: nop
    
            goto L_43001E9C;
    }
    // 0x43001E90: nop

    // 0x43001E94: b           L_43001E9C
    // 0x43001E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43001E9C;
    // 0x43001E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43001E9C:
    // 0x43001E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001EA4: jr          $ra
    // 0x43001EA8: nop

    return;
    // 0x43001EA8: nop

;}
RECOMP_FUNC void ovl_boss_devil_1EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001EAC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x43001EB0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43001EB4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x43001EB8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x43001EBC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x43001EC0: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x43001EC4: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x43001EC8: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x43001ECC: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x43001ED0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x43001ED4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x43001ED8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x43001EDC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x43001EE0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43001EE4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43001EE8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43001EEC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43001EF0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43001EF4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43001EF8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001EFC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43001F00: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x43001F04: jal         0x430006DC
    // 0x43001F08: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    ovl_boss_devil_6DC(rdram, ctx);
        goto after_0;
    // 0x43001F08: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_0:
    // 0x43001F0C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x43001F10: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x43001F14: blez        $v0, L_43002040
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43001F18: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_43002040;
    }
    // 0x43001F18: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x43001F1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001F20: lwc1        $f26, -0x4A60($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4A60);
    // 0x43001F24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43001F28: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43001F2C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43001F30: addiu       $s7, $s7, -0x4EC0
    ctx->r23 = ADD32(ctx->r23, -0X4EC0);
    // 0x43001F34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_43001F38:
    // 0x43001F38: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x43001F3C: nop

    // 0x43001F40: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x43001F44: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x43001F48: nop

    // 0x43001F4C: lw          $s2, 0x0($t8)
    ctx->r18 = MEM_W(ctx->r24, 0X0);
    // 0x43001F50: nop

    // 0x43001F54: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x43001F58: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x43001F5C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43001F60: nop

    // 0x43001F64: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43001F68: jal         0x4300B110
    // 0x43001F6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_1;
    // 0x43001F6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x43001F70: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x43001F74: div.s       $f20, $f24, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x43001F78: lwc1        $f12, 0xC($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0XC);
    // 0x43001F7C: jal         0x4300ADE0
    // 0x43001F80: nop

    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_2;
    // 0x43001F80: nop

    after_2:
    // 0x43001F84: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x43001F88: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43001F8C: lwc1        $f12, 0xC($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0XC);
    // 0x43001F90: jal         0x4300AFA0
    // 0x43001F94: nop

    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_3;
    // 0x43001F94: nop

    after_3:
    // 0x43001F98: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x43001F9C: lwc1        $f16, 0x0($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X0);
    // 0x43001FA0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x43001FA4: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x43001FA8: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x43001FAC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x43001FB0: mul.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x43001FB4: c.lt.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl < ctx->f2.fl;
    // 0x43001FB8: nop

    // 0x43001FBC: bc1f        L_43002030
    if (!c1cs) {
        // 0x43001FC0: nop
    
            goto L_43002030;
    }
    // 0x43001FC0: nop

    // 0x43001FC4: beq         $t1, $zero, L_4300202C
    if (ctx->r9 == 0) {
        // 0x43001FC8: nop
    
            goto L_4300202C;
    }
    // 0x43001FC8: nop

    // 0x43001FCC: blez        $s3, L_43001FFC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x43001FD0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43001FFC;
    }
    // 0x43001FD0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43001FD4: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x43001FD8: nop

L_43001FDC:
    // 0x43001FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001FE0: jal         0x43001DDC
    // 0x43001FE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_devil_1DDC(rdram, ctx);
        goto after_4;
    // 0x43001FE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x43001FE8: beq         $v0, $zero, L_43001FFC
    if (ctx->r2 == 0) {
        // 0x43001FEC: nop
    
            goto L_43001FFC;
    }
    // 0x43001FEC: nop

    // 0x43001FF0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43001FF4: bne         $s1, $s3, L_43001FDC
    if (ctx->r17 != ctx->r19) {
        // 0x43001FF8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_43001FDC;
    }
    // 0x43001FF8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_43001FFC:
    // 0x43001FFC: bne         $s1, $s3, L_43002034
    if (ctx->r17 != ctx->r19) {
        // 0x43002000: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_43002034;
    }
    // 0x43002000: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x43002004: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x43002008: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x4300200C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x43002010: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x43002014: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x43002018: nop

    // 0x4300201C: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x43002020: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x43002024: b           L_43002040
    // 0x43002028: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
        goto L_43002040;
    // 0x43002028: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
L_4300202C:
    // 0x4300202C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_43002030:
    // 0x43002030: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_43002034:
    // 0x43002034: slt         $at, $s5, $fp
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x43002038: bne         $at, $zero, L_43001F38
    if (ctx->r1 != 0) {
        // 0x4300203C: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_43001F38;
    }
    // 0x4300203C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_43002040:
    // 0x43002040: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x43002044: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x43002048: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x4300204C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002050: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002054: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002058: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300205C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002060: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002064: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43002068: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300206C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x43002070: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x43002074: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x43002078: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x4300207C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x43002080: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x43002084: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x43002088: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x4300208C: jr          $ra
    // 0x43002090: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x43002090: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_boss_devil_2094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43002098: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4300209C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430020A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430020A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430020A8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x430020AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430020B0: blez        $a1, L_430020FC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x430020B4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_430020FC;
    }
    // 0x430020B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_430020B8:
    // 0x430020B8: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x430020BC: nop

    // 0x430020C0: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x430020C4: nop

    // 0x430020C8: jalr        $t9
    // 0x430020CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430020CC: nop

    after_0:
    // 0x430020D0: beq         $v0, $zero, L_43002100
    if (ctx->r2 == 0) {
        // 0x430020D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43002100;
    }
    // 0x430020D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430020D8: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x430020DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430020E0: jalr        $t9
    // 0x430020E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430020E4: nop

    after_1:
    // 0x430020E8: jal         0x43009B08
    // 0x430020EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_2;
    // 0x430020EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x430020F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430020F4: bne         $s0, $s2, L_430020B8
    if (ctx->r16 != ctx->r18) {
        // 0x430020F8: nop
    
            goto L_430020B8;
    }
    // 0x430020F8: nop

L_430020FC:
    // 0x430020FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43002100:
    // 0x43002100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43002104: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43002108: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4300210C: jr          $ra
    // 0x43002110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43002110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_2114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300211C: jal         0x43002094
    // 0x43002120: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    ovl_boss_devil_2094(rdram, ctx);
        goto after_0;
    // 0x43002120: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_0:
    // 0x43002124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300212C: jr          $ra
    // 0x43002130: nop

    return;
    // 0x43002130: nop

;}
RECOMP_FUNC void ovl_boss_devil_2134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002134: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002138: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4300213C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43002140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002144: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43002148: jal         0x43009D68
    // 0x4300214C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    ovl_boss_devil_9D68(rdram, ctx);
        goto after_0;
    // 0x4300214C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x43002150: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43002154: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43002158: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x4300215C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43002160: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43002164: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43002168: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4300216C: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x43002170: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43002174: bc1f        L_43002188
    if (!c1cs) {
        // 0x43002178: nop
    
            goto L_43002188;
    }
    // 0x43002178: nop

    // 0x4300217C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43002180: b           L_430021A0
    // 0x43002184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430021A0;
    // 0x43002184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002188:
    // 0x43002188: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300218C: jal         0x43009E34
    // 0x43002190: nop

    ovl_boss_devil_9E34(rdram, ctx);
        goto after_1;
    // 0x43002190: nop

    after_1:
    // 0x43002194: jal         0x4300A1E4
    // 0x43002198: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_2;
    // 0x43002198: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x4300219C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430021A0:
    // 0x430021A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430021A4: jr          $ra
    // 0x430021A8: nop

    return;
    // 0x430021A8: nop

;}
RECOMP_FUNC void ovl_boss_devil_21AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430021AC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430021B0: addiu       $v1, $v1, -0x4538
    ctx->r3 = ADD32(ctx->r3, -0X4538);
    // 0x430021B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x430021B8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x430021BC: bne         $v0, $zero, L_430021F8
    if (ctx->r2 != 0) {
        // 0x430021C0: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_430021F8;
    }
    // 0x430021C0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x430021C4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x430021C8: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x430021CC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430021D0: addiu       $t7, $t7, -0x4530
    ctx->r15 = ADD32(ctx->r15, -0X4530);
    // 0x430021D4: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x430021D8: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x430021DC: nop

    // 0x430021E0: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x430021E4: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x430021E8: nop

    // 0x430021EC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x430021F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430021F4: sw          $a1, -0x4524($at)
    MEM_W(-0X4524, ctx->r1) = ctx->r5;
L_430021F8:
    // 0x430021F8: jr          $ra
    // 0x430021FC: nop

    return;
    // 0x430021FC: nop

;}
RECOMP_FUNC void ovl_boss_devil_2200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002200: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43002204: addiu       $v1, $v1, -0x4538
    ctx->r3 = ADD32(ctx->r3, -0X4538);
    // 0x43002208: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x4300220C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43002210: bne         $v0, $zero, L_43002254
    if (ctx->r2 != 0) {
        // 0x43002214: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43002254;
    }
    // 0x43002214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43002218: bne         $a1, $at, L_43002254
    if (ctx->r5 != ctx->r1) {
        // 0x4300221C: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_43002254;
    }
    // 0x4300221C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43002220: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x43002224: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x43002228: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300222C: addiu       $t7, $t7, -0x4530
    ctx->r15 = ADD32(ctx->r15, -0X4530);
    // 0x43002230: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x43002234: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x43002238: nop

    // 0x4300223C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x43002240: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x43002244: nop

    // 0x43002248: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x4300224C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002250: sw          $a1, -0x4524($at)
    MEM_W(-0X4524, ctx->r1) = ctx->r5;
L_43002254:
    // 0x43002254: jr          $ra
    // 0x43002258: nop

    return;
    // 0x43002258: nop

    // 0x4300225C: jr          $ra
    // 0x43002260: nop

    return;
    // 0x43002260: nop

;}
RECOMP_FUNC void ovl_boss_devil_2264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300226C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002270: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x43002274: nop

    // 0x43002278: jalr        $t9
    // 0x4300227C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300227C: nop

    after_0:
    // 0x43002280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002284: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002288: lw          $t6, -0x4514($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4514);
    // 0x4300228C: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x43002290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002294: jalr        $t9
    // 0x43002298: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002298: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    after_1:
    // 0x4300229C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430022A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430022A4: jr          $ra
    // 0x430022A8: nop

    return;
    // 0x430022A8: nop

;}
RECOMP_FUNC void ovl_boss_devil_22AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430022AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430022B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430022B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430022B8: jal         0x43002264
    // 0x430022BC: addiu       $a1, $zero, 0x9FA
    ctx->r5 = ADD32(0, 0X9FA);
    ovl_boss_devil_2264(rdram, ctx);
        goto after_0;
    // 0x430022BC: addiu       $a1, $zero, 0x9FA
    ctx->r5 = ADD32(0, 0X9FA);
    after_0:
    // 0x430022C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430022C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430022C8: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x430022CC: nop

    // 0x430022D0: jalr        $t9
    // 0x430022D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430022D4: nop

    after_1:
    // 0x430022D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430022DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430022E0: jr          $ra
    // 0x430022E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x430022E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_devil_22E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430022E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430022EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430022F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430022F4: jal         0x43002264
    // 0x430022F8: addiu       $a1, $zero, 0xA01
    ctx->r5 = ADD32(0, 0XA01);
    ovl_boss_devil_2264(rdram, ctx);
        goto after_0;
    // 0x430022F8: addiu       $a1, $zero, 0xA01
    ctx->r5 = ADD32(0, 0XA01);
    after_0:
    // 0x430022FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002300: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    // 0x43002304: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x43002308: nop

    // 0x4300230C: jalr        $t9
    // 0x43002310: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002310: nop

    after_1:
    // 0x43002314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4300231C: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x43002320: nop

    // 0x43002324: jalr        $t9
    // 0x43002328: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43002328: nop

    after_2:
    // 0x4300232C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002334: jr          $ra
    // 0x43002338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43002338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_devil_233C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300233C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002344: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43002348: addiu       $t7, $a1, -0xA
    ctx->r15 = ADD32(ctx->r5, -0XA);
    // 0x4300234C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002354: sw          $t7, -0x4514($at)
    MEM_W(-0X4514, ctx->r1) = ctx->r15;
    // 0x43002358: addiu       $a1, $zero, 0x9F9
    ctx->r5 = ADD32(0, 0X9F9);
    // 0x4300235C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002360: jal         0x430089B0
    // 0x43002364: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_0;
    // 0x43002364: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_0:
    // 0x43002368: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300236C: addiu       $t8, $t8, 0x22AC
    ctx->r24 = ADD32(ctx->r24, 0X22AC);
    // 0x43002370: sw          $t8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r24;
    // 0x43002374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002378: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x4300237C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002380: jal         0x430089B0
    // 0x43002384: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_1;
    // 0x43002384: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_1:
    // 0x43002388: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x4300238C: addiu       $t9, $t9, 0x22E8
    ctx->r25 = ADD32(ctx->r25, 0X22E8);
    // 0x43002390: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x43002394: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x43002398: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4300239C: jalr        $t9
    // 0x430023A0: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430023A0: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    after_2:
    // 0x430023A4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430023A8: jal         0x43000280
    // 0x430023AC: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    ovl_boss_devil_280(rdram, ctx);
        goto after_3;
    // 0x430023AC: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_3:
    // 0x430023B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430023B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430023B8: jr          $ra
    // 0x430023BC: nop

    return;
    // 0x430023BC: nop

    // 0x430023C0: jr          $ra
    // 0x430023C4: nop

    return;
    // 0x430023C4: nop

;}
RECOMP_FUNC void ovl_boss_devil_23C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430023C8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x430023CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430023D0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430023D4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x430023D8: lwc1        $f22, -0x4A54($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4A54);
    // 0x430023DC: lwc1        $f23, -0x4A58($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X4A58);
    // 0x430023E0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430023E4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430023E8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x430023EC: lwc1        $f24, -0x4A4C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4A4C);
    // 0x430023F0: lwc1        $f25, -0x4A50($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X4A50);
    // 0x430023F4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x430023F8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x430023FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43002400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002404: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x43002408: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x4300240C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x43002410: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x43002414: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x43002418: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x4300241C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43002420: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43002424: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43002428: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4300242C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43002430: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43002434: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43002438: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4300243C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43002440: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002444: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43002448: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x4300244C: addiu       $s4, $s4, -0x453C
    ctx->r20 = ADD32(ctx->r20, -0X453C);
    // 0x43002450: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x43002454: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x43002458: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x4300245C: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x43002460: multu       $t6, $s7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43002464: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x43002468: addiu       $s6, $s6, -0x4E50
    ctx->r22 = ADD32(ctx->r22, -0X4E50);
    // 0x4300246C: lw          $s2, 0x58($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X58);
    // 0x43002470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300247C: mflo        $t7
    ctx->r15 = lo;
    // 0x43002480: addu        $t8, $s6, $t7
    ctx->r24 = ADD32(ctx->r22, ctx->r15);
    // 0x43002484: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x43002488: nop

    // 0x4300248C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43002490: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x43002494: nop

    // 0x43002498: div.d       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f24.d);
    // 0x4300249C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x430024A0: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x430024A4: lw          $t9, 0xA4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XA4);
    // 0x430024A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430024AC: jalr        $t9
    // 0x430024B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430024B0: nop

    after_0:
    // 0x430024B4: jal         0x43009F38
    // 0x430024B8: nop

    ovl_boss_devil_9F38(rdram, ctx);
        goto after_1;
    // 0x430024B8: nop

    after_1:
    // 0x430024BC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430024C0: lwc1        $f31, -0x4A48($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X4A48);
    // 0x430024C4: lwc1        $f30, -0x4A44($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X4A44);
    // 0x430024C8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x430024CC: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x430024D0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x430024D4: andi        $s3, $v0, 0x3
    ctx->r19 = ctx->r2 & 0X3;
    // 0x430024D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430024DC: addiu       $s5, $s5, -0x4838
    ctx->r21 = ADD32(ctx->r21, -0X4838);
    // 0x430024E0: addiu       $fp, $zero, 0xB
    ctx->r30 = ADD32(0, 0XB);
L_430024E4:
    // 0x430024E4: bne         $s1, $fp, L_4300250C
    if (ctx->r17 != ctx->r30) {
        // 0x430024E8: addiu       $a0, $zero, 0x326
        ctx->r4 = ADD32(0, 0X326);
            goto L_4300250C;
    }
    // 0x430024E8: addiu       $a0, $zero, 0x326
    ctx->r4 = ADD32(0, 0X326);
    // 0x430024EC: jal         0x43000280
    // 0x430024F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_2;
    // 0x430024F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x430024F4: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x430024F8: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x430024FC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43002500: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43002504: jalr        $t9
    // 0x43002508: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43002508: nop

    after_3:
L_4300250C:
    // 0x4300250C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x43002510: bne         $s1, $at, L_43002538
    if (ctx->r17 != ctx->r1) {
        // 0x43002514: addiu       $a0, $zero, 0x325
        ctx->r4 = ADD32(0, 0X325);
            goto L_43002538;
    }
    // 0x43002514: addiu       $a0, $zero, 0x325
    ctx->r4 = ADD32(0, 0X325);
    // 0x43002518: jal         0x43000280
    // 0x4300251C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_4;
    // 0x4300251C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x43002520: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x43002524: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x43002528: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x4300252C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43002530: jalr        $t9
    // 0x43002534: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43002534: nop

    after_5:
L_43002538:
    // 0x43002538: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x4300253C: addiu       $a2, $a2, -0x4858
    ctx->r6 = ADD32(ctx->r6, -0X4858);
    // 0x43002540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002544: jal         0x43002134
    // 0x43002548: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    ovl_boss_devil_2134(rdram, ctx);
        goto after_6;
    // 0x43002548: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    after_6:
    // 0x4300254C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43002550: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x43002554: jal         0x4300A1E4
    // 0x43002558: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_7;
    // 0x43002558: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    after_7:
    // 0x4300255C: jal         0x4300AD98
    // 0x43002560: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_AD98(rdram, ctx);
        goto after_8;
    // 0x43002560: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x43002564: lw          $t9, 0x8C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8C);
    // 0x43002568: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300256C: jalr        $t9
    // 0x43002570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43002570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x43002574: bne         $v0, $zero, L_430025C0
    if (ctx->r2 != 0) {
        // 0x43002578: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_430025C0;
    }
    // 0x43002578: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4300257C: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x43002580: c.lt.d      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.d < ctx->f30.d;
    // 0x43002584: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002588: bc1f        L_43002598
    if (!c1cs) {
        // 0x4300258C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43002598;
    }
    // 0x4300258C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002590: b           L_430026E8
    // 0x43002594: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_430026E8;
    // 0x43002594: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_43002598:
    // 0x43002598: bne         $s3, $zero, L_430025A8
    if (ctx->r19 != 0) {
        // 0x4300259C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_430025A8;
    }
    // 0x4300259C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430025A0: b           L_430026E8
    // 0x430025A4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_430026E8;
    // 0x430025A4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_430025A8:
    // 0x430025A8: lw          $t9, 0xA4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XA4);
    // 0x430025AC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x430025B0: jalr        $t9
    // 0x430025B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x430025B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_10:
    // 0x430025B8: b           L_430025C0
    // 0x430025BC: nop

        goto L_430025C0;
    // 0x430025BC: nop

L_430025C0:
    // 0x430025C0: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430025C4: lw          $t0, -0x4538($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4538);
    // 0x430025C8: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x430025CC: beq         $t0, $zero, L_430025DC
    if (ctx->r8 == 0) {
        // 0x430025D0: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_430025DC;
    }
    // 0x430025D0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x430025D4: b           L_430026E8
    // 0x430025D8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
        goto L_430026E8;
    // 0x430025D8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_430025DC:
    // 0x430025DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430025E0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430025E4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x430025E8: nop

    // 0x430025EC: bc1f        L_43002634
    if (!c1cs) {
        // 0x430025F0: nop
    
            goto L_43002634;
    }
    // 0x430025F0: nop

    // 0x430025F4: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x430025F8: nop

    // 0x430025FC: multu       $t1, $s7
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43002600: mflo        $t2
    ctx->r10 = lo;
    // 0x43002604: addu        $t3, $s6, $t2
    ctx->r11 = ADD32(ctx->r22, ctx->r10);
    // 0x43002608: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x4300260C: nop

    // 0x43002610: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x43002614: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x43002618: nop

    // 0x4300261C: div.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f24.d);
    // 0x43002620: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x43002624: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x43002628: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4300262C: b           L_4300268C
    // 0x43002630: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
        goto L_4300268C;
    // 0x43002630: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
L_43002634:
    // 0x43002634: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43002638: nop

    // 0x4300263C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x43002640: nop

    // 0x43002644: bc1f        L_43002688
    if (!c1cs) {
        // 0x43002648: nop
    
            goto L_43002688;
    }
    // 0x43002648: nop

    // 0x4300264C: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x43002650: nop

    // 0x43002654: multu       $t4, $s7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43002658: mflo        $t5
    ctx->r13 = lo;
    // 0x4300265C: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x43002660: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x43002664: nop

    // 0x43002668: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x4300266C: mul.d       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x43002670: nop

    // 0x43002674: div.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f24.d);
    // 0x43002678: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x4300267C: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x43002680: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x43002684: nop

L_43002688:
    // 0x43002688: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
L_4300268C:
    // 0x4300268C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x43002690: beq         $t7, $zero, L_430026B8
    if (ctx->r15 == 0) {
        // 0x43002694: nop
    
            goto L_430026B8;
    }
    // 0x43002694: nop

    // 0x43002698: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4300269C: nop

    // 0x430026A0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x430026A4: nop

    // 0x430026A8: bc1f        L_430026B8
    if (!c1cs) {
        // 0x430026AC: nop
    
            goto L_430026B8;
    }
    // 0x430026AC: nop

    // 0x430026B0: b           L_430026E8
    // 0x430026B4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_430026E8;
    // 0x430026B4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_430026B8:
    // 0x430026B8: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x430026BC: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x430026C0: jalr        $t9
    // 0x430026C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x430026C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x430026C8: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x430026CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430026D0: jalr        $t9
    // 0x430026D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x430026D4: nop

    after_12:
    // 0x430026D8: jal         0x43009B08
    // 0x430026DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_13;
    // 0x430026DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x430026E0: b           L_430024E4
    // 0x430026E4: nop

        goto L_430024E4;
    // 0x430026E4: nop

L_430026E8:
    // 0x430026E8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x430026EC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430026F0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430026F4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430026F8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430026FC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002700: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002704: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43002708: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300270C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43002710: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43002714: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43002718: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4300271C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x43002720: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x43002724: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x43002728: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x4300272C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x43002730: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x43002734: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x43002738: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x4300273C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x43002740: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x43002744: jr          $ra
    // 0x43002748: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43002748: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_devil_274C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300274C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43002750: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x43002754: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43002758: addiu       $s3, $s3, -0x453C
    ctx->r19 = ADD32(ctx->r19, -0X453C);
    // 0x4300275C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x43002760: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x43002764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002768: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x4300276C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x43002770: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x43002774: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002778: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x4300277C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43002780: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43002784: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002788: bne         $t6, $zero, L_43002798
    if (ctx->r14 != 0) {
        // 0x4300278C: swc1        $f20, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
            goto L_43002798;
    }
    // 0x4300278C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43002790: b           L_43002868
    // 0x43002794: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_43002868;
    // 0x43002794: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_43002798:
    // 0x43002798: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x4300279C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430027A0: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430027A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430027A8: jalr        $t9
    // 0x430027AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430027AC: nop

    after_0:
    // 0x430027B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430027B4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x430027B8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x430027BC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430027C0: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x430027C4: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430027C8: lwc1        $f22, -0x4A3C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4A3C);
    // 0x430027CC: lwc1        $f23, -0x4A40($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X4A40);
    // 0x430027D0: addiu       $s2, $s2, -0x4858
    ctx->r18 = ADD32(ctx->r18, -0X4858);
    // 0x430027D4: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x430027D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430027DC:
    // 0x430027DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x430027E0: jal         0x43002134
    // 0x430027E4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_boss_devil_2134(rdram, ctx);
        goto after_1;
    // 0x430027E4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x430027E8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430027EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x430027F0: jal         0x4300A1E4
    // 0x430027F4: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_2;
    // 0x430027F4: sub.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f6.fl;
    after_2:
    // 0x430027F8: jal         0x4300AD98
    // 0x430027FC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_AD98(rdram, ctx);
        goto after_3;
    // 0x430027FC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x43002800: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x43002804: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43002808: beq         $t7, $zero, L_43002828
    if (ctx->r15 == 0) {
        // 0x4300280C: nop
    
            goto L_43002828;
    }
    // 0x4300280C: nop

    // 0x43002810: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x43002814: nop

    // 0x43002818: bc1f        L_43002828
    if (!c1cs) {
        // 0x4300281C: nop
    
            goto L_43002828;
    }
    // 0x4300281C: nop

    // 0x43002820: b           L_43002864
    // 0x43002824: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_43002864;
    // 0x43002824: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43002828:
    // 0x43002828: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x4300282C: c.lt.d      $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f10.d < ctx->f22.d;
    // 0x43002830: nop

    // 0x43002834: bc1f        L_43002844
    if (!c1cs) {
        // 0x43002838: nop
    
            goto L_43002844;
    }
    // 0x43002838: nop

    // 0x4300283C: b           L_43002864
    // 0x43002840: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_43002864;
    // 0x43002840: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_43002844:
    // 0x43002844: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43002848: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x4300284C: jalr        $t9
    // 0x43002850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43002854: jal         0x43009B08
    // 0x43002858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_5;
    // 0x43002858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x4300285C: b           L_430027DC
    // 0x43002860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_430027DC;
    // 0x43002860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43002864:
    // 0x43002864: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002868:
    // 0x43002868: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x4300286C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43002870: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43002874: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002878: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300287C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002880: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002884: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x43002888: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x4300288C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x43002890: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x43002894: jr          $ra
    // 0x43002898: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43002898: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_boss_devil_289C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300289C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x430028A0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x430028A4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x430028A8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x430028AC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x430028B0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x430028B4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x430028B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x430028BC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x430028C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x430028C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x430028C8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430028CC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x430028D0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430028D4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x430028D8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430028DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x430028E0: lw          $s3, 0x58($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X58);
    // 0x430028E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430028E8: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x430028EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430028F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430028F4: jalr        $t9
    // 0x430028F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430028F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x430028FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43002900: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43002904: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x43002908: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x4300290C: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x43002910: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43002914: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x43002918: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4300291C: addiu       $s4, $s4, -0x4838
    ctx->r20 = ADD32(ctx->r20, -0X4838);
    // 0x43002920: addiu       $s5, $s5, -0x4DD8
    ctx->r21 = ADD32(ctx->r21, -0X4DD8);
    // 0x43002924: addiu       $s6, $s6, -0x453C
    ctx->r22 = ADD32(ctx->r22, -0X453C);
    // 0x43002928: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x4300292C: addiu       $fp, $zero, 0x1E
    ctx->r30 = ADD32(0, 0X1E);
    // 0x43002930: addiu       $s7, $zero, 0x18
    ctx->r23 = ADD32(0, 0X18);
    // 0x43002934: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
L_43002938:
    // 0x43002938: lw          $t9, 0x8C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X8C);
    // 0x4300293C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002940: jalr        $t9
    // 0x43002944: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002944: nop

    after_1:
    // 0x43002948: bne         $v0, $zero, L_43002960
    if (ctx->r2 != 0) {
        // 0x4300294C: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_43002960;
    }
    // 0x4300294C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x43002950: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002954: lwc1        $f4, -0x4A38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4A38);
    // 0x43002958: b           L_43002A80
    // 0x4300295C: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
        goto L_43002A80;
    // 0x4300295C: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
L_43002960:
    // 0x43002960: beq         $s2, $fp, L_4300296C
    if (ctx->r18 == ctx->r30) {
        // 0x43002964: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_4300296C;
    }
    // 0x43002964: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43002968: bne         $s2, $at, L_4300299C
    if (ctx->r18 != ctx->r1) {
        // 0x4300296C: addiu       $a1, $zero, 0x41
        ctx->r5 = ADD32(0, 0X41);
            goto L_4300299C;
    }
L_4300296C:
    // 0x4300296C: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x43002970: jal         0x43000CA0
    // 0x43002974: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_boss_devil_CA0(rdram, ctx);
        goto after_2;
    // 0x43002974: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x43002978: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    // 0x4300297C: jal         0x43000280
    // 0x43002980: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_3;
    // 0x43002980: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x43002984: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43002988: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x4300298C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43002990: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43002994: jalr        $t9
    // 0x43002998: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002998: nop

    after_4:
L_4300299C:
    // 0x4300299C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x430029A0: bne         $s2, $at, L_43002A60
    if (ctx->r18 != ctx->r1) {
        // 0x430029A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43002A60;
    }
    // 0x430029A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430029A8: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x430029AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430029B0: jal         0x4300A4F8
    // 0x430029B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_A4F8(rdram, ctx);
        goto after_5;
    // 0x430029B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x430029B8: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x430029BC: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x430029C0: multu       $t6, $s7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x430029C4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x430029C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430029CC: mflo        $t7
    ctx->r15 = lo;
    // 0x430029D0: addu        $a2, $s5, $t7
    ctx->r6 = ADD32(ctx->r21, ctx->r15);
    // 0x430029D4: jal         0x430083C4
    // 0x430029D8: nop

    ovl_boss_devil_83C4(rdram, ctx);
        goto after_6;
    // 0x430029D8: nop

    after_6:
    // 0x430029DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430029E0: addiu       $a1, $zero, 0xA36
    ctx->r5 = ADD32(0, 0XA36);
    // 0x430029E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x430029E8: jal         0x430089B0
    // 0x430029EC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_7;
    // 0x430029EC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_7:
    // 0x430029F0: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x430029F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430029F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x430029FC: jal         0x4300A4F8
    // 0x43002A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_A4F8(rdram, ctx);
        goto after_8;
    // 0x43002A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x43002A04: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x43002A08: swc1        $f20, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f20.u32l;
    // 0x43002A0C: multu       $t8, $s7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43002A10: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x43002A14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002A18: mflo        $t0
    ctx->r8 = lo;
    // 0x43002A1C: addu        $a2, $s5, $t0
    ctx->r6 = ADD32(ctx->r21, ctx->r8);
    // 0x43002A20: jal         0x430083C4
    // 0x43002A24: nop

    ovl_boss_devil_83C4(rdram, ctx);
        goto after_9;
    // 0x43002A24: nop

    after_9:
    // 0x43002A28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002A2C: addiu       $a1, $zero, 0xA36
    ctx->r5 = ADD32(0, 0XA36);
    // 0x43002A30: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002A34: jal         0x430089B0
    // 0x43002A38: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_10;
    // 0x43002A38: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_10:
    // 0x43002A3C: addiu       $a0, $zero, 0x31E
    ctx->r4 = ADD32(0, 0X31E);
    // 0x43002A40: jal         0x43000280
    // 0x43002A44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_11;
    // 0x43002A44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x43002A48: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43002A4C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x43002A50: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43002A54: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x43002A58: jalr        $t9
    // 0x43002A5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43002A5C: nop

    after_12:
L_43002A60:
    // 0x43002A60: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43002A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002A68: jalr        $t9
    // 0x43002A6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x43002A6C: nop

    after_13:
    // 0x43002A70: jal         0x43009B08
    // 0x43002A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_14;
    // 0x43002A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x43002A78: b           L_43002938
    // 0x43002A7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_43002938;
    // 0x43002A7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_43002A80:
    // 0x43002A80: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x43002A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002A88: jalr        $t9
    // 0x43002A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x43002A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x43002A90: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x43002A94: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002A98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002A9C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002AA0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002AA4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002AA8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002AAC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x43002AB0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x43002AB4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x43002AB8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x43002ABC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x43002AC0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x43002AC4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x43002AC8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x43002ACC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x43002AD0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x43002AD4: jr          $ra
    // 0x43002AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43002AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_2ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002ADC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002AE0: lw          $t6, -0x453C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X453C);
    // 0x43002AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002AEC: beq         $t6, $zero, L_43002B18
    if (ctx->r14 == 0) {
        // 0x43002AF0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_43002B18;
    }
    // 0x43002AF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002AF4: jal         0x4300ADD0
    // 0x43002AF8: nop

    ovl_boss_devil_ADD0(rdram, ctx);
        goto after_0;
    // 0x43002AF8: nop

    after_0:
    // 0x43002AFC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x43002B00: beq         $t7, $zero, L_43002B10
    if (ctx->r15 == 0) {
        // 0x43002B04: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_43002B10;
    }
    // 0x43002B04: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x43002B08: b           L_43002B58
    // 0x43002B0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_43002B58;
    // 0x43002B0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_43002B10:
    // 0x43002B10: b           L_43002B58
    // 0x43002B14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002B58;
    // 0x43002B14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002B18:
    // 0x43002B18: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43002B1C: lw          $t8, -0x451C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X451C);
    // 0x43002B20: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x43002B24: lw          $t9, 0xAC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XAC);
    // 0x43002B28: nop

    // 0x43002B2C: beq         $t9, $zero, L_43002B58
    if (ctx->r25 == 0) {
        // 0x43002B30: nop
    
            goto L_43002B58;
    }
    // 0x43002B30: nop

    // 0x43002B34: jal         0x4300ADD0
    // 0x43002B38: nop

    ovl_boss_devil_ADD0(rdram, ctx);
        goto after_1;
    // 0x43002B38: nop

    after_1:
    // 0x43002B3C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x43002B40: beq         $t0, $zero, L_43002B50
    if (ctx->r8 == 0) {
        // 0x43002B44: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_43002B50;
    }
    // 0x43002B44: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x43002B48: b           L_43002B58
    // 0x43002B4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_43002B58;
    // 0x43002B4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_43002B50:
    // 0x43002B50: b           L_43002B58
    // 0x43002B54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002B58;
    // 0x43002B54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002B58:
    // 0x43002B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002B60: jr          $ra
    // 0x43002B64: nop

    return;
    // 0x43002B64: nop

;}
RECOMP_FUNC void ovl_boss_devil_2B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002B70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43002B74: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43002B78: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43002B7C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43002B80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002B84: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43002B88: jal         0x4300B110
    // 0x43002B8C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_0;
    // 0x43002B8C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x43002B90: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002B94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002B98: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43002B9C: nop

    // 0x43002BA0: bc1f        L_43002BC8
    if (!c1cs) {
        // 0x43002BA4: nop
    
            goto L_43002BC8;
    }
    // 0x43002BA4: nop

    // 0x43002BA8: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x43002BAC: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43002BB0: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43002BB4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x43002BB8: nop

    // 0x43002BBC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x43002BC0: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x43002BC4: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
L_43002BC8:
    // 0x43002BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002BD0: jr          $ra
    // 0x43002BD4: nop

    return;
    // 0x43002BD4: nop

;}
RECOMP_FUNC void ovl_boss_devil_2BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002BD8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43002BDC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x43002BE0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43002BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002BE8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x43002BEC: lw          $a0, -0x4860($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4860);
    // 0x43002BF0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43002BF4: jal         0x430006C4
    // 0x43002BF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43002BF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x43002BFC: bne         $v0, $zero, L_43002C50
    if (ctx->r2 != 0) {
        // 0x43002C00: nop
    
            goto L_43002C50;
    }
    // 0x43002C00: nop

    // 0x43002C04: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x43002C08: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43002C0C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x43002C10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x43002C14: lh          $t9, -0x4DA8($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4DA8);
    // 0x43002C18: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43002C1C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x43002C20: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x43002C24: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43002C28: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002C2C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x43002C30: mul.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x43002C34: lwc1        $f10, 0x10($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X10);
    // 0x43002C38: lwc1        $f19, -0x4A30($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4A30);
    // 0x43002C3C: lwc1        $f18, -0x4A2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4A2C);
    // 0x43002C40: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x43002C44: mul.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x43002C48: b           L_43002C5C
    // 0x43002C4C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_43002C5C;
    // 0x43002C4C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_43002C50:
    // 0x43002C50: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x43002C54: nop

    // 0x43002C58: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_43002C5C:
    // 0x43002C5C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x43002C60: jal         0x4300ADE0
    // 0x43002C64: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_1;
    // 0x43002C64: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x43002C68: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43002C6C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002C70: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x43002C74: lwc1        $f4, -0x4858($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4858);
    // 0x43002C78: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x43002C7C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x43002C80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43002C84: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43002C88: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x43002C8C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x43002C90: jal         0x4300AFA0
    // 0x43002C94: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_2;
    // 0x43002C94: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_2:
    // 0x43002C98: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43002C9C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002CA0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x43002CA4: lwc1        $f6, -0x4850($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4850);
    // 0x43002CA8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43002CAC: lui         $a1, 0x4483
    ctx->r5 = S32(0X4483 << 16);
    // 0x43002CB0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43002CB4: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x43002CB8: jal         0x43002B68
    // 0x43002CBC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    ovl_boss_devil_2B68(rdram, ctx);
        goto after_3;
    // 0x43002CBC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    after_3:
    // 0x43002CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002CC4: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43002CC8: jr          $ra
    // 0x43002CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43002CCC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_devil_2CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002CD0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x43002CD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x43002CD8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x43002CDC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x43002CE0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x43002CE4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x43002CE8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x43002CEC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x43002CF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x43002CF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43002CF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43002CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002D00: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x43002D04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43002D08: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    // 0x43002D0C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002D14: jalr        $t9
    // 0x43002D18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43002D18: nop

    after_0:
    // 0x43002D1C: lw          $t9, 0x6C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X6C);
    // 0x43002D20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002D24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002D2C: jalr        $t9
    // 0x43002D30: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002D30: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_1:
    // 0x43002D34: lw          $t9, 0x80($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X80);
    // 0x43002D38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002D40: jalr        $t9
    // 0x43002D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43002D44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x43002D48: lw          $t9, 0x7C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X7C);
    // 0x43002D4C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002D54: jalr        $t9
    // 0x43002D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43002D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43002D5C: lui         $fp, 0x4301
    ctx->r30 = S32(0X4301 << 16);
    // 0x43002D60: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43002D64: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x43002D68: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x43002D6C: addiu       $s5, $s5, -0x453C
    ctx->r21 = ADD32(ctx->r21, -0X453C);
    // 0x43002D70: addiu       $s6, $s6, -0x4D98
    ctx->r22 = ADD32(ctx->r22, -0X4D98);
    // 0x43002D74: addiu       $s7, $s7, -0x4DA0
    ctx->r23 = ADD32(ctx->r23, -0X4DA0);
    // 0x43002D78: addiu       $fp, $fp, -0x451C
    ctx->r30 = ADD32(ctx->r30, -0X451C);
    // 0x43002D7C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x43002D80: addiu       $s4, $sp, 0x60
    ctx->r20 = ADD32(ctx->r29, 0X60);
L_43002D84:
    // 0x43002D84: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x43002D88: nop

    // 0x43002D8C: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43002D90: nop

    // 0x43002D94: jalr        $t9
    // 0x43002D98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002D98: nop

    after_4:
    // 0x43002D9C: beq         $v0, $zero, L_43002F90
    if (ctx->r2 == 0) {
        // 0x43002DA0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_43002F90;
    }
    // 0x43002DA0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x43002DA4: bne         $s2, $at, L_43002DD4
    if (ctx->r18 != ctx->r1) {
        // 0x43002DA8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_43002DD4;
    }
    // 0x43002DA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002DAC: lw          $t9, 0x7C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X7C);
    // 0x43002DB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002DB4: jalr        $t9
    // 0x43002DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43002DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x43002DBC: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x43002DC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002DC4: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x43002DC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x43002DCC: jalr        $t9
    // 0x43002DD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002DD0: nop

    after_6:
L_43002DD4:
    // 0x43002DD4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x43002DD8: bne         $s2, $at, L_43002F14
    if (ctx->r18 != ctx->r1) {
        // 0x43002DDC: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_43002F14;
    }
    // 0x43002DDC: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x43002DE0: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x43002DE4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x43002DE8: bne         $a1, $zero, L_43002E0C
    if (ctx->r5 != 0) {
        // 0x43002DEC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43002E0C;
    }
    // 0x43002DEC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43002DF0: jal         0x43002BD8
    // 0x43002DF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_devil_2BD8(rdram, ctx);
        goto after_7;
    // 0x43002DF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_7:
    // 0x43002DF8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x43002DFC: jal         0x430068CC
    // 0x43002E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_devil_68CC(rdram, ctx);
        goto after_8;
    // 0x43002E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x43002E04: lw          $a1, 0x0($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X0);
    // 0x43002E08: nop

L_43002E0C:
    // 0x43002E0C: lw          $t6, 0x40($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X40);
    // 0x43002E10: sll         $s0, $a1, 2
    ctx->r16 = S32(ctx->r5 << 2);
    // 0x43002E14: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x43002E18: addu        $t0, $s6, $s0
    ctx->r8 = ADD32(ctx->r22, ctx->r16);
    // 0x43002E1C: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x43002E20: lw          $t8, 0x14($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X14);
    // 0x43002E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43002E28: sw          $t8, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r24;
    // 0x43002E2C: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x43002E30: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x43002E34: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x43002E38: blez        $t1, L_43002EB0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x43002E3C: swc1        $f4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
            goto L_43002EB0;
    }
    // 0x43002E3C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
L_43002E40:
    // 0x43002E40: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x43002E44: addu        $t2, $s7, $s0
    ctx->r10 = ADD32(ctx->r23, ctx->r16);
    // 0x43002E48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43002E4C: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43002E50: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x43002E54: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x43002E58: lw          $t3, -0x4D90($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4D90);
    // 0x43002E5C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43002E60: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x43002E64: lwc1        $f18, 0xC($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XC);
    // 0x43002E68: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x43002E6C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43002E70: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x43002E74: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x43002E78: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43002E7C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43002E80: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43002E84: jalr        $t9
    // 0x43002E88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43002E88: nop

    after_9:
    // 0x43002E8C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x43002E90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x43002E94: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x43002E98: addu        $t5, $s6, $t4
    ctx->r13 = ADD32(ctx->r22, ctx->r12);
    // 0x43002E9C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x43002EA0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x43002EA4: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43002EA8: bne         $at, $zero, L_43002E40
    if (ctx->r1 != 0) {
        // 0x43002EAC: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_43002E40;
    }
    // 0x43002EAC: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_43002EB0:
    // 0x43002EB0: beq         $s1, $zero, L_43002EC0
    if (ctx->r17 == 0) {
        // 0x43002EB4: addiu       $a0, $zero, 0x15
        ctx->r4 = ADD32(0, 0X15);
            goto L_43002EC0;
    }
    // 0x43002EB4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x43002EB8: jal         0x43000280
    // 0x43002EBC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_10;
    // 0x43002EBC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_10:
L_43002EC0:
    // 0x43002EC0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43002EC4: lw          $a0, -0x4838($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4838);
    // 0x43002EC8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43002ECC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43002ED0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x43002ED4: jalr        $t9
    // 0x43002ED8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43002ED8: nop

    after_11:
    // 0x43002EDC: lw          $a0, 0x40($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X40);
    // 0x43002EE0: addiu       $a1, $zero, 0xA36
    ctx->r5 = ADD32(0, 0XA36);
    // 0x43002EE4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002EE8: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x43002EEC: jal         0x430089B0
    // 0x43002EF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_12;
    // 0x43002EF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_12:
    // 0x43002EF4: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    // 0x43002EF8: jal         0x43000280
    // 0x43002EFC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_13;
    // 0x43002EFC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_13:
    // 0x43002F00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43002F04: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x43002F08: jal         0x43000CA0
    // 0x43002F0C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_devil_CA0(rdram, ctx);
        goto after_14;
    // 0x43002F0C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_14:
    // 0x43002F10: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_43002F14:
    // 0x43002F14: bne         $s2, $at, L_43002F44
    if (ctx->r18 != ctx->r1) {
        // 0x43002F18: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_43002F44;
    }
    // 0x43002F18: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002F1C: lw          $t9, 0x7C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X7C);
    // 0x43002F20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002F24: jalr        $t9
    // 0x43002F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x43002F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x43002F2C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x43002F30: nop

    // 0x43002F34: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x43002F38: nop

    // 0x43002F3C: jalr        $t9
    // 0x43002F40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x43002F40: nop

    after_16:
L_43002F44:
    // 0x43002F44: slti        $at, $s2, 0xF
    ctx->r1 = SIGNED(ctx->r18) < 0XF ? 1 : 0;
    // 0x43002F48: beq         $at, $zero, L_43002F70
    if (ctx->r1 == 0) {
        // 0x43002F4C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_43002F70;
    }
    // 0x43002F4C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002F50: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43002F54: addiu       $a2, $a2, -0x4858
    ctx->r6 = ADD32(ctx->r6, -0X4858);
    // 0x43002F58: jal         0x43002134
    // 0x43002F5C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    ovl_boss_devil_2134(rdram, ctx);
        goto after_17;
    // 0x43002F5C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_17:
    // 0x43002F60: lw          $t9, 0x9C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X9C);
    // 0x43002F64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002F68: jalr        $t9
    // 0x43002F6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x43002F6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_18:
L_43002F70:
    // 0x43002F70: lw          $t9, 0x98($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X98);
    // 0x43002F74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002F78: jalr        $t9
    // 0x43002F7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x43002F7C: nop

    after_19:
    // 0x43002F80: jal         0x43009B08
    // 0x43002F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_20;
    // 0x43002F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x43002F88: b           L_43002D84
    // 0x43002F8C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_43002D84;
    // 0x43002F8C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_43002F90:
    // 0x43002F90: lw          $t9, 0x70($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X70);
    // 0x43002F94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43002F98: jalr        $t9
    // 0x43002F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x43002F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x43002FA0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x43002FA4: nop

    // 0x43002FA8: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x43002FAC: nop

    // 0x43002FB0: jalr        $t9
    // 0x43002FB4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x43002FB4: nop

    after_22:
    // 0x43002FB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43002FBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43002FC0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43002FC4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43002FC8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43002FCC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43002FD0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x43002FD4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x43002FD8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x43002FDC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x43002FE0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x43002FE4: jr          $ra
    // 0x43002FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43002FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_2FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002FEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43002FF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002FF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002FFC: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x43003000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003004: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003008: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300300C: jalr        $t9
    // 0x43003010: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003010: nop

    after_0:
    // 0x43003014: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_43003018:
    // 0x43003018: nop

    // 0x4300301C: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43003020: nop

    // 0x43003024: jalr        $t9
    // 0x43003028: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43003028: nop

    after_1:
    // 0x4300302C: beq         $v0, $zero, L_43003058
    if (ctx->r2 == 0) {
        // 0x43003030: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43003058;
    }
    // 0x43003030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43003034: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43003038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300303C: jalr        $t9
    // 0x43003040: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43003040: nop

    after_2:
    // 0x43003044: jal         0x43009B08
    // 0x43003048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_3;
    // 0x43003048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x4300304C: b           L_43003018
    // 0x43003050: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
        goto L_43003018;
    // 0x43003050: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x43003054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003058:
    // 0x43003058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300305C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43003060: jr          $ra
    // 0x43003064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43003064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_3068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003068: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300306C: lw          $v0, -0x4524($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4524);
    // 0x43003070: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43003074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43003078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300307C: beq         $v0, $at, L_43003098
    if (ctx->r2 == ctx->r1) {
        // 0x43003080: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_43003098;
    }
    // 0x43003080: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43003084: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43003088: beq         $v0, $at, L_43003098
    if (ctx->r2 == ctx->r1) {
        // 0x4300308C: nop
    
            goto L_43003098;
    }
    // 0x4300308C: nop

    // 0x43003090: b           L_430031B4
    // 0x43003094: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_430031B4;
    // 0x43003094: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_43003098:
    // 0x43003098: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300309C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430030A0: lw          $t7, -0x4520($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4520);
    // 0x430030A4: lw          $t6, -0x483C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X483C);
    // 0x430030A8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430030AC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x430030B0: sltiu       $at, $t8, 0x78
    ctx->r1 = ctx->r24 < 0X78 ? 1 : 0;
    // 0x430030B4: beq         $at, $zero, L_430030C4
    if (ctx->r1 == 0) {
        // 0x430030B8: nop
    
            goto L_430030C4;
    }
    // 0x430030B8: nop

    // 0x430030BC: b           L_430031B4
    // 0x430030C0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_430031B4;
    // 0x430030C0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_430030C4:
    // 0x430030C4: jal         0x43000280
    // 0x430030C8: addiu       $a0, $zero, 0x327
    ctx->r4 = ADD32(0, 0X327);
    ovl_boss_devil_280(rdram, ctx);
        goto after_0;
    // 0x430030C8: addiu       $a0, $zero, 0x327
    ctx->r4 = ADD32(0, 0X327);
    after_0:
    // 0x430030CC: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430030D0: lw          $t9, -0x4540($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4540);
    // 0x430030D4: addiu       $a0, $zero, 0x8B2
    ctx->r4 = ADD32(0, 0X8B2);
    // 0x430030D8: slti        $at, $t9, 0xC
    ctx->r1 = SIGNED(ctx->r25) < 0XC ? 1 : 0;
    // 0x430030DC: bne         $at, $zero, L_430030EC
    if (ctx->r1 != 0) {
        // 0x430030E0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_430030EC;
    }
    // 0x430030E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430030E4: jal         0x43000C10
    // 0x430030E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_C10(rdram, ctx);
        goto after_1;
    // 0x430030E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_430030EC:
    // 0x430030EC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x430030F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430030F4: lw          $a0, 0x58($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X58);
    // 0x430030F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430030FC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x43003100: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003104: nop

    // 0x43003108: jalr        $t9
    // 0x4300310C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x4300310C: nop

    after_2:
    // 0x43003110: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43003114: lui         $a1, 0xFF00
    ctx->r5 = S32(0XFF00 << 16);
    // 0x43003118: jal         0x43006300
    // 0x4300311C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_boss_devil_6300(rdram, ctx);
        goto after_3;
    // 0x4300311C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x43003120: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43003124: jal         0x43002114
    // 0x43003128: nop

    ovl_boss_devil_2114(rdram, ctx);
        goto after_4;
    // 0x43003128: nop

    after_4:
    // 0x4300312C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43003130: jal         0x43006400
    // 0x43003134: nop

    ovl_boss_devil_6400(rdram, ctx);
        goto after_5;
    // 0x43003134: nop

    after_5:
    // 0x43003138: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x4300313C: addiu       $a1, $a1, -0x4540
    ctx->r5 = ADD32(ctx->r5, -0X4540);
    // 0x43003140: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x43003144: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003148: addiu       $a0, $a0, -0x453C
    ctx->r4 = ADD32(ctx->r4, -0X453C);
    // 0x4300314C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x43003150: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43003154: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x43003158: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x4300315C: bne         $at, $zero, L_43003184
    if (ctx->r1 != 0) {
        // 0x43003160: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43003184;
    }
    // 0x43003160: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43003164: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43003168: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x4300316C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003170: lw          $t6, -0x451C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X451C);
    // 0x43003174: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x43003178: sw          $t5, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = ctx->r13;
    // 0x4300317C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x43003180: nop

L_43003184:
    // 0x43003184: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003188: lw          $t7, -0x483C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X483C);
    // 0x4300318C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003190: beq         $v1, $v0, L_430031A0
    if (ctx->r3 == ctx->r2) {
        // 0x43003194: sw          $t7, -0x4520($at)
        MEM_W(-0X4520, ctx->r1) = ctx->r15;
            goto L_430031A0;
    }
    // 0x43003194: sw          $t7, -0x4520($at)
    MEM_W(-0X4520, ctx->r1) = ctx->r15;
    // 0x43003198: b           L_430031B4
    // 0x4300319C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_430031B4;
    // 0x4300319C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_430031A0:
    // 0x430031A0: bne         $v0, $zero, L_430031B4
    if (ctx->r2 != 0) {
        // 0x430031A4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_430031B4;
    }
    // 0x430031A4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x430031A8: b           L_430031B4
    // 0x430031AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_430031B4;
    // 0x430031AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x430031B0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_430031B4:
    // 0x430031B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430031B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430031BC: jr          $ra
    // 0x430031C0: nop

    return;
    // 0x430031C0: nop

;}
RECOMP_FUNC void ovl_boss_devil_31C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430031C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430031C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430031CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430031D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430031D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430031D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430031DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430031E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430031E4: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x430031E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430031EC: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x430031F0: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430031F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430031F8: jalr        $t9
    // 0x430031FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430031FC: nop

    after_0:
    // 0x43003200: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003204: addiu       $t6, $t6, -0x4858
    ctx->r14 = ADD32(ctx->r14, -0X4858);
    // 0x43003208: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x4300320C: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x43003210: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x43003214: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x43003218: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4300321C: sw          $t0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r8;
    // 0x43003220: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43003224: addiu       $s3, $zero, 0x19
    ctx->r19 = ADD32(0, 0X19);
    // 0x43003228: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x4300322C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003230: lwc1        $f4, -0x4A28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4A28);
    // 0x43003234: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x43003238: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x4300323C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43003240:
    // 0x43003240: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43003244: jal         0x43002134
    // 0x43003248: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_boss_devil_2134(rdram, ctx);
        goto after_1;
    // 0x43003248: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x4300324C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003250: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003254: jalr        $t9
    // 0x43003258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43003258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4300325C: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43003260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003264: jalr        $t9
    // 0x43003268: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43003268: nop

    after_3:
    // 0x4300326C: jal         0x43009B08
    // 0x43003270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_4;
    // 0x43003270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x43003274: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003278: bne         $s1, $s3, L_43003240
    if (ctx->r17 != ctx->r19) {
        // 0x4300327C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43003240;
    }
    // 0x4300327C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003280: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x43003284: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x43003288: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    // 0x4300328C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003290: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43003294: jal         0x4300A4F8
    // 0x43003298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_A4F8(rdram, ctx);
        goto after_5;
    // 0x43003298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x4300329C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430032A0: jal         0x4300233C
    // 0x430032A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_boss_devil_233C(rdram, ctx);
        goto after_6;
    // 0x430032A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_6:
    // 0x430032A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430032AC: jal         0x43002094
    // 0x430032B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_boss_devil_2094(rdram, ctx);
        goto after_7;
    // 0x430032B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
    // 0x430032B4: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x430032B8: addiu       $t2, $t2, -0x4858
    ctx->r10 = ADD32(ctx->r10, -0X4858);
    // 0x430032BC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x430032C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430032C4: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x430032C8: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x430032CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430032D0: sw          $t4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r12;
    // 0x430032D4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x430032D8: jal         0x43002094
    // 0x430032DC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    ovl_boss_devil_2094(rdram, ctx);
        goto after_8;
    // 0x430032DC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    after_8:
    // 0x430032E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430032E4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x430032E8: jal         0x43009068
    // 0x430032EC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    ovl_boss_devil_9068(rdram, ctx);
        goto after_9;
    // 0x430032EC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_9:
    // 0x430032F0: addiu       $a0, $zero, 0x321
    ctx->r4 = ADD32(0, 0X321);
    // 0x430032F4: jal         0x43000280
    // 0x430032F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_10;
    // 0x430032F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_10:
    // 0x430032FC: jal         0x43002114
    // 0x43003300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_2114(rdram, ctx);
        goto after_11;
    // 0x43003300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43003304: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003308: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300330C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43003310: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43003314: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43003318: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4300331C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43003320: jr          $ra
    // 0x43003324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43003324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_3328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003328: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x4300332C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x43003330: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x43003334: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x43003338: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x4300333C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x43003340: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43003344: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43003348: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x4300334C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43003350: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43003354: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43003358: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x4300335C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43003360: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43003364: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43003368: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x4300336C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003370: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43003374: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003378: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4300337C: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x43003380: lw          $s1, 0x58($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X58);
    // 0x43003384: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43003388: lw          $t9, 0xA4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA4);
    // 0x4300338C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003390: jalr        $t9
    // 0x43003394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x43003398: jal         0x43009B08
    // 0x4300339C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_1;
    // 0x4300339C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
    // 0x430033A0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x430033A4: addiu       $a0, $sp, 0x10C
    ctx->r4 = ADD32(ctx->r29, 0X10C);
    // 0x430033A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x430033AC: jal         0x4300A4F8
    // 0x430033B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_A4F8(rdram, ctx);
        goto after_2;
    // 0x430033B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430033B4: addiu       $a0, $sp, 0x10C
    ctx->r4 = ADD32(ctx->r29, 0X10C);
    // 0x430033B8: jal         0x4300233C
    // 0x430033BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_boss_devil_233C(rdram, ctx);
        goto after_3;
    // 0x430033BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_3:
    // 0x430033C0: jal         0x43009B08
    // 0x430033C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_4;
    // 0x430033C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_4:
    // 0x430033C8: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430033CC: addiu       $v1, $v1, -0x4D88
    ctx->r3 = ADD32(ctx->r3, -0X4D88);
    // 0x430033D0: addiu       $v0, $sp, 0xA0
    ctx->r2 = ADD32(ctx->r29, 0XA0);
    // 0x430033D4: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
L_430033D8:
    // 0x430033D8: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x430033DC: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x430033E0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x430033E4: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x430033E8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x430033EC: sw          $at, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r1;
    // 0x430033F0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x430033F4: bne         $at, $zero, L_430033D8
    if (ctx->r1 != 0) {
        // 0x430033F8: sw          $t0, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = ctx->r8;
            goto L_430033D8;
    }
    // 0x430033F8: sw          $t0, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r8;
    // 0x430033FC: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x43003400: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003404: addiu       $a2, $a2, -0x4858
    ctx->r6 = ADD32(ctx->r6, -0X4858);
    // 0x43003408: jal         0x43002134
    // 0x4300340C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    ovl_boss_devil_2134(rdram, ctx);
        goto after_5;
    // 0x4300340C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_5:
    // 0x43003410: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003414: lwc1        $f31, -0x4A20($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X4A20);
    // 0x43003418: lwc1        $f30, -0x4A1C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X4A1C);
    // 0x4300341C: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x43003420: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x43003424: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x43003428: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x4300342C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x43003430: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x43003434: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x43003438: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x4300343C: addiu       $s6, $sp, 0xA0
    ctx->r22 = ADD32(ctx->r29, 0XA0);
    // 0x43003440: addiu       $s4, $sp, 0x100
    ctx->r20 = ADD32(ctx->r29, 0X100);
    // 0x43003444: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_43003448:
    // 0x43003448: jal         0x43009F38
    // 0x4300344C: nop

    ovl_boss_devil_9F38(rdram, ctx);
        goto after_6;
    // 0x4300344C: nop

    after_6:
    // 0x43003450: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x43003454: sltiu       $at, $t1, 0x65
    ctx->r1 = ctx->r9 < 0X65 ? 1 : 0;
    // 0x43003458: bne         $at, $zero, L_4300348C
    if (ctx->r1 != 0) {
        // 0x4300345C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_4300348C;
    }
    // 0x4300345C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x43003460: jal         0x43002BD8
    // 0x43003464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_devil_2BD8(rdram, ctx);
        goto after_7;
    // 0x43003464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x43003468: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300346C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003470: nop

    // 0x43003474: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x43003478: nop

    // 0x4300347C: bc1f        L_4300348C
    if (!c1cs) {
        // 0x43003480: nop
    
            goto L_4300348C;
    }
    // 0x43003480: nop

    // 0x43003484: b           L_43003588
    // 0x43003488: swc1        $f28, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f28.u32l;
        goto L_43003588;
    // 0x43003488: swc1        $f28, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f28.u32l;
L_4300348C:
    // 0x4300348C: jal         0x43009F38
    // 0x43003490: nop

    ovl_boss_devil_9F38(rdram, ctx);
        goto after_8;
    // 0x43003490: nop

    after_8:
    // 0x43003494: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x43003498: sltiu       $at, $t2, 0x33
    ctx->r1 = ctx->r10 < 0X33 ? 1 : 0;
    // 0x4300349C: bne         $at, $zero, L_430034EC
    if (ctx->r1 != 0) {
        // 0x430034A0: slti        $at, $s3, 0x8
        ctx->r1 = SIGNED(ctx->r19) < 0X8 ? 1 : 0;
            goto L_430034EC;
    }
    // 0x430034A0: slti        $at, $s3, 0x8
    ctx->r1 = SIGNED(ctx->r19) < 0X8 ? 1 : 0;
    // 0x430034A4: beq         $at, $zero, L_430034EC
    if (ctx->r1 == 0) {
        // 0x430034A8: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_430034EC;
    }
    // 0x430034A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x430034AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x430034B0: jal         0x43001EAC
    // 0x430034B4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_boss_devil_1EAC(rdram, ctx);
        goto after_9;
    // 0x430034B4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_9:
    // 0x430034B8: beq         $v0, $zero, L_430034EC
    if (ctx->r2 == 0) {
        // 0x430034BC: sll         $t3, $s3, 2
        ctx->r11 = S32(ctx->r19 << 2);
            goto L_430034EC;
    }
    // 0x430034BC: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x430034C0: subu        $t3, $t3, $s3
    ctx->r11 = SUB32(ctx->r11, ctx->r19);
    // 0x430034C4: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x430034C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x430034CC: addu        $t4, $s6, $t3
    ctx->r12 = ADD32(ctx->r22, ctx->r11);
    // 0x430034D0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x430034D4: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x430034D8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x430034DC: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x430034E0: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x430034E4: b           L_43003588
    // 0x430034E8: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
        goto L_43003588;
    // 0x430034E8: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
L_430034EC:
    // 0x430034EC: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x430034F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430034F4: lwc1        $f12, -0x4A18($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4A18);
    // 0x430034F8: jal         0x43009FF8
    // 0x430034FC: cvt.d.s     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f20.d = CVT_D_S(ctx->f6.fl);
    ovl_boss_devil_9FF8(rdram, ctx);
        goto after_10;
    // 0x430034FC: cvt.d.s     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f20.d = CVT_D_S(ctx->f6.fl);
    after_10:
    // 0x43003500: c.lt.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
    // 0x43003504: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43003508: bc1f        L_43003518
    if (!c1cs) {
        // 0x4300350C: cvt.d.s     $f8, $f22
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.d = CVT_D_S(ctx->f22.fl);
            goto L_43003518;
    }
    // 0x4300350C: cvt.d.s     $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.d = CVT_D_S(ctx->f22.fl);
    // 0x43003510: b           L_43003528
    // 0x43003514: mov.d       $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    ctx->f0.d = ctx->f30.d;
        goto L_43003528;
    // 0x43003514: mov.d       $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    ctx->f0.d = ctx->f30.d;
L_43003518:
    // 0x43003518: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300351C: lwc1        $f1, -0x4A10($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4A10);
    // 0x43003520: lwc1        $f0, -0x4A0C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4A0C);
    // 0x43003524: nop

L_43003528:
    // 0x43003528: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4300352C: add.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = ctx->f0.d + ctx->f20.d;
    // 0x43003530: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003534: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x43003538: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x4300353C: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43003540: jal         0x43009FF8
    // 0x43003544: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    ovl_boss_devil_9FF8(rdram, ctx);
        goto after_11;
    // 0x43003544: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    after_11:
    // 0x43003548: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x4300354C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x43003550: jal         0x4300ADE0
    // 0x43003554: add.s       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f6.fl;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_12;
    // 0x43003554: add.s       $f20, $f0, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f6.fl;
    after_12:
    // 0x43003558: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x4300355C: lwc1        $f16, 0x10C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x43003560: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x43003564: swc1        $f28, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f28.u32l;
    // 0x43003568: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x4300356C: jal         0x4300AFA0
    // 0x43003570: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_13;
    // 0x43003570: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x43003574: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x43003578: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x4300357C: nop

    // 0x43003580: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43003584: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
L_43003588:
    // 0x43003588: addiu       $a0, $sp, 0x10C
    ctx->r4 = ADD32(ctx->r29, 0X10C);
    // 0x4300358C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x43003590: jal         0x43009068
    // 0x43003594: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_boss_devil_9068(rdram, ctx);
        goto after_14;
    // 0x43003594: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_14:
    // 0x43003598: addiu       $a0, $zero, 0x321
    ctx->r4 = ADD32(0, 0X321);
    // 0x4300359C: jal         0x43000280
    // 0x430035A0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_15;
    // 0x430035A0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_15:
    // 0x430035A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_430035A8:
    // 0x430035A8: lw          $t9, 0x80($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X80);
    // 0x430035AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430035B0: jalr        $t9
    // 0x430035B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x430035B4: nop

    after_16:
    // 0x430035B8: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x430035BC: nop

    // 0x430035C0: bc1f        L_430035D8
    if (!c1cs) {
        // 0x430035C4: nop
    
            goto L_430035D8;
    }
    // 0x430035C4: nop

    // 0x430035C8: lw          $t9, 0x84($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X84);
    // 0x430035CC: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x430035D0: jalr        $t9
    // 0x430035D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x430035D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
L_430035D8:
    // 0x430035D8: jal         0x43009B08
    // 0x430035DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_18;
    // 0x430035DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x430035E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430035E4: bne         $s0, $s2, L_430035A8
    if (ctx->r16 != ctx->r18) {
        // 0x430035E8: nop
    
            goto L_430035A8;
    }
    // 0x430035E8: nop

    // 0x430035EC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x430035F0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x430035F4: bne         $s5, $at, L_43003448
    if (ctx->r21 != ctx->r1) {
        // 0x430035F8: nop
    
            goto L_43003448;
    }
    // 0x430035F8: nop

    // 0x430035FC: lw          $t9, 0xB0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XB0);
    // 0x43003600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003604: jalr        $t9
    // 0x43003608: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x43003608: nop

    after_19:
    // 0x4300360C: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x43003610: jal         0x43002114
    // 0x43003614: nop

    ovl_boss_devil_2114(rdram, ctx);
        goto after_20;
    // 0x43003614: nop

    after_20:
    // 0x43003618: jal         0x4300ADD0
    // 0x4300361C: nop

    ovl_boss_devil_ADD0(rdram, ctx);
        goto after_21;
    // 0x4300361C: nop

    after_21:
    // 0x43003620: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x43003624: beq         $t8, $zero, L_43003634
    if (ctx->r24 == 0) {
        // 0x43003628: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_43003634;
    }
    // 0x43003628: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x4300362C: b           L_43003634
    // 0x43003630: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_43003634;
    // 0x43003630: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43003634:
    // 0x43003634: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43003638: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4300363C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003640: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43003644: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43003648: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x4300364C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43003650: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003654: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003658: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x4300365C: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43003660: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43003664: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43003668: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x4300366C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x43003670: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x43003674: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x43003678: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x4300367C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x43003680: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x43003684: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    // 0x43003688: jr          $ra
    // 0x4300368C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300368C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_devil_3690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003690: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x43003694: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x43003698: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4300369C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430036A0: lw          $a0, -0x451C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X451C);
    // 0x430036A4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x430036A8: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
    // 0x430036AC: sw          $s6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r22;
    // 0x430036B0: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x430036B4: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x430036B8: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x430036BC: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x430036C0: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x430036C4: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x430036C8: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x430036CC: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x430036D0: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x430036D4: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x430036D8: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x430036DC: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430036E0: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x430036E4: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430036E8: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x430036EC: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430036F0: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x430036F4: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x430036F8: nop

    // 0x430036FC: jalr        $t9
    // 0x43003700: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003700: nop

    after_0:
    // 0x43003704: lw          $a0, 0x58($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X58);
    // 0x43003708: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x4300370C: jal         0x43006420
    // 0x43003710: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    ovl_boss_devil_6420(rdram, ctx);
        goto after_1;
    // 0x43003710: sw          $a0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r4;
    after_1:
    // 0x43003714: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x43003718: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4300371C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003724: jalr        $t9
    // 0x43003728: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43003728: nop

    after_2:
    // 0x4300372C: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43003730: addiu       $s3, $s3, -0x4838
    ctx->r19 = ADD32(ctx->r19, -0X4838);
    // 0x43003734: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43003738: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x4300373C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003740: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x43003744: jalr        $t9
    // 0x43003748: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43003748: nop

    after_3:
    // 0x4300374C: addiu       $a0, $zero, 0x32A
    ctx->r4 = ADD32(0, 0X32A);
    // 0x43003750: jal         0x43000280
    // 0x43003754: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_4;
    // 0x43003754: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x43003758: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x4300375C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43003760: addiu       $s1, $s1, -0x4518
    ctx->r17 = ADD32(ctx->r17, -0X4518);
    // 0x43003764: addiu       $t8, $t8, -0x4D78
    ctx->r24 = ADD32(ctx->r24, -0X4D78);
    // 0x43003768: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x4300376C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43003770: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x43003774: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x43003778: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x4300377C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x43003780: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x43003784: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43003788: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4300378C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003790: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x43003794: jal         0x43000DC0
    // 0x43003798: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_5;
    // 0x43003798: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_5:
    // 0x4300379C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x430037A0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x430037A4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x430037A8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x430037AC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x430037B0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x430037B4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x430037B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x430037BC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x430037C0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430037C4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x430037C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430037CC: addiu       $s7, $zero, 0x50
    ctx->r23 = ADD32(0, 0X50);
    // 0x430037D0: lui         $s6, 0xFB00
    ctx->r22 = S32(0XFB00 << 16);
    // 0x430037D4: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x430037D8: addiu       $s4, $zero, 0x1E
    ctx->r20 = ADD32(0, 0X1E);
L_430037DC:
    // 0x430037DC: lw          $a0, 0x58($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X58);
    // 0x430037E0: nop

    // 0x430037E4: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x430037E8: nop

    // 0x430037EC: jalr        $t9
    // 0x430037F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430037F0: nop

    after_6:
    // 0x430037F4: beq         $v0, $zero, L_43003964
    if (ctx->r2 == 0) {
        // 0x430037F8: nop
    
            goto L_43003964;
    }
    // 0x430037F8: nop

    // 0x430037FC: bne         $s0, $s4, L_4300381C
    if (ctx->r16 != ctx->r20) {
        // 0x43003800: nop
    
            goto L_4300381C;
    }
    // 0x43003800: nop

    // 0x43003804: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43003808: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x4300380C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003810: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x43003814: jalr        $t9
    // 0x43003818: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43003818: nop

    after_7:
L_4300381C:
    // 0x4300381C: bne         $s0, $s5, L_4300383C
    if (ctx->r16 != ctx->r21) {
        // 0x43003820: nop
    
            goto L_4300383C;
    }
    // 0x43003820: nop

    // 0x43003824: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43003828: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x4300382C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003830: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x43003834: jalr        $t9
    // 0x43003838: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43003838: nop

    after_8:
L_4300383C:
    // 0x4300383C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x43003840: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x43003844: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43003848: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4300384C: div.s       $f0, $f6, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x43003850: mul.s       $f8, $f26, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x43003854: sub.s       $f10, $f24, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f24.fl - ctx->f8.fl;
    // 0x43003858: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x4300385C: nop

    // 0x43003860: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x43003864: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43003868: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x4300386C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x43003870: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43003874: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43003878: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x4300387C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43003880: addiu       $t2, $v0, 0x140
    ctx->r10 = ADD32(ctx->r2, 0X140);
    // 0x43003884: negu        $t4, $v0
    ctx->r12 = SUB32(0, ctx->r2);
    // 0x43003888: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x4300388C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x43003890: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x43003894: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x43003898: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x4300389C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430038A0: swc1        $f4, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f4.u32l;
    // 0x430038A4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x430038A8: sub.s       $f18, $f30, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f30.fl - ctx->f16.fl;
    // 0x430038AC: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x430038B0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x430038B4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x430038B8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x430038BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x430038C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x430038C4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x430038C8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x430038CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430038D0: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x430038D4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430038D8: addiu       $t8, $v1, 0xF0
    ctx->r24 = ADD32(ctx->r3, 0XF0);
    // 0x430038DC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x430038E0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x430038E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430038E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430038EC: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x430038F0: sra         $t1, $t9, 1
    ctx->r9 = S32(SIGNED(ctx->r25) >> 1);
    // 0x430038F4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x430038F8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x430038FC: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x43003900: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x43003904: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43003908: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x4300390C: swc1        $f16, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f16.u32l;
    // 0x43003910: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003914: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x43003918: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x4300391C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43003920: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43003924: lw          $a1, 0xA8($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XA8);
    // 0x43003928: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x4300392C: sw          $s6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r22;
    // 0x43003930: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x43003934: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003938: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x4300393C: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x43003940: lw          $t9, 0x98($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X98);
    // 0x43003944: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x43003948: jalr        $t9
    // 0x4300394C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x4300394C: nop

    after_9:
    // 0x43003950: jal         0x43009B08
    // 0x43003954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_10;
    // 0x43003954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x43003958: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4300395C: bne         $s0, $s7, L_430037DC
    if (ctx->r16 != ctx->r23) {
        // 0x43003960: nop
    
            goto L_430037DC;
    }
    // 0x43003960: nop

L_43003964:
    // 0x43003964: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x43003968: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4300396C: jal         0x43000DC0
    // 0x43003970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_11;
    // 0x43003970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x43003974: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x43003978: jal         0x43006484
    // 0x4300397C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    ovl_boss_devil_6484(rdram, ctx);
        goto after_12;
    // 0x4300397C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    after_12:
    // 0x43003980: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003984: lw          $t7, -0x453C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X453C);
    // 0x43003988: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x4300398C: beq         $t7, $zero, L_4300399C
    if (ctx->r15 == 0) {
        // 0x43003990: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_4300399C;
    }
    // 0x43003990: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x43003994: b           L_4300399C
    // 0x43003998: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
        goto L_4300399C;
    // 0x43003998: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
L_4300399C:
    // 0x4300399C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x430039A0: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430039A4: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x430039A8: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430039AC: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x430039B0: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430039B4: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x430039B8: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x430039BC: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x430039C0: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430039C4: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x430039C8: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x430039CC: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x430039D0: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x430039D4: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x430039D8: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x430039DC: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x430039E0: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x430039E4: lw          $s6, 0x74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X74);
    // 0x430039E8: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x430039EC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x430039F0: jr          $ra
    // 0x430039F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430039F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_devil_39F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430039F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430039FC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x43003A00: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x43003A04: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x43003A08: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x43003A0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43003A10: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x43003A14: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x43003A18: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43003A1C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003A20: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43003A24: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003A28: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43003A2C: blez        $a1, L_43003A94
    if (SIGNED(ctx->r5) <= 0) {
        // 0x43003A30: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43003A94;
    }
    // 0x43003A30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43003A34: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x43003A38: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x43003A3C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43003A40: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
L_43003A44:
    // 0x43003A44: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x43003A48: nop

    // 0x43003A4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43003A50: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x43003A54: nop

    // 0x43003A58: div.s       $f2, $f10, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f22.fl);
    // 0x43003A5C: beq         $s3, $zero, L_43003A68
    if (ctx->r19 == 0) {
        // 0x43003A60: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_43003A68;
    }
    // 0x43003A60: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x43003A64: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
L_43003A68:
    // 0x43003A68: lw          $t9, 0x50($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X50);
    // 0x43003A6C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003A70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43003A74: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43003A78: jalr        $t9
    // 0x43003A7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003A7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x43003A80: jal         0x43009B08
    // 0x43003A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_1;
    // 0x43003A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x43003A88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003A8C: bne         $s0, $s2, L_43003A44
    if (ctx->r16 != ctx->r18) {
        // 0x43003A90: nop
    
            goto L_43003A44;
    }
    // 0x43003A90: nop

L_43003A94:
    // 0x43003A94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43003A98: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43003A9C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43003AA0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43003AA4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003AA8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x43003AAC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x43003AB0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x43003AB4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x43003AB8: jr          $ra
    // 0x43003ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43003ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_devil_3AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43003AC4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43003AC8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43003ACC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003AD0: lw          $a0, -0x451C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X451C);
    // 0x43003AD4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43003AD8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43003ADC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43003AE0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43003AE4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003AE8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43003AEC: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x43003AF0: nop

    // 0x43003AF4: jalr        $t9
    // 0x43003AF8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003AF8: nop

    after_0:
    // 0x43003AFC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003B00: lw          $a0, -0x4548($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4548);
    // 0x43003B04: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43003B08: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003B10: jalr        $t9
    // 0x43003B14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43003B14: nop

    after_1:
    // 0x43003B18: jal         0x43009B08
    // 0x43003B1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_2;
    // 0x43003B1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x43003B20: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003B24: lw          $v0, -0x4838($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4838);
    // 0x43003B28: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43003B2C: lw          $t6, 0x50($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X50);
    // 0x43003B30: addiu       $t7, $t7, 0x1BD8
    ctx->r15 = ADD32(ctx->r15, 0X1BD8);
    // 0x43003B34: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x43003B38: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
    // 0x43003B3C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x43003B40: addiu       $s2, $sp, 0x44
    ctx->r18 = ADD32(ctx->r29, 0X44);
    // 0x43003B44: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x43003B48: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x43003B4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003B50: sw          $t0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r8;
    // 0x43003B54: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43003B58: addiu       $a1, $zero, 0xA3A
    ctx->r5 = ADD32(0, 0XA3A);
    // 0x43003B5C: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x43003B60: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43003B64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003B6C: addiu       $a3, $zero, 0x2710
    ctx->r7 = ADD32(0, 0X2710);
    // 0x43003B70: jal         0x430089B0
    // 0x43003B74: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_3;
    // 0x43003B74: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x43003B78: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003B7C: lwc1        $f0, -0x4A08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4A08);
    // 0x43003B80: lw          $t9, 0x50($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X50);
    // 0x43003B84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003B88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43003B8C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43003B90: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x43003B94: jalr        $t9
    // 0x43003B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43003B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x43003B9C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x43003BA0: jal         0x43000280
    // 0x43003BA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_devil_280(rdram, ctx);
        goto after_5;
    // 0x43003BA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x43003BA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003BAC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003BB0: jal         0x430039F8
    // 0x43003BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_39F8(rdram, ctx);
        goto after_6;
    // 0x43003BB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x43003BB8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x43003BBC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43003BC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43003BC4:
    // 0x43003BC4: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x43003BC8: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x43003BCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43003BD0: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43003BD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003BD8: mul.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x43003BDC: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x43003BE0: jalr        $t9
    // 0x43003BE4: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43003BE4: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    after_7:
    // 0x43003BE8: jal         0x43009B08
    // 0x43003BEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_8;
    // 0x43003BEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x43003BF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003BF4: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x43003BF8: bne         $at, $zero, L_43003BC4
    if (ctx->r1 != 0) {
        // 0x43003BFC: nop
    
            goto L_43003BC4;
    }
    // 0x43003BFC: nop

    // 0x43003C00: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003C04: lw          $a0, -0x4548($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4548);
    // 0x43003C08: nop

    // 0x43003C0C: lw          $t9, 0xA8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA8);
    // 0x43003C10: nop

    // 0x43003C14: jalr        $t9
    // 0x43003C18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43003C18: nop

    after_9:
    // 0x43003C1C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003C20: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x43003C24: jal         0x430039F8
    // 0x43003C28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_devil_39F8(rdram, ctx);
        goto after_10;
    // 0x43003C28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x43003C2C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003C30: addiu       $v0, $v0, -0x4858
    ctx->r2 = ADD32(ctx->r2, -0X4858);
    // 0x43003C34: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43003C38: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43003C3C: jal         0x43009E34
    // 0x43003C40: nop

    ovl_boss_devil_9E34(rdram, ctx);
        goto after_11;
    // 0x43003C40: nop

    after_11:
    // 0x43003C44: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x43003C48: jal         0x4300ADE0
    // 0x43003C4C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_12;
    // 0x43003C4C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_12:
    // 0x43003C50: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C54: lwc1        $f11, -0x4A00($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4A00);
    // 0x43003C58: lwc1        $f10, -0x49FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X49FC);
    // 0x43003C5C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x43003C60: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x43003C64: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x43003C68: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43003C6C: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x43003C70: jal         0x4300AFA0
    // 0x43003C74: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_13;
    // 0x43003C74: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x43003C78: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C7C: lwc1        $f9, -0x49F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X49F8);
    // 0x43003C80: lwc1        $f8, -0x49F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X49F4);
    // 0x43003C84: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x43003C88: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x43003C8C: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x43003C90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003C94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43003C98: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x43003C9C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x43003CA0: lw          $t9, 0x48($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X48);
    // 0x43003CA4: nop

    // 0x43003CA8: jalr        $t9
    // 0x43003CAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x43003CAC: nop

    after_14:
    // 0x43003CB0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43003CB4: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43003CB8: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    // 0x43003CBC: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43003CC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003CC4: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x43003CC8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43003CCC: jalr        $t9
    // 0x43003CD0: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x43003CD0: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    after_15:
    // 0x43003CD4: lw          $t9, 0x94($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X94);
    // 0x43003CD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003CDC: jalr        $t9
    // 0x43003CE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x43003CE0: nop

    after_16:
    // 0x43003CE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003CE8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003CEC: jal         0x430039F8
    // 0x43003CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_39F8(rdram, ctx);
        goto after_17;
    // 0x43003CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x43003CF4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x43003CF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43003CFC: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x43003D00: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x43003D04: nop

    // 0x43003D08: sw          $t2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r10;
    // 0x43003D0C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43003D10: nop

    // 0x43003D14: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x43003D18: addiu       $s2, $zero, 0xF
    ctx->r18 = ADD32(0, 0XF);
L_43003D1C:
    // 0x43003D1C: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x43003D20: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x43003D24: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43003D28: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43003D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003D30: mul.s       $f16, $f20, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x43003D34: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x43003D38: jalr        $t9
    // 0x43003D3C: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x43003D3C: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    after_18:
    // 0x43003D40: jal         0x43009B08
    // 0x43003D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_19;
    // 0x43003D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x43003D48: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003D4C: bne         $s0, $s2, L_43003D1C
    if (ctx->r16 != ctx->r18) {
        // 0x43003D50: nop
    
            goto L_43003D1C;
    }
    // 0x43003D50: nop

    // 0x43003D54: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003D58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003D5C: jal         0x430039F8
    // 0x43003D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_devil_39F8(rdram, ctx);
        goto after_20;
    // 0x43003D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x43003D64: lw          $t9, 0x54($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X54);
    // 0x43003D68: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003D6C: jalr        $t9
    // 0x43003D70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x43003D70: nop

    after_21:
    // 0x43003D74: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43003D78: lw          $t4, -0x4838($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4838);
    // 0x43003D7C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x43003D80: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x43003D84: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    // 0x43003D88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003D8C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43003D90: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43003D94: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43003D98: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43003D9C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43003DA0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43003DA4: jr          $ra
    // 0x43003DA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43003DA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_devil_3DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003DAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43003DB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003DB4: lwc1        $f4, -0x49F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X49F0);
    // 0x43003DB8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x43003DBC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x43003DC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003DC4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43003DC8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x43003DCC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x43003DD0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43003DD4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43003DD8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43003DDC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43003DE0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003DE4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43003DE8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003DEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43003DF0: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003DF4: addiu       $s0, $s0, -0x4530
    ctx->r16 = ADD32(ctx->r16, -0X4530);
    // 0x43003DF8: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x43003DFC: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x43003E00: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43003E04: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43003E08: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43003E0C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x43003E10: jal         0x43009E34
    // 0x43003E14: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    ovl_boss_devil_9E34(rdram, ctx);
        goto after_0;
    // 0x43003E14: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x43003E18: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43003E1C: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43003E20: jal         0x43009E34
    // 0x43003E24: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    ovl_boss_devil_9E34(rdram, ctx);
        goto after_1;
    // 0x43003E24: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_1:
    // 0x43003E28: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43003E2C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x43003E30: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x43003E34: jalr        $t9
    // 0x43003E38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43003E38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x43003E3C: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003E40: lw          $s0, -0x4548($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4548);
    // 0x43003E44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43003E48: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43003E4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003E50: jalr        $t9
    // 0x43003E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43003E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43003E58: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003E5C: lw          $s0, -0x4548($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4548);
    // 0x43003E60: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    // 0x43003E64: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x43003E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003E6C: jalr        $t9
    // 0x43003E70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43003E70: nop

    after_4:
    // 0x43003E74: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003E78: lw          $s0, -0x4548($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4548);
    // 0x43003E7C: nop

    // 0x43003E80: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x43003E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003E88: jalr        $t9
    // 0x43003E8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43003E8C: nop

    after_5:
    // 0x43003E90: jal         0x43000244
    // 0x43003E94: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    ovl_boss_devil_244(rdram, ctx);
        goto after_6;
    // 0x43003E94: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_6:
    // 0x43003E98: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43003E9C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43003EA0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003EA4: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43003EA8: lwc1        $f22, -0x49EC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X49EC);
    // 0x43003EAC: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x43003EB0: addiu       $s2, $s2, -0x4538
    ctx->r18 = ADD32(ctx->r18, -0X4538);
L_43003EB4:
    // 0x43003EB4: bne         $s0, $zero, L_43003ED4
    if (ctx->r16 != 0) {
        // 0x43003EB8: nop
    
            goto L_43003ED4;
    }
    // 0x43003EB8: nop

    // 0x43003EBC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x43003EC0: nop

    // 0x43003EC4: beq         $t6, $zero, L_43003F10
    if (ctx->r14 == 0) {
        // 0x43003EC8: nop
    
            goto L_43003F10;
    }
    // 0x43003EC8: nop

    // 0x43003ECC: b           L_43003ED8
    // 0x43003ED0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
        goto L_43003ED8;
    // 0x43003ED0: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_43003ED4:
    // 0x43003ED4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43003ED8:
    // 0x43003ED8: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43003EDC: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x43003EE0: jalr        $t9
    // 0x43003EE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43003EE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x43003EE8: lw          $t9, 0xA0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA0);
    // 0x43003EEC: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x43003EF0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43003EF4: jalr        $t9
    // 0x43003EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43003EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x43003EFC: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x43003F00: jal         0x43009B08
    // 0x43003F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_9;
    // 0x43003F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x43003F08: b           L_43003EB4
    // 0x43003F0C: nop

        goto L_43003EB4;
    // 0x43003F0C: nop

L_43003F10:
    // 0x43003F10: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003F14: lwc1        $f8, -0x49E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X49E8);
    // 0x43003F18: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003F1C: swc1        $f8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f8.u32l;
    // 0x43003F20: lw          $s0, -0x4548($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4548);
    // 0x43003F24: nop

    // 0x43003F28: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    // 0x43003F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003F30: jalr        $t9
    // 0x43003F34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43003F34: nop

    after_10:
    // 0x43003F38: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003F3C: lw          $s0, -0x4548($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4548);
    // 0x43003F40: nop

    // 0x43003F44: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x43003F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003F4C: jalr        $t9
    // 0x43003F50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43003F50: nop

    after_11:
    // 0x43003F54: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003F58: lw          $t7, -0x453C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X453C);
    // 0x43003F5C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43003F60: bne         $t7, $zero, L_43003F94
    if (ctx->r15 != 0) {
        // 0x43003F64: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_43003F94;
    }
    // 0x43003F64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43003F68: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43003F6C: lw          $t8, -0x451C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X451C);
    // 0x43003F70: nop

    // 0x43003F74: lw          $t0, 0xAC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XAC);
    // 0x43003F78: nop

    // 0x43003F7C: beq         $t0, $zero, L_43003F8C
    if (ctx->r8 == 0) {
        // 0x43003F80: nop
    
            goto L_43003F8C;
    }
    // 0x43003F80: nop

    // 0x43003F84: b           L_43003F94
    // 0x43003F88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_43003F94;
    // 0x43003F88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_43003F8C:
    // 0x43003F8C: b           L_43003F94
    // 0x43003F90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_43003F94;
    // 0x43003F90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_43003F94:
    // 0x43003F94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43003F98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003F9C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43003FA0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43003FA4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43003FA8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43003FAC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003FB0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003FB4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x43003FB8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x43003FBC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x43003FC0: jr          $ra
    // 0x43003FC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43003FC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_devil_3FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003FC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43003FCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43003FD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43003FD4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003FD8: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43003FDC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43003FE0: lw          $v0, -0x4D68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4D68);
    // 0x43003FE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43003FE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43003FEC: addiu       $s2, $s2, -0x4EC0
    ctx->r18 = ADD32(ctx->r18, -0X4EC0);
    // 0x43003FF0: addiu       $s1, $s1, -0x4538
    ctx->r17 = ADD32(ctx->r17, -0X4538);
    // 0x43003FF4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_43003FF8:
    // 0x43003FF8: beq         $v0, $zero, L_43003FF8
    if (ctx->r2 == 0) {
        // 0x43003FFC: nop
    
            goto L_43003FF8;
    }
    // 0x43003FFC: nop

    // 0x43004000: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004004: addiu       $s0, $t6, -0x4D68
    ctx->r16 = ADD32(ctx->r14, -0X4D68);
    // 0x43004008: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x4300400C: nop

L_43004010:
    // 0x43004010: bne         $v1, $v0, L_4300402C
    if (ctx->r3 != ctx->r2) {
        // 0x43004014: nop
    
            goto L_4300402C;
    }
    // 0x43004014: nop

    // 0x43004018: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x4300401C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x43004020: jalr        $t9
    // 0x43004024: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004024: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    after_0:
    // 0x43004028: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_4300402C:
    // 0x4300402C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43004030: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43004034: bne         $v0, $zero, L_43004010
    if (ctx->r2 != 0) {
        // 0x43004038: nop
    
            goto L_43004010;
    }
    // 0x43004038: nop

    // 0x4300403C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004040: lw          $v0, -0x4D68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4D68);
    // 0x43004044: b           L_43003FF8
    // 0x43004048: nop

        goto L_43003FF8;
    // 0x43004048: nop

    // 0x4300404C: nop

    // 0x43004050: nop

    // 0x43004054: nop

    // 0x43004058: nop

    // 0x4300405C: nop

    // 0x43004060: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004064: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004068: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300406C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43004070: jr          $ra
    // 0x43004074: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004074: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_4078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004078: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300407C: lw          $t6, -0x4EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4EC0);
    // 0x43004080: nop

    // 0x43004084: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43004088: nop

    // 0x4300408C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43004090: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43004094: nop

    // 0x43004098: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x4300409C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x430040A0: jr          $ra
    // 0x430040A4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    return;
    // 0x430040A4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
;}
RECOMP_FUNC void ovl_boss_devil_40A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430040A8: jr          $ra
    // 0x430040AC: nop

    return;
    // 0x430040AC: nop

;}
RECOMP_FUNC void ovl_boss_devil_40B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430040B0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430040B4: lw          $a0, -0x4508($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4508);
    // 0x430040B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430040BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430040C0: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x430040C4: nop

    // 0x430040C8: jalr        $t9
    // 0x430040CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430040CC: nop

    after_0:
    // 0x430040D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430040D4: lw          $a0, -0x4504($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4504);
    // 0x430040D8: nop

    // 0x430040DC: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x430040E0: nop

    // 0x430040E4: jalr        $t9
    // 0x430040E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430040E8: nop

    after_1:
    // 0x430040EC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430040F0: lw          $a0, -0x4510($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4510);
    // 0x430040F4: jal         0x4300082C
    // 0x430040F8: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_2;
    // 0x430040F8: nop

    after_2:
    // 0x430040FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004100: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004104: sw          $zero, -0x4510($at)
    MEM_W(-0X4510, ctx->r1) = 0;
    // 0x43004108: jr          $ra
    // 0x4300410C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4300410C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_devil_4110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004110: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004118: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4300411C: jal         0x43007190
    // 0x43004120: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_boss_devil_7190(rdram, ctx);
        goto after_0;
    // 0x43004120: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x43004124: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x43004128: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300412C: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
    // 0x43004130: addiu       $t7, $t7, -0x4CE8
    ctx->r15 = ADD32(ctx->r15, -0X4CE8);
    // 0x43004134: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43004138: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x4300413C: swl         $at, 0x14($v0)
    do_swl(rdram, 0X14, ctx->r2, ctx->r1);
    // 0x43004140: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43004144: addiu       $a1, $a1, -0x4CE4
    ctx->r5 = ADD32(ctx->r5, -0X4CE4);
    // 0x43004148: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x4300414C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43004150: jal         0x43009A30
    // 0x43004154: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_1;
    // 0x43004154: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    after_1:
    // 0x43004158: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4300415C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004160: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004164: addiu       $a0, $a0, -0x4D00
    ctx->r4 = ADD32(ctx->r4, -0X4D00);
    // 0x43004168: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x4300416C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x43004170: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43004174: addiu       $t0, $t0, -0x4848
    ctx->r8 = ADD32(ctx->r8, -0X4848);
    // 0x43004178: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x4300417C: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x43004180: lui         $a2, 0x3D49
    ctx->r6 = S32(0X3D49 << 16);
    // 0x43004184: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x43004188: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x4300418C: ori         $a2, $a2, 0xFDB
    ctx->r6 = ctx->r6 | 0XFDB;
    // 0x43004190: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43004194: jal         0x43004C68
    // 0x43004198: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    ovl_boss_devil_4C68(rdram, ctx);
        goto after_2;
    // 0x43004198: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    after_2:
    // 0x4300419C: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430041A0: addiu       $s1, $s1, -0x4EC0
    ctx->r17 = ADD32(ctx->r17, -0X4EC0);
    // 0x430041A4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x430041A8: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x430041AC: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430041B0: addiu       $a2, $a2, -0x4980
    ctx->r6 = ADD32(ctx->r6, -0X4980);
    // 0x430041B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430041B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430041BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430041C0: jalr        $t9
    // 0x430041C4: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x430041C4: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_3:
    // 0x430041C8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x430041CC: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430041D0: lw          $t5, 0x3C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3C);
    // 0x430041D4: addiu       $t3, $t3, 0x21AC
    ctx->r11 = ADD32(ctx->r11, 0X21AC);
    // 0x430041D8: sw          $t3, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r11;
    // 0x430041DC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x430041E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430041E4: lw          $t9, 0x78($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X78);
    // 0x430041E8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x430041EC: jalr        $t9
    // 0x430041F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x430041F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x430041F4: jal         0x4300606C
    // 0x430041F8: addiu       $a0, $zero, 0x9ED
    ctx->r4 = ADD32(0, 0X9ED);
    ovl_boss_devil_606C(rdram, ctx);
        goto after_5;
    // 0x430041F8: addiu       $a0, $zero, 0x9ED
    ctx->r4 = ADD32(0, 0X9ED);
    after_5:
    // 0x430041FC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004200: addiu       $v1, $v1, -0x4548
    ctx->r3 = ADD32(ctx->r3, -0X4548);
    // 0x43004204: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43004208: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4300420C: addiu       $t6, $t6, 0x1A60
    ctx->r14 = ADD32(ctx->r14, 0X1A60);
    // 0x43004210: sw          $t6, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r14;
    // 0x43004214: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x43004218: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300421C: addiu       $t7, $t7, -0x4EBC
    ctx->r15 = ADD32(ctx->r15, -0X4EBC);
    // 0x43004220: sw          $t7, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r15;
    // 0x43004224: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x43004228: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x4300422C: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x43004230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004234: jalr        $t9
    // 0x43004238: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43004238: nop

    after_6:
    // 0x4300423C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004240: addiu       $v1, $v1, -0x4548
    ctx->r3 = ADD32(ctx->r3, -0X4548);
    // 0x43004244: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x43004248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300424C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43004250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004254: jalr        $t9
    // 0x43004258: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43004258: nop

    after_7:
    // 0x4300425C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x43004260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43004264: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    // 0x43004268: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300426C: jalr        $t9
    // 0x43004270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43004270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x43004274: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x43004278: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x4300427C: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x43004280: addiu       $a2, $a2, -0x4980
    ctx->r6 = ADD32(ctx->r6, -0X4980);
    // 0x43004284: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43004288: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x4300428C: jalr        $t9
    // 0x43004290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43004290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43004294: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x43004298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300429C: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    // 0x430042A0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x430042A4: jalr        $t9
    // 0x430042A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x430042A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x430042AC: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x430042B0: lui         $v0, 0x4300
    ctx->r2 = S32(0X4300 << 16);
    // 0x430042B4: lw          $t2, 0x44($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X44);
    // 0x430042B8: addiu       $v0, $v0, 0x1CC8
    ctx->r2 = ADD32(ctx->r2, 0X1CC8);
    // 0x430042BC: sw          $v0, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->r2;
    // 0x430042C0: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x430042C4: lui         $v1, 0x4300
    ctx->r3 = S32(0X4300 << 16);
    // 0x430042C8: lw          $t3, 0x44($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X44);
    // 0x430042CC: addiu       $v1, $v1, 0x2200
    ctx->r3 = ADD32(ctx->r3, 0X2200);
    // 0x430042D0: sw          $v1, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r3;
    // 0x430042D4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x430042D8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x430042DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x430042E0: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x430042E4: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430042E8: addiu       $a2, $a2, -0x4980
    ctx->r6 = ADD32(ctx->r6, -0X4980);
    // 0x430042EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430042F0: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x430042F4: jalr        $t9
    // 0x430042F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x430042F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x430042FC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x43004300: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004304: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
    // 0x43004308: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x4300430C: jalr        $t9
    // 0x43004310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43004310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43004314: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x43004318: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x4300431C: lw          $t8, 0x48($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X48);
    // 0x43004320: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004324: sw          $t5, 0x34($t8)
    MEM_W(0X34, ctx->r24) = ctx->r13;
    // 0x43004328: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x4300432C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x43004330: lw          $t0, 0x48($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X48);
    // 0x43004334: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43004338: sw          $t7, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r15;
    // 0x4300433C: sw          $zero, -0x4520($at)
    MEM_W(-0X4520, ctx->r1) = 0;
    // 0x43004340: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004344: sw          $zero, -0x4540($at)
    MEM_W(-0X4540, ctx->r1) = 0;
    // 0x43004348: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300434C: sw          $zero, -0x453C($at)
    MEM_W(-0X453C, ctx->r1) = 0;
    // 0x43004350: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004354: jal         0x43006AA8
    // 0x43004358: sw          $zero, -0x4538($at)
    MEM_W(-0X4538, ctx->r1) = 0;
    ovl_boss_devil_6AA8(rdram, ctx);
        goto after_13;
    // 0x43004358: sw          $zero, -0x4538($at)
    MEM_W(-0X4538, ctx->r1) = 0;
    after_13:
    // 0x4300435C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004360: jal         0x430098C0
    // 0x43004364: sw          $zero, -0x4518($at)
    MEM_W(-0X4518, ctx->r1) = 0;
    ovl_boss_devil_98C0(rdram, ctx);
        goto after_14;
    // 0x43004364: sw          $zero, -0x4518($at)
    MEM_W(-0X4518, ctx->r1) = 0;
    after_14:
    // 0x43004368: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300436C: addiu       $v1, $v1, -0x451C
    ctx->r3 = ADD32(ctx->r3, -0X451C);
    // 0x43004370: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43004374: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x43004378: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x4300437C: sw          $t2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r10;
    // 0x43004380: addiu       $a0, $a0, 0x3FC8
    ctx->r4 = ADD32(ctx->r4, 0X3FC8);
    // 0x43004384: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43004388: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x4300438C: jal         0x43000820
    // 0x43004390: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_15;
    // 0x43004390: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x43004394: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004398: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x4300439C: addiu       $v1, $v1, -0x4550
    ctx->r3 = ADD32(ctx->r3, -0X4550);
    // 0x430043A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x430043A4: sw          $v0, 0x64($t9)
    MEM_W(0X64, ctx->r25) = ctx->r2;
    // 0x430043A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430043AC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430043B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430043B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430043B8: sw          $zero, -0x4510($at)
    MEM_W(-0X4510, ctx->r1) = 0;
    // 0x430043BC: jr          $ra
    // 0x430043C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430043C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_43C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043C4: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430043C8: lw          $a0, -0x4EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4EC0);
    // 0x430043CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430043D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430043D4: lw          $t9, 0xB0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB0);
    // 0x430043D8: nop

    // 0x430043DC: jalr        $t9
    // 0x430043E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430043E0: nop

    after_0:
    // 0x430043E4: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430043E8: lw          $a0, -0x451C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X451C);
    // 0x430043EC: nop

    // 0x430043F0: beq         $a0, $zero, L_43004408
    if (ctx->r4 == 0) {
        // 0x430043F4: nop
    
            goto L_43004408;
    }
    // 0x430043F4: nop

    // 0x430043F8: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x430043FC: nop

    // 0x43004400: jalr        $t9
    // 0x43004404: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004404: nop

    after_1:
L_43004408:
    // 0x43004408: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x4300440C: lw          $a1, -0x4518($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4518);
    // 0x43004410: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43004414: beq         $a1, $zero, L_43004424
    if (ctx->r5 == 0) {
        // 0x43004418: nop
    
            goto L_43004424;
    }
    // 0x43004418: nop

    // 0x4300441C: jal         0x43000DC0
    // 0x43004420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43004420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_43004424:
    // 0x43004424: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004428: lw          $t6, -0x4510($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4510);
    // 0x4300442C: nop

    // 0x43004430: beq         $t6, $zero, L_43004440
    if (ctx->r14 == 0) {
        // 0x43004434: nop
    
            goto L_43004440;
    }
    // 0x43004434: nop

    // 0x43004438: jal         0x430040B0
    // 0x4300443C: nop

    ovl_boss_devil_40B0(rdram, ctx);
        goto after_3;
    // 0x4300443C: nop

    after_3:
L_43004440:
    // 0x43004440: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004444: lw          $a0, -0x4550($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4550);
    // 0x43004448: jal         0x4300082C
    // 0x4300444C: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_4;
    // 0x4300444C: nop

    after_4:
    // 0x43004450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004458: jr          $ra
    // 0x4300445C: nop

    return;
    // 0x4300445C: nop

;}
RECOMP_FUNC void ovl_boss_devil_4460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004460: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x43004464: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x43004468: nop

    // 0x4300446C: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x43004470: nop

    // 0x43004474: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x43004478: bne         $t6, $zero, L_43004484
    if (ctx->r14 != 0) {
        // 0x4300447C: ori         $t7, $v1, 0x1
        ctx->r15 = ctx->r3 | 0X1;
            goto L_43004484;
    }
    // 0x4300447C: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x43004480: sw          $t7, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r15;
L_43004484:
    // 0x43004484: jr          $ra
    // 0x43004488: nop

    return;
    // 0x43004488: nop

;}
RECOMP_FUNC void ovl_boss_devil_448C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300448C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004494: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43004498: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300449C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x430044A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430044A4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x430044A8: jal         0x4300B110
    // 0x430044AC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_0;
    // 0x430044AC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x430044B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430044B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430044B8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430044BC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x430044C0: nop

    // 0x430044C4: bc1f        L_430044EC
    if (!c1cs) {
        // 0x430044C8: nop
    
            goto L_430044EC;
    }
    // 0x430044C8: nop

    // 0x430044CC: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x430044D0: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x430044D4: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x430044D8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x430044DC: nop

    // 0x430044E0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x430044E4: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x430044E8: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_430044EC:
    // 0x430044EC: lw          $a0, 0x58($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X58);
    // 0x430044F0: nop

    // 0x430044F4: beq         $a0, $zero, L_43004518
    if (ctx->r4 == 0) {
        // 0x430044F8: nop
    
            goto L_43004518;
    }
    // 0x430044F8: nop

    // 0x430044FC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004500: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x43004504: nop

    // 0x43004508: jalr        $t9
    // 0x4300450C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300450C: nop

    after_1:
    // 0x43004510: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004514: nop

L_43004518:
    // 0x43004518: lw          $t6, 0x5C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X5C);
    // 0x4300451C: nop

    // 0x43004520: beq         $t6, $zero, L_43004550
    if (ctx->r14 == 0) {
        // 0x43004524: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004550;
    }
    // 0x43004524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004528: lw          $v0, 0x60($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X60);
    // 0x4300452C: nop

    // 0x43004530: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x43004534: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x43004538: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x4300453C: beq         $t8, $zero, L_43004550
    if (ctx->r24 == 0) {
        // 0x43004540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004550;
    }
    // 0x43004540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004544: jal         0x43009A30
    // 0x43004548: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_2;
    // 0x43004548: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x4300454C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004550:
    // 0x43004550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004554: jr          $ra
    // 0x43004558: nop

    return;
    // 0x43004558: nop

;}
RECOMP_FUNC void ovl_boss_devil_455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300455C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004568: beq         $a1, $zero, L_43004588
    if (ctx->r5 == 0) {
        // 0x4300456C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_43004588;
    }
    // 0x4300456C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43004570: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43004574: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004578: lw          $t9, 0x40($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X40);
    // 0x4300457C: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x43004580: jalr        $t9
    // 0x43004584: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004584: nop

    after_0:
L_43004588:
    // 0x43004588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300458C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004590: jr          $ra
    // 0x43004594: nop

    return;
    // 0x43004594: nop

;}
RECOMP_FUNC void ovl_boss_devil_4598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300459C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430045A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430045A4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x430045A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430045AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430045B0: jal         0x4300448C
    // 0x430045B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_boss_devil_448C(rdram, ctx);
        goto after_0;
    // 0x430045B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x430045B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430045BC: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x430045C0: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_430045C4:
    // 0x430045C4: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    // 0x430045C8: jal         0x4300455C
    // 0x430045CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_devil_455C(rdram, ctx);
        goto after_1;
    // 0x430045CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x430045D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430045D4: bne         $s0, $s3, L_430045C4
    if (ctx->r16 != ctx->r19) {
        // 0x430045D8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_430045C4;
    }
    // 0x430045D8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430045DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430045E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430045E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430045E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x430045EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x430045F0: jr          $ra
    // 0x430045F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430045F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_45F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430045F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430045FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004600: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004604: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004608: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x4300460C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x43004610: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x43004614: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x43004618: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x4300461C: jalr        $t9
    // 0x43004620: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004620: nop

    after_0:
    // 0x43004624: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x43004628: nop

    // 0x4300462C: beq         $t6, $zero, L_43004690
    if (ctx->r14 == 0) {
        // 0x43004630: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004690;
    }
    // 0x43004630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004634: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x43004638: nop

    // 0x4300463C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x43004640: nop

    // 0x43004644: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x43004648: bne         $t0, $zero, L_43004690
    if (ctx->r8 != 0) {
        // 0x4300464C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004690;
    }
    // 0x4300464C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004650: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43004654: jal         0x4300ADE0
    // 0x43004658: nop

    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_1;
    // 0x43004658: nop

    after_1:
    // 0x4300465C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004660: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x43004664: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43004668: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4300466C: jal         0x4300AFA0
    // 0x43004670: nop

    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_2;
    // 0x43004670: nop

    after_2:
    // 0x43004674: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x43004678: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x4300467C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x43004680: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43004684: jal         0x43009A30
    // 0x43004688: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_3;
    // 0x43004688: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x4300468C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004690:
    // 0x43004690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004694: jr          $ra
    // 0x43004698: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43004698: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_469C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300469C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430046A0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430046A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430046A8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x430046AC: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x430046B0: lw          $t7, 0x3C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X3C);
    // 0x430046B4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x430046B8: bne         $t7, $zero, L_430046EC
    if (ctx->r15 != 0) {
        // 0x430046BC: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_430046EC;
    }
    // 0x430046BC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x430046C0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x430046C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x430046C8: jal         0x430053AC
    // 0x430046CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_boss_devil_53AC(rdram, ctx);
        goto after_0;
    // 0x430046CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x430046D0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430046D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430046D8: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430046DC: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x430046E0: addiu       $t8, $t8, 0x4460
    ctx->r24 = ADD32(ctx->r24, 0X4460);
    // 0x430046E4: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
    // 0x430046E8: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
L_430046EC:
    // 0x430046EC: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430046F0: nop

    // 0x430046F4: jalr        $t9
    // 0x430046F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430046F8: nop

    after_1:
    // 0x430046FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004704: jr          $ra
    // 0x43004708: nop

    return;
    // 0x43004708: nop

;}
RECOMP_FUNC void ovl_boss_devil_470C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300470C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004710: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43004714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004718: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4300471C: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    // 0x43004720: nop

    // 0x43004724: beq         $a2, $zero, L_43004750
    if (ctx->r6 == 0) {
        // 0x43004728: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004750;
    }
    // 0x43004728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300472C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x43004730: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x43004734: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43004738: jalr        $t9
    // 0x4300473C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300473C: nop

    after_0:
    // 0x43004740: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x43004744: nop

    // 0x43004748: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x4300474C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004750:
    // 0x43004750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004754: jr          $ra
    // 0x43004758: nop

    return;
    // 0x43004758: nop

;}
RECOMP_FUNC void ovl_boss_devil_475C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300475C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004760: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43004764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004768: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300476C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43004770: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x43004774: nop

    // 0x43004778: beq         $a2, $zero, L_43004794
    if (ctx->r6 == 0) {
        // 0x4300477C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004794;
    }
    // 0x4300477C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004780: lw          $t9, 0x44($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X44);
    // 0x43004784: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43004788: jalr        $t9
    // 0x4300478C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300478C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004794:
    // 0x43004794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004798: jr          $ra
    // 0x4300479C: nop

    return;
    // 0x4300479C: nop

;}
RECOMP_FUNC void ovl_boss_devil_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430047A4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430047A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430047B0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x430047B4: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x430047B8: nop

    // 0x430047BC: beq         $a2, $zero, L_430047D8
    if (ctx->r6 == 0) {
        // 0x430047C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430047D8;
    }
    // 0x430047C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430047C4: lw          $t9, 0x48($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X48);
    // 0x430047C8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x430047CC: jalr        $t9
    // 0x430047D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430047D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x430047D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430047D8:
    // 0x430047D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430047DC: jr          $ra
    // 0x430047E0: nop

    return;
    // 0x430047E0: nop

;}
RECOMP_FUNC void ovl_boss_devil_47E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430047E8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x430047EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430047F4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x430047F8: lw          $a3, 0x3C($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X3C);
    // 0x430047FC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x43004800: beq         $a3, $zero, L_43004828
    if (ctx->r7 == 0) {
        // 0x43004804: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004828;
    }
    // 0x43004804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004808: lw          $t9, 0x58($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X58);
    // 0x4300480C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004810: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x43004814: lw          $t9, 0x50($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X50);
    // 0x43004818: nop

    // 0x4300481C: jalr        $t9
    // 0x43004820: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004820: nop

    after_0:
    // 0x43004824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004828:
    // 0x43004828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300482C: jr          $ra
    // 0x43004830: nop

    return;
    // 0x43004830: nop

;}
