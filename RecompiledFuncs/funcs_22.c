#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80048528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004852C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048530: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80048534: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80048538: bne         $a0, $a3, L_80048548
    if (ctx->r4 != ctx->r7) {
        // 0x8004853C: sw          $t0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r8;
            goto L_80048548;
    }
    // 0x8004853C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x80048540: b           L_80048594
    // 0x80048544: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80048594;
    // 0x80048544: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80048548:
    // 0x80048548: jal         0x80048480
    // 0x8004854C: nop

    func_80048480(rdram, ctx);
        goto after_0;
    // 0x8004854C: nop

    after_0:
    // 0x80048550: bne         $v0, $a3, L_80048560
    if (ctx->r2 != ctx->r7) {
        // 0x80048554: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80048560;
    }
    // 0x80048554: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80048558: b           L_80048580
    // 0x8004855C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80048580;
    // 0x8004855C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80048560:
    // 0x80048560: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80048564: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80048568: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8004856C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x80048570: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80048574: addiu       $t7, $t7, 0x2310
    ctx->r15 = ADD32(ctx->r15, 0X2310);
    // 0x80048578: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004857C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_80048580:
    // 0x80048580: bne         $v0, $t0, L_80048590
    if (ctx->r2 != ctx->r8) {
        // 0x80048584: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_80048590;
    }
    // 0x80048584: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80048588: b           L_80048594
    // 0x8004858C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80048594;
    // 0x8004858C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80048590:
    // 0x80048590: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80048594:
    // 0x80048594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004859C: jr          $ra
    // 0x800485A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800485A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800485A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800485A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800485A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800485AC: jal         0x80048528
    // 0x800485B0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x800485B0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800485B4: bne         $v0, $zero, L_800485E4
    if (ctx->r2 != 0) {
        // 0x800485B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800485E4;
    }
    // 0x800485B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800485BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800485C0: nop

    // 0x800485C4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x800485C8: nop

    // 0x800485CC: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800485D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800485D4: nop

    // 0x800485D8: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800485DC: nop

    // 0x800485E0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_800485E4:
    // 0x800485E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800485E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800485EC: jr          $ra
    // 0x800485F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800485F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800485F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800485F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800485F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800485FC: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x80048600: jal         0x800485A4
    // 0x80048604: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_800485A4(rdram, ctx);
        goto after_0;
    // 0x80048604: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_0:
    // 0x80048608: bne         $v0, $zero, L_80048630
    if (ctx->r2 != 0) {
        // 0x8004860C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80048630;
    }
    // 0x8004860C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80048610: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80048614: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80048618: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004861C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80048620: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80048624: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80048628: jal         0x80057CA0
    // 0x8004862C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8004862C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_1:
L_80048630:
    // 0x80048630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048634: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80048638: jr          $ra
    // 0x8004863C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x8004863C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80048640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048648: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8004864C: jal         0x80048528
    // 0x80048650: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80048650: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_0:
    // 0x80048654: bne         $v0, $zero, L_800486CC
    if (ctx->r2 != 0) {
        // 0x80048658: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800486CC;
    }
    // 0x80048658: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004865C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80048660: nop

    // 0x80048664: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80048668: nop

    // 0x8004866C: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x80048670: beq         $t8, $zero, L_80048680
    if (ctx->r24 == 0) {
        // 0x80048674: nop
    
            goto L_80048680;
    }
    // 0x80048674: nop

    // 0x80048678: b           L_800486CC
    // 0x8004867C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_800486CC;
    // 0x8004867C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80048680:
    // 0x80048680: beq         $t1, $zero, L_800486A0
    if (ctx->r9 == 0) {
        // 0x80048684: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800486A0;
    }
    // 0x80048684: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80048688: beq         $t1, $at, L_800486B0
    if (ctx->r9 == ctx->r1) {
        // 0x8004868C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800486B0;
    }
    // 0x8004868C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80048690: beq         $t1, $at, L_800486C0
    if (ctx->r9 == ctx->r1) {
        // 0x80048694: nop
    
            goto L_800486C0;
    }
    // 0x80048694: nop

    // 0x80048698: b           L_800486D0
    // 0x8004869C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800486D0;
    // 0x8004869C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800486A0:
    // 0x800486A0: jal         0x800485F4
    // 0x800486A4: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    func_800485F4(rdram, ctx);
        goto after_1;
    // 0x800486A4: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    after_1:
    // 0x800486A8: b           L_800486CC
    // 0x800486AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800486CC;
    // 0x800486AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800486B0:
    // 0x800486B0: jal         0x800485F4
    // 0x800486B4: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    func_800485F4(rdram, ctx);
        goto after_2;
    // 0x800486B4: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    after_2:
    // 0x800486B8: b           L_800486CC
    // 0x800486BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_800486CC;
    // 0x800486BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800486C0:
    // 0x800486C0: jal         0x800485F4
    // 0x800486C4: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    func_800485F4(rdram, ctx);
        goto after_3;
    // 0x800486C4: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    after_3:
    // 0x800486C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800486CC:
    // 0x800486CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800486D0:
    // 0x800486D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800486D4: jr          $ra
    // 0x800486D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800486D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800486DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800486DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800486E0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800486E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800486E8: beq         $a0, $s1, L_80048720
    if (ctx->r4 == ctx->r17) {
        // 0x800486EC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80048720;
    }
    // 0x800486EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800486F0: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x800486F4: nop

    // 0x800486F8: bne         $a0, $t6, L_80048724
    if (ctx->r4 != ctx->r14) {
        // 0x800486FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048724;
    }
    // 0x800486FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048700: jal         0x8005D128
    // 0x80048704: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    func_8005D128(rdram, ctx);
        goto after_0;
    // 0x80048704: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    after_0:
    // 0x80048708: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004870C: sw          $s1, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r17;
    // 0x80048710: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80048714: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x80048718: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x8004871C: swc1        $f0, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f0.u32l;
L_80048720:
    // 0x80048720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048724:
    // 0x80048724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048728: jr          $ra
    // 0x8004872C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004872C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80048730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048730: jr          $ra
    // 0x80048734: nop

    return;
    // 0x80048734: nop

;}
RECOMP_FUNC void func_80048738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048738: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x8004873C: nop

    // 0x80048740: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80048744: nop

    // 0x80048748: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8004874C: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80048750: nop

    // 0x80048754: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80048758: nop

    // 0x8004875C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80048760: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x80048764: nop

    // 0x80048768: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8004876C: jr          $ra
    // 0x80048770: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80048770: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80048774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048774: jr          $ra
    // 0x80048778: nop

    return;
    // 0x80048778: nop

;}
RECOMP_FUNC void func_8004878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004878C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048794: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80048798: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8004879C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800487A0: jal         0x80048528
    // 0x800487A4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x800487A4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x800487A8: bne         $v0, $zero, L_800487CC
    if (ctx->r2 != 0) {
        // 0x800487AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800487CC;
    }
    // 0x800487AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800487B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800487B4: nop

    // 0x800487B8: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x800487BC: nop

    // 0x800487C0: bne         $t2, $t7, L_800487CC
    if (ctx->r10 != ctx->r15) {
        // 0x800487C4: sw          $t7, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r15;
            goto L_800487CC;
    }
    // 0x800487C4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x800487C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_800487CC:
    // 0x800487CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800487D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800487D4: jr          $ra
    // 0x800487D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800487D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800487DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800487DC: jr          $ra
    // 0x800487E0: nop

    return;
    // 0x800487E0: nop

;}
RECOMP_FUNC void func_800487F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800487F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800487F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800487FC: jal         0x80048528
    // 0x80048800: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80048800: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80048804: bne         $v0, $zero, L_80048848
    if (ctx->r2 != 0) {
        // 0x80048808: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80048848;
    }
    // 0x80048808: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004880C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80048810: nop

    // 0x80048814: lwc1        $f4, 0xC0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC0);
    // 0x80048818: nop

    // 0x8004881C: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x80048820: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80048824: nop

    // 0x80048828: lwc1        $f6, 0xC4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XC4);
    // 0x8004882C: nop

    // 0x80048830: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x80048834: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80048838: nop

    // 0x8004883C: lwc1        $f8, 0xC8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC8);
    // 0x80048840: nop

    // 0x80048844: swc1        $f8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f8.u32l;
L_80048848:
    // 0x80048848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004884C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80048850: jr          $ra
    // 0x80048854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80048854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80048858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048858: jr          $ra
    // 0x8004885C: nop

    return;
    // 0x8004885C: nop

;}
RECOMP_FUNC void func_80048888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004888C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048890: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048894: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80048898: beq         $a1, $at, L_800488AC
    if (ctx->r5 == ctx->r1) {
        // 0x8004889C: nop
    
            goto L_800488AC;
    }
    // 0x8004889C: nop

    // 0x800488A0: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x800488A4: jal         0x8001C424
    // 0x800488A8: nop

    func_8001C424(rdram, ctx);
        goto after_0;
    // 0x800488A8: nop

    after_0:
L_800488AC:
    // 0x800488AC: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x800488B0: jal         0x8001C468
    // 0x800488B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001C468(rdram, ctx);
        goto after_1;
    // 0x800488B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800488B8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800488BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800488C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800488C4: jr          $ra
    // 0x800488C8: nop

    return;
    // 0x800488C8: nop

    // 0x800488CC: jr          $ra
    // 0x800488D0: nop

    return;
    // 0x800488D0: nop

    // 0x800488D4: jr          $ra
    // 0x800488D8: nop

    return;
    // 0x800488D8: nop

    // 0x800488DC: jr          $ra
    // 0x800488E0: nop

    return;
    // 0x800488E0: nop

;}
RECOMP_FUNC void func_800488E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800488E4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800488E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800488EC: jal         0x80048528
    // 0x800488F0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x800488F0: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_0:
    // 0x800488F4: bne         $v0, $zero, L_80048B1C
    if (ctx->r2 != 0) {
        // 0x800488F8: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80048B1C;
    }
    // 0x800488F8: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800488FC: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80048900: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x80048904: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80048908: nop

    // 0x8004890C: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x80048910: bne         $t8, $zero, L_80048B20
    if (ctx->r24 != 0) {
        // 0x80048914: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048B20;
    }
    // 0x80048914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048918: beq         $at, $zero, L_80048B1C
    if (ctx->r1 == 0) {
        // 0x8004891C: sll         $t9, $t1, 2
        ctx->r25 = S32(ctx->r9 << 2);
            goto L_80048B1C;
    }
    // 0x8004891C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80048920: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80048924: addu        $at, $at, $t9
    gpr jr_addend_80048930 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80048928: lw          $t9, 0x5CD0($at)
    ctx->r25 = ADD32(ctx->r1, 0X5CD0);
    // 0x8004892C: nop

    // 0x80048930: jr          $t9
    // 0x80048934: nop

    switch (jr_addend_80048930 >> 2) {
        case 0: goto L_80048938; break;
        case 1: goto L_80048950; break;
        case 2: goto L_80048990; break;
        case 3: goto L_800489AC; break;
        case 4: goto L_80048AF0; break;
        default: switch_error(__func__, 0x80048930, 0x80095CD0);
    }
    // 0x80048934: nop

L_80048938:
    // 0x80048938: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8004893C: lw          $s2, 0x0($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X0);
    // 0x80048940: jal         0x80048888
    // 0x80048944: addiu       $s0, $s1, 0x44
    ctx->r16 = ADD32(ctx->r17, 0X44);
    func_80048888(rdram, ctx);
        goto after_1;
    // 0x80048944: addiu       $s0, $s1, 0x44
    ctx->r16 = ADD32(ctx->r17, 0X44);
    after_1:
    // 0x80048948: b           L_80048B20
    // 0x8004894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80048B20;
    // 0x8004894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048950:
    // 0x80048950: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80048954: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048958: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x8004895C: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x80048960: bne         $s2, $t8, L_80048978
    if (ctx->r18 != ctx->r24) {
        // 0x80048964: addiu       $s0, $s1, 0x44
        ctx->r16 = ADD32(ctx->r17, 0X44);
            goto L_80048978;
    }
    // 0x80048964: addiu       $s0, $s1, 0x44
    ctx->r16 = ADD32(ctx->r17, 0X44);
    // 0x80048968: jal         0x80048888
    // 0x8004896C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    func_80048888(rdram, ctx);
        goto after_2;
    // 0x8004896C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    after_2:
    // 0x80048970: b           L_80048B20
    // 0x80048974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80048B20;
    // 0x80048974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048978:
    // 0x80048978: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x8004897C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048980: jal         0x8001C130
    // 0x80048984: nop

    func_8001C130(rdram, ctx);
        goto after_3;
    // 0x80048984: nop

    after_3:
    // 0x80048988: b           L_80048B20
    // 0x8004898C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80048B20;
    // 0x8004898C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048990:
    // 0x80048990: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80048994: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x80048998: lw          $a0, 0xCC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XCC);
    // 0x8004899C: jal         0x8001C254
    // 0x800489A0: nop

    func_8001C254(rdram, ctx);
        goto after_4;
    // 0x800489A0: nop

    after_4:
    // 0x800489A4: b           L_80048B20
    // 0x800489A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80048B20;
    // 0x800489A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800489AC:
    // 0x800489AC: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x800489B0: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x800489B4: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x800489B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800489BC: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x800489C0: beq         $v0, $zero, L_800489EC
    if (ctx->r2 == 0) {
        // 0x800489C4: addiu       $s0, $s0, 0x48
        ctx->r16 = ADD32(ctx->r16, 0X48);
            goto L_800489EC;
    }
    // 0x800489C4: addiu       $s0, $s0, 0x48
    ctx->r16 = ADD32(ctx->r16, 0X48);
    // 0x800489C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800489CC: beq         $v0, $at, L_80048A00
    if (ctx->r2 == ctx->r1) {
        // 0x800489D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80048A00;
    }
    // 0x800489D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800489D4: beq         $v0, $at, L_80048A38
    if (ctx->r2 == ctx->r1) {
        // 0x800489D8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80048A38;
    }
    // 0x800489D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800489DC: beq         $v0, $at, L_80048A60
    if (ctx->r2 == ctx->r1) {
        // 0x800489E0: nop
    
            goto L_80048A60;
    }
    // 0x800489E0: nop

    // 0x800489E4: b           L_80048B1C
    // 0x800489E8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x800489E8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_800489EC:
    // 0x800489EC: lw          $s2, 0x8($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X8);
    // 0x800489F0: jal         0x80048888
    // 0x800489F4: nop

    func_80048888(rdram, ctx);
        goto after_5;
    // 0x800489F4: nop

    after_5:
    // 0x800489F8: b           L_80048B1C
    // 0x800489FC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x800489FC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80048A00:
    // 0x80048A00: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048A04: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048A08: lw          $a2, 0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X8);
    // 0x80048A0C: bne         $s2, $a1, L_80048A24
    if (ctx->r18 != ctx->r5) {
        // 0x80048A10: nop
    
            goto L_80048A24;
    }
    // 0x80048A10: nop

    // 0x80048A14: jal         0x80048888
    // 0x80048A18: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    func_80048888(rdram, ctx);
        goto after_6;
    // 0x80048A18: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    after_6:
    // 0x80048A1C: b           L_80048B1C
    // 0x80048A20: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x80048A20: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80048A24:
    // 0x80048A24: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048A28: jal         0x8001C130
    // 0x80048A2C: nop

    func_8001C130(rdram, ctx);
        goto after_7;
    // 0x80048A2C: nop

    after_7:
    // 0x80048A30: b           L_80048B1C
    // 0x80048A34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x80048A34: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80048A38:
    // 0x80048A38: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048A3C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048A40: beq         $s2, $a1, L_80048AE8
    if (ctx->r18 == ctx->r5) {
        // 0x80048A44: nop
    
            goto L_80048AE8;
    }
    // 0x80048A44: nop

    // 0x80048A48: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048A4C: jal         0x8001C424
    // 0x80048A50: nop

    func_8001C424(rdram, ctx);
        goto after_8;
    // 0x80048A50: nop

    after_8:
    // 0x80048A54: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80048A58: b           L_80048B1C
    // 0x80048A5C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x80048A5C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80048A60:
    // 0x80048A60: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048A64: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048A68: beq         $s2, $a1, L_80048AE8
    if (ctx->r18 == ctx->r5) {
        // 0x80048A6C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80048AE8;
    }
    // 0x80048A6C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80048A70: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80048A74: lwc1        $f0, 0x8($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80048A78: nop

    // 0x80048A7C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80048A80: nop

    // 0x80048A84: bc1t        L_80048A9C
    if (c1cs) {
        // 0x80048A88: nop
    
            goto L_80048A9C;
    }
    // 0x80048A88: nop

    // 0x80048A8C: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048A90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80048A94: jal         0x80018EF8
    // 0x80048A98: nop

    func_80018EF8(rdram, ctx);
        goto after_9;
    // 0x80048A98: nop

    after_9:
L_80048A9C:
    // 0x80048A9C: lwc1        $f0, 0xC($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0XC);
    // 0x80048AA0: nop

    // 0x80048AA4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80048AA8: nop

    // 0x80048AAC: bc1t        L_80048AC8
    if (c1cs) {
        // 0x80048AB0: nop
    
            goto L_80048AC8;
    }
    // 0x80048AB0: nop

    // 0x80048AB4: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048AB8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048ABC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80048AC0: jal         0x80018D78
    // 0x80048AC4: nop

    func_80018D78(rdram, ctx);
        goto after_10;
    // 0x80048AC4: nop

    after_10:
L_80048AC8:
    // 0x80048AC8: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x80048ACC: nop

    // 0x80048AD0: beq         $s2, $a2, L_80048AE8
    if (ctx->r18 == ctx->r6) {
        // 0x80048AD4: nop
    
            goto L_80048AE8;
    }
    // 0x80048AD4: nop

    // 0x80048AD8: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048ADC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048AE0: jal         0x800192E8
    // 0x80048AE4: nop

    func_800192E8(rdram, ctx);
        goto after_11;
    // 0x80048AE4: nop

    after_11:
L_80048AE8:
    // 0x80048AE8: b           L_80048B1C
    // 0x80048AEC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80048B1C;
    // 0x80048AEC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80048AF0:
    // 0x80048AF0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80048AF4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048AF8: lw          $t7, 0x44($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X44);
    // 0x80048AFC: addiu       $s0, $t9, 0x44
    ctx->r16 = ADD32(ctx->r25, 0X44);
    // 0x80048B00: beq         $s2, $t7, L_80048B20
    if (ctx->r18 == ctx->r15) {
        // 0x80048B04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048B20;
    }
    // 0x80048B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048B08: lw          $a0, 0xCC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XCC);
    // 0x80048B0C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80048B10: jal         0x8001C424
    // 0x80048B14: nop

    func_8001C424(rdram, ctx);
        goto after_12;
    // 0x80048B14: nop

    after_12:
    // 0x80048B18: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
L_80048B1C:
    // 0x80048B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048B20:
    // 0x80048B20: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80048B24: jr          $ra
    // 0x80048B28: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    return;
    // 0x80048B28: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
;}
RECOMP_FUNC void func_80048B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048B2C: jr          $ra
    // 0x80048B30: nop

    return;
    // 0x80048B30: nop

;}
RECOMP_FUNC void func_80048B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048B44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048B4C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80048B50: jal         0x80048528
    // 0x80048B54: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80048B54: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x80048B58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80048B5C: bne         $v0, $zero, L_80048B84
    if (ctx->r2 != 0) {
        // 0x80048B60: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80048B84;
    }
    // 0x80048B60: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80048B64: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80048B68: jal         0x8005A774
    // 0x80048B6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005A774(rdram, ctx);
        goto after_1;
    // 0x80048B6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80048B70: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80048B74: nop

    // 0x80048B78: bne         $t6, $zero, L_80048B88
    if (ctx->r14 != 0) {
        // 0x80048B7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048B88;
    }
    // 0x80048B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048B80: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80048B84:
    // 0x80048B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048B88:
    // 0x80048B88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80048B8C: jr          $ra
    // 0x80048B90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x80048B90: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80048B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048B94: jr          $ra
    // 0x80048B98: nop

    return;
    // 0x80048B98: nop

;}
RECOMP_FUNC void func_80048BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048BC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80048BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048BCC: jal         0x80048528
    // 0x80048BD0: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80048BD0: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80048BD4: bne         $v0, $zero, L_80048CA0
    if (ctx->r2 != 0) {
        // 0x80048BD8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80048CA0;
    }
    // 0x80048BD8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80048BDC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80048BE0: nop

    // 0x80048BE4: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80048BE8: nop

    // 0x80048BEC: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x80048BF0: bne         $t8, $zero, L_80048CA4
    if (ctx->r24 != 0) {
        // 0x80048BF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048CA4;
    }
    // 0x80048BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048BF8: lw          $a0, 0xCC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XCC);
    // 0x80048BFC: addiu       $s3, $sp, 0x34
    ctx->r19 = ADD32(ctx->r29, 0X34);
    // 0x80048C00: lw          $s1, 0x0($t1)
    ctx->r17 = MEM_W(ctx->r9, 0X0);
    // 0x80048C04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80048C08: jal         0x800190F0
    // 0x80048C0C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    func_800190F0(rdram, ctx);
        goto after_1;
    // 0x80048C0C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    after_1:
    // 0x80048C10: addiu       $s4, $sp, 0x1C
    ctx->r20 = ADD32(ctx->r29, 0X1C);
    // 0x80048C14: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C18: jal         0x800190CC
    // 0x80048C1C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800190CC(rdram, ctx);
        goto after_2;
    // 0x80048C1C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x80048C20: addiu       $s5, $sp, 0x28
    ctx->r21 = ADD32(ctx->r29, 0X28);
    // 0x80048C24: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C28: jal         0x800190A8
    // 0x80048C2C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800190A8(rdram, ctx);
        goto after_3;
    // 0x80048C2C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80048C30: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C34: jal         0x8001C568
    // 0x80048C38: nop

    func_8001C568(rdram, ctx);
        goto after_4;
    // 0x80048C38: nop

    after_4:
    // 0x80048C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80048C40: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80048C44: jal         0x8001D138
    // 0x80048C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80048C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80048C4C: sw          $v0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r2;
    // 0x80048C50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80048C54: jal         0x8001C468
    // 0x80048C58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x80048C58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80048C5C: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x80048C60: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80048C64: andi        $t7, $t9, 0x8
    ctx->r15 = ctx->r25 & 0X8;
    // 0x80048C68: beq         $t7, $zero, L_80048C7C
    if (ctx->r15 == 0) {
        // 0x80048C6C: nop
    
            goto L_80048C7C;
    }
    // 0x80048C6C: nop

    // 0x80048C70: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C74: jal         0x8001918C
    // 0x80048C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001918C(rdram, ctx);
        goto after_7;
    // 0x80048C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_80048C7C:
    // 0x80048C7C: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C80: jal         0x80019164
    // 0x80048C84: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x80048C84: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_8:
    // 0x80048C88: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C8C: jal         0x8001913C
    // 0x80048C90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8001913C(rdram, ctx);
        goto after_9;
    // 0x80048C90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x80048C94: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048C98: jal         0x80019114
    // 0x80048C9C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80048C9C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_10:
L_80048CA0:
    // 0x80048CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048CA4:
    // 0x80048CA4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80048CA8: jr          $ra
    // 0x80048CAC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    return;
    // 0x80048CAC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
;}
RECOMP_FUNC void func_80048CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048CB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048CB8: jal         0x80048528
    // 0x80048CBC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80048CBC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80048CC0: bne         $v0, $zero, L_80048D74
    if (ctx->r2 != 0) {
        // 0x80048CC4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80048D74;
    }
    // 0x80048CC4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80048CC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80048CCC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80048CD0: lw          $a1, 0x44($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X44);
    // 0x80048CD4: nop

    // 0x80048CD8: beq         $s2, $a1, L_80048CF4
    if (ctx->r18 == ctx->r5) {
        // 0x80048CDC: nop
    
            goto L_80048CF4;
    }
    // 0x80048CDC: nop

    // 0x80048CE0: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80048CE4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80048CE8: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x80048CEC: beq         $t8, $zero, L_80048CFC
    if (ctx->r24 == 0) {
        // 0x80048CF0: nop
    
            goto L_80048CFC;
    }
    // 0x80048CF0: nop

