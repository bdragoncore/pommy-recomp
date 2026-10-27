#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_12CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400012CC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x400012D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400012D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x400012D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400012DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400012E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400012E4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x400012E8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x400012EC: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x400012F0: jr          $ra
    // 0x400012F4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x400012F4: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_actor_main_12F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400012F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400012FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40001300: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x40001304: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x40001308: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x4000130C: jr          $ra
    // 0x40001310: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x40001310: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_actor_main_1314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001314: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x40001318: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x4000131C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x40001320: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x40001324: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x40001328: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x4000132C: jr          $ra
    // 0x40001330: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    return;
    // 0x40001330: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_1334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40001338: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x4000133C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40001340: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_40001344:
    // 0x40001344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x40001348: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x4000134C: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x40001350: bne         $v0, $a2, L_40001344
    if (ctx->r2 != ctx->r6) {
        // 0x40001354: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_40001344;
    }
    // 0x40001354: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x40001358: jr          $ra
    // 0x4000135C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x4000135C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_1360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001360: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40001364: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40001368: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4000136C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x40001370: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x40001374: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40001378: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000137C: jal         0x40001258
    // 0x40001380: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40001380: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x40001384: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x40001388: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000138C: jal         0x40001258
    // 0x40001390: addiu       $a2, $s2, 0x34
    ctx->r6 = ADD32(ctx->r18, 0X34);
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40001390: addiu       $a2, $s2, 0x34
    ctx->r6 = ADD32(ctx->r18, 0X34);
    after_1:
    // 0x40001394: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x40001398: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x4000139C: jal         0x40001258
    // 0x400013A0: addiu       $a2, $s2, 0x74
    ctx->r6 = ADD32(ctx->r18, 0X74);
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x400013A0: addiu       $a2, $s2, 0x74
    ctx->r6 = ADD32(ctx->r18, 0X74);
    after_2:
    // 0x400013A4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400013A8: lwc1        $f4, -0x1BE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BE0);
    // 0x400013AC: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x400013B0: jal         0x400012A4
    // 0x400013B4: swc1        $f4, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f4.u32l;
    ovl_actor_main_12A4(rdram, ctx);
        goto after_3;
    // 0x400013B4: swc1        $f4, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f4.u32l;
    after_3:
    // 0x400013B8: jal         0x40001294
    // 0x400013BC: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    ovl_actor_main_1294(rdram, ctx);
        goto after_4;
    // 0x400013BC: addiu       $a0, $s2, 0x94
    ctx->r4 = ADD32(ctx->r18, 0X94);
    after_4:
    // 0x400013C0: jal         0x40001334
    // 0x400013C4: addiu       $a0, $s2, 0x3E8
    ctx->r4 = ADD32(ctx->r18, 0X3E8);
    ovl_actor_main_1334(rdram, ctx);
        goto after_5;
    // 0x400013C4: addiu       $a0, $s2, 0x3E8
    ctx->r4 = ADD32(ctx->r18, 0X3E8);
    after_5:
    // 0x400013C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x400013CC: addiu       $s1, $s2, 0xD0
    ctx->r17 = ADD32(ctx->r18, 0XD0);
L_400013D0:
    // 0x400013D0: jal         0x400012CC
    // 0x400013D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_12CC(rdram, ctx);
        goto after_6;
    // 0x400013D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x400013D8: addiu       $s0, $s0, 0xB0
    ctx->r16 = ADD32(ctx->r16, 0XB0);
    // 0x400013DC: slti        $at, $s0, 0x160
    ctx->r1 = SIGNED(ctx->r16) < 0X160 ? 1 : 0;
    // 0x400013E0: bne         $at, $zero, L_400013D0
    if (ctx->r1 != 0) {
        // 0x400013E4: addiu       $s1, $s1, 0xB0
        ctx->r17 = ADD32(ctx->r17, 0XB0);
            goto L_400013D0;
    }
    // 0x400013E4: addiu       $s1, $s1, 0xB0
    ctx->r17 = ADD32(ctx->r17, 0XB0);
    // 0x400013E8: addiu       $v1, $zero, 0x57
    ctx->r3 = ADD32(0, 0X57);
    // 0x400013EC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x400013F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x400013F4: sw          $zero, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = 0;
    // 0x400013F8: sw          $v1, 0xA0($s2)
    MEM_W(0XA0, ctx->r18) = ctx->r3;
    // 0x400013FC: sw          $v1, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r3;
    // 0x40001400: sw          $v1, 0xA8($s2)
    MEM_W(0XA8, ctx->r18) = ctx->r3;
    // 0x40001404: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x40001408: sw          $v1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r3;
    // 0x4000140C: sw          $v1, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r3;
    // 0x40001410: sw          $v1, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r3;
    // 0x40001414: sw          $v1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r3;
    // 0x40001418: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000141C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x40001420: addiu       $t7, $zero, 0x17
    ctx->r15 = ADD32(0, 0X17);
    // 0x40001424: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x40001428: sw          $zero, 0x90($s2)
    MEM_W(0X90, ctx->r18) = 0;
    // 0x4000142C: sw          $t7, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r15;
    // 0x40001430: sw          $zero, 0x230($s2)
    MEM_W(0X230, ctx->r18) = 0;
    // 0x40001434: sw          $v0, 0x310($s2)
    MEM_W(0X310, ctx->r18) = ctx->r2;
    // 0x40001438: addiu       $a0, $s2, 0x2D4
    ctx->r4 = ADD32(ctx->r18, 0X2D4);
    // 0x4000143C: swc1        $f0, 0x300($s2)
    MEM_W(0X300, ctx->r18) = ctx->f0.u32l;
    // 0x40001440: swc1        $f0, 0x304($s2)
    MEM_W(0X304, ctx->r18) = ctx->f0.u32l;
    // 0x40001444: swc1        $f0, 0x308($s2)
    MEM_W(0X308, ctx->r18) = ctx->f0.u32l;
    // 0x40001448: jal         0x40001314
    // 0x4000144C: swc1        $f0, 0x30C($s2)
    MEM_W(0X30C, ctx->r18) = ctx->f0.u32l;
    ovl_actor_main_1314(rdram, ctx);
        goto after_7;
    // 0x4000144C: swc1        $f0, 0x30C($s2)
    MEM_W(0X30C, ctx->r18) = ctx->f0.u32l;
    after_7:
    // 0x40001450: jal         0x400012F8
    // 0x40001454: addiu       $a0, $s2, 0x2EC
    ctx->r4 = ADD32(ctx->r18, 0X2EC);
    ovl_actor_main_12F8(rdram, ctx);
        goto after_8;
    // 0x40001454: addiu       $a0, $s2, 0x2EC
    ctx->r4 = ADD32(ctx->r18, 0X2EC);
    after_8:
    // 0x40001458: jal         0x4001177C
    // 0x4000145C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_actor_main_1177C(rdram, ctx);
        goto after_9;
    // 0x4000145C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x40001460: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40001464: sw          $zero, 0x314($s2)
    MEM_W(0X314, ctx->r18) = 0;
    // 0x40001468: sw          $zero, 0x318($s2)
    MEM_W(0X318, ctx->r18) = 0;
    // 0x4000146C: sw          $zero, 0x31C($s2)
    MEM_W(0X31C, ctx->r18) = 0;
    // 0x40001470: sw          $zero, 0x3FC($s2)
    MEM_W(0X3FC, ctx->r18) = 0;
    // 0x40001474: swc1        $f6, 0x320($s2)
    MEM_W(0X320, ctx->r18) = ctx->f6.u32l;
    // 0x40001478: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000147C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x40001480: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x40001484: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40001488: jr          $ra
    // 0x4000148C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000148C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001490: addiu       $sp, $sp, -0x428
    ctx->r29 = ADD32(ctx->r29, -0X428);
    // 0x40001494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001498: sw          $a1, 0x42C($sp)
    MEM_W(0X42C, ctx->r29) = ctx->r5;
    // 0x4000149C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x400014A0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x400014A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x400014A8: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x400014AC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x400014B0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x400014B4: jal         0x40001258
    // 0x400014B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x400014B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x400014BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400014C0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x400014C4: jr          $ra
    // 0x400014C8: addiu       $sp, $sp, 0x428
    ctx->r29 = ADD32(ctx->r29, 0X428);
    return;
    // 0x400014C8: addiu       $sp, $sp, 0x428
    ctx->r29 = ADD32(ctx->r29, 0X428);
;}
RECOMP_FUNC void ovl_actor_main_14CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400014CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400014D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400014D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x400014D8: jal         0x40001490
    // 0x400014DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_actor_main_1490(rdram, ctx);
        goto after_0;
    // 0x400014DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x400014E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400014E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400014E8: jr          $ra
    // 0x400014EC: nop

    return;
    // 0x400014EC: nop

;}
RECOMP_FUNC void ovl_actor_main_14F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400014F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400014F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x400014F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x400014FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40001504: jal         0x40001490
    // 0x40001508: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_actor_main_1490(rdram, ctx);
        goto after_0;
    // 0x40001508: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x4000150C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x40001510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001514: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40001518: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4000151C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40001520: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x40001524: jr          $ra
    // 0x40001528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x40001528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_actor_main_152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000152C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40001530: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40001534: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x40001538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000153C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40001540: jal         0x40001490
    // 0x40001544: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_actor_main_1490(rdram, ctx);
        goto after_0;
    // 0x40001544: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x40001548: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x4000154C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40001554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x40001558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4000155C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x40001560: jr          $ra
    // 0x40001564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x40001564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_actor_main_1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000156C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001570: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x40001574: jal         0x40001490
    // 0x40001578: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_actor_main_1490(rdram, ctx);
        goto after_0;
    // 0x40001578: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x4000157C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40001584: jr          $ra
    // 0x40001588: nop

    return;
    // 0x40001588: nop

