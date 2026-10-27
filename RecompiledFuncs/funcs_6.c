#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000E2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E2F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8000E2F4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000E2F8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000E2FC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8000E300: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000E304: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000E308: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000E30C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000E310: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000E314: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000E318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E31C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8000E320: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8000E324: lhu         $t7, 0x190($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X190);
    // 0x8000E328: lui         $t8, 0xDB02
    ctx->r24 = S32(0XDB02 << 16);
    // 0x8000E32C: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x8000E330: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000E334: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8000E338: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x8000E33C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8000E340: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8000E344: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8000E348: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x8000E34C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8000E350: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8000E354: beq         $t1, $zero, L_8000E408
    if (ctx->r9 == 0) {
        // 0x8000E358: addiu       $s2, $a0, 0x8
        ctx->r18 = ADD32(ctx->r4, 0X8);
            goto L_8000E408;
    }
    // 0x8000E358: addiu       $s2, $a0, 0x8
    ctx->r18 = ADD32(ctx->r4, 0X8);
    // 0x8000E35C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000E360: or          $s7, $t6, $zero
    ctx->r23 = ctx->r14 | 0;
    // 0x8000E364: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
    // 0x8000E368: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x8000E36C: addiu       $s4, $zero, 0x38
    ctx->r20 = ADD32(0, 0X38);
    // 0x8000E370: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x8000E374: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8000E378:
    // 0x8000E378: sllv        $t3, $t2, $s1
    ctx->r11 = S32(ctx->r10 << (ctx->r17 & 31));
    // 0x8000E37C: and         $t4, $s7, $t3
    ctx->r12 = ctx->r23 & ctx->r11;
    // 0x8000E380: beq         $t4, $zero, L_8000E3F4
    if (ctx->r12 == 0) {
        // 0x8000E384: nop
    
            goto L_8000E3F4;
    }
    // 0x8000E384: nop

    // 0x8000E388: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000E38C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8000E390: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8000E394: mflo        $t5
    ctx->r13 = lo;
    // 0x8000E398: addu        $s0, $fp, $t5
    ctx->r16 = ADD32(ctx->r30, ctx->r13);
    // 0x8000E39C: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8000E3A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000E3A4: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8000E3A8: beq         $t7, $zero, L_8000E3F4
    if (ctx->r15 == 0) {
        // 0x8000E3AC: nop
    
            goto L_8000E3F4;
    }
    // 0x8000E3AC: nop

    // 0x8000E3B0: jal         0x8000DFD4
    // 0x8000E3B4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_8000DFD4(rdram, ctx);
        goto after_0;
    // 0x8000E3B4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_0:
    // 0x8000E3B8: beq         $v0, $zero, L_8000E3DC
    if (ctx->r2 == 0) {
        // 0x8000E3BC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8000E3DC;
    }
    // 0x8000E3BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E3C0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8000E3C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E3C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000E3CC: jal         0x8000DE34
    // 0x8000E3D0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_8000DE34(rdram, ctx);
        goto after_1;
    // 0x8000E3D0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_1:
    // 0x8000E3D4: b           L_8000E3F4
    // 0x8000E3D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8000E3F4;
    // 0x8000E3D8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8000E3DC:
    // 0x8000E3DC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8000E3E0: addiu       $a3, $a3, -0x13E8
    ctx->r7 = ADD32(ctx->r7, -0X13E8);
    // 0x8000E3E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000E3E8: jal         0x8000DE34
    // 0x8000E3EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000DE34(rdram, ctx);
        goto after_2;
    // 0x8000E3EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8000E3F0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8000E3F4:
    // 0x8000E3F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000E3F8: bne         $s1, $s6, L_8000E378
    if (ctx->r17 != ctx->r22) {
        // 0x8000E3FC: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8000E378;
    }
    // 0x8000E3FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000E400: b           L_8000E444
    // 0x8000E404: lw          $t2, 0x188($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X188);
        goto L_8000E444;
    // 0x8000E404: lw          $t2, 0x188($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X188);
L_8000E408:
    // 0x8000E408: lbu         $t8, 0x193($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X193);
    // 0x8000E40C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E410: bne         $t8, $zero, L_8000E438
    if (ctx->r24 != 0) {
        // 0x8000E414: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8000E438;
    }
    // 0x8000E414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000E418: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8000E41C: addiu       $a3, $a3, -0x13E8
    ctx->r7 = ADD32(ctx->r7, -0X13E8);
    // 0x8000E420: jal         0x8000DD28
    // 0x8000E424: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000DD28(rdram, ctx);
        goto after_3;
    // 0x8000E424: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8000E428: lbu         $t9, 0x193($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X193);
    // 0x8000E42C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8000E430: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8000E434: sb          $t0, 0x193($fp)
    MEM_B(0X193, ctx->r30) = ctx->r8;
L_8000E438:
    // 0x8000E438: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000E43C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8000E440: lw          $t2, 0x188($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X188);
L_8000E444:
    // 0x8000E444: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8000E448: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8000E44C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E450: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8000E454: jal         0x8000DE10
    // 0x8000E458: and         $a2, $t2, $at
    ctx->r6 = ctx->r10 & ctx->r1;
    func_8000DE10(rdram, ctx);
        goto after_4;
    // 0x8000E458: and         $a2, $t2, $at
    ctx->r6 = ctx->r10 & ctx->r1;
    after_4:
    // 0x8000E45C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000E460: addiu       $v1, $v1, 0x6278
    ctx->r3 = ADD32(ctx->r3, 0X6278);
    // 0x8000E464: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8000E468: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000E46C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E470: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E474: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000E478: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000E47C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000E480: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000E484: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000E488: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000E48C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8000E490: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000E494: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8000E498: jr          $ra
    // 0x8000E49C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8000E49C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8000E4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E4A0: jr          $ra
    // 0x8000E4A4: nop

    return;
    // 0x8000E4A4: nop

;}
RECOMP_FUNC void func_8000E4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E4A8: blez        $a2, L_8000E50C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8000E4AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000E50C;
    }
    // 0x8000E4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000E4B0: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x8000E4B4: beq         $a3, $zero, L_8000E4DC
    if (ctx->r7 == 0) {
        // 0x8000E4B8: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8000E4DC;
    }
    // 0x8000E4B8: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8000E4BC:
    // 0x8000E4BC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8000E4C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000E4C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000E4C8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000E4CC: bne         $v1, $v0, L_8000E4BC
    if (ctx->r3 != ctx->r2) {
        // 0x8000E4D0: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_8000E4BC;
    }
    // 0x8000E4D0: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x8000E4D4: beq         $v0, $a2, L_8000E50C
    if (ctx->r2 == ctx->r6) {
        // 0x8000E4D8: nop
    
            goto L_8000E50C;
    }
    // 0x8000E4D8: nop

L_8000E4DC:
    // 0x8000E4DC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8000E4E0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000E4E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000E4E8: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x8000E4EC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8000E4F0: sw          $t8, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->r24;
    // 0x8000E4F4: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x8000E4F8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8000E4FC: sw          $t9, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r25;
    // 0x8000E500: lw          $t0, -0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, -0X4);
    // 0x8000E504: bne         $v0, $a2, L_8000E4DC
    if (ctx->r2 != ctx->r6) {
        // 0x8000E508: sw          $t0, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r8;
            goto L_8000E4DC;
    }
    // 0x8000E508: sw          $t0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r8;
L_8000E50C:
    // 0x8000E50C: jr          $ra
    // 0x8000E510: nop

    return;
    // 0x8000E510: nop

;}
RECOMP_FUNC void func_8000E514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E51C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000E520: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000E524: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000E528: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8000E52C: jal         0x800046F0
    // 0x8000E530: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x8000E530: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8000E534: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8000E538: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E53C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8000E540: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000E544: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8000E548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8000E54C:
    // 0x8000E54C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8000E550: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8000E554: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000E558: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000E55C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000E560: bne         $at, $zero, L_8000E54C
    if (ctx->r1 != 0) {
        // 0x8000E564: sw          $t6, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r14;
            goto L_8000E54C;
    }
    // 0x8000E564: sw          $t6, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r14;
    // 0x8000E568: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8000E56C: lui         $at, 0xDA38
    ctx->r1 = S32(0XDA38 << 16);
    // 0x8000E570: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8000E574: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8000E578: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8000E57C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000E580: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x8000E584: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x8000E588: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x8000E58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E590: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x8000E594: jr          $ra
    // 0x8000E598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8000E598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000E59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E5A4: jal         0x8000E514
    // 0x8000E5A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000E514(rdram, ctx);
        goto after_0;
    // 0x8000E5A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8000E5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E5B4: jr          $ra
    // 0x8000E5B8: nop

    return;
    // 0x8000E5B8: nop

;}
RECOMP_FUNC void func_8000E5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000E5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E5C4: jal         0x8000E514
    // 0x8000E5C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000E514(rdram, ctx);
        goto after_0;
    // 0x8000E5C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8000E5CC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000E5D0: lw          $t6, 0x7A3C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A3C);
    // 0x8000E5D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000E5D8: beq         $t6, $zero, L_8000E5FC
    if (ctx->r14 == 0) {
        // 0x8000E5DC: andi        $t7, $s0, 0x8
        ctx->r15 = ctx->r16 & 0X8;
            goto L_8000E5FC;
    }
    // 0x8000E5DC: andi        $t7, $s0, 0x8
    ctx->r15 = ctx->r16 & 0X8;
    // 0x8000E5E0: beq         $t7, $zero, L_8000E5FC
    if (ctx->r15 == 0) {
        // 0x8000E5E4: lui         $t8, 0xDA38
        ctx->r24 = S32(0XDA38 << 16);
            goto L_8000E5FC;
    }
    // 0x8000E5E4: lui         $t8, 0xDA38
    ctx->r24 = S32(0XDA38 << 16);
    // 0x8000E5E8: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x8000E5EC: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x8000E5F0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000E5F4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000E5F8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_8000E5FC:
    // 0x8000E5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000E604: jr          $ra
    // 0x8000E608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000E608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000E60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E60C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8000E610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000E614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E618: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x8000E61C: nop

    // 0x8000E620: lw          $s0, 0x78($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X78);
    // 0x8000E624: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8000E628: jal         0x8000E5BC
    // 0x8000E62C: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_8000E5BC(rdram, ctx);
        goto after_0;
    // 0x8000E62C: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_0:
    // 0x8000E630: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x8000E634: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E638: lbu         $t1, 0x80($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X80);
    // 0x8000E63C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000E640: beq         $t1, $zero, L_8000E6A8
    if (ctx->r9 == 0) {
        // 0x8000E644: nop
    
            goto L_8000E6A8;
    }
    // 0x8000E644: nop

    // 0x8000E648: lh          $t6, 0x18($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X18);
    // 0x8000E64C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x8000E650: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000E654: lw          $a2, 0x6274($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6274);
    // 0x8000E658: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000E65C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8000E660: andi        $a3, $t1, 0xFF
    ctx->r7 = ctx->r9 & 0XFF;
    // 0x8000E664: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8000E668: lh          $t7, 0x1A($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X1A);
    // 0x8000E66C: addiu       $a2, $a2, 0x9C
    ctx->r6 = ADD32(ctx->r6, 0X9C);
    // 0x8000E670: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8000E674: nop

    // 0x8000E678: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000E67C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x8000E680: lh          $t8, 0x1C($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X1C);
    // 0x8000E684: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8000E688: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000E68C: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x8000E690: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000E694: jal         0x8000E2F0
    // 0x8000E698: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_8000E2F0(rdram, ctx);
        goto after_1;
    // 0x8000E698: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8000E69C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x8000E6A0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E6A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8000E6A8:
    // 0x8000E6A8: lbu         $t9, 0x82($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X82);
    // 0x8000E6AC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000E6B0: slti        $at, $t9, 0x19
    ctx->r1 = SIGNED(ctx->r25) < 0X19 ? 1 : 0;
    // 0x8000E6B4: beq         $at, $zero, L_8000E6C4
    if (ctx->r1 == 0) {
        // 0x8000E6B8: addiu       $t7, $t7, -0x13C8
        ctx->r15 = ADD32(ctx->r15, -0X13C8);
            goto L_8000E6C4;
    }
    // 0x8000E6B8: addiu       $t7, $t7, -0x13C8
    ctx->r15 = ADD32(ctx->r15, -0X13C8);
    // 0x8000E6BC: b           L_8000E6C8
    // 0x8000E6C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8000E6C8;
    // 0x8000E6C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8000E6C4:
    // 0x8000E6C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8000E6C8:
    // 0x8000E6C8: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x8000E6CC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000E6D0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8000E6D4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000E6D8: sw          $at, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r1;
    // 0x8000E6DC: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x8000E6E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000E6E4: lui         $t7, 0xF800
    ctx->r15 = S32(0XF800 << 16);
    // 0x8000E6E8: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x8000E6EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000E6F0: lbu         $t8, 0x44($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X44);
    // 0x8000E6F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000E6F8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000E6FC: lw          $a1, 0xAC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XAC);
    // 0x8000E700: jal         0x8000DB44
    // 0x8000E704: addiu       $a2, $v1, 0x9C
    ctx->r6 = ADD32(ctx->r3, 0X9C);
    func_8000DB44(rdram, ctx);
        goto after_2;
    // 0x8000E704: addiu       $a2, $v1, 0x9C
    ctx->r6 = ADD32(ctx->r3, 0X9C);
    after_2:
    // 0x8000E708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E70C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000E710: jr          $ra
    // 0x8000E714: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8000E714: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8000E718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E718: jr          $ra
    // 0x8000E71C: nop

    return;
    // 0x8000E71C: nop

;}
RECOMP_FUNC void func_8000E728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E728: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x8000E72C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000E730: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000E734: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000E738: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000E73C: lhu         $t6, 0x8A($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8A);
    // 0x8000E740: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8000E744: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8000E748: beq         $t6, $zero, L_8000E75C
    if (ctx->r14 == 0) {
        // 0x8000E74C: addiu       $a2, $sp, 0xC0
        ctx->r6 = ADD32(ctx->r29, 0XC0);
            goto L_8000E75C;
    }
    // 0x8000E74C: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x8000E750: lw          $a2, 0x8C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8C);
    // 0x8000E754: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000E758: sb          $t7, 0x45($a2)
    MEM_B(0X45, ctx->r6) = ctx->r15;
L_8000E75C:
    // 0x8000E75C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000E760: lw          $t8, 0x7A3C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A3C);
    // 0x8000E764: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8000E768: beq         $t8, $zero, L_8000E804
    if (ctx->r24 == 0) {
        // 0x8000E76C: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_8000E804;
    }
    // 0x8000E76C: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x8000E770: beq         $t9, $zero, L_8000E804
    if (ctx->r25 == 0) {
        // 0x8000E774: addiu       $a3, $sp, 0x60
        ctx->r7 = ADD32(ctx->r29, 0X60);
            goto L_8000E804;
    }
    // 0x8000E774: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x8000E778: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000E77C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8000E780: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000E784: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8000E788:
    // 0x8000E788: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000E78C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8000E790: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8000E794: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8000E798: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8000E79C: bne         $v1, $a0, L_8000E788
    if (ctx->r3 != ctx->r4) {
        // 0x8000E7A0: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8000E788;
    }
    // 0x8000E7A0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8000E7A4: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x8000E7A8: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8000E7AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000E7B0: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x8000E7B4: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8000E7B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000E7BC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x8000E7C0: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8000E7C4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8000E7C8: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x8000E7CC: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8000E7D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000E7D4: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x8000E7D8: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8000E7DC: nop

    // 0x8000E7E0: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8000E7E4: lwc1        $f6, 0x38($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8000E7E8: sw          $a2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r6;
    // 0x8000E7EC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x8000E7F0: jal         0x8007A000
    // 0x8000E7F4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    guMtxF2L(rdram, ctx);
        goto after_0;
    // 0x8000E7F4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8000E7F8: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8000E7FC: b           L_8000E848
    // 0x8000E800: lw          $s0, 0x78($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X78);
        goto L_8000E848;
    // 0x8000E800: lw          $s0, 0x78($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X78);
L_8000E804:
    // 0x8000E804: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x8000E808: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8000E80C: jal         0x8007A000
    // 0x8000E810: sw          $a2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r6;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8000E810: sw          $a2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r6;
    after_1:
    // 0x8000E814: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8000E818: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000E81C: sh          $zero, 0x16($a2)
    MEM_H(0X16, ctx->r6) = 0;
    // 0x8000E820: lh          $v0, 0x16($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X16);
    // 0x8000E824: sh          $zero, 0x36($a2)
    MEM_H(0X36, ctx->r6) = 0;
    // 0x8000E828: sh          $v0, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r2;
    // 0x8000E82C: sh          $v0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r2;
    // 0x8000E830: lh          $v0, 0x36($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X36);
    // 0x8000E834: sh          $t6, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r14;
    // 0x8000E838: sh          $zero, 0x3E($a2)
    MEM_H(0X3E, ctx->r6) = 0;
    // 0x8000E83C: sh          $v0, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = ctx->r2;
    // 0x8000E840: sh          $v0, 0x26($a2)
    MEM_H(0X26, ctx->r6) = ctx->r2;
    // 0x8000E844: lw          $s0, 0x78($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X78);
L_8000E848:
    bm64u2_tag_model_part(rdram, ctx);
    // 0x8000E848: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E84C: jal         0x8000E5BC
    // 0x8000E850: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8000E5BC(rdram, ctx);
        goto after_2;
    // 0x8000E850: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x8000E854: lbu         $a3, 0x80($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X80);
    // 0x8000E858: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8000E85C: beq         $a3, $zero, L_8000E87C
    if (ctx->r7 == 0) {
        // 0x8000E860: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8000E87C;
    }
    // 0x8000E860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000E864: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x8000E868: lw          $a2, 0x6274($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6274);
    // 0x8000E86C: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x8000E870: jal         0x8000E2F0
    // 0x8000E874: addiu       $a2, $a2, 0x9C
    ctx->r6 = ADD32(ctx->r6, 0X9C);
    func_8000E2F0(rdram, ctx);
        goto after_3;
    // 0x8000E874: addiu       $a2, $a2, 0x9C
    ctx->r6 = ADD32(ctx->r6, 0X9C);
    after_3:
    // 0x8000E878: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8000E87C:
    // 0x8000E87C: lw          $a1, 0xAC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAC);
    // 0x8000E880: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8000E884: jal         0x8000D964
    // 0x8000E888: addiu       $a2, $s1, 0x9C
    ctx->r6 = ADD32(ctx->r17, 0X9C);
    func_8000D964(rdram, ctx);
        goto after_4;
    // 0x8000E888: addiu       $a2, $s1, 0x9C
    ctx->r6 = ADD32(ctx->r17, 0X9C);
    after_4:
    // 0x8000E88C: lw          $t7, 0x78($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X78);
    // 0x8000E890: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8000E894: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8000E898: beq         $t8, $zero, L_8000EAD0
    if (ctx->r24 == 0) {
        // 0x8000E89C: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_8000EAD0;
    }
    // 0x8000E89C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000E8A0: lw          $a1, 0xAC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAC);
    // 0x8000E8A4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8000E8A8: addiu       $a1, $a1, 0x3E
    ctx->r5 = ADD32(ctx->r5, 0X3E);
    // 0x8000E8AC: jal         0x800046F0
    // 0x8000E8B0: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_800046F0(rdram, ctx);
        goto after_5;
    // 0x8000E8B0: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_5:
    // 0x8000E8B4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8000E8B8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8000E8BC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8000E8C0: addiu       $v1, $v1, -0x13E4
    ctx->r3 = ADD32(ctx->r3, -0X13E4);
    // 0x8000E8C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000E8C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000E8CC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
L_8000E8D0:
    // 0x8000E8D0: lb          $t9, 0x0($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X0);
    // 0x8000E8D4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8000E8D8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E8DC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E8E0: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E8E4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8000E8E8: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x8000E8EC: lb          $t9, -0xB($v1)
    ctx->r25 = MEM_B(ctx->r3, -0XB);
    // 0x8000E8F0: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x8000E8F4: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E8F8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E8FC: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E900: nop

    // 0x8000E904: sh          $t8, -0x3E($a0)
    MEM_H(-0X3E, ctx->r4) = ctx->r24;
    // 0x8000E908: lb          $t9, -0xA($v1)
    ctx->r25 = MEM_B(ctx->r3, -0XA);
    // 0x8000E90C: nop

    // 0x8000E910: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E914: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E918: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E91C: nop

    // 0x8000E920: sh          $t8, -0x3C($a0)
    MEM_H(-0X3C, ctx->r4) = ctx->r24;
    // 0x8000E924: lb          $t9, -0x9($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X9);
    // 0x8000E928: nop

    // 0x8000E92C: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E930: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E934: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E938: nop

    // 0x8000E93C: sh          $t8, -0x30($a0)
    MEM_H(-0X30, ctx->r4) = ctx->r24;
    // 0x8000E940: lb          $t9, -0x8($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X8);
    // 0x8000E944: nop

    // 0x8000E948: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E94C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E950: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E954: nop

    // 0x8000E958: sh          $t8, -0x2E($a0)
    MEM_H(-0X2E, ctx->r4) = ctx->r24;
    // 0x8000E95C: lb          $t9, -0x7($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X7);
    // 0x8000E960: nop

    // 0x8000E964: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E968: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E96C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E970: nop

    // 0x8000E974: sh          $t8, -0x2C($a0)
    MEM_H(-0X2C, ctx->r4) = ctx->r24;
    // 0x8000E978: lb          $t9, -0x6($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X6);
    // 0x8000E97C: nop

    // 0x8000E980: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E984: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E988: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E98C: nop

    // 0x8000E990: sh          $t8, -0x20($a0)
    MEM_H(-0X20, ctx->r4) = ctx->r24;
    // 0x8000E994: lb          $t9, -0x5($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X5);
    // 0x8000E998: nop

    // 0x8000E99C: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E9A0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E9A4: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E9A8: nop

    // 0x8000E9AC: sh          $t8, -0x1E($a0)
    MEM_H(-0X1E, ctx->r4) = ctx->r24;
    // 0x8000E9B0: lb          $t9, -0x4($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X4);
    // 0x8000E9B4: nop

    // 0x8000E9B8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E9BC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E9C0: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E9C4: nop

    // 0x8000E9C8: sh          $t8, -0x1C($a0)
    MEM_H(-0X1C, ctx->r4) = ctx->r24;
    // 0x8000E9CC: lb          $t9, -0x3($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X3);
    // 0x8000E9D0: nop

    // 0x8000E9D4: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E9D8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E9DC: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E9E0: nop

    // 0x8000E9E4: sh          $t8, -0x10($a0)
    MEM_H(-0X10, ctx->r4) = ctx->r24;
    // 0x8000E9E8: lb          $t9, -0x2($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X2);
    // 0x8000E9EC: nop

    // 0x8000E9F0: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000E9F4: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000E9F8: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000E9FC: nop

    // 0x8000EA00: sh          $t8, -0xE($a0)
    MEM_H(-0XE, ctx->r4) = ctx->r24;
    // 0x8000EA04: lb          $t9, -0x1($v1)
    ctx->r25 = MEM_B(ctx->r3, -0X1);
    // 0x8000EA08: nop

    // 0x8000EA0C: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000EA10: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8000EA14: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8000EA18: bne         $a2, $a3, L_8000E8D0
    if (ctx->r6 != ctx->r7) {
        // 0x8000EA1C: sh          $t8, -0xC($a0)
        MEM_H(-0XC, ctx->r4) = ctx->r24;
            goto L_8000E8D0;
    }
    // 0x8000EA1C: sh          $t8, -0xC($a0)
    MEM_H(-0XC, ctx->r4) = ctx->r24;
    // 0x8000EA20: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8000EA24: jal         0x800046F0
    // 0x8000EA28: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_800046F0(rdram, ctx);
        goto after_6;
    // 0x8000EA28: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_6:
    // 0x8000EA2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000EA30: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x8000EA34: ori         $t9, $t9, 0x8010
    ctx->r25 = ctx->r25 | 0X8010;
    // 0x8000EA38: lui         $t6, 0x300
    ctx->r14 = S32(0X300 << 16);
    // 0x8000EA3C: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8000EA40: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000EA44: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x8000EA48: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x8000EA4C: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x8000EA50: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8000EA54: jal         0x80075580
    // 0x8000EA58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_7;
    // 0x8000EA58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_7:
    // 0x8000EA5C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8000EA60: lui         $t8, 0xDE01
    ctx->r24 = S32(0XDE01 << 16);
    // 0x8000EA64: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x8000EA68: lw          $t9, 0xAC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XAC);
    // 0x8000EA6C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000EA70: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8000EA74: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8000EA78: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8000EA7C: lw          $t9, 0xB0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XB0);
    // 0x8000EA80: lw          $t8, 0x7D08($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7D08);
    // 0x8000EA84: addiu       $a1, $a1, -0x19AC
    ctx->r5 = ADD32(ctx->r5, -0X19AC);
    // 0x8000EA88: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8000EA8C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000EA90: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8000EA94: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8000EA98: lw          $v1, 0x98($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X98);
    // 0x8000EA9C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8000EAA0: beq         $v1, $zero, L_8000EAB4
    if (ctx->r3 == 0) {
        // 0x8000EAA4: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8000EAB4;
    }
    // 0x8000EAA4: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8000EAA8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8000EAAC: nop

    // 0x8000EAB0: sw          $t8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r24;