L_80048CF4:
    // 0x80048CF4: b           L_80048D74
    // 0x80048CF8: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
        goto L_80048D74;
    // 0x80048CF8: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_80048CFC:
    // 0x80048CFC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80048D00: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80048D04: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80048D08: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80048D0C: nop

    // 0x80048D10: bc1t        L_80048D28
    if (c1cs) {
        // 0x80048D14: nop
    
            goto L_80048D28;
    }
    // 0x80048D14: nop

    // 0x80048D18: lw          $a0, 0xCC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XCC);
    // 0x80048D1C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80048D20: jal         0x80018EF8
    // 0x80048D24: nop

    func_80018EF8(rdram, ctx);
        goto after_1;
    // 0x80048D24: nop

    after_1:
L_80048D28:
    // 0x80048D28: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80048D2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80048D30: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80048D34: nop

    // 0x80048D38: bc1t        L_80048D54
    if (c1cs) {
        // 0x80048D3C: nop
    
            goto L_80048D54;
    }
    // 0x80048D3C: nop

    // 0x80048D40: lw          $a0, 0xCC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XCC);
    // 0x80048D44: lw          $a1, 0x44($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X44);
    // 0x80048D48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80048D4C: jal         0x80018D78
    // 0x80048D50: nop

    func_80018D78(rdram, ctx);
        goto after_2;
    // 0x80048D50: nop

    after_2:
L_80048D54:
    // 0x80048D54: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80048D58: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80048D5C: beq         $s2, $a2, L_80048D78
    if (ctx->r18 == ctx->r6) {
        // 0x80048D60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048D78;
    }
    // 0x80048D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048D64: lw          $a0, 0xCC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XCC);
    // 0x80048D68: lw          $a1, 0x44($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X44);
    // 0x80048D6C: jal         0x800192E8
    // 0x80048D70: nop

    func_800192E8(rdram, ctx);
        goto after_3;
    // 0x80048D70: nop

    after_3:
L_80048D74:
    // 0x80048D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048D78:
    // 0x80048D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80048D7C: jr          $ra
    // 0x80048D80: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    return;
    // 0x80048D80: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
;}
RECOMP_FUNC void func_80048D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048D84: jr          $ra
    // 0x80048D88: nop

    return;
    // 0x80048D88: nop

;}
RECOMP_FUNC void func_80048DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048DEC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80048DF0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80048DF4: beq         $s1, $s3, L_80048F84
    if (ctx->r17 == ctx->r19) {
        // 0x80048DF8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80048F84;
    }
    // 0x80048DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048DFC: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80048E00: nop

    // 0x80048E04: beq         $s4, $v0, L_80048F84
    if (ctx->r20 == ctx->r2) {
        // 0x80048E08: nop
    
            goto L_80048F84;
    }
    // 0x80048E08: nop

    // 0x80048E0C: lw          $t6, 0xCC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XCC);
    // 0x80048E10: nop

    // 0x80048E14: beq         $s3, $t6, L_80048F84
    if (ctx->r19 == ctx->r14) {
        // 0x80048E18: nop
    
            goto L_80048F84;
    }
    // 0x80048E18: nop

    // 0x80048E1C: xor         $s2, $v0, $s4
    ctx->r18 = ctx->r2 ^ ctx->r20;
    // 0x80048E20: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
    // 0x80048E24: beq         $t7, $zero, L_80048E40
    if (ctx->r15 == 0) {
        // 0x80048E28: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_80048E40;
    }
    // 0x80048E28: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x80048E2C: beq         $t8, $zero, L_80048E44
    if (ctx->r24 == 0) {
        // 0x80048E30: andi        $t9, $s2, 0x8
        ctx->r25 = ctx->r18 & 0X8;
            goto L_80048E44;
    }
    // 0x80048E30: andi        $t9, $s2, 0x8
    ctx->r25 = ctx->r18 & 0X8;
    // 0x80048E34: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x80048E38: jal         0x80050C9C
    // 0x80048E3C: nop

    func_80050C9C(rdram, ctx);
        goto after_0;
    // 0x80048E3C: nop

    after_0:
L_80048E40:
    // 0x80048E40: andi        $t9, $s2, 0x8
    ctx->r25 = ctx->r18 & 0X8;
L_80048E44:
    // 0x80048E44: beq         $t9, $zero, L_80048E84
    if (ctx->r25 == 0) {
        // 0x80048E48: andi        $t8, $s2, 0x10
        ctx->r24 = ctx->r18 & 0X10;
            goto L_80048E84;
    }
    // 0x80048E48: andi        $t8, $s2, 0x10
    ctx->r24 = ctx->r18 & 0X10;
    // 0x80048E4C: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x80048E50: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x80048E54: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80048E58: beq         $t7, $zero, L_80048E74
    if (ctx->r15 == 0) {
        // 0x80048E5C: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_80048E74;
    }
    // 0x80048E5C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80048E60: lw          $t2, 0x1C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X1C);
    // 0x80048E64: jal         0x800485F4
    // 0x80048E68: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    func_800485F4(rdram, ctx);
        goto after_1;
    // 0x80048E68: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    after_1:
    // 0x80048E6C: b           L_80048E84
    // 0x80048E70: andi        $t8, $s2, 0x10
    ctx->r24 = ctx->r18 & 0X10;
        goto L_80048E84;
    // 0x80048E70: andi        $t8, $s2, 0x10
    ctx->r24 = ctx->r18 & 0X10;
L_80048E74:
    // 0x80048E74: lw          $t2, 0x1C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X1C);
    // 0x80048E78: jal         0x800485F4
    // 0x80048E7C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    func_800485F4(rdram, ctx);
        goto after_2;
    // 0x80048E7C: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    after_2:
    // 0x80048E80: andi        $t8, $s2, 0x10
    ctx->r24 = ctx->r18 & 0X10;
L_80048E84:
    // 0x80048E84: beq         $t8, $zero, L_80048EC4
    if (ctx->r24 == 0) {
        // 0x80048E88: andi        $t7, $s2, 0x20
        ctx->r15 = ctx->r18 & 0X20;
            goto L_80048EC4;
    }
    // 0x80048E88: andi        $t7, $s2, 0x20
    ctx->r15 = ctx->r18 & 0X20;
    // 0x80048E8C: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x80048E90: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    // 0x80048E94: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x80048E98: beq         $t6, $zero, L_80048EB4
    if (ctx->r14 == 0) {
        // 0x80048E9C: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_80048EB4;
    }
    // 0x80048E9C: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x80048EA0: lw          $t2, 0x1C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X1C);
    // 0x80048EA4: jal         0x800485F4
    // 0x80048EA8: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    func_800485F4(rdram, ctx);
        goto after_3;
    // 0x80048EA8: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    after_3:
    // 0x80048EAC: b           L_80048EC4
    // 0x80048EB0: andi        $t7, $s2, 0x20
    ctx->r15 = ctx->r18 & 0X20;
        goto L_80048EC4;
    // 0x80048EB0: andi        $t7, $s2, 0x20
    ctx->r15 = ctx->r18 & 0X20;
L_80048EB4:
    // 0x80048EB4: lw          $t2, 0x1C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X1C);
    // 0x80048EB8: jal         0x800485F4
    // 0x80048EBC: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    func_800485F4(rdram, ctx);
        goto after_4;
    // 0x80048EBC: ori         $t4, $zero, 0xFFFF
    ctx->r12 = 0 | 0XFFFF;
    after_4:
    // 0x80048EC0: andi        $t7, $s2, 0x20
    ctx->r15 = ctx->r18 & 0X20;
L_80048EC4:
    // 0x80048EC4: beq         $t7, $zero, L_80048F50
    if (ctx->r15 == 0) {
        // 0x80048EC8: andi        $t8, $s2, 0x80
        ctx->r24 = ctx->r18 & 0X80;
            goto L_80048F50;
    }
    // 0x80048EC8: andi        $t8, $s2, 0x80
    ctx->r24 = ctx->r18 & 0X80;
    // 0x80048ECC: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x80048ED0: nop

    // 0x80048ED4: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80048ED8: beq         $t9, $zero, L_80048F08
    if (ctx->r25 == 0) {
        // 0x80048EDC: nop
    
            goto L_80048F08;
    }
    // 0x80048EDC: nop

    // 0x80048EE0: lw          $t6, 0xB0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XB0);
    // 0x80048EE4: nop

    // 0x80048EE8: beq         $s3, $t6, L_80048F50
    if (ctx->r19 == ctx->r14) {
        // 0x80048EEC: andi        $t8, $s2, 0x80
        ctx->r24 = ctx->r18 & 0X80;
            goto L_80048F50;
    }
    // 0x80048EEC: andi        $t8, $s2, 0x80
    ctx->r24 = ctx->r18 & 0X80;
    // 0x80048EF0: addiu       $s0, $s1, 0x6C
    ctx->r16 = ADD32(ctx->r17, 0X6C);
    // 0x80048EF4: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80048EF8: jal         0x8001C568
    // 0x80048EFC: nop

    func_8001C568(rdram, ctx);
        goto after_5;
    // 0x80048EFC: nop

    after_5:
    // 0x80048F00: b           L_80048F4C
    // 0x80048F04: sw          $s3, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r19;
        goto L_80048F4C;
    // 0x80048F04: sw          $s3, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r19;
L_80048F08:
    // 0x80048F08: lw          $t7, 0xB0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XB0);
    // 0x80048F0C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80048F10: bne         $s3, $t7, L_80048F2C
    if (ctx->r19 != ctx->r15) {
        // 0x80048F14: addiu       $a1, $zero, 0x1D
        ctx->r5 = ADD32(0, 0X1D);
            goto L_80048F2C;
    }
    // 0x80048F14: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80048F18: jal         0x8001D138
    // 0x80048F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_6;
    // 0x80048F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80048F20: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048F24: b           L_80048F34
    // 0x80048F28: sw          $v0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r2;
        goto L_80048F34;
    // 0x80048F28: sw          $v0, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r2;
L_80048F2C:
    // 0x80048F2C: lw          $a0, 0xCC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XCC);
    // 0x80048F30: nop

L_80048F34:
    // 0x80048F34: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x80048F38: jal         0x800190F0
    // 0x80048F3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800190F0(rdram, ctx);
        goto after_7;
    // 0x80048F3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80048F40: lw          $a0, 0xB0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XB0);
    // 0x80048F44: jal         0x80019164
    // 0x80048F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x80048F48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_80048F4C:
    // 0x80048F4C: andi        $t8, $s2, 0x80
    ctx->r24 = ctx->r18 & 0X80;
L_80048F50:
    // 0x80048F50: beq         $t8, $zero, L_80048F84
    if (ctx->r24 == 0) {
        // 0x80048F54: nop
    
            goto L_80048F84;
    }
    // 0x80048F54: nop

    // 0x80048F58: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x80048F5C: nop

    // 0x80048F60: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x80048F64: beq         $t6, $zero, L_80048F7C
    if (ctx->r14 == 0) {
        // 0x80048F68: nop
    
            goto L_80048F7C;
    }
    // 0x80048F68: nop

    // 0x80048F6C: jal         0x80050C1C
    // 0x80048F70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_80050C1C(rdram, ctx);
        goto after_9;
    // 0x80048F70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_9:
    // 0x80048F74: b           L_80048F88
    // 0x80048F78: sw          $s4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r20;
        goto L_80048F88;
    // 0x80048F78: sw          $s4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r20;
L_80048F7C:
    // 0x80048F7C: jal         0x80050C34
    // 0x80048F80: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_80050C34(rdram, ctx);
        goto after_10;
    // 0x80048F80: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_10:
L_80048F84:
    // 0x80048F84: sw          $s4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r20;
L_80048F88:
    // 0x80048F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048F8C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80048F90: jr          $ra
    // 0x80048F94: nop

    return;
    // 0x80048F94: nop

    // 0x80048F98: jr          $ra
    // 0x80048F9C: nop

    return;
    // 0x80048F9C: nop

    // 0x80048FA0: jr          $ra
    // 0x80048FA4: nop

    return;
    // 0x80048FA4: nop

    // 0x80048FA8: jr          $ra
    // 0x80048FAC: nop

    return;
    // 0x80048FAC: nop

    // 0x80048FB0: jr          $ra
    // 0x80048FB4: nop

    return;
    // 0x80048FB4: nop

    // 0x80048FB8: jr          $ra
    // 0x80048FBC: nop

    return;
    // 0x80048FBC: nop

    // 0x80048FC0: jr          $ra
    // 0x80048FC4: nop

    return;
    // 0x80048FC4: nop

;}
RECOMP_FUNC void func_80048FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048FCC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80048FD0: beq         $s0, $v1, L_80049118
    if (ctx->r16 == ctx->r3) {
        // 0x80048FD4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80049118;
    }
    // 0x80048FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048FD8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80048FDC: nop

    // 0x80048FE0: beq         $s2, $v0, L_80049118
    if (ctx->r18 == ctx->r2) {
        // 0x80048FE4: nop
    
            goto L_80049118;
    }
    // 0x80048FE4: nop

    // 0x80048FE8: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80048FEC: nop

    // 0x80048FF0: beq         $v1, $a0, L_80049118
    if (ctx->r3 == ctx->r4) {
        // 0x80048FF4: nop
    
            goto L_80049118;
    }
    // 0x80048FF4: nop

    // 0x80048FF8: xor         $s1, $v0, $s2
    ctx->r17 = ctx->r2 ^ ctx->r18;
    // 0x80048FFC: andi        $t6, $s1, 0x4
    ctx->r14 = ctx->r17 & 0X4;
    // 0x80049000: beq         $t6, $zero, L_80049028
    if (ctx->r14 == 0) {
        // 0x80049004: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_80049028;
    }
    // 0x80049004: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x80049008: beq         $t7, $zero, L_80049020
    if (ctx->r15 == 0) {
        // 0x8004900C: nop
    
            goto L_80049020;
    }
    // 0x8004900C: nop

    // 0x80049010: jal         0x800191E8
    // 0x80049014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800191E8(rdram, ctx);
        goto after_0;
    // 0x80049014: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80049018: b           L_8004902C
    // 0x8004901C: andi        $t8, $s1, 0x8
    ctx->r24 = ctx->r17 & 0X8;
        goto L_8004902C;
    // 0x8004901C: andi        $t8, $s1, 0x8
    ctx->r24 = ctx->r17 & 0X8;
L_80049020:
    // 0x80049020: jal         0x800191E8
    // 0x80049024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800191E8(rdram, ctx);
        goto after_1;
    // 0x80049024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80049028:
    // 0x80049028: andi        $t8, $s1, 0x8
    ctx->r24 = ctx->r17 & 0X8;
L_8004902C:
    // 0x8004902C: beq         $t8, $zero, L_80049064
    if (ctx->r24 == 0) {
        // 0x80049030: andi        $t7, $s1, 0x10
        ctx->r15 = ctx->r17 & 0X10;
            goto L_80049064;
    }
    // 0x80049030: andi        $t7, $s1, 0x10
    ctx->r15 = ctx->r17 & 0X10;
    // 0x80049034: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x80049038: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8004903C: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x80049040: beq         $t6, $zero, L_80049058
    if (ctx->r14 == 0) {
        // 0x80049044: nop
    
            goto L_80049058;
    }
    // 0x80049044: nop

    // 0x80049048: jal         0x8001918C
    // 0x8004904C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001918C(rdram, ctx);
        goto after_2;
    // 0x8004904C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80049050: b           L_80049064
    // 0x80049054: andi        $t7, $s1, 0x10
    ctx->r15 = ctx->r17 & 0X10;
        goto L_80049064;
    // 0x80049054: andi        $t7, $s1, 0x10
    ctx->r15 = ctx->r17 & 0X10;
L_80049058:
    // 0x80049058: jal         0x8001918C
    // 0x8004905C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001918C(rdram, ctx);
        goto after_3;
    // 0x8004905C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80049060: andi        $t7, $s1, 0x10
    ctx->r15 = ctx->r17 & 0X10;
L_80049064:
    // 0x80049064: beq         $t7, $zero, L_80049118
    if (ctx->r15 == 0) {
        // 0x80049068: nop
    
            goto L_80049118;
    }
    // 0x80049068: nop

    // 0x8004906C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80049070: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80049074: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x80049078: beq         $t9, $zero, L_80049088
    if (ctx->r25 == 0) {
        // 0x8004907C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80049088;
    }
    // 0x8004907C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80049080: b           L_80049110
    // 0x80049084: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
        goto L_80049110;
    // 0x80049084: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80049088:
    // 0x80049088: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8004908C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80049090: lwc1        $f4, 0x68($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X68);
    // 0x80049094: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80049098: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004909C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x800490A0: nop

    // 0x800490A4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x800490A8: beq         $a2, $zero, L_800490F4
    if (ctx->r6 == 0) {
        // 0x800490AC: nop
    
            goto L_800490F4;
    }
    // 0x800490AC: nop

    // 0x800490B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800490B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800490B8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800490BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800490C0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x800490C4: nop

    // 0x800490C8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800490CC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x800490D0: nop

    // 0x800490D4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x800490D8: bne         $a2, $zero, L_800490EC
    if (ctx->r6 != 0) {
        // 0x800490DC: nop
    
            goto L_800490EC;
    }
    // 0x800490DC: nop

    // 0x800490E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800490E4: b           L_80049104
    // 0x800490E8: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80049104;
    // 0x800490E8: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_800490EC:
    // 0x800490EC: b           L_80049104
    // 0x800490F0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80049104;
    // 0x800490F0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_800490F4:
    // 0x800490F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800490F8: nop

    // 0x800490FC: bltz        $a2, L_800490EC
    if (SIGNED(ctx->r6) < 0) {
        // 0x80049100: nop
    
            goto L_800490EC;
    }
    // 0x80049100: nop

L_80049104:
    // 0x80049104: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80049108: nop

    // 0x8004910C: nop

L_80049110:
    // 0x80049110: jal         0x80018658
    // 0x80049114: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x80049114: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_80049118:
    // 0x80049118: sw          $s2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r18;
    // 0x8004911C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049124: jr          $ra
    // 0x80049128: nop

    return;
    // 0x80049128: nop

    // 0x8004912C: jr          $ra
    // 0x80049130: nop

    return;
    // 0x80049130: nop

    // 0x80049134: jr          $ra
    // 0x80049138: nop

    return;
    // 0x80049138: nop

    // 0x8004913C: jr          $ra
    // 0x80049140: nop

    return;
    // 0x80049140: nop

    // 0x80049144: jr          $ra
    // 0x80049148: nop

    return;
    // 0x80049148: nop

    // 0x8004914C: jr          $ra
    // 0x80049150: nop

    return;
    // 0x80049150: nop

    // 0x80049154: jr          $ra
    // 0x80049158: nop

    return;
    // 0x80049158: nop

    // 0x8004915C: jr          $ra
    // 0x80049160: nop

    return;
    // 0x80049160: nop

    // 0x80049164: jr          $ra
    // 0x80049168: nop

    return;
    // 0x80049168: nop

    // 0x8004916C: jr          $ra
    // 0x80049170: nop

    return;
    // 0x80049170: nop

    // 0x80049174: jr          $ra
    // 0x80049178: nop

    return;
    // 0x80049178: nop

    // 0x8004917C: jr          $ra
    // 0x80049180: nop

    return;
    // 0x80049180: nop

    // 0x80049184: jr          $ra
    // 0x80049188: nop

    return;
    // 0x80049188: nop

;}
RECOMP_FUNC void func_8004918C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004918C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80049190: addiu       $t3, $t3, 0x1AD4
    ctx->r11 = ADD32(ctx->r11, 0X1AD4);
    // 0x80049194: lw          $a3, 0x0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X0);
    // 0x80049198: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x8004919C: multu       $a3, $a2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800491A0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800491A4: addiu       $a1, $a1, -0x3C48
    ctx->r5 = ADD32(ctx->r5, -0X3C48);
    // 0x800491A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800491AC: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x800491B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800491B4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800491B8: or          $t1, $a3, $zero
    ctx->r9 = ctx->r7 | 0;
    // 0x800491BC: mflo        $t6
    ctx->r14 = lo;
    // 0x800491C0: addu        $t0, $a1, $t6
    ctx->r8 = ADD32(ctx->r5, ctx->r14);
    // 0x800491C4: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x800491C8: swc1        $f12, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f12.u32l;
    // 0x800491CC: sw          $a0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r4;
    // 0x800491D0: sw          $a0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r4;
    // 0x800491D4: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x800491D8: nop

    // 0x800491DC: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x800491E0: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800491E4: nop

    // 0x800491E8: swc1        $f6, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f6.u32l;
    // 0x800491EC: lwc1        $f8, 0x2C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800491F0: nop

    // 0x800491F4: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x800491F8: lw          $v1, 0xC($t4)
    ctx->r3 = MEM_W(ctx->r12, 0XC);
    // 0x800491FC: beq         $a3, $zero, L_800492EC
    if (ctx->r7 == 0) {
        // 0x80049200: nop
    
            goto L_800492EC;
    }
    // 0x80049200: nop

    // 0x80049204: lw          $t7, -0x3C40($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C40);
    // 0x80049208: sll         $t8, $zero, 3
    ctx->r24 = S32(0 << 3);
    // 0x8004920C: beq         $a0, $t7, L_80049244
    if (ctx->r4 == ctx->r15) {
        // 0x80049210: subu        $t8, $t8, $zero
        ctx->r24 = SUB32(ctx->r24, 0);
            goto L_80049244;
    }
    // 0x80049210: subu        $t8, $t8, $zero
    ctx->r24 = SUB32(ctx->r24, 0);
    // 0x80049214: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80049218: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8004921C: lw          $t4, 0x8($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X8);
    // 0x80049220: nop

L_80049224:
    // 0x80049224: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049228: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8004922C: mflo        $t6
    ctx->r14 = lo;
    // 0x80049230: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80049234: lw          $t4, 0x8($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X8);
    // 0x80049238: nop

    // 0x8004923C: bne         $a0, $t4, L_80049224
    if (ctx->r4 != ctx->r12) {
        // 0x80049240: nop
    
            goto L_80049224;
    }
    // 0x80049240: nop

L_80049244:
    // 0x80049244: beq         $v0, $a0, L_800492EC
    if (ctx->r2 == ctx->r4) {
        // 0x80049248: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_800492EC;
    }
    // 0x80049248: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8004924C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_80049250:
    // 0x80049250: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049254: mflo        $t8
    ctx->r24 = lo;
    // 0x80049258: addu        $t5, $a1, $t8
    ctx->r13 = ADD32(ctx->r5, ctx->r24);
    // 0x8004925C: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80049260: nop

    // 0x80049264: beq         $s4, $v0, L_800492DC
    if (ctx->r20 == ctx->r2) {
        // 0x80049268: nop
    
            goto L_800492DC;
    }
    // 0x80049268: nop

    // 0x8004926C: lw          $s0, 0xC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XC);
    // 0x80049270: andi        $s3, $v1, 0xF0
    ctx->r19 = ctx->r3 & 0XF0;
    // 0x80049274: andi        $s2, $s0, 0xF0
    ctx->r18 = ctx->r16 & 0XF0;
    // 0x80049278: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004927C: lwc1        $f0, 0x4($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80049280: beq         $at, $zero, L_80049290
    if (ctx->r1 == 0) {
        // 0x80049284: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80049290;
    }
    // 0x80049284: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80049288: b           L_800492CC
    // 0x8004928C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_800492CC;
    // 0x8004928C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80049290:
    // 0x80049290: bne         $s2, $s3, L_800492CC
    if (ctx->r18 != ctx->r19) {
        // 0x80049294: andi        $v0, $s0, 0xF
        ctx->r2 = ctx->r16 & 0XF;
            goto L_800492CC;
    }
    // 0x80049294: andi        $v0, $s0, 0xF
    ctx->r2 = ctx->r16 & 0XF;
    // 0x80049298: andi        $s2, $v1, 0xF
    ctx->r18 = ctx->r3 & 0XF;
    // 0x8004929C: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800492A0: beq         $at, $zero, L_800492B0
    if (ctx->r1 == 0) {
        // 0x800492A4: nop
    
            goto L_800492B0;
    }
    // 0x800492A4: nop

    // 0x800492A8: b           L_800492CC
    // 0x800492AC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_800492CC;
    // 0x800492AC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800492B0:
    // 0x800492B0: bne         $v0, $s2, L_800492CC
    if (ctx->r2 != ctx->r18) {
        // 0x800492B4: nop
    
            goto L_800492CC;
    }
    // 0x800492B4: nop

    // 0x800492B8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x800492BC: nop

    // 0x800492C0: bc1f        L_800492CC
    if (!c1cs) {
        // 0x800492C4: nop
    
            goto L_800492CC;
    }
    // 0x800492C4: nop

    // 0x800492C8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800492CC:
    // 0x800492CC: beq         $s1, $zero, L_800492DC
    if (ctx->r17 == 0) {
        // 0x800492D0: nop
    
            goto L_800492DC;
    }
    // 0x800492D0: nop

    // 0x800492D4: b           L_800492EC
    // 0x800492D8: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
        goto L_800492EC;
    // 0x800492D8: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