;}
RECOMP_FUNC void ovl_actor_main_158C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000158C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40001590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001594: jal         0x400014CC
    // 0x40001598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_14CC(rdram, ctx);
        goto after_0;
    // 0x40001598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4000159C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x400015A0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x400015A4: bne         $a1, $t6, L_400015C4
    if (ctx->r5 != ctx->r14) {
        // 0x400015A8: lui         $v1, 0x4002
        ctx->r3 = S32(0X4002 << 16);
            goto L_400015C4;
    }
    // 0x400015A8: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x400015AC: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x400015B0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x400015B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400015B8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x400015BC: b           L_400016A4
    // 0x400015C0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_400016A4;
    // 0x400015C0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_400015C4:
    // 0x400015C4: addiu       $v1, $v0, 0x400
    ctx->r3 = ADD32(ctx->r2, 0X400);
    // 0x400015C8: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x400015CC: nop

    // 0x400015D0: bne         $a1, $t9, L_400015F4
    if (ctx->r5 != ctx->r25) {
        // 0x400015D4: nop
    
            goto L_400015F4;
    }
    // 0x400015D4: nop

    // 0x400015D8: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x400015DC: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x400015E0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x400015E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x400015E8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x400015EC: b           L_400016A4
    // 0x400015F0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_400016A4;
    // 0x400015F0: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_400015F4:
    // 0x400015F4: lw          $t2, 0x40C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X40C);
    // 0x400015F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x400015FC: bne         $a1, $t2, L_40001620
    if (ctx->r5 != ctx->r10) {
        // 0x40001600: addiu       $v1, $v1, 0x400
        ctx->r3 = ADD32(ctx->r3, 0X400);
            goto L_40001620;
    }
    // 0x40001600: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x40001604: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x40001608: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x4000160C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x40001610: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x40001614: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x40001618: b           L_400016A4
    // 0x4000161C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_400016A4;
    // 0x4000161C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_40001620:
    // 0x40001620: lw          $t5, 0x40C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X40C);
    // 0x40001624: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x40001628: bne         $a1, $t5, L_4000164C
    if (ctx->r5 != ctx->r13) {
        // 0x4000162C: nop
    
            goto L_4000164C;
    }
    // 0x4000162C: nop

    // 0x40001630: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x40001634: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x40001638: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x4000163C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x40001640: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x40001644: b           L_400016A4
    // 0x40001648: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_400016A4;
    // 0x40001648: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_4000164C:
    // 0x4000164C: lw          $t8, 0x40C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X40C);
    // 0x40001650: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x40001654: bne         $a1, $t8, L_40001678
    if (ctx->r5 != ctx->r24) {
        // 0x40001658: nop
    
            goto L_40001678;
    }
    // 0x40001658: nop

    // 0x4000165C: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x40001660: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x40001664: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x40001668: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x4000166C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x40001670: b           L_400016A4
    // 0x40001674: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_400016A4;
    // 0x40001674: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_40001678:
    // 0x40001678: lw          $t1, 0x40C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X40C);
    // 0x4000167C: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x40001680: bne         $a1, $t1, L_400016A0
    if (ctx->r5 != ctx->r9) {
        // 0x40001684: lui         $v1, 0x4002
        ctx->r3 = S32(0X4002 << 16);
            goto L_400016A0;
    }
    // 0x40001684: lui         $v1, 0x4002
    ctx->r3 = S32(0X4002 << 16);
    // 0x40001688: addiu       $v1, $v1, 0x1C0
    ctx->r3 = ADD32(ctx->r3, 0X1C0);
    // 0x4000168C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x40001690: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x40001694: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x40001698: b           L_400016A4
    // 0x4000169C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_400016A4;
    // 0x4000169C: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_400016A0:
    // 0x400016A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_400016A4:
    // 0x400016A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400016A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400016AC: jr          $ra
    // 0x400016B0: nop

    return;
    // 0x400016B0: nop

;}
RECOMP_FUNC void ovl_actor_main_16B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400016B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400016B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400016BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x400016C0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x400016C4: jal         0x400014CC
    // 0x400016C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_14CC(rdram, ctx);
        goto after_0;
    // 0x400016C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x400016CC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x400016D0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x400016D4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x400016D8: beq         $a0, $t6, L_400016F8
    if (ctx->r4 == ctx->r14) {
        // 0x400016DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_400016F8;
    }
    // 0x400016DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x400016E0: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x400016E4: nop

    // 0x400016E8: bne         $a1, $t7, L_400016F8
    if (ctx->r5 != ctx->r15) {
        // 0x400016EC: nop
    
            goto L_400016F8;
    }
    // 0x400016EC: nop

    // 0x400016F0: b           L_400017C4
    // 0x400016F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x400016F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_400016F8:
    // 0x400016F8: addiu       $v1, $v0, 0x400
    ctx->r3 = ADD32(ctx->r2, 0X400);
    // 0x400016FC: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x40001700: nop

    // 0x40001704: beq         $a0, $t8, L_40001724
    if (ctx->r4 == ctx->r24) {
        // 0x40001708: nop
    
            goto L_40001724;
    }
    // 0x40001708: nop

    // 0x4000170C: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x40001710: nop

    // 0x40001714: bne         $a1, $t9, L_40001724
    if (ctx->r5 != ctx->r25) {
        // 0x40001718: nop
    
            goto L_40001724;
    }
    // 0x40001718: nop

    // 0x4000171C: b           L_400017C4
    // 0x40001720: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x40001720: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40001724:
    // 0x40001724: lw          $t0, 0x40C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X40C);
    // 0x40001728: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x4000172C: beq         $a0, $t0, L_4000174C
    if (ctx->r4 == ctx->r8) {
        // 0x40001730: nop
    
            goto L_4000174C;
    }
    // 0x40001730: nop

    // 0x40001734: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x40001738: nop

    // 0x4000173C: bne         $a1, $t1, L_4000174C
    if (ctx->r5 != ctx->r9) {
        // 0x40001740: nop
    
            goto L_4000174C;
    }
    // 0x40001740: nop

    // 0x40001744: b           L_400017C4
    // 0x40001748: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x40001748: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4000174C:
    // 0x4000174C: lw          $t2, 0x40C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X40C);
    // 0x40001750: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x40001754: beq         $a0, $t2, L_40001774
    if (ctx->r4 == ctx->r10) {
        // 0x40001758: nop
    
            goto L_40001774;
    }
    // 0x40001758: nop

    // 0x4000175C: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x40001760: nop

    // 0x40001764: bne         $a1, $t3, L_40001774
    if (ctx->r5 != ctx->r11) {
        // 0x40001768: nop
    
            goto L_40001774;
    }
    // 0x40001768: nop

    // 0x4000176C: b           L_400017C4
    // 0x40001770: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x40001770: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40001774:
    // 0x40001774: lw          $t4, 0x40C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40C);
    // 0x40001778: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x4000177C: beq         $a0, $t4, L_4000179C
    if (ctx->r4 == ctx->r12) {
        // 0x40001780: nop
    
            goto L_4000179C;
    }
    // 0x40001780: nop

    // 0x40001784: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x40001788: nop

    // 0x4000178C: bne         $a1, $t5, L_4000179C
    if (ctx->r5 != ctx->r13) {
        // 0x40001790: nop
    
            goto L_4000179C;
    }
    // 0x40001790: nop

    // 0x40001794: b           L_400017C4
    // 0x40001798: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x40001798: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4000179C:
    // 0x4000179C: lw          $t6, 0x40C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X40C);
    // 0x400017A0: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x400017A4: beq         $a0, $t6, L_400017C4
    if (ctx->r4 == ctx->r14) {
        // 0x400017A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_400017C4;
    }
    // 0x400017A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x400017AC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x400017B0: nop

    // 0x400017B4: bne         $a1, $t7, L_400017C4
    if (ctx->r5 != ctx->r15) {
        // 0x400017B8: nop
    
            goto L_400017C4;
    }
    // 0x400017B8: nop

    // 0x400017BC: b           L_400017C4
    // 0x400017C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_400017C4;
    // 0x400017C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_400017C4:
    // 0x400017C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400017C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400017CC: jr          $ra
    // 0x400017D0: nop

    return;
    // 0x400017D0: nop

;}
RECOMP_FUNC void ovl_actor_main_17D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400017D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400017D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400017DC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x400017E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x400017E4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400017E8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x400017EC: jal         0x400006C4
    // 0x400017F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400017F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x400017F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400017F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x400017FC: jr          $ra
    // 0x40001800: nop

    return;
    // 0x40001800: nop

;}
RECOMP_FUNC void ovl_actor_main_1804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001804: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40001808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000180C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40001810: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x40001814: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40001818: beq         $v0, $at, L_40001834
    if (ctx->r2 == ctx->r1) {
        // 0x4000181C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40001834;
    }
    // 0x4000181C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40001820: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40001824: beq         $v0, $at, L_40001834
    if (ctx->r2 == ctx->r1) {
        // 0x40001828: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40001834;
    }
    // 0x40001828: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000182C: bne         $v0, $at, L_40001850
    if (ctx->r2 != ctx->r1) {
        // 0x40001830: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40001850;
    }
    // 0x40001830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40001834:
    // 0x40001834: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x40001838: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x4000183C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x40001840: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40001844: jal         0x400006C4
    // 0x40001848: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40001848: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4000184C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40001850:
    // 0x40001850: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40001854: jr          $ra
    // 0x40001858: nop

    return;
    // 0x40001858: nop

;}
RECOMP_FUNC void ovl_actor_main_185C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000185C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x40001860: jr          $ra
    // 0x40001864: sw          $t6, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r14;
    return;
    // 0x40001864: sw          $t6, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_actor_main_1868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001868: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000186C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001870: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40001874: lw          $t7, 0xBC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XBC);
    // 0x40001878: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4000187C: beq         $a1, $t7, L_400018AC
    if (ctx->r5 == ctx->r15) {
        // 0x40001880: addiu       $a2, $sp, 0x18
        ctx->r6 = ADD32(ctx->r29, 0X18);
            goto L_400018AC;
    }
    // 0x40001880: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x40001884: sw          $a1, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r5;
    // 0x40001888: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x4000188C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x40001890: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x40001894: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40001898: jal         0x400006C4
    // 0x4000189C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000189C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x400018A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x400018A4: jal         0x400087DC
    // 0x400018A8: nop

    ovl_actor_main_87DC(rdram, ctx);
        goto after_1;
    // 0x400018A8: nop

    after_1:
L_400018AC:
    // 0x400018AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400018B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x400018B4: jr          $ra
    // 0x400018B8: nop

    return;
    // 0x400018B8: nop

;}
RECOMP_FUNC void ovl_actor_main_18BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400018BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400018C0: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x400018C4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x400018C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400018CC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x400018D0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x400018D4: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x400018D8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x400018DC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400018E0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x400018E4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x400018E8: jal         0x400006C4
    // 0x400018EC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400018EC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x400018F0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x400018F4: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x400018F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400018FC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x40001900: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x40001904: nop

    // 0x40001908: bc1t        L_40001918
    if (c1cs) {
        // 0x4000190C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40001918;
    }
    // 0x4000190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001910: swc1        $f12, 0x320($t7)
    MEM_W(0X320, ctx->r15) = ctx->f12.u32l;
    // 0x40001914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40001918:
    // 0x40001918: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4000191C: jr          $ra
    // 0x40001920: nop

    return;
    // 0x40001920: nop