L_8000EAB4:
    // 0x8000EAB4: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x8000EAB8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000EABC: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x8000EAC0: jal         0x80075580
    // 0x8000EAC4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_8;
    // 0x8000EAC4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_8:
    // 0x8000EAC8: b           L_8000EB24
    // 0x8000EACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8000EB24;
    // 0x8000EACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000EAD0:
    // 0x8000EAD0: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x8000EAD4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000EAD8: lw          $t9, 0xAC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XAC);
    // 0x8000EADC: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8000EAE0: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8000EAE4: addiu       $a1, $a1, -0x19AC
    ctx->r5 = ADD32(ctx->r5, -0X19AC);
    // 0x8000EAE8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000EAEC: lw          $t9, 0xB0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XB0);
    // 0x8000EAF0: lw          $t7, 0x7D08($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7D08);
    // 0x8000EAF4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8000EAF8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8000EAFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000EB00: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8000EB04: lw          $v1, 0x98($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X98);
    // 0x8000EB08: addiu       $s2, $v0, 0x8
    ctx->r18 = ADD32(ctx->r2, 0X8);
    // 0x8000EB0C: beq         $v1, $zero, L_8000EB24
    if (ctx->r3 == 0) {
        // 0x8000EB10: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000EB24;
    }
    // 0x8000EB10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000EB14: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8000EB18: nop

    // 0x8000EB1C: sw          $t7, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r15;
    // 0x8000EB20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000EB24:
    // 0x8000EB24: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8000EB28: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000EB2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000EB30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000EB34: jr          $ra
    // 0x8000EB38: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x8000EB38: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_8000EB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EB3C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000EB40: addiu       $v0, $v0, 0x5A60
    ctx->r2 = ADD32(ctx->r2, 0X5A60);
    // 0x8000EB44: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8000EB48: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8000EB4C: lwc1        $f10, 0x2C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8000EB50: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000EB54: lwc1        $f16, 0x34($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8000EB58: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8000EB5C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000EB60: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8000EB64: nop

    // 0x8000EB68: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000EB6C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8000EB70: lwc1        $f18, 0x4C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8000EB74: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8000EB78: jr          $ra
    // 0x8000EB7C: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    return;
    // 0x8000EB7C: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
;}
RECOMP_FUNC void func_8000EB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000EB80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000EB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000EB88: lwc1        $f4, 0xC($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0XC);
    // 0x8000EB8C: andi        $t6, $fp, 0x1000
    ctx->r14 = ctx->r30 & 0X1000;
    // 0x8000EB90: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8000EB94: lwc1        $f6, 0x1C($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X1C);
    // 0x8000EB98: nop

    // 0x8000EB9C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8000EBA0: lwc1        $f8, 0x2C($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X2C);
    // 0x8000EBA4: beq         $t6, $zero, L_8000EBC0
    if (ctx->r14 == 0) {
        // 0x8000EBA8: swc1        $f8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
            goto L_8000EBC0;
    }
    // 0x8000EBA8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000EBAC: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x8000EBB0: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    // 0x8000EBB4: lw          $a3, 0x8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X8);
    // 0x8000EBB8: jal         0x8000D654
    // 0x8000EBBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000D654(rdram, ctx);
        goto after_0;
    // 0x8000EBBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
L_8000EBC0:
    // 0x8000EBC0: andi        $t7, $fp, 0x800
    ctx->r15 = ctx->r30 & 0X800;
    // 0x8000EBC4: beq         $t7, $zero, L_8000ED08
    if (ctx->r15 == 0) {
        // 0x8000EBC8: andi        $t9, $fp, 0x400
        ctx->r25 = ctx->r30 & 0X400;
            goto L_8000ED08;
    }
    // 0x8000EBC8: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
    // 0x8000EBCC: lwc1        $f2, 0xC($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0XC);
    // 0x8000EBD0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8000EBD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000EBD8: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8000EBDC: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8000EBE0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8000EBE4: bc1f        L_8000EC20
    if (!c1cs) {
        // 0x8000EBE8: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_8000EC20;
    }
    // 0x8000EBE8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8000EBEC: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8000EBF0: nop

    // 0x8000EBF4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000EBF8: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x8000EBFC: nop

    // 0x8000EC00: bc1f        L_8000EC24
    if (!c1cs) {
        // 0x8000EC04: and         $v0, $s4, $at
        ctx->r2 = ctx->r20 & ctx->r1;
            goto L_8000EC24;
    }
    // 0x8000EC04: and         $v0, $s4, $at
    ctx->r2 = ctx->r20 & ctx->r1;
    // 0x8000EC08: lwc1        $f8, 0x14($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X14);
    // 0x8000EC0C: nop

    // 0x8000EC10: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000EC14: c.eq.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d == ctx->f10.d;
    // 0x8000EC18: nop

    // 0x8000EC1C: bc1t        L_8000ED04
    if (c1cs) {
        // 0x8000EC20: and         $v0, $s4, $at
        ctx->r2 = ctx->r20 & ctx->r1;
            goto L_8000ED04;
    }
L_8000EC20:
    // 0x8000EC20: and         $v0, $s4, $at
    ctx->r2 = ctx->r20 & ctx->r1;
L_8000EC24:
    // 0x8000EC24: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8000EC28: ori         $at, $at, 0x203
    ctx->r1 = ctx->r1 | 0X203;
    // 0x8000EC2C: beq         $v0, $at, L_8000EC54
    if (ctx->r2 == ctx->r1) {
        // 0x8000EC30: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_8000EC54;
    }
    // 0x8000EC30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000EC34: ori         $at, $at, 0x102
    ctx->r1 = ctx->r1 | 0X102;
    // 0x8000EC38: beq         $v0, $at, L_8000EC8C
    if (ctx->r2 == ctx->r1) {
        // 0x8000EC3C: lui         $at, 0x3
        ctx->r1 = S32(0X3 << 16);
            goto L_8000EC8C;
    }
    // 0x8000EC3C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8000EC40: ori         $at, $at, 0x201
    ctx->r1 = ctx->r1 | 0X201;
    // 0x8000EC44: beq         $v0, $at, L_8000EC70
    if (ctx->r2 == ctx->r1) {
        // 0x8000EC48: nop
    
            goto L_8000EC70;
    }
    // 0x8000EC48: nop

    // 0x8000EC4C: b           L_8000ECA8
    // 0x8000EC50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8000ECA8;
    // 0x8000EC50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8000EC54:
    // 0x8000EC54: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8000EC58: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x8000EC5C: lw          $a3, 0x14($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X14);
    // 0x8000EC60: jal         0x8000D338
    // 0x8000EC64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000D338(rdram, ctx);
        goto after_1;
    // 0x8000EC64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x8000EC68: b           L_8000ED08
    // 0x8000EC6C: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
        goto L_8000ED08;
    // 0x8000EC6C: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
L_8000EC70:
    // 0x8000EC70: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8000EC74: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x8000EC78: lw          $a3, 0x14($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X14);
    // 0x8000EC7C: jal         0x8000D21C
    // 0x8000EC80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000D21C(rdram, ctx);
        goto after_2;
    // 0x8000EC80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
    // 0x8000EC84: b           L_8000ED08
    // 0x8000EC88: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
        goto L_8000ED08;
    // 0x8000EC88: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
L_8000EC8C:
    // 0x8000EC8C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8000EC90: lw          $a2, 0x10($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X10);
    // 0x8000EC94: lw          $a3, 0x14($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X14);
    // 0x8000EC98: jal         0x8000D108
    // 0x8000EC9C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000D108(rdram, ctx);
        goto after_3;
    // 0x8000EC9C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x8000ECA0: b           L_8000ED08
    // 0x8000ECA4: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
        goto L_8000ED08;
    // 0x8000ECA4: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
L_8000ECA8:
    // 0x8000ECA8: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x8000ECAC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8000ECB0: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8000ECB4:
    // 0x8000ECB4: andi        $s0, $s4, 0xFF
    ctx->r16 = ctx->r20 & 0XFF;
    // 0x8000ECB8: bne         $s6, $s0, L_8000ECCC
    if (ctx->r22 != ctx->r16) {
        // 0x8000ECBC: nop
    
            goto L_8000ECCC;
    }
    // 0x8000ECBC: nop

    // 0x8000ECC0: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    // 0x8000ECC4: jal         0x8000CF54
    // 0x8000ECC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000CF54(rdram, ctx);
        goto after_4;
    // 0x8000ECC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
L_8000ECCC:
    // 0x8000ECCC: bne         $s0, $s7, L_8000ECE0
    if (ctx->r16 != ctx->r23) {
        // 0x8000ECD0: nop
    
            goto L_8000ECE0;
    }
    // 0x8000ECD0: nop

    // 0x8000ECD4: lw          $a1, 0x10($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X10);
    // 0x8000ECD8: jal         0x8000CE70
    // 0x8000ECDC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000CE70(rdram, ctx);
        goto after_5;
    // 0x8000ECDC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_5:
L_8000ECE0:
    // 0x8000ECE0: bne         $s0, $s2, L_8000ECF4
    if (ctx->r16 != ctx->r18) {
        // 0x8000ECE4: nop
    
            goto L_8000ECF4;
    }
    // 0x8000ECE4: nop

    // 0x8000ECE8: lw          $a1, 0x14($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X14);
    // 0x8000ECEC: jal         0x8000CD7C
    // 0x8000ECF0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000CD7C(rdram, ctx);
        goto after_6;
    // 0x8000ECF0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_6:
L_8000ECF4:
    // 0x8000ECF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000ECF8: srl         $t8, $s4, 8
    ctx->r24 = S32(U32(ctx->r20) >> 8);
    // 0x8000ECFC: bne         $s1, $s2, L_8000ECB4
    if (ctx->r17 != ctx->r18) {
        // 0x8000ED00: or          $s4, $t8, $zero
        ctx->r20 = ctx->r24 | 0;
            goto L_8000ECB4;
    }
    // 0x8000ED00: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
L_8000ED04:
    // 0x8000ED04: andi        $t9, $fp, 0x400
    ctx->r25 = ctx->r30 & 0X400;
L_8000ED08:
    // 0x8000ED08: beq         $t9, $zero, L_8000ED64
    if (ctx->r25 == 0) {
        // 0x8000ED0C: nop
    
            goto L_8000ED64;
    }
    // 0x8000ED0C: nop

    // 0x8000ED10: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x8000ED14: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x8000ED18: lw          $a3, 0x20($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X20);
    // 0x8000ED1C: jal         0x8000D5D0
    // 0x8000ED20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8000D5D0(rdram, ctx);
        goto after_7;
    // 0x8000ED20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_7:
    // 0x8000ED24: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000ED28: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x8000ED2C: nop

    // 0x8000ED30: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000ED34: swc1        $f8, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f8.u32l;
    // 0x8000ED38: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x8000ED3C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000ED40: nop

    // 0x8000ED44: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8000ED48: swc1        $f6, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->f6.u32l;
    // 0x8000ED4C: lwc1        $f10, 0x20($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X20);
    // 0x8000ED50: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000ED54: nop

    // 0x8000ED58: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000ED5C: b           L_8000ED88
    // 0x8000ED60: swc1        $f4, 0x2C($s5)
    MEM_W(0X2C, ctx->r21) = ctx->f4.u32l;
        goto L_8000ED88;
    // 0x8000ED60: swc1        $f4, 0x2C($s5)
    MEM_W(0X2C, ctx->r21) = ctx->f4.u32l;
L_8000ED64:
    // 0x8000ED64: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000ED68: nop

    // 0x8000ED6C: swc1        $f6, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f6.u32l;
    // 0x8000ED70: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000ED74: nop

    // 0x8000ED78: swc1        $f8, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->f8.u32l;
    // 0x8000ED7C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000ED80: nop

    // 0x8000ED84: swc1        $f10, 0x2C($s5)
    MEM_W(0X2C, ctx->r21) = ctx->f10.u32l;
L_8000ED88:
    // 0x8000ED88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ED8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000ED90: jr          $ra
    // 0x8000ED94: nop

    return;
    // 0x8000ED94: nop

;}
RECOMP_FUNC void func_8000ED98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ED98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000ED9C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8000EDA0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8000EDA4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8000EDA8: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8000EDAC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8000EDB0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8000EDB4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8000EDB8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8000EDBC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8000EDC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8000EDC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8000EDC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000EDCC: bne         $a2, $zero, L_8000EDE4
    if (ctx->r6 != 0) {
        // 0x8000EDD0: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8000EDE4;
    }
    // 0x8000EDD0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8000EDD4: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x8000EDD8: nop

    // 0x8000EDDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000EDE0: bltz        $t7, L_8000EE60
    if (SIGNED(ctx->r15) < 0) {
        // 0x8000EDE4: addiu       $s5, $s1, 0x10
        ctx->r21 = ADD32(ctx->r17, 0X10);
            goto L_8000EE60;
    }
L_8000EDE4:
    // 0x8000EDE4: addiu       $s5, $s1, 0x10
    ctx->r21 = ADD32(ctx->r17, 0X10);
    // 0x8000EDE8: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x8000EDEC: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x8000EDF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8000EDF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000EDF8:
    // 0x8000EDF8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8000EDFC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8000EE00: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8000EE04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000EE08: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000EE0C: bne         $at, $zero, L_8000EDF8
    if (ctx->r1 != 0) {
        // 0x8000EE10: sw          $t8, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r24;
            goto L_8000EDF8;
    }
    // 0x8000EE10: sw          $t8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r24;
    // 0x8000EE14: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8000EE18: addiu       $s3, $s1, 0x50
    ctx->r19 = ADD32(ctx->r17, 0X50);
    // 0x8000EE1C: andi        $t9, $v0, 0x1C00
    ctx->r25 = ctx->r2 & 0X1C00;
    // 0x8000EE20: beq         $t9, $zero, L_8000EE50
    if (ctx->r25 == 0) {
        // 0x8000EE24: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_8000EE50;
    }
    // 0x8000EE24: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8000EE28: lw          $s4, 0x7C($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X7C);
    // 0x8000EE2C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8000EE30: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8000EE34: jal         0x8000EB80
    // 0x8000EE38: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    func_8000EB80(rdram, ctx);
        goto after_0;
    // 0x8000EE38: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    after_0:
    // 0x8000EE3C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8000EE40: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8000EE44: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8000EE48: nop

    // 0x8000EE4C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
L_8000EE50:
    // 0x8000EE50: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x8000EE54: ori         $t7, $s2, 0x1
    ctx->r15 = ctx->r18 | 0X1;
    // 0x8000EE58: sw          $t6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r14;
    // 0x8000EE5C: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_8000EE60:
    // 0x8000EE60: lw          $t8, 0xAC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XAC);
    // 0x8000EE64: nop

    // 0x8000EE68: beq         $t8, $zero, L_8000EFEC
    if (ctx->r24 == 0) {
        // 0x8000EE6C: nop
    
            goto L_8000EFEC;
    }
    // 0x8000EE6C: nop

    // 0x8000EE70: lw          $v0, 0xB4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB4);
    // 0x8000EE74: lbu         $s5, 0x81($s1)
    ctx->r21 = MEM_BU(ctx->r17, 0X81);
    // 0x8000EE78: beq         $v0, $zero, L_8000EE9C
    if (ctx->r2 == 0) {
        // 0x8000EE7C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8000EE9C;
    }
    // 0x8000EE7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000EE80: lbu         $t9, 0x82($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X82);
    // 0x8000EE84: nop

    // 0x8000EE88: slti        $at, $t9, 0x19
    ctx->r1 = SIGNED(ctx->r25) < 0X19 ? 1 : 0;
    // 0x8000EE8C: beq         $at, $zero, L_8000EE9C
    if (ctx->r1 == 0) {
        // 0x8000EE90: nop
    
            goto L_8000EE9C;
    }
    // 0x8000EE90: nop

    // 0x8000EE94: b           L_8000EE9C
    // 0x8000EE98: addiu       $s0, $v0, 0x20
    ctx->r16 = ADD32(ctx->r2, 0X20);
        goto L_8000EE9C;
    // 0x8000EE98: addiu       $s0, $v0, 0x20
    ctx->r16 = ADD32(ctx->r2, 0X20);
L_8000EE9C:
    // 0x8000EE9C: slti        $at, $s5, 0x18
    ctx->r1 = SIGNED(ctx->r21) < 0X18 ? 1 : 0;
    // 0x8000EEA0: beq         $at, $zero, L_8000EF18
    if (ctx->r1 == 0) {
        // 0x8000EEA4: lui         $t6, 0x800A
        ctx->r14 = S32(0X800A << 16);
            goto L_8000EF18;
    }
    // 0x8000EEA4: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000EEA8: lw          $t6, 0x7A44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A44);
    // 0x8000EEAC: nop

    // 0x8000EEB0: beq         $t6, $zero, L_8000EEEC
    if (ctx->r14 == 0) {
        // 0x8000EEB4: nop
    
            goto L_8000EEEC;
    }
    // 0x8000EEB4: nop

    // 0x8000EEB8: jal         0x8000EB3C
    // 0x8000EEBC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    func_8000EB3C(rdram, ctx);
        goto after_1;
    // 0x8000EEBC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    after_1:
    // 0x8000EEC0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000EEC4: nop

    // 0x8000EEC8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000EECC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EED0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EED4: nop

    // 0x8000EED8: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8000EEDC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8000EEE0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000EEE4: b           L_8000EF18
    // 0x8000EEE8: sh          $t8, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r24;
        goto L_8000EF18;
    // 0x8000EEE8: sh          $t8, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r24;
L_8000EEEC:
    // 0x8000EEEC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000EEF0: lwc1        $f6, 0x48($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X48);
    // 0x8000EEF4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000EEF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000EEFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000EF00: nop

    // 0x8000EF04: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000EF08: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8000EF0C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000EF10: sh          $t6, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r14;
    // 0x8000EF14: nop

L_8000EF18:
    // 0x8000EF18: lh          $a1, 0x92($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X92);
    // 0x8000EF1C: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8000EF20: addiu       $a2, $a2, -0x18D8
    ctx->r6 = ADD32(ctx->r6, -0X18D8);
    // 0x8000EF24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8000EF28: andi        $a0, $s5, 0xFFFF
    ctx->r4 = ctx->r21 & 0XFFFF;
    // 0x8000EF2C: jal         0x800147D8
    // 0x8000EF30: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_800147D8(rdram, ctx);
        goto after_2;
    // 0x8000EF30: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x8000EF34: lhu         $v0, 0x8A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8A);
    // 0x8000EF38: nop

    // 0x8000EF3C: beq         $v0, $zero, L_8000EFEC
    if (ctx->r2 == 0) {
        // 0x8000EF40: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_8000EFEC;
    }
    // 0x8000EF40: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8000EF44: lbu         $a3, 0x90($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X90);
    // 0x8000EF48: blez        $v1, L_8000EFE8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8000EF4C: sll         $s0, $v1, 3
        ctx->r16 = S32(ctx->r3 << 3);
            goto L_8000EFE8;
    }
    // 0x8000EF4C: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x8000EF50: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8000EF54: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8000EF58: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8000EF5C:
    // 0x8000EF5C: lw          $a2, 0x8C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8C);
    // 0x8000EF60: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8000EF64: addu        $t7, $a2, $s0
    ctx->r15 = ADD32(ctx->r6, ctx->r16);
    // 0x8000EF68: lbu         $t8, -0x3($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X3);
    // 0x8000EF6C: addu        $v0, $a2, $s0
    ctx->r2 = ADD32(ctx->r6, ctx->r16);
    // 0x8000EF70: beq         $t8, $zero, L_8000EFD8
    if (ctx->r24 == 0) {
        // 0x8000EF74: addiu       $v1, $v0, -0x48
        ctx->r3 = ADD32(ctx->r2, -0X48);
            goto L_8000EFD8;
    }
    // 0x8000EF74: addiu       $v1, $v0, -0x48
    ctx->r3 = ADD32(ctx->r2, -0X48);
    // 0x8000EF78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8000EF7C:
    // 0x8000EF7C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8000EF80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8000EF84: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8000EF88: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000EF8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000EF90: bne         $at, $zero, L_8000EF7C
    if (ctx->r1 != 0) {
        // 0x8000EF94: sw          $t9, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r25;
            goto L_8000EF7C;
    }
    // 0x8000EF94: sw          $t9, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r25;
    // 0x8000EF98: lw          $t6, 0x8C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8C);
    // 0x8000EF9C: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8000EFA0: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8000EFA4: bne         $a3, $zero, L_8000EFD4
    if (ctx->r7 != 0) {
        // 0x8000EFA8: sb          $s5, 0x45($t7)
        MEM_B(0X45, ctx->r15) = ctx->r21;
            goto L_8000EFD4;
    }
    // 0x8000EFA8: sb          $s5, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r21;
    // 0x8000EFAC: lw          $t8, 0x8C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8C);
    // 0x8000EFB0: lbu         $a0, 0x83($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X83);
    // 0x8000EFB4: addu        $t0, $t8, $s0
    ctx->r8 = ADD32(ctx->r24, ctx->r16);
    // 0x8000EFB8: lh          $a1, 0x1C($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X1C);
    // 0x8000EFBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8000EFC0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8000EFC4: jal         0x800147D8
    // 0x8000EFC8: addiu       $a2, $a2, -0x19F4
    ctx->r6 = ADD32(ctx->r6, -0X19F4);
    func_800147D8(rdram, ctx);
        goto after_3;
    // 0x8000EFC8: addiu       $a2, $a2, -0x19F4
    ctx->r6 = ADD32(ctx->r6, -0X19F4);
    after_3:
    // 0x8000EFCC: lbu         $a3, 0x91($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X91);
    // 0x8000EFD0: nop