L_800492DC:
    // 0x800492DC: lw          $t4, 0xC($t5)
    ctx->r12 = MEM_W(ctx->r13, 0XC);
    // 0x800492E0: nop

    // 0x800492E4: bne         $t4, $a0, L_80049250
    if (ctx->r12 != ctx->r4) {
        // 0x800492E8: nop
    
            goto L_80049250;
    }
    // 0x800492E8: nop

L_800492EC:
    // 0x800492EC: beq         $t2, $a0, L_8004932C
    if (ctx->r10 == ctx->r4) {
        // 0x800492F0: nop
    
            goto L_8004932C;
    }
    // 0x800492F0: nop

    // 0x800492F4: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800492F8: mflo        $t9
    ctx->r25 = lo;
    // 0x800492FC: addu        $v1, $a1, $t9
    ctx->r3 = ADD32(ctx->r5, ctx->r25);
    // 0x80049300: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80049304: nop

    // 0x80049308: beq         $v0, $a0, L_80049320
    if (ctx->r2 == ctx->r4) {
        // 0x8004930C: nop
    
            goto L_80049320;
    }
    // 0x8004930C: nop

    // 0x80049310: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049314: mflo        $t6
    ctx->r14 = lo;
    // 0x80049318: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8004931C: sw          $t1, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r9;
L_80049320:
    // 0x80049320: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x80049324: sw          $t2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r10;
    // 0x80049328: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
L_8004932C:
    // 0x8004932C: beq         $a3, $zero, L_800493A0
    if (ctx->r7 == 0) {
        // 0x80049330: addiu       $t6, $a3, 0x1
        ctx->r14 = ADD32(ctx->r7, 0X1);
            goto L_800493A0;
    }
    // 0x80049330: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x80049334: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x80049338: nop

    // 0x8004933C: bne         $a0, $t8, L_800493A0
    if (ctx->r4 != ctx->r24) {
        // 0x80049340: addiu       $t6, $a3, 0x1
        ctx->r14 = ADD32(ctx->r7, 0X1);
            goto L_800493A0;
    }
    // 0x80049340: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x80049344: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x80049348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004934C: bne         $a0, $t9, L_800493A0
    if (ctx->r4 != ctx->r25) {
        // 0x80049350: addiu       $t6, $a3, 0x1
        ctx->r14 = ADD32(ctx->r7, 0X1);
            goto L_800493A0;
    }
    // 0x80049350: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x80049354: blez        $a3, L_80049388
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80049358: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80049388;
    }
    // 0x80049358: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004935C:
    // 0x8004935C: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049360: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80049364: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80049368: mflo        $t6
    ctx->r14 = lo;
    // 0x8004936C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80049370: lw          $t2, 0xC($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XC);
    // 0x80049374: nop

    // 0x80049378: beq         $a0, $t2, L_80049388
    if (ctx->r4 == ctx->r10) {
        // 0x8004937C: nop
    
            goto L_80049388;
    }
    // 0x8004937C: nop

    // 0x80049380: bne         $at, $zero, L_8004935C
    if (ctx->r1 != 0) {
        // 0x80049384: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_8004935C;
    }
    // 0x80049384: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80049388:
    // 0x80049388: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004938C: mflo        $t8
    ctx->r24 = lo;
    // 0x80049390: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80049394: sw          $t1, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r9;
    // 0x80049398: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x8004939C: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
L_800493A0:
    // 0x800493A0: jr          $ra
    // 0x800493A4: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    return;
    // 0x800493A4: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
;}
RECOMP_FUNC void func_800493A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800493A8: jr          $ra
    // 0x800493AC: nop

    return;
    // 0x800493AC: nop

;}
RECOMP_FUNC void func_800493C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800493C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800493C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800493C8: jal         0x80048528
    // 0x800493CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x800493CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800493D0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800493D4: jal         0x80048738
    // 0x800493D8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_80048738(rdram, ctx);
        goto after_1;
    // 0x800493D8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x800493DC: lw          $v0, 0x38($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X38);
    // 0x800493E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800493E4: beq         $v0, $zero, L_80049410
    if (ctx->r2 == 0) {
        // 0x800493E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80049410;
    }
    // 0x800493E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800493EC: beq         $v0, $at, L_80049404
    if (ctx->r2 == ctx->r1) {
        // 0x800493F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80049404;
    }
    // 0x800493F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800493F4: beq         $v0, $at, L_8004940C
    if (ctx->r2 == ctx->r1) {
        // 0x800493F8: nop
    
            goto L_8004940C;
    }
    // 0x800493F8: nop

    // 0x800493FC: b           L_80049410
    // 0x80049400: nop

        goto L_80049410;
    // 0x80049400: nop

L_80049404:
    // 0x80049404: b           L_80049410
    // 0x80049408: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80049410;
    // 0x80049408: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004940C:
    // 0x8004940C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80049410:
    // 0x80049410: beq         $v1, $zero, L_80049434
    if (ctx->r3 == 0) {
        // 0x80049414: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80049434;
    }
    // 0x80049414: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80049418: beq         $v1, $at, L_8004944C
    if (ctx->r3 == ctx->r1) {
        // 0x8004941C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004944C;
    }
    // 0x8004941C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80049420: beq         $v1, $at, L_80049474
    if (ctx->r3 == ctx->r1) {
        // 0x80049424: nop
    
            goto L_80049474;
    }
    // 0x80049424: nop

    // 0x80049428: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004942C: b           L_8004948C
    // 0x80049430: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
        goto L_8004948C;
    // 0x80049430: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
L_80049434:
    // 0x80049434: lwc1        $f4, 0x14($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X14);
    // 0x80049438: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8004943C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80049440: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80049444: b           L_80049488
    // 0x80049448: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
        goto L_80049488;
    // 0x80049448: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
L_8004944C:
    // 0x8004944C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80049450: lwc1        $f10, 0x14($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X14);
    // 0x80049454: nop

    // 0x80049458: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8004945C: nop

    // 0x80049460: bc1t        L_8004948C
    if (c1cs) {
        // 0x80049464: lui         $at, 0xC5FA
        ctx->r1 = S32(0XC5FA << 16);
            goto L_8004948C;
    }
    // 0x80049464: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
    // 0x80049468: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    // 0x8004946C: b           L_80049488
    // 0x80049470: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
        goto L_80049488;
    // 0x80049470: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
L_80049474:
    // 0x80049474: lwc1        $f4, 0x14($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X14);
    // 0x80049478: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8004947C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80049480: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80049484: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
L_80049488:
    // 0x80049488: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
L_8004948C:
    // 0x8004948C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80049490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80049494: lui         $at, 0x45FA
    ctx->r1 = S32(0X45FA << 16);
    // 0x80049498: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8004949C: nop

    // 0x800494A0: bc1f        L_800494B4
    if (!c1cs) {
        // 0x800494A4: nop
    
            goto L_800494B4;
    }
    // 0x800494A4: nop

    // 0x800494A8: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    // 0x800494AC: b           L_800494E4
    // 0x800494B0: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
        goto L_800494E4;
    // 0x800494B0: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
L_800494B4:
    // 0x800494B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800494B8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800494BC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x800494C0: nop

    // 0x800494C4: bc1f        L_800494E8
    if (!c1cs) {
        // 0x800494C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800494E8;
    }
    // 0x800494C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800494CC: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x800494D0: lwc1        $f4, 0x14($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X14);
    // 0x800494D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800494D8: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x800494DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800494E0: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
L_800494E4:
    // 0x800494E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800494E8:
    // 0x800494E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800494EC: jr          $ra
    // 0x800494F0: nop

    return;
    // 0x800494F0: nop

;}
RECOMP_FUNC void func_800494F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800494F4: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800494F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800494FC: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x80049500: jal         0x80048528
    // 0x80049504: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80049504: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80049508: beq         $v0, $zero, L_80049518
    if (ctx->r2 == 0) {
        // 0x8004950C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80049518;
    }
    // 0x8004950C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80049510: b           L_80049920
    // 0x80049514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80049920;
    // 0x80049514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049518:
    // 0x80049518: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004951C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80049520: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x80049524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80049528: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8004952C: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    // 0x80049530: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80049534: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80049538: lw          $t8, 0x3C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X3C);
    // 0x8004953C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x80049540: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80049544: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x80049548: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004954C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80049550: lw          $t6, 0x3C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X3C);
    // 0x80049554: nop

    // 0x80049558: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8004955C: jal         0x8004878C
    // 0x80049560: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    func_8004878C(rdram, ctx);
        goto after_1;
    // 0x80049560: sw          $t7, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r15;
    after_1:
    // 0x80049564: bne         $v0, $zero, L_800498F4
    if (ctx->r2 != 0) {
        // 0x80049568: lw          $t7, 0xB4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB4);
            goto L_800498F4;
    }
    // 0x80049568: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x8004956C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80049570: jal         0x800493C0
    // 0x80049574: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800493C0(rdram, ctx);
        goto after_2;
    // 0x80049574: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80049578: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8004957C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80049580: lwc1        $f30, 0x5CE4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X5CE4);
    // 0x80049584: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80049588: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8004958C: c.eq.s      $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f30.fl == ctx->f12.fl;
    // 0x80049590: nop

    // 0x80049594: bc1f        L_800495B4
    if (!c1cs) {
        // 0x80049598: nop
    
            goto L_800495B4;
    }
    // 0x80049598: nop

    // 0x8004959C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800495A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800495A4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800495A8: mov.s       $f28, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    ctx->f28.fl = ctx->f22.fl;
    // 0x800495AC: b           L_80049638
    // 0x800495B0: mov.s       $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    ctx->f26.fl = ctx->f22.fl;
        goto L_80049638;
    // 0x800495B0: mov.s       $f26, $f22
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    ctx->f26.fl = ctx->f22.fl;
L_800495B4:
    // 0x800495B4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800495B8: nop

    // 0x800495BC: c.le.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl <= ctx->f12.fl;
    // 0x800495C0: nop

    // 0x800495C4: bc1f        L_800495E4
    if (!c1cs) {
        // 0x800495C8: nop
    
            goto L_800495E4;
    }
    // 0x800495C8: nop

    // 0x800495CC: sub.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x800495D0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800495D4: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800495D8: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800495DC: b           L_8004960C
    // 0x800495E0: nop

        goto L_8004960C;
    // 0x800495E0: nop

L_800495E4:
    // 0x800495E4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800495E8: nop

    // 0x800495EC: c.lt.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl < ctx->f22.fl;
    // 0x800495F0: nop

    // 0x800495F4: bc1f        L_8004960C
    if (!c1cs) {
        // 0x800495F8: nop
    
            goto L_8004960C;
    }
    // 0x800495F8: nop

    // 0x800495FC: add.s       $f6, $f12, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x80049600: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80049604: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80049608: nop

L_8004960C:
    // 0x8004960C: jal         0x80028C2C
    // 0x80049610: nop

    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x80049610: nop

    after_3:
    // 0x80049614: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80049618: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8004961C: mul.s       $f28, $f0, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80049620: jal         0x80028C00
    // 0x80049624: nop

    func_80028C00(rdram, ctx);
        goto after_4;
    // 0x80049624: nop

    after_4:
    // 0x80049628: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8004962C: nop

    // 0x80049630: mul.s       $f26, $f0, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80049634: nop

L_80049638:
    // 0x80049638: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8004963C: jal         0x80028C2C
    // 0x80049640: nop

    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x80049640: nop

    after_5:
    // 0x80049644: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80049648: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004964C: lwc1        $f2, 0x14($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80049650: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80049654: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80049658: mul.s       $f24, $f0, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8004965C: bc1f        L_8004966C
    if (!c1cs) {
        // 0x80049660: addiu       $a0, $sp, 0x78
        ctx->r4 = ADD32(ctx->r29, 0X78);
            goto L_8004966C;
    }
    // 0x80049660: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80049664: b           L_80049670
    // 0x80049668: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80049670;
    // 0x80049668: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8004966C:
    // 0x8004966C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80049670:
    // 0x80049670: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80049674: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80049678: c.eq.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl == ctx->f10.fl;
    // 0x8004967C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80049680: bc1t        L_800496D8
    if (c1cs) {
        // 0x80049684: add.s       $f24, $f24, $f8
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
            goto L_800496D8;
    }
    // 0x80049684: add.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x80049688: swc1        $f28, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f28.u32l;
    // 0x8004968C: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x80049690: swc1        $f26, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f26.u32l;
    // 0x80049694: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80049698: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8004969C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x800496A0: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800496A4: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x800496A8: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x800496AC: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800496B0: jal         0x80050D10
    // 0x800496B4: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_80050D10(rdram, ctx);
        goto after_6;
    // 0x800496B4: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800496B8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x800496BC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800496C0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800496C4: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x800496C8: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x800496CC: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x800496D0: b           L_800496E4
    // 0x800496D4: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
        goto L_800496E4;
    // 0x800496D4: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
L_800496D8:
    // 0x800496D8: swc1        $f28, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f28.u32l;
    // 0x800496DC: swc1        $f24, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f24.u32l;
    // 0x800496E0: swc1        $f26, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f26.u32l;
L_800496E4:
    // 0x800496E4: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800496E8: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800496EC: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800496F0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800496F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800496F8: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x800496FC: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80049700: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80049704: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80049708: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8004970C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80049710: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80049714: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x80049718: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004971C: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x80049720: swc1        $f22, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f22.u32l;
    // 0x80049724: swc1        $f22, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f22.u32l;
    // 0x80049728: jal         0x8004A0A0
    // 0x8004972C: swc1        $f22, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f22.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8004972C: swc1        $f22, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f22.u32l;
    after_7:
    // 0x80049730: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x80049734: nop

    // 0x80049738: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8004973C: nop

    // 0x80049740: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x80049744: beq         $t6, $zero, L_8004991C
    if (ctx->r14 == 0) {
        // 0x80049748: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8004991C;
    }
    // 0x80049748: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x8004974C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80049750: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80049754: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80049758: lwc1        $f24, 0x10($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004975C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80049760: nop

    // 0x80049764: bc1f        L_80049774
    if (!c1cs) {
        // 0x80049768: nop
    
            goto L_80049774;
    }
    // 0x80049768: nop

    // 0x8004976C: b           L_80049778
    // 0x80049770: neg.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = -ctx->f0.fl;
        goto L_80049778;
    // 0x80049770: neg.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = -ctx->f0.fl;
L_80049774:
    // 0x80049774: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
L_80049778:
    // 0x80049778: c.eq.s      $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f24.fl == ctx->f30.fl;
    // 0x8004977C: nop

    // 0x80049780: bc1t        L_8004991C
    if (c1cs) {
        // 0x80049784: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8004991C;
    }
    // 0x80049784: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80049788: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x8004978C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80049790: bc1t        L_80049918
    if (c1cs) {
        // 0x80049794: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_80049918;
    }
    // 0x80049794: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80049798: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x8004979C: jal         0x8004A0A0
    // 0x800497A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x800497A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x800497A4: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800497A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800497AC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x800497B0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800497B4: bc1f        L_800497D0
    if (!c1cs) {
        // 0x800497B8: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_800497D0;
    }
    // 0x800497B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
L_800497BC:
    // 0x800497BC: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x800497C0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x800497C4: nop

    // 0x800497C8: bc1t        L_800497BC
    if (c1cs) {
        // 0x800497CC: nop
    
            goto L_800497BC;
    }
    // 0x800497CC: nop

L_800497D0:
    // 0x800497D0: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x800497D4: nop

    // 0x800497D8: bc1f        L_800497F4
    if (!c1cs) {
        // 0x800497DC: nop
    
            goto L_800497F4;
    }
    // 0x800497DC: nop

L_800497E0:
    // 0x800497E0: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x800497E4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x800497E8: nop

    // 0x800497EC: bc1t        L_800497E0
    if (c1cs) {
        // 0x800497F0: nop
    
            goto L_800497E0;
    }
    // 0x800497F0: nop

L_800497F4:
    // 0x800497F4: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x800497F8: nop

    // 0x800497FC: bc1f        L_80049874
    if (!c1cs) {
        // 0x80049800: nop
    
            goto L_80049874;
    }
    // 0x80049800: nop

    // 0x80049804: sub.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x80049808: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8004980C: c.le.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl <= ctx->f26.fl;
    // 0x80049810: nop

    // 0x80049814: bc1f        L_80049824
    if (!c1cs) {
        // 0x80049818: nop
    
            goto L_80049824;
    }
    // 0x80049818: nop

    // 0x8004981C: b           L_800498E0
    // 0x80049820: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
        goto L_800498E0;
    // 0x80049820: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_80049824:
    // 0x80049824: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80049828: nop

    // 0x8004982C: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x80049830: nop

    // 0x80049834: bc1f        L_8004986C
    if (!c1cs) {
        // 0x80049838: nop
    
            goto L_8004986C;
    }
    // 0x80049838: nop

    // 0x8004983C: add.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f26.fl;
    // 0x80049840: c.le.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl <= ctx->f2.fl;
    // 0x80049844: nop

    // 0x80049848: bc1f        L_800498E0
    if (!c1cs) {
        // 0x8004984C: nop
    
            goto L_800498E0;
    }
    // 0x8004984C: nop

    // 0x80049850: sub.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x80049854: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x80049858: nop

    // 0x8004985C: bc1f        L_800498E0
    if (!c1cs) {
        // 0x80049860: nop
    
            goto L_800498E0;
    }
    // 0x80049860: nop

    // 0x80049864: b           L_800498E0
    // 0x80049868: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
        goto L_800498E0;
    // 0x80049868: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_8004986C:
    // 0x8004986C: b           L_800498E0
    // 0x80049870: sub.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f26.fl;
        goto L_800498E0;
    // 0x80049870: sub.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f26.fl;
L_80049874:
    // 0x80049874: sub.s       $f2, $f24, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f0.fl;
    // 0x80049878: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8004987C: c.le.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl <= ctx->f26.fl;
    // 0x80049880: nop

    // 0x80049884: bc1f        L_80049894
    if (!c1cs) {
        // 0x80049888: nop
    
            goto L_80049894;
    }
    // 0x80049888: nop

    // 0x8004988C: b           L_800498E0
    // 0x80049890: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
        goto L_800498E0;
    // 0x80049890: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_80049894:
    // 0x80049894: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80049898: nop

    // 0x8004989C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x800498A0: nop

    // 0x800498A4: bc1f        L_800498DC
    if (!c1cs) {
        // 0x800498A8: nop
    
            goto L_800498DC;
    }
    // 0x800498A8: nop

    // 0x800498AC: sub.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x800498B0: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x800498B4: nop

    // 0x800498B8: bc1f        L_800498E0
    if (!c1cs) {
        // 0x800498BC: nop
    
            goto L_800498E0;
    }
    // 0x800498BC: nop

    // 0x800498C0: add.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x800498C4: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x800498C8: nop

    // 0x800498CC: bc1f        L_800498E0
    if (!c1cs) {
        // 0x800498D0: nop
    
            goto L_800498E0;
    }
    // 0x800498D0: nop

    // 0x800498D4: b           L_800498E0
    // 0x800498D8: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
        goto L_800498E0;
    // 0x800498D8: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
L_800498DC:
    // 0x800498DC: add.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f26.fl;
L_800498E0:
    // 0x800498E0: jal         0x8004A0A0
    // 0x800498E4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x800498E4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x800498E8: b           L_8004991C
    // 0x800498EC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_8004991C;
    // 0x800498EC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x800498F0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
L_800498F4:
    // 0x800498F4: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x800498F8: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x800498FC: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
    // 0x80049900: bne         $t8, $at, L_8004991C
    if (ctx->r24 != ctx->r1) {
        // 0x80049904: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_8004991C;
    }
    // 0x80049904: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80049908: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004990C: jal         0x8004918C
    // 0x80049910: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_8004918C(rdram, ctx);
        goto after_10;
    // 0x80049910: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_10:
    // 0x80049914: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80049918:
    // 0x80049918: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_8004991C:
    // 0x8004991C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049920:
    // 0x80049920: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x80049924: jr          $ra
    // 0x80049928: nop

    return;
    // 0x80049928: nop

;}
RECOMP_FUNC void func_8004992C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004992C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80049930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049934: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80049938: jal         0x8004878C
    // 0x8004993C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004878C(rdram, ctx);
        goto after_0;
    // 0x8004993C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80049940: bne         $v0, $zero, L_800499A0
    if (ctx->r2 != 0) {
        // 0x80049944: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800499A0;
    }
    // 0x80049944: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80049948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004994C: jal         0x80048528
    // 0x80049950: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_80048528(rdram, ctx);
        goto after_1;
    // 0x80049950: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80049954: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80049958: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8004995C: jal         0x80019164
    // 0x80049960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80049960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80049964: bne         $s1, $zero, L_800499A4
    if (ctx->r17 != 0) {
        // 0x80049968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800499A4;
    }
    // 0x80049968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004996C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80049970: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80049974: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80049978: nop

    // 0x8004997C: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80049980: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80049984: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x80049988: nop

    // 0x8004998C: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
    // 0x80049990: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80049994: lw          $t9, 0x18($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X18);
    // 0x80049998: nop

    // 0x8004999C: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
L_800499A0:
    // 0x800499A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800499A4:
    // 0x800499A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800499A8: jr          $ra
    // 0x800499AC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    return;
    // 0x800499AC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
;}
RECOMP_FUNC void func_800499B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800499B0: jr          $ra
    // 0x800499B4: nop

    return;
    // 0x800499B4: nop

;}
RECOMP_FUNC void func_800499E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800499E0: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x800499E4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x800499E8: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x800499EC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x800499F0: nop

    // 0x800499F4: sll         $t7, $v0, 15
    ctx->r15 = S32(ctx->r2 << 15);
    // 0x800499F8: bltz        $t7, L_80049A98
    if (SIGNED(ctx->r15) < 0) {
        // 0x800499FC: andi        $t8, $v0, 0x8000
        ctx->r24 = ctx->r2 & 0X8000;
            goto L_80049A98;
    }
    // 0x800499FC: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x80049A00: beq         $t8, $zero, L_80049A10
    if (ctx->r24 == 0) {
        // 0x80049A04: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80049A10;
    }
    // 0x80049A04: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80049A08: b           L_80049A14
    // 0x80049A0C: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
        goto L_80049A14;
    // 0x80049A0C: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
L_80049A10:
    // 0x80049A10: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