;}
RECOMP_FUNC void ovl_actor_main_1924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001924: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40001928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000192C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40001930: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40001934: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x40001938: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x4000193C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x40001940: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40001944: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x40001948: bne         $v0, $zero, L_400019B4
    if (ctx->r2 != 0) {
        // 0x4000194C: ori         $s0, $zero, 0xFFFF
        ctx->r16 = 0 | 0XFFFF;
            goto L_400019B4;
    }
    // 0x4000194C: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x40001950: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40001954: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40001958: bne         $t6, $at, L_40001974
    if (ctx->r14 != ctx->r1) {
        // 0x4000195C: lui         $t0, 0x4002
        ctx->r8 = S32(0X4002 << 16);
            goto L_40001974;
    }
    // 0x4000195C: lui         $t0, 0x4002
    ctx->r8 = S32(0X4002 << 16);
    // 0x40001960: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x40001964: nop

    // 0x40001968: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x4000196C: beq         $at, $zero, L_40001A7C
    if (ctx->r1 == 0) {
        // 0x40001970: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40001A7C;
    }
    // 0x40001970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40001974:
    // 0x40001974: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x40001978: addiu       $t0, $t0, -0x20CC
    ctx->r8 = ADD32(ctx->r8, -0X20CC);
    // 0x4000197C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x40001980: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x40001984: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x40001988: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x4000198C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x40001990: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x40001994: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x40001998: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x4000199C: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x400019A0: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x400019A4: lhu         $a3, 0x0($t3)
    ctx->r7 = MEM_HU(ctx->r11, 0X0);
    // 0x400019A8: lhu         $s0, 0x0($t5)
    ctx->r16 = MEM_HU(ctx->r13, 0X0);
    // 0x400019AC: b           L_400019D0
    // 0x400019B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_400019D0;
    // 0x400019B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400019B4:
    // 0x400019B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400019B8: bne         $v0, $at, L_400019D0
    if (ctx->r2 != ctx->r1) {
        // 0x400019BC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400019D0;
    }
    // 0x400019BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400019C0: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x400019C4: lw          $s0, 0x8($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X8);
    // 0x400019C8: nop

    // 0x400019CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400019D0:
    // 0x400019D0: jal         0x400063F0
    // 0x400019D4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x400019D4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x400019D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x400019DC: beq         $v0, $zero, L_40001A18
    if (ctx->r2 == 0) {
        // 0x400019E0: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_40001A18;
    }
    // 0x400019E0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x400019E4: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x400019E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x400019EC: bne         $v1, $at, L_40001A04
    if (ctx->r3 != ctx->r1) {
        // 0x400019F0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_40001A04;
    }
    // 0x400019F0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x400019F4: addiu       $a3, $zero, 0x3AC
    ctx->r7 = ADD32(0, 0X3AC);
    // 0x400019F8: b           L_40001A14
    // 0x400019FC: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
        goto L_40001A14;
    // 0x400019FC: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
    // 0x40001A00: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_40001A04:
    // 0x40001A04: bne         $v1, $at, L_40001A18
    if (ctx->r3 != ctx->r1) {
        // 0x40001A08: ori         $at, $zero, 0xFFFF
        ctx->r1 = 0 | 0XFFFF;
            goto L_40001A18;
    }
    // 0x40001A08: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x40001A0C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x40001A10: ori         $s0, $zero, 0xFFFF
    ctx->r16 = 0 | 0XFFFF;
L_40001A14:
    // 0x40001A14: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
L_40001A18:
    // 0x40001A18: beq         $a3, $at, L_40001A7C
    if (ctx->r7 == ctx->r1) {
        // 0x40001A1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40001A7C;
    }
    // 0x40001A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40001A20: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x40001A24: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x40001A28: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x40001A2C: jal         0x400006C4
    // 0x40001A30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40001A30: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x40001A34: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x40001A38: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x40001A3C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x40001A40: beq         $t7, $zero, L_40001A78
    if (ctx->r15 == 0) {
        // 0x40001A44: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40001A78;
    }
    // 0x40001A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40001A48: jal         0x40001868
    // 0x40001A4C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_1868(rdram, ctx);
        goto after_2;
    // 0x40001A4C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x40001A50: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x40001A54: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x40001A58: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x40001A5C: jal         0x400018BC
    // 0x40001A60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_3;
    // 0x40001A60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x40001A64: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x40001A68: beq         $s0, $at, L_40001A78
    if (ctx->r16 == ctx->r1) {
        // 0x40001A6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40001A78;
    }
    // 0x40001A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40001A70: jal         0x40008EF8
    // 0x40001A74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_4;
    // 0x40001A74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_40001A78:
    // 0x40001A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40001A7C:
    // 0x40001A7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x40001A80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40001A84: jr          $ra
    // 0x40001A88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x40001A88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_1A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001A8C: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x40001A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40001A94: bne         $v0, $zero, L_40001AAC
    if (ctx->r2 != 0) {
        // 0x40001A98: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40001AAC;
    }
    // 0x40001A98: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40001A9C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x40001AA0: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
    // 0x40001AA4: jr          $ra
    // 0x40001AA8: sw          $a1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r5;
    return;
    // 0x40001AA8: sw          $a1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r5;
L_40001AAC:
    // 0x40001AAC: lw          $t7, 0xA0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XA0);
    // 0x40001AB0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x40001AB4: beq         $a1, $t7, L_40001B94
    if (ctx->r5 == ctx->r15) {
        // 0x40001AB8: slti        $at, $a2, 0x1C
        ctx->r1 = SIGNED(ctx->r6) < 0X1C ? 1 : 0;
            goto L_40001B94;
    }
    // 0x40001AB8: slti        $at, $a2, 0x1C
    ctx->r1 = SIGNED(ctx->r6) < 0X1C ? 1 : 0;
    // 0x40001ABC: bne         $at, $zero, L_40001AAC
    if (ctx->r1 != 0) {
        // 0x40001AC0: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_40001AAC;
    }
    // 0x40001AC0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x40001AC4: lw          $t8, 0xA0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XA0);
    // 0x40001AC8: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    // 0x40001ACC: bne         $a2, $t8, L_40001AE4
    if (ctx->r6 != ctx->r24) {
        // 0x40001AD0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_40001AE4;
    }
    // 0x40001AD0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x40001AD4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x40001AD8: sw          $t9, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r25;
    // 0x40001ADC: jr          $ra
    // 0x40001AE0: sw          $a1, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r5;
    return;
    // 0x40001AE0: sw          $a1, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r5;
L_40001AE4:
    // 0x40001AE4: lw          $t0, 0xA4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XA4);
    // 0x40001AE8: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x40001AEC: bne         $a2, $t0, L_40001B00
    if (ctx->r6 != ctx->r8) {
        // 0x40001AF0: nop
    
            goto L_40001B00;
    }
    // 0x40001AF0: nop

    // 0x40001AF4: sw          $t1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r9;
    // 0x40001AF8: jr          $ra
    // 0x40001AFC: sw          $a1, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r5;
    return;
    // 0x40001AFC: sw          $a1, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r5;
L_40001B00:
    // 0x40001B00: lw          $t2, 0xA8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XA8);
    // 0x40001B04: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x40001B08: bne         $a2, $t2, L_40001B1C
    if (ctx->r6 != ctx->r10) {
        // 0x40001B0C: nop
    
            goto L_40001B1C;
    }
    // 0x40001B0C: nop

    // 0x40001B10: sw          $t3, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r11;
    // 0x40001B14: jr          $ra
    // 0x40001B18: sw          $a1, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r5;
    return;
    // 0x40001B18: sw          $a1, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r5;
L_40001B1C:
    // 0x40001B1C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x40001B20: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x40001B24: addu        $a3, $a0, $t4
    ctx->r7 = ADD32(ctx->r4, ctx->r12);
    // 0x40001B28: lw          $t5, 0xA0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XA0);
    // 0x40001B2C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x40001B30: bne         $a2, $t5, L_40001B44
    if (ctx->r6 != ctx->r13) {
        // 0x40001B34: nop
    
            goto L_40001B44;
    }
    // 0x40001B34: nop

    // 0x40001B38: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
    // 0x40001B3C: jr          $ra
    // 0x40001B40: sw          $a1, 0xA0($a3)
    MEM_W(0XA0, ctx->r7) = ctx->r5;
    return;
    // 0x40001B40: sw          $a1, 0xA0($a3)
    MEM_W(0XA0, ctx->r7) = ctx->r5;
L_40001B44:
    // 0x40001B44: lw          $t7, 0xA4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XA4);
    // 0x40001B48: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x40001B4C: bne         $a2, $t7, L_40001B60
    if (ctx->r6 != ctx->r15) {
        // 0x40001B50: nop
    
            goto L_40001B60;
    }
    // 0x40001B50: nop

    // 0x40001B54: sw          $t8, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r24;
    // 0x40001B58: jr          $ra
    // 0x40001B5C: sw          $a1, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->r5;
    return;
    // 0x40001B5C: sw          $a1, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->r5;
L_40001B60:
    // 0x40001B60: lw          $t9, 0xA8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XA8);
    // 0x40001B64: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x40001B68: bne         $a2, $t9, L_40001B7C
    if (ctx->r6 != ctx->r25) {
        // 0x40001B6C: nop
    
            goto L_40001B7C;
    }
    // 0x40001B6C: nop

    // 0x40001B70: sw          $t0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r8;
    // 0x40001B74: jr          $ra
    // 0x40001B78: sw          $a1, 0xA8($a3)
    MEM_W(0XA8, ctx->r7) = ctx->r5;
    return;
    // 0x40001B78: sw          $a1, 0xA8($a3)
    MEM_W(0XA8, ctx->r7) = ctx->r5;
L_40001B7C:
    // 0x40001B7C: lw          $t1, 0xAC($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XAC);
    // 0x40001B80: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x40001B84: bne         $a2, $t1, L_40001B94
    if (ctx->r6 != ctx->r9) {
        // 0x40001B88: nop
    
            goto L_40001B94;
    }
    // 0x40001B88: nop

    // 0x40001B8C: sw          $t2, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r10;
    // 0x40001B90: sw          $a1, 0xAC($a3)
    MEM_W(0XAC, ctx->r7) = ctx->r5;
L_40001B94:
    // 0x40001B94: jr          $ra
    // 0x40001B98: nop

    return;
    // 0x40001B98: nop

;}
RECOMP_FUNC void ovl_actor_main_1B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001B9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40001BA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40001BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001BA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40001BAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40001BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40001BB4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x40001BB8: jal         0x400014F0
    // 0x40001BBC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    ovl_actor_main_14F0(rdram, ctx);
        goto after_0;
    // 0x40001BBC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x40001BC0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x40001BC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x40001BC8: jal         0x4000152C
    // 0x40001BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_152C(rdram, ctx);
        goto after_1;
    // 0x40001BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x40001BD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x40001BD4: jal         0x40001568
    // 0x40001BD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_actor_main_1568(rdram, ctx);
        goto after_2;
    // 0x40001BD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x40001BDC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x40001BE0: lui         $t7, 0x4002
    ctx->r15 = S32(0X4002 << 16);
    // 0x40001BE4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x40001BE8: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x40001BEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40001BF0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x40001BF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x40001BF8: lw          $t7, -0x20CC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X20CC);
    // 0x40001BFC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x40001C00: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x40001C04: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x40001C08: sw          $t8, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r24;
    // 0x40001C0C: sw          $t9, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r25;
    // 0x40001C10: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x40001C14: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x40001C18: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x40001C1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40001C20: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x40001C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40001C28: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40001C2C: sw          $t0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r8;