L_8000EFD4:
    // 0x8000EFD4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_8000EFD8:
    // 0x8000EFD8: addiu       $s0, $s0, -0x48
    ctx->r16 = ADD32(ctx->r16, -0X48);
    // 0x8000EFDC: slti        $at, $s0, 0x48
    ctx->r1 = SIGNED(ctx->r16) < 0X48 ? 1 : 0;
    // 0x8000EFE0: beq         $at, $zero, L_8000EF5C
    if (ctx->r1 == 0) {
        // 0x8000EFE4: nop
    
            goto L_8000EF5C;
    }
    // 0x8000EFE4: nop

L_8000EFE8:
    // 0x8000EFE8: sb          $a3, 0x90($s1)
    MEM_B(0X90, ctx->r17) = ctx->r7;
L_8000EFEC:
    // 0x8000EFEC: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x8000EFF0: addiu       $s5, $s1, 0x10
    ctx->r21 = ADD32(ctx->r17, 0X10);
    // 0x8000EFF4: beq         $s0, $zero, L_8000F018
    if (ctx->r16 == 0) {
        // 0x8000EFF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8000F018;
    }
    // 0x8000EFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000EFFC:
    // 0x8000EFFC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8000F000: jal         0x8000ED98
    // 0x8000F004: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8000ED98(rdram, ctx);
        goto after_4;
    // 0x8000F004: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x8000F008: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8000F00C: nop

    // 0x8000F010: bne         $s0, $zero, L_8000EFFC
    if (ctx->r16 != 0) {
        // 0x8000F014: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8000EFFC;
    }
    // 0x8000F014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000F018:
    // 0x8000F018: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8000F01C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8000F020: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8000F024: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8000F028: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F02C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8000F030: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8000F034: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8000F038: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8000F03C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8000F040: jr          $ra
    // 0x8000F044: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8000F044: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8000F048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F048: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000F04C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000F054: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000F058: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000F05C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8000F060: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000F064: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000F068: bc1f        L_8000F078
    if (!c1cs) {
        // 0x8000F06C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8000F078;
    }
    // 0x8000F06C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000F070: b           L_8000F07C
    // 0x8000F074: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_8000F07C;
    // 0x8000F074: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
L_8000F078:
    // 0x8000F078: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_8000F07C:
    // 0x8000F07C: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8000F080: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000F084: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8000F088: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8000F08C: bc1f        L_8000F09C
    if (!c1cs) {
        // 0x8000F090: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_8000F09C;
    }
    // 0x8000F090: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8000F094: b           L_8000F0A0
    // 0x8000F098: neg.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = -ctx->f14.fl;
        goto L_8000F0A0;
    // 0x8000F098: neg.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = -ctx->f14.fl;
L_8000F09C:
    // 0x8000F09C: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
L_8000F0A0:
    // 0x8000F0A0: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000F0A4: nop

    // 0x8000F0A8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8000F0AC: nop

    // 0x8000F0B0: bc1f        L_8000F0C0
    if (!c1cs) {
        // 0x8000F0B4: nop
    
            goto L_8000F0C0;
    }
    // 0x8000F0B4: nop

    // 0x8000F0B8: b           L_8000F0C4
    // 0x8000F0BC: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8000F0C4;
    // 0x8000F0BC: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_8000F0C0:
    // 0x8000F0C0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8000F0C4:
    // 0x8000F0C4: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8000F0C8: lwc1        $f13, 0x4E08($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4E08);
    // 0x8000F0CC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8000F0D0: lwc1        $f12, 0x4E0C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4E0C);
    // 0x8000F0D4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8000F0D8: add.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f8.d + ctx->f12.d;
    // 0x8000F0DC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8000F0E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000F0E4: c.eq.d      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.d == ctx->f6.d;
    // 0x8000F0E8: nop

    // 0x8000F0EC: bc1t        L_8000F264
    if (c1cs) {
        // 0x8000F0F0: nop
    
            goto L_8000F264;
    }
    // 0x8000F0F0: nop

    // 0x8000F0F4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x8000F0F8: jal         0x8007A640
    // 0x8000F0FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000F0FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x8000F100: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8000F104: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8000F108: jal         0x8007A800
    // 0x8000F10C: nop

    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000F10C: nop

    after_1:
    // 0x8000F110: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8000F114: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8000F118: jal         0x8007A640
    // 0x8000F11C: nop

    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8000F11C: nop

    after_2:
    // 0x8000F120: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8000F124: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8000F128: jal         0x8007A800
    // 0x8000F12C: nop

    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8000F12C: nop

    after_3:
    // 0x8000F130: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000F134: jal         0x8007A640
    // 0x8000F138: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8000F138: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8000F13C: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000F140: jal         0x8007A800
    // 0x8000F144: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8000F144: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8000F148: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000F14C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000F150: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000F154: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8000F158: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F15C: lwc1        $f12, 0x18($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8000F160: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8000F164: mul.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000F168: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000F16C: addiu       $v0, $a2, 0x2C
    ctx->r2 = ADD32(ctx->r6, 0X2C);
    // 0x8000F170: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000F174: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000F178: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8000F17C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8000F180: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000F184: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x8000F188: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8000F18C: nop

    // 0x8000F190: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000F194: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x8000F198: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F19C: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x8000F1A0: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8000F1A4: nop

    // 0x8000F1A8: mul.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8000F1AC: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000F1B0: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000F1B4: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x8000F1B8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000F1BC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F1C0: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8000F1C4: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8000F1C8: mul.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000F1CC: nop

    // 0x8000F1D0: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8000F1D4: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8000F1D8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000F1DC: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x8000F1E0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000F1E4: nop

    // 0x8000F1E8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000F1EC: nop

    // 0x8000F1F0: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8000F1F4: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x8000F1F8: mul.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8000F1FC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F200: swc1        $f2, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f2.u32l;
    // 0x8000F204: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000F208: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000F20C: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000F210: swc1        $f4, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f4.u32l;
    // 0x8000F214: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000F218: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000F21C: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8000F220: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000F224: nop

    // 0x8000F228: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000F22C: swc1        $f4, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f4.u32l;
    // 0x8000F230: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000F234: nop

    // 0x8000F238: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8000F23C: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8000F240: swc1        $f6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f6.u32l;
    // 0x8000F244: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000F248: nop

    // 0x8000F24C: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8000F250: nop

    // 0x8000F254: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8000F258: swc1        $f10, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f10.u32l;
    // 0x8000F25C: b           L_8000F2B0
    // 0x8000F260: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
        goto L_8000F2B0;
    // 0x8000F260: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_8000F264:
    // 0x8000F264: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000F268: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x8000F26C: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x8000F270: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x8000F274: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x8000F278: bne         $v1, $a0, L_8000F264
    if (ctx->r3 != ctx->r4) {
        // 0x8000F27C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_8000F264;
    }
    // 0x8000F27C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8000F280: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8000F284: nop

    // 0x8000F288: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x8000F28C: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x8000F290: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8000F294: nop

    // 0x8000F298: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    // 0x8000F29C: swc1        $f0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f0.u32l;
    // 0x8000F2A0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8000F2A4: nop

    // 0x8000F2A8: swc1        $f0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f0.u32l;
    // 0x8000F2AC: swc1        $f0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f0.u32l;
L_8000F2B0:
    // 0x8000F2B0: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8000F2B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000F2B8: swc1        $f6, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f6.u32l;
    // 0x8000F2BC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8000F2C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000F2C4: swc1        $f4, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f4.u32l;
    // 0x8000F2C8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8000F2CC: swc1        $f10, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f10.u32l;
    // 0x8000F2D0: swc1        $f8, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f8.u32l;
    // 0x8000F2D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F2D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000F2DC: jr          $ra
    // 0x8000F2E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8000F2E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000F2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F2E4: lui         $t6, 0xD838
    ctx->r14 = S32(0XD838 << 16);
    // 0x8000F2E8: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x8000F2EC: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x8000F2F0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8000F2F4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000F2F8: jr          $ra
    // 0x8000F2FC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    return;
    // 0x8000F2FC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
;}
RECOMP_FUNC void func_8000F300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F308: jal         0x8000E514
    // 0x8000F30C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E514(rdram, ctx);
        goto after_0;
    // 0x8000F30C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8000F310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F318: jr          $ra
    // 0x8000F31C: nop

    return;
    // 0x8000F31C: nop

;}
RECOMP_FUNC void func_8000F320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F328: jal         0x8000E514
    // 0x8000F32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000E514(rdram, ctx);
        goto after_0;
    // 0x8000F32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8000F330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F338: jr          $ra
    // 0x8000F33C: nop

    return;
    // 0x8000F33C: nop

;}
RECOMP_FUNC void func_8000F340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F340: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000F344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F348: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000F34C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000F350: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000F354: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8000F358: jal         0x800046F0
    // 0x8000F35C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x8000F35C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8000F360: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8000F364: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8000F368: jal         0x8007A000
    // 0x8000F36C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8000F36C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8000F370: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000F374: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8000F378: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x8000F37C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8000F380: lui         $at, 0xDA38
    ctx->r1 = S32(0XDA38 << 16);
    // 0x8000F384: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000F388: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000F38C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F390: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000F394: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8000F398: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8000F39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F3A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000F3A4: jr          $ra
    // 0x8000F3A8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    return;
    // 0x8000F3A8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
;}
RECOMP_FUNC void func_8000F3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F3AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000F3B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000F3B4: jal         0x8000F340
    // 0x8000F3B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8000F340(rdram, ctx);
        goto after_0;
    // 0x8000F3B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8000F3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000F3C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000F3C4: jr          $ra
    // 0x8000F3C8: nop

    return;
    // 0x8000F3C8: nop

;}
RECOMP_FUNC void func_8000F3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F3CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000F3D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000F3D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8000F3D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F3DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000F3E0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000F3E4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8000F3E8: jal         0x800046F0
    // 0x8000F3EC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x8000F3EC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8000F3F0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000F3F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000F3F8: addiu       $a1, $a1, -0x1400
    ctx->r5 = ADD32(ctx->r5, -0X1400);
    // 0x8000F3FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000F400: jal         0x80076BF8
    // 0x8000F404: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8000F404: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x8000F408: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000F40C: addiu       $a1, $a1, -0x1400
    ctx->r5 = ADD32(ctx->r5, -0X1400);
    // 0x8000F410: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x8000F414: jal         0x80076BF8
    // 0x8000F418: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8000F418: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x8000F41C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8000F420: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x8000F424: jal         0x80076BF8
    // 0x8000F428: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8000F428: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8000F42C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x8000F430: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000F434: addiu       $a1, $a1, -0x13FC
    ctx->r5 = ADD32(ctx->r5, -0X13FC);
    // 0x8000F438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000F43C: jal         0x80076BF8
    // 0x8000F440: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8000F440: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x8000F444: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8000F448: addiu       $a1, $a1, -0x13FC
    ctx->r5 = ADD32(ctx->r5, -0X13FC);
    // 0x8000F44C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8000F450: jal         0x80076BF8
    // 0x8000F454: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8000F454: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x8000F458: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8000F45C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8000F460: jal         0x80076BF8
    // 0x8000F464: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8000F464: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x8000F468: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x8000F46C: lui         $t6, 0xDC08
    ctx->r14 = S32(0XDC08 << 16);
    // 0x8000F470: ori         $t6, $t6, 0xA
    ctx->r14 = ctx->r14 | 0XA;
    // 0x8000F474: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8000F478: lui         $t7, 0xDC08
    ctx->r15 = S32(0XDC08 << 16);
    // 0x8000F47C: ori         $t7, $t7, 0x30A
    ctx->r15 = ctx->r15 | 0X30A;
    // 0x8000F480: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8000F484: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000F488: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x8000F48C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000F490: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8000F494: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x8000F498: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8000F49C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000F4A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000F4A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000F4A8: jr          $ra
    // 0x8000F4AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000F4AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000F4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F4B0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8000F4B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000F4B8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000F4BC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8000F4C0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8000F4C4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8000F4C8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000F4CC: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8000F4D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000F4D4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8000F4D8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8000F4DC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8000F4E0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8000F4E4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8000F4E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8000F4EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8000F4F0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8000F4F4: jal         0x8007A970
    // 0x8000F4F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    guOrthoF(rdram, ctx);
        goto after_0;
    // 0x8000F4F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8000F4FC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8000F500: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8000F504: jal         0x8000F340
    // 0x8000F508: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8000F340(rdram, ctx);
        goto after_1;
    // 0x8000F508: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x8000F50C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000F510: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8000F514: jr          $ra
    // 0x8000F518: nop

    return;
    // 0x8000F518: nop

;}
RECOMP_FUNC void func_8000F51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F51C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8000F520: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000F524: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000F528: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8000F52C: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8000F530: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8000F534: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000F538: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000F53C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000F540: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8000F544: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8000F548: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x8000F54C: addiu       $a1, $sp, 0x36
    ctx->r5 = ADD32(ctx->r29, 0X36);
    // 0x8000F550: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8000F554: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8000F558: jal         0x8007A270
    // 0x8000F55C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x8000F55C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8000F560: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x8000F564: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8000F568: jal         0x80079DF0
    // 0x8000F56C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    guMtxCatF(rdram, ctx);
        goto after_1;
    // 0x8000F56C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x8000F570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000F574: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8000F578: jal         0x8000F340
    // 0x8000F57C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8000F340(rdram, ctx);
        goto after_2;
    // 0x8000F57C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x8000F580: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    // 0x8000F584: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000F588: jal         0x8000CBB8
    // 0x8000F58C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_8000CBB8(rdram, ctx);
        goto after_3;
    // 0x8000F58C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x8000F590: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8000F594: lw          $a1, 0x6270($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6270);
    // 0x8000F598: jal         0x8007A000
    // 0x8000F59C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    guMtxF2L(rdram, ctx);
        goto after_4;
    // 0x8000F59C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8000F5A0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8000F5A4: lui         $t6, 0xDB0E
    ctx->r14 = S32(0XDB0E << 16);
    // 0x8000F5A8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000F5AC: lhu         $t7, 0x36($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X36);
    // 0x8000F5B0: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8000F5B4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8000F5B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000F5BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000F5C0: jr          $ra
    // 0x8000F5C4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8000F5C4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8000F5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F5C8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8000F5CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000F5D0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000F5D4: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8000F5D8: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000F5DC: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8000F5E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000F5E4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000F5E8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8000F5EC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8000F5F0: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x8000F5F4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000F5F8: addiu       $a1, $sp, 0x2E
    ctx->r5 = ADD32(ctx->r29, 0X2E);
    // 0x8000F5FC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8000F600: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8000F604: jal         0x8007A270
    // 0x8000F608: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x8000F608: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8000F60C: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x8000F610: lui         $t6, 0xDB0E
    ctx->r14 = S32(0XDB0E << 16);
    // 0x8000F614: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000F618: lhu         $t7, 0x2E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X2E);
    // 0x8000F61C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8000F620: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8000F624: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8000F628: jal         0x8000F340
    // 0x8000F62C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    func_8000F340(rdram, ctx);
        goto after_1;
    // 0x8000F62C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    after_1:
    // 0x8000F630: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000F634: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8000F638: jr          $ra
    // 0x8000F63C: nop

    return;
    // 0x8000F63C: nop

;}
RECOMP_FUNC void func_8000F640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F640: blez        $a2, L_8000F6A4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8000F644: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000F6A4;
    }
    // 0x8000F644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000F648: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x8000F64C: beq         $a3, $zero, L_8000F674
    if (ctx->r7 == 0) {
        // 0x8000F650: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_8000F674;
    }
    // 0x8000F650: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8000F654:
    // 0x8000F654: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8000F658: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000F65C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000F660: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8000F664: bne         $v1, $v0, L_8000F654
    if (ctx->r3 != ctx->r2) {
        // 0x8000F668: sh          $t6, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r14;
            goto L_8000F654;
    }
    // 0x8000F668: sh          $t6, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r14;
    // 0x8000F66C: beq         $v0, $a2, L_8000F6A4
    if (ctx->r2 == ctx->r6) {
        // 0x8000F670: nop
    
            goto L_8000F6A4;
    }
    // 0x8000F670: nop

L_8000F674:
    // 0x8000F674: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8000F678: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000F67C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8000F680: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x8000F684: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000F688: sh          $t8, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r24;
    // 0x8000F68C: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8000F690: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8000F694: sh          $t9, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r25;
    // 0x8000F698: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x8000F69C: bne         $v0, $a2, L_8000F674
    if (ctx->r2 != ctx->r6) {
        // 0x8000F6A0: sh          $t0, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r8;
            goto L_8000F674;
    }
    // 0x8000F6A0: sh          $t0, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r8;
L_8000F6A4:
    // 0x8000F6A4: jr          $ra
    // 0x8000F6A8: nop

    return;
    // 0x8000F6A8: nop

;}
RECOMP_FUNC void func_8000F6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F6B0: jr          $ra
    // 0x8000F6B4: nop

    return;
    // 0x8000F6B4: nop

;}
RECOMP_FUNC void func_8000F6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F6C0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8000F6C4: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x8000F6C8: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8000F6CC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000F6D0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000F6D4: nop

    // 0x8000F6D8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000F6DC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000F6E0: nop

    // 0x8000F6E4: bc1f        L_8000F760
    if (!c1cs) {
        // 0x8000F6E8: nop
    
            goto L_8000F760;
    }
    // 0x8000F6E8: nop

    // 0x8000F6EC: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8000F6F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000F6F4: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x8000F6F8: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x8000F6FC: nop

    // 0x8000F700: bc1f        L_8000F710
    if (!c1cs) {
        // 0x8000F704: nop
    
            goto L_8000F710;
    }
    // 0x8000F704: nop

    // 0x8000F708: jr          $ra
    // 0x8000F70C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000F70C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000F710:
    // 0x8000F710: lh          $t8, -0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, -0X2);
    // 0x8000F714: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8000F718: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8000F71C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8000F720: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000F724: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8000F728: nop

    // 0x8000F72C: bc1f        L_8000F798
    if (!c1cs) {
        // 0x8000F730: nop
    
            goto L_8000F798;
    }
    // 0x8000F730: nop

L_8000F734:
    // 0x8000F734: lh          $t9, -0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, -0X2);
    // 0x8000F738: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8000F73C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8000F740: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8000F744: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000F748: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8000F74C: nop

    // 0x8000F750: bc1t        L_8000F734
    if (c1cs) {
        // 0x8000F754: nop
    
            goto L_8000F734;
    }
    // 0x8000F754: nop

    // 0x8000F758: b           L_8000F79C
    // 0x8000F75C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8000F79C;
    // 0x8000F75C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000F760:
    // 0x8000F760: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8000F764: nop

    // 0x8000F768: bc1f        L_8000F794
    if (!c1cs) {
        // 0x8000F76C: nop
    
            goto L_8000F794;
    }
    // 0x8000F76C: nop

L_8000F770:
    // 0x8000F770: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x8000F774: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8000F778: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8000F77C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8000F780: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000F784: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8000F788: nop

    // 0x8000F78C: bc1t        L_8000F770
    if (c1cs) {
        // 0x8000F790: nop
    
            goto L_8000F770;
    }
    // 0x8000F790: nop

L_8000F794:
    // 0x8000F794: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_8000F798:
    // 0x8000F798: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000F79C:
    // 0x8000F79C: jr          $ra
    // 0x8000F7A0: nop

    return;
    // 0x8000F7A0: nop

    // 0x8000F7A4: jr          $ra
    // 0x8000F7A8: nop

    return;
    // 0x8000F7A8: nop

;}
RECOMP_FUNC void func_8000F7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F7AC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8000F7B0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8000F7B4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8000F7B8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8000F7BC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8000F7C0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8000F7C4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8000F7C8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8000F7CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8000F7D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8000F7D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000F7D8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000F7DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8000F7E0: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x8000F7E4: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x8000F7E8: nop

    // 0x8000F7EC: beq         $v0, $zero, L_8000F968
    if (ctx->r2 == 0) {
        // 0x8000F7F0: lw          $t7, 0xC0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC0);
            goto L_8000F968;
    }
    // 0x8000F7F0: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x8000F7F4: lhu         $a1, 0x40($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X40);
    // 0x8000F7F8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8000F7FC: blez        $a1, L_8000F964
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8000F800: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8000F964;
    }
    // 0x8000F800: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8000F804: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8000F808: addiu       $s4, $s4, -0x13B0
    ctx->r20 = ADD32(ctx->r20, -0X13B0);
    // 0x8000F80C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8000F810:
    // 0x8000F810: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000F814: lw          $s0, 0x18($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X18);
    // 0x8000F818: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000F81C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8000F820: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000F824: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000F828: lwc1        $f20, 0x0($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8000F82C: lh          $t2, 0x10($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X10);
    // 0x8000F830: cvt.w.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = CVT_W_S(ctx->f20.fl);
    // 0x8000F834: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x8000F838: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000F83C: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x8000F840: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000F844: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8000F848: bne         $at, $zero, L_8000F864
    if (ctx->r1 != 0) {
        // 0x8000F84C: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_8000F864;
    }
    // 0x8000F84C: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x8000F850: lh          $t3, 0x12($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X12);
    // 0x8000F854: nop

    // 0x8000F858: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8000F85C: beq         $at, $zero, L_8000F86C
    if (ctx->r1 == 0) {
        // 0x8000F860: nop
    
            goto L_8000F86C;
    }
    // 0x8000F860: nop

L_8000F864:
    // 0x8000F864: b           L_8000F954
    // 0x8000F868: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
        goto L_8000F954;
    // 0x8000F868: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
L_8000F86C:
    // 0x8000F86C: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8000F870: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8000F874: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x8000F878: jal         0x8000F6C0
    // 0x8000F87C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_8000F6C0(rdram, ctx);
        goto after_0;
    // 0x8000F87C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_0:
    // 0x8000F880: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x8000F884: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8000F888: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x8000F88C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8000F890: addu        $a3, $t4, $t5
    ctx->r7 = ADD32(ctx->r12, ctx->r13);
    // 0x8000F894: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8000F898: lh          $a2, 0x2($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X2);
    // 0x8000F89C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8000F8A0: bne         $s1, $a2, L_8000F8D8
    if (ctx->r17 != ctx->r6) {
        // 0x8000F8A4: addiu       $a1, $a1, 0x50
        ctx->r5 = ADD32(ctx->r5, 0X50);
            goto L_8000F8D8;
    }
    // 0x8000F8A4: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x8000F8A8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8000F8AC: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
    // 0x8000F8B0: lh          $t8, 0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X14);
    // 0x8000F8B4: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x8000F8B8: lhu         $t2, 0xE($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XE);
    // 0x8000F8BC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000F8C0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8000F8C4: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8000F8C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8000F8CC: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x8000F8D0: b           L_8000F924
    // 0x8000F8D4: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
        goto L_8000F924;
    // 0x8000F8D4: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