L_80049A14:
    // 0x80049A14: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80049A18: nop

    // 0x80049A1C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80049A20: beq         $t7, $zero, L_80049A3C
    if (ctx->r15 == 0) {
        // 0x80049A24: nop
    
            goto L_80049A3C;
    }
    // 0x80049A24: nop

    // 0x80049A28: lw          $t8, 0x20($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X20);
    // 0x80049A2C: nop

    // 0x80049A30: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x80049A34: b           L_80049A4C
    // 0x80049A38: sw          $t9, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r25;
        goto L_80049A4C;
    // 0x80049A38: sw          $t9, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r25;
L_80049A3C:
    // 0x80049A3C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80049A40: nop

    // 0x80049A44: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80049A48: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
L_80049A4C:
    // 0x80049A4C: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x80049A50: nop

    // 0x80049A54: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80049A58: beq         $t9, $zero, L_80049A7C
    if (ctx->r25 == 0) {
        // 0x80049A5C: nop
    
            goto L_80049A7C;
    }
    // 0x80049A5C: nop

    // 0x80049A60: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80049A64: nop

    // 0x80049A68: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80049A6C: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x80049A70: lw          $t8, 0x14($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X14);
    // 0x80049A74: jr          $ra
    // 0x80049A78: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    return;
    // 0x80049A78: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
L_80049A7C:
    // 0x80049A7C: lw          $t9, 0x20($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X20);
    // 0x80049A80: nop

    // 0x80049A84: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x80049A88: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x80049A8C: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x80049A90: nop

    // 0x80049A94: sw          $t7, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r15;
L_80049A98:
    // 0x80049A98: jr          $ra
    // 0x80049A9C: nop

    return;
    // 0x80049A9C: nop

    // 0x80049AA0: jr          $ra
    // 0x80049AA4: nop

    return;
    // 0x80049AA4: nop

;}
RECOMP_FUNC void func_80049AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049AA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80049AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049AB0: jal         0x80048480
    // 0x80049AB4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80048480(rdram, ctx);
        goto after_0;
    // 0x80049AB4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_0:
    // 0x80049AB8: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x80049ABC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80049AC0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80049AC4: addiu       $t0, $t0, 0x1A60
    ctx->r8 = ADD32(ctx->r8, 0X1A60);
    // 0x80049AC8: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80049ACC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80049AD0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80049AD4: addiu       $a3, $a3, 0x1A64
    ctx->r7 = ADD32(ctx->r7, 0X1A64);
    // 0x80049AD8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80049ADC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80049AE0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80049AE4: addiu       $t7, $t7, 0x2310
    ctx->r15 = ADD32(ctx->r15, 0X2310);
    // 0x80049AE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049AEC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80049AF0: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80049AF4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80049AF8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80049AFC: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x80049B00: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80049B04: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80049B08: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80049B0C: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x80049B10: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80049B14: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x80049B18: sw          $a2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r6;
    // 0x80049B1C: slt         $at, $t9, $at
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80049B20: bne         $at, $zero, L_80049B2C
    if (ctx->r1 != 0) {
        // 0x80049B24: sw          $t9, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r25;
            goto L_80049B2C;
    }
    // 0x80049B24: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80049B28: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_80049B2C:
    // 0x80049B2C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80049B30: jal         0x8004BC90
    // 0x80049B34: addiu       $a0, $a1, 0x18
    ctx->r4 = ADD32(ctx->r5, 0X18);
    func_8004BC90(rdram, ctx);
        goto after_1;
    // 0x80049B34: addiu       $a0, $a1, 0x18
    ctx->r4 = ADD32(ctx->r5, 0X18);
    after_1:
    // 0x80049B38: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x80049B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80049B40: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x80049B44: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x80049B48: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x80049B4C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80049B50: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80049B54: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80049B58: nop

    // 0x80049B5C: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
    // 0x80049B60: lw          $t6, 0xC($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC);
    // 0x80049B64: nop

    // 0x80049B68: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x80049B6C: lw          $t7, 0x10($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X10);
    // 0x80049B70: jal         0x800499E0
    // 0x80049B74: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    func_800499E0(rdram, ctx);
        goto after_2;
    // 0x80049B74: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    after_2:
    // 0x80049B78: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x80049B7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80049B80: beq         $s1, $v0, L_80049BB0
    if (ctx->r17 == ctx->r2) {
        // 0x80049B84: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_80049BB0;
    }
    // 0x80049B84: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80049B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80049B8C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80049B90: jal         0x8001D138
    // 0x80049B94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80049B94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80049B98: sw          $v0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r2;
    // 0x80049B9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80049BA0: jal         0x8001C468
    // 0x80049BA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001C468(rdram, ctx);
        goto after_4;
    // 0x80049BA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x80049BA8: b           L_80049BB8
    // 0x80049BAC: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
        goto L_80049BB8;
    // 0x80049BAC: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_80049BB0:
    // 0x80049BB0: sw          $t8, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r24;
    // 0x80049BB4: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_80049BB8:
    // 0x80049BB8: lw          $t9, 0xCC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XCC);
    // 0x80049BBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80049BC0: beq         $t9, $at, L_80049BFC
    if (ctx->r25 == ctx->r1) {
        // 0x80049BC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80049BFC;
    }
    // 0x80049BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049BC8: lwc1        $f4, 0xC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XC);
    // 0x80049BCC: addiu       $t6, $s0, 0xD0
    ctx->r14 = ADD32(ctx->r16, 0XD0);
    // 0x80049BD0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80049BD4: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x80049BD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80049BDC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80049BE0: lwc1        $f8, 0x14($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X14);
    // 0x80049BE4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80049BE8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80049BEC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80049BF0: jal         0x8004A0A0
    // 0x80049BF4: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80049BF4: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    after_5:
    // 0x80049BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049BFC:
    // 0x80049BFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80049C00: jr          $ra
    // 0x80049C04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x80049C04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80049C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80049C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049C10: lw          $t6, 0x8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X8);
    // 0x80049C14: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80049C18: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x80049C1C: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80049C20: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80049C24: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80049C28: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80049C2C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80049C30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80049C34: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x80049C38: jal         0x80057CA0
    // 0x80049C3C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x80049C3C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80049C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049C44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80049C48: jr          $ra
    // 0x80049C4C: nop

    return;
    // 0x80049C4C: nop

    // 0x80049C50: jr          $ra
    // 0x80049C54: nop

    return;
    // 0x80049C54: nop

;}
RECOMP_FUNC void func_80049C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049C58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80049C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049C60: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x80049C64: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80049C68: jal         0x80048B44
    // 0x80049C6C: or          $t1, $s2, $zero
    ctx->r9 = ctx->r18 | 0;
    func_80048B44(rdram, ctx);
        goto after_0;
    // 0x80049C6C: or          $t1, $s2, $zero
    ctx->r9 = ctx->r18 | 0;
    after_0:
    // 0x80049C70: bne         $v0, $zero, L_80049CB4
    if (ctx->r2 != 0) {
        // 0x80049C74: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80049CB4;
    }
    // 0x80049C74: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80049C78: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80049C7C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80049C80: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80049C84: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80049C88: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80049C8C: bne         $t8, $zero, L_80049CB8
    if (ctx->r24 != 0) {
        // 0x80049C90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80049CB8;
    }
    // 0x80049C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049C94: lw          $t9, 0x3C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X3C);
    // 0x80049C98: or          $t1, $s3, $zero
    ctx->r9 = ctx->r19 | 0;
    // 0x80049C9C: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x80049CA0: jal         0x800487F4
    // 0x80049CA4: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    func_800487F4(rdram, ctx);
        goto after_1;
    // 0x80049CA4: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    after_1:
    // 0x80049CA8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x80049CAC: jal         0x8004992C
    // 0x80049CB0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    func_8004992C(rdram, ctx);
        goto after_2;
    // 0x80049CB0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    after_2:
L_80049CB4:
    // 0x80049CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049CB8:
    // 0x80049CB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80049CBC: jr          $ra
    // 0x80049CC0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    return;
    // 0x80049CC0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
;}
RECOMP_FUNC void func_80049CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CC4: jr          $ra
    // 0x80049CC8: nop

    return;
    // 0x80049CC8: nop

;}
RECOMP_FUNC void func_80049CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CE4: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x80049CE8: addiu       $t0, $zero, -0x2
    ctx->r8 = ADD32(0, -0X2);
    // 0x80049CEC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80049CF0: and         $t8, $t7, $t0
    ctx->r24 = ctx->r15 & ctx->r8;
    // 0x80049CF4: addiu       $t1, $zero, -0x5
    ctx->r9 = ADD32(0, -0X5);
    // 0x80049CF8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80049CFC: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x80049D00: and         $t6, $t8, $t1
    ctx->r14 = ctx->r24 & ctx->r9;
    // 0x80049D04: addiu       $t2, $zero, -0x9
    ctx->r10 = ADD32(0, -0X9);
    // 0x80049D08: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x80049D0C: and         $t8, $t6, $t2
    ctx->r24 = ctx->r14 & ctx->r10;
    // 0x80049D10: addiu       $t3, $zero, -0x11
    ctx->r11 = ADD32(0, -0X11);
    // 0x80049D14: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x80049D18: and         $t6, $t8, $t3
    ctx->r14 = ctx->r24 & ctx->r11;
    // 0x80049D1C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80049D20: addiu       $t4, $zero, -0x21
    ctx->r12 = ADD32(0, -0X21);
    // 0x80049D24: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x80049D28: and         $t8, $t6, $t4
    ctx->r24 = ctx->r14 & ctx->r12;
    // 0x80049D2C: and         $t6, $t9, $t0
    ctx->r14 = ctx->r25 & ctx->r8;
    // 0x80049D30: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x80049D34: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80049D38: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80049D3C: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80049D40: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
    // 0x80049D44: and         $t6, $t8, $t1
    ctx->r14 = ctx->r24 & ctx->r9;
    // 0x80049D48: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80049D4C: and         $t8, $t6, $t2
    ctx->r24 = ctx->r14 & ctx->r10;
    // 0x80049D50: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
    // 0x80049D54: and         $t6, $t8, $t3
    ctx->r14 = ctx->r24 & ctx->r11;
    // 0x80049D58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80049D5C: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80049D60: and         $t8, $t6, $t4
    ctx->r24 = ctx->r14 & ctx->r12;
    // 0x80049D64: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x80049D68: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80049D6C: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
    // 0x80049D70: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x80049D74: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80049D78: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80049D7C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80049D80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80049D84: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
    // 0x80049D88: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80049D8C: addiu       $v0, $a0, 0x44
    ctx->r2 = ADD32(ctx->r4, 0X44);
    // 0x80049D90: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80049D94: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80049D98: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80049D9C: sw          $a3, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r7;
    // 0x80049DA0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80049DA4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80049DA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80049DAC: sw          $a2, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r6;
    // 0x80049DB0: sw          $a3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r7;
    // 0x80049DB4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80049DB8: swc1        $f0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f0.u32l;
    // 0x80049DBC: swc1        $f0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f0.u32l;
    // 0x80049DC0: swc1        $f0, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f0.u32l;
    // 0x80049DC4: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    // 0x80049DC8: swc1        $f0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->f0.u32l;
    // 0x80049DCC: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
L_80049DD0:
    // 0x80049DD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80049DD4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80049DD8: bne         $v1, $t0, L_80049DD0
    if (ctx->r3 != ctx->r8) {
        // 0x80049DDC: sw          $a3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r7;
            goto L_80049DD0;
    }
    // 0x80049DDC: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80049DE0: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x80049DE4: sw          $a3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r7;
    // 0x80049DE8: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x80049DEC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80049DF0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80049DF4: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x80049DF8: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80049DFC: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80049E00: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x80049E04: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80049E08: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x80049E0C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x80049E10: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x80049E14: swc1        $f0, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f0.u32l;
    // 0x80049E18: swc1        $f0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f0.u32l;
    // 0x80049E1C: sw          $a2, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r6;
    // 0x80049E20: jr          $ra
    // 0x80049E24: sw          $a3, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r7;
    return;
    // 0x80049E24: sw          $a3, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_80049E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049E28: jr          $ra
    // 0x80049E2C: nop

    return;
    // 0x80049E2C: nop

;}
RECOMP_FUNC void func_80049E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049E38: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80049E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049E40: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80049E44: jal         0x80050C9C
    // 0x80049E48: nop

    func_80050C9C(rdram, ctx);
        goto after_0;
    // 0x80049E48: nop

    after_0:
    // 0x80049E4C: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x80049E50: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80049E54: beq         $s1, $a0, L_80049E68
    if (ctx->r17 == ctx->r4) {
        // 0x80049E58: nop
    
            goto L_80049E68;
    }
    // 0x80049E58: nop

    // 0x80049E5C: jal         0x8001C568
    // 0x80049E60: nop

    func_8001C568(rdram, ctx);
        goto after_1;
    // 0x80049E60: nop

    after_1:
    // 0x80049E64: sw          $s1, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r17;
L_80049E68:
    // 0x80049E68: lw          $t7, 0xB0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XB0);
    // 0x80049E6C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80049E70: beq         $s1, $t7, L_80049E8C
    if (ctx->r17 == ctx->r15) {
        // 0x80049E74: sw          $t6, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r14;
            goto L_80049E8C;
    }
    // 0x80049E74: sw          $t6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r14;
    // 0x80049E78: addiu       $s2, $s0, 0x6C
    ctx->r18 = ADD32(ctx->r16, 0X6C);
    // 0x80049E7C: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x80049E80: jal         0x8001C568
    // 0x80049E84: nop

    func_8001C568(rdram, ctx);
        goto after_2;
    // 0x80049E84: nop

    after_2:
    // 0x80049E88: sw          $s1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r17;
L_80049E8C:
    // 0x80049E8C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80049E90: lw          $a0, 0x1AD4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1AD4);
    // 0x80049E94: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80049E98: blez        $a0, L_80049ED4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80049E9C: addiu       $v0, $t8, -0x3C48
        ctx->r2 = ADD32(ctx->r24, -0X3C48);
            goto L_80049ED4;
    }
    // 0x80049E9C: addiu       $v0, $t8, -0x3C48
    ctx->r2 = ADD32(ctx->r24, -0X3C48);
    // 0x80049EA0: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80049EA4: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x80049EA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80049EAC: addu        $v1, $t9, $v0
    ctx->r3 = ADD32(ctx->r25, ctx->r2);
L_80049EB0:
    // 0x80049EB0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80049EB4: nop

    // 0x80049EB8: bne         $s0, $t6, L_80049EC4
    if (ctx->r16 != ctx->r14) {
        // 0x80049EBC: nop
    
            goto L_80049EC4;
    }
    // 0x80049EBC: nop

    // 0x80049EC0: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
L_80049EC4:
    // 0x80049EC4: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    // 0x80049EC8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80049ECC: bne         $at, $zero, L_80049EB0
    if (ctx->r1 != 0) {
        // 0x80049ED0: nop
    
            goto L_80049EB0;
    }
    // 0x80049ED0: nop

L_80049ED4:
    // 0x80049ED4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80049ED8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80049EDC: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80049EE0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80049EE4: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x80049EE8: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80049EEC: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x80049EF0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80049EF4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80049EF8: jal         0x80057CA0
    // 0x80049EFC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_80057CA0(rdram, ctx);
        goto after_3;
    // 0x80049EFC: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x80049F00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80049F04: addiu       $v0, $v0, 0x1A60
    ctx->r2 = ADD32(ctx->r2, 0X1A60);
    // 0x80049F08: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80049F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80049F10: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80049F14: jal         0x80049CE4
    // 0x80049F18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80049CE4(rdram, ctx);
        goto after_4;
    // 0x80049F18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_4:
    // 0x80049F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049F20: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80049F24: jr          $ra
    // 0x80049F28: nop

    return;
    // 0x80049F28: nop

;}
RECOMP_FUNC void func_80049F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049F2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80049F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049F34: jal         0x80048528
    // 0x80049F38: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80049F38: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80049F3C: bne         $v0, $zero, L_80049FB8
    if (ctx->r2 != 0) {
        // 0x80049F40: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80049FB8;
    }
    // 0x80049F40: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80049F44: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80049F48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80049F4C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80049F50: nop

    // 0x80049F54: beq         $a0, $at, L_80049F9C
    if (ctx->r4 == ctx->r1) {
        // 0x80049F58: lw          $s0, 0x3C($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X3C);
            goto L_80049F9C;
    }
    // 0x80049F58: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80049F5C: jal         0x800485A4
    // 0x80049F60: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    func_800485A4(rdram, ctx);
        goto after_1;
    // 0x80049F60: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80049F64: bne         $v0, $zero, L_80049F98
    if (ctx->r2 != 0) {
        // 0x80049F68: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_80049F98;
    }
    // 0x80049F68: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80049F6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80049F70: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80049F74: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80049F78: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80049F7C: lw          $t6, 0x1C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X1C);
    // 0x80049F80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80049F84: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80049F88: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80049F8C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80049F90: jal         0x80057CA0
    // 0x80049F94: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x80049F94: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    after_2:
L_80049F98:
    // 0x80049F98: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
L_80049F9C:
    // 0x80049F9C: nop

    // 0x80049FA0: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x80049FA4: jal         0x800486DC
    // 0x80049FA8: nop

    func_800486DC(rdram, ctx);
        goto after_3;
    // 0x80049FA8: nop

    after_3:
    // 0x80049FAC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80049FB0: jal         0x80049E38
    // 0x80049FB4: nop

    func_80049E38(rdram, ctx);
        goto after_4;
    // 0x80049FB4: nop

    after_4:
L_80049FB8:
    // 0x80049FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049FBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80049FC0: jr          $ra
    // 0x80049FC4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    return;
    // 0x80049FC4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
;}
RECOMP_FUNC void func_80049FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049FC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80049FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049FD0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80049FD4: jal         0x80048528
    // 0x80049FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x80049FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80049FDC: bne         $v0, $zero, L_8004A088
    if (ctx->r2 != 0) {
        // 0x80049FE0: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8004A088;
    }
    // 0x80049FE0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80049FE4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80049FE8: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x80049FEC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80049FF0: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80049FF4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80049FF8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80049FFC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8004A000: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8004A004: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8004A008: jal         0x80057CA0
    // 0x8004A00C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8004A00C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8004A010: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8004A014: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004A018: lw          $v0, 0x4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4);
    // 0x8004A01C: nop

    // 0x8004A020: beq         $v0, $zero, L_8004A030
    if (ctx->r2 == 0) {
        // 0x8004A024: nop
    
            goto L_8004A030;
    }
    // 0x8004A024: nop

    // 0x8004A028: bne         $v0, $at, L_8004A040
    if (ctx->r2 != ctx->r1) {
        // 0x8004A02C: nop
    
            goto L_8004A040;
    }
    // 0x8004A02C: nop

L_8004A030:
    // 0x8004A030: jal         0x80049F2C
    // 0x8004A034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80049F2C(rdram, ctx);
        goto after_2;
    // 0x8004A034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8004A038: b           L_8004A08C
    // 0x8004A03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004A08C;
    // 0x8004A03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004A040:
    // 0x8004A040: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x8004A044: nop

    // 0x8004A048: lw          $s2, 0x10($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X10);
    // 0x8004A04C: nop

    // 0x8004A050: ori         $t9, $s2, 0x4
    ctx->r25 = ctx->r18 | 0X4;
    // 0x8004A054: jal         0x80048FC8
    // 0x8004A058: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    func_80048FC8(rdram, ctx);
        goto after_3;
    // 0x8004A058: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    after_3:
    // 0x8004A05C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8004A060: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8004A064: lw          $s4, 0x14($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X14);
    // 0x8004A068: nop

    // 0x8004A06C: and         $t7, $s4, $at
    ctx->r15 = ctx->r20 & ctx->r1;
    // 0x8004A070: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8004A074: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8004A078: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8004A07C: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x8004A080: jal         0x80048DEC
    // 0x8004A084: ori         $s4, $t8, 0x200
    ctx->r20 = ctx->r24 | 0X200;
    func_80048DEC(rdram, ctx);
        goto after_4;
    // 0x8004A084: ori         $s4, $t8, 0x200
    ctx->r20 = ctx->r24 | 0X200;
    after_4:
L_8004A088:
    // 0x8004A088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004A08C:
    // 0x8004A08C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8004A090: jr          $ra
    // 0x8004A094: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    return;
    // 0x8004A094: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
;}
RECOMP_FUNC void func_8004A098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A098: jr          $ra
    // 0x8004A09C: nop

    return;
    // 0x8004A09C: nop

;}
RECOMP_FUNC void func_8004A0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A0A0: addiu       $sp, $sp, -0x430
    ctx->r29 = ADD32(ctx->r29, -0X430);
    // 0x8004A0A4: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x8004A0A8: sltiu       $at, $t6, 0x32
    ctx->r1 = ctx->r14 < 0X32 ? 1 : 0;
    // 0x8004A0AC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8004A0B0: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x8004A0B4: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x8004A0B8: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8004A0BC: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8004A0C0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8004A0C4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8004A0C8: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8004A0CC: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x8004A0D0: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8004A0D4: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x8004A0D8: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8004A0DC: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8004A0E0: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8004A0E4: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8004A0E8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8004A0EC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8004A0F0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004A0F4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8004A0F8: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8004A0FC: beq         $at, $zero, L_8004ADF4
    if (ctx->r1 == 0) {
        // 0x8004A100: or          $t5, $a2, $zero
        ctx->r13 = ctx->r6 | 0;
            goto L_8004ADF4;
    }
    // 0x8004A100: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8004A104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004A108: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004A10C: addu        $at, $at, $t6
    gpr jr_addend_8004A118 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004A110: lw          $t6, 0x5CE8($at)
    ctx->r14 = ADD32(ctx->r1, 0X5CE8);
    // 0x8004A114: nop

    // 0x8004A118: jr          $t6
    // 0x8004A11C: nop

    switch (jr_addend_8004A118 >> 2) {
        case 0: goto L_8004A120; break;
        case 1: goto L_8004A1B8; break;
        case 2: goto L_8004A2E0; break;
        case 3: goto L_8004A2B8; break;
        case 4: goto L_8004A4C8; break;
        case 5: goto L_8004A2F4; break;
        case 6: goto L_8004A384; break;
        case 7: goto L_8004A47C; break;
        case 8: goto L_8004ADF4; break;
        case 9: goto L_8004A638; break;
        case 10: goto L_8004A690; break;
        case 11: goto L_8004A6BC; break;
        case 12: goto L_8004A6F0; break;
        case 13: goto L_8004A550; break;
        case 14: goto L_8004A5A8; break;
        case 15: goto L_8004A5D8; break;
        case 16: goto L_8004A608; break;
        case 17: goto L_8004A208; break;
        case 18: goto L_8004A490; break;
        case 19: goto L_8004A724; break;
        case 20: goto L_8004A760; break;
        case 21: goto L_8004A7C0; break;
        case 22: goto L_8004A7D4; break;
        case 23: goto L_8004A970; break;
        case 24: goto L_8004A984; break;
        case 25: goto L_8004A9AC; break;
        case 26: goto L_8004AA08; break;
        case 27: goto L_8004A9DC; break;
        case 28: goto L_8004A998; break;
        case 29: goto L_8004AA1C; break;
        case 30: goto L_8004ADF4; break;
        case 31: goto L_8004A7E8; break;
        case 32: goto L_8004AC98; break;
        case 33: goto L_8004AD7C; break;
        case 34: goto L_8004ADB8; break;
        case 35: goto L_8004ADCC; break;
        case 36: goto L_8004ADE0; break;
        case 37: goto L_8004A958; break;
        case 38: goto L_8004A800; break;
        case 39: goto L_8004A818; break;
        case 40: goto L_8004AABC; break;
        case 41: goto L_8004AB00; break;
        case 42: goto L_8004AC84; break;
        case 43: goto L_8004A830; break;
        case 44: goto L_8004A848; break;
        case 45: goto L_8004A898; break;
        case 46: goto L_8004A8AC; break;
        case 47: goto L_8004A910; break;
        case 48: goto L_8004A1C8; break;
        case 49: goto L_8004A1D8; break;
        default: switch_error(__func__, 0x8004A118, 0x80095CE8);
    }
    // 0x8004A11C: nop