L_40001C30:
    // 0x40001C30: lw          $t1, 0x10($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X10);
    // 0x40001C34: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x40001C38: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x40001C3C: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x40001C40: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x40001C44: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x40001C48: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x40001C4C: swc1        $f2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f2.u32l;
    // 0x40001C50: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x40001C54: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x40001C58: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x40001C5C: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x40001C60: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x40001C64: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x40001C68: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x40001C6C: swc1        $f2, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f2.u32l;
    // 0x40001C70: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x40001C74: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x40001C78: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x40001C7C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x40001C80: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x40001C84: bne         $at, $zero, L_40001C30
    if (ctx->r1 != 0) {
        // 0x40001C88: sw          $t2, 0x10($t4)
        MEM_W(0X10, ctx->r12) = ctx->r10;
            goto L_40001C30;
    }
    // 0x40001C88: sw          $t2, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r10;
    // 0x40001C8C: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x40001C90: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x40001C94: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x40001C98: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x40001C9C: lw          $t7, 0x14($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X14);
    // 0x40001CA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40001CA4: ori         $t8, $a1, 0x8000
    ctx->r24 = ctx->r5 | 0X8000;
    // 0x40001CA8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x40001CAC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x40001CB0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40001CB4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_40001CB8:
    // 0x40001CB8: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x40001CBC: nop

    // 0x40001CC0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x40001CC4: nop

    // 0x40001CC8: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x40001CCC: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x40001CD0: lw          $t3, 0x14($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X14);
    // 0x40001CD4: nop

    // 0x40001CD8: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x40001CDC: nop

    // 0x40001CE0: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x40001CE4: swc1        $f2, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f2.u32l;
    // 0x40001CE8: lw          $t5, 0x14($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X14);
    // 0x40001CEC: nop

    // 0x40001CF0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x40001CF4: nop

    // 0x40001CF8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x40001CFC: swc1        $f0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f0.u32l;
    // 0x40001D00: lw          $t8, 0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X14);
    // 0x40001D04: nop

    // 0x40001D08: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x40001D0C: nop

    // 0x40001D10: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x40001D14: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x40001D18: lw          $t1, 0x14($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X14);
    // 0x40001D1C: nop

    // 0x40001D20: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x40001D24: nop

    // 0x40001D28: addu        $t2, $t3, $v1
    ctx->r10 = ADD32(ctx->r11, ctx->r3);
    // 0x40001D2C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x40001D30: bne         $v1, $v0, L_40001CB8
    if (ctx->r3 != ctx->r2) {
        // 0x40001D34: sw          $a1, 0x10($t2)
        MEM_W(0X10, ctx->r10) = ctx->r5;
            goto L_40001CB8;
    }
    // 0x40001D34: sw          $a1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r5;
    // 0x40001D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001D3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40001D40: jr          $ra
    // 0x40001D44: nop

    return;
    // 0x40001D44: nop

;}
RECOMP_FUNC void ovl_actor_main_1D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001D48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40001D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001D50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x40001D54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40001D58: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40001D5C: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x40001D60: jal         0x400060EC
    // 0x40001D64: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_0;
    // 0x40001D64: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x40001D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001D6C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x40001D70: jr          $ra
    // 0x40001D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40001D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_1D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001D78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40001D7C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x40001D80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40001D84: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x40001D88: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x40001D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001D90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x40001D94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x40001D98: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x40001D9C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x40001DA0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x40001DA4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x40001DA8: lw          $t0, 0x1C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C);
    // 0x40001DAC: addiu       $t1, $sp, 0x1C
    ctx->r9 = ADD32(ctx->r29, 0X1C);
    // 0x40001DB0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x40001DB4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40001DB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40001DBC: jal         0x40001258
    // 0x40001DC0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40001DC0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x40001DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001DC8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x40001DCC: jr          $ra
    // 0x40001DD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40001DD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_1DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001DD4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40001DD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40001DDC: nop

    // 0x40001DE0: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x40001DE4: nop

    // 0x40001DE8: bc1f        L_40001E04
    if (!c1cs) {
        // 0x40001DEC: nop
    
            goto L_40001E04;
    }
    // 0x40001DEC: nop

L_40001DF0:
    // 0x40001DF0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x40001DF4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x40001DF8: nop

    // 0x40001DFC: bc1t        L_40001DF0
    if (c1cs) {
        // 0x40001E00: nop
    
            goto L_40001DF0;
    }
    // 0x40001E00: nop

L_40001E04:
    // 0x40001E04: jr          $ra
    // 0x40001E08: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x40001E08: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void ovl_actor_main_1E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001E0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40001E10: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40001E14: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x40001E18: nop

    // 0x40001E1C: bc1f        L_40001E40
    if (!c1cs) {
        // 0x40001E20: nop
    
            goto L_40001E40;
    }
    // 0x40001E20: nop

    // 0x40001E24: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40001E28: nop

L_40001E2C:
    // 0x40001E2C: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x40001E30: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x40001E34: nop

    // 0x40001E38: bc1t        L_40001E2C
    if (c1cs) {
        // 0x40001E3C: nop
    
            goto L_40001E2C;
    }
    // 0x40001E3C: nop

L_40001E40:
    // 0x40001E40: jr          $ra
    // 0x40001E44: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x40001E44: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void ovl_actor_main_1E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40001E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001E50: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x40001E54: jal         0x40001258
    // 0x40001E58: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40001E58: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_0:
    // 0x40001E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40001E64: jr          $ra
    // 0x40001E68: nop

    return;
    // 0x40001E68: nop

;}
RECOMP_FUNC void ovl_actor_main_1E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40001E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40001E74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x40001E78: jal         0x40001258
    // 0x40001E7C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40001E7C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_0:
    // 0x40001E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40001E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40001E88: jr          $ra
    // 0x40001E8C: nop

    return;
    // 0x40001E8C: nop

;}
RECOMP_FUNC void ovl_actor_main_1E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001E90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40001E94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40001E98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40001E9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40001EA0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40001EA4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x40001EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40001EAC: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    // 0x40001EB0: jal         0x40009220
    // 0x40001EB4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    ovl_actor_main_9220(rdram, ctx);
        goto after_0;
    // 0x40001EB4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x40001EB8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x40001EBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40001EC0: beq         $v0, $at, L_40001ED4
    if (ctx->r2 == ctx->r1) {
        // 0x40001EC4: addiu       $t7, $s0, 0x34
        ctx->r15 = ADD32(ctx->r16, 0X34);
            goto L_40001ED4;
    }
    // 0x40001EC4: addiu       $t7, $s0, 0x34
    ctx->r15 = ADD32(ctx->r16, 0X34);
    // 0x40001EC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40001ECC: b           L_40001F50
    // 0x40001ED0: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
        goto L_40001F50;
    // 0x40001ED0: sw          $t6, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r14;
L_40001ED4:
    // 0x40001ED4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x40001ED8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x40001EDC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x40001EE0: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x40001EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40001EE8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x40001EEC: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x40001EF0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x40001EF4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x40001EF8: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x40001EFC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x40001F00: jal         0x40001258
    // 0x40001F04: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40001F04: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x40001F08: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x40001F0C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40001F10: bne         $t9, $at, L_40001F54
    if (ctx->r25 != ctx->r1) {
        // 0x40001F14: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40001F54;
    }
    // 0x40001F14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40001F18: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x40001F1C: nop

    // 0x40001F20: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x40001F24: bne         $t1, $zero, L_40001F3C
    if (ctx->r9 != 0) {
        // 0x40001F28: nop
    
            goto L_40001F3C;
    }
    // 0x40001F28: nop

    // 0x40001F2C: lw          $t2, 0xC0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC0);
    // 0x40001F30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40001F34: bne         $t2, $at, L_40001F54
    if (ctx->r10 != ctx->r1) {
        // 0x40001F38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40001F54;
    }
    // 0x40001F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40001F3C:
    // 0x40001F3C: lw          $t3, 0x6C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X6C);
    // 0x40001F40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40001F44: bne         $t3, $at, L_40001F50
    if (ctx->r11 != ctx->r1) {
        // 0x40001F48: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_40001F50;
    }
    // 0x40001F48: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x40001F4C: sw          $t4, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r12;
L_40001F50:
    // 0x40001F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40001F54:
    // 0x40001F54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40001F58: jr          $ra
    // 0x40001F5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40001F5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_1F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001F60: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x40001F64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40001F68: blez        $a1, L_40001F98
    if (SIGNED(ctx->r5) <= 0) {
        // 0x40001F6C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_40001F98;
    }
    // 0x40001F6C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x40001F70: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x40001F74: addu        $a2, $t6, $a0
    ctx->r6 = ADD32(ctx->r14, ctx->r4);
L_40001F78:
    // 0x40001F78: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x40001F7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x40001F80: andi        $t7, $a0, 0x8000
    ctx->r15 = ctx->r4 & 0X8000;
    // 0x40001F84: bne         $t7, $zero, L_40001F90
    if (ctx->r15 != 0) {
        // 0x40001F88: sltu        $at, $v0, $a2
        ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
            goto L_40001F90;
    }
    // 0x40001F88: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x40001F8C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
L_40001F90:
    // 0x40001F90: bne         $at, $zero, L_40001F78
    if (ctx->r1 != 0) {
        // 0x40001F94: nop
    
            goto L_40001F78;
    }
    // 0x40001F94: nop

L_40001F98:
    // 0x40001F98: jr          $ra
    // 0x40001F9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40001F9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001FA0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x40001FA4: nop

    // 0x40001FA8: swc1        $f4, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f4.u32l;
    // 0x40001FAC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x40001FB0: nop

    // 0x40001FB4: swc1        $f6, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f6.u32l;
    // 0x40001FB8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x40001FBC: jr          $ra
    // 0x40001FC0: swc1        $f8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x40001FC0: swc1        $f8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_actor_main_1FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40001FC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40001FC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40001FCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40001FD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x40001FD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x40001FD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40001FDC: jal         0x400014CC
    // 0x40001FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_14CC(rdram, ctx);
        goto after_0;
    // 0x40001FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x40001FE4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40001FE8: sw          $zero, 0x1C0($at)
    MEM_W(0X1C0, ctx->r1) = 0;
    // 0x40001FEC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40001FF0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40001FF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x40001FF8: sw          $t6, 0x1C4($at)
    MEM_W(0X1C4, ctx->r1) = ctx->r14;
    // 0x40001FFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x40002000: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x40002004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_40002008:
    // 0x40002008: jal         0x40001360
    // 0x4000200C: addiu       $s0, $s0, 0x400
    ctx->r16 = ADD32(ctx->r16, 0X400);
    ovl_actor_main_1360(rdram, ctx);
        goto after_1;
    // 0x4000200C: addiu       $s0, $s0, 0x400
    ctx->r16 = ADD32(ctx->r16, 0X400);
    after_1:
    // 0x40002010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x40002014: bne         $s1, $s2, L_40002008
    if (ctx->r17 != ctx->r18) {
        // 0x40002018: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40002008;
    }
    // 0x40002018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000201C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40002020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40002024: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x40002028: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4000202C: jr          $ra
    // 0x40002030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40002030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_2034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40002038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000203C: jal         0x4000158C
    // 0x40002040: nop

    ovl_actor_main_158C(rdram, ctx);
        goto after_0;
    // 0x40002040: nop

    after_0:
    // 0x40002044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40002048: jal         0x400014CC
    // 0x4000204C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_actor_main_14CC(rdram, ctx);
        goto after_1;
    // 0x4000204C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x40002050: lui         $a0, 0x4002
    ctx->r4 = S32(0X4002 << 16);
    // 0x40002054: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40002058: addiu       $a0, $a0, 0x1C4
    ctx->r4 = ADD32(ctx->r4, 0X1C4);
    // 0x4000205C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x40002060: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x40002064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000206C: jr          $ra
    // 0x40002070: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40002070: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_2074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40002078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000207C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40002080: nop

    // 0x40002084: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x40002088: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x4000208C: jal         0x40002034
    // 0x40002090: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    ovl_actor_main_2034(rdram, ctx);
        goto after_0;
    // 0x40002090: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x40002094: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x40002098: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x4000209C: jal         0x40001B9C
    // 0x400020A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_1B9C(rdram, ctx);
        goto after_1;
    // 0x400020A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x400020A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400020A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x400020AC: jr          $ra
    // 0x400020B0: nop

    return;
    // 0x400020B0: nop