L_8000F8D8:
    // 0x8000F8D8: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x8000F8DC: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x8000F8E0: subu        $t8, $a2, $v1
    ctx->r24 = SUB32(ctx->r6, ctx->r3);
    // 0x8000F8E4: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x8000F8E8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8000F8EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000F8F0: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000F8F4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000F8F8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8000F8FC: lhu         $t7, 0xE($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0XE);
    // 0x8000F900: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8000F904: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8000F908: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000F90C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000F910: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x8000F914: sub.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x8000F918: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8000F91C: add.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8000F920: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
L_8000F924:
    // 0x8000F924: lhu         $t3, 0xE($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XE);
    // 0x8000F928: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000F92C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000F930: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x8000F934: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8000F938: lw          $t2, 0x78($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X78);
    // 0x8000F93C: nop

    // 0x8000F940: or          $t8, $t2, $t6
    ctx->r24 = ctx->r10 | ctx->r14;
    // 0x8000F944: sw          $t8, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r24;
    // 0x8000F948: lhu         $a1, 0x40($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X40);
    // 0x8000F94C: nop

    // 0x8000F950: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
L_8000F954:
    // 0x8000F954: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8000F958: slt         $at, $s2, $a0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8000F95C: bne         $at, $zero, L_8000F810
    if (ctx->r1 != 0) {
        // 0x8000F960: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_8000F810;
    }
    // 0x8000F960: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
L_8000F964:
    // 0x8000F964: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
L_8000F968:
    // 0x8000F968: nop

    // 0x8000F96C: lw          $a0, 0x98($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X98);
    // 0x8000F970: nop

    // 0x8000F974: beq         $a0, $zero, L_8000FB38
    if (ctx->r4 == 0) {
        // 0x8000F978: lw          $t3, 0xC0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC0);
            goto L_8000FB38;
    }
    // 0x8000F978: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
    // 0x8000F97C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8000F980: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8000F984: lw          $fp, 0x10($a0)
    ctx->r30 = MEM_W(ctx->r4, 0X10);
    // 0x8000F988: lw          $s6, 0x14($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X14);
    // 0x8000F98C: lw          $s2, 0x30($a1)
    ctx->r18 = MEM_W(ctx->r5, 0X30);
    // 0x8000F990: lw          $s0, 0x4($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X4);
    // 0x8000F994: beq         $fp, $zero, L_8000F9A8
    if (ctx->r30 == 0) {
        // 0x8000F998: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8000F9A8;
    }
    // 0x8000F998: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8000F99C: lw          $s4, 0x18($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X18);
    // 0x8000F9A0: b           L_8000F9A8
    // 0x8000F9A4: nop

        goto L_8000F9A8;
    // 0x8000F9A4: nop

L_8000F9A8:
    // 0x8000F9A8: beq         $s6, $zero, L_8000F9C8
    if (ctx->r22 == 0) {
        // 0x8000F9AC: nop
    
            goto L_8000F9C8;
    }
    // 0x8000F9AC: nop

    // 0x8000F9B0: lw          $t9, 0x1C($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X1C);
    // 0x8000F9B4: nop

    // 0x8000F9B8: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x8000F9BC: lw          $t1, 0x20($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X20);
    // 0x8000F9C0: nop

    // 0x8000F9C4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
L_8000F9C8:
    // 0x8000F9C8: lhu         $s7, 0x8($a1)
    ctx->r23 = MEM_HU(ctx->r5, 0X8);
    // 0x8000F9CC: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8000F9D0: sll         $v0, $s7, 4
    ctx->r2 = S32(ctx->r23 << 4);
    // 0x8000F9D4: srl         $a0, $v0, 3
    ctx->r4 = S32(U32(ctx->r2) >> 3);
    // 0x8000F9D8: jal         0x800046F0
    // 0x8000F9DC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_800046F0(rdram, ctx);
        goto after_1;
    // 0x8000F9DC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_1:
    // 0x8000F9E0: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8000F9E4: blez        $s7, L_8000FB14
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8000F9E8: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_8000FB14;
    }
    // 0x8000F9E8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8000F9EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8000F9F0: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_8000F9F4:
    // 0x8000F9F4: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x8000F9F8: nop

    // 0x8000F9FC: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x8000FA00: lw          $t4, 0x4($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X4);
    // 0x8000FA04: nop

    // 0x8000FA08: sw          $t4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r12;
    // 0x8000FA0C: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x8000FA10: nop

    // 0x8000FA14: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    // 0x8000FA18: lw          $t4, 0xC($s3)
    ctx->r12 = MEM_W(ctx->r19, 0XC);
    // 0x8000FA1C: beq         $s4, $zero, L_8000FA90
    if (ctx->r20 == 0) {
        // 0x8000FA20: sw          $t4, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r12;
            goto L_8000FA90;
    }
    // 0x8000FA20: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
    // 0x8000FA24: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x8000FA28: lhu         $a2, 0x2E($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X2E);
    // 0x8000FA2C: sll         $t5, $a1, 1
    ctx->r13 = S32(ctx->r5 << 1);
    // 0x8000FA30: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000FA34: bne         $at, $zero, L_8000FA48
    if (ctx->r1 != 0) {
        // 0x8000FA38: addu        $s0, $t5, $a1
        ctx->r16 = ADD32(ctx->r13, ctx->r5);
            goto L_8000FA48;
    }
    // 0x8000FA38: addu        $s0, $t5, $a1
    ctx->r16 = ADD32(ctx->r13, ctx->r5);
    // 0x8000FA3C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000FA40: jal         0x80000FBC
    // 0x8000FA44: addiu       $a0, $a0, 0x4E10
    ctx->r4 = ADD32(ctx->r4, 0X4E10);
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x8000FA44: addiu       $a0, $a0, 0x4E10
    ctx->r4 = ADD32(ctx->r4, 0X4E10);
    after_2:
L_8000FA48:
    // 0x8000FA48: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8000FA4C: addu        $t6, $s4, $t2
    ctx->r14 = ADD32(ctx->r20, ctx->r10);
    // 0x8000FA50: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x8000FA54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000FA58: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x8000FA5C: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8000FA60: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
    // 0x8000FA64: addu        $t1, $s4, $t9
    ctx->r9 = ADD32(ctx->r20, ctx->r25);
    // 0x8000FA68: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x8000FA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000FA70: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8000FA74: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8000FA78: sh          $t4, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r12;
    // 0x8000FA7C: addu        $t2, $s4, $t5
    ctx->r10 = ADD32(ctx->r20, ctx->r13);
    // 0x8000FA80: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x8000FA84: nop

    // 0x8000FA88: sra         $t8, $t6, 16
    ctx->r24 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000FA8C: sh          $t8, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r24;
L_8000FA90:
    // 0x8000FA90: beq         $s6, $zero, L_8000FB00
    if (ctx->r22 == 0) {
        // 0x8000FA94: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8000FB00;
    }
    // 0x8000FA94: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8000FA98: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x8000FA9C: nop

    // 0x8000FAA0: bltz        $a1, L_8000FB00
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000FAA4: nop
    
            goto L_8000FB00;
    }
    // 0x8000FAA4: nop

    // 0x8000FAA8: lh          $a2, 0x14($s6)
    ctx->r6 = MEM_H(ctx->r22, 0X14);
    // 0x8000FAAC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8000FAB0: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000FAB4: bne         $at, $zero, L_8000FAC4
    if (ctx->r1 != 0) {
        // 0x8000FAB8: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_8000FAC4;
    }
    // 0x8000FAB8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000FABC: jal         0x80000FBC
    // 0x8000FAC0: addiu       $a0, $a0, 0x4E40
    ctx->r4 = ADD32(ctx->r4, 0X4E40);
    func_80000FBC(rdram, ctx);
        goto after_3;
    // 0x8000FAC0: addiu       $a0, $a0, 0x4E40
    ctx->r4 = ADD32(ctx->r4, 0X4E40);
    after_3:
L_8000FAC4:
    // 0x8000FAC4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8000FAC8: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8000FACC: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8000FAD0: lh          $t3, 0x0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X0);
    // 0x8000FAD4: lh          $t7, 0x8($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X8);
    // 0x8000FAD8: lh          $t5, 0xA($s1)
    ctx->r13 = MEM_H(ctx->r17, 0XA);
    // 0x8000FADC: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x8000FAE0: sh          $t4, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r12;
    // 0x8000FAE4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8000FAE8: nop

    // 0x8000FAEC: addu        $t6, $t2, $v0
    ctx->r14 = ADD32(ctx->r10, ctx->r2);
    // 0x8000FAF0: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x8000FAF4: nop

    // 0x8000FAF8: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x8000FAFC: sh          $t9, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r25;
L_8000FB00:
    // 0x8000FB00: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8000FB04: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8000FB08: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x8000FB0C: bne         $s5, $s7, L_8000F9F4
    if (ctx->r21 != ctx->r23) {
        // 0x8000FB10: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8000F9F4;
    }
    // 0x8000FB10: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_8000FB14:
    // 0x8000FB14: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8000FB18: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8000FB1C: jal         0x80075580
    // 0x8000FB20: nop

    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x8000FB20: nop

    after_4:
    // 0x8000FB24: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8000FB28: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x8000FB2C: nop

    // 0x8000FB30: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x8000FB34: lw          $t3, 0xC0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC0);
L_8000FB38:
    // 0x8000FB38: nop

    // 0x8000FB3C: lw          $s0, 0x8($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X8);
    // 0x8000FB40: nop

    // 0x8000FB44: beq         $s0, $zero, L_8000FB68
    if (ctx->r16 == 0) {
        // 0x8000FB48: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8000FB68;
    }
    // 0x8000FB48: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8000FB4C:
    // 0x8000FB4C: jal         0x8000F7AC
    // 0x8000FB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000F7AC(rdram, ctx);
        goto after_5;
    // 0x8000FB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8000FB54: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8000FB58: nop

    // 0x8000FB5C: bne         $s0, $zero, L_8000FB4C
    if (ctx->r16 != 0) {
        // 0x8000FB60: nop
    
            goto L_8000FB4C;
    }
    // 0x8000FB60: nop

    // 0x8000FB64: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8000FB68:
    // 0x8000FB68: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000FB6C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000FB70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8000FB74: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8000FB78: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8000FB7C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FB80: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8000FB84: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8000FB88: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8000FB8C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FB90: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8000FB94: jr          $ra
    // 0x8000FB98: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x8000FB98: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_8000FB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FB9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000FBA0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000FBA4: lw          $t6, 0x6284($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6284);
    // 0x8000FBA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000FBAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000FBB0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x8000FBB4: nop

    // 0x8000FBB8: beq         $v0, $zero, L_8000FBE4
    if (ctx->r2 == 0) {
        // 0x8000FBBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8000FBE4;
    }
    // 0x8000FBBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FBC0: beq         $v0, $zero, L_8000FBE0
    if (ctx->r2 == 0) {
        // 0x8000FBC4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8000FBE0;
    }
    // 0x8000FBC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8000FBC8:
    // 0x8000FBC8: jal         0x8000F7AC
    // 0x8000FBCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000F7AC(rdram, ctx);
        goto after_0;
    // 0x8000FBCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000FBD0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8000FBD4: nop

    // 0x8000FBD8: bne         $s0, $zero, L_8000FBC8
    if (ctx->r16 != 0) {
        // 0x8000FBDC: nop
    
            goto L_8000FBC8;
    }
    // 0x8000FBDC: nop

L_8000FBE0:
    // 0x8000FBE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000FBE4:
    // 0x8000FBE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FBE8: jr          $ra
    // 0x8000FBEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000FBEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000FBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FBF0: jr          $ra
    // 0x8000FBF4: nop

    return;
    // 0x8000FBF4: nop

;}
RECOMP_FUNC void func_8000FBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FBF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000FBFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FC00: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8000FC04: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8000FC08: lh          $t7, 0x16($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X16);
    // 0x8000FC0C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000FC10: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8000FC14: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x8000FC18: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000FC1C: lwc1        $f22, 0x8($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8000FC20: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x8000FC24: c.le.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl <= ctx->f22.fl;
    // 0x8000FC28: lw          $s4, 0x18($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X18);
    // 0x8000FC2C: lw          $s5, 0x1C($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X1C);
    // 0x8000FC30: lwc1        $f20, 0xC($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8000FC34: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8000FC38: bc1f        L_8000FC74
    if (!c1cs) {
        // 0x8000FC3C: addu        $s0, $v0, $t6
        ctx->r16 = ADD32(ctx->r2, ctx->r14);
            goto L_8000FC74;
    }
    // 0x8000FC3C: addu        $s0, $v0, $t6
    ctx->r16 = ADD32(ctx->r2, ctx->r14);
    // 0x8000FC40: lh          $t8, 0x14($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X14);
    // 0x8000FC44: nop

    // 0x8000FC48: beq         $t8, $zero, L_8000FC6C
    if (ctx->r24 == 0) {
        // 0x8000FC4C: nop
    
            goto L_8000FC6C;
    }
    // 0x8000FC4C: nop

    // 0x8000FC50: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x8000FC54: nop

    // 0x8000FC58: lh          $t6, 0x0($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X0);
    // 0x8000FC5C: nop

    // 0x8000FC60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000FC64: b           L_8000FC70
    // 0x8000FC68: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
        goto L_8000FC70;
    // 0x8000FC68: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
L_8000FC6C:
    // 0x8000FC6C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_8000FC70:
    // 0x8000FC70: swc1        $f22, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f22.u32l;
L_8000FC74:
    // 0x8000FC74: lh          $a0, 0x22($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X22);
    // 0x8000FC78: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8000FC7C: sll         $s2, $a0, 16
    ctx->r18 = S32(ctx->r4 << 16);
    // 0x8000FC80: sra         $t7, $s2, 16
    ctx->r15 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8000FC84: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x8000FC88: swc1        $f22, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f22.u32l;
    // 0x8000FC8C: jal         0x8000F6C0
    // 0x8000FC90: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    func_8000F6C0(rdram, ctx);
        goto after_0;
    // 0x8000FC90: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    after_0:
    // 0x8000FC94: bne         $s2, $v0, L_8000FCB4
    if (ctx->r18 != ctx->r2) {
        // 0x8000FC98: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8000FCB4;
    }
    // 0x8000FC98: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8000FC9C: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x8000FCA0: nop

    // 0x8000FCA4: bc1f        L_8000FCB4
    if (!c1cs) {
        // 0x8000FCA8: nop
    
            goto L_8000FCB4;
    }
    // 0x8000FCA8: nop

    // 0x8000FCAC: b           L_8000FCD0
    // 0x8000FCB0: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
        goto L_8000FCD0;
    // 0x8000FCB0: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_8000FCB4:
    // 0x8000FCB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000FCB8: nop

    // 0x8000FCBC: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x8000FCC0: nop

    // 0x8000FCC4: bc1f        L_8000FCD0
    if (!c1cs) {
        // 0x8000FCC8: nop
    
            goto L_8000FCD0;
    }
    // 0x8000FCC8: nop

    // 0x8000FCCC: addiu       $s2, $zero, -0x2
    ctx->r18 = ADD32(0, -0X2);
L_8000FCD0:
    // 0x8000FCD0: bne         $s2, $v0, L_8000FD08
    if (ctx->r18 != ctx->r2) {
        // 0x8000FCD4: nop
    
            goto L_8000FD08;
    }
    // 0x8000FCD4: nop

    // 0x8000FCD8: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8000FCDC: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8000FCE0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8000FCE4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8000FCE8: nop

    // 0x8000FCEC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8000FCF0: nop

    // 0x8000FCF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000FCF8: c.eq.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl == ctx->f10.fl;
    // 0x8000FCFC: nop

    // 0x8000FD00: bc1f        L_800100B4
    if (!c1cs) {
        // 0x8000FD04: nop
    
            goto L_800100B4;
    }
    // 0x8000FD04: nop

L_8000FD08:
    // 0x8000FD08: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8000FD0C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8000FD10: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8000FD14: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8000FD18: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000FD1C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000FD20: addiu       $a0, $a0, 0x4E6C
    ctx->r4 = ADD32(ctx->r4, 0X4E6C);
    // 0x8000FD24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000FD28: c.eq.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl == ctx->f6.fl;
    // 0x8000FD2C: nop

    // 0x8000FD30: bc1f        L_8000FD3C
    if (!c1cs) {
        // 0x8000FD34: nop
    
            goto L_8000FD3C;
    }
    // 0x8000FD34: nop

    // 0x8000FD38: addiu       $s3, $v0, 0x1
    ctx->r19 = ADD32(ctx->r2, 0X1);
L_8000FD3C:
    // 0x8000FD3C: bltz        $s3, L_8000FD58
    if (SIGNED(ctx->r19) < 0) {
        // 0x8000FD40: nop
    
            goto L_8000FD58;
    }
    // 0x8000FD40: nop

    // 0x8000FD44: lhu         $v0, 0x2C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2C);
    // 0x8000FD48: nop

    // 0x8000FD4C: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000FD50: bne         $at, $zero, L_8000FD78
    if (ctx->r1 != 0) {
        // 0x8000FD54: addiu       $t8, $s3, 0x1
        ctx->r24 = ADD32(ctx->r19, 0X1);
            goto L_8000FD78;
    }
    // 0x8000FD54: addiu       $t8, $s3, 0x1
    ctx->r24 = ADD32(ctx->r19, 0X1);
L_8000FD58:
    // 0x8000FD58: cvt.d.s     $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.d = CVT_D_S(ctx->f22.fl);
    // 0x8000FD5C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8000FD60: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8000FD64: jal         0x80000FBC
    // 0x8000FD68: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80000FBC(rdram, ctx);
        goto after_1;
    // 0x8000FD68: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8000FD6C: lhu         $v0, 0x2C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2C);
    // 0x8000FD70: nop

    // 0x8000FD74: addiu       $t8, $s3, 0x1
    ctx->r24 = ADD32(ctx->r19, 0X1);
L_8000FD78:
    // 0x8000FD78: bne         $t8, $v0, L_8000FD8C
    if (ctx->r24 != ctx->r2) {
        // 0x8000FD7C: sll         $a2, $s3, 2
        ctx->r6 = S32(ctx->r19 << 2);
            goto L_8000FD8C;
    }
    // 0x8000FD7C: sll         $a2, $s3, 2
    ctx->r6 = S32(ctx->r19 << 2);
    // 0x8000FD80: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000FD84: b           L_8000FDA8
    // 0x8000FD88: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
        goto L_8000FDA8;
    // 0x8000FD88: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
L_8000FD8C:
    // 0x8000FD8C: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x8000FD90: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
    // 0x8000FD94: addu        $v0, $t9, $t4
    ctx->r2 = ADD32(ctx->r25, ctx->r12);
    // 0x8000FD98: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x8000FD9C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x8000FDA0: nop

    // 0x8000FDA4: subu        $t1, $t6, $t7
    ctx->r9 = SUB32(ctx->r14, ctx->r15);
L_8000FDA8:
    // 0x8000FDA8: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x8000FDAC: sh          $s3, 0x22($s1)
    MEM_H(0X22, ctx->r17) = ctx->r19;
    // 0x8000FDB0: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8000FDB4: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x8000FDB8: blez        $s0, L_8000FE50
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8000FDBC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8000FE50;
    }
    // 0x8000FDBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000FDC0: andi        $a3, $s0, 0x3
    ctx->r7 = ctx->r16 & 0X3;
    // 0x8000FDC4: beq         $a3, $zero, L_8000FDFC
    if (ctx->r7 == 0) {
        // 0x8000FDC8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8000FDFC;
    }
    // 0x8000FDC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000FDCC: sll         $t6, $zero, 2
    ctx->r14 = S32(0 << 2);
    // 0x8000FDD0: sll         $t7, $zero, 1
    ctx->r15 = S32(0 << 1);
    // 0x8000FDD4: addu        $v0, $t3, $t7
    ctx->r2 = ADD32(ctx->r11, ctx->r15);
    // 0x8000FDD8: addu        $v1, $s4, $t6
    ctx->r3 = ADD32(ctx->r20, ctx->r14);
L_8000FDDC:
    // 0x8000FDDC: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8000FDE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8000FDE4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8000FDE8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000FDEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000FDF0: bne         $a0, $a1, L_8000FDDC
    if (ctx->r4 != ctx->r5) {
        // 0x8000FDF4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8000FDDC;
    }
    // 0x8000FDF4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8000FDF8: beq         $a1, $s0, L_8000FE50
    if (ctx->r5 == ctx->r16) {
        // 0x8000FDFC: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_8000FE50;
    }
L_8000FDFC:
    // 0x8000FDFC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8000FE00: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8000FE04: addu        $v0, $t3, $t7
    ctx->r2 = ADD32(ctx->r11, ctx->r15);
    // 0x8000FE08: addu        $v1, $s4, $t6
    ctx->r3 = ADD32(ctx->r20, ctx->r14);
L_8000FE0C:
    // 0x8000FE0C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8000FE10: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000FE14: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8000FE18: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000FE1C: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x8000FE20: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8000FE24: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8000FE28: sw          $t7, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r15;
    // 0x8000FE2C: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x8000FE30: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8000FE34: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8000FE38: sw          $t9, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r25;
    // 0x8000FE3C: lh          $t6, -0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X2);
    // 0x8000FE40: nop

    // 0x8000FE44: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8000FE48: bne         $a1, $s0, L_8000FE0C
    if (ctx->r5 != ctx->r16) {
        // 0x8000FE4C: sw          $t7, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r15;
            goto L_8000FE0C;
    }
    // 0x8000FE4C: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
L_8000FE50:
    // 0x8000FE50: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8000FE54: beq         $t1, $zero, L_80010094
    if (ctx->r9 == 0) {
        // 0x8000FE58: lui         $at, 0x40F0
        ctx->r1 = S32(0X40F0 << 16);
            goto L_80010094;
    }
    // 0x8000FE58: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8000FE5C: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x8000FE60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000FE64: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000FE68: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000FE6C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000FE70: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x8000FE74: div.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f10.d, ctx->f6.d);
    // 0x8000FE78: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8000FE7C: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x8000FE80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000FE84: andi        $a3, $s0, 0x3
    ctx->r7 = ctx->r16 & 0X3;
    // 0x8000FE88: blez        $s0, L_80010094
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8000FE8C: cvt.s.d     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
            goto L_80010094;
    }
    // 0x8000FE8C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8000FE90: beq         $a3, $zero, L_8000FF70
    if (ctx->r7 == 0) {
        // 0x8000FE94: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_8000FF70;
    }
    // 0x8000FE94: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8000FE98: sll         $t0, $zero, 1
    ctx->r8 = S32(0 << 1);
    // 0x8000FE9C: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x8000FEA0: addu        $v1, $s5, $t7
    ctx->r3 = ADD32(ctx->r21, ctx->r15);
    // 0x8000FEA4: addu        $v0, $t3, $t0
    ctx->r2 = ADD32(ctx->r11, ctx->r8);
    // 0x8000FEA8: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
    // 0x8000FEAC: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x8000FEB0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8000FEB4: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8000FEB8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8000FEBC: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8000FEC0: beq         $a2, $a1, L_8000FF28
    if (ctx->r6 == ctx->r5) {
        // 0x8000FEC4: cvt.s.w     $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = CVT_S_W(ctx->f14.u32l);
            goto L_8000FF28;
    }
    // 0x8000FEC4: cvt.s.w     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = CVT_S_W(ctx->f14.u32l);