L_8004A120:
    // 0x8004A120: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x8004A124: sw          $t2, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->r10;
    // 0x8004A128: addiu       $a3, $sp, 0x3FC
    ctx->r7 = ADD32(ctx->r29, 0X3FC);
    // 0x8004A12C: jal         0x80049C08
    // 0x8004A130: sw          $a2, 0x41C($sp)
    MEM_W(0X41C, ctx->r29) = ctx->r6;
    func_80049C08(rdram, ctx);
        goto after_0;
    // 0x8004A130: sw          $a2, 0x41C($sp)
    MEM_W(0X41C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8004A134: lw          $s3, 0x41C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X41C);
    // 0x8004A138: lw          $s1, 0x430($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X430);
    // 0x8004A13C: jal         0x80049AA8
    // 0x8004A140: addiu       $s2, $sp, 0x3FC
    ctx->r18 = ADD32(ctx->r29, 0X3FC);
    func_80049AA8(rdram, ctx);
        goto after_1;
    // 0x8004A140: addiu       $s2, $sp, 0x3FC
    ctx->r18 = ADD32(ctx->r29, 0X3FC);
    after_1:
    // 0x8004A144: lw          $t7, 0x400($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X400);
    // 0x8004A148: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8004A14C: sw          $v0, 0x418($sp)
    MEM_W(0X418, ctx->r29) = ctx->r2;
    // 0x8004A150: sw          $t8, 0x3E4($sp)
    MEM_W(0X3E4, ctx->r29) = ctx->r24;
    // 0x8004A154: sw          $t7, 0x3E0($sp)
    MEM_W(0X3E0, ctx->r29) = ctx->r15;
    // 0x8004A158: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x8004A15C: lw          $a2, 0x41C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X41C);
    // 0x8004A160: sw          $t9, 0x3E8($sp)
    MEM_W(0X3E8, ctx->r29) = ctx->r25;
    // 0x8004A164: lw          $t6, 0x18($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X18);
    // 0x8004A168: addiu       $a1, $sp, 0x3E0
    ctx->r5 = ADD32(ctx->r29, 0X3E0);
    // 0x8004A16C: sw          $t6, 0x3EC($sp)
    MEM_W(0X3EC, ctx->r29) = ctx->r14;
    // 0x8004A170: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8004A174: jal         0x80057CA0
    // 0x8004A178: nop

    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8004A178: nop

    after_2:
    // 0x8004A17C: lw          $a2, 0x41C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X41C);
    // 0x8004A180: lw          $t9, 0x418($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X418);
    // 0x8004A184: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x8004A188: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x8004A18C: sw          $t8, 0x3CC($sp)
    MEM_W(0X3CC, ctx->r29) = ctx->r24;
    // 0x8004A190: sw          $t7, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->r15;
    // 0x8004A194: lw          $t6, 0x1C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X1C);
    // 0x8004A198: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x8004A19C: sw          $t7, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->r15;
    // 0x8004A1A0: sw          $t6, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->r14;
    // 0x8004A1A4: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8004A1A8: jal         0x80057CA0
    // 0x8004A1AC: addiu       $a1, $sp, 0x3C8
    ctx->r5 = ADD32(ctx->r29, 0X3C8);
    func_80057CA0(rdram, ctx);
        goto after_3;
    // 0x8004A1AC: addiu       $a1, $sp, 0x3C8
    ctx->r5 = ADD32(ctx->r29, 0X3C8);
    after_3:
    // 0x8004A1B0: b           L_8004ADF8
    // 0x8004A1B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8004ADF8;
    // 0x8004A1B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004A1B8:
    // 0x8004A1B8: jal         0x80049F2C
    // 0x8004A1BC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80049F2C(rdram, ctx);
        goto after_4;
    // 0x8004A1BC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_4:
    // 0x8004A1C0: b           L_8004ADF8
    // 0x8004A1C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A1C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A1C8:
    // 0x8004A1C8: jal         0x80049FC8
    // 0x8004A1CC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    func_80049FC8(rdram, ctx);
        goto after_5;
    // 0x8004A1CC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    after_5:
    // 0x8004A1D0: b           L_8004ADF8
    // 0x8004A1D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A1D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A1D8:
    // 0x8004A1D8: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x8004A1DC: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x8004A1E0: jal         0x80049C58
    // 0x8004A1E4: sw          $t8, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->r24;
    func_80049C58(rdram, ctx);
        goto after_6;
    // 0x8004A1E4: sw          $t8, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->r24;
    after_6:
    // 0x8004A1E8: bne         $v0, $zero, L_8004A200
    if (ctx->r2 != 0) {
        // 0x8004A1EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A200;
    }
    // 0x8004A1EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A1F0: lw          $s2, 0x3C4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C4);
    // 0x8004A1F4: jal         0x80049C58
    // 0x8004A1F8: nop

    func_80049C58(rdram, ctx);
        goto after_7;
    // 0x8004A1F8: nop

    after_7:
    // 0x8004A1FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8004A200:
    // 0x8004A200: b           L_8004ADF8
    // 0x8004A204: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A204: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A208:
    // 0x8004A208: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x8004A20C: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x8004A210: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    // 0x8004A214: jal         0x80049C08
    // 0x8004A218: sw          $t2, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->r10;
    func_80049C08(rdram, ctx);
        goto after_8;
    // 0x8004A218: sw          $t2, 0x430($sp)
    MEM_W(0X430, ctx->r29) = ctx->r10;
    after_8:
    // 0x8004A21C: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A220: lw          $s1, 0x430($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X430);
    // 0x8004A224: lw          $s3, 0x0($t5)
    ctx->r19 = MEM_W(ctx->r13, 0X0);
    // 0x8004A228: lw          $s2, 0x4($t5)
    ctx->r18 = MEM_W(ctx->r13, 0X4);
    // 0x8004A22C: jal         0x80049AA8
    // 0x8004A230: nop

    func_80049AA8(rdram, ctx);
        goto after_9;
    // 0x8004A230: nop

    after_9:
    // 0x8004A234: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A238: sw          $v0, 0x3AC($sp)
    MEM_W(0X3AC, ctx->r29) = ctx->r2;
    // 0x8004A23C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x8004A240: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8004A244: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x8004A248: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8004A24C: sw          $t6, 0x394($sp)
    MEM_W(0X394, ctx->r29) = ctx->r14;
    // 0x8004A250: sw          $t9, 0x390($sp)
    MEM_W(0X390, ctx->r29) = ctx->r25;
    // 0x8004A254: lw          $t7, 0x1C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1C);
    // 0x8004A258: addiu       $a1, $sp, 0x390
    ctx->r5 = ADD32(ctx->r29, 0X390);
    // 0x8004A25C: sw          $t7, 0x398($sp)
    MEM_W(0X398, ctx->r29) = ctx->r15;
    // 0x8004A260: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x8004A264: nop

    // 0x8004A268: sw          $t8, 0x39C($sp)
    MEM_W(0X39C, ctx->r29) = ctx->r24;
    // 0x8004A26C: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x8004A270: jal         0x80057CA0
    // 0x8004A274: nop

    func_80057CA0(rdram, ctx);
        goto after_10;
    // 0x8004A274: nop

    after_10:
    // 0x8004A278: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A27C: lw          $t7, 0x3AC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3AC);
    // 0x8004A280: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x8004A284: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8004A288: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x8004A28C: sw          $t6, 0x37C($sp)
    MEM_W(0X37C, ctx->r29) = ctx->r14;
    // 0x8004A290: sw          $t9, 0x378($sp)
    MEM_W(0X378, ctx->r29) = ctx->r25;
    // 0x8004A294: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8004A298: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8004A29C: sw          $t9, 0x384($sp)
    MEM_W(0X384, ctx->r29) = ctx->r25;
    // 0x8004A2A0: sw          $t8, 0x380($sp)
    MEM_W(0X380, ctx->r29) = ctx->r24;
    // 0x8004A2A4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8004A2A8: jal         0x80057CA0
    // 0x8004A2AC: addiu       $a1, $sp, 0x378
    ctx->r5 = ADD32(ctx->r29, 0X378);
    func_80057CA0(rdram, ctx);
        goto after_11;
    // 0x8004A2AC: addiu       $a1, $sp, 0x378
    ctx->r5 = ADD32(ctx->r29, 0X378);
    after_11:
    // 0x8004A2B0: b           L_8004ADF8
    // 0x8004A2B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8004ADF8;
    // 0x8004A2B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004A2B8:
    // 0x8004A2B8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A2BC: jal         0x80048528
    // 0x8004A2C0: addiu       $a2, $sp, 0x36C
    ctx->r6 = ADD32(ctx->r29, 0X36C);
    func_80048528(rdram, ctx);
        goto after_12;
    // 0x8004A2C0: addiu       $a2, $sp, 0x36C
    ctx->r6 = ADD32(ctx->r29, 0X36C);
    after_12:
    // 0x8004A2C4: bne         $v0, $zero, L_8004A2D8
    if (ctx->r2 != 0) {
        // 0x8004A2C8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A2D8;
    }
    // 0x8004A2C8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A2CC: lw          $a1, 0x36C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X36C);
    // 0x8004A2D0: jal         0x80048738
    // 0x8004A2D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80048738(rdram, ctx);
        goto after_13;
    // 0x8004A2D4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_13:
L_8004A2D8:
    // 0x8004A2D8: b           L_8004ADF8
    // 0x8004A2DC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A2DC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A2E0:
    // 0x8004A2E0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8004A2E4: jal         0x8004992C
    // 0x8004A2E8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    func_8004992C(rdram, ctx);
        goto after_14;
    // 0x8004A2E8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    after_14:
    // 0x8004A2EC: b           L_8004ADF8
    // 0x8004A2F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A2F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A2F4:
    // 0x8004A2F4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A2F8: addiu       $a1, $sp, 0x348
    ctx->r5 = ADD32(ctx->r29, 0X348);
    // 0x8004A2FC: jal         0x8004878C
    // 0x8004A300: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_15;
    // 0x8004A300: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_15:
    // 0x8004A304: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A308: bne         $v0, $zero, L_8004A37C
    if (ctx->r2 != 0) {
        // 0x8004A30C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A37C;
    }
    // 0x8004A30C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A310: lw          $a0, 0x348($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X348);
    // 0x8004A314: addiu       $a1, $sp, 0x338
    ctx->r5 = ADD32(ctx->r29, 0X338);
    // 0x8004A318: sw          $v0, 0x344($sp)
    MEM_W(0X344, ctx->r29) = ctx->r2;
    // 0x8004A31C: jal         0x800190CC
    // 0x8004A320: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_800190CC(rdram, ctx);
        goto after_16;
    // 0x8004A320: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_16:
    // 0x8004A324: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004A328: lwc1        $f4, 0x33C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X33C);
    // 0x8004A32C: lwc1        $f1, 0x5DB0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5DB0);
    // 0x8004A330: lwc1        $f0, 0x5DB4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5DB4);
    // 0x8004A334: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A338: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A33C: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A340: lw          $a2, 0x344($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X344);
    // 0x8004A344: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A348: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x8004A34C: lwc1        $f4, 0x338($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X338);
    // 0x8004A350: nop

    // 0x8004A354: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A358: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A35C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A360: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x8004A364: lwc1        $f4, 0x340($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X340);
    // 0x8004A368: nop

    // 0x8004A36C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A370: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A374: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A378: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
L_8004A37C:
    // 0x8004A37C: b           L_8004ADF8
    // 0x8004A380: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A380: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A384:
    // 0x8004A384: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A388: jal         0x80048528
    // 0x8004A38C: addiu       $a2, $sp, 0x32C
    ctx->r6 = ADD32(ctx->r29, 0X32C);
    func_80048528(rdram, ctx);
        goto after_17;
    // 0x8004A38C: addiu       $a2, $sp, 0x32C
    ctx->r6 = ADD32(ctx->r29, 0X32C);
    after_17:
    // 0x8004A390: bne         $v0, $zero, L_8004A474
    if (ctx->r2 != 0) {
        // 0x8004A394: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8004A474;
    }
    // 0x8004A394: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8004A398: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8004A39C: lw          $t6, 0x32C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A3A0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A3A4: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
    // 0x8004A3A8: lw          $t7, 0x32C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A3AC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8004A3B0: nop

    // 0x8004A3B4: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x8004A3B8: lw          $t8, 0x32C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A3BC: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8004A3C0: nop

    // 0x8004A3C4: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x8004A3C8: lw          $t9, 0x32C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A3CC: nop

    // 0x8004A3D0: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x8004A3D4: nop

    // 0x8004A3D8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8004A3DC: beq         $t7, $zero, L_8004A408
    if (ctx->r15 == 0) {
        // 0x8004A3E0: nop
    
            goto L_8004A408;
    }
    // 0x8004A3E0: nop

    // 0x8004A3E4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8004A3E8: jal         0x80057BF8
    // 0x8004A3EC: sw          $v0, 0x328($sp)
    MEM_W(0X328, ctx->r29) = ctx->r2;
    func_80057BF8(rdram, ctx);
        goto after_18;
    // 0x8004A3EC: sw          $v0, 0x328($sp)
    MEM_W(0X328, ctx->r29) = ctx->r2;
    after_18:
    // 0x8004A3F0: lw          $t4, 0x32C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A3F4: jal         0x8004918C
    // 0x8004A3F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8004918C(rdram, ctx);
        goto after_19;
    // 0x8004A3F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_19:
    // 0x8004A3FC: lw          $v1, 0x328($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X328);
    // 0x8004A400: b           L_8004ADFC
    // 0x8004A404: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8004ADFC;
    // 0x8004A404: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004A408:
    // 0x8004A408: jal         0x80048528
    // 0x8004A40C: addiu       $a2, $sp, 0x2FC
    ctx->r6 = ADD32(ctx->r29, 0X2FC);
    func_80048528(rdram, ctx);
        goto after_20;
    // 0x8004A40C: addiu       $a2, $sp, 0x2FC
    ctx->r6 = ADD32(ctx->r29, 0X2FC);
    after_20:
    // 0x8004A410: bne         $v0, $zero, L_8004A424
    if (ctx->r2 != 0) {
        // 0x8004A414: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A424;
    }
    // 0x8004A414: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A418: lw          $a1, 0x2FC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2FC);
    // 0x8004A41C: jal         0x80048738
    // 0x8004A420: addiu       $a0, $sp, 0x310
    ctx->r4 = ADD32(ctx->r29, 0X310);
    func_80048738(rdram, ctx);
        goto after_21;
    // 0x8004A420: addiu       $a0, $sp, 0x310
    ctx->r4 = ADD32(ctx->r29, 0X310);
    after_21:
L_8004A424:
    // 0x8004A424: bne         $a2, $zero, L_8004A474
    if (ctx->r6 != 0) {
        // 0x8004A428: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8004A474;
    }
    // 0x8004A428: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8004A42C: lw          $t8, 0x32C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X32C);
    // 0x8004A430: lwc1        $f10, 0x310($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X310);
    // 0x8004A434: lwc1        $f4, 0x24($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8004A438: lwc1        $f8, 0x314($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X314);
    // 0x8004A43C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004A440: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8004A444: swc1        $f6, 0x310($sp)
    MEM_W(0X310, ctx->r29) = ctx->f6.u32l;
    // 0x8004A448: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x8004A44C: lwc1        $f6, 0x318($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X318);
    // 0x8004A450: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004A454: addiu       $s0, $sp, 0x310
    ctx->r16 = ADD32(ctx->r29, 0X310);
    // 0x8004A458: swc1        $f4, 0x314($sp)
    MEM_W(0X314, ctx->r29) = ctx->f4.u32l;
    // 0x8004A45C: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8004A460: nop

    // 0x8004A464: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004A468: jal         0x8004992C
    // 0x8004A46C: swc1        $f10, 0x318($sp)
    MEM_W(0X318, ctx->r29) = ctx->f10.u32l;
    func_8004992C(rdram, ctx);
        goto after_22;
    // 0x8004A46C: swc1        $f10, 0x318($sp)
    MEM_W(0X318, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x8004A470: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8004A474:
    // 0x8004A474: b           L_8004ADF8
    // 0x8004A478: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_8004ADF8;
    // 0x8004A478: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8004A47C:
    // 0x8004A47C: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x8004A480: jal         0x800494F4
    // 0x8004A484: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_800494F4(rdram, ctx);
        goto after_23;
    // 0x8004A484: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_23:
    // 0x8004A488: b           L_8004ADF8
    // 0x8004A48C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A48C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A490:
    // 0x8004A490: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x8004A494: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x8004A498: addiu       $t4, $sp, 0x2E8
    ctx->r12 = ADD32(ctx->r29, 0X2E8);
    // 0x8004A49C: jal         0x800485F4
    // 0x8004A4A0: sw          $t9, 0x2E8($sp)
    MEM_W(0X2E8, ctx->r29) = ctx->r25;
    func_800485F4(rdram, ctx);
        goto after_24;
    // 0x8004A4A0: sw          $t9, 0x2E8($sp)
    MEM_W(0X2E8, ctx->r29) = ctx->r25;
    after_24:
    // 0x8004A4A4: bne         $v0, $zero, L_8004A4C0
    if (ctx->r2 != 0) {
        // 0x8004A4A8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A4C0;
    }
    // 0x8004A4A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A4AC: lw          $t6, 0x2E8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2E8);
    // 0x8004A4B0: nop

    // 0x8004A4B4: bne         $t6, $zero, L_8004A4C0
    if (ctx->r14 != 0) {
        // 0x8004A4B8: nop
    
            goto L_8004A4C0;
    }
    // 0x8004A4B8: nop

    // 0x8004A4BC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8004A4C0:
    // 0x8004A4C0: b           L_8004ADF8
    // 0x8004A4C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A4C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A4C8:
    // 0x8004A4C8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A4CC: addiu       $a1, $sp, 0x2C8
    ctx->r5 = ADD32(ctx->r29, 0X2C8);
    // 0x8004A4D0: jal         0x8004878C
    // 0x8004A4D4: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_25;
    // 0x8004A4D4: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_25:
    // 0x8004A4D8: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A4DC: bne         $v0, $zero, L_8004A548
    if (ctx->r2 != 0) {
        // 0x8004A4E0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A548;
    }
    // 0x8004A4E0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A4E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004A4E8: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8004A4EC: lwc1        $f1, 0x5DB8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5DB8);
    // 0x8004A4F0: lwc1        $f0, 0x5DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5DBC);
    // 0x8004A4F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A4F8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A4FC: lw          $a0, 0x2C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C8);
    // 0x8004A500: addiu       $a1, $sp, 0x2B8
    ctx->r5 = ADD32(ctx->r29, 0X2B8);
    // 0x8004A504: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A508: swc1        $f10, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->f10.u32l;
    // 0x8004A50C: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8004A510: nop

    // 0x8004A514: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A518: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A51C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A520: swc1        $f10, 0x2BC($sp)
    MEM_W(0X2BC, ctx->r29) = ctx->f10.u32l;
    // 0x8004A524: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8004A528: sw          $v0, 0x2C4($sp)
    MEM_W(0X2C4, ctx->r29) = ctx->r2;
    // 0x8004A52C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004A530: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004A534: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004A538: jal         0x8001913C
    // 0x8004A53C: swc1        $f10, 0x2C0($sp)
    MEM_W(0X2C0, ctx->r29) = ctx->f10.u32l;
    func_8001913C(rdram, ctx);
        goto after_26;
    // 0x8004A53C: swc1        $f10, 0x2C0($sp)
    MEM_W(0X2C0, ctx->r29) = ctx->f10.u32l;
    after_26:
    // 0x8004A540: lw          $a2, 0x2C4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C4);
    // 0x8004A544: nop

L_8004A548:
    // 0x8004A548: b           L_8004ADF8
    // 0x8004A54C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A54C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A550:
    // 0x8004A550: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A554: jal         0x80048528
    // 0x8004A558: addiu       $a2, $sp, 0x2AC
    ctx->r6 = ADD32(ctx->r29, 0X2AC);
    func_80048528(rdram, ctx);
        goto after_27;
    // 0x8004A558: addiu       $a2, $sp, 0x2AC
    ctx->r6 = ADD32(ctx->r29, 0X2AC);
    after_27:
    // 0x8004A55C: bne         $v0, $zero, L_8004A5A0
    if (ctx->r2 != 0) {
        // 0x8004A560: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A5A0;
    }
    // 0x8004A560: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A564: lw          $t7, 0x2AC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2AC);
    // 0x8004A568: nop

    // 0x8004A56C: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8004A570: nop

    // 0x8004A574: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8004A578: lw          $t9, 0x2AC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2AC);
    // 0x8004A57C: nop

    // 0x8004A580: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x8004A584: nop

    // 0x8004A588: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x8004A58C: lw          $t7, 0x2AC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2AC);
    // 0x8004A590: nop

    // 0x8004A594: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8004A598: nop

    // 0x8004A59C: sw          $t8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r24;
L_8004A5A0:
    // 0x8004A5A0: b           L_8004ADF8
    // 0x8004A5A4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A5A4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A5A8:
    // 0x8004A5A8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A5AC: jal         0x80048528
    // 0x8004A5B0: addiu       $a2, $sp, 0x29C
    ctx->r6 = ADD32(ctx->r29, 0X29C);
    func_80048528(rdram, ctx);
        goto after_28;
    // 0x8004A5B0: addiu       $a2, $sp, 0x29C
    ctx->r6 = ADD32(ctx->r29, 0X29C);
    after_28:
    // 0x8004A5B4: bne         $v0, $zero, L_8004A5D0
    if (ctx->r2 != 0) {
        // 0x8004A5B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A5D0;
    }
    // 0x8004A5B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A5BC: lw          $t9, 0x29C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X29C);
    // 0x8004A5C0: nop

    // 0x8004A5C4: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x8004A5C8: nop

    // 0x8004A5CC: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
L_8004A5D0:
    // 0x8004A5D0: b           L_8004ADF8
    // 0x8004A5D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A5D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A5D8:
    // 0x8004A5D8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A5DC: jal         0x80048528
    // 0x8004A5E0: addiu       $a2, $sp, 0x28C
    ctx->r6 = ADD32(ctx->r29, 0X28C);
    func_80048528(rdram, ctx);
        goto after_29;
    // 0x8004A5E0: addiu       $a2, $sp, 0x28C
    ctx->r6 = ADD32(ctx->r29, 0X28C);
    after_29:
    // 0x8004A5E4: bne         $v0, $zero, L_8004A600
    if (ctx->r2 != 0) {
        // 0x8004A5E8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A600;
    }
    // 0x8004A5E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A5EC: lw          $t7, 0x28C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28C);
    // 0x8004A5F0: nop

    // 0x8004A5F4: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8004A5F8: nop

    // 0x8004A5FC: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
L_8004A600:
    // 0x8004A600: b           L_8004ADF8
    // 0x8004A604: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A604: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A608:
    // 0x8004A608: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A60C: jal         0x80048528
    // 0x8004A610: addiu       $a2, $sp, 0x27C
    ctx->r6 = ADD32(ctx->r29, 0X27C);
    func_80048528(rdram, ctx);
        goto after_30;
    // 0x8004A610: addiu       $a2, $sp, 0x27C
    ctx->r6 = ADD32(ctx->r29, 0X27C);
    after_30:
    // 0x8004A614: bne         $v0, $zero, L_8004A630
    if (ctx->r2 != 0) {
        // 0x8004A618: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A630;
    }
    // 0x8004A618: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A61C: lw          $t9, 0x27C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X27C);
    // 0x8004A620: nop

    // 0x8004A624: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x8004A628: nop

    // 0x8004A62C: sw          $t6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r14;
L_8004A630:
    // 0x8004A630: b           L_8004ADF8
    // 0x8004A634: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A634: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A638:
    // 0x8004A638: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A63C: jal         0x80048528
    // 0x8004A640: addiu       $a2, $sp, 0x26C
    ctx->r6 = ADD32(ctx->r29, 0X26C);
    func_80048528(rdram, ctx);
        goto after_31;
    // 0x8004A640: addiu       $a2, $sp, 0x26C
    ctx->r6 = ADD32(ctx->r29, 0X26C);
    after_31:
    // 0x8004A644: bne         $v0, $zero, L_8004A684
    if (ctx->r2 != 0) {
        // 0x8004A648: sw          $v0, 0x268($sp)
        MEM_W(0X268, ctx->r29) = ctx->r2;
            goto L_8004A684;
    }
    // 0x8004A648: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x8004A64C: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x8004A650: lw          $v1, 0x26C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X26C);
    // 0x8004A654: nop

    // 0x8004A658: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8004A65C: lw          $s2, 0x4($t5)
    ctx->r18 = MEM_W(ctx->r13, 0X4);
    // 0x8004A660: lw          $s0, 0x26C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X26C);
    // 0x8004A664: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    // 0x8004A668: jal         0x80048FC8
    // 0x8004A66C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    func_80048FC8(rdram, ctx);
        goto after_32;
    // 0x8004A66C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    after_32:
    // 0x8004A670: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A674: lw          $s1, 0x26C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X26C);
    // 0x8004A678: lw          $s4, 0x8($t5)
    ctx->r20 = MEM_W(ctx->r13, 0X8);
    // 0x8004A67C: jal         0x80048DEC
    // 0x8004A680: nop

    func_80048DEC(rdram, ctx);
        goto after_33;
    // 0x8004A680: nop

    after_33:
L_8004A684:
    // 0x8004A684: lw          $v1, 0x268($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X268);
    // 0x8004A688: b           L_8004ADFC
    // 0x8004A68C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8004ADFC;
    // 0x8004A68C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004A690:
    // 0x8004A690: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A694: jal         0x80048528
    // 0x8004A698: addiu       $a2, $sp, 0x24C
    ctx->r6 = ADD32(ctx->r29, 0X24C);
    func_80048528(rdram, ctx);
        goto after_34;
    // 0x8004A698: addiu       $a2, $sp, 0x24C
    ctx->r6 = ADD32(ctx->r29, 0X24C);
    after_34:
    // 0x8004A69C: bne         $v0, $zero, L_8004A6B4
    if (ctx->r2 != 0) {
        // 0x8004A6A0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8004A6B4;
    }
    // 0x8004A6A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8004A6A4: lw          $v1, 0x24C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24C);
    // 0x8004A6A8: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x8004A6AC: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8004A6B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8004A6B4:
    // 0x8004A6B4: b           L_8004ADF8
    // 0x8004A6B8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_8004ADF8;
    // 0x8004A6B8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8004A6BC:
    // 0x8004A6BC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A6C0: jal         0x80048528
    // 0x8004A6C4: addiu       $a2, $sp, 0x22C
    ctx->r6 = ADD32(ctx->r29, 0X22C);
    func_80048528(rdram, ctx);
        goto after_35;
    // 0x8004A6C4: addiu       $a2, $sp, 0x22C
    ctx->r6 = ADD32(ctx->r29, 0X22C);
    after_35:
    // 0x8004A6C8: bne         $v0, $zero, L_8004A6E8
    if (ctx->r2 != 0) {
        // 0x8004A6CC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A6E8;
    }
    // 0x8004A6CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A6D0: lw          $s0, 0x22C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X22C);
    // 0x8004A6D4: lw          $s2, 0x4($t5)
    ctx->r18 = MEM_W(ctx->r13, 0X4);
    // 0x8004A6D8: jal         0x80048FC8
    // 0x8004A6DC: sw          $v0, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->r2;
    func_80048FC8(rdram, ctx);
        goto after_36;
    // 0x8004A6DC: sw          $v0, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->r2;
    after_36:
    // 0x8004A6E0: lw          $a0, 0x228($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X228);
    // 0x8004A6E4: nop

L_8004A6E8:
    // 0x8004A6E8: b           L_8004ADF8
    // 0x8004A6EC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A6EC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A6F0:
    // 0x8004A6F0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A6F4: jal         0x80048528
    // 0x8004A6F8: addiu       $a2, $sp, 0x21C
    ctx->r6 = ADD32(ctx->r29, 0X21C);
    func_80048528(rdram, ctx);
        goto after_37;
    // 0x8004A6F8: addiu       $a2, $sp, 0x21C
    ctx->r6 = ADD32(ctx->r29, 0X21C);
    after_37:
    // 0x8004A6FC: bne         $v0, $zero, L_8004A71C
    if (ctx->r2 != 0) {
        // 0x8004A700: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A71C;
    }
    // 0x8004A700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A704: lw          $s1, 0x21C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X21C);
    // 0x8004A708: lw          $s4, 0x8($t5)
    ctx->r20 = MEM_W(ctx->r13, 0X8);
    // 0x8004A70C: jal         0x80048DEC
    // 0x8004A710: sw          $v0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r2;
    func_80048DEC(rdram, ctx);
        goto after_38;
    // 0x8004A710: sw          $v0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r2;
    after_38:
    // 0x8004A714: lw          $a0, 0x218($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X218);
    // 0x8004A718: nop

L_8004A71C:
    // 0x8004A71C: b           L_8004ADF8
    // 0x8004A720: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A720: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A724:
    // 0x8004A724: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A728: addiu       $a1, $sp, 0x1F8
    ctx->r5 = ADD32(ctx->r29, 0X1F8);
    // 0x8004A72C: jal         0x8004878C
    // 0x8004A730: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_39;
    // 0x8004A730: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_39:
    // 0x8004A734: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A738: bne         $v0, $zero, L_8004A758
    if (ctx->r2 != 0) {
        // 0x8004A73C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A758;
    }
    // 0x8004A73C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A740: lw          $a0, 0x1F8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1F8);
    // 0x8004A744: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8004A748: jal         0x80019114
    // 0x8004A74C: sw          $v0, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->r2;
    func_80019114(rdram, ctx);
        goto after_40;
    // 0x8004A74C: sw          $v0, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->r2;
    after_40:
    // 0x8004A750: lw          $a2, 0x1F4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1F4);
    // 0x8004A754: nop

L_8004A758:
    // 0x8004A758: b           L_8004ADF8
    // 0x8004A75C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A75C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A760:
    // 0x8004A760: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A764: addiu       $a1, $sp, 0x1D0
    ctx->r5 = ADD32(ctx->r29, 0X1D0);
    // 0x8004A768: jal         0x8004878C
    // 0x8004A76C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_41;
    // 0x8004A76C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_41:
    // 0x8004A770: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A774: bne         $v0, $zero, L_8004A7B8
    if (ctx->r2 != 0) {
        // 0x8004A778: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A7B8;
    }
    // 0x8004A778: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A77C: lw          $a0, 0x1D0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D0);
    // 0x8004A780: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    // 0x8004A784: sw          $v0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r2;
    // 0x8004A788: jal         0x800190A8
    // 0x8004A78C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_800190A8(rdram, ctx);
        goto after_42;
    // 0x8004A78C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_42:
    // 0x8004A790: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A794: lwc1        $f4, 0x1C0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x8004A798: lw          $a2, 0x1CC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1CC);
    // 0x8004A79C: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x8004A7A0: lwc1        $f6, 0x1C4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x8004A7A4: nop

    // 0x8004A7A8: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x8004A7AC: lwc1        $f8, 0x1C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x8004A7B0: nop

    // 0x8004A7B4: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
L_8004A7B8:
    // 0x8004A7B8: b           L_8004ADF8
    // 0x8004A7BC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A7BC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A7C0:
    // 0x8004A7C0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A7C4: jal         0x80048CB0
    // 0x8004A7C8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    func_80048CB0(rdram, ctx);
        goto after_43;
    // 0x8004A7C8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    after_43:
    // 0x8004A7CC: b           L_8004ADF8
    // 0x8004A7D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A7D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A7D4:
    // 0x8004A7D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A7D8: jal         0x80048BC4
    // 0x8004A7DC: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    func_80048BC4(rdram, ctx);
        goto after_44;
    // 0x8004A7DC: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    after_44:
    // 0x8004A7E0: b           L_8004ADF8
    // 0x8004A7E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A7E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A7E8:
    // 0x8004A7E8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A7EC: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8004A7F0: jal         0x800488E4
    // 0x8004A7F4: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    func_800488E4(rdram, ctx);
        goto after_45;
    // 0x8004A7F4: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    after_45:
    // 0x8004A7F8: b           L_8004ADF8
    // 0x8004A7FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A7FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A800:
    // 0x8004A800: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A804: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8004A808: jal         0x800488E4
    // 0x8004A80C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    func_800488E4(rdram, ctx);
        goto after_46;
    // 0x8004A80C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    after_46:
    // 0x8004A810: b           L_8004ADF8
    // 0x8004A814: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A814: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A818:
    // 0x8004A818: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A81C: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8004A820: jal         0x800488E4
    // 0x8004A824: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    func_800488E4(rdram, ctx);
        goto after_47;
    // 0x8004A824: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    after_47:
    // 0x8004A828: b           L_8004ADF8
    // 0x8004A82C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A82C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A830:
    // 0x8004A830: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A834: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8004A838: jal         0x800488E4
    // 0x8004A83C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    func_800488E4(rdram, ctx);
        goto after_48;
    // 0x8004A83C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    after_48:
    // 0x8004A840: b           L_8004ADF8
    // 0x8004A844: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A844: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A848:
    // 0x8004A848: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A84C: jal         0x80048528
    // 0x8004A850: addiu       $a2, $sp, 0x194
    ctx->r6 = ADD32(ctx->r29, 0X194);
    func_80048528(rdram, ctx);
        goto after_49;
    // 0x8004A850: addiu       $a2, $sp, 0x194
    ctx->r6 = ADD32(ctx->r29, 0X194);
    after_49:
    // 0x8004A854: bne         $v0, $zero, L_8004A890
    if (ctx->r2 != 0) {
        // 0x8004A858: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A890;
    }
    // 0x8004A858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A85C: lw          $t7, 0x194($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X194);
    // 0x8004A860: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004A864: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8004A868: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004A86C: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x8004A870: beq         $t9, $zero, L_8004A884
    if (ctx->r25 == 0) {
        // 0x8004A874: nop
    
            goto L_8004A884;
    }
    // 0x8004A874: nop

    // 0x8004A878: lwc1        $f10, 0xB8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XB8);
    // 0x8004A87C: b           L_8004ADF8
    // 0x8004A880: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
        goto L_8004ADF8;
    // 0x8004A880: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
L_8004A884:
    // 0x8004A884: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004A888: nop

    // 0x8004A88C: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
L_8004A890:
    // 0x8004A890: b           L_8004ADF8
    // 0x8004A894: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A894: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A898:
    // 0x8004A898: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x8004A89C: jal         0x80048B44
    // 0x8004A8A0: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_80048B44(rdram, ctx);
        goto after_50;
    // 0x8004A8A0: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_50:
    // 0x8004A8A4: b           L_8004ADF8
    // 0x8004A8A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A8A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A8AC:
    // 0x8004A8AC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A8B0: jal         0x80048528
    // 0x8004A8B4: addiu       $a2, $sp, 0x184
    ctx->r6 = ADD32(ctx->r29, 0X184);
    func_80048528(rdram, ctx);
        goto after_51;
    // 0x8004A8B4: addiu       $a2, $sp, 0x184
    ctx->r6 = ADD32(ctx->r29, 0X184);
    after_51:
    // 0x8004A8B8: bne         $v0, $zero, L_8004A908
    if (ctx->r2 != 0) {
        // 0x8004A8BC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A908;
    }
    // 0x8004A8BC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A8C0: lw          $t6, 0x184($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X184);
    // 0x8004A8C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004A8C8: lw          $t8, 0x14($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X14);
    // 0x8004A8CC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8004A8D0: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x8004A8D4: beq         $t9, $zero, L_8004A908
    if (ctx->r25 == 0) {
        // 0x8004A8D8: nop
    
            goto L_8004A908;
    }
    // 0x8004A8D8: nop

    // 0x8004A8DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004A8E0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8004A8E4: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x8004A8E8: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
    // 0x8004A8EC: nop

    // 0x8004A8F0: lw          $a0, 0xB0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XB0);
    // 0x8004A8F4: jal         0x80019114
    // 0x8004A8F8: sw          $v0, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r2;
    func_80019114(rdram, ctx);
        goto after_52;
    // 0x8004A8F8: sw          $v0, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r2;
    after_52:
    // 0x8004A8FC: lw          $v1, 0x180($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X180);
    // 0x8004A900: b           L_8004ADFC
    // 0x8004A904: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8004ADFC;
    // 0x8004A904: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004A908:
    // 0x8004A908: b           L_8004ADF8
    // 0x8004A90C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A90C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A910:
    // 0x8004A910: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A914: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x8004A918: jal         0x8004878C
    // 0x8004A91C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_53;
    // 0x8004A91C: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_53:
    // 0x8004A920: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004A924: bne         $v0, $zero, L_8004A950
    if (ctx->r2 != 0) {
        // 0x8004A928: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A950;
    }
    // 0x8004A928: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A92C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8004A930: lw          $a0, 0x160($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X160);
    // 0x8004A934: bne         $t6, $zero, L_8004A950
    if (ctx->r14 != 0) {
        // 0x8004A938: nop
    
            goto L_8004A950;
    }
    // 0x8004A938: nop

    // 0x8004A93C: lhu         $a1, 0x4($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X4);
    // 0x8004A940: jal         0x800194C8
    // 0x8004A944: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    func_800194C8(rdram, ctx);
        goto after_54;
    // 0x8004A944: sw          $v0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r2;
    after_54:
    // 0x8004A948: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x8004A94C: nop

L_8004A950:
    // 0x8004A950: b           L_8004ADF8
    // 0x8004A954: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_8004ADF8;
    // 0x8004A954: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_8004A958:
    // 0x8004A958: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A95C: or          $s3, $t5, $zero
    ctx->r19 = ctx->r13 | 0;
    // 0x8004A960: jal         0x800488E4
    // 0x8004A964: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    func_800488E4(rdram, ctx);
        goto after_55;
    // 0x8004A964: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    after_55:
    // 0x8004A968: b           L_8004ADF8
    // 0x8004A96C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A96C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A970:
    // 0x8004A970: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x8004A974: jal         0x800485F4
    // 0x8004A978: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    func_800485F4(rdram, ctx);
        goto after_56;
    // 0x8004A978: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    after_56:
    // 0x8004A97C: b           L_8004ADF8
    // 0x8004A980: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A980: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A984:
    // 0x8004A984: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x8004A988: jal         0x800485F4
    // 0x8004A98C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    func_800485F4(rdram, ctx);
        goto after_57;
    // 0x8004A98C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    after_57:
    // 0x8004A990: b           L_8004ADF8
    // 0x8004A994: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A994: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A998:
    // 0x8004A998: addiu       $t3, $zero, 0x13
    ctx->r11 = ADD32(0, 0X13);
    // 0x8004A99C: jal         0x800485F4
    // 0x8004A9A0: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    func_800485F4(rdram, ctx);
        goto after_58;
    // 0x8004A9A0: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    after_58:
    // 0x8004A9A4: b           L_8004ADF8
    // 0x8004A9A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004A9A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004A9AC:
    // 0x8004A9AC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A9B0: jal         0x80048528
    // 0x8004A9B4: addiu       $a2, $sp, 0x12C
    ctx->r6 = ADD32(ctx->r29, 0X12C);
    func_80048528(rdram, ctx);
        goto after_59;
    // 0x8004A9B4: addiu       $a2, $sp, 0x12C
    ctx->r6 = ADD32(ctx->r29, 0X12C);
    after_59:
    // 0x8004A9B8: bne         $v0, $zero, L_8004A9D4
    if (ctx->r2 != 0) {
        // 0x8004A9BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004A9D4;
    }
    // 0x8004A9BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A9C0: lw          $t8, 0x12C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X12C);
    // 0x8004A9C4: nop

    // 0x8004A9C8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004A9CC: nop

    // 0x8004A9D0: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
L_8004A9D4:
    // 0x8004A9D4: b           L_8004ADF8
    // 0x8004A9D8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004A9D8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004A9DC:
    // 0x8004A9DC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004A9E0: jal         0x80048528
    // 0x8004A9E4: addiu       $a2, $sp, 0x11C
    ctx->r6 = ADD32(ctx->r29, 0X11C);
    func_80048528(rdram, ctx);
        goto after_60;
    // 0x8004A9E4: addiu       $a2, $sp, 0x11C
    ctx->r6 = ADD32(ctx->r29, 0X11C);
    after_60:
    // 0x8004A9E8: bne         $v0, $zero, L_8004AA00
    if (ctx->r2 != 0) {
        // 0x8004A9EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004AA00;
    }
    // 0x8004A9EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004A9F0: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x8004A9F4: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x8004A9F8: nop

    // 0x8004A9FC: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
L_8004AA00:
    // 0x8004AA00: b           L_8004ADF8
    // 0x8004AA04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004AA04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004AA08:
    // 0x8004AA08: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AA0C: jal         0x800487F4
    // 0x8004AA10: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    func_800487F4(rdram, ctx);
        goto after_61;
    // 0x8004AA10: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    after_61:
    // 0x8004AA14: b           L_8004ADF8
    // 0x8004AA18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004AA18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004AA1C:
    // 0x8004AA1C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AA20: jal         0x80048528
    // 0x8004AA24: addiu       $a2, $sp, 0xF4
    ctx->r6 = ADD32(ctx->r29, 0XF4);
    func_80048528(rdram, ctx);
        goto after_62;
    // 0x8004AA24: addiu       $a2, $sp, 0xF4
    ctx->r6 = ADD32(ctx->r29, 0XF4);
    after_62:
    // 0x8004AA28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004AA2C: bne         $v0, $zero, L_8004AAB4
    if (ctx->r2 != 0) {
        // 0x8004AA30: sw          $zero, 0x0($t5)
        MEM_W(0X0, ctx->r13) = 0;
            goto L_8004AAB4;
    }
    // 0x8004AA30: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x8004AA34: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AA38: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x8004AA3C: jal         0x8004878C
    // 0x8004AA40: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_63;
    // 0x8004AA40: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_63:
    // 0x8004AA44: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004AA48: bne         $v0, $zero, L_8004AAB4
    if (ctx->r2 != 0) {
        // 0x8004AA4C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004AAB4;
    }
    // 0x8004AA4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004AA50: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x8004AA54: nop

    // 0x8004AA58: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x8004AA5C: nop

    // 0x8004AA60: andi        $t7, $t9, 0x2
    ctx->r15 = ctx->r25 & 0X2;
    // 0x8004AA64: beq         $t7, $zero, L_8004AA90
    if (ctx->r15 == 0) {
        // 0x8004AA68: nop
    
            goto L_8004AA90;
    }
    // 0x8004AA68: nop

    // 0x8004AA6C: lw          $v0, 0x38($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X38);
    // 0x8004AA70: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8004AA74: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8004AA78: nop

    // 0x8004AA7C: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x8004AA80: nop

    // 0x8004AA84: lw          $t7, 0x30($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X30);
    // 0x8004AA88: b           L_8004ADF8
    // 0x8004AA8C: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
        goto L_8004ADF8;
    // 0x8004AA8C: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
L_8004AA90:
    // 0x8004AA90: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x8004AA94: nop

    // 0x8004AA98: lw          $v0, 0x38($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X38);
    // 0x8004AA9C: nop

    // 0x8004AAA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8004AAA4: nop

    // 0x8004AAA8: lw          $t9, 0x10($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X10);
    // 0x8004AAAC: nop

    // 0x8004AAB0: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
L_8004AAB4:
    // 0x8004AAB4: b           L_8004ADF8
    // 0x8004AAB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004AAB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004AABC:
    // 0x8004AABC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AAC0: jal         0x80048528
    // 0x8004AAC4: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    func_80048528(rdram, ctx);
        goto after_64;
    // 0x8004AAC4: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    after_64:
    // 0x8004AAC8: bne         $v0, $zero, L_8004AAF8
    if (ctx->r2 != 0) {
        // 0x8004AACC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8004AAF8;
    }
    // 0x8004AACC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004AAD0: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x8004AAD4: nop

    // 0x8004AAD8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8004AADC: nop

    // 0x8004AAE0: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x8004AAE4: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x8004AAE8: nop

    // 0x8004AAEC: lw          $t9, 0x8($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X8);
    // 0x8004AAF0: nop

    // 0x8004AAF4: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
L_8004AAF8:
    // 0x8004AAF8: b           L_8004ADF8
    // 0x8004AAFC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_8004ADF8;
    // 0x8004AAFC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004AB00:
    // 0x8004AB00: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AB04: jal         0x80048528
    // 0x8004AB08: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    func_80048528(rdram, ctx);
        goto after_65;
    // 0x8004AB08: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    after_65:
    // 0x8004AB0C: bne         $v0, $zero, L_8004AC7C
    if (ctx->r2 != 0) {
        // 0x8004AB10: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8004AC7C;
    }
    // 0x8004AB10: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8004AB14: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AB18: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x8004AB1C: jal         0x8004878C
    // 0x8004AB20: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_8004878C(rdram, ctx);
        goto after_66;
    // 0x8004AB20: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_66:
    // 0x8004AB24: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004AB28: bne         $v0, $zero, L_8004AC7C
    if (ctx->r2 != 0) {
        // 0x8004AB2C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8004AC7C;
    }
    // 0x8004AB2C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8004AB30: lwc1        $f0, 0x0($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8004AB34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004AB38: nop

    // 0x8004AB3C: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x8004AB40: nop

    // 0x8004AB44: bc1f        L_8004AB7C
    if (!c1cs) {
        // 0x8004AB48: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8004AB7C;
    }
    // 0x8004AB48: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004AB4C: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8004AB50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AB54: bne         $t7, $at, L_8004AB78
    if (ctx->r15 != ctx->r1) {
        // 0x8004AB58: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8004AB78;
    }
    // 0x8004AB58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004AB5C: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x8004AB60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004AB64: jal         0x80018658
    // 0x8004AB68: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    func_80018658(rdram, ctx);
        goto after_67;
    // 0x8004AB68: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    after_67:
    // 0x8004AB6C: lw          $v1, 0xB0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB0);
    // 0x8004AB70: b           L_8004ADFC
    // 0x8004AB74: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8004ADFC;
    // 0x8004AB74: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004AB78:
    // 0x8004AB78: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_8004AB7C:
    // 0x8004AB7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004AB80: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x8004AB84: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x8004AB88: nop

    // 0x8004AB8C: bc1t        L_8004AC58
    if (c1cs) {
        // 0x8004AB90: nop
    
            goto L_8004AC58;
    }
    // 0x8004AB90: nop

    // 0x8004AB94: swc1        $f0, 0x68($t8)
    MEM_W(0X68, ctx->r24) = ctx->f0.u32l;
    // 0x8004AB98: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x8004AB9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8004ABA0: lw          $t9, 0x10($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X10);
    // 0x8004ABA4: nop

    // 0x8004ABA8: andi        $t7, $t9, 0x10
    ctx->r15 = ctx->r25 & 0X10;
    // 0x8004ABAC: beq         $t7, $zero, L_8004AC54
    if (ctx->r15 == 0) {
        // 0x8004ABB0: nop
    
            goto L_8004AC54;
    }
    // 0x8004ABB0: nop

    // 0x8004ABB4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8004ABB8: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8004ABBC: lwc1        $f4, 0x68($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X68);
    // 0x8004ABC0: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x8004ABC4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004ABC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8004ABCC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8004ABD0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004ABD4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8004ABD8: beq         $a2, $zero, L_8004AC24
    if (ctx->r6 == 0) {
        // 0x8004ABDC: nop
    
            goto L_8004AC24;
    }
    // 0x8004ABDC: nop

    // 0x8004ABE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004ABE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8004ABE8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004ABEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004ABF0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8004ABF4: nop

    // 0x8004ABF8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8004ABFC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8004AC00: nop

    // 0x8004AC04: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8004AC08: bne         $a2, $zero, L_8004AC1C
    if (ctx->r6 != 0) {
        // 0x8004AC0C: nop
    
            goto L_8004AC1C;
    }
    // 0x8004AC0C: nop

    // 0x8004AC10: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8004AC14: b           L_8004AC34
    // 0x8004AC18: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8004AC34;
    // 0x8004AC18: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_8004AC1C:
    // 0x8004AC1C: b           L_8004AC34
    // 0x8004AC20: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8004AC34;
    // 0x8004AC20: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_8004AC24:
    // 0x8004AC24: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8004AC28: nop

    // 0x8004AC2C: bltz        $a2, L_8004AC1C
    if (SIGNED(ctx->r6) < 0) {
        // 0x8004AC30: nop
    
            goto L_8004AC1C;
    }
    // 0x8004AC30: nop

L_8004AC34:
    // 0x8004AC34: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8004AC38: sw          $a3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r7;
    // 0x8004AC3C: jal         0x80018658
    // 0x8004AC40: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_80018658(rdram, ctx);
        goto after_68;
    // 0x8004AC40: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_68:
    // 0x8004AC44: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x8004AC48: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004AC4C: b           L_8004AC5C
    // 0x8004AC50: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
        goto L_8004AC5C;
    // 0x8004AC50: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
L_8004AC54:
    // 0x8004AC54: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8004AC58:
    // 0x8004AC58: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
L_8004AC5C:
    // 0x8004AC5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AC60: beq         $a2, $at, L_8004AC7C
    if (ctx->r6 == ctx->r1) {
        // 0x8004AC64: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8004AC7C;
    }
    // 0x8004AC64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004AC68: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x8004AC6C: jal         0x80018658
    // 0x8004AC70: sw          $a3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r7;
    func_80018658(rdram, ctx);
        goto after_69;
    // 0x8004AC70: sw          $a3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r7;
    after_69:
    // 0x8004AC74: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x8004AC78: nop

L_8004AC7C:
    // 0x8004AC7C: b           L_8004ADF8
    // 0x8004AC80: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
        goto L_8004ADF8;
    // 0x8004AC80: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8004AC84:
    // 0x8004AC84: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x8004AC88: jal         0x800485F4
    // 0x8004AC8C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    func_800485F4(rdram, ctx);
        goto after_70;
    // 0x8004AC8C: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    after_70:
    // 0x8004AC90: b           L_8004ADF8
    // 0x8004AC94: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004AC94: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004AC98:
    // 0x8004AC98: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AC9C: jal         0x80048528
    // 0x8004ACA0: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    func_80048528(rdram, ctx);
        goto after_71;
    // 0x8004ACA0: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    after_71:
    // 0x8004ACA4: bne         $v0, $zero, L_8004AD70
    if (ctx->r2 != 0) {
        // 0x8004ACA8: sw          $v0, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r2;
            goto L_8004AD70;
    }
    // 0x8004ACA8: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x8004ACAC: lw          $s0, 0x9C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X9C);
    // 0x8004ACB0: nop

    // 0x8004ACB4: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
    // 0x8004ACB8: jal         0x800486DC
    // 0x8004ACBC: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    func_800486DC(rdram, ctx);
        goto after_72;
    // 0x8004ACBC: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    after_72:
    // 0x8004ACC0: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004ACC4: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x8004ACC8: addiu       $t0, $sp, 0x7C
    ctx->r8 = ADD32(ctx->r29, 0X7C);
    // 0x8004ACCC: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x8004ACD0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8004ACD4: jal         0x80048738
    // 0x8004ACD8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_80048738(rdram, ctx);
        goto after_73;
    // 0x8004ACD8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_73:
    // 0x8004ACDC: addiu       $v1, $t5, 0x8
    ctx->r3 = ADD32(ctx->r13, 0X8);
    // 0x8004ACE0: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004ACE4: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004ACE8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004ACEC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004ACF0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8004ACF4: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x8004ACF8: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004ACFC: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004AD00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004AD04: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8004AD08: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x8004AD0C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004AD10: sw          $t5, 0x438($sp)
    MEM_W(0X438, ctx->r29) = ctx->r13;
    // 0x8004AD14: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004AD18: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8004AD1C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x8004AD20: jal         0x8005D1B4
    // 0x8004AD24: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8005D1B4(rdram, ctx);
        goto after_74;
    // 0x8004AD24: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_74:
    // 0x8004AD28: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x8004AD2C: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x8004AD30: lw          $t5, 0x438($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X438);
    // 0x8004AD34: sw          $v0, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r2;
    // 0x8004AD38: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004AD3C: nop

    // 0x8004AD40: swc1        $f10, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->f10.u32l;
    // 0x8004AD44: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004AD48: nop

    // 0x8004AD4C: swc1        $f4, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->f4.u32l;
    // 0x8004AD50: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004AD54: nop

    // 0x8004AD58: swc1        $f6, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->f6.u32l;
    // 0x8004AD5C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8004AD60: nop

    // 0x8004AD64: lw          $t8, 0x58($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X58);
    // 0x8004AD68: nop

    // 0x8004AD6C: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
L_8004AD70:
    // 0x8004AD70: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x8004AD74: b           L_8004ADFC
    // 0x8004AD78: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8004ADFC;
    // 0x8004AD78: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004AD7C:
    // 0x8004AD7C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004AD80: jal         0x80048528
    // 0x8004AD84: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    func_80048528(rdram, ctx);
        goto after_75;
    // 0x8004AD84: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_75:
    // 0x8004AD88: bne         $v0, $zero, L_8004ADB0
    if (ctx->r2 != 0) {
        // 0x8004AD8C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8004ADB0;
    }
    // 0x8004AD8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8004AD90: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x8004AD94: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x8004AD98: jal         0x800486DC
    // 0x8004AD9C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    func_800486DC(rdram, ctx);
        goto after_76;
    // 0x8004AD9C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    after_76:
    // 0x8004ADA0: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8004ADA4: bne         $v0, $zero, L_8004ADB0
    if (ctx->r2 != 0) {
        // 0x8004ADA8: nop
    
            goto L_8004ADB0;
    }
    // 0x8004ADA8: nop

    // 0x8004ADAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8004ADB0:
    // 0x8004ADB0: b           L_8004ADF8
    // 0x8004ADB4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_8004ADF8;
    // 0x8004ADB4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8004ADB8:
    // 0x8004ADB8: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x8004ADBC: jal         0x80048640
    // 0x8004ADC0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    func_80048640(rdram, ctx);
        goto after_77;
    // 0x8004ADC0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    after_77:
    // 0x8004ADC4: b           L_8004ADF8
    // 0x8004ADC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004ADC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004ADCC:
    // 0x8004ADCC: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x8004ADD0: jal         0x80048640
    // 0x8004ADD4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    func_80048640(rdram, ctx);
        goto after_78;
    // 0x8004ADD4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    after_78:
    // 0x8004ADD8: b           L_8004ADF8
    // 0x8004ADDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004ADDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004ADE0:
    // 0x8004ADE0: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
    // 0x8004ADE4: jal         0x80048640
    // 0x8004ADE8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    func_80048640(rdram, ctx);
        goto after_79;
    // 0x8004ADE8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    after_79:
    // 0x8004ADEC: b           L_8004ADF8
    // 0x8004ADF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004ADF8;
    // 0x8004ADF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004ADF4:
    // 0x8004ADF4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8004ADF8:
    // 0x8004ADF8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8004ADFC:
    // 0x8004ADFC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8004AE00: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004AE04: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8004AE08: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004AE0C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8004AE10: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004AE14: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8004AE18: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004AE1C: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8004AE20: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004AE24: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8004AE28: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004AE2C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8004AE30: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8004AE34: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8004AE38: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x8004AE3C: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8004AE40: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x8004AE44: addiu       $sp, $sp, 0x430
    ctx->r29 = ADD32(ctx->r29, 0X430);
    // 0x8004AE48: jr          $ra
    // 0x8004AE4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004AE4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004AE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AE50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8004AE54: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8004AE58: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x8004AE5C: addiu       $t7, $t7, -0x6EF0
    ctx->r15 = ADD32(ctx->r15, -0X6EF0);
    // 0x8004AE60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004AE64: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8004AE68: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x8004AE6C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004AE70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004AE74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AE78: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8004AE7C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8004AE80: beq         $a3, $at, L_8004AEAC
    if (ctx->r7 == ctx->r1) {
        // 0x8004AE84: sw          $a1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r5;
            goto L_8004AEAC;
    }
    // 0x8004AE84: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8004AE88: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8004AE8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8004AE90: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8004AE94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8004AE98: jal         0x8004A0A0
    // 0x8004AE9C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8004AE9C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    after_0:
    // 0x8004AEA0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004AEA4: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8004AEA8: nop

L_8004AEAC:
    // 0x8004AEAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004AEB0: addiu       $v0, $v0, 0x1AD8
    ctx->r2 = ADD32(ctx->r2, 0X1AD8);
    // 0x8004AEB4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8004AEB8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8004AEBC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8004AEC0: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
    // 0x8004AEC4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8004AEC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004AECC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8004AED0: jal         0x8004A0A0
    // 0x8004AED4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8004AED4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x8004AED8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004AEDC: addiu       $v0, $v0, 0x1AD8
    ctx->r2 = ADD32(ctx->r2, 0X1AD8);
    // 0x8004AEE0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004AEE4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8004AEE8: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x8004AEEC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8004AEF0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8004AEF4: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x8004AEF8: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8004AEFC: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x8004AF00: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8004AF04: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8004AF08: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8004AF0C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8004AF10: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8004AF14: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8004AF18: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x8004AF1C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8004AF20: jal         0x80057CA0
    // 0x8004AF24: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8004AF24: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_2:
    // 0x8004AF28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AF2C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8004AF30: jr          $ra
    // 0x8004AF34: nop

    return;
    // 0x8004AF34: nop

    // 0x8004AF38: jr          $ra
    // 0x8004AF3C: nop

    return;
    // 0x8004AF3C: nop

    // 0x8004AF40: jr          $ra
    // 0x8004AF44: nop

    return;
    // 0x8004AF44: nop

    // 0x8004AF48: jr          $ra
    // 0x8004AF4C: nop

    return;
    // 0x8004AF4C: nop

    // 0x8004AF50: jr          $ra
    // 0x8004AF54: nop

    return;
    // 0x8004AF54: nop

    // 0x8004AF58: jr          $ra
    // 0x8004AF5C: nop

    return;
    // 0x8004AF5C: nop

    // 0x8004AF60: jr          $ra
    // 0x8004AF64: nop

    return;
    // 0x8004AF64: nop

;}
RECOMP_FUNC void func_8004AF68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AF68: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8004AF6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AF70: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8004AF74: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8004AF78: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8004AF7C: bne         $t6, $a1, L_8004AF8C
    if (ctx->r14 != ctx->r5) {
        // 0x8004AF80: lui         $at, 0xC080
        ctx->r1 = S32(0XC080 << 16);
            goto L_8004AF8C;
    }
    // 0x8004AF80: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8004AF84: b           L_8004B4F0
    // 0x8004AF88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004B4F0;
    // 0x8004AF88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004AF8C:
    // 0x8004AF8C: lwc1        $f0, 0x14($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8004AF90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004AF94: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8004AF98: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8004AF9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8004AFA0: bc1t        L_8004AFC0
    if (c1cs) {
        // 0x8004AFA4: nop
    
            goto L_8004AFC0;
    }
    // 0x8004AFA4: nop

    // 0x8004AFA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004AFAC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8004AFB0: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8004AFB4: nop

    // 0x8004AFB8: bc1f        L_8004B07C
    if (!c1cs) {
        // 0x8004AFBC: nop
    
            goto L_8004B07C;
    }
    // 0x8004AFBC: nop