;}
RECOMP_FUNC void ovl_actor_main_20B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400020B4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x400020B8: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x400020BC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x400020C0: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x400020C4: addiu       $a1, $a1, 0x1C4
    ctx->r5 = ADD32(ctx->r5, 0X1C4);
    // 0x400020C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x400020CC: lui         $t7, 0x4002
    ctx->r15 = S32(0X4002 << 16);
    // 0x400020D0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x400020D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x400020D8: lw          $t7, -0x20BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X20BC);
    // 0x400020DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x400020E0: lui         $t9, 0x4001
    ctx->r25 = S32(0X4001 << 16);
    // 0x400020E4: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x400020E8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x400020EC: addiu       $t9, $t9, -0x760C
    ctx->r25 = ADD32(ctx->r25, -0X760C);
    // 0x400020F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400020F4: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    // 0x400020F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400020FC: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x40002100: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x40002104: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x40002108: jr          $ra
    // 0x4000210C: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x4000210C: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_2110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40002114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000211C: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x40002120: jal         0x400007E4
    // 0x40002124: nop

    ovl_actor_main_7E4(rdram, ctx);
        goto after_0;
    // 0x40002124: nop

    after_0:
    // 0x40002128: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x4000212C: nop

    // 0x40002130: sw          $v0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r2;
    // 0x40002134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000213C: jr          $ra
    // 0x40002140: nop

    return;
    // 0x40002140: nop

;}
RECOMP_FUNC void ovl_actor_main_2144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40002148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000214C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40002150: jal         0x400016B4
    // 0x40002154: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40002154: nop

    after_0:
    // 0x40002158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4000215C: jal         0x40002110
    // 0x40002160: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_actor_main_2110(rdram, ctx);
        goto after_1;
    // 0x40002160: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x40002164: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40002168: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4000216C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x40002170: nop

    // 0x40002174: bne         $t6, $at, L_40002188
    if (ctx->r14 != ctx->r1) {
        // 0x40002178: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002188;
    }
    // 0x40002178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000217C: jal         0x4001CE68
    // 0x40002180: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_actor_main_1CE68(rdram, ctx);
        goto after_2;
    // 0x40002180: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x40002184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40002188:
    // 0x40002188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000218C: jr          $ra
    // 0x40002190: nop

    return;
    // 0x40002190: nop

;}
RECOMP_FUNC void ovl_actor_main_2194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40002198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000219C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400021A0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x400021A4: jal         0x400016B4
    // 0x400021A8: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x400021A8: nop

    after_0:
    // 0x400021AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400021B0: beq         $v0, $at, L_40002230
    if (ctx->r2 == ctx->r1) {
        // 0x400021B4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_40002230;
    }
    // 0x400021B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x400021B8: jal         0x400010E8
    // 0x400021BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_actor_main_10E8(rdram, ctx);
        goto after_1;
    // 0x400021BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x400021C0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x400021C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x400021C8: bne         $v0, $at, L_400021F4
    if (ctx->r2 != ctx->r1) {
        // 0x400021CC: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_400021F4;
    }
    // 0x400021CC: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x400021D0: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x400021D4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x400021D8: bne         $t6, $at, L_40002214
    if (ctx->r14 != ctx->r1) {
        // 0x400021DC: nop
    
            goto L_40002214;
    }
    // 0x400021DC: nop

    // 0x400021E0: jal         0x40016FE8
    // 0x400021E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_16FE8(rdram, ctx);
        goto after_2;
    // 0x400021E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x400021E8: b           L_40002214
    // 0x400021EC: nop

        goto L_40002214;
    // 0x400021EC: nop

    // 0x400021F0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_400021F4:
    // 0x400021F4: bne         $v0, $at, L_40002214
    if (ctx->r2 != ctx->r1) {
        // 0x400021F8: nop
    
            goto L_40002214;
    }
    // 0x400021F8: nop

    // 0x400021FC: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x40002200: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40002204: bne         $t7, $at, L_40002214
    if (ctx->r15 != ctx->r1) {
        // 0x40002208: nop
    
            goto L_40002214;
    }
    // 0x40002208: nop

    // 0x4000220C: jal         0x40018BF4
    // 0x40002210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_18BF4(rdram, ctx);
        goto after_3;
    // 0x40002210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_40002214:
    // 0x40002214: lui         $v0, 0x4002
    ctx->r2 = S32(0X4002 << 16);
    // 0x40002218: addiu       $v0, $v0, 0x1C0
    ctx->r2 = ADD32(ctx->r2, 0X1C0);
    // 0x4000221C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x40002220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002224: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40002228: jal         0x40001360
    // 0x4000222C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_actor_main_1360(rdram, ctx);
        goto after_4;
    // 0x4000222C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_4:
L_40002230:
    // 0x40002230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40002234: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40002238: jr          $ra
    // 0x4000223C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4000223C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_2240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40002244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002248: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4000224C: nop

    // 0x40002250: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x40002254: nop

    // 0x40002258: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x4000225C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40002260: jal         0x400016B4
    // 0x40002264: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40002264: nop

    after_0:
    // 0x40002268: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000226C: beq         $v0, $at, L_40002298
    if (ctx->r2 == ctx->r1) {
        // 0x40002270: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40002298;
    }
    // 0x40002270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40002274: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40002278: jal         0x40011794
    // 0x4000227C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_actor_main_11794(rdram, ctx);
        goto after_1;
    // 0x4000227C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x40002280: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x40002284: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x40002288: beq         $v0, $at, L_40002298
    if (ctx->r2 == ctx->r1) {
        // 0x4000228C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_40002298;
    }
    // 0x4000228C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x40002290: jal         0x400119C4
    // 0x40002294: nop

    ovl_actor_main_119C4(rdram, ctx);
        goto after_2;
    // 0x40002294: nop

    after_2:
L_40002298:
    // 0x40002298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000229C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x400022A0: jr          $ra
    // 0x400022A4: nop

    return;
    // 0x400022A4: nop

;}
RECOMP_FUNC void ovl_actor_main_22A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400022A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x400022AC: bne         $a1, $a3, L_40002320
    if (ctx->r5 != ctx->r7) {
        // 0x400022B0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40002320;
    }
    // 0x400022B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400022B4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x400022B8: nop

    // 0x400022BC: bne         $v0, $zero, L_400022D8
    if (ctx->r2 != 0) {
        // 0x400022C0: nop
    
            goto L_400022D8;
    }
    // 0x400022C0: nop

    // 0x400022C4: sw          $a3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r7;
    // 0x400022C8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x400022CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400022D0: jr          $ra
    // 0x400022D4: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    return;
    // 0x400022D4: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
L_400022D8:
    // 0x400022D8: bne         $a3, $v0, L_40002318
    if (ctx->r7 != ctx->r2) {
        // 0x400022DC: nop
    
            goto L_40002318;
    }
    // 0x400022DC: nop

    // 0x400022E0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x400022E4: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x400022E8: nop

    // 0x400022EC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x400022F0: beq         $at, $zero, L_40002304
    if (ctx->r1 == 0) {
        // 0x400022F4: subu        $t7, $v0, $a1
        ctx->r15 = SUB32(ctx->r2, ctx->r5);
            goto L_40002304;
    }
    // 0x400022F4: subu        $t7, $v0, $a1
    ctx->r15 = SUB32(ctx->r2, ctx->r5);
    // 0x400022F8: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x400022FC: jr          $ra
    // 0x40002300: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40002300: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40002304:
    // 0x40002304: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x40002308: bne         $at, $zero, L_400023A8
    if (ctx->r1 != 0) {
        // 0x4000230C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_400023A8;
    }
    // 0x4000230C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40002310: jr          $ra
    // 0x40002314: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    return;
    // 0x40002314: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
L_40002318:
    // 0x40002318: jr          $ra
    // 0x4000231C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x4000231C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_40002320:
    // 0x40002320: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x40002324: bne         $a1, $t0, L_40002368
    if (ctx->r5 != ctx->r8) {
        // 0x40002328: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40002368;
    }
    // 0x40002328: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000232C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40002330: nop

    // 0x40002334: beq         $v0, $zero, L_4000234C
    if (ctx->r2 == 0) {
        // 0x40002338: nop
    
            goto L_4000234C;
    }
    // 0x40002338: nop

    // 0x4000233C: beq         $a3, $v0, L_4000234C
    if (ctx->r7 == ctx->r2) {
        // 0x40002340: nop
    
            goto L_4000234C;
    }
    // 0x40002340: nop

    // 0x40002344: bne         $t0, $v0, L_40002360
    if (ctx->r8 != ctx->r2) {
        // 0x40002348: nop
    
            goto L_40002360;
    }
    // 0x40002348: nop

L_4000234C:
    // 0x4000234C: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
    // 0x40002350: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x40002354: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x40002358: jr          $ra
    // 0x4000235C: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x4000235C: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
L_40002360:
    // 0x40002360: jr          $ra
    // 0x40002364: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x40002364: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_40002368:
    // 0x40002368: bne         $a1, $at, L_4000239C
    if (ctx->r5 != ctx->r1) {
        // 0x4000236C: nop
    
            goto L_4000239C;
    }
    // 0x4000236C: nop

    // 0x40002370: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x40002374: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x40002378: bne         $t0, $t8, L_40002390
    if (ctx->r8 != ctx->r24) {
        // 0x4000237C: nop
    
            goto L_40002390;
    }
    // 0x4000237C: nop

    // 0x40002380: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x40002384: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x40002388: jr          $ra
    // 0x4000238C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x4000238C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_40002390:
    // 0x40002390: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40002394: jr          $ra
    // 0x40002398: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x40002398: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
L_4000239C:
    // 0x4000239C: bne         $a1, $zero, L_400023A8
    if (ctx->r5 != 0) {
        // 0x400023A0: nop
    
            goto L_400023A8;
    }
    // 0x400023A0: nop

    // 0x400023A4: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