L_8000FEC8:
    // 0x8000FEC8: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000FECC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8000FED0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8000FED4: sub.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x8000FED8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000FEDC: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000FEE0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000FEE4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000FEE8: nop

    // 0x8000FEEC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000FEF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FEF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FEF8: nop

    // 0x8000FEFC: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x8000FF00: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8000FF04: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000FF08: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
    // 0x8000FF0C: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x8000FF10: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8000FF14: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x8000FF18: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8000FF1C: cvt.s.w     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = CVT_S_W(ctx->f14.u32l);
    // 0x8000FF20: bne         $a2, $a1, L_8000FEC8
    if (ctx->r6 != ctx->r5) {
        // 0x8000FF24: nop
    
            goto L_8000FEC8;
    }
    // 0x8000FF24: nop

L_8000FF28:
    // 0x8000FF28: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000FF2C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8000FF30: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000FF34: sub.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x8000FF38: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000FF3C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000FF40: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000FF44: nop

    // 0x8000FF48: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000FF4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FF50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FF54: nop

    // 0x8000FF58: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x8000FF5C: mfc1        $t7, $f14
    ctx->r15 = (int32_t)ctx->f14.u32l;
    // 0x8000FF60: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000FF64: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
    // 0x8000FF68: nop

    // 0x8000FF6C: beq         $a1, $s0, L_80010094
    if (ctx->r5 == ctx->r16) {
        // 0x8000FF70: sll         $t0, $a1, 1
        ctx->r8 = S32(ctx->r5 << 1);
            goto L_80010094;
    }
L_8000FF70:
    // 0x8000FF70: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x8000FF74: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8000FF78: addu        $v1, $s5, $t8
    ctx->r3 = ADD32(ctx->r21, ctx->r24);
    // 0x8000FF7C: addu        $v0, $t3, $t0
    ctx->r2 = ADD32(ctx->r11, ctx->r8);
    // 0x8000FF80: addu        $a0, $t2, $t0
    ctx->r4 = ADD32(ctx->r10, ctx->r8);
L_8000FF84:
    // 0x8000FF84: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x8000FF88: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x8000FF8C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8000FF90: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000FF94: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000FF98: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000FF9C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8000FFA0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000FFA4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8000FFA8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000FFAC: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8000FFB0: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000FFB4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000FFB8: nop

    // 0x8000FFBC: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000FFC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FFC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000FFC8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000FFCC: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000FFD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000FFD4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8000FFD8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000FFDC: sw          $t8, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r24;
    // 0x8000FFE0: lh          $t6, -0x6($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X6);
    // 0x8000FFE4: lh          $t9, -0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X6);
    // 0x8000FFE8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000FFEC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8000FFF0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000FFF4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000FFF8: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000FFFC: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80010000: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010004: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80010008: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001000C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010010: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80010014: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80010018: sw          $t8, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r24;
    // 0x8001001C: lh          $t6, -0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X4);
    // 0x80010020: lh          $t9, -0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X4);
    // 0x80010024: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80010028: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8001002C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010030: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80010034: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80010038: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8001003C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010040: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80010044: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80010048: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001004C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80010050: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80010054: sw          $t8, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r24;
    // 0x80010058: lh          $t6, -0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X2);
    // 0x8001005C: lh          $t9, -0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X2);
    // 0x80010060: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80010064: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80010068: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001006C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80010070: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80010074: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80010078: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001007C: nop

    // 0x80010080: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80010084: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80010088: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001008C: bne         $a1, $s0, L_8000FF84
    if (ctx->r5 != ctx->r16) {
        // 0x80010090: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_8000FF84;
    }
    // 0x80010090: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
L_80010094:
    // 0x80010094: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80010098: sh          $t1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r9;
    // 0x8001009C: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x800100A0: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x800100A4: nop

    // 0x800100A8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800100AC: nop

    // 0x800100B0: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
L_800100B4:
    // 0x800100B4: lh          $t8, 0x20($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X20);
    // 0x800100B8: nop

    // 0x800100BC: beq         $t8, $zero, L_800101E8
    if (ctx->r24 == 0) {
        // 0x800100C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800101E8;
    }
    // 0x800100C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800100C4: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x800100C8: nop

    // 0x800100CC: bc1f        L_800101E8
    if (!c1cs) {
        // 0x800100D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800101E8;
    }
    // 0x800100D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800100D4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800100D8: nop

    // 0x800100DC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800100E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800100E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800100E8: nop

    // 0x800100EC: cvt.w.s     $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    ctx->f8.u32l = CVT_W_S(ctx->f22.fl);
    // 0x800100F0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800100F4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800100F8: nop

    // 0x800100FC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80010100: nop

    // 0x80010104: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80010108: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001010C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010110: nop

    // 0x80010114: cvt.w.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    ctx->f6.u32l = CVT_W_S(ctx->f20.fl);
    // 0x80010118: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x8001011C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80010120: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80010124: beq         $at, $zero, L_800101E8
    if (ctx->r1 == 0) {
        // 0x80010128: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800101E8;
    }
    // 0x80010128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001012C:
    // 0x8001012C: blez        $s0, L_800101CC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80010130: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800101CC;
    }
    // 0x80010130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80010134: andi        $a3, $s0, 0x3
    ctx->r7 = ctx->r16 & 0X3;
    // 0x80010138: beq         $a3, $zero, L_80010170
    if (ctx->r7 == 0) {
        // 0x8001013C: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80010170;
    }
    // 0x8001013C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80010140: sll         $a2, $zero, 2
    ctx->r6 = S32(0 << 2);
    // 0x80010144: addu        $v0, $s4, $a2
    ctx->r2 = ADD32(ctx->r20, ctx->r6);
    // 0x80010148: addu        $v1, $s5, $a2
    ctx->r3 = ADD32(ctx->r21, ctx->r6);
L_8001014C:
    // 0x8001014C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80010150: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80010154: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80010158: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001015C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80010160: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80010164: bne         $a1, $a0, L_8001014C
    if (ctx->r5 != ctx->r4) {
        // 0x80010168: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8001014C;
    }
    // 0x80010168: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001016C: beq         $a0, $s0, L_800101CC
    if (ctx->r4 == ctx->r16) {
        // 0x80010170: sll         $a2, $a0, 2
        ctx->r6 = S32(ctx->r4 << 2);
            goto L_800101CC;
    }
L_80010170:
    // 0x80010170: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
    // 0x80010174: addu        $v0, $s4, $a2
    ctx->r2 = ADD32(ctx->r20, ctx->r6);
    // 0x80010178: addu        $v1, $s5, $a2
    ctx->r3 = ADD32(ctx->r21, ctx->r6);
L_8001017C:
    // 0x8001017C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80010180: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80010184: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80010188: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001018C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80010190: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80010194: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x80010198: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8001019C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800101A0: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x800101A4: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x800101A8: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800101AC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x800101B0: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x800101B4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800101B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800101BC: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x800101C0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800101C4: bne         $a0, $s0, L_8001017C
    if (ctx->r4 != ctx->r16) {
        // 0x800101C8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8001017C;
    }
    // 0x800101C8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_800101CC:
    // 0x800101CC: lh          $t6, 0x20($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X20);
    // 0x800101D0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800101D4: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800101D8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800101DC: bne         $at, $zero, L_8001012C
    if (ctx->r1 != 0) {
        // 0x800101E0: sh          $t7, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r15;
            goto L_8001012C;
    }
    // 0x800101E0: sh          $t7, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r15;
    // 0x800101E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800101E8:
    // 0x800101E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800101EC: jr          $ra
    // 0x800101F0: nop

    return;
    // 0x800101F0: nop

    // 0x800101F4: jr          $ra
    // 0x800101F8: nop

    return;
    // 0x800101F8: nop

;}
RECOMP_FUNC void func_800101FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800101FC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80010200: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80010204: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80010208: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8001020C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80010210: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80010214: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80010218: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8001021C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80010220: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80010224: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80010228: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001022C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80010230: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80010234: lw          $v1, 0x74($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X74);
    // 0x80010238: nop

    // 0x8001023C: beq         $v1, $zero, L_80010304
    if (ctx->r3 == 0) {
        // 0x80010240: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_80010304;
    }
    // 0x80010240: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80010244: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80010248: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8001024C: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80010250: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80010254: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80010258: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x8001025C: nop

    // 0x80010260: bc1f        L_80010270
    if (!c1cs) {
        // 0x80010264: nop
    
            goto L_80010270;
    }
    // 0x80010264: nop

    // 0x80010268: b           L_80010304
    // 0x8001026C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
        goto L_80010304;
    // 0x8001026C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_80010270:
    // 0x80010270: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80010274: lh          $v1, 0x16($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X16);
    // 0x80010278: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001027C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010280: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010284: nop

    // 0x80010288: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8001028C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80010290: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80010294: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80010298: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001029C: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800102A0: bne         $at, $zero, L_800102D8
    if (ctx->r1 != 0) {
        // 0x800102A4: nop
    
            goto L_800102D8;
    }
    // 0x800102A4: nop

    // 0x800102A8: lh          $t7, 0x42($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X42);
    // 0x800102AC: nop

    // 0x800102B0: beq         $t7, $zero, L_800102CC
    if (ctx->r15 == 0) {
        // 0x800102B4: nop
    
            goto L_800102CC;
    }
    // 0x800102B4: nop

    // 0x800102B8: lh          $t8, 0x14($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X14);
    // 0x800102BC: nop

    // 0x800102C0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800102C4: b           L_800102D8
    // 0x800102C8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
        goto L_800102D8;
    // 0x800102C8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
L_800102CC:
    // 0x800102CC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x800102D0: nop

    // 0x800102D4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
L_800102D8:
    // 0x800102D8: lhu         $t9, 0x40($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X40);
    // 0x800102DC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x800102E0: beq         $t9, $zero, L_80010300
    if (ctx->r25 == 0) {
        // 0x800102E4: swc1        $f0, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
            goto L_80010300;
    }
    // 0x800102E4: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x800102E8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800102EC: lui         $at, 0xDFFF
    ctx->r1 = S32(0XDFFF << 16);
    // 0x800102F0: lw          $t6, 0x78($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X78);
    // 0x800102F4: ori         $at, $at, 0xE3FF
    ctx->r1 = ctx->r1 | 0XE3FF;
    // 0x800102F8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800102FC: sw          $t7, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r15;
L_80010300:
    // 0x80010300: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_80010304:
    // 0x80010304: nop

    // 0x80010308: lw          $v0, 0x98($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X98);
    // 0x8001030C: nop

    // 0x80010310: beq         $v0, $zero, L_80010674
    if (ctx->r2 == 0) {
        // 0x80010314: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80010674;
    }
    // 0x80010314: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80010318: lw          $s1, 0x10($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X10);
    // 0x8001031C: nop

    // 0x80010320: beq         $s1, $zero, L_80010340
    if (ctx->r17 == 0) {
        // 0x80010324: nop
    
            goto L_80010340;
    }
    // 0x80010324: nop

    // 0x80010328: jal         0x8000FBF8
    // 0x8001032C: nop

    func_8000FBF8(rdram, ctx);
        goto after_0;
    // 0x8001032C: nop

    after_0:
    // 0x80010330: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80010334: nop

    // 0x80010338: lw          $v0, 0x98($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X98);
    // 0x8001033C: nop

L_80010340:
    // 0x80010340: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80010344: nop

    // 0x80010348: beq         $v1, $zero, L_80010674
    if (ctx->r3 == 0) {
        // 0x8001034C: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80010674;
    }
    // 0x8001034C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80010350: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80010354: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80010358: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8001035C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80010360: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
    // 0x80010364: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x80010368: lwc1        $f22, 0x8($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8001036C: nop

    // 0x80010370: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x80010374: swc1        $f22, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f22.u32l;
    // 0x80010378: bc1t        L_80010674
    if (c1cs) {
        // 0x8001037C: lw          $t7, 0x48($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X48);
            goto L_80010674;
    }
    // 0x8001037C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80010380: lh          $t6, 0x14($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X14);
    // 0x80010384: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80010388: blez        $t6, L_80010670
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8001038C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80010670;
    }
    // 0x8001038C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80010390: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80010394: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80010398: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x8001039C: lwc1        $f21, 0x4EB8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X4EB8);
    // 0x800103A0: lwc1        $f20, 0x4EBC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4EBC);
    // 0x800103A4: addiu       $s5, $s5, -0x138C
    ctx->r21 = ADD32(ctx->r21, -0X138C);
    // 0x800103A8: addiu       $s6, $s6, -0x137C
    ctx->r22 = ADD32(ctx->r22, -0X137C);
L_800103AC:
    // 0x800103AC: lw          $t7, 0x18($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X18);
    // 0x800103B0: sll         $t8, $s2, 3
    ctx->r24 = S32(ctx->r18 << 3);
    // 0x800103B4: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x800103B8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x800103BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800103C0: beq         $v0, $zero, L_80010404
    if (ctx->r2 == 0) {
        // 0x800103C4: nop
    
            goto L_80010404;
    }
    // 0x800103C4: nop

    // 0x800103C8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800103CC: nop

    // 0x800103D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800103D4: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800103D8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800103DC: nop

    // 0x800103E0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800103E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800103E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800103EC: nop

    // 0x800103F0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800103F4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x800103F8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800103FC: sll         $t7, $t6, 17
    ctx->r15 = S32(ctx->r14 << 17);
    // 0x80010400: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
L_80010404:
    // 0x80010404: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80010408: nop

    // 0x8001040C: beq         $v0, $zero, L_800104D8
    if (ctx->r2 == 0) {
        // 0x80010410: nop
    
            goto L_800104D8;
    }
    // 0x80010410: nop

    // 0x80010414: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80010418: bgez        $v0, L_80010430
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001041C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80010430;
    }
    // 0x8001041C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80010420: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80010424: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80010428: nop

    // 0x8001042C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80010430:
    // 0x80010430: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80010434: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010438: nop

    // 0x8001043C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80010440: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010444: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010448: nop

    // 0x8001044C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80010450: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80010454: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80010458: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8001045C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80010460: nop

    // 0x80010464: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80010468: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8001046C: mul.d       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80010470: jal         0x8007A640
    // 0x80010474: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x80010474: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_1:
    // 0x80010478: mtc1        $s1, $f18
    ctx->f18.u32l = ctx->r17;
    // 0x8001047C: lbu         $t8, 0x2($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2);
    // 0x80010480: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80010484: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80010488: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8001048C: bgez        $t9, L_800104A4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80010490: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800104A4;
    }
    // 0x80010490: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80010494: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80010498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001049C: nop

    // 0x800104A0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800104A4:
    // 0x800104A4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800104A8: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800104AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800104B0: nop

    // 0x800104B4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800104B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800104BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800104C0: nop

    // 0x800104C4: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800104C8: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x800104CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800104D0: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x800104D4: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
L_800104D8:
    // 0x800104D8: lbu         $t9, 0x7($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X7);
    // 0x800104DC: nop

    // 0x800104E0: sra         $t6, $t9, 4
    ctx->r14 = S32(SIGNED(ctx->r25) >> 4);
    // 0x800104E4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800104E8: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x800104EC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x800104F0: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x800104F4: and         $t6, $t9, $s1
    ctx->r14 = ctx->r25 & ctx->r17;
    // 0x800104F8: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x800104FC: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x80010500: lb          $v0, 0x1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1);
    // 0x80010504: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80010508: beq         $v0, $zero, L_8001054C
    if (ctx->r2 == 0) {
        // 0x8001050C: nop
    
            goto L_8001054C;
    }
    // 0x8001050C: nop

    // 0x80010510: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80010514: nop

    // 0x80010518: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001051C: mul.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80010520: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010524: nop

    // 0x80010528: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001052C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010530: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010534: nop

    // 0x80010538: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001053C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80010540: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80010544: sll         $t6, $t7, 17
    ctx->r14 = S32(ctx->r15 << 17);
    // 0x80010548: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
L_8001054C:
    // 0x8001054C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80010550: nop

    // 0x80010554: beq         $v0, $zero, L_80010634
    if (ctx->r2 == 0) {
        // 0x80010558: nop
    
            goto L_80010634;
    }
    // 0x80010558: nop

    // 0x8001055C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80010560: bgez        $v0, L_80010578
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80010564: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80010578;
    }
    // 0x80010564: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80010568: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001056C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80010570: nop

    // 0x80010574: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80010578:
    // 0x80010578: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x8001057C: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
    // 0x80010580: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80010584: nop

    // 0x80010588: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8001058C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010590: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80010594: nop

    // 0x80010598: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001059C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800105A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800105A4: andi        $t6, $t7, 0x3FF
    ctx->r14 = ctx->r15 & 0X3FF;
    // 0x800105A8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800105AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800105B0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800105B4: addu        $t7, $s6, $t9
    ctx->r15 = ADD32(ctx->r22, ctx->r25);
    // 0x800105B8: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800105BC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x800105C0: mul.d       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f20.d, ctx->f10.d);
    // 0x800105C4: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x800105C8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800105CC: jal         0x8007A640
    // 0x800105D0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x800105D0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x800105D4: mtc1        $s1, $f18
    ctx->f18.u32l = ctx->r17;
    // 0x800105D8: lbu         $t6, 0x3($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3);
    // 0x800105DC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800105E0: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x800105E4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800105E8: bgez        $t8, L_80010600
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800105EC: cvt.s.w     $f8, $f18
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
            goto L_80010600;
    }
    // 0x800105EC: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800105F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800105F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800105F8: nop

    // 0x800105FC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80010600:
    // 0x80010600: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80010604: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80010608: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001060C: nop

    // 0x80010610: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80010614: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80010618: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001061C: nop

    // 0x80010620: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80010624: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x80010628: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001062C: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x80010630: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
L_80010634:
    // 0x80010634: lbu         $t8, 0x7($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X7);
    // 0x80010638: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001063C: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80010640: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x80010644: addu        $t6, $s5, $t7
    ctx->r14 = ADD32(ctx->r21, ctx->r15);
    // 0x80010648: lhu         $t8, 0x0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X0);
    // 0x8001064C: lw          $t7, 0x20($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X20);
    // 0x80010650: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x80010654: addu        $t6, $t7, $s3
    ctx->r14 = ADD32(ctx->r15, ctx->r19);
    // 0x80010658: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x8001065C: lh          $t8, 0x14($s4)
    ctx->r24 = MEM_H(ctx->r20, 0X14);
    // 0x80010660: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x80010664: slt         $at, $s2, $t8
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010668: bne         $at, $zero, L_800103AC
    if (ctx->r1 != 0) {
        // 0x8001066C: nop
    
            goto L_800103AC;
    }
    // 0x8001066C: nop

L_80010670:
    // 0x80010670: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
L_80010674:
    // 0x80010674: nop

    // 0x80010678: lw          $s0, 0x8($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X8);
    // 0x8001067C: nop

    // 0x80010680: beq         $s0, $zero, L_800106A4
    if (ctx->r16 == 0) {
        // 0x80010684: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_800106A4;
    }
    // 0x80010684: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80010688:
    // 0x80010688: jal         0x800101FC
    // 0x8001068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800101FC(rdram, ctx);
        goto after_3;
    // 0x8001068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80010690: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80010694: nop

    // 0x80010698: bne         $s0, $zero, L_80010688
    if (ctx->r16 != 0) {
        // 0x8001069C: nop
    
            goto L_80010688;
    }
    // 0x8001069C: nop

    // 0x800106A0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_800106A4:
    // 0x800106A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800106A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800106AC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800106B0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800106B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800106B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800106BC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800106C0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800106C4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800106C8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800106CC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800106D0: jr          $ra
    // 0x800106D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800106D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800106D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800106D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800106DC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800106E0: lw          $t6, 0x6284($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6284);
    // 0x800106E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800106E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800106EC: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x800106F0: nop

    // 0x800106F4: beq         $v0, $zero, L_80010720
    if (ctx->r2 == 0) {
        // 0x800106F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80010720;
    }
    // 0x800106F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800106FC: beq         $v0, $zero, L_8001071C
    if (ctx->r2 == 0) {
        // 0x80010700: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8001071C;
    }
    // 0x80010700: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80010704:
    // 0x80010704: jal         0x800101FC
    // 0x80010708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800101FC(rdram, ctx);
        goto after_0;
    // 0x80010708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8001070C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80010710: nop

    // 0x80010714: bne         $s0, $zero, L_80010704
    if (ctx->r16 != 0) {
        // 0x80010718: nop
    
            goto L_80010704;
    }
    // 0x80010718: nop