L_8004AFC0:
    // 0x8004AFC0: jal         0x80048528
    // 0x8004AFC4: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x8004AFC4: addiu       $a2, $sp, 0xC4
    ctx->r6 = ADD32(ctx->r29, 0XC4);
    after_0:
    // 0x8004AFC8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8004AFCC: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004AFD0: jal         0x8005A774
    // 0x8004AFD4: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    func_8005A774(rdram, ctx);
        goto after_1;
    // 0x8004AFD4: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    after_1:
    // 0x8004AFD8: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x8004AFDC: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004AFE0: beq         $t7, $zero, L_8004AFF8
    if (ctx->r15 == 0) {
        // 0x8004AFE4: lui         $at, 0xC080
        ctx->r1 = S32(0XC080 << 16);
            goto L_8004AFF8;
    }
    // 0x8004AFE4: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8004AFE8: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x8004AFEC: nop

    // 0x8004AFF0: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x8004AFF4: sw          $t9, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r25;
L_8004AFF8:
    // 0x8004AFF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004AFFC: lwc1        $f10, 0x14($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8004B000: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x8004B004: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8004B008: nop

    // 0x8004B00C: bc1f        L_8004B05C
    if (!c1cs) {
        // 0x8004B010: nop
    
            goto L_8004B05C;
    }
    // 0x8004B010: nop

    // 0x8004B014: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x8004B018: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x8004B01C: beq         $t6, $zero, L_8004B074
    if (ctx->r14 == 0) {
        // 0x8004B020: nop
    
            goto L_8004B074;
    }
    // 0x8004B020: nop

    // 0x8004B024: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004B028: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004B02C: beq         $t9, $at, L_8004B044
    if (ctx->r25 == ctx->r1) {
        // 0x8004B030: lw          $t7, 0xC8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC8);
            goto L_8004B044;
    }
    // 0x8004B030: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x8004B034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004B038: nop

    // 0x8004B03C: swc1        $f4, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f4.u32l;
    // 0x8004B040: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
L_8004B044:
    // 0x8004B044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004B048: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x8004B04C: nop

    // 0x8004B050: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8004B054: b           L_8004B4F0
    // 0x8004B058: sw          $t9, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r25;
        goto L_8004B4F0;
    // 0x8004B058: sw          $t9, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r25;
L_8004B05C:
    // 0x8004B05C: beq         $t6, $zero, L_8004B074
    if (ctx->r14 == 0) {
        // 0x8004B060: nop
    
            goto L_8004B074;
    }
    // 0x8004B060: nop

    // 0x8004B064: lw          $t8, 0x3C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X3C);
    // 0x8004B068: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8004B06C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8004B070: sw          $t9, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r25;
L_8004B074:
    // 0x8004B074: b           L_8004B4F0
    // 0x8004B078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004B4F0;
    // 0x8004B078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004B07C:
    // 0x8004B07C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004B080: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8004B084: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8004B088: nop

    // 0x8004B08C: bc1f        L_8004B414
    if (!c1cs) {
        // 0x8004B090: nop
    
            goto L_8004B414;
    }
    // 0x8004B090: nop

    // 0x8004B094: jal         0x80048528
    // 0x8004B098: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    func_80048528(rdram, ctx);
        goto after_2;
    // 0x8004B098: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    after_2:
    // 0x8004B09C: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x8004B0A0: nop

    // 0x8004B0A4: lw          $a0, 0xCC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XCC);
    // 0x8004B0A8: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    // 0x8004B0AC: jal         0x80019164
    // 0x8004B0B0: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x8004B0B0: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_3:
    // 0x8004B0B4: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8004B0B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004B0BC: lw          $t9, 0x58($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X58);
    // 0x8004B0C0: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B0C4: beq         $t9, $at, L_8004B128
    if (ctx->r25 == ctx->r1) {
        // 0x8004B0C8: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8004B128;
    }
    // 0x8004B0C8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8004B0CC: lw          $t6, 0x18($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X18);
    // 0x8004B0D0: lwc1        $f10, 0x5C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X5C);
    // 0x8004B0D4: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8004B0D8: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8004B0DC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004B0E0: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x8004B0E4: lw          $t7, 0x18($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X18);
    // 0x8004B0E8: lwc1        $f8, 0x60($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X60);
    // 0x8004B0EC: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8004B0F0: nop

    // 0x8004B0F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004B0F8: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x8004B0FC: lw          $t8, 0x18($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X18);
    // 0x8004B100: lwc1        $f6, 0x64($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X64);
    // 0x8004B104: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8004B108: nop

    // 0x8004B10C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004B110: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x8004B114: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    // 0x8004B118: jal         0x8005CFA4
    // 0x8004B11C: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_8005CFA4(rdram, ctx);
        goto after_4;
    // 0x8004B11C: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_4:
    // 0x8004B120: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B124: nop

L_8004B128:
    // 0x8004B128: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8004B12C: jal         0x80048528
    // 0x8004B130: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    func_80048528(rdram, ctx);
        goto after_5;
    // 0x8004B130: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    after_5:
    // 0x8004B134: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B138: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004B13C: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x8004B140: nop

    // 0x8004B144: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8004B148: beq         $t7, $zero, L_8004B24C
    if (ctx->r15 == 0) {
        // 0x8004B14C: nop
    
            goto L_8004B24C;
    }
    // 0x8004B14C: nop

    // 0x8004B150: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8004B154: lwc1        $f10, 0x18($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8004B158: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B15C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8004B160: nop

    // 0x8004B164: bc1t        L_8004B214
    if (c1cs) {
        // 0x8004B168: nop
    
            goto L_8004B214;
    }
    // 0x8004B168: nop

    // 0x8004B16C: lwc1        $f4, 0xB8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XB8);
    // 0x8004B170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004B174: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8004B178: nop

    // 0x8004B17C: bc1f        L_8004B19C
    if (!c1cs) {
        // 0x8004B180: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_8004B19C;
    }
    // 0x8004B180: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B184: lw          $a0, 0xB0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XB0);
    // 0x8004B188: jal         0x800191E8
    // 0x8004B18C: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_800191E8(rdram, ctx);
        goto after_6;
    // 0x8004B18C: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_6:
    // 0x8004B190: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B194: nop

    // 0x8004B198: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_8004B19C:
    // 0x8004B19C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8004B1A0: lwc1        $f6, 0xD0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XD0);
    // 0x8004B1A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004B1A8: swc1        $f6, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = ctx->f6.u32l;
    // 0x8004B1AC: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B1B0: lwc1        $f8, 0x18($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8004B1B4: nop

    // 0x8004B1B8: swc1        $f8, 0xB8($t6)
    MEM_W(0XB8, ctx->r14) = ctx->f8.u32l;
    // 0x8004B1BC: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B1C0: nop

    // 0x8004B1C4: lwc1        $f10, 0xD8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x8004B1C8: nop

    // 0x8004B1CC: swc1        $f10, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f10.u32l;
    // 0x8004B1D0: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8004B1D4: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B1D8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8004B1DC: addiu       $a1, $t9, 0xB4
    ctx->r5 = ADD32(ctx->r25, 0XB4);
    // 0x8004B1E0: bc1f        L_8004B24C
    if (!c1cs) {
        // 0x8004B1E4: nop
    
            goto L_8004B24C;
    }
    // 0x8004B1E4: nop

    // 0x8004B1E8: lw          $a0, 0xB0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XB0);
    // 0x8004B1EC: jal         0x80019164
    // 0x8004B1F0: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8004B1F0: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_7:
    // 0x8004B1F4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B1F8: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B1FC: lw          $a0, 0xB0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XB0);
    // 0x8004B200: jal         0x8001913C
    // 0x8004B204: addiu       $a1, $t2, 0x1C
    ctx->r5 = ADD32(ctx->r10, 0X1C);
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x8004B204: addiu       $a1, $t2, 0x1C
    ctx->r5 = ADD32(ctx->r10, 0X1C);
    after_8:
    // 0x8004B208: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B20C: b           L_8004B250
    // 0x8004B210: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
        goto L_8004B250;
    // 0x8004B210: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
L_8004B214:
    // 0x8004B214: lwc1        $f8, 0xB8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XB8);
    // 0x8004B218: nop

    // 0x8004B21C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x8004B220: nop

    // 0x8004B224: bc1t        L_8004B250
    if (c1cs) {
        // 0x8004B228: lw          $t9, 0xC0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XC0);
            goto L_8004B250;
    }
    // 0x8004B228: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8004B22C: swc1        $f0, 0xB8($t6)
    MEM_W(0XB8, ctx->r14) = ctx->f0.u32l;
    // 0x8004B230: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8004B234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004B238: lw          $a0, 0xB0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XB0);
    // 0x8004B23C: jal         0x800191E8
    // 0x8004B240: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    func_800191E8(rdram, ctx);
        goto after_9;
    // 0x8004B240: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    after_9:
    // 0x8004B244: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B248: nop

L_8004B24C:
    // 0x8004B24C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
L_8004B250:
    // 0x8004B250: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8004B254: lw          $v0, 0x4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4);
    // 0x8004B258: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x8004B25C: bne         $v0, $at, L_8004B274
    if (ctx->r2 != ctx->r1) {
        // 0x8004B260: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_8004B274;
    }
    // 0x8004B260: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8004B264: lw          $t8, 0x8($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X8);
    // 0x8004B268: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8004B26C: beq         $t8, $at, L_8004B2D8
    if (ctx->r24 == ctx->r1) {
        // 0x8004B270: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8004B2D8;
    }
    // 0x8004B270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8004B274:
    // 0x8004B274: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x8004B278: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004B27C: jal         0x8002F24C
    // 0x8004B280: sw          $v1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r3;
    func_8002F24C(rdram, ctx);
        goto after_10;
    // 0x8004B280: sw          $v1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r3;
    after_10:
    // 0x8004B284: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x8004B288: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B28C: bne         $v0, $zero, L_8004B2C4
    if (ctx->r2 != 0) {
        // 0x8004B290: addiu       $t6, $zero, 0x12
        ctx->r14 = ADD32(0, 0X12);
            goto L_8004B2C4;
    }
    // 0x8004B290: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8004B294: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004B298: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8004B29C: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x8004B2A0: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x8004B2A4: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8004B2A8: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x8004B2AC: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004B2B0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8004B2B4: jal         0x8004A0A0
    // 0x8004B2B8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_8004A0A0(rdram, ctx);
        goto after_11;
    // 0x8004B2B8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_11:
    // 0x8004B2BC: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B2C0: nop

L_8004B2C4:
    // 0x8004B2C4: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8004B2C8: nop

    // 0x8004B2CC: lw          $v0, 0x4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4);
    // 0x8004B2D0: nop

    // 0x8004B2D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_8004B2D8:
    // 0x8004B2D8: beq         $v0, $at, L_8004B414
    if (ctx->r2 == ctx->r1) {
        // 0x8004B2DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8004B414;
    }
    // 0x8004B2DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004B2E0: beq         $v0, $at, L_8004B414
    if (ctx->r2 == ctx->r1) {
        // 0x8004B2E4: nop
    
            goto L_8004B414;
    }
    // 0x8004B2E4: nop

    // 0x8004B2E8: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8004B2EC: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8004B2F0: lw          $a0, 0x1C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C);
    // 0x8004B2F4: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004B2F8: jal         0x8005A774
    // 0x8004B2FC: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    func_8005A774(rdram, ctx);
        goto after_12;
    // 0x8004B2FC: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    after_12:
    // 0x8004B300: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8004B304: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x8004B308: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B30C: beq         $t6, $zero, L_8004B414
    if (ctx->r14 == 0) {
        // 0x8004B310: nop
    
            goto L_8004B414;
    }
    // 0x8004B310: nop

    // 0x8004B314: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x8004B318: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004B31C: andi        $t9, $t7, 0x2
    ctx->r25 = ctx->r15 & 0X2;
    // 0x8004B320: beq         $t9, $zero, L_8004B414
    if (ctx->r25 == 0) {
        // 0x8004B324: nop
    
            goto L_8004B414;
    }
    // 0x8004B324: nop

    // 0x8004B328: lwc1        $f10, 0x5DC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5DC0);
    // 0x8004B32C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8004B330: nop

    // 0x8004B334: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x8004B338: nop

    // 0x8004B33C: bc1t        L_8004B414
    if (c1cs) {
        // 0x8004B340: nop
    
            goto L_8004B414;
    }
    // 0x8004B340: nop

    // 0x8004B344: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004B348: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8004B34C: nop

    // 0x8004B350: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8004B354: nop

    // 0x8004B358: bc1t        L_8004B414
    if (c1cs) {
        // 0x8004B35C: nop
    
            goto L_8004B414;
    }
    // 0x8004B35C: nop

    // 0x8004B360: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x8004B364: lwc1        $f4, 0xC0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC0);
    // 0x8004B368: lwc1        $f8, 0xC8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC8);
    // 0x8004B36C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004B370: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004B374: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004B378: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004B37C: jal         0x80056D10
    // 0x8004B380: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    func_80056D10(rdram, ctx);
        goto after_13;
    // 0x8004B380: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_13:
    // 0x8004B384: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004B388: lwc1        $f10, 0x5DC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5DC4);
    // 0x8004B38C: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B390: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8004B394: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8004B398: bc1t        L_8004B3E4
    if (c1cs) {
        // 0x8004B39C: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_8004B3E4;
    }
    // 0x8004B39C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8004B3A0: lwc1        $f12, 0x4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8004B3A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004B3A8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8004B3AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8004B3B0: bc1f        L_8004B3C4
    if (!c1cs) {
        // 0x8004B3B4: nop
    
            goto L_8004B3C4;
    }
    // 0x8004B3B4: nop

    // 0x8004B3B8: sub.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8004B3BC: b           L_8004B3C8
    // 0x8004B3C0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8004B3C8;
    // 0x8004B3C0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_8004B3C4:
    // 0x8004B3C4: sub.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f12.fl;