L_400023A8:
    // 0x400023A8: jr          $ra
    // 0x400023AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400023AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_23B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400023B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400023B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400023B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400023BC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x400023C0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x400023C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400023C8: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x400023CC: nop

    // 0x400023D0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x400023D4: beq         $t8, $zero, L_400024A0
    if (ctx->r24 == 0) {
        // 0x400023D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400024A0;
    }
    // 0x400023D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400023DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400023E0: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x400023E4: nop

    // 0x400023E8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x400023EC: nop

    // 0x400023F0: bc1t        L_400024A0
    if (c1cs) {
        // 0x400023F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400024A0;
    }
    // 0x400023F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400023F8: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x400023FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40002400: beq         $v0, $at, L_40002410
    if (ctx->r2 == ctx->r1) {
        // 0x40002404: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40002410;
    }
    // 0x40002404: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40002408: bne         $v0, $at, L_400024A0
    if (ctx->r2 != ctx->r1) {
        // 0x4000240C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400024A0;
    }
    // 0x4000240C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002410:
    // 0x40002410: lw          $t9, 0x2F4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2F4);
    // 0x40002414: nop

    // 0x40002418: beq         $t9, $zero, L_40002430
    if (ctx->r25 == 0) {
        // 0x4000241C: nop
    
            goto L_40002430;
    }
    // 0x4000241C: nop

    // 0x40002420: lw          $t0, 0x2EC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2EC);
    // 0x40002424: nop

    // 0x40002428: beq         $a1, $t0, L_400024A0
    if (ctx->r5 == ctx->r8) {
        // 0x4000242C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400024A0;
    }
    // 0x4000242C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002430:
    // 0x40002430: jal         0x400063F0
    // 0x40002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x40002438: beq         $v0, $zero, L_40002450
    if (ctx->r2 == 0) {
        // 0x4000243C: nop
    
            goto L_40002450;
    }
    // 0x4000243C: nop

    // 0x40002440: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x40002444: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40002448: beq         $t1, $at, L_400024A0
    if (ctx->r9 == ctx->r1) {
        // 0x4000244C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400024A0;
    }
    // 0x4000244C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002450:
    // 0x40002450: lw          $t2, 0x2E8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2E8);
    // 0x40002454: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40002458: bne         $t2, $at, L_4000246C
    if (ctx->r10 != ctx->r1) {
        // 0x4000245C: addiu       $a0, $s0, 0x2D4
        ctx->r4 = ADD32(ctx->r16, 0X2D4);
            goto L_4000246C;
    }
    // 0x4000245C: addiu       $a0, $s0, 0x2D4
    ctx->r4 = ADD32(ctx->r16, 0X2D4);
    // 0x40002460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40002464: jal         0x400022A8
    // 0x40002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_22A8(rdram, ctx);
        goto after_1;
    // 0x40002468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_4000246C:
    // 0x4000246C: lw          $t3, 0xC4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC4);
    // 0x40002470: addiu       $a0, $s0, 0x2D4
    ctx->r4 = ADD32(ctx->r16, 0X2D4);
    // 0x40002474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40002478: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4000247C: jal         0x400022A8
    // 0x40002480: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    ovl_actor_main_22A8(rdram, ctx);
        goto after_2;
    // 0x40002480: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_2:
    // 0x40002484: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40002488: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4000248C: bne         $v0, $at, L_40002498
    if (ctx->r2 != ctx->r1) {
        // 0x40002490: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_40002498;
    }
    // 0x40002490: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x40002494: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_40002498:
    // 0x40002498: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x4000249C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400024A0:
    // 0x400024A0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x400024A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400024A8: jr          $ra
    // 0x400024AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x400024AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_24B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400024B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400024B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400024B8: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x400024BC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x400024C0: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x400024C4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x400024C8: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x400024CC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x400024D0: bne         $at, $zero, L_400024E0
    if (ctx->r1 != 0) {
        // 0x400024D4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_400024E0;
    }
    // 0x400024D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400024D8: b           L_400024E4
    // 0x400024DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_400024E4;
    // 0x400024DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400024E0:
    // 0x400024E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_400024E4:
    // 0x400024E4: bne         $v0, $zero, L_4000259C
    if (ctx->r2 != 0) {
        // 0x400024E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x400024E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400024EC: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x400024F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x400024F4: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x400024F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x400024FC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x40002500: nop

    // 0x40002504: bc1f        L_4000259C
    if (!c1cs) {
        // 0x40002508: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x40002508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000250C: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x40002510: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40002514: lwc1        $f18, 0x48($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40002518: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x4000251C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x40002520: nop

    // 0x40002524: bc1f        L_4000259C
    if (!c1cs) {
        // 0x40002528: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x40002528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000252C: lw          $v0, 0xC0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC0);
    // 0x40002530: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40002534: beq         $v0, $at, L_40002598
    if (ctx->r2 == ctx->r1) {
        // 0x40002538: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_40002598;
    }
    // 0x40002538: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4000253C: beq         $v0, $at, L_4000259C
    if (ctx->r2 == ctx->r1) {
        // 0x40002540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x40002540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002544: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x40002548: lw          $t2, 0x2E4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2E4);
    // 0x4000254C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40002550: bne         $a3, $t2, L_40002598
    if (ctx->r7 != ctx->r10) {
        // 0x40002554: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40002598;
    }
    // 0x40002554: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40002558: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x4000255C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x40002560: jal         0x400006C4
    // 0x40002564: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40002564: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x40002568: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x4000256C: bne         $v0, $zero, L_4000259C
    if (ctx->r2 != 0) {
        // 0x40002570: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x40002570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002574: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x40002578: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000257C: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x40002580: nop

    // 0x40002584: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x40002588: nop

    // 0x4000258C: bc1f        L_4000259C
    if (!c1cs) {
        // 0x40002590: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000259C;
    }
    // 0x40002590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002594: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_40002598:
    // 0x40002598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000259C:
    // 0x4000259C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x400025A0: jr          $ra
    // 0x400025A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400025A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_25A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400025A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400025AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400025B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400025B4: beq         $a1, $at, L_40002620
    if (ctx->r5 == ctx->r1) {
        // 0x400025B8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_40002620;
    }
    // 0x400025B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x400025BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x400025C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x400025C4: jal         0x400016B4
    // 0x400025C8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x400025C8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x400025CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x400025D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x400025D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400025D8: beq         $v0, $at, L_40002620
    if (ctx->r2 == ctx->r1) {
        // 0x400025DC: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_40002620;
    }
    // 0x400025DC: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x400025E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400025E4: lw          $t6, 0x90($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X90);
    // 0x400025E8: sw          $a1, 0x34C($a2)
    MEM_W(0X34C, ctx->r6) = ctx->r5;
    // 0x400025EC: or          $t7, $t6, $v1
    ctx->r15 = ctx->r14 | ctx->r3;
    // 0x400025F0: sw          $t7, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->r15;
    // 0x400025F4: swc1        $f0, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f0.u32l;
    // 0x400025F8: swc1        $f0, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f0.u32l;
    // 0x400025FC: lw          $t8, 0x90($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X90);
    // 0x40002600: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x40002604: or          $t9, $t8, $v1
    ctx->r25 = ctx->r24 | ctx->r3;
    // 0x40002608: sw          $t9, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r25;
    // 0x4000260C: sw          $t0, 0x34C($v0)
    MEM_W(0X34C, ctx->r2) = ctx->r8;
    // 0x40002610: lw          $t1, 0x10($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X10);
    // 0x40002614: addiu       $t2, $a2, 0x1C
    ctx->r10 = ADD32(ctx->r6, 0X1C);
    // 0x40002618: sw          $t2, 0x354($v0)
    MEM_W(0X354, ctx->r2) = ctx->r10;
    // 0x4000261C: sw          $t1, 0x350($v0)
    MEM_W(0X350, ctx->r2) = ctx->r9;
L_40002620:
    // 0x40002620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40002628: jr          $ra
    // 0x4000262C: nop

    return;
    // 0x4000262C: nop

;}
RECOMP_FUNC void ovl_actor_main_2630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40002634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40002638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000263C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x40002640: bne         $a1, $at, L_40002650
    if (ctx->r5 != ctx->r1) {
        // 0x40002644: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_40002650;
    }
    // 0x40002644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x40002648: b           L_40002738
    // 0x4000264C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_40002738;
    // 0x4000264C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40002650:
    // 0x40002650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40002654: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40002658: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4000265C: jal         0x400016B4
    // 0x40002660: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40002660: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x40002664: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40002668: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x4000266C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x40002670: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40002674: beq         $v0, $at, L_40002680
    if (ctx->r2 == ctx->r1) {
        // 0x40002678: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_40002680;
    }
    // 0x40002678: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x4000267C: addiu       $a3, $v0, 0x34C
    ctx->r7 = ADD32(ctx->r2, 0X34C);
L_40002680:
    // 0x40002680: lw          $v1, 0x90($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X90);
    // 0x40002684: nop

    // 0x40002688: sll         $t6, $v1, 10
    ctx->r14 = S32(ctx->r3 << 10);
    // 0x4000268C: bgez        $t6, L_40002734
    if (SIGNED(ctx->r14) >= 0) {
        // 0x40002690: sll         $t7, $v1, 9
        ctx->r15 = S32(ctx->r3 << 9);
            goto L_40002734;
    }
    // 0x40002690: sll         $t7, $v1, 9
    ctx->r15 = S32(ctx->r3 << 9);
    // 0x40002694: bgez        $t7, L_40002734
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40002698: addiu       $v0, $a2, 0x34C
        ctx->r2 = ADD32(ctx->r6, 0X34C);
            goto L_40002734;
    }
    // 0x40002698: addiu       $v0, $a2, 0x34C
    ctx->r2 = ADD32(ctx->r6, 0X34C);
    // 0x4000269C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x400026A0: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x400026A4: bne         $a1, $t8, L_40002734
    if (ctx->r5 != ctx->r24) {
        // 0x400026A8: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_40002734;
    }
    // 0x400026A8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x400026AC: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x400026B0: sw          $t9, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->r25;
    // 0x400026B4: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x400026B8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x400026BC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x400026C0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x400026C4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x400026C8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x400026CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x400026D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x400026D4: jal         0x40001A8C
    // 0x400026D8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400026D8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x400026DC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x400026E0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x400026E4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x400026E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400026EC: lwc1        $f6, 0x44($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X44);
    // 0x400026F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x400026F4: swc1        $f4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f4.u32l;
    // 0x400026F8: beq         $a3, $zero, L_4000272C
    if (ctx->r7 == 0) {
        // 0x400026FC: swc1        $f6, 0x38($a2)
        MEM_W(0X38, ctx->r6) = ctx->f6.u32l;
            goto L_4000272C;
    }
    // 0x400026FC: swc1        $f6, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f6.u32l;
    // 0x40002700: lw          $t3, 0x90($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X90);
    // 0x40002704: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x40002708: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000270C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x40002710: sw          $t4, 0x90($t0)
    MEM_W(0X90, ctx->r8) = ctx->r12;
    // 0x40002714: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x40002718: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x4000271C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x40002720: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x40002724: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x40002728: sw          $t6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r14;
L_4000272C:
    // 0x4000272C: b           L_40002738
    // 0x40002730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40002738;
    // 0x40002730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40002734:
    // 0x40002734: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40002738:
    // 0x40002738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000273C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40002740: jr          $ra
    // 0x40002744: nop

    return;
    // 0x40002744: nop

;}
RECOMP_FUNC void ovl_actor_main_2748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002748: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4000274C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40002750: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40002754: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40002758: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4000275C: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x40002760: bgez        $t7, L_40002898
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40002764: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40002898;
    }
    // 0x40002764: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40002768: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x4000276C: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    // 0x40002770: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40002774: jal         0x400006C4
    // 0x40002778: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40002778: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x4000277C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x40002780: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x40002784: bne         $t8, $zero, L_4000289C
    if (ctx->r24 != 0) {
        // 0x40002788: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000278C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x40002790: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40002794: bne         $t9, $at, L_4000289C
    if (ctx->r25 != ctx->r1) {
        // 0x40002798: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000279C: lw          $a0, 0x90($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X90);
    // 0x400027A0: nop

    // 0x400027A4: sll         $t0, $a0, 9
    ctx->r8 = S32(ctx->r4 << 9);
    // 0x400027A8: bltz        $t0, L_4000289C
    if (SIGNED(ctx->r8) < 0) {
        // 0x400027AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x400027AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400027B0: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x400027B4: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x400027B8: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x400027BC: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x400027C0: ori         $v0, $t1, 0x8000
    ctx->r2 = ctx->r9 | 0X8000;
    // 0x400027C4: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x400027C8: bne         $at, $zero, L_400027D8
    if (ctx->r1 != 0) {
        // 0x400027CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_400027D8;
    }
    // 0x400027CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400027D0: b           L_400027D8
    // 0x400027D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_400027D8;
    // 0x400027D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_400027D8:
    // 0x400027D8: bne         $v1, $zero, L_4000289C
    if (ctx->r3 != 0) {
        // 0x400027DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x400027DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400027E0: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x400027E4: andi        $t5, $a0, 0x20
    ctx->r13 = ctx->r4 & 0X20;
    // 0x400027E8: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x400027EC: bne         $at, $zero, L_400027FC
    if (ctx->r1 != 0) {
        // 0x400027F0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_400027FC;
    }
    // 0x400027F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400027F4: b           L_400027FC
    // 0x400027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_400027FC;
    // 0x400027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400027FC:
    // 0x400027FC: bne         $v0, $zero, L_4000289C
    if (ctx->r2 != 0) {
        // 0x40002800: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40002804: bne         $t5, $zero, L_4000289C
    if (ctx->r13 != 0) {
        // 0x40002808: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000280C: lw          $t6, 0x350($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X350);
    // 0x40002810: nop

    // 0x40002814: bne         $t6, $zero, L_4000289C
    if (ctx->r14 != 0) {
        // 0x40002818: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000281C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x40002820: lw          $t8, 0x2EC($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X2EC);
    // 0x40002824: andi        $t9, $a0, 0x80
    ctx->r25 = ctx->r4 & 0X80;
    // 0x40002828: beq         $t7, $t8, L_4000289C
    if (ctx->r15 == ctx->r24) {
        // 0x4000282C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x4000282C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40002830: bne         $t9, $zero, L_40002898
    if (ctx->r25 != 0) {
        // 0x40002834: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_40002898;
    }
    // 0x40002834: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x40002838: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x4000283C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x40002840: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x40002844: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x40002848: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x4000284C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x40002850: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x40002854: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x40002858: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x4000285C: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x40002860: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    // 0x40002864: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40002868: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000286C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x40002870: jal         0x40001258
    // 0x40002874: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40002874: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    after_1:
    // 0x40002878: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x4000287C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x40002880: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40002884: bne         $t5, $at, L_4000289C
    if (ctx->r13 != ctx->r1) {
        // 0x40002888: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000289C;
    }
    // 0x40002888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000288C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x40002890: jal         0x400025A8
    // 0x40002894: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_actor_main_25A8(rdram, ctx);
        goto after_2;
    // 0x40002894: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
L_40002898:
    // 0x40002898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000289C:
    // 0x4000289C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400028A0: jr          $ra
    // 0x400028A4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x400028A4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_actor_main_28A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400028A8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x400028AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400028B0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x400028B4: jal         0x400063F0
    // 0x400028B8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x400028B8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    after_0:
    // 0x400028BC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x400028C0: beq         $v0, $zero, L_40002A6C
    if (ctx->r2 == 0) {
        // 0x400028C4: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_40002A6C;
    }
    // 0x400028C4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x400028C8: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x400028CC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x400028D0: jal         0x400006C4
    // 0x400028D4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x400028D4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x400028D8: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x400028DC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x400028E0: bne         $v0, $zero, L_40002A70
    if (ctx->r2 != 0) {
        // 0x400028E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x400028E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400028E8: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x400028EC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x400028F0: bne         $t6, $at, L_40002938
    if (ctx->r14 != ctx->r1) {
        // 0x400028F4: nop
    
            goto L_40002938;
    }
    // 0x400028F4: nop

    // 0x400028F8: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x400028FC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x40002900: beq         $v0, $zero, L_40002920
    if (ctx->r2 == 0) {
        // 0x40002904: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_40002920;
    }
    // 0x40002904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40002908: beq         $v0, $at, L_40002920
    if (ctx->r2 == ctx->r1) {
        // 0x4000290C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40002920;
    }
    // 0x4000290C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40002910: beq         $v0, $at, L_40002920
    if (ctx->r2 == ctx->r1) {
        // 0x40002914: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40002920;
    }
    // 0x40002914: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40002918: bne         $v0, $at, L_40002A70
    if (ctx->r2 != ctx->r1) {
        // 0x4000291C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x4000291C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40002920:
    // 0x40002920: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    // 0x40002924: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x40002928: jal         0x40007D24
    // 0x4000292C: nop

    ovl_actor_main_7D24(rdram, ctx);
        goto after_2;
    // 0x4000292C: nop

    after_2:
    // 0x40002930: b           L_40002A70
    // 0x40002934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40002A70;
    // 0x40002934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40002938:
    // 0x40002938: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x4000293C: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x40002940: bne         $t7, $zero, L_40002A70
    if (ctx->r15 != 0) {
        // 0x40002944: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x40002944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002948: bne         $v0, $zero, L_40002A70
    if (ctx->r2 != 0) {
        // 0x4000294C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x4000294C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002950: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x40002954: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40002958: bne         $t8, $at, L_40002A70
    if (ctx->r24 != ctx->r1) {
        // 0x4000295C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x4000295C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002960: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x40002964: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x40002968: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4000296C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40002970: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x40002974: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x40002978: ori         $v0, $t9, 0x8000
    ctx->r2 = ctx->r25 | 0X8000;
    // 0x4000297C: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x40002980: bne         $at, $zero, L_40002990
    if (ctx->r1 != 0) {
        // 0x40002984: nop
    
            goto L_40002990;
    }
    // 0x40002984: nop

    // 0x40002988: b           L_40002990
    // 0x4000298C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_40002990;
    // 0x4000298C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_40002990:
    // 0x40002990: bne         $v1, $zero, L_40002A70
    if (ctx->r3 != 0) {
        // 0x40002994: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x40002994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002998: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x4000299C: nop

    // 0x400029A0: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x400029A4: bne         $at, $zero, L_400029B4
    if (ctx->r1 != 0) {
        // 0x400029A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_400029B4;
    }
    // 0x400029A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400029AC: b           L_400029B4
    // 0x400029B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_400029B4;
    // 0x400029B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400029B4:
    // 0x400029B4: bne         $v0, $zero, L_40002A70
    if (ctx->r2 != 0) {
        // 0x400029B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x400029B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400029BC: lw          $t4, 0x90($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X90);
    // 0x400029C0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x400029C4: sll         $t5, $t4, 10
    ctx->r13 = S32(ctx->r12 << 10);
    // 0x400029C8: bltz        $t5, L_40002A6C
    if (SIGNED(ctx->r13) < 0) {
        // 0x400029CC: addiu       $t1, $zero, 0x1B
        ctx->r9 = ADD32(0, 0X1B);
            goto L_40002A6C;
    }
    // 0x400029CC: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x400029D0: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x400029D4: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x400029D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x400029DC: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x400029E0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x400029E4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x400029E8: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x400029EC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x400029F0: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x400029F4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x400029F8: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x400029FC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x40002A00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40002A04: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x40002A08: jal         0x40001258
    // 0x40002A0C: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    ovl_actor_main_1258(rdram, ctx);
        goto after_3;
    // 0x40002A0C: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    after_3:
    // 0x40002A10: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x40002A14: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x40002A18: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40002A1C: beq         $t3, $at, L_40002A6C
    if (ctx->r11 == ctx->r1) {
        // 0x40002A20: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_40002A6C;
    }
    // 0x40002A20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x40002A24: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x40002A28: jal         0x40007BF8
    // 0x40002A2C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    ovl_actor_main_7BF8(rdram, ctx);
        goto after_4;
    // 0x40002A2C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_4:
    // 0x40002A30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40002A34: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x40002A38: beq         $a1, $zero, L_40002A6C
    if (ctx->r5 == 0) {
        // 0x40002A3C: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_40002A6C;
    }
    // 0x40002A3C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x40002A40: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x40002A44: jal         0x40006500
    // 0x40002A48: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    ovl_actor_main_6500(rdram, ctx);
        goto after_5;
    // 0x40002A48: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_5:
    // 0x40002A4C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x40002A50: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x40002A54: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40002A58: bne         $t4, $at, L_40002A70
    if (ctx->r12 != ctx->r1) {
        // 0x40002A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002A70;
    }
    // 0x40002A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002A60: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x40002A64: nop

    // 0x40002A68: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
L_40002A6C:
    // 0x40002A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40002A70:
    // 0x40002A70: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x40002A74: jr          $ra
    // 0x40002A78: nop

    return;
    // 0x40002A78: nop

;}
RECOMP_FUNC void ovl_actor_main_2A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40002A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002A84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40002A88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40002A8C: jal         0x4000079C
    // 0x40002A90: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_actor_main_79C(rdram, ctx);
        goto after_0;
    // 0x40002A90: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x40002A94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40002A98: bne         $v0, $zero, L_40002AC4
    if (ctx->r2 != 0) {
        // 0x40002A9C: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_40002AC4;
    }
    // 0x40002A9C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x40002AA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x40002AA4: jal         0x40001A8C
    // 0x40002AA8: sw          $t6, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r14;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40002AA8: sw          $t6, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r14;
    after_1:
    // 0x40002AAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40002AB0: nop

    // 0x40002AB4: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x40002AB8: nop

    // 0x40002ABC: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x40002AC0: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_40002AC4:
    // 0x40002AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40002ACC: jr          $ra
    // 0x40002AD0: nop

    return;
    // 0x40002AD0: nop

;}
RECOMP_FUNC void ovl_actor_main_2AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002AD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40002AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002ADC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40002AE0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40002AE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40002AE8: bne         $t6, $at, L_40002AF8
    if (ctx->r14 != ctx->r1) {
        // 0x40002AEC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40002AF8;
    }
    // 0x40002AEC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40002AF0: b           L_40002B14
    // 0x40002AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_40002B14;
    // 0x40002AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40002AF8:
    // 0x40002AF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x40002AFC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x40002B00: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x40002B04: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40002B08: jal         0x400006C4
    // 0x40002B0C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40002B0C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40002B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40002B14:
    // 0x40002B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002B18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40002B1C: jr          $ra
    // 0x40002B20: nop

    return;
    // 0x40002B20: nop

;}
RECOMP_FUNC void ovl_actor_main_2B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002B24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40002B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002B2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40002B30: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40002B34: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x40002B38: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x40002B3C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40002B40: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x40002B44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x40002B48: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x40002B4C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x40002B50: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x40002B54: jal         0x400006C4
    // 0x40002B58: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40002B58: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40002B5C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x40002B60: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x40002B64: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x40002B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002B6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40002B70: jr          $ra
    // 0x40002B74: nop

    return;
    // 0x40002B74: nop

;}
RECOMP_FUNC void ovl_actor_main_2B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002B78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40002B7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40002B80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40002B84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40002B88: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x40002B8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40002B90: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x40002B94: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40002B98: jal         0x400006C4
    // 0x40002B9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40002B9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40002BA0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x40002BA4: nop

    // 0x40002BA8: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x40002BAC: beq         $at, $zero, L_40002DE8
    if (ctx->r1 == 0) {
        // 0x40002BB0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40002DE8;
    }
    // 0x40002BB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40002BB4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40002BB8: addu        $at, $at, $t7
    gpr jr_addend_40002BC4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40002BBC: lw          $t7, -0x1BDC($at)
    ctx->r15 = ADD32(ctx->r1, -0X1BDC);
    // 0x40002BC0: nop

    // 0x40002BC4: jr          $t7
    // 0x40002BC8: nop

    switch (jr_addend_40002BC4 >> 2) {
        case 0: goto L_40002DE8; break;
        case 1: goto L_40002BCC; break;
        case 2: goto L_40002DE8; break;
        case 3: goto L_40002DE8; break;
        case 4: goto L_40002DD4; break;
        case 5: goto L_40002D84; break;
        default: switch_error(__func__, 0x40002BC4, 0x4001E424);
    }
    // 0x40002BC8: nop

L_40002BCC:
    // 0x40002BCC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x40002BD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40002BD4: bne         $t8, $a2, L_40002DEC
    if (ctx->r24 != ctx->r6) {
        // 0x40002BD8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40002DEC;
    }
    // 0x40002BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40002BDC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x40002BE0: lw          $t9, 0x2D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2D4);
    // 0x40002BE4: lw          $a1, 0x8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8);
    // 0x40002BE8: nop

    // 0x40002BEC: bne         $a1, $t9, L_40002C10
    if (ctx->r5 != ctx->r25) {
        // 0x40002BF0: nop
    
            goto L_40002C10;
    }
    // 0x40002BF0: nop

    // 0x40002BF4: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x40002BF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40002BFC: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x40002C00: beq         $t1, $zero, L_40002C10
    if (ctx->r9 == 0) {
        // 0x40002C04: nop
    
            goto L_40002C10;
    }
    // 0x40002C04: nop

    // 0x40002C08: b           L_40002DE8
    // 0x40002C0C: sw          $v1, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = ctx->r3;
        goto L_40002DE8;
    // 0x40002C0C: sw          $v1, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = ctx->r3;
L_40002C10:
    // 0x40002C10: lw          $t2, 0x2EC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2EC);
    // 0x40002C14: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x40002C18: bne         $a1, $t2, L_40002CB8
    if (ctx->r5 != ctx->r10) {
        // 0x40002C1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40002CB8;
    }
    // 0x40002C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002C20: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x40002C24: nop

    // 0x40002C28: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x40002C2C: beq         $t4, $zero, L_40002CB8
    if (ctx->r12 == 0) {
        // 0x40002C30: nop
    
            goto L_40002CB8;
    }
    // 0x40002C30: nop

    // 0x40002C34: lw          $t5, 0x2F4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2F4);
    // 0x40002C38: nop

    // 0x40002C3C: bne         $t5, $zero, L_40002CA8
    if (ctx->r13 != 0) {
        // 0x40002C40: nop
    
            goto L_40002CA8;
    }
    // 0x40002C40: nop

    // 0x40002C44: jal         0x400023B0
    // 0x40002C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_23B0(rdram, ctx);
        goto after_1;
    // 0x40002C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40002C4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40002C50: bne         $v0, $v1, L_40002C80
    if (ctx->r2 != ctx->r3) {
        // 0x40002C54: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_40002C80;
    }
    // 0x40002C54: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40002C58: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x40002C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002C60: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x40002C64: jal         0x40002A7C
    // 0x40002C68: nop

    ovl_actor_main_2A7C(rdram, ctx);
        goto after_2;
    // 0x40002C68: nop

    after_2:
    // 0x40002C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002C70: jal         0x40002B24
    // 0x40002C74: addiu       $a1, $s0, 0x2EC
    ctx->r5 = ADD32(ctx->r16, 0X2EC);
    ovl_actor_main_2B24(rdram, ctx);
        goto after_3;
    // 0x40002C74: addiu       $a1, $s0, 0x2EC
    ctx->r5 = ADD32(ctx->r16, 0X2EC);
    after_3:
    // 0x40002C78: b           L_40002DEC
    // 0x40002C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40002DEC;
    // 0x40002C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002C80:
    // 0x40002C80: lw          $t7, 0x2E8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2E8);
    // 0x40002C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002C88: bne         $v1, $t7, L_40002CA0
    if (ctx->r3 != ctx->r15) {
        // 0x40002C8C: nop
    
            goto L_40002CA0;
    }
    // 0x40002C8C: nop

    // 0x40002C90: jal         0x40002B24
    // 0x40002C94: addiu       $a1, $s0, 0x2EC
    ctx->r5 = ADD32(ctx->r16, 0X2EC);
    ovl_actor_main_2B24(rdram, ctx);
        goto after_4;
    // 0x40002C94: addiu       $a1, $s0, 0x2EC
    ctx->r5 = ADD32(ctx->r16, 0X2EC);
    after_4:
    // 0x40002C98: b           L_40002DEC
    // 0x40002C9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40002DEC;
    // 0x40002C9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002CA0:
    // 0x40002CA0: b           L_40002DE8
    // 0x40002CA4: sw          $a2, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r6;
        goto L_40002DE8;
    // 0x40002CA4: sw          $a2, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r6;
L_40002CA8:
    // 0x40002CA8: b           L_40002DE8
    // 0x40002CAC: sw          $a2, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r6;
        goto L_40002DE8;
    // 0x40002CAC: sw          $a2, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r6;
    // 0x40002CB0: b           L_40002DEC
    // 0x40002CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40002DEC;
    // 0x40002CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002CB8:
    // 0x40002CB8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x40002CBC: jal         0x400024B0
    // 0x40002CC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_24B0(rdram, ctx);
        goto after_5;
    // 0x40002CC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_5:
    // 0x40002CC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40002CC8: bne         $v0, $v1, L_40002D38
    if (ctx->r2 != ctx->r3) {
        // 0x40002CCC: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_40002D38;
    }
    // 0x40002CCC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x40002CD0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x40002CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002CD8: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x40002CDC: jal         0x40002AD4
    // 0x40002CE0: nop

    ovl_actor_main_2AD4(rdram, ctx);
        goto after_6;
    // 0x40002CE0: nop

    after_6:
    // 0x40002CE4: beq         $v0, $zero, L_40002D68
    if (ctx->r2 == 0) {
        // 0x40002CE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40002D68;
    }
    // 0x40002CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002CEC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x40002CF0: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x40002CF4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x40002CF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40002CFC: jal         0x4000115C
    // 0x40002D00: sw          $t1, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r9;
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x40002D00: sw          $t1, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r9;
    after_7:
    // 0x40002D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002D08: jal         0x40001A8C
    // 0x40002D0C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_8;
    // 0x40002D0C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_8:
    // 0x40002D10: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40002D14: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x40002D18: jal         0x40000CA0
    // 0x40002D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_9;
    // 0x40002D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x40002D20: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x40002D24: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x40002D28: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x40002D2C: b           L_40002D68
    // 0x40002D30: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
        goto L_40002D68;
    // 0x40002D30: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x40002D34: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_40002D38:
    // 0x40002D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002D3C: lw          $a1, 0x8($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8);
    // 0x40002D40: jal         0x400023B0
    // 0x40002D44: nop

    ovl_actor_main_23B0(rdram, ctx);
        goto after_10;
    // 0x40002D44: nop

    after_10:
    // 0x40002D48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40002D4C: bne         $v0, $v1, L_40002D68
    if (ctx->r2 != ctx->r3) {
        // 0x40002D50: nop
    
            goto L_40002D68;
    }
    // 0x40002D50: nop

    // 0x40002D54: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x40002D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002D5C: lw          $a1, 0x8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X8);
    // 0x40002D60: jal         0x40002A7C
    // 0x40002D64: nop

    ovl_actor_main_2A7C(rdram, ctx);
        goto after_11;
    // 0x40002D64: nop

    after_11:
L_40002D68:
    // 0x40002D68: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x40002D6C: nop

    // 0x40002D70: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x40002D74: bgez        $t7, L_40002DEC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40002D78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40002DEC;
    }
    // 0x40002D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40002D7C: b           L_40002DE8
    // 0x40002D80: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_40002DE8;
    // 0x40002D80: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_40002D84:
    // 0x40002D84: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x40002D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40002D8C: bne         $a2, $t8, L_40002DCC
    if (ctx->r6 != ctx->r24) {
        // 0x40002D90: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_40002DCC;
    }
    // 0x40002D90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40002D94: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x40002D98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40002D9C: bne         $t9, $at, L_40002DCC
    if (ctx->r25 != ctx->r1) {
        // 0x40002DA0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_40002DCC;
    }
    // 0x40002DA0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40002DA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40002DA8: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x40002DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40002DB0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x40002DB4: nop

    // 0x40002DB8: bc1f        L_40002DCC
    if (!c1cs) {
        // 0x40002DBC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_40002DCC;
    }
    // 0x40002DBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40002DC0: jal         0x40001A8C
    // 0x40002DC4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_12;
    // 0x40002DC4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_12:
    // 0x40002DC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_40002DCC:
    // 0x40002DCC: b           L_40002DE8
    // 0x40002DD0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_40002DE8;
    // 0x40002DD0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_40002DD4:
    // 0x40002DD4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x40002DD8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x40002DDC: beq         $t1, $at, L_40002DE8
    if (ctx->r9 == ctx->r1) {
        // 0x40002DE0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_40002DE8;
    }
    // 0x40002DE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x40002DE4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_40002DE8:
    // 0x40002DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40002DEC:
    // 0x40002DEC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x40002DF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40002DF4: jr          $ra
    // 0x40002DF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40002DF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_2DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002DFC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40002E00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40002E04: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x40002E08: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x40002E0C: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x40002E10: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x40002E14: bne         $at, $zero, L_40002E28
    if (ctx->r1 != 0) {
        // 0x40002E18: nop
    
            goto L_40002E28;
    }
    // 0x40002E18: nop

    // 0x40002E1C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x40002E20: sra         $t0, $v1, 6
    ctx->r8 = S32(SIGNED(ctx->r3) >> 6);
    // 0x40002E24: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_40002E28:
    // 0x40002E28: jr          $ra
    // 0x40002E2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40002E2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_2E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002E30: jr          $ra
    // 0x40002E34: nop

    return;
    // 0x40002E34: nop

;}