L_8001071C:
    // 0x8001071C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80010720:
    // 0x80010720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80010724: jr          $ra
    // 0x80010728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80010728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80010730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010730: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80010734: addiu       $a1, $a1, 0x6280
    ctx->r5 = ADD32(ctx->r5, 0X6280);
    // 0x80010738: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8001073C: jr          $ra
    // 0x80010740: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x80010740: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80010744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010744: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80010748: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8001074C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80010750: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80010754: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80010758: addiu       $t7, $zero, 0x140
    ctx->r15 = ADD32(0, 0X140);
    // 0x8001075C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80010760: sh          $t6, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r14;
    // 0x80010764: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x80010768: sh          $t7, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r15;
    // 0x8001076C: sh          $zero, 0x62($a0)
    MEM_H(0X62, ctx->r4) = 0;
    // 0x80010770: sh          $zero, 0x60($a0)
    MEM_H(0X60, ctx->r4) = 0;
    // 0x80010774: sb          $zero, 0x67($a0)
    MEM_B(0X67, ctx->r4) = 0;
    // 0x80010778: sb          $zero, 0x66($a0)
    MEM_B(0X66, ctx->r4) = 0;
    // 0x8001077C: sb          $zero, 0x65($a0)
    MEM_B(0X65, ctx->r4) = 0;
    // 0x80010780: sb          $zero, 0x64($a0)
    MEM_B(0X64, ctx->r4) = 0;
    // 0x80010784: sw          $zero, 0x68($a0)
    MEM_W(0X68, ctx->r4) = 0;
    // 0x80010788: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001078C: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    // 0x80010790: lwc1        $f6, 0x4EC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4EC0);
    // 0x80010794: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80010798: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8001079C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800107A0: sb          $v0, 0x224($a0)
    MEM_B(0X224, ctx->r4) = ctx->r2;
    // 0x800107A4: sb          $v0, 0x225($a0)
    MEM_B(0X225, ctx->r4) = ctx->r2;
    // 0x800107A8: sb          $v0, 0x226($a0)
    MEM_B(0X226, ctx->r4) = ctx->r2;
    // 0x800107AC: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x800107B0: addiu       $t0, $zero, 0x1F40
    ctx->r8 = ADD32(0, 0X1F40);
    // 0x800107B4: ori         $t1, $zero, 0xFF88
    ctx->r9 = 0 | 0XFF88;
    // 0x800107B8: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x800107BC: ori         $t3, $zero, 0xFF60
    ctx->r11 = 0 | 0XFF60;
    // 0x800107C0: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x800107C4: ori         $t5, $zero, 0xFFFC
    ctx->r13 = 0 | 0XFFFC;
    // 0x800107C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800107CC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x800107D0: sb          $v1, 0xA8($a0)
    MEM_B(0XA8, ctx->r4) = ctx->r3;
    // 0x800107D4: sb          $v1, 0xA9($a0)
    MEM_B(0XA9, ctx->r4) = ctx->r3;
    // 0x800107D8: sb          $v1, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r3;
    // 0x800107DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800107E0: sh          $t9, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = ctx->r25;
    // 0x800107E4: sh          $t0, 0x7E($a0)
    MEM_H(0X7E, ctx->r4) = ctx->r8;
    // 0x800107E8: sh          $t1, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r9;
    // 0x800107EC: sh          $t2, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r10;
    // 0x800107F0: sh          $t3, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r11;
    // 0x800107F4: sh          $t4, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r12;
    // 0x800107F8: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x800107FC: sh          $t5, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r13;
    // 0x80010800: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x80010804: sw          $zero, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = 0;
    // 0x80010808: sw          $zero, 0x50($a0)
    MEM_W(0X50, ctx->r4) = 0;
    // 0x8001080C: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    // 0x80010810: sh          $t6, 0x22C($a0)
    MEM_H(0X22C, ctx->r4) = ctx->r14;
    // 0x80010814: sh          $t7, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = ctx->r15;
    // 0x80010818: addiu       $v1, $a0, 0x38
    ctx->r3 = ADD32(ctx->r4, 0X38);
    // 0x8001081C: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80010820: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x80010824: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x80010828: swc1        $f0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f0.u32l;
    // 0x8001082C: swc1        $f0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f0.u32l;
    // 0x80010830: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x80010834: swc1        $f2, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f2.u32l;
    // 0x80010838: swc1        $f2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f2.u32l;
    // 0x8001083C: swc1        $f2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f2.u32l;
    // 0x80010840: swc1        $f2, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f2.u32l;
    // 0x80010844: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
    // 0x80010848: swc1        $f2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f2.u32l;
    // 0x8001084C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80010850: sh          $zero, 0xD4($v1)
    MEM_H(0XD4, ctx->r3) = 0;
    // 0x80010854: sh          $zero, 0x9C($v1)
    MEM_H(0X9C, ctx->r3) = 0;
    // 0x80010858: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8001085C: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x80010860: sh          $zero, 0xD4($v1)
    MEM_H(0XD4, ctx->r3) = 0;
    // 0x80010864: sh          $zero, 0x10C($v1)
    MEM_H(0X10C, ctx->r3) = 0;
    // 0x80010868: sh          $zero, 0x144($v1)
    MEM_H(0X144, ctx->r3) = 0;
    // 0x8001086C: jr          $ra
    // 0x80010870: sh          $zero, 0x9C($v1)
    MEM_H(0X9C, ctx->r3) = 0;
    return;
    // 0x80010870: sh          $zero, 0x9C($v1)
    MEM_H(0X9C, ctx->r3) = 0;
;}
RECOMP_FUNC void func_80010874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001087C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80010880: jal         0x80010744
    // 0x80010884: addiu       $a0, $a0, 0x7A48
    ctx->r4 = ADD32(ctx->r4, 0X7A48);
    func_80010744(rdram, ctx);
        goto after_0;
    // 0x80010884: addiu       $a0, $a0, 0x7A48
    ctx->r4 = ADD32(ctx->r4, 0X7A48);
    after_0:
    // 0x80010888: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8001088C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80010890: addiu       $a0, $a0, 0x6280
    ctx->r4 = ADD32(ctx->r4, 0X6280);
    // 0x80010894: addiu       $t6, $t6, 0x7A48
    ctx->r14 = ADD32(ctx->r14, 0X7A48);
    // 0x80010898: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8001089C: jal         0x8000C734
    // 0x800108A0: ori         $a0, $zero, 0xFB90
    ctx->r4 = 0 | 0XFB90;
    func_8000C734(rdram, ctx);
        goto after_1;
    // 0x800108A0: ori         $a0, $zero, 0xFB90
    ctx->r4 = 0 | 0XFB90;
    after_1:
    // 0x800108A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800108A8: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800108AC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800108B0: sw          $v0, 0x6288($at)
    MEM_W(0X6288, ctx->r1) = ctx->r2;
    // 0x800108B4: addiu       $a0, $a0, 0x6818
    ctx->r4 = ADD32(ctx->r4, 0X6818);
    // 0x800108B8: addiu       $v1, $v1, 0x62A0
    ctx->r3 = ADD32(ctx->r3, 0X62A0);
    // 0x800108BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800108C0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800108C4:
    // 0x800108C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800108C8: sw          $zero, 0x78($a1)
    MEM_W(0X78, ctx->r5) = 0;
    // 0x800108CC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800108D0: sw          $a2, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r6;
    // 0x800108D4: addiu       $a2, $a2, 0xB8
    ctx->r6 = ADD32(ctx->r6, 0XB8);
    // 0x800108D8: bne         $at, $zero, L_800108C4
    if (ctx->r1 != 0) {
        // 0x800108DC: addiu       $a1, $a1, 0xB8
        ctx->r5 = ADD32(ctx->r5, 0XB8);
            goto L_800108C4;
    }
    // 0x800108DC: addiu       $a1, $a1, 0xB8
    ctx->r5 = ADD32(ctx->r5, 0XB8);
    // 0x800108E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800108E4: sw          $zero, 0x6818($at)
    MEM_W(0X6818, ctx->r1) = 0;
    // 0x800108E8: jal         0x8000C734
    // 0x800108EC: ori         $a0, $zero, 0x9920
    ctx->r4 = 0 | 0X9920;
    func_8000C734(rdram, ctx);
        goto after_2;
    // 0x800108EC: ori         $a0, $zero, 0x9920
    ctx->r4 = 0 | 0X9920;
    after_2:
    // 0x800108F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800108F4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800108F8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800108FC: sw          $v0, 0x628C($at)
    MEM_W(0X628C, ctx->r1) = ctx->r2;
    // 0x80010900: addiu       $a0, $a0, 0x6D98
    ctx->r4 = ADD32(ctx->r4, 0X6D98);
    // 0x80010904: addiu       $v1, $v1, 0x6820
    ctx->r3 = ADD32(ctx->r3, 0X6820);
    // 0x80010908: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001090C:
    // 0x8001090C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80010910: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80010914: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x80010918: bne         $at, $zero, L_8001090C
    if (ctx->r1 != 0) {
        // 0x8001091C: addiu       $a1, $a1, 0x70
        ctx->r5 = ADD32(ctx->r5, 0X70);
            goto L_8001090C;
    }
    // 0x8001091C: addiu       $a1, $a1, 0x70
    ctx->r5 = ADD32(ctx->r5, 0X70);
    // 0x80010920: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010924: sw          $zero, 0x6D98($at)
    MEM_W(0X6D98, ctx->r1) = 0;
    // 0x80010928: jal         0x8000C734
    // 0x8001092C: addiu       $a0, $zero, 0x3E80
    ctx->r4 = ADD32(0, 0X3E80);
    func_8000C734(rdram, ctx);
        goto after_3;
    // 0x8001092C: addiu       $a0, $zero, 0x3E80
    ctx->r4 = ADD32(0, 0X3E80);
    after_3:
    // 0x80010930: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010934: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80010938: sw          $v0, 0x6290($at)
    MEM_W(0X6290, ctx->r1) = ctx->r2;
    // 0x8001093C: addiu       $v1, $v1, 0x6DA0
    ctx->r3 = ADD32(ctx->r3, 0X6DA0);
    // 0x80010940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80010944:
    // 0x80010944: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x80010948: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001094C: slti        $at, $a0, 0x1F4
    ctx->r1 = SIGNED(ctx->r4) < 0X1F4 ? 1 : 0;
    // 0x80010950: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80010954: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80010958: bne         $at, $zero, L_80010944
    if (ctx->r1 != 0) {
        // 0x8001095C: sw          $t8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r24;
            goto L_80010944;
    }
    // 0x8001095C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80010960: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010964: sw          $zero, 0x7570($at)
    MEM_W(0X7570, ctx->r1) = 0;
    // 0x80010968: jal         0x8000C734
    // 0x8001096C: addiu       $a0, $zero, 0xAF0
    ctx->r4 = ADD32(0, 0XAF0);
    func_8000C734(rdram, ctx);
        goto after_4;
    // 0x8001096C: addiu       $a0, $zero, 0xAF0
    ctx->r4 = ADD32(0, 0XAF0);
    after_4:
    // 0x80010970: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010974: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80010978: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8001097C: sw          $v0, 0x6294($at)
    MEM_W(0X6294, ctx->r1) = ctx->r2;
    // 0x80010980: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    // 0x80010984: addiu       $v1, $v1, 0x7578
    ctx->r3 = ADD32(ctx->r3, 0X7578);
    // 0x80010988: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8001098C:
    // 0x8001098C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80010990: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80010994: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x80010998: bne         $at, $zero, L_8001098C
    if (ctx->r1 != 0) {
        // 0x8001099C: addiu       $a1, $a1, 0x1C
        ctx->r5 = ADD32(ctx->r5, 0X1C);
            goto L_8001098C;
    }
    // 0x8001099C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x800109A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800109A4: sw          $zero, 0x7708($at)
    MEM_W(0X7708, ctx->r1) = 0;
    // 0x800109A8: jal         0x8000C734
    // 0x800109AC: addiu       $a0, $zero, 0x12C0
    ctx->r4 = ADD32(0, 0X12C0);
    func_8000C734(rdram, ctx);
        goto after_5;
    // 0x800109AC: addiu       $a0, $zero, 0x12C0
    ctx->r4 = ADD32(0, 0X12C0);
    after_5:
    // 0x800109B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800109B4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800109B8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800109BC: sw          $v0, 0x6298($at)
    MEM_W(0X6298, ctx->r1) = ctx->r2;
    // 0x800109C0: addiu       $a0, $a0, 0x78A0
    ctx->r4 = ADD32(ctx->r4, 0X78A0);
    // 0x800109C4: addiu       $v1, $v1, 0x7710
    ctx->r3 = ADD32(ctx->r3, 0X7710);
    // 0x800109C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800109CC:
    // 0x800109CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800109D0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800109D4: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x800109D8: bne         $at, $zero, L_800109CC
    if (ctx->r1 != 0) {
        // 0x800109DC: addiu       $a1, $a1, 0x30
        ctx->r5 = ADD32(ctx->r5, 0X30);
            goto L_800109CC;
    }
    // 0x800109DC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x800109E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800109E4: sw          $zero, 0x78A0($at)
    MEM_W(0X78A0, ctx->r1) = 0;
    // 0x800109E8: jal         0x8000C734
    // 0x800109EC: addiu       $a0, $zero, 0x1130
    ctx->r4 = ADD32(0, 0X1130);
    func_8000C734(rdram, ctx);
        goto after_6;
    // 0x800109EC: addiu       $a0, $zero, 0x1130
    ctx->r4 = ADD32(0, 0X1130);
    after_6:
    // 0x800109F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800109F4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800109F8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800109FC: sw          $v0, 0x629C($at)
    MEM_W(0X629C, ctx->r1) = ctx->r2;
    // 0x80010A00: addiu       $a0, $a0, 0x7A38
    ctx->r4 = ADD32(ctx->r4, 0X7A38);
    // 0x80010A04: addiu       $v1, $v1, 0x78A8
    ctx->r3 = ADD32(ctx->r3, 0X78A8);
    // 0x80010A08: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80010A0C:
    // 0x80010A0C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80010A10: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80010A14: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x80010A18: bne         $at, $zero, L_80010A0C
    if (ctx->r1 != 0) {
        // 0x80010A1C: addiu       $a1, $a1, 0x2C
        ctx->r5 = ADD32(ctx->r5, 0X2C);
            goto L_80010A0C;
    }
    // 0x80010A1C: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    // 0x80010A20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010A24: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80010A28: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80010A2C: sw          $zero, 0x7A38($at)
    MEM_W(0X7A38, ctx->r1) = 0;
    // 0x80010A30: addiu       $v1, $v1, 0x7CF8
    ctx->r3 = ADD32(ctx->r3, 0X7CF8);
    // 0x80010A34: addiu       $v0, $v0, 0x7C78
    ctx->r2 = ADD32(ctx->r2, 0X7C78);
L_80010A38:
    // 0x80010A38: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80010A3C: sw          $zero, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = 0;
    // 0x80010A40: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x80010A44: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80010A48: bne         $v0, $v1, L_80010A38
    if (ctx->r2 != ctx->r3) {
        // 0x80010A4C: sw          $zero, -0x1C($v0)
        MEM_W(-0X1C, ctx->r2) = 0;
            goto L_80010A38;
    }
    // 0x80010A4C: sw          $zero, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = 0;
    // 0x80010A50: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80010A54: addiu       $a2, $a2, 0x6818
    ctx->r6 = ADD32(ctx->r6, 0X6818);
    // 0x80010A58: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80010A5C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80010A60: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80010A64: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80010A68: lw          $t0, 0x62A0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X62A0);
    // 0x80010A6C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80010A70: addiu       $a0, $a0, 0x6284
    ctx->r4 = ADD32(ctx->r4, 0X6284);
    // 0x80010A74: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x80010A78: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x80010A7C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80010A80: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80010A84: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80010A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80010A8C: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x80010A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010A94: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    // 0x80010A98: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80010A9C: nop

    // 0x80010AA0: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x80010AA4: sw          $a1, 0x7A3C($at)
    MEM_W(0X7A3C, ctx->r1) = ctx->r5;
    // 0x80010AA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010AB0: sw          $a1, 0x7A40($at)
    MEM_W(0X7A40, ctx->r1) = ctx->r5;
    // 0x80010AB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010AB8: sw          $a1, 0x7A44($at)
    MEM_W(0X7A44, ctx->r1) = ctx->r5;
    // 0x80010ABC: jr          $ra
    // 0x80010AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80010AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80010AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010AC4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80010AC8: addiu       $v0, $v0, 0x6280
    ctx->r2 = ADD32(ctx->r2, 0X6280);
    // 0x80010ACC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80010AD0: nop

    // 0x80010AD4: sh          $a0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r4;
    // 0x80010AD8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80010ADC: nop

    // 0x80010AE0: sh          $a1, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r5;
    // 0x80010AE4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80010AE8: nop

    // 0x80010AEC: sh          $a2, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r6;
    // 0x80010AF0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80010AF4: jr          $ra
    // 0x80010AF8: sh          $a3, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r7;
    return;
    // 0x80010AF8: sh          $a3, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r7;
;}
RECOMP_FUNC void func_80010AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80010B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010B04: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80010B08: addiu       $a1, $s0, 0x44
    ctx->r5 = ADD32(ctx->r16, 0X44);
    // 0x80010B0C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80010B10: jal         0x8000E4A8
    // 0x80010B14: addiu       $a0, $s1, 0x50
    ctx->r4 = ADD32(ctx->r17, 0X50);
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x80010B14: addiu       $a0, $s1, 0x50
    ctx->r4 = ADD32(ctx->r17, 0X50);
    after_0:
    // 0x80010B18: lw          $t7, 0x78($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X78);
    // 0x80010B1C: lui         $at, 0xDFFF
    ctx->r1 = S32(0XDFFF << 16);
    // 0x80010B20: lw          $t6, 0x68($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X68);
    // 0x80010B24: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80010B28: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80010B2C: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x80010B30: sw          $t8, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r24;
    // 0x80010B34: ori         $t6, $t8, 0x1C00
    ctx->r14 = ctx->r24 | 0X1C00;
    // 0x80010B38: sw          $t6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r14;
    // 0x80010B3C: lhu         $t7, 0x40($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X40);
    // 0x80010B40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80010B44: blez        $t7, L_80010B90
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80010B48: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80010B90;
    }
    // 0x80010B48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80010B4C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80010B50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80010B54: addiu       $v0, $v0, 0x7570
    ctx->r2 = ADD32(ctx->r2, 0X7570);
    // 0x80010B58: addiu       $a2, $a2, 0x6DA0
    ctx->r6 = ADD32(ctx->r6, 0X6DA0);
L_80010B5C:
    // 0x80010B5C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80010B60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80010B64: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80010B68: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80010B6C: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x80010B70: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80010B74: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x80010B78: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x80010B7C: lhu         $t7, 0x40($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X40);
    // 0x80010B80: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80010B84: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80010B88: bne         $at, $zero, L_80010B5C
    if (ctx->r1 != 0) {
        // 0x80010B8C: nop
    
            goto L_80010B5C;
    }
    // 0x80010B8C: nop

L_80010B90:
    // 0x80010B90: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80010B94: addiu       $v0, $v0, 0x6D98
    ctx->r2 = ADD32(ctx->r2, 0X6D98);
    // 0x80010B98: sw          $zero, 0x74($s1)
    MEM_W(0X74, ctx->r17) = 0;
    // 0x80010B9C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80010BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010BA4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80010BA8: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80010BAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80010BB0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80010BB4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80010BB8: sw          $s0, 0x6820($at)
    MEM_W(0X6820, ctx->r1) = ctx->r16;
    // 0x80010BBC: jr          $ra
    // 0x80010BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80010BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80010BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010BC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80010BC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80010BCC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80010BD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80010BD4: lw          $a3, 0x74($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X74);
    // 0x80010BD8: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80010BDC: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x80010BE0: beq         $a3, $zero, L_80010C0C
    if (ctx->r7 == 0) {
        // 0x80010BE4: or          $t5, $a2, $zero
        ctx->r13 = ctx->r6 | 0;
            goto L_80010C0C;
    }
    // 0x80010BE4: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x80010BE8: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80010BEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80010BF0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80010BF4: jal         0x80010AFC
    // 0x80010BF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_80010AFC(rdram, ctx);
        goto after_0;
    // 0x80010BF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80010BFC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80010C00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80010C04: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80010C08: nop

L_80010C0C:
    // 0x80010C0C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80010C10: addiu       $v1, $v1, 0x6D98
    ctx->r3 = ADD32(ctx->r3, 0X6D98);
    // 0x80010C14: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80010C18: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80010C1C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80010C20: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80010C24: lw          $t4, 0x6820($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6820);
    // 0x80010C28: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80010C2C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80010C30: addiu       $a1, $t1, 0x50
    ctx->r5 = ADD32(ctx->r9, 0X50);
    // 0x80010C34: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80010C38: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80010C3C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80010C40: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80010C44: addiu       $a0, $t4, 0x44
    ctx->r4 = ADD32(ctx->r12, 0X44);
    // 0x80010C48: jal         0x8000E4A8
    // 0x80010C4C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_8000E4A8(rdram, ctx);
        goto after_1;
    // 0x80010C4C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_1:
    // 0x80010C50: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80010C54: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80010C58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80010C5C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80010C60: lw          $t8, 0x7C($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X7C);
    // 0x80010C64: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80010C68: sw          $t8, 0x68($t4)
    MEM_W(0X68, ctx->r12) = ctx->r24;
    // 0x80010C6C: sw          $t4, 0x74($t1)
    MEM_W(0X74, ctx->r9) = ctx->r12;
    // 0x80010C70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80010C74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80010C78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80010C7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80010C80: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x80010C84: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    // 0x80010C88: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x80010C8C: swc1        $f6, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f6.u32l;
    // 0x80010C90: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x80010C94: beq         $t2, $zero, L_80010D68
    if (ctx->r10 == 0) {
        // 0x80010C98: swc1        $f8, 0x10($t4)
        MEM_W(0X10, ctx->r12) = ctx->f8.u32l;
            goto L_80010D68;
    }
    // 0x80010C98: swc1        $f8, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f8.u32l;
    // 0x80010C9C: lhu         $t9, 0x6($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0X6);
    // 0x80010CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80010CA4: sh          $t9, 0x16($t4)
    MEM_H(0X16, ctx->r12) = ctx->r25;
    // 0x80010CA8: lhu         $t6, 0x4($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0X4);
    // 0x80010CAC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80010CB0: sh          $t6, 0x40($t4)
    MEM_H(0X40, ctx->r12) = ctx->r14;
    // 0x80010CB4: lhu         $t7, 0x4($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0X4);
    // 0x80010CB8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x80010CBC: blez        $t7, L_80010D70
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80010CC0: addiu       $t0, $t4, 0x8
        ctx->r8 = ADD32(ctx->r12, 0X8);
            goto L_80010D70;
    }
    // 0x80010CC0: addiu       $t0, $t4, 0x8
    ctx->r8 = ADD32(ctx->r12, 0X8);
    // 0x80010CC4: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80010CC8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80010CCC: addiu       $a3, $a3, 0x7570
    ctx->r7 = ADD32(ctx->r7, 0X7570);
    // 0x80010CD0: addiu       $t3, $t3, 0x6DA0
    ctx->r11 = ADD32(ctx->r11, 0X6DA0);
    // 0x80010CD4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80010CD8:
    // 0x80010CD8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80010CDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80010CE0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80010CE4: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x80010CE8: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80010CEC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80010CF0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80010CF4: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80010CF8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80010CFC: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x80010D00: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80010D04: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80010D08: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80010D0C: sh          $t7, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r15;
    // 0x80010D10: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x80010D14: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80010D18: sh          $t8, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r24;
    // 0x80010D1C: lh          $t9, -0xC($v1)
    ctx->r25 = MEM_H(ctx->r3, -0XC);
    // 0x80010D20: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80010D24: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    // 0x80010D28: lh          $t6, -0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, -0XA);
    // 0x80010D2C: nop

    // 0x80010D30: sh          $t6, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r14;
    // 0x80010D34: lw          $t7, -0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X8);
    // 0x80010D38: nop

    // 0x80010D3C: sw          $t7, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r15;
    // 0x80010D40: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x80010D44: nop

    // 0x80010D48: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x80010D4C: lhu         $t9, 0x4($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0X4);
    // 0x80010D50: nop

    // 0x80010D54: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80010D58: bne         $at, $zero, L_80010CD8
    if (ctx->r1 != 0) {
        // 0x80010D5C: nop
    
            goto L_80010CD8;
    }
    // 0x80010D5C: nop

    // 0x80010D60: b           L_80010D74
    // 0x80010D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80010D74;
    // 0x80010D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80010D68:
    // 0x80010D68: sh          $zero, 0x16($t4)
    MEM_H(0X16, ctx->r12) = 0;
    // 0x80010D6C: sh          $zero, 0x40($t4)
    MEM_H(0X40, ctx->r12) = 0;