L_8004B3C8:
    // 0x8004B3C8: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x8004B3CC: nop

    // 0x8004B3D0: bc1f        L_8004B3EC
    if (!c1cs) {
        // 0x8004B3D4: nop
    
            goto L_8004B3EC;
    }
    // 0x8004B3D4: nop

    // 0x8004B3D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004B3DC: b           L_8004B3EC
    // 0x8004B3E0: sub.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f2.fl;
        goto L_8004B3EC;
    // 0x8004B3E0: sub.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f2.fl;
L_8004B3E4:
    // 0x8004B3E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004B3E8: nop

L_8004B3EC:
    // 0x8004B3EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8004B3F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004B3F4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8004B3F8: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x8004B3FC: nop

    // 0x8004B400: bc1f        L_8004B414
    if (!c1cs) {
        // 0x8004B404: nop
    
            goto L_8004B414;
    }
    // 0x8004B404: nop

    // 0x8004B408: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004B40C: nop

    // 0x8004B410: swc1        $f10, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f10.u32l;
L_8004B414:
    // 0x8004B414: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8004B418: jal         0x800485A4
    // 0x8004B41C: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    func_800485A4(rdram, ctx);
        goto after_14;
    // 0x8004B41C: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    after_14:
    // 0x8004B420: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8004B424: jal         0x80048528
    // 0x8004B428: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_80048528(rdram, ctx);
        goto after_15;
    // 0x8004B428: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_15:
    // 0x8004B42C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8004B430: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x8004B434: lw          $v1, 0x14($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X14);
    // 0x8004B438: andi        $t6, $a0, 0x8000
    ctx->r14 = ctx->r4 & 0X8000;
    // 0x8004B43C: bne         $t6, $zero, L_8004B44C
    if (ctx->r14 != 0) {
        // 0x8004B440: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8004B44C;
    }
    // 0x8004B440: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8004B444: andi        $t8, $v1, 0x40
    ctx->r24 = ctx->r3 & 0X40;
    // 0x8004B448: beq         $t8, $zero, L_8004B460
    if (ctx->r24 == 0) {
        // 0x8004B44C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8004B460;
    }
L_8004B44C:
    // 0x8004B44C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8004B450: bne         $a0, $at, L_8004B4A4
    if (ctx->r4 != ctx->r1) {
        // 0x8004B454: andi        $t7, $v1, 0x80
        ctx->r15 = ctx->r3 & 0X80;
            goto L_8004B4A4;
    }
    // 0x8004B454: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x8004B458: bne         $t7, $zero, L_8004B4A8
    if (ctx->r15 != 0) {
        // 0x8004B45C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8004B4A8;
    }
    // 0x8004B45C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004B460:
    // 0x8004B460: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8004B464: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8004B468: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8004B46C: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x8004B470: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8004B474: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x8004B478: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x8004B47C: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x8004B480: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x8004B484: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8004B488: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8004B48C: jal         0x80057CA0
    // 0x8004B490: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    func_80057CA0(rdram, ctx);
        goto after_16;
    // 0x8004B490: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    after_16:
    // 0x8004B494: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x8004B498: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8004B49C: b           L_8004B4AC
    // 0x8004B4A0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
        goto L_8004B4AC;
    // 0x8004B4A0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_8004B4A4:
    // 0x8004B4A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004B4A8:
    // 0x8004B4A8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_8004B4AC:
    // 0x8004B4AC: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x8004B4B0: jal         0x8005A774
    // 0x8004B4B4: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    func_8005A774(rdram, ctx);
        goto after_17;
    // 0x8004B4B4: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    after_17:
    // 0x8004B4B8: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x8004B4BC: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x8004B4C0: beq         $t9, $zero, L_8004B4F0
    if (ctx->r25 == 0) {
        // 0x8004B4C4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_8004B4F0;
    }
    // 0x8004B4C4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004B4C8: lw          $v0, 0x3C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X3C);
    // 0x8004B4CC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x8004B4D0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8004B4D4: beq         $t6, $zero, L_8004B4E0
    if (ctx->r14 == 0) {
        // 0x8004B4D8: nop
    
            goto L_8004B4E0;
    }
    // 0x8004B4D8: nop

    // 0x8004B4DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8004B4E0:
    // 0x8004B4E0: beq         $a2, $zero, L_8004B4EC
    if (ctx->r6 == 0) {
        // 0x8004B4E4: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_8004B4EC;
    }
    // 0x8004B4E4: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x8004B4E8: sw          $t8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r24;
L_8004B4EC:
    // 0x8004B4EC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8004B4F0:
    // 0x8004B4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B4F4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x8004B4F8: jr          $ra
    // 0x8004B4FC: nop

    return;
    // 0x8004B4FC: nop

;}
RECOMP_FUNC void func_8004B500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B500: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8004B504: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8004B508: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x8004B50C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B510: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8004B514: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8004B518: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004B51C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8004B520: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8004B524: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x8004B528: jal         0x8004AF68
    // 0x8004B52C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_8004AF68(rdram, ctx);
        goto after_0;
    // 0x8004B52C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x8004B530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B534: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8004B538: jr          $ra
    // 0x8004B53C: nop

    return;
    // 0x8004B53C: nop

;}
RECOMP_FUNC void func_8004B540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004B544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B548: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004B54C: jal         0x80048528
    // 0x8004B550: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_80048528(rdram, ctx);
        goto after_0;
    // 0x8004B550: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x8004B554: bne         $v0, $zero, L_8004B584
    if (ctx->r2 != 0) {
        // 0x8004B558: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004B584;
    }
    // 0x8004B558: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004B55C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004B560: nop

    // 0x8004B564: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x8004B568: jal         0x80050C9C
    // 0x8004B56C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80050C9C(rdram, ctx);
        goto after_1;
    // 0x8004B56C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8004B570: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8004B574: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8004B578: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B57C: jal         0x800499E0
    // 0x8004B580: nop

    func_800499E0(rdram, ctx);
        goto after_2;
    // 0x8004B580: nop

    after_2:
L_8004B584:
    // 0x8004B584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8004B58C: jr          $ra
    // 0x8004B590: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x8004B590: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_8004B594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B594: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004B598: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004B59C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004B5A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004B5A4: sw          $zero, 0x1AD4($at)
    MEM_W(0X1AD4, ctx->r1) = 0;
    // 0x8004B5A8: addiu       $a1, $a1, -0x2E48
    ctx->r5 = ADD32(ctx->r5, -0X2E48);
    // 0x8004B5AC: addiu       $v1, $v1, -0x3C48
    ctx->r3 = ADD32(ctx->r3, -0X3C48);
    // 0x8004B5B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8004B5B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004B5B8:
    // 0x8004B5B8: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x8004B5BC: sw          $v0, -0x54($v1)
    MEM_W(-0X54, ctx->r3) = ctx->r2;
    // 0x8004B5C0: swc1        $f0, -0x50($v1)
    MEM_W(-0X50, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5C4: sw          $a0, -0x4C($v1)
    MEM_W(-0X4C, ctx->r3) = ctx->r4;
    // 0x8004B5C8: sw          $a0, -0x48($v1)
    MEM_W(-0X48, ctx->r3) = ctx->r4;
    // 0x8004B5CC: swc1        $f0, -0x44($v1)
    MEM_W(-0X44, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5D0: swc1        $f0, -0x40($v1)
    MEM_W(-0X40, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5D4: swc1        $f0, -0x3C($v1)
    MEM_W(-0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5D8: sw          $v0, -0x38($v1)
    MEM_W(-0X38, ctx->r3) = ctx->r2;
    // 0x8004B5DC: swc1        $f0, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5E0: sw          $a0, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r4;
    // 0x8004B5E4: sw          $a0, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->r4;
    // 0x8004B5E8: swc1        $f0, -0x28($v1)
    MEM_W(-0X28, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5EC: swc1        $f0, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5F0: swc1        $f0, -0x20($v1)
    MEM_W(-0X20, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5F4: sw          $v0, -0x1C($v1)
    MEM_W(-0X1C, ctx->r3) = ctx->r2;
    // 0x8004B5F8: swc1        $f0, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->f0.u32l;
    // 0x8004B5FC: sw          $a0, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r4;
    // 0x8004B600: sw          $a0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r4;
    // 0x8004B604: swc1        $f0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f0.u32l;
    // 0x8004B608: swc1        $f0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f0.u32l;
    // 0x8004B60C: swc1        $f0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f0.u32l;
    // 0x8004B610: sw          $v0, -0x70($v1)
    MEM_W(-0X70, ctx->r3) = ctx->r2;
    // 0x8004B614: swc1        $f0, -0x6C($v1)
    MEM_W(-0X6C, ctx->r3) = ctx->f0.u32l;
    // 0x8004B618: sw          $a0, -0x68($v1)
    MEM_W(-0X68, ctx->r3) = ctx->r4;
    // 0x8004B61C: sw          $a0, -0x64($v1)
    MEM_W(-0X64, ctx->r3) = ctx->r4;
    // 0x8004B620: swc1        $f0, -0x60($v1)
    MEM_W(-0X60, ctx->r3) = ctx->f0.u32l;
    // 0x8004B624: swc1        $f0, -0x5C($v1)
    MEM_W(-0X5C, ctx->r3) = ctx->f0.u32l;
    // 0x8004B628: bne         $v1, $a1, L_8004B5B8
    if (ctx->r3 != ctx->r5) {
        // 0x8004B62C: swc1        $f0, -0x58($v1)
        MEM_W(-0X58, ctx->r3) = ctx->f0.u32l;
            goto L_8004B5B8;
    }
    // 0x8004B62C: swc1        $f0, -0x58($v1)
    MEM_W(-0X58, ctx->r3) = ctx->f0.u32l;
    // 0x8004B630: jr          $ra
    // 0x8004B634: nop

    return;
    // 0x8004B634: nop

    // 0x8004B638: jr          $ra
    // 0x8004B63C: nop

    return;
    // 0x8004B63C: nop

    // 0x8004B640: jr          $ra
    // 0x8004B644: nop

    return;
    // 0x8004B644: nop

;}
RECOMP_FUNC void func_8004B648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B648: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004B64C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004B650: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8004B654: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8004B658: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004B65C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8004B660: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004B664: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8004B668: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004B66C: jal         0x8004B594
    // 0x8004B670: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8004B594(rdram, ctx);
        goto after_0;
    // 0x8004B670: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8004B674: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8004B678: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8004B67C: addiu       $s4, $s4, -0x3C48
    ctx->r20 = ADD32(ctx->r20, -0X3C48);
    // 0x8004B680: addiu       $s7, $s7, 0x1AD4
    ctx->r23 = ADD32(ctx->r23, 0X1AD4);
    // 0x8004B684: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004B688: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8004B68C: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
    // 0x8004B690: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8004B694:
    // 0x8004B694: jal         0x8004BCE4
    // 0x8004B698: nop

    func_8004BCE4(rdram, ctx);
        goto after_1;
    // 0x8004B698: nop

    after_1:
    // 0x8004B69C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8004B6A0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8004B6A4: bne         $a0, $zero, L_8004B6B4
    if (ctx->r4 != 0) {
        // 0x8004B6A8: nop
    
            goto L_8004B6B4;
    }
    // 0x8004B6A8: nop

    // 0x8004B6AC: b           L_8004B73C
    // 0x8004B6B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8004B73C;
    // 0x8004B6B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004B6B4:
    // 0x8004B6B4: lw          $t6, -0x3C40($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C40);
    // 0x8004B6B8: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8004B6BC: beq         $s3, $t6, L_8004B6F4
    if (ctx->r19 == ctx->r14) {
        // 0x8004B6C0: subu        $t7, $t7, $s0
        ctx->r15 = SUB32(ctx->r15, ctx->r16);
            goto L_8004B6F4;
    }
    // 0x8004B6C0: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x8004B6C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004B6C8: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x8004B6CC: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
    // 0x8004B6D0: nop

L_8004B6D4:
    // 0x8004B6D4: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B6D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004B6DC: mflo        $t9
    ctx->r25 = lo;
    // 0x8004B6E0: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x8004B6E4: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8004B6E8: nop

    // 0x8004B6EC: bne         $s3, $v0, L_8004B6D4
    if (ctx->r19 != ctx->r2) {
        // 0x8004B6F0: nop
    
            goto L_8004B6D4;
    }
    // 0x8004B6F0: nop

L_8004B6F4:
    // 0x8004B6F4: beq         $s0, $s3, L_8004B73C
    if (ctx->r16 == ctx->r19) {
        // 0x8004B6F8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8004B73C;
    }
    // 0x8004B6F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004B6FC:
    // 0x8004B6FC: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B700: mflo        $t7
    ctx->r15 = lo;
    // 0x8004B704: addu        $a2, $s4, $t7
    ctx->r6 = ADD32(ctx->r20, ctx->r15);
    // 0x8004B708: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8004B70C: nop

    // 0x8004B710: beq         $a1, $s6, L_8004B720
    if (ctx->r5 == ctx->r22) {
        // 0x8004B714: nop
    
            goto L_8004B720;
    }
    // 0x8004B714: nop

    // 0x8004B718: jal         0x80048738
    // 0x8004B71C: addiu       $a0, $a1, 0xC0
    ctx->r4 = ADD32(ctx->r5, 0XC0);
    func_80048738(rdram, ctx);
        goto after_2;
    // 0x8004B71C: addiu       $a0, $a1, 0xC0
    ctx->r4 = ADD32(ctx->r5, 0XC0);
    after_2:
L_8004B720:
    // 0x8004B720: lw          $s0, 0xC($a2)
    ctx->r16 = MEM_W(ctx->r6, 0XC);
    // 0x8004B724: nop

    // 0x8004B728: bne         $s0, $s3, L_8004B6FC
    if (ctx->r16 != ctx->r19) {
        // 0x8004B72C: nop
    
            goto L_8004B6FC;
    }
    // 0x8004B72C: nop

    // 0x8004B730: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8004B734: nop

    // 0x8004B738: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004B73C:
    // 0x8004B73C: bne         $a0, $zero, L_8004B74C
    if (ctx->r4 != 0) {
        // 0x8004B740: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8004B74C;
    }
    // 0x8004B740: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8004B744: b           L_8004B80C
    // 0x8004B748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8004B80C;
    // 0x8004B748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004B74C:
    // 0x8004B74C: lw          $t8, -0x3C40($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C40);
    // 0x8004B750: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x8004B754: beq         $s3, $t8, L_8004B78C
    if (ctx->r19 == ctx->r24) {
        // 0x8004B758: subu        $t9, $t9, $v1
        ctx->r25 = SUB32(ctx->r25, ctx->r3);
            goto L_8004B78C;
    }
    // 0x8004B758: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8004B75C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004B760: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x8004B764: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8004B768: nop

L_8004B76C:
    // 0x8004B76C: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B770: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004B774: mflo        $t7
    ctx->r15 = lo;
    // 0x8004B778: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x8004B77C: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
    // 0x8004B780: nop

    // 0x8004B784: bne         $s3, $v0, L_8004B76C
    if (ctx->r19 != ctx->r2) {
        // 0x8004B788: nop
    
            goto L_8004B76C;
    }
    // 0x8004B788: nop

L_8004B78C:
    // 0x8004B78C: beq         $v1, $s3, L_8004B80C
    if (ctx->r3 == ctx->r19) {
        // 0x8004B790: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8004B80C;
    }
    // 0x8004B790: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004B794:
    // 0x8004B794: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B798: mflo        $t9
    ctx->r25 = lo;
    // 0x8004B79C: addu        $s1, $s4, $t9
    ctx->r17 = ADD32(ctx->r20, ctx->r25);
    // 0x8004B7A0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8004B7A4: nop

    // 0x8004B7A8: beq         $s0, $s6, L_8004B7F8
    if (ctx->r16 == ctx->r22) {
        // 0x8004B7AC: nop
    
            goto L_8004B7F8;
    }
    // 0x8004B7AC: nop

    // 0x8004B7B0: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x8004B7B4: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8004B7B8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8004B7BC: beq         $t7, $zero, L_8004B7F8
    if (ctx->r15 == 0) {
        // 0x8004B7C0: nop
    
            goto L_8004B7F8;
    }
    // 0x8004B7C0: nop

    // 0x8004B7C4: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8004B7C8: lw          $a0, 0xCC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XCC);
    // 0x8004B7CC: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x8004B7D0: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8004B7D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8004B7D8: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8004B7DC: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x8004B7E0: jal         0x800190F0
    // 0x8004B7E4: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    func_800190F0(rdram, ctx);
        goto after_3;
    // 0x8004B7E4: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x8004B7E8: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x8004B7EC: sw          $s2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r18;
    // 0x8004B7F0: jal         0x8004F2C8
    // 0x8004B7F4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8004F2C8(rdram, ctx);
        goto after_4;
    // 0x8004B7F4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_4:
L_8004B7F8:
    // 0x8004B7F8: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x8004B7FC: nop

    // 0x8004B800: bne         $v1, $s3, L_8004B794
    if (ctx->r3 != ctx->r19) {
        // 0x8004B804: nop
    
            goto L_8004B794;
    }
    // 0x8004B804: nop

    // 0x8004B808: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004B80C:
    // 0x8004B80C: jal         0x8004B594
    // 0x8004B810: nop

    func_8004B594(rdram, ctx);
        goto after_5;
    // 0x8004B810: nop

    after_5:
    // 0x8004B814: jal         0x80007AB0
    // 0x8004B818: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8004B818: nop

    after_6:
    // 0x8004B81C: b           L_8004B694
    // 0x8004B820: nop

        goto L_8004B694;
    // 0x8004B820: nop

    // 0x8004B824: nop

    // 0x8004B828: nop

    // 0x8004B82C: nop

    // 0x8004B830: nop

    // 0x8004B834: nop

    // 0x8004B838: nop

    // 0x8004B83C: nop

    // 0x8004B840: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004B844: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004B848: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004B84C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B850: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004B854: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8004B858: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8004B85C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B860: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8004B864: jr          $ra
    // 0x8004B868: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004B868: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004B86C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B86C: jr          $ra
    // 0x8004B870: nop

    return;
    // 0x8004B870: nop

;}
RECOMP_FUNC void func_8004B874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B874: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004B878: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004B87C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004B880: lw          $a0, -0x3C50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C50);
    // 0x8004B884: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8004B888: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004B88C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004B890: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004B894: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004B898: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004B89C: jal         0x800075A0
    // 0x8004B8A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x8004B8A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8004B8A4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004B8A8: addiu       $s3, $s3, 0x2310
    ctx->r19 = ADD32(ctx->r19, 0X2310);
    // 0x8004B8AC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8004B8B0: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8004B8B4: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
L_8004B8B8:
    // 0x8004B8B8: lw          $t6, 0x1C($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X1C);
    // 0x8004B8BC: nop

    // 0x8004B8C0: beq         $s5, $t6, L_8004B8D0
    if (ctx->r21 == ctx->r14) {
        // 0x8004B8C4: nop
    
            goto L_8004B8D0;
    }
    // 0x8004B8C4: nop

    // 0x8004B8C8: jal         0x80049E38
    // 0x8004B8CC: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    func_80049E38(rdram, ctx);
        goto after_1;
    // 0x8004B8CC: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    after_1:
L_8004B8D0:
    // 0x8004B8D0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8004B8D4: bne         $s4, $s6, L_8004B8B8
    if (ctx->r20 != ctx->r22) {
        // 0x8004B8D8: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_8004B8B8;
    }
    // 0x8004B8D8: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x8004B8DC: jal         0x800593B8
    // 0x8004B8E0: nop

    func_800593B8(rdram, ctx);
        goto after_2;
    // 0x8004B8E0: nop

    after_2:
    // 0x8004B8E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004B8E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004B8EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B8F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004B8F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004B8F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004B8FC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B900: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004B904: jr          $ra
    // 0x8004B908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004B908: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004B90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B90C: jr          $ra
    // 0x8004B910: nop

    return;
    // 0x8004B910: nop

;}
RECOMP_FUNC void func_8004B91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B920: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004B924: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8004B928: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004B92C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004B930: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8004B934: addiu       $s1, $s1, 0x2310
    ctx->r17 = ADD32(ctx->r17, 0X2310);
    // 0x8004B938: addiu       $t5, $t5, -0x6EF0
    ctx->r13 = ADD32(ctx->r13, -0X6EF0);
    // 0x8004B93C: sw          $zero, 0x1A60($at)
    MEM_W(0X1A60, ctx->r1) = 0;
    // 0x8004B940: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004B944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004B948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8004B94C:
    // 0x8004B94C: jal         0x80049CE4
    // 0x8004B950: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    func_80049CE4(rdram, ctx);
        goto after_0;
    // 0x8004B950: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    after_0:
    // 0x8004B954: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004B958: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x8004B95C: bne         $at, $zero, L_8004B94C
    if (ctx->r1 != 0) {
        // 0x8004B960: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8004B94C;
    }
    // 0x8004B960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004B964: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004B968: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8004B96C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8004B970:
    // 0x8004B970: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8004B974: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004B978: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8004B97C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8004B980: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8004B984: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8004B988: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004B98C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8004B990: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8004B994: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8004B998: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8004B99C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004B9A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8004B9A4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8004B9A8: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8004B9AC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8004B9B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8004B9B4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004B9B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8004B9BC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8004B9C0: bne         $s0, $a0, L_8004B970
    if (ctx->r16 != ctx->r4) {
        // 0x8004B9C4: addiu       $t5, $t5, 0xC
        ctx->r13 = ADD32(ctx->r13, 0XC);
            goto L_8004B970;
    }
    // 0x8004B9C4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x8004B9C8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004B9CC: addiu       $a0, $a0, -0x49B8
    ctx->r4 = ADD32(ctx->r4, -0X49B8);
    // 0x8004B9D0: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    // 0x8004B9D4: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x8004B9D8: jal         0x80007C3C
    // 0x8004B9DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x8004B9DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8004B9E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004B9E4: jal         0x80059490
    // 0x8004B9E8: sw          $v0, -0x3C50($at)
    MEM_W(-0X3C50, ctx->r1) = ctx->r2;
    func_80059490(rdram, ctx);
        goto after_2;
    // 0x8004B9E8: sw          $v0, -0x3C50($at)
    MEM_W(-0X3C50, ctx->r1) = ctx->r2;
    after_2:
    // 0x8004B9EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B9F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004B9F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004B9F8: jr          $ra
    // 0x8004B9FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004B9FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