L_80010D70:
    // 0x80010D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80010D74:
    // 0x80010D74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80010D78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80010D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80010D80: jr          $ra
    // 0x80010D84: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x80010D84: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_80010D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010D88: jr          $ra
    // 0x80010D8C: nop

    return;
    // 0x80010D8C: nop

;}
RECOMP_FUNC void func_80010D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010D90: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80010D94: addiu       $v1, $v1, 0x6818
    ctx->r3 = ADD32(ctx->r3, 0X6818);
    // 0x80010D98: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80010D9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80010DA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80010DA4: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80010DA8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80010DAC: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x80010DB0: lw          $s0, 0x62A0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X62A0);
    // 0x80010DB4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80010DB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80010DBC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80010DC0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80010DC4: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80010DC8: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80010DCC: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80010DD0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80010DD4: sw          $s0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r16;
    // 0x80010DD8: lhu         $t9, 0x2($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2);
    // 0x80010DDC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80010DE0: addu        $t0, $t9, $a2
    ctx->r8 = ADD32(ctx->r25, ctx->r6);
    // 0x80010DE4: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x80010DE8: jal         0x8007A1B4
    // 0x80010DEC: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80010DEC: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_0:
    // 0x80010DF0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80010DF4: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x80010DF8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80010DFC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80010E00: sra         $t1, $v1, 8
    ctx->r9 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80010E04: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x80010E08: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80010E0C: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80010E10: lhu         $v0, -0x1330($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1330);
    // 0x80010E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80010E18: sb          $v0, 0x82($s0)
    MEM_B(0X82, ctx->r16) = ctx->r2;
    // 0x80010E1C: sb          $v0, 0x81($s0)
    MEM_B(0X81, ctx->r16) = ctx->r2;
    // 0x80010E20: jal         0x800148E8
    // 0x80010E24: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_800148E8(rdram, ctx);
        goto after_1;
    // 0x80010E24: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_1:
    // 0x80010E28: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
    // 0x80010E2C: sw          $zero, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = 0;
    // 0x80010E30: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x80010E34: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80010E38: sw          $zero, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = 0;
    // 0x80010E3C: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    // 0x80010E40: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x80010E44: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x80010E48: sw          $zero, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = 0;
    // 0x80010E4C: lw          $t4, 0x38($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X38);
    // 0x80010E50: addiu       $t5, $zero, 0x5C00
    ctx->r13 = ADD32(0, 0X5C00);
    // 0x80010E54: sw          $t5, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r13;
    // 0x80010E58: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x80010E5C: lhu         $t6, 0x0($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X0);
    // 0x80010E60: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80010E64: bne         $t6, $at, L_80010E74
    if (ctx->r14 != ctx->r1) {
        // 0x80010E68: addiu       $a0, $s0, 0x50
        ctx->r4 = ADD32(ctx->r16, 0X50);
            goto L_80010E74;
    }
    // 0x80010E68: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    // 0x80010E6C: ori         $t8, $t5, 0x8
    ctx->r24 = ctx->r13 | 0X8;
    // 0x80010E70: sw          $t8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r24;
L_80010E74:
    // 0x80010E74: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x80010E78: jal         0x8000E4A8
    // 0x80010E7C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8000E4A8(rdram, ctx);
        goto after_2;
    // 0x80010E7C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x80010E80: lw          $t9, 0x44($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X44);
    // 0x80010E84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80010E88: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x80010E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80010E90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80010E94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80010E98: jr          $ra
    // 0x80010E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80010E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80010EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010EA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80010EA4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80010EA8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80010EAC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80010EB0: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80010EB4: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80010EB8: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80010EBC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80010EC0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80010EC4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80010EC8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80010ECC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80010ED0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80010ED4: bne         $a0, $zero, L_80010EE8
    if (ctx->r4 != 0) {
        // 0x80010ED8: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_80010EE8;
    }
    // 0x80010ED8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80010EDC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80010EE0: lw          $a0, 0x6284($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6284);
    // 0x80010EE4: nop

L_80010EE8:
    // 0x80010EE8: lhu         $t7, 0x0($s6)
    ctx->r15 = MEM_HU(ctx->r22, 0X0);
    // 0x80010EEC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80010EF0: lw          $t6, 0x7D00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D00);
    // 0x80010EF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80010EF8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80010EFC: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x80010F00: lw          $s2, 0x0($t9)
    ctx->r18 = MEM_W(ctx->r25, 0X0);
    // 0x80010F04: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80010F08: jal         0x80010D90
    // 0x80010F0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80010D90(rdram, ctx);
        goto after_0;
    // 0x80010F0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80010F10: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80010F14: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80010F18: beq         $s5, $zero, L_80010F58
    if (ctx->r21 == 0) {
        // 0x80010F1C: sb          $t0, 0x80($v0)
        MEM_B(0X80, ctx->r2) = ctx->r8;
            goto L_80010F58;
    }
    // 0x80010F1C: sb          $t0, 0x80($v0)
    MEM_B(0X80, ctx->r2) = ctx->r8;
    // 0x80010F20: lh          $v1, 0x2C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X2C);
    // 0x80010F24: nop

    // 0x80010F28: bltz        $v1, L_80010F58
    if (SIGNED(ctx->r3) < 0) {
        // 0x80010F2C: sll         $t1, $v1, 1
        ctx->r9 = S32(ctx->r3 << 1);
            goto L_80010F58;
    }
    // 0x80010F2C: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x80010F30: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x80010F34: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80010F38: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80010F3C: sw          $t3, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r11;
    // 0x80010F40: lw          $t4, 0x7D10($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7D10);
    // 0x80010F44: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80010F48: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80010F4C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80010F50: b           L_80010F5C
    // 0x80010F54: sw          $t8, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r24;
        goto L_80010F5C;
    // 0x80010F54: sw          $t8, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r24;
L_80010F58:
    // 0x80010F58: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
L_80010F5C:
    // 0x80010F5C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80010F60: nop

    // 0x80010F64: andi        $t9, $s3, 0x1
    ctx->r25 = ctx->r19 & 0X1;
    // 0x80010F68: beq         $t9, $zero, L_80010FB4
    if (ctx->r25 == 0) {
        // 0x80010F6C: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80010FB4;
    }
    // 0x80010F6C: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x80010F70: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80010F74: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80010F78: bltz        $v0, L_80010FB0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80010F7C: lui         $t0, 0x800A
        ctx->r8 = S32(0X800A << 16);
            goto L_80010FB0;
    }
    // 0x80010F7C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80010F80: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x80010F84: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x80010F88: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x80010F8C: lw          $t0, 0x7D20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7D20);
    // 0x80010F90: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80010F94: addu        $t4, $t0, $t5
    ctx->r12 = ADD32(ctx->r8, ctx->r13);
    // 0x80010F98: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80010F9C: jal         0x80010BC4
    // 0x80010FA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80010BC4(rdram, ctx);
        goto after_1;
    // 0x80010FA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_1:
    // 0x80010FA4: lhu         $t7, 0x36($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X36);
    // 0x80010FA8: nop

    // 0x80010FAC: sh          $t7, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r15;
L_80010FB0:
    // 0x80010FB0: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
L_80010FB4:
    // 0x80010FB4: beq         $t6, $zero, L_8001101C
    if (ctx->r14 == 0) {
        // 0x80010FB8: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8001101C;
    }
    // 0x80010FB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80010FBC: lhu         $v0, 0x3C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3C);
    // 0x80010FC0: nop

    // 0x80010FC4: beq         $v0, $zero, L_8001101C
    if (ctx->r2 == 0) {
        // 0x80010FC8: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_8001101C;
    }
    // 0x80010FC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80010FCC: blez        $v0, L_80011018
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80010FD0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80011018;
    }
    // 0x80010FD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80010FD4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80010FD8:
    // 0x80010FD8: lw          $t8, 0x40($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X40);
    // 0x80010FDC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80010FE0: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x80010FE4: lh          $t1, 0x0($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X0);
    // 0x80010FE8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80010FEC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80010FF0: addu        $a1, $t2, $s6
    ctx->r5 = ADD32(ctx->r10, ctx->r22);
    // 0x80010FF4: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x80010FF8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80010FFC: jal         0x80010EA0
    // 0x80011000: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80010EA0(rdram, ctx);
        goto after_2;
    // 0x80011000: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_2:
    // 0x80011004: lhu         $t3, 0x3C($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X3C);
    // 0x80011008: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001100C: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80011010: bne         $at, $zero, L_80010FD8
    if (ctx->r1 != 0) {
        // 0x80011014: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80010FD8;
    }
    // 0x80011014: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_80011018:
    // 0x80011018: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_8001101C:
    // 0x8001101C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80011020: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80011024: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80011028: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8001102C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80011030: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80011034: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80011038: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8001103C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80011040: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80011044: jr          $ra
    // 0x80011048: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80011048: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8001104C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001104C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80011050: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80011054: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80011058: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8001105C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80011060: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80011064: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80011068: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8001106C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80011070: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80011074: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80011078: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8001107C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80011080: lw          $s5, 0x10($t6)
    ctx->r21 = MEM_W(ctx->r14, 0X10);
    // 0x80011084: addiu       $s2, $s2, 0x6280
    ctx->r18 = ADD32(ctx->r18, 0X6280);
    // 0x80011088: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8001108C: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x80011090: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80011094: sh          $t7, 0x60($t8)
    MEM_H(0X60, ctx->r24) = ctx->r15;
    // 0x80011098: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x8001109C: lhu         $t9, 0x2($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X2);
    // 0x800110A0: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x800110A4: sh          $t9, 0x62($t0)
    MEM_H(0X62, ctx->r8) = ctx->r25;
    // 0x800110A8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800110AC: lbu         $t1, 0x4($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X4);
    // 0x800110B0: nop

    // 0x800110B4: sb          $t1, 0x64($t2)
    MEM_B(0X64, ctx->r10) = ctx->r9;
    // 0x800110B8: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800110BC: lbu         $t3, 0x5($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X5);
    // 0x800110C0: nop

    // 0x800110C4: sb          $t3, 0x65($t4)
    MEM_B(0X65, ctx->r12) = ctx->r11;
    // 0x800110C8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800110CC: lbu         $t5, 0x6($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X6);
    // 0x800110D0: nop

    // 0x800110D4: sb          $t5, 0x66($t6)
    MEM_B(0X66, ctx->r14) = ctx->r13;
    // 0x800110D8: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x800110DC: lbu         $t7, 0x7($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X7);
    // 0x800110E0: beq         $s5, $zero, L_80011368
    if (ctx->r21 == 0) {
        // 0x800110E4: sb          $t7, 0x67($t8)
        MEM_B(0X67, ctx->r24) = ctx->r15;
            goto L_80011368;
    }
    // 0x800110E4: sb          $t7, 0x67($t8)
    MEM_B(0X67, ctx->r24) = ctx->r15;
    // 0x800110E8: lw          $t9, 0x8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X8);
    // 0x800110EC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x800110F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800110F4: sw          $t9, 0x68($t0)
    MEM_W(0X68, ctx->r8) = ctx->r25;
    // 0x800110F8: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800110FC: lwc1        $f4, 0xC($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0XC);
    // 0x80011100: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80011104: swc1        $f4, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = ctx->f4.u32l;
    // 0x80011108: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8001110C: lwc1        $f6, 0x10($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X10);
    // 0x80011110: nop

    // 0x80011114: swc1        $f6, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->f6.u32l;
    // 0x80011118: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8001111C: nop

    // 0x80011120: swc1        $f8, 0x80($t3)
    MEM_W(0X80, ctx->r11) = ctx->f8.u32l;
    // 0x80011124: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80011128: lhu         $t4, 0x18($s5)
    ctx->r12 = MEM_HU(ctx->r21, 0X18);
    // 0x8001112C: nop

    // 0x80011130: sh          $t4, 0x74($t5)
    MEM_H(0X74, ctx->r13) = ctx->r12;
    // 0x80011134: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80011138: lhu         $t6, 0x1A($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X1A);
    // 0x8001113C: nop

    // 0x80011140: sh          $t6, 0x76($t7)
    MEM_H(0X76, ctx->r15) = ctx->r14;
    // 0x80011144: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80011148: lhu         $t8, 0x1C($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X1C);
    // 0x8001114C: nop

    // 0x80011150: sh          $t8, 0x78($t9)
    MEM_H(0X78, ctx->r25) = ctx->r24;
    // 0x80011154: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80011158: lhu         $t0, 0x1E($s5)
    ctx->r8 = MEM_HU(ctx->r21, 0X1E);
    // 0x8001115C: nop

    // 0x80011160: sh          $t0, 0x7A($t1)
    MEM_H(0X7A, ctx->r9) = ctx->r8;
    // 0x80011164: lhu         $v0, 0x20($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X20);
    // 0x80011168: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8001116C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x80011170: beq         $at, $zero, L_80011184
    if (ctx->r1 == 0) {
        // 0x80011174: sh          $v0, 0x7C($t2)
        MEM_H(0X7C, ctx->r10) = ctx->r2;
            goto L_80011184;
    }
    // 0x80011174: sh          $v0, 0x7C($t2)
    MEM_H(0X7C, ctx->r10) = ctx->r2;
    // 0x80011178: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8001117C: addiu       $t3, $zero, 0x32
    ctx->r11 = ADD32(0, 0X32);
    // 0x80011180: sh          $t3, 0x7C($t4)
    MEM_H(0X7C, ctx->r12) = ctx->r11;
L_80011184:
    // 0x80011184: lhu         $t5, 0x22($s5)
    ctx->r13 = MEM_HU(ctx->r21, 0X22);
    // 0x80011188: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8001118C: nop

    // 0x80011190: sh          $t5, 0x7E($t6)
    MEM_H(0X7E, ctx->r14) = ctx->r13;
    // 0x80011194: lhu         $a0, 0x38($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X38);
    // 0x80011198: jal         0x8000CA10
    // 0x8001119C: nop

    func_8000CA10(rdram, ctx);
        goto after_0;
    // 0x8001119C: nop

    after_0:
    // 0x800111A0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800111A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800111A8: sw          $v0, 0x58($t7)
    MEM_W(0X58, ctx->r15) = ctx->r2;
    // 0x800111AC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x800111B0: lhu         $t8, 0x3A($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X3A);
    // 0x800111B4: nop

    // 0x800111B8: sh          $t8, 0x5C($t9)
    MEM_H(0X5C, ctx->r25) = ctx->r24;
    // 0x800111BC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x800111C0: lw          $a1, 0x3C($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X3C);
    // 0x800111C4: sw          $zero, 0x50($t0)
    MEM_W(0X50, ctx->r8) = 0;
    // 0x800111C8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800111CC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800111D0: lw          $a0, 0x50($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X50);
    // 0x800111D4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800111D8: sw          $a0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r4;
    // 0x800111DC: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x800111E0: nop

    // 0x800111E4: sw          $a0, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->r4;
    // 0x800111E8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800111EC: nop

    // 0x800111F0: sw          $zero, 0x54($t2)
    MEM_W(0X54, ctx->r10) = 0;
    // 0x800111F4: lhu         $t3, 0x40($s5)
    ctx->r11 = MEM_HU(ctx->r21, 0X40);
    // 0x800111F8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800111FC: blez        $t3, L_8001125C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80011200: andi        $t4, $s6, 0x3
        ctx->r12 = ctx->r22 & 0X3;
            goto L_8001125C;
    }
    // 0x80011200: andi        $t4, $s6, 0x3
    ctx->r12 = ctx->r22 & 0X3;
    // 0x80011204: or          $s6, $t4, $zero
    ctx->r22 = ctx->r12 | 0;
L_80011208:
    // 0x80011208: lhu         $t5, 0x24($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X24);
    // 0x8001120C: lw          $t7, 0x8($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8);
    // 0x80011210: lw          $a2, 0x10($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X10);
    // 0x80011214: lw          $a3, 0x20($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X20);
    // 0x80011218: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001121C: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x80011220: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x80011224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80011228: jal         0x80010EA0
    // 0x8001122C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_80010EA0(rdram, ctx);
        goto after_1;
    // 0x8001122C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x80011230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80011234: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80011238: jal         0x8000E4A8
    // 0x8001123C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8000E4A8(rdram, ctx);
        goto after_2;
    // 0x8001123C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x80011240: lhu         $t8, 0x40($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X40);
    // 0x80011244: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80011248: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001124C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x80011250: bne         $at, $zero, L_80011208
    if (ctx->r1 != 0) {
        // 0x80011254: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_80011208;
    }
    // 0x80011254: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80011258: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8001125C:
    // 0x8001125C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80011260: addiu       $a1, $s5, 0x2C
    ctx->r5 = ADD32(ctx->r21, 0X2C);
    // 0x80011264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80011268: jal         0x8000E4A8
    // 0x8001126C: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    func_8000E4A8(rdram, ctx);
        goto after_3;
    // 0x8001126C: addiu       $a0, $a0, 0x224
    ctx->r4 = ADD32(ctx->r4, 0X224);
    after_3:
    // 0x80011270: lw          $s6, 0x30($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X30);
    // 0x80011274: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80011278: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001127C: sh          $s6, 0x22C($t9)
    MEM_H(0X22C, ctx->r25) = ctx->r22;
    // 0x80011280: lw          $s1, 0x34($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X34);
    // 0x80011284: blez        $s6, L_80011368
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80011288: addiu       $s7, $s1, 0x4
        ctx->r23 = ADD32(ctx->r17, 0X4);
            goto L_80011368;
    }
    // 0x80011288: addiu       $s7, $s1, 0x4
    ctx->r23 = ADD32(ctx->r17, 0X4);
    // 0x8001128C: ori         $s5, $zero, 0x8000
    ctx->r21 = 0 | 0X8000;
    // 0x80011290: ori         $s4, $zero, 0x8001
    ctx->r20 = 0 | 0X8001;
L_80011294:
    // 0x80011294: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80011298: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8001129C: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x800112A0: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    // 0x800112A4: jal         0x8000E4A8
    // 0x800112A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E4A8(rdram, ctx);
        goto after_4;
    // 0x800112A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800112AC: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x800112B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800112B4: beq         $t1, $zero, L_80011300
    if (ctx->r9 == 0) {
        // 0x800112B8: nop
    
            goto L_80011300;
    }
    // 0x800112B8: nop

    // 0x800112BC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x800112C0: nop

    // 0x800112C4: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x800112C8: sh          $s4, 0x9C($t3)
    MEM_H(0X9C, ctx->r11) = ctx->r20;
    // 0x800112CC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x800112D0: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800112D4: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x800112D8: swc1        $f10, 0xB8($t5)
    MEM_W(0XB8, ctx->r13) = ctx->f10.u32l;
    // 0x800112DC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800112E0: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x800112E4: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x800112E8: swc1        $f16, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f16.u32l;
    // 0x800112EC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x800112F0: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800112F4: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x800112F8: b           L_80011340
    // 0x800112FC: swc1        $f18, 0xC0($t9)
    MEM_W(0XC0, ctx->r25) = ctx->f18.u32l;
        goto L_80011340;
    // 0x800112FC: swc1        $f18, 0xC0($t9)
    MEM_W(0XC0, ctx->r25) = ctx->f18.u32l;
L_80011300:
    // 0x80011300: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80011304: nop

    // 0x80011308: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8001130C: sh          $s5, 0x9C($t1)
    MEM_H(0X9C, ctx->r9) = ctx->r21;
    // 0x80011310: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80011314: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80011318: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x8001131C: swc1        $f4, 0xAC($t3)
    MEM_W(0XAC, ctx->r11) = ctx->f4.u32l;
    // 0x80011320: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80011324: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80011328: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x8001132C: swc1        $f6, 0xB0($t5)
    MEM_W(0XB0, ctx->r13) = ctx->f6.u32l;
    // 0x80011330: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80011334: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80011338: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8001133C: swc1        $f8, 0xB4($t7)
    MEM_W(0XB4, ctx->r15) = ctx->f8.u32l;
L_80011340:
    // 0x80011340: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80011344: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80011348: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x8001134C: swc1        $f10, 0xC4($t9)
    MEM_W(0XC4, ctx->r25) = ctx->f10.u32l;
    // 0x80011350: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80011354: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x80011358: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8001135C: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80011360: bne         $s3, $s6, L_80011294
    if (ctx->r19 != ctx->r22) {
        // 0x80011364: swc1        $f16, 0xC8($t1)
        MEM_W(0XC8, ctx->r9) = ctx->f16.u32l;
            goto L_80011294;
    }
    // 0x80011364: swc1        $f16, 0xC8($t1)
    MEM_W(0XC8, ctx->r9) = ctx->f16.u32l;
L_80011368:
    // 0x80011368: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8001136C: nop

    // 0x80011370: lw          $t2, 0x48($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X48);
    // 0x80011374: nop

    // 0x80011378: beq         $t2, $zero, L_800114AC
    if (ctx->r10 == 0) {
        // 0x8001137C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x8001137C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80011380: lw          $t3, 0x4C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4C);
    // 0x80011384: nop

    // 0x80011388: beq         $t3, $zero, L_800114AC
    if (ctx->r11 == 0) {
        // 0x8001138C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x8001138C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80011390: lw          $t4, 0x50($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X50);
    // 0x80011394: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80011398: beq         $t4, $zero, L_800114AC
    if (ctx->r12 == 0) {
        // 0x8001139C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x8001139C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800113A0: sw          $t5, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r13;
    // 0x800113A4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800113A8: nop

    // 0x800113AC: lw          $v0, 0x48($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X48);
    // 0x800113B0: lw          $a0, 0x4C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4C);
    // 0x800113B4: lwc1        $f0, 0x50($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X50);
    // 0x800113B8: lwc1        $f18, 0x50($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X50);
    // 0x800113BC: lw          $a1, 0x50($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X50);
    // 0x800113C0: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x800113C4: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x800113C8: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x800113CC: bc1f        L_800114A8
    if (!c1cs) {
        // 0x800113D0: addiu       $a1, $a1, 0x50
        ctx->r5 = ADD32(ctx->r5, 0X50);
            goto L_800114A8;
    }
    // 0x800113D0: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x800113D4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800113D8: nop

    // 0x800113DC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800113E0: nop

    // 0x800113E4: bc1f        L_800114AC
    if (!c1cs) {
        // 0x800113E8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x800113E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800113EC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800113F0: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800113F4: nop

    // 0x800113F8: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x800113FC: nop

    // 0x80011400: bc1f        L_800114AC
    if (!c1cs) {
        // 0x80011404: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x80011404: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80011408: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001140C: nop

    // 0x80011410: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x80011414: nop

    // 0x80011418: bc1f        L_800114AC
    if (!c1cs) {
        // 0x8001141C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x8001141C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80011420: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80011424: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80011428: nop

    // 0x8001142C: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x80011430: nop

    // 0x80011434: bc1f        L_800114AC
    if (!c1cs) {
        // 0x80011438: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x80011438: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001143C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80011440: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80011444: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x80011448: nop

    // 0x8001144C: bc1f        L_800114AC
    if (!c1cs) {
        // 0x80011450: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_800114AC;
    }
    // 0x80011450: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80011454: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80011458: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001145C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80011460: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80011464: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x80011468: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8001146C: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x80011470: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x80011474: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80011478: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8001147C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80011480: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80011484: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80011488: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001148C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80011490: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80011494: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80011498: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x8001149C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800114A0: nop

    // 0x800114A4: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_800114A8:
    // 0x800114A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800114AC:
    // 0x800114AC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800114B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800114B4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800114B8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800114BC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800114C0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800114C4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x800114C8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x800114CC: jr          $ra
    // 0x800114D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800114D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800114D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800114D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800114D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800114DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800114E0: nop

    // 0x800114E4: sw          $zero, 0x14($t6)
    MEM_W(0X14, ctx->r14) = 0;
    // 0x800114E8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x800114EC: jal         0x8000C658
    // 0x800114F0: nop

    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x800114F0: nop

    after_0:
    // 0x800114F4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x800114F8: jal         0x8000C658
    // 0x800114FC: nop

    func_8000C658(rdram, ctx);
        goto after_1;
    // 0x800114FC: nop

    after_1:
    // 0x80011500: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80011504: addiu       $v1, $v1, 0x7A38
    ctx->r3 = ADD32(ctx->r3, 0X7A38);
    // 0x80011508: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001150C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011510: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80011514: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80011518: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001151C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80011520: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80011524: sw          $s0, 0x78A8($at)
    MEM_W(0X78A8, ctx->r1) = ctx->r16;
    // 0x80011528: jr          $ra
    // 0x8001152C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001152C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80011530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80011534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011538: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8001153C: nop

    // 0x80011540: sw          $zero, 0x10($t6)
    MEM_W(0X10, ctx->r14) = 0;
    // 0x80011544: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80011548: jal         0x8000C658
    // 0x8001154C: nop

    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x8001154C: nop

    after_0:
    // 0x80011550: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80011554: jal         0x8000C658
    // 0x80011558: nop

    func_8000C658(rdram, ctx);
        goto after_1;
    // 0x80011558: nop

    after_1:
    // 0x8001155C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80011560: jal         0x8000C658
    // 0x80011564: nop

    func_8000C658(rdram, ctx);
        goto after_2;
    // 0x80011564: nop

    after_2:
    // 0x80011568: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001156C: addiu       $v1, $v1, 0x78A0
    ctx->r3 = ADD32(ctx->r3, 0X78A0);
    // 0x80011570: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80011574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011578: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001157C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80011580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80011584: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80011588: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001158C: sw          $s0, 0x7710($at)
    MEM_W(0X7710, ctx->r1) = ctx->r16;
    // 0x80011590: jr          $ra
    // 0x80011594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80011594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80011598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001159C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800115A0: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x800115A4: nop

    // 0x800115A8: beq         $s0, $zero, L_800115B8
    if (ctx->r16 == 0) {
        // 0x800115AC: nop
    
            goto L_800115B8;
    }
    // 0x800115AC: nop

    // 0x800115B0: jal         0x80011530
    // 0x800115B4: nop

    func_80011530(rdram, ctx);
        goto after_0;
    // 0x800115B4: nop

    after_0:
L_800115B8:
    // 0x800115B8: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x800115BC: nop

    // 0x800115C0: beq         $s0, $zero, L_800115D0
    if (ctx->r16 == 0) {
        // 0x800115C4: nop
    
            goto L_800115D0;
    }
    // 0x800115C4: nop

    // 0x800115C8: jal         0x800114D4
    // 0x800115CC: nop

    func_800114D4(rdram, ctx);
        goto after_1;
    // 0x800115CC: nop

    after_1:
L_800115D0:
    // 0x800115D0: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x800115D4: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800115D8: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800115DC: sw          $t6, 0xAC($t7)
    MEM_W(0XAC, ctx->r15) = ctx->r14;
    // 0x800115E0: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800115E4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800115E8: sw          $zero, 0x98($t8)
    MEM_W(0X98, ctx->r24) = 0;
    // 0x800115EC: lw          $t6, 0x18($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X18);
    // 0x800115F0: lw          $t9, 0x3A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3A4);
    // 0x800115F4: addiu       $v0, $v0, 0x7C78
    ctx->r2 = ADD32(ctx->r2, 0X7C78);
    // 0x800115F8: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800115FC: beq         $at, $zero, L_80011644
    if (ctx->r1 == 0) {
        // 0x80011600: lui         $v1, 0x800A
        ctx->r3 = S32(0X800A << 16);
            goto L_80011644;
    }
    // 0x80011600: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80011604: addiu       $v1, $v1, 0x7CF8
    ctx->r3 = ADD32(ctx->r3, 0X7CF8);
L_80011608:
    // 0x80011608: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8001160C: nop

    // 0x80011610: bne         $t7, $zero, L_80011630
    if (ctx->r15 != 0) {
        // 0x80011614: nop
    
            goto L_80011630;
    }
    // 0x80011614: nop

    // 0x80011618: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x8001161C: nop

    // 0x80011620: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80011624: lw          $t9, 0x18($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X18);
    // 0x80011628: b           L_80011650
    // 0x8001162C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_80011650;
    // 0x8001162C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80011630:
    // 0x80011630: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80011634: bne         $v0, $v1, L_80011608
    if (ctx->r2 != ctx->r3) {
        // 0x80011638: nop
    
            goto L_80011608;
    }
    // 0x80011638: nop

    // 0x8001163C: b           L_80011650
    // 0x80011640: nop

        goto L_80011650;
    // 0x80011640: nop

L_80011644:
    // 0x80011644: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x80011648: jal         0x8000C658
    // 0x8001164C: nop

    func_8000C658(rdram, ctx);
        goto after_2;
    // 0x8001164C: nop

    after_2:
L_80011650:
    // 0x80011650: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80011654: addiu       $v1, $v1, 0x7708
    ctx->r3 = ADD32(ctx->r3, 0X7708);
    // 0x80011658: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001165C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011660: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80011664: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80011668: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8001166C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80011670: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80011674: sw          $s1, 0x7578($at)
    MEM_W(0X7578, ctx->r1) = ctx->r17;
    // 0x80011678: jr          $ra
    // 0x8001167C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001167C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80011680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011680: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80011684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80011688: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001168C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80011690: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80011694: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80011698: lw          $s0, 0x74($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X74);
    // 0x8001169C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800116A0: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x800116A4: beq         $s0, $zero, L_800116CC
    if (ctx->r16 == 0) {
        // 0x800116A8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800116CC;
    }
    // 0x800116A8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800116AC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x800116B0: nop

    // 0x800116B4: bne         $a1, $t6, L_800116CC
    if (ctx->r5 != ctx->r14) {
        // 0x800116B8: nop
    
            goto L_800116CC;
    }
    // 0x800116B8: nop

    // 0x800116BC: jal         0x80010AFC
    // 0x800116C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80010AFC(rdram, ctx);
        goto after_0;
    // 0x800116C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800116C4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x800116C8: nop

L_800116CC:
    // 0x800116CC: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x800116D0: nop

    // 0x800116D4: beq         $a0, $zero, L_80011790
    if (ctx->r4 == 0) {
        // 0x800116D8: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80011790;
    }
    // 0x800116D8: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x800116DC: lw          $s0, 0x10($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X10);
    // 0x800116E0: nop

    // 0x800116E4: beq         $s0, $zero, L_80011720
    if (ctx->r16 == 0) {
        // 0x800116E8: nop
    
            goto L_80011720;
    }
    // 0x800116E8: nop

    // 0x800116EC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800116F0: nop

    // 0x800116F4: bne         $s2, $t7, L_80011720
    if (ctx->r18 != ctx->r15) {
        // 0x800116F8: nop
    
            goto L_80011720;
    }
    // 0x800116F8: nop

    // 0x800116FC: jal         0x80011530
    // 0x80011700: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80011530(rdram, ctx);
        goto after_1;
    // 0x80011700: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x80011704: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80011708: nop

    // 0x8001170C: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x80011710: nop

    // 0x80011714: lw          $s0, 0x10($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X10);
    // 0x80011718: b           L_80011764
    // 0x8001171C: nop

        goto L_80011764;
    // 0x8001171C: nop

L_80011720:
    // 0x80011720: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80011724: nop

    // 0x80011728: beq         $a1, $zero, L_80011764
    if (ctx->r5 == 0) {
        // 0x8001172C: nop
    
            goto L_80011764;
    }
    // 0x8001172C: nop

    // 0x80011730: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80011734: nop

    // 0x80011738: bne         $s2, $t8, L_80011764
    if (ctx->r18 != ctx->r24) {
        // 0x8001173C: nop
    
            goto L_80011764;
    }
    // 0x8001173C: nop

    // 0x80011740: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80011744: jal         0x800114D4
    // 0x80011748: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_800114D4(rdram, ctx);
        goto after_2;
    // 0x80011748: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_2:
    // 0x8001174C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80011750: nop

    // 0x80011754: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x80011758: nop

    // 0x8001175C: lw          $s0, 0x10($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X10);
    // 0x80011760: nop

L_80011764:
    // 0x80011764: bne         $s0, $zero, L_80011790
    if (ctx->r16 != 0) {
        // 0x80011768: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80011790;
    }
    // 0x80011768: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x8001176C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80011770: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80011774: bne         $t9, $zero, L_80011790
    if (ctx->r25 != 0) {
        // 0x80011778: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80011790;
    }
    // 0x80011778: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x8001177C: jal         0x80011598
    // 0x80011780: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80011598(rdram, ctx);
        goto after_3;
    // 0x80011780: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_3:
    // 0x80011784: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80011788: nop

    // 0x8001178C: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
L_80011790:
    // 0x80011790: beq         $t6, $zero, L_800117C8
    if (ctx->r14 == 0) {
        // 0x80011794: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800117C8;
    }
    // 0x80011794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80011798: lw          $s0, 0x8($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X8);
    // 0x8001179C: nop

    // 0x800117A0: beq         $s0, $zero, L_800117C4
    if (ctx->r16 == 0) {
        // 0x800117A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800117C4;
    }
    // 0x800117A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800117A8:
    // 0x800117A8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800117AC: jal         0x80011680
    // 0x800117B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80011680(rdram, ctx);
        goto after_4;
    // 0x800117B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_4:
    // 0x800117B4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800117B8: nop

    // 0x800117BC: bne         $s0, $zero, L_800117A8
    if (ctx->r16 != 0) {
        // 0x800117C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800117A8;
    }
    // 0x800117C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800117C4:
    // 0x800117C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800117C8:
    // 0x800117C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800117CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800117D0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800117D4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800117D8: jr          $ra
    // 0x800117DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800117DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800117E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800117E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800117E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800117E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800117EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800117F0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x800117F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800117F8: bne         $a1, $t6, L_80011808
    if (ctx->r5 != ctx->r14) {
        // 0x800117FC: nop
    
            goto L_80011808;
    }
    // 0x800117FC: nop

    // 0x80011800: b           L_80011844
    // 0x80011804: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80011844;
    // 0x80011804: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80011808:
    // 0x80011808: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x8001180C: nop

    // 0x80011810: beq         $s0, $zero, L_80011840
    if (ctx->r16 == 0) {
        // 0x80011814: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80011840;
    }
    // 0x80011814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80011818:
    // 0x80011818: jal         0x800117E0
    // 0x8001181C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800117E0(rdram, ctx);
        goto after_0;
    // 0x8001181C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80011820: beq         $v0, $zero, L_80011830
    if (ctx->r2 == 0) {
        // 0x80011824: nop
    
            goto L_80011830;
    }
    // 0x80011824: nop

    // 0x80011828: b           L_80011848
    // 0x8001182C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80011848;
    // 0x8001182C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80011830:
    // 0x80011830: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80011834: nop

    // 0x80011838: bne         $s0, $zero, L_80011818
    if (ctx->r16 != 0) {
        // 0x8001183C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80011818;
    }
    // 0x8001183C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80011840:
    // 0x80011840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011844:
    // 0x80011844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80011848:
    // 0x80011848: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001184C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80011850: jr          $ra
    // 0x80011854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80011854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80011858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001185C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80011860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011864: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x80011868: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001186C: beq         $v0, $zero, L_800118A0
    if (ctx->r2 == 0) {
        // 0x80011870: nop
    
            goto L_800118A0;
    }
    // 0x80011870: nop

    // 0x80011874: lbu         $a0, 0x83($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X83);
    // 0x80011878: jal         0x800148C4
    // 0x8001187C: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    func_800148C4(rdram, ctx);
        goto after_0;
    // 0x8001187C: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    after_0:
    // 0x80011880: lw          $a0, 0x8C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8C);
    // 0x80011884: jal         0x8000C658
    // 0x80011888: nop

    func_8000C658(rdram, ctx);
        goto after_1;
    // 0x80011888: nop

    after_1:
    // 0x8001188C: lw          $t6, 0x78($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X78);
    // 0x80011890: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x80011894: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80011898: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x8001189C: sw          $t7, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r15;
L_800118A0:
    // 0x800118A0: lw          $s0, 0x8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8);
    // 0x800118A4: nop

    // 0x800118A8: beq         $s0, $zero, L_800118CC
    if (ctx->r16 == 0) {
        // 0x800118AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800118CC;
    }
    // 0x800118AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800118B0:
    // 0x800118B0: jal         0x80011858
    // 0x800118B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80011858(rdram, ctx);
        goto after_2;
    // 0x800118B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x800118B8: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800118BC: nop

    // 0x800118C0: bne         $s0, $zero, L_800118B0
    if (ctx->r16 != 0) {
        // 0x800118C4: nop
    
            goto L_800118B0;
    }
    // 0x800118C4: nop

    // 0x800118C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800118CC:
    // 0x800118CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800118D0: jr          $ra
    // 0x800118D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800118D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800118D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800118D8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800118DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800118E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800118E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800118E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800118EC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800118F0: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x800118F4: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x800118F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800118FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80011900: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80011904: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80011908: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001190C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011910: jal         0x80011858
    // 0x80011914: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    func_80011858(rdram, ctx);
        goto after_0;
    // 0x80011914: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    after_0:
    // 0x80011918: sll         $a0, $s7, 3
    ctx->r4 = S32(ctx->r23 << 3);
    // 0x8001191C: addu        $a0, $a0, $s7
    ctx->r4 = ADD32(ctx->r4, ctx->r23);
    // 0x80011920: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80011924: addiu       $s6, $s7, 0x1
    ctx->r22 = ADD32(ctx->r23, 0X1);
    // 0x80011928: jal         0x8000C734
    // 0x8001192C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_8000C734(rdram, ctx);
        goto after_1;
    // 0x8001192C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_1:
    // 0x80011930: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80011934: sw          $v0, 0x8C($s3)
    MEM_W(0X8C, ctx->r19) = ctx->r2;
    // 0x80011938: sh          $s6, 0x8A($s3)
    MEM_H(0X8A, ctx->r19) = ctx->r22;
    // 0x8001193C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80011940: jal         0x800148E8
    // 0x80011944: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800148E8(rdram, ctx);
        goto after_2;
    // 0x80011944: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x80011948: sb          $fp, 0x83($s3)
    MEM_B(0X83, ctx->r19) = ctx->r30;
    // 0x8001194C: sb          $zero, 0x90($s3)
    MEM_B(0X90, ctx->r19) = 0;
    // 0x80011950: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80011954: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x80011958: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8001195C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80011960: jal         0x8007A23C
    // 0x80011964: sb          $t6, 0x91($s3)
    MEM_B(0X91, ctx->r19) = ctx->r14;
    guMtxIdent(rdram, ctx);
        goto after_3;
    // 0x80011964: sb          $t6, 0x91($s3)
    MEM_B(0X91, ctx->r19) = ctx->r14;
    after_3:
    // 0x80011968: blez        $s6, L_800119D4
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8001196C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800119D4;
    }
    // 0x8001196C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80011970: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x80011974: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x80011978: bne         $s6, $zero, L_80011984
    if (ctx->r22 != 0) {
        // 0x8001197C: nop
    
            goto L_80011984;
    }
    // 0x8001197C: nop

    // 0x80011980: break       7
    do_break(2147555712);
L_80011984:
    // 0x80011984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80011988: bne         $s6, $at, L_8001199C
    if (ctx->r22 != ctx->r1) {
        // 0x8001198C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001199C;
    }
    // 0x8001198C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80011990: bne         $t7, $at, L_8001199C
    if (ctx->r15 != ctx->r1) {
        // 0x80011994: nop
    
            goto L_8001199C;
    }
    // 0x80011994: nop

    // 0x80011998: break       6
    do_break(2147555736);
L_8001199C:
    // 0x8001199C: mflo        $s4
    ctx->r20 = lo;
    // 0x800119A0: nop

    // 0x800119A4: nop

L_800119A8:
    // 0x800119A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800119AC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800119B0: jal         0x8000E4A8
    // 0x800119B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8000E4A8(rdram, ctx);
        goto after_4;
    // 0x800119B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x800119B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800119BC: sb          $s1, 0x44($s0)
    MEM_B(0X44, ctx->r16) = ctx->r17;
    // 0x800119C0: addiu       $s0, $s0, 0x48
    ctx->r16 = ADD32(ctx->r16, 0X48);
    // 0x800119C4: sw          $s3, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->r19;
    // 0x800119C8: sb          $zero, -0x3($s0)
    MEM_B(-0X3, ctx->r16) = 0;
    // 0x800119CC: bne         $s2, $s6, L_800119A8
    if (ctx->r18 != ctx->r22) {
        // 0x800119D0: subu        $s1, $s1, $s4
        ctx->r17 = SUB32(ctx->r17, ctx->r20);
            goto L_800119A8;
    }
    // 0x800119D0: subu        $s1, $s1, $s4
    ctx->r17 = SUB32(ctx->r17, ctx->r20);
L_800119D4:
    // 0x800119D4: lw          $s3, 0x8($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X8);
    // 0x800119D8: nop

    // 0x800119DC: beq         $s3, $zero, L_80011A0C
    if (ctx->r19 == 0) {
        // 0x800119E0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80011A0C;
    }
    // 0x800119E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800119E4: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
L_800119E8:
    // 0x800119E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800119EC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800119F0: jal         0x800118D8
    // 0x800119F4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_800118D8(rdram, ctx);
        goto after_5;
    // 0x800119F4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_5:
    // 0x800119F8: lw          $s3, 0x4($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X4);
    // 0x800119FC: nop

    // 0x80011A00: bne         $s3, $zero, L_800119E8
    if (ctx->r19 != 0) {
        // 0x80011A04: lw          $a3, 0xA4($sp)
        ctx->r7 = MEM_W(ctx->r29, 0XA4);
            goto L_800119E8;
    }
    // 0x80011A04: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80011A08: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80011A0C:
    // 0x80011A0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80011A10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80011A14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80011A18: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80011A1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80011A20: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80011A24: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80011A28: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80011A2C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80011A30: jr          $ra
    // 0x80011A34: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80011A34: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80011A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011A38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80011A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80011A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_80011A44:
    // 0x80011A44: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x80011A48: jal         0x8000C658
    // 0x80011A4C: nop

    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x80011A4C: nop

    after_0:
    // 0x80011A50: beq         $s0, $zero, L_80011A64
    if (ctx->r16 == 0) {
        // 0x80011A54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80011A64;
    }
    // 0x80011A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80011A58: b           L_80011A44
    // 0x80011A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80011A44;
    // 0x80011A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80011A60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80011A64:
    // 0x80011A64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80011A68: jr          $ra
    // 0x80011A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80011A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80011A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011A70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80011A74: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80011A78: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80011A7C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80011A80: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80011A84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80011A88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80011A8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80011A90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011A94: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80011A98: lhu         $v0, 0x88($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X88);
    // 0x80011A9C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80011AA0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80011AA4: beq         $v0, $zero, L_80011B28
    if (ctx->r2 == 0) {
        // 0x80011AA8: andi        $s6, $a2, 0xFFFF
        ctx->r22 = ctx->r6 & 0XFFFF;
            goto L_80011B28;
    }
    // 0x80011AA8: andi        $s6, $a2, 0xFFFF
    ctx->r22 = ctx->r6 & 0XFFFF;
    // 0x80011AAC: lw          $a0, 0x84($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X84);
    // 0x80011AB0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80011AB4: blez        $v0, L_80011B28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80011AB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80011B28;
    }
    // 0x80011AB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80011ABC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80011AC0: or          $s5, $s6, $zero
    ctx->r21 = ctx->r22 | 0;
L_80011AC4:
    // 0x80011AC4: lhu         $t6, 0xA($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XA);
    // 0x80011AC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80011ACC: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x80011AD0: and         $t9, $t8, $s5
    ctx->r25 = ctx->r24 & ctx->r21;
    // 0x80011AD4: beq         $t9, $zero, L_80011B18
    if (ctx->r25 == 0) {
        // 0x80011AD8: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80011B18;
    }
    // 0x80011AD8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80011ADC: jal         0x8000C734
    // 0x80011AE0: addiu       $s3, $s1, 0x10
    ctx->r19 = ADD32(ctx->r17, 0X10);
    func_8000C734(rdram, ctx);
        goto after_0;
    // 0x80011AE0: addiu       $s3, $s1, 0x10
    ctx->r19 = ADD32(ctx->r17, 0X10);
    after_0:
    // 0x80011AE4: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x80011AE8: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x80011AEC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80011AF0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80011AF4: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x80011AF8: lhu         $t1, 0x8($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X8);
    // 0x80011AFC: nop

    // 0x80011B00: sh          $t1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r9;
    // 0x80011B04: lhu         $t2, 0xA($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0XA);
    // 0x80011B08: nop

    // 0x80011B0C: sh          $t2, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r10;
    // 0x80011B10: lhu         $v1, 0x88($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X88);
    // 0x80011B14: nop

L_80011B18:
    // 0x80011B18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80011B1C: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80011B20: bne         $at, $zero, L_80011AC4
    if (ctx->r1 != 0) {
        // 0x80011B24: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80011AC4;
    }
    // 0x80011B24: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80011B28:
    // 0x80011B28: lw          $s1, 0x8($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X8);
    // 0x80011B2C: nop

    // 0x80011B30: beq         $s1, $zero, L_80011B54
    if (ctx->r17 == 0) {
        // 0x80011B34: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80011B54;
    }
    // 0x80011B34: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80011B38:
    // 0x80011B38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80011B3C: jal         0x80011A70
    // 0x80011B40: andi        $a2, $s6, 0xFFFF
    ctx->r6 = ctx->r22 & 0XFFFF;
    func_80011A70(rdram, ctx);
        goto after_1;
    // 0x80011B40: andi        $a2, $s6, 0xFFFF
    ctx->r6 = ctx->r22 & 0XFFFF;
    after_1:
    // 0x80011B44: lw          $s1, 0x4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4);
    // 0x80011B48: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80011B4C: bne         $s1, $zero, L_80011B38
    if (ctx->r17 != 0) {
        // 0x80011B50: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_80011B38;
    }
    // 0x80011B50: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_80011B54:
    // 0x80011B54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80011B58: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80011B5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80011B60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80011B64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80011B68: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80011B6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80011B70: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80011B74: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80011B78: jr          $ra
    // 0x80011B7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80011B7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
