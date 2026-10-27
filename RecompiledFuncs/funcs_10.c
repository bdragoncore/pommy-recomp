#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001A17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A17C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001A180: lw          $t6, -0x5C70($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C70);
    // 0x8001A184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A188: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001A18C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A190: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A194: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8001A198: jal         0x80012AF0
    // 0x8001A19C: nop

    func_80012AF0(rdram, ctx);
        goto after_0;
    // 0x8001A19C: nop

    after_0:
    // 0x8001A1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A1A8: jr          $ra
    // 0x8001A1AC: nop

    return;
    // 0x8001A1AC: nop

;}
RECOMP_FUNC void func_8001A1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A1B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001A1B4: addiu       $a1, $a1, -0x5C68
    ctx->r5 = ADD32(ctx->r5, -0X5C68);
    // 0x8001A1B8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8001A1BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A1C0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8001A1C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A1C8: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x8001A1CC: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8001A1D0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001A1D4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001A1D8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x8001A1DC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001A1E0: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8001A1E4: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8001A1E8: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8001A1EC: nop

    // 0x8001A1F0: bgtz        $t1, L_8001A27C
    if (SIGNED(ctx->r9) > 0) {
        // 0x8001A1F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001A27C;
    }
    // 0x8001A1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A1F8: lw          $t2, -0x5C70($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5C70);
    // 0x8001A1FC: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8001A200: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001A204: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x8001A208: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8001A20C: jal         0x80012D00
    // 0x8001A210: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80012D00(rdram, ctx);
        goto after_0;
    // 0x8001A210: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001A214: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8001A218: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A21C: lw          $t5, -0x5C6C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C6C);
    // 0x8001A220: nop

    // 0x8001A224: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x8001A228: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    // 0x8001A22C: jal         0x80002D08
    // 0x8001A230: nop

    func_80002D08(rdram, ctx);
        goto after_1;
    // 0x8001A230: nop

    after_1:
    // 0x8001A234: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001A238: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A23C: lw          $t8, -0x5C6C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C6C);
    // 0x8001A240: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001A244: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8001A248: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8001A24C: addiu       $v0, $v0, -0x5C60
    ctx->r2 = ADD32(ctx->r2, -0X5C60);
    // 0x8001A250: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x8001A254: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8001A258: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8001A25C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8001A260: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8001A264: lw          $t3, -0x5C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5C64);
    // 0x8001A268: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001A26C: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x8001A270: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8001A274: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
    // 0x8001A278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001A27C:
    // 0x8001A27C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A280: jr          $ra
    // 0x8001A284: nop

    return;
    // 0x8001A284: nop

;}
RECOMP_FUNC void func_8001A288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A290: jal         0x8001A1B0
    // 0x8001A294: nop

    func_8001A1B0(rdram, ctx);
        goto after_0;
    // 0x8001A294: nop

    after_0:
    // 0x8001A298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A29C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A2A0: jr          $ra
    // 0x8001A2A4: nop

    return;
    // 0x8001A2A4: nop

;}
RECOMP_FUNC void func_8001A2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A2A8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001A2AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001A2B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001A2B4: lw          $a1, -0x5C68($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5C68);
    // 0x8001A2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A2BC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001A2C0: addiu       $v0, $v0, -0x5C6C
    ctx->r2 = ADD32(ctx->r2, -0X5C6C);
    // 0x8001A2C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001A2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8001A2CC:
    // 0x8001A2CC: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8001A2D0: nop

    // 0x8001A2D4: beq         $a0, $zero, L_8001A2F8
    if (ctx->r4 == 0) {
        // 0x8001A2D8: nop
    
            goto L_8001A2F8;
    }
    // 0x8001A2D8: nop

    // 0x8001A2DC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001A2E0: nop

    // 0x8001A2E4: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x8001A2E8: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8001A2EC: nop

    // 0x8001A2F0: beq         $a3, $t8, L_8001A3C4
    if (ctx->r7 == ctx->r24) {
        // 0x8001A2F4: addiu       $t9, $a0, 0x1
        ctx->r25 = ADD32(ctx->r4, 0X1);
            goto L_8001A3C4;
    }
    // 0x8001A2F4: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
L_8001A2F8:
    // 0x8001A2F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001A2FC: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8001A300: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8001A304: bne         $at, $zero, L_8001A2CC
    if (ctx->r1 != 0) {
        // 0x8001A308: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_8001A2CC;
    }
    // 0x8001A308: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8001A30C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001A310: lw          $a1, -0x5C60($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5C60);
    // 0x8001A314: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8001A318: bne         $a1, $at, L_8001A340
    if (ctx->r5 != ctx->r1) {
        // 0x8001A31C: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_8001A340;
    }
    // 0x8001A31C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001A320: addiu       $a0, $a0, 0x5000
    ctx->r4 = ADD32(ctx->r4, 0X5000);
    // 0x8001A324: jal         0x80000FBC
    // 0x8001A328: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001A328: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001A32C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001A330: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001A334: lw          $a1, -0x5C60($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5C60);
    // 0x8001A338: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8001A33C: addiu       $v0, $v0, -0x5C6C
    ctx->r2 = ADD32(ctx->r2, -0X5C6C);
L_8001A340:
    // 0x8001A340: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001A344: lw          $t9, -0x5C64($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C64);
    // 0x8001A348: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x8001A34C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8001A350: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x8001A354: addiu       $t2, $a1, 0x1
    ctx->r10 = ADD32(ctx->r5, 0X1);
    // 0x8001A358: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001A35C: sw          $t2, -0x5C60($at)
    MEM_W(-0X5C60, ctx->r1) = ctx->r10;
    // 0x8001A360: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8001A364: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x8001A368: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x8001A36C: sh          $a3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r7;
    // 0x8001A370: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8001A374: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8001A378: jal         0x80002F88
    // 0x8001A37C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x8001A37C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x8001A380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001A384: jal         0x80013880
    // 0x8001A388: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    func_80013880(rdram, ctx);
        goto after_2;
    // 0x8001A388: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    after_2:
    // 0x8001A38C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8001A390: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8001A394: lw          $t5, -0x5C70($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C70);
    // 0x8001A398: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8001A39C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A3A0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8001A3A4: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x8001A3A8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001A3AC: lw          $t8, -0x5C68($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C68);
    // 0x8001A3B0: nop

    // 0x8001A3B4: addu        $a1, $t8, $a2
    ctx->r5 = ADD32(ctx->r24, ctx->r6);
    // 0x8001A3B8: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8001A3BC: nop

    // 0x8001A3C0: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
L_8001A3C4:
    // 0x8001A3C4: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8001A3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A3CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001A3D0: jr          $ra
    // 0x8001A3D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001A3D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8001A3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A3D8: addiu       $sp, $sp, -0x2F8
    ctx->r29 = ADD32(ctx->r29, -0X2F8);
    // 0x8001A3DC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8001A3E0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8001A3E4: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8001A3E8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8001A3EC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8001A3F0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8001A3F4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8001A3F8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8001A3FC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8001A400: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8001A404: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8001A408: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8001A40C: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8001A410: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8001A414: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001A418: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8001A41C: sw          $a0, 0x2F8($sp)
    MEM_W(0X2F8, ctx->r29) = ctx->r4;
    // 0x8001A420: sw          $a1, 0x2FC($sp)
    MEM_W(0X2FC, ctx->r29) = ctx->r5;
    // 0x8001A424: sw          $a2, 0x300($sp)
    MEM_W(0X300, ctx->r29) = ctx->r6;
    // 0x8001A428: sw          $a3, 0x304($sp)
    MEM_W(0X304, ctx->r29) = ctx->r7;
    // 0x8001A42C: beq         $a0, $zero, L_8001B1C4
    if (ctx->r4 == 0) {
        // 0x8001A430: addiu       $s1, $sp, 0x2FC
        ctx->r17 = ADD32(ctx->r29, 0X2FC);
            goto L_8001B1C4;
    }
    // 0x8001A430: addiu       $s1, $sp, 0x2FC
    ctx->r17 = ADD32(ctx->r29, 0X2FC);
    // 0x8001A434: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
    // 0x8001A438: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_8001A43C:
    // 0x8001A43C: lw          $t7, 0x2F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001A440: nop

    // 0x8001A444: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001A448: sltiu       $at, $t8, 0x3A
    ctx->r1 = ctx->r24 < 0X3A ? 1 : 0;
    // 0x8001A44C: beq         $at, $zero, L_8001B19C
    if (ctx->r1 == 0) {
        // 0x8001A450: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8001B19C;
    }
    // 0x8001A450: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001A454: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001A458: addu        $at, $at, $t8
    gpr jr_addend_8001A464 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001A45C: lw          $t8, 0x5110($at)
    ctx->r24 = ADD32(ctx->r1, 0X5110);
    // 0x8001A460: nop

    // 0x8001A464: jr          $t8
    // 0x8001A468: nop

    switch (jr_addend_8001A464 >> 2) {
        case 0: goto L_8001A46C; break;
        case 1: goto L_8001A49C; break;
        case 2: goto L_8001A518; break;
        case 3: goto L_8001A550; break;
        case 4: goto L_8001A5C4; break;
        case 5: goto L_8001A5E0; break;
        case 6: goto L_8001A758; break;
        case 7: goto L_8001A7D0; break;
        case 8: goto L_8001A820; break;
        case 9: goto L_8001A848; break;
        case 10: goto L_8001A870; break;
        case 11: goto L_8001A8A4; break;
        case 12: goto L_8001A8F0; break;
        case 13: goto L_8001A918; break;
        case 14: goto L_8001A918; break;
        case 15: goto L_8001A918; break;
        case 16: goto L_8001AA64; break;
        case 17: goto L_8001AA64; break;
        case 18: goto L_8001AA64; break;
        case 19: goto L_8001AACC; break;
        case 20: goto L_8001AACC; break;
        case 21: goto L_8001AACC; break;
        case 22: goto L_8001A7F8; break;
        case 23: goto L_8001AB70; break;
        case 24: goto L_8001ABA8; break;
        case 25: goto L_8001ABE4; break;
        case 26: goto L_8001AC64; break;
        case 27: goto L_8001ACE4; break;
        case 28: goto L_8001B19C; break;
        case 29: goto L_8001AD68; break;
        case 30: goto L_8001ADA8; break;
        case 31: goto L_8001ADE4; break;
        case 32: goto L_8001ADE4; break;
        case 33: goto L_8001AE3C; break;
        case 34: goto L_8001AE64; break;
        case 35: goto L_8001AE8C; break;
        case 36: goto L_8001AEDC; break;
        case 37: goto L_8001AF8C; break;
        case 38: goto L_8001AFC0; break;
        case 39: goto L_8001AFFC; break;
        case 40: goto L_8001A550; break;
        case 41: goto L_8001A5E0; break;
        case 42: goto L_8001ACE4; break;
        case 43: goto L_8001B028; break;
        case 44: goto L_8001A6DC; break;
        case 45: goto L_8001A780; break;
        case 46: goto L_8001A714; break;
        case 47: goto L_8001A780; break;
        case 48: goto L_8001AF5C; break;
        case 49: goto L_8001B064; break;
        case 50: goto L_8001B0AC; break;
        case 51: goto L_8001A4D4; break;
        case 52: goto L_8001A4B8; break;
        case 53: goto L_8001B0C8; break;
        case 54: goto L_8001B104; break;
        case 55: goto L_8001B15C; break;
        case 56: goto L_8001B178; break;
        case 57: goto L_8001B130; break;
        default: switch_error(__func__, 0x8001A464, 0x80095110);
    }
    // 0x8001A468: nop

L_8001A46C:
    // 0x8001A46C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A470: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A474: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001A478: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001A47C: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A480: sw          $t6, 0x2F0($sp)
    MEM_W(0X2F0, ctx->r29) = ctx->r14;
    // 0x8001A484: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A488: jal         0x8001A2A8
    // 0x8001A48C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001A2A8(rdram, ctx);
        goto after_0;
    // 0x8001A48C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_0:
    // 0x8001A490: lw          $t8, 0x2F0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2F0);
    // 0x8001A494: b           L_8001B1AC
    // 0x8001A498: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001A498: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_8001A49C:
    // 0x8001A49C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A4A0: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A4A4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A4A8: jal         0x8001A1B0
    // 0x8001A4AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001A1B0(rdram, ctx);
        goto after_1;
    // 0x8001A4AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_1:
    // 0x8001A4B0: b           L_8001B1B0
    // 0x8001A4B4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A4B4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A4B8:
    // 0x8001A4B8: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A4BC: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A4C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A4C4: jal         0x8001A1B0
    // 0x8001A4C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001A1B0(rdram, ctx);
        goto after_2;
    // 0x8001A4C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_2:
    // 0x8001A4CC: b           L_8001B1B0
    // 0x8001A4D0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A4D0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A4D4:
    // 0x8001A4D4: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A4D8: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A4DC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001A4E0: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A4E4: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A4E8: sw          $t8, 0x2E0($sp)
    MEM_W(0X2E0, ctx->r29) = ctx->r24;
    // 0x8001A4EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001A4F0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001A4F4: lw          $t6, -0x5C70($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C70);
    // 0x8001A4F8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8001A4FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A500: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8001A504: jal         0x80012AF0
    // 0x8001A508: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80012AF0(rdram, ctx);
        goto after_3;
    // 0x8001A508: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_3:
    // 0x8001A50C: lw          $t9, 0x2E0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2E0);
    // 0x8001A510: b           L_8001B1AC
    // 0x8001A514: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001A514: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
L_8001A518:
    // 0x8001A518: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A51C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A520: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A524: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001A528: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A52C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001A530: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001A534: lw          $t8, -0x5C70($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C70);
    // 0x8001A538: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8001A53C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8001A540: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8001A544: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A548: b           L_8001B1AC
    // 0x8001A54C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001A54C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8001A550:
    // 0x8001A550: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A554: lw          $t8, 0x2F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001A558: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A55C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A560: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8001A564: bne         $t8, $at, L_8001A580
    if (ctx->r24 != ctx->r1) {
        // 0x8001A568: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001A580;
    }
    // 0x8001A568: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A56C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A570: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A574: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A578: b           L_8001A598
    // 0x8001A57C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
        goto L_8001A598;
    // 0x8001A57C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8001A580:
    // 0x8001A580: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A584: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A588: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8001A58C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A590: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x8001A594: nop

L_8001A598:
    // 0x8001A598: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001A59C: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A5A0: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001A5A4: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A5A8: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A5AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A5B0: lw          $a3, -0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, -0X4);
    // 0x8001A5B4: jal         0x80019890
    // 0x8001A5B8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_80019890(rdram, ctx);
        goto after_4;
    // 0x8001A5B8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_4:
    // 0x8001A5BC: b           L_8001B1AC
    // 0x8001A5C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_8001B1AC;
    // 0x8001A5C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8001A5C4:
    // 0x8001A5C4: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A5C8: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A5CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A5D0: jal         0x800195C4
    // 0x8001A5D4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800195C4(rdram, ctx);
        goto after_5;
    // 0x8001A5D4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_5:
    // 0x8001A5D8: b           L_8001B1B0
    // 0x8001A5DC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A5DC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A5E0:
    // 0x8001A5E0: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A5E4: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A5E8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001A5EC: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A5F0: lw          $t6, 0x2F8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001A5F4: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A5F8: sw          $t8, 0x2BC($sp)
    MEM_W(0X2BC, ctx->r29) = ctx->r24;
    // 0x8001A5FC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001A600: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8001A604: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A608: bne         $t6, $at, L_8001A624
    if (ctx->r14 != ctx->r1) {
        // 0x8001A60C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001A624;
    }
    // 0x8001A60C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001A610: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A614: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A618: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8001A61C: b           L_8001A63C
    // 0x8001A620: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
        goto L_8001A63C;
    // 0x8001A620: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8001A624:
    // 0x8001A624: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001A628: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A62C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8001A630: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A634: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x8001A638: nop

L_8001A63C:
    // 0x8001A63C: lhu         $a0, 0x3A($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X3A);
    // 0x8001A640: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001A644: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8001A648: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8001A64C:
    // 0x8001A64C: sllv        $a1, $t6, $v1
    ctx->r5 = S32(ctx->r14 << (ctx->r3 & 31));
    // 0x8001A650: and         $t7, $a1, $v0
    ctx->r15 = ctx->r5 & ctx->r2;
    // 0x8001A654: beq         $t7, $zero, L_8001A66C
    if (ctx->r15 == 0) {
        // 0x8001A658: nop
    
            goto L_8001A66C;
    }
    // 0x8001A658: nop

    // 0x8001A65C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001A660: bne         $v1, $s3, L_8001A64C
    if (ctx->r3 != ctx->r19) {
        // 0x8001A664: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8001A64C;
    }
    // 0x8001A664: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A668: sllv        $a1, $t8, $v1
    ctx->r5 = S32(ctx->r24 << (ctx->r3 & 31));
L_8001A66C:
    // 0x8001A66C: bne         $v1, $s3, L_8001A6AC
    if (ctx->r3 != ctx->r19) {
        // 0x8001A670: or          $t9, $a0, $a1
        ctx->r25 = ctx->r4 | ctx->r5;
            goto L_8001A6AC;
    }
    // 0x8001A670: or          $t9, $a0, $a1
    ctx->r25 = ctx->r4 | ctx->r5;
    // 0x8001A674: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001A678: addiu       $a0, $a0, 0x5060
    ctx->r4 = ADD32(ctx->r4, 0X5060);
    // 0x8001A67C: sw          $v1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r3;
    // 0x8001A680: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x8001A684: sw          $a2, 0x2B8($sp)
    MEM_W(0X2B8, ctx->r29) = ctx->r6;
    // 0x8001A688: jal         0x80000FBC
    // 0x8001A68C: sw          $a3, 0x2B4($sp)
    MEM_W(0X2B4, ctx->r29) = ctx->r7;
    func_80000FBC(rdram, ctx);
        goto after_6;
    // 0x8001A68C: sw          $a3, 0x2B4($sp)
    MEM_W(0X2B4, ctx->r29) = ctx->r7;
    after_6:
    // 0x8001A690: lw          $a2, 0x2B8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2B8);
    // 0x8001A694: lw          $v1, 0x11C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X11C);
    // 0x8001A698: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8001A69C: lw          $a3, 0x2B4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2B4);
    // 0x8001A6A0: lhu         $a0, 0x3A($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X3A);
    // 0x8001A6A4: nop

    // 0x8001A6A8: or          $t9, $a0, $a1
    ctx->r25 = ctx->r4 | ctx->r5;
L_8001A6AC:
    // 0x8001A6AC: sh          $t9, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r25;
    // 0x8001A6B0: sw          $s1, 0x2F4($sp)
    MEM_W(0X2F4, ctx->r29) = ctx->r17;
    // 0x8001A6B4: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8001A6B8: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x8001A6BC: jal         0x800189F0
    // 0x8001A6C0: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    func_800189F0(rdram, ctx);
        goto after_7;
    // 0x8001A6C0: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    after_7:
    // 0x8001A6C4: lw          $t6, 0x2BC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2BC);
    // 0x8001A6C8: lw          $s1, 0x2F4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2F4);
    // 0x8001A6CC: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
    // 0x8001A6D0: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
    // 0x8001A6D4: b           L_8001B1AC
    // 0x8001A6D8: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001A6D8: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
L_8001A6DC:
    // 0x8001A6DC: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A6E0: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A6E4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A6E8: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001A6EC: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A6F0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001A6F4: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A6F8: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A6FC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001A700: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A704: jal         0x80019F54
    // 0x8001A708: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    func_80019F54(rdram, ctx);
        goto after_8;
    // 0x8001A708: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_8:
    // 0x8001A70C: b           L_8001B1B0
    // 0x8001A710: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A710: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A714:
    // 0x8001A714: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A718: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A71C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001A720: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001A724: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A728: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001A72C: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001A730: lhu         $t9, 0x34($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X34);
    // 0x8001A734: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A738: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8001A73C: bne         $t9, $zero, L_8001B1AC
    if (ctx->r25 != 0) {
        // 0x8001A740: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001B1AC;
    }
    // 0x8001A740: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A744: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x8001A748: jal         0x800118D8
    // 0x8001A74C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_800118D8(rdram, ctx);
        goto after_9;
    // 0x8001A74C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_9:
    // 0x8001A750: b           L_8001B1B0
    // 0x8001A754: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A754: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A758:
    // 0x8001A758: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A75C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A760: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A764: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001A768: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A76C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A770: jal         0x80019774
    // 0x8001A774: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80019774(rdram, ctx);
        goto after_10;
    // 0x8001A774: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_10:
    // 0x8001A778: b           L_8001B1B0
    // 0x8001A77C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A77C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A780:
    // 0x8001A780: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001A784: lw          $t9, 0x2F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001A788: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A78C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A790: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8001A794: bne         $t9, $at, L_8001A7AC
    if (ctx->r25 != ctx->r1) {
        // 0x8001A798: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001A7AC;
    }
    // 0x8001A798: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A79C: jal         0x800196D4
    // 0x8001A7A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800196D4(rdram, ctx);
        goto after_11;
    // 0x8001A7A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_11:
    // 0x8001A7A4: b           L_8001B1B0
    // 0x8001A7A8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A7A8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A7AC:
    // 0x8001A7AC: lhu         $t6, 0x34($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X34);
    // 0x8001A7B0: nop

    // 0x8001A7B4: bne         $t6, $zero, L_8001B1B0
    if (ctx->r14 != 0) {
        // 0x8001A7B8: addiu       $t9, $s1, 0x3
        ctx->r25 = ADD32(ctx->r17, 0X3);
            goto L_8001B1B0;
    }
    // 0x8001A7B8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A7BC: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x8001A7C0: jal         0x80011858
    // 0x8001A7C4: nop

    func_80011858(rdram, ctx);
        goto after_12;
    // 0x8001A7C4: nop

    after_12:
    // 0x8001A7C8: b           L_8001B1B0
    // 0x8001A7CC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A7CC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A7D0:
    // 0x8001A7D0: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A7D4: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A7D8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A7DC: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001A7E0: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A7E4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A7E8: jal         0x8001952C
    // 0x8001A7EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001952C(rdram, ctx);
        goto after_13;
    // 0x8001A7EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_13:
    // 0x8001A7F0: b           L_8001B1B0
    // 0x8001A7F4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A7F4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A7F8:
    // 0x8001A7F8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A7FC: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A800: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A804: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001A808: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A80C: lhu         $a1, 0x2($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X2);
    // 0x8001A810: jal         0x800194C8
    // 0x8001A814: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800194C8(rdram, ctx);
        goto after_14;
    // 0x8001A814: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_14:
    // 0x8001A818: b           L_8001B1B0
    // 0x8001A81C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A81C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A820:
    // 0x8001A820: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A824: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A828: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A82C: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001A830: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A834: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A838: jal         0x8001942C
    // 0x8001A83C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001942C(rdram, ctx);
        goto after_15;
    // 0x8001A83C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_15:
    // 0x8001A840: b           L_8001B1B0
    // 0x8001A844: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A844: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A848:
    // 0x8001A848: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001A84C: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A850: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A854: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001A858: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A85C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A860: jal         0x80019390
    // 0x8001A864: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80019390(rdram, ctx);
        goto after_16;
    // 0x8001A864: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_16:
    // 0x8001A868: b           L_8001B1B0
    // 0x8001A86C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A86C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A870:
    // 0x8001A870: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001A874: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A878: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A87C: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001A880: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A884: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A888: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A88C: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A890: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001A894: jal         0x800192E8
    // 0x8001A898: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800192E8(rdram, ctx);
        goto after_17;
    // 0x8001A898: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_17:
    // 0x8001A89C: b           L_8001B1B0
    // 0x8001A8A0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A8A0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A8A4:
    // 0x8001A8A4: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A8A8: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A8AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001A8B0: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001A8B4: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001A8B8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001A8BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A8C0: beq         $v1, $zero, L_8001A8DC
    if (ctx->r3 == 0) {
        // 0x8001A8C4: nop
    
            goto L_8001A8DC;
    }
    // 0x8001A8C4: nop

    // 0x8001A8C8: lhu         $t8, 0x38($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X38);
    // 0x8001A8CC: nop

    // 0x8001A8D0: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x8001A8D4: b           L_8001B1AC
    // 0x8001A8D8: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
        goto L_8001B1AC;
    // 0x8001A8D8: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
L_8001A8DC:
    // 0x8001A8DC: lhu         $t6, 0x38($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X38);
    // 0x8001A8E0: nop

    // 0x8001A8E4: andi        $t7, $t6, 0xBFFF
    ctx->r15 = ctx->r14 & 0XBFFF;
    // 0x8001A8E8: b           L_8001B1AC
    // 0x8001A8EC: sh          $t7, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r15;
        goto L_8001B1AC;
    // 0x8001A8EC: sh          $t7, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r15;
L_8001A8F0:
    // 0x8001A8F0: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001A8F4: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001A8F8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001A8FC: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001A900: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001A904: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001A908: jal         0x8001918C
    // 0x8001A90C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8001918C(rdram, ctx);
        goto after_18;
    // 0x8001A90C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_18:
    // 0x8001A910: b           L_8001B1B0
    // 0x8001A914: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001A914: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001A918:
    // 0x8001A918: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001A91C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001A920: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001A924: lw          $a0, -0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X4);
    // 0x8001A928: andi        $t7, $s1, 0x1
    ctx->r15 = ctx->r17 & 0X1;
    // 0x8001A92C: beq         $t7, $zero, L_8001A940
    if (ctx->r15 == 0) {
        // 0x8001A930: andi        $t8, $s1, 0x2
        ctx->r24 = ctx->r17 & 0X2;
            goto L_8001A940;
    }
    // 0x8001A930: andi        $t8, $s1, 0x2
    ctx->r24 = ctx->r17 & 0X2;
    // 0x8001A934: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A938: b           L_8001A968
    // 0x8001A93C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8001A968;
    // 0x8001A93C: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8001A940:
    // 0x8001A940: beq         $t8, $zero, L_8001A954
    if (ctx->r24 == 0) {
        // 0x8001A944: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001A954;
    }
    // 0x8001A944: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001A948: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8001A94C: b           L_8001A964
    // 0x8001A950: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8001A964;
    // 0x8001A950: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8001A954:
    // 0x8001A954: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A958: and         $t9, $s1, $at
    ctx->r25 = ctx->r17 & ctx->r1;
    // 0x8001A95C: addiu       $s1, $t9, 0x8
    ctx->r17 = ADD32(ctx->r25, 0X8);
    // 0x8001A960: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8001A964:
    // 0x8001A964: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001A968:
    // 0x8001A968: lwc1        $f5, -0x8($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001A96C: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001A970: andi        $t6, $s1, 0x1
    ctx->r14 = ctx->r17 & 0X1;
    // 0x8001A974: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8001A978: beq         $t6, $zero, L_8001A98C
    if (ctx->r14 == 0) {
        // 0x8001A97C: swc1        $f6, 0x244($sp)
        MEM_W(0X244, ctx->r29) = ctx->f6.u32l;
            goto L_8001A98C;
    }
    // 0x8001A97C: swc1        $f6, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->f6.u32l;
    // 0x8001A980: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A984: b           L_8001A9B8
    // 0x8001A988: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8001A9B8;
    // 0x8001A988: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8001A98C:
    // 0x8001A98C: andi        $t7, $s1, 0x2
    ctx->r15 = ctx->r17 & 0X2;
    // 0x8001A990: beq         $t7, $zero, L_8001A9A4
    if (ctx->r15 == 0) {
        // 0x8001A994: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001A9A4;
    }
    // 0x8001A994: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001A998: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8001A99C: b           L_8001A9B4
    // 0x8001A9A0: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8001A9B4;
    // 0x8001A9A0: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8001A9A4:
    // 0x8001A9A4: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A9A8: and         $t8, $s1, $at
    ctx->r24 = ctx->r17 & ctx->r1;
    // 0x8001A9AC: addiu       $s1, $t8, 0x8
    ctx->r17 = ADD32(ctx->r24, 0X8);
    // 0x8001A9B0: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8001A9B4:
    // 0x8001A9B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001A9B8:
    // 0x8001A9B8: lwc1        $f9, -0x8($v0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001A9BC: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001A9C0: andi        $t9, $s1, 0x1
    ctx->r25 = ctx->r17 & 0X1;
    // 0x8001A9C4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8001A9C8: beq         $t9, $zero, L_8001A9DC
    if (ctx->r25 == 0) {
        // 0x8001A9CC: swc1        $f10, 0x248($sp)
        MEM_W(0X248, ctx->r29) = ctx->f10.u32l;
            goto L_8001A9DC;
    }
    // 0x8001A9CC: swc1        $f10, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->f10.u32l;
    // 0x8001A9D0: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A9D4: b           L_8001AA08
    // 0x8001A9D8: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8001AA08;
    // 0x8001A9D8: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8001A9DC:
    // 0x8001A9DC: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
    // 0x8001A9E0: beq         $t6, $zero, L_8001A9F4
    if (ctx->r14 == 0) {
        // 0x8001A9E4: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001A9F4;
    }
    // 0x8001A9E4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001A9E8: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8001A9EC: b           L_8001AA04
    // 0x8001A9F0: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8001AA04;
    // 0x8001A9F0: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8001A9F4:
    // 0x8001A9F4: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001A9F8: and         $t7, $s1, $at
    ctx->r15 = ctx->r17 & ctx->r1;
    // 0x8001A9FC: addiu       $s1, $t7, 0x8
    ctx->r17 = ADD32(ctx->r15, 0X8);
    // 0x8001AA00: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8001AA04:
    // 0x8001AA04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001AA08:
    // 0x8001AA08: lwc1        $f5, -0x8($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001AA0C: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001AA10: lw          $t8, 0x2F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AA14: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8001AA18: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8001AA1C: bne         $t8, $at, L_8001AA34
    if (ctx->r24 != ctx->r1) {
        // 0x8001AA20: swc1        $f6, 0x24C($sp)
        MEM_W(0X24C, ctx->r29) = ctx->f6.u32l;
            goto L_8001AA34;
    }
    // 0x8001AA20: swc1        $f6, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->f6.u32l;
    // 0x8001AA24: jal         0x80019164
    // 0x8001AA28: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    func_80019164(rdram, ctx);
        goto after_19;
    // 0x8001AA28: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    after_19:
    // 0x8001AA2C: b           L_8001B1B0
    // 0x8001AA30: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AA30: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AA34:
    // 0x8001AA34: lw          $t9, 0x2F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AA38: nop

    // 0x8001AA3C: bne         $t9, $s3, L_8001AA54
    if (ctx->r25 != ctx->r19) {
        // 0x8001AA40: nop
    
            goto L_8001AA54;
    }
    // 0x8001AA40: nop

    // 0x8001AA44: jal         0x8001913C
    // 0x8001AA48: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    func_8001913C(rdram, ctx);
        goto after_20;
    // 0x8001AA48: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    after_20:
    // 0x8001AA4C: b           L_8001B1B0
    // 0x8001AA50: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AA50: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AA54:
    // 0x8001AA54: jal         0x80019114
    // 0x8001AA58: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    func_80019114(rdram, ctx);
        goto after_21;
    // 0x8001AA58: addiu       $a1, $sp, 0x244
    ctx->r5 = ADD32(ctx->r29, 0X244);
    after_21:
    // 0x8001AA5C: b           L_8001B1B0
    // 0x8001AA60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AA60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AA64:
    // 0x8001AA64: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001AA68: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AA6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA70: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AA74: lw          $t8, 0x2F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AA78: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AA7C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001AA80: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8001AA84: bne         $t8, $at, L_8001AA9C
    if (ctx->r24 != ctx->r1) {
        // 0x8001AA88: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001AA9C;
    }
    // 0x8001AA88: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AA8C: jal         0x80019164
    // 0x8001AA90: nop

    func_80019164(rdram, ctx);
        goto after_22;
    // 0x8001AA90: nop

    after_22:
    // 0x8001AA94: b           L_8001B1B0
    // 0x8001AA98: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AA98: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AA9C:
    // 0x8001AA9C: lw          $t9, 0x2F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AAA0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8001AAA4: bne         $t9, $at, L_8001AABC
    if (ctx->r25 != ctx->r1) {
        // 0x8001AAA8: nop
    
            goto L_8001AABC;
    }
    // 0x8001AAA8: nop

    // 0x8001AAAC: jal         0x8001913C
    // 0x8001AAB0: nop

    func_8001913C(rdram, ctx);
        goto after_23;
    // 0x8001AAB0: nop

    after_23:
    // 0x8001AAB4: b           L_8001B1B0
    // 0x8001AAB8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AAB8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AABC:
    // 0x8001AABC: jal         0x80019114
    // 0x8001AAC0: nop

    func_80019114(rdram, ctx);
        goto after_24;
    // 0x8001AAC0: nop

    after_24:
    // 0x8001AAC4: b           L_8001B1B0
    // 0x8001AAC8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AAC8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AACC:
    // 0x8001AACC: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001AAD0: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AAD4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001AAD8: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AADC: lw          $t8, 0x2F8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AAE0: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AAE4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001AAE8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8001AAEC: bne         $t8, $at, L_8001AB18
    if (ctx->r24 != ctx->r1) {
        // 0x8001AAF0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001AB18;
    }
    // 0x8001AAF0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AAF4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8001AAF8: nop

    // 0x8001AAFC: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x8001AB00: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8001AB04: nop

    // 0x8001AB08: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8001AB0C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8001AB10: b           L_8001B1AC
    // 0x8001AB14: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
        goto L_8001B1AC;
    // 0x8001AB14: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
L_8001AB18:
    // 0x8001AB18: lw          $t9, 0x2F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001AB1C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8001AB20: bne         $t9, $at, L_8001AB4C
    if (ctx->r25 != ctx->r1) {
        // 0x8001AB24: nop
    
            goto L_8001AB4C;
    }
    // 0x8001AB24: nop

    // 0x8001AB28: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8001AB2C: nop

    // 0x8001AB30: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x8001AB34: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8001AB38: nop

    // 0x8001AB3C: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8001AB40: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8001AB44: b           L_8001B1AC
    // 0x8001AB48: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
        goto L_8001B1AC;
    // 0x8001AB48: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_8001AB4C:
    // 0x8001AB4C: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8001AB50: nop

    // 0x8001AB54: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8001AB58: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8001AB5C: nop

    // 0x8001AB60: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x8001AB64: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8001AB68: b           L_8001B1AC
    // 0x8001AB6C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_8001B1AC;
    // 0x8001AB6C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_8001AB70:
    // 0x8001AB70: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001AB74: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AB78: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001AB7C: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AB80: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AB84: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001AB88: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001AB8C: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AB90: lh          $a0, 0x2($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X2);
    // 0x8001AB94: lh          $a1, 0x32($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X32);
    // 0x8001AB98: sh          $a0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r4;
    // 0x8001AB9C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001ABA0: b           L_8001B1AC
    // 0x8001ABA4: sh          $a1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r5;
        goto L_8001B1AC;
    // 0x8001ABA4: sh          $a1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r5;
L_8001ABA8:
    // 0x8001ABA8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001ABAC: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001ABB0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001ABB4: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001ABB8: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001ABBC: sw          $t6, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->r14;
    // 0x8001ABC0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001ABC4: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001ABC8: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001ABCC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001ABD0: jal         0x80019078
    // 0x8001ABD4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80019078(rdram, ctx);
        goto after_25;
    // 0x8001ABD4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_25:
    // 0x8001ABD8: lw          $t9, 0x224($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X224);
    // 0x8001ABDC: b           L_8001B1AC
    // 0x8001ABE0: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001ABE0: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
L_8001ABE4:
    // 0x8001ABE4: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001ABE8: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001ABEC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001ABF0: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001ABF4: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001ABF8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001ABFC: lw          $a1, -0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, -0X4);
    // 0x8001AC00: andi        $t8, $s1, 0x1
    ctx->r24 = ctx->r17 & 0X1;
    // 0x8001AC04: beq         $t8, $zero, L_8001AC18
    if (ctx->r24 == 0) {
        // 0x8001AC08: andi        $t9, $s1, 0x2
        ctx->r25 = ctx->r17 & 0X2;
            goto L_8001AC18;
    }
    // 0x8001AC08: andi        $t9, $s1, 0x2
    ctx->r25 = ctx->r17 & 0X2;
    // 0x8001AC0C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001AC10: b           L_8001AC40
    // 0x8001AC14: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8001AC40;
    // 0x8001AC14: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8001AC18:
    // 0x8001AC18: beq         $t9, $zero, L_8001AC2C
    if (ctx->r25 == 0) {
        // 0x8001AC1C: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001AC2C;
    }
    // 0x8001AC1C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001AC20: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8001AC24: b           L_8001AC3C
    // 0x8001AC28: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8001AC3C;
    // 0x8001AC28: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8001AC2C:
    // 0x8001AC2C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001AC30: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x8001AC34: addiu       $s1, $t6, 0x8
    ctx->r17 = ADD32(ctx->r14, 0X8);
    // 0x8001AC38: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8001AC3C:
    // 0x8001AC3C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001AC40:
    // 0x8001AC40: lwc1        $f11, -0x8($v0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001AC44: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001AC48: nop

    // 0x8001AC4C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8001AC50: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001AC54: jal         0x80018EF8
    // 0x8001AC58: nop

    func_80018EF8(rdram, ctx);
        goto after_26;
    // 0x8001AC58: nop

    after_26:
    // 0x8001AC5C: b           L_8001B1B0
    // 0x8001AC60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AC60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AC64:
    // 0x8001AC64: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001AC68: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AC6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AC70: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001AC74: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AC78: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AC7C: lw          $a1, -0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, -0X4);
    // 0x8001AC80: andi        $t9, $s1, 0x1
    ctx->r25 = ctx->r17 & 0X1;
    // 0x8001AC84: beq         $t9, $zero, L_8001AC98
    if (ctx->r25 == 0) {
        // 0x8001AC88: andi        $t6, $s1, 0x2
        ctx->r14 = ctx->r17 & 0X2;
            goto L_8001AC98;
    }
    // 0x8001AC88: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
    // 0x8001AC8C: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001AC90: b           L_8001ACC0
    // 0x8001AC94: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
        goto L_8001ACC0;
    // 0x8001AC94: addiu       $v0, $s1, -0x16
    ctx->r2 = ADD32(ctx->r17, -0X16);
L_8001AC98:
    // 0x8001AC98: beq         $t6, $zero, L_8001ACAC
    if (ctx->r14 == 0) {
        // 0x8001AC9C: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001ACAC;
    }
    // 0x8001AC9C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001ACA0: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8001ACA4: b           L_8001ACBC
    // 0x8001ACA8: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
        goto L_8001ACBC;
    // 0x8001ACA8: addiu       $v1, $s1, -0x28
    ctx->r3 = ADD32(ctx->r17, -0X28);
L_8001ACAC:
    // 0x8001ACAC: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x8001ACB0: and         $t7, $s1, $at
    ctx->r15 = ctx->r17 & ctx->r1;
    // 0x8001ACB4: addiu       $s1, $t7, 0x8
    ctx->r17 = ADD32(ctx->r15, 0X8);
    // 0x8001ACB8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
L_8001ACBC:
    // 0x8001ACBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001ACC0:
    // 0x8001ACC0: lwc1        $f5, -0x8($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001ACC4: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001ACC8: nop

    // 0x8001ACCC: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x8001ACD0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001ACD4: jal         0x80018D78
    // 0x8001ACD8: nop

    func_80018D78(rdram, ctx);
        goto after_27;
    // 0x8001ACD8: nop

    after_27:
    // 0x8001ACDC: b           L_8001B1B0
    // 0x8001ACE0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001ACE0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001ACE4:
    // 0x8001ACE4: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001ACE8: lw          $t9, 0x2F8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001ACEC: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001ACF0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001ACF4: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x8001ACF8: bne         $t9, $at, L_8001AD20
    if (ctx->r25 != ctx->r1) {
        // 0x8001ACFC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001AD20;
    }
    // 0x8001ACFC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AD00: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001AD04: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AD08: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD0C: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AD10: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AD14: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD18: b           L_8001AD44
    // 0x8001AD1C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
        goto L_8001AD44;
    // 0x8001AD1C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8001AD20:
    // 0x8001AD20: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001AD24: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AD28: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD2C: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001AD30: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AD34: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD38: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8001AD3C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8001AD40: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8001AD44:
    // 0x8001AD44: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8001AD48: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x8001AD4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001AD50: jal         0x800189F0
    // 0x8001AD54: sw          $s1, 0x2F4($sp)
    MEM_W(0X2F4, ctx->r29) = ctx->r17;
    func_800189F0(rdram, ctx);
        goto after_28;
    // 0x8001AD54: sw          $s1, 0x2F4($sp)
    MEM_W(0X2F4, ctx->r29) = ctx->r17;
    after_28:
    // 0x8001AD58: lw          $s1, 0x2F4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2F4);
    // 0x8001AD5C: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
    // 0x8001AD60: b           L_8001B1AC
    // 0x8001AD64: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
        goto L_8001B1AC;
    // 0x8001AD64: addiu       $s3, $zero, 0xF
    ctx->r19 = ADD32(0, 0XF);
L_8001AD68:
    // 0x8001AD68: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001AD6C: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AD70: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD74: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001AD78: lhu         $t6, 0x34($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X34);
    // 0x8001AD7C: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AD80: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001AD84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001AD88: bne         $t6, $at, L_8001B1AC
    if (ctx->r14 != ctx->r1) {
        // 0x8001AD8C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001B1AC;
    }
    // 0x8001AD8C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AD90: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x8001AD94: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x8001AD98: jal         0x80012398
    // 0x8001AD9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80012398(rdram, ctx);
        goto after_29;
    // 0x8001AD9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_29:
    // 0x8001ADA0: b           L_8001B1B0
    // 0x8001ADA4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001ADA4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001ADA8:
    // 0x8001ADA8: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001ADAC: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001ADB0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001ADB4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8001ADB8: lw          $v0, 0x6280($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6280);
    // 0x8001ADBC: sw          $v1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r3;
    // 0x8001ADC0: lw          $t8, 0x224($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X224);
    // 0x8001ADC4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001ADC8: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x8001ADCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001ADD0: addiu       $a0, $v0, 0x224
    ctx->r4 = ADD32(ctx->r2, 0X224);
    // 0x8001ADD4: jal         0x8000E4A8
    // 0x8001ADD8: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    func_8000E4A8(rdram, ctx);
        goto after_30;
    // 0x8001ADD8: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    after_30:
    // 0x8001ADDC: b           L_8001B1B0
    // 0x8001ADE0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001ADE0: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001ADE4:
    // 0x8001ADE4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001ADE8: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001ADEC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001ADF0: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001ADF4: lw          $t7, 0x2F8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001ADF8: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001ADFC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE00: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8001AE04: bne         $t7, $at, L_8001AE2C
    if (ctx->r15 != ctx->r1) {
        // 0x8001AE08: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8001AE2C;
    }
    // 0x8001AE08: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AE0C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8001AE10: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x8001AE14: lw          $t8, 0x6280($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6280);
    // 0x8001AE18: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x8001AE1C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8001AE20: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8001AE24: b           L_8001B1AC
    // 0x8001AE28: sh          $a1, 0x9C($t6)
    MEM_H(0X9C, ctx->r14) = ctx->r5;
        goto L_8001B1AC;
    // 0x8001AE28: sh          $a1, 0x9C($t6)
    MEM_H(0X9C, ctx->r14) = ctx->r5;
L_8001AE2C:
    // 0x8001AE2C: jal         0x80018848
    // 0x8001AE30: nop

    func_80018848(rdram, ctx);
        goto after_31;
    // 0x8001AE30: nop

    after_31:
    // 0x8001AE34: b           L_8001B1B0
    // 0x8001AE38: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AE38: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AE3C:
    // 0x8001AE3C: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001AE40: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AE44: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE48: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001AE4C: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AE50: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE54: jal         0x80018810
    // 0x8001AE58: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80018810(rdram, ctx);
        goto after_32;
    // 0x8001AE58: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_32:
    // 0x8001AE5C: b           L_8001B1B0
    // 0x8001AE60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AE60: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AE64:
    // 0x8001AE64: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001AE68: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AE6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE70: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001AE74: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AE78: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE7C: jal         0x800187D8
    // 0x8001AE80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800187D8(rdram, ctx);
        goto after_33;
    // 0x8001AE80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_33:
    // 0x8001AE84: b           L_8001B1B0
    // 0x8001AE88: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AE88: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AE8C:
    // 0x8001AE8C: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001AE90: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AE94: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001AE98: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001AE9C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8001AEA0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8001AEA4: lw          $t9, 0x6280($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6280);
    // 0x8001AEA8: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AEAC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8001AEB0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001AEB4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001AEB8: addu        $a0, $t9, $t6
    ctx->r4 = ADD32(ctx->r25, ctx->r14);
    // 0x8001AEBC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AEC0: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    // 0x8001AEC4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x8001AEC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8001AECC: jal         0x8000E4A8
    // 0x8001AED0: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    func_8000E4A8(rdram, ctx);
        goto after_34;
    // 0x8001AED0: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    after_34:
    // 0x8001AED4: b           L_8001B1B0
    // 0x8001AED8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AED8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AEDC:
    // 0x8001AEDC: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001AEE0: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AEE4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001AEE8: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001AEEC: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AEF0: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8001AEF4: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001AEF8: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AEFC: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8001AF00: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001AF04: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AF08: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8001AF0C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8001AF10: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8001AF14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001AF18: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8001AF1C: nop

    // 0x8001AF20: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8001AF24: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8001AF28: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x8001AF2C: lw          $t7, 0x6280($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6280);
    // 0x8001AF30: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x8001AF34: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8001AF38: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8001AF3C: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
    // 0x8001AF40: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AF44: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x8001AF48: swc1        $f12, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f12.u32l;
    // 0x8001AF4C: swc1        $f0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f0.u32l;
    // 0x8001AF50: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8001AF54: b           L_8001B1AC
    // 0x8001AF58: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
        goto L_8001B1AC;
    // 0x8001AF58: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
L_8001AF5C:
    // 0x8001AF5C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001AF60: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AF64: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001AF68: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AF6C: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AF70: sw          $t6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r14;
    // 0x8001AF74: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AF78: jal         0x80010730
    // 0x8001AF7C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80010730(rdram, ctx);
        goto after_35;
    // 0x8001AF7C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_35:
    // 0x8001AF80: lw          $t8, 0x1B8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001AF84: b           L_8001B1AC
    // 0x8001AF88: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001AF88: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_8001AF8C:
    // 0x8001AF8C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001AF90: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AF94: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AF98: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001AF9C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001AFA0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001AFA4: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001AFA8: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001AFAC: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x8001AFB0: jal         0x80018658
    // 0x8001AFB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80018658(rdram, ctx);
        goto after_36;
    // 0x8001AFB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_36:
    // 0x8001AFB8: b           L_8001B1B0
    // 0x8001AFBC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AFBC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AFC0:
    // 0x8001AFC0: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001AFC4: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001AFC8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001AFCC: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001AFD0: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001AFD4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001AFD8: lbu         $t6, 0x53($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X53);
    // 0x8001AFDC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8001AFE0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x8001AFE4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8001AFE8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001AFEC: jal         0x8001855C
    // 0x8001AFF0: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
    func_8001855C(rdram, ctx);
        goto after_37;
    // 0x8001AFF0: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
    after_37:
    // 0x8001AFF4: b           L_8001B1B0
    // 0x8001AFF8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001AFF8: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001AFFC:
    // 0x8001AFFC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001B000: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B004: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001B008: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001B00C: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001B010: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8001B014: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001B018: jal         0x8001855C
    // 0x8001B01C: sb          $v0, 0x53($a0)
    MEM_B(0X53, ctx->r4) = ctx->r2;
    func_8001855C(rdram, ctx);
        goto after_38;
    // 0x8001B01C: sb          $v0, 0x53($a0)
    MEM_B(0X53, ctx->r4) = ctx->r2;
    after_38:
    // 0x8001B020: b           L_8001B1B0
    // 0x8001B024: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B024: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B028:
    // 0x8001B028: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001B02C: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001B030: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001B034: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001B038: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B03C: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x8001B040: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001B044: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001B048: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001B04C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001B050: jal         0x80018520
    // 0x8001B054: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80018520(rdram, ctx);
        goto after_39;
    // 0x8001B054: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_39:
    // 0x8001B058: lw          $t7, 0x194($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X194);
    // 0x8001B05C: b           L_8001B1AC
    // 0x8001B060: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001B060: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
L_8001B064:
    // 0x8001B064: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001B068: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001B06C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8001B070: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001B074: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001B078: sw          $t9, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r25;
    // 0x8001B07C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001B080: addiu       $t7, $s1, 0x7
    ctx->r15 = ADD32(ctx->r17, 0X7);
    // 0x8001B084: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001B088: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8001B08C: lw          $a1, 0x98($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X98);
    // 0x8001B090: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001B094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001B098: jal         0x80011A70
    // 0x8001B09C: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    func_80011A70(rdram, ctx);
        goto after_40;
    // 0x8001B09C: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    after_40:
    // 0x8001B0A0: lw          $t8, 0x188($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X188);
    // 0x8001B0A4: b           L_8001B1AC
    // 0x8001B0A8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001B0A8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_8001B0AC:
    // 0x8001B0AC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001B0B0: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B0B4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001B0B8: jal         0x80011A38
    // 0x8001B0BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_80011A38(rdram, ctx);
        goto after_41;
    // 0x8001B0BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_41:
    // 0x8001B0C0: b           L_8001B1B0
    // 0x8001B0C4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B0C4: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B0C8:
    // 0x8001B0C8: addiu       $t6, $s1, 0x3
    ctx->r14 = ADD32(ctx->r17, 0X3);
    // 0x8001B0CC: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001B0D0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8001B0D4: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001B0D8: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001B0DC: sw          $t7, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r15;
    // 0x8001B0E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001B0E4: addiu       $t9, $s1, 0x7
    ctx->r25 = ADD32(ctx->r17, 0X7);
    // 0x8001B0E8: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B0EC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001B0F0: jal         0x8005D1B4
    // 0x8001B0F4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8005D1B4(rdram, ctx);
        goto after_42;
    // 0x8001B0F4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_42:
    // 0x8001B0F8: lw          $t6, 0x178($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X178);
    // 0x8001B0FC: b           L_8001B1AC
    // 0x8001B100: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
        goto L_8001B1AC;
    // 0x8001B100: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
L_8001B104:
    // 0x8001B104: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001B108: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001B10C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001B110: addiu       $t8, $s1, 0x7
    ctx->r24 = ADD32(ctx->r17, 0X7);
    // 0x8001B114: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001B118: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001B11C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8001B120: jal         0x8005CFA4
    // 0x8001B124: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8005CFA4(rdram, ctx);
        goto after_43;
    // 0x8001B124: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_43:
    // 0x8001B128: b           L_8001B1B0
    // 0x8001B12C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B12C: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B130:
    // 0x8001B130: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
    // 0x8001B134: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B138: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001B13C: addiu       $t6, $s1, 0x7
    ctx->r14 = ADD32(ctx->r17, 0X7);
    // 0x8001B140: and         $s1, $t6, $s2
    ctx->r17 = ctx->r14 & ctx->r18;
    // 0x8001B144: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8001B148: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8001B14C: jal         0x8005CE9C
    // 0x8001B150: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8005CE9C(rdram, ctx);
        goto after_44;
    // 0x8001B150: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_44:
    // 0x8001B154: b           L_8001B1B0
    // 0x8001B158: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B158: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B15C:
    // 0x8001B15C: addiu       $t7, $s1, 0x3
    ctx->r15 = ADD32(ctx->r17, 0X3);
    // 0x8001B160: and         $s1, $t7, $s2
    ctx->r17 = ctx->r15 & ctx->r18;
    // 0x8001B164: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8001B168: jal         0x8005D128
    // 0x8001B16C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_8005D128(rdram, ctx);
        goto after_45;
    // 0x8001B16C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_45:
    // 0x8001B170: b           L_8001B1B0
    // 0x8001B174: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B174: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B178:
    // 0x8001B178: addiu       $t8, $s1, 0x3
    ctx->r24 = ADD32(ctx->r17, 0X3);
    // 0x8001B17C: and         $s1, $t8, $s2
    ctx->r17 = ctx->r24 & ctx->r18;
    // 0x8001B180: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8001B184: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001B188: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8001B18C: jal         0x8005CE3C
    // 0x8001B190: nop

    func_8005CE3C(rdram, ctx);
        goto after_46;
    // 0x8001B190: nop

    after_46:
    // 0x8001B194: b           L_8001B1B0
    // 0x8001B198: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
        goto L_8001B1B0;
    // 0x8001B198: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B19C:
    // 0x8001B19C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001B1A0: lw          $a1, 0x2F8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2F8);
    // 0x8001B1A4: jal         0x80000FBC
    // 0x8001B1A8: addiu       $a0, $a0, 0x50C4
    ctx->r4 = ADD32(ctx->r4, 0X50C4);
    func_80000FBC(rdram, ctx);
        goto after_47;
    // 0x8001B1A8: addiu       $a0, $a0, 0x50C4
    ctx->r4 = ADD32(ctx->r4, 0X50C4);
    after_47:
L_8001B1AC:
    // 0x8001B1AC: addiu       $t9, $s1, 0x3
    ctx->r25 = ADD32(ctx->r17, 0X3);
L_8001B1B0:
    // 0x8001B1B0: and         $s1, $t9, $s2
    ctx->r17 = ctx->r25 & ctx->r18;
    // 0x8001B1B4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8001B1B8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8001B1BC: bne         $t6, $zero, L_8001A43C
    if (ctx->r14 != 0) {
        // 0x8001B1C0: sw          $t6, 0x2F8($sp)
        MEM_W(0X2F8, ctx->r29) = ctx->r14;
            goto L_8001A43C;
    }
    // 0x8001B1C0: sw          $t6, 0x2F8($sp)
    MEM_W(0X2F8, ctx->r29) = ctx->r14;
L_8001B1C4:
    // 0x8001B1C4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8001B1C8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8001B1CC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001B1D0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8001B1D4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001B1D8: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8001B1DC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8001B1E0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8001B1E4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8001B1E8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8001B1EC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8001B1F0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8001B1F4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8001B1F8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8001B1FC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8001B200: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8001B204: jr          $ra
    // 0x8001B208: addiu       $sp, $sp, 0x2F8
    ctx->r29 = ADD32(ctx->r29, 0X2F8);
    return;
    // 0x8001B208: addiu       $sp, $sp, 0x2F8
    ctx->r29 = ADD32(ctx->r29, 0X2F8);
;}
RECOMP_FUNC void func_8001B20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B20C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B210: beq         $a0, $zero, L_8001B24C
    if (ctx->r4 == 0) {
        // 0x8001B214: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8001B24C;
    }
    // 0x8001B214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B218: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8001B21C: addiu       $v0, $v0, 0x6280
    ctx->r2 = ADD32(ctx->r2, 0X6280);
    // 0x8001B220: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001B224: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001B228: sh          $a1, 0x60($t6)
    MEM_H(0X60, ctx->r14) = ctx->r5;
    // 0x8001B22C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8001B230: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8001B234: sh          $a2, 0x62($t7)
    MEM_H(0X62, ctx->r15) = ctx->r6;
    // 0x8001B238: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8001B23C: jal         0x80014028
    // 0x8001B240: sw          $a3, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r7;
    func_80014028(rdram, ctx);
        goto after_0;
    // 0x8001B240: sw          $a3, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r7;
    after_0:
    // 0x8001B244: b           L_8001B25C
    // 0x8001B248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B25C;
    // 0x8001B248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B24C:
    // 0x8001B24C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001B250: jal         0x80014028
    // 0x8001B254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014028(rdram, ctx);
        goto after_1;
    // 0x8001B254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8001B258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B25C:
    // 0x8001B25C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B260: jr          $ra
    // 0x8001B264: nop

    return;
    // 0x8001B264: nop

;}
RECOMP_FUNC void func_8001B268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B268: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001B26C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001B270: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001B274: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001B278: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8001B27C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001B280: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001B284: addiu       $s2, $zero, 0xF
    ctx->r18 = ADD32(0, 0XF);
    // 0x8001B288: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_8001B28C:
    // 0x8001B28C: lhu         $t6, 0x3A($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X3A);
    // 0x8001B290: sllv        $t8, $t7, $s0
    ctx->r24 = S32(ctx->r15 << (ctx->r16 & 31));
    // 0x8001B294: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x8001B298: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x8001B29C: beq         $t0, $zero, L_8001B2AC
    if (ctx->r8 == 0) {
        // 0x8001B2A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8001B2AC;
    }
    // 0x8001B2A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001B2A4: jal         0x80019774
    // 0x8001B2A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019774(rdram, ctx);
        goto after_0;
    // 0x8001B2A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_8001B2AC:
    // 0x8001B2AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001B2B0: bne         $s0, $s2, L_8001B28C
    if (ctx->r16 != ctx->r18) {
        // 0x8001B2B4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8001B28C;
    }
    // 0x8001B2B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001B2B8: jal         0x800196D4
    // 0x8001B2BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800196D4(rdram, ctx);
        goto after_1;
    // 0x8001B2BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8001B2C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001B2C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001B2C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B2CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001B2D0: jr          $ra
    // 0x8001B2D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001B2D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001B2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B2D8: jr          $ra
    // 0x8001B2DC: nop

    return;
    // 0x8001B2DC: nop

;}
RECOMP_FUNC void func_8001B2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B2E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001B2E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001B2E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001B2EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001B2F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001B2F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001B2F8: lhu         $s2, 0x38($a0)
    ctx->r18 = MEM_HU(ctx->r4, 0X38);
    // 0x8001B2FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001B300: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001B304: jal         0x800179C4
    // 0x8001B308: addiu       $s1, $a0, 0x8
    ctx->r17 = ADD32(ctx->r4, 0X8);
    func_800179C4(rdram, ctx);
        goto after_0;
    // 0x8001B308: addiu       $s1, $a0, 0x8
    ctx->r17 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8001B30C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8001B310: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8001B314: lhu         $t6, 0x38($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X38);
    // 0x8001B318: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x8001B31C: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x8001B320: sh          $t7, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r15;
    // 0x8001B324: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B328: jal         0x8000ED98
    // 0x8001B32C: nop

    func_8000ED98(rdram, ctx);
        goto after_1;
    // 0x8001B32C: nop

    after_1:
    // 0x8001B330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001B334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001B338: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B33C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001B340: jr          $ra
    // 0x8001B344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001B344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001B348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B348: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001B34C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001B350: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8001B354: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8001B358: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001B35C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8001B360: lhu         $s2, 0x38($a0)
    ctx->r18 = MEM_HU(ctx->r4, 0X38);
    // 0x8001B364: addiu       $a1, $a0, 0x98
    ctx->r5 = ADD32(ctx->r4, 0X98);
    // 0x8001B368: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001B36C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8001B370: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8001B374: jal         0x800179C4
    // 0x8001B378: addiu       $s1, $a0, 0x8
    ctx->r17 = ADD32(ctx->r4, 0X8);
    func_800179C4(rdram, ctx);
        goto after_0;
    // 0x8001B378: addiu       $s1, $a0, 0x8
    ctx->r17 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8001B37C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8001B380: jal         0x8000EB3C
    // 0x8001B384: nop

    func_8000EB3C(rdram, ctx);
        goto after_1;
    // 0x8001B384: nop

    after_1:
    // 0x8001B388: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001B38C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001B390: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001B394: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8001B398: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8001B39C: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001B3A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001B3A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001B3A8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8001B3AC: beq         $t7, $zero, L_8001B3F8
    if (ctx->r15 == 0) {
        // 0x8001B3B0: addiu       $a2, $a2, 0x7C14
        ctx->r6 = ADD32(ctx->r6, 0X7C14);
            goto L_8001B3F8;
    }
    // 0x8001B3B0: addiu       $a2, $a2, 0x7C14
    ctx->r6 = ADD32(ctx->r6, 0X7C14);
    // 0x8001B3B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001B3B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001B3BC: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8001B3C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001B3C4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001B3C8: nop

    // 0x8001B3CC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001B3D0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001B3D4: nop

    // 0x8001B3D8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8001B3DC: bne         $t7, $zero, L_8001B3F0
    if (ctx->r15 != 0) {
        // 0x8001B3E0: nop
    
            goto L_8001B3F0;
    }
    // 0x8001B3E0: nop

    // 0x8001B3E4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8001B3E8: b           L_8001B408
    // 0x8001B3EC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8001B408;
    // 0x8001B3EC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8001B3F0:
    // 0x8001B3F0: b           L_8001B408
    // 0x8001B3F4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8001B408;
    // 0x8001B3F4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8001B3F8:
    // 0x8001B3F8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8001B3FC: nop

    // 0x8001B400: bltz        $t7, L_8001B3F0
    if (SIGNED(ctx->r15) < 0) {
        // 0x8001B404: nop
    
            goto L_8001B3F0;
    }
    // 0x8001B404: nop

L_8001B408:
    // 0x8001B408: lhu         $t8, 0x38($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X38);
    // 0x8001B40C: sh          $t7, 0x32($a3)
    MEM_H(0X32, ctx->r7) = ctx->r15;
    // 0x8001B410: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x8001B414: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001B418: sh          $t9, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r25;
    // 0x8001B41C: lh          $a1, 0x32($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X32);
    // 0x8001B420: lhu         $a0, 0x30($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X30);
    // 0x8001B424: jal         0x800147D8
    // 0x8001B428: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_2;
    // 0x8001B428: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8001B42C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B430: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001B434: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8001B438: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8001B43C: jr          $ra
    // 0x8001B440: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8001B440: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8001B444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B44C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B450: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B454: lh          $a1, 0x32($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X32);
    // 0x8001B458: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x8001B45C: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001B460: addiu       $a2, $a2, 0x7AB8
    ctx->r6 = ADD32(ctx->r6, 0X7AB8);
    // 0x8001B464: jal         0x800147D8
    // 0x8001B468: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_0;
    // 0x8001B468: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8001B46C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B474: jr          $ra
    // 0x8001B478: nop

    return;
    // 0x8001B478: nop

;}
RECOMP_FUNC void func_8001B47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B47C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B484: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B488: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B48C: lh          $a1, 0x32($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X32);
    // 0x8001B490: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x8001B494: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001B498: addiu       $a2, $a2, 0x7A30
    ctx->r6 = ADD32(ctx->r6, 0X7A30);
    // 0x8001B49C: jal         0x800147D8
    // 0x8001B4A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_0;
    // 0x8001B4A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8001B4A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B4A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B4AC: jr          $ra
    // 0x8001B4B0: nop

    return;
    // 0x8001B4B0: nop

;}
RECOMP_FUNC void func_8001B4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B4B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B4B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B4BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B4C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8001B4C4: lh          $a1, 0x32($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X32);
    // 0x8001B4C8: lw          $a2, 0xD8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XD8);
    // 0x8001B4CC: lw          $a3, 0xDC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XDC);
    // 0x8001B4D0: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x8001B4D4: jal         0x800147D8
    // 0x8001B4D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_0;
    // 0x8001B4D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8001B4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B4E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B4E4: jr          $ra
    // 0x8001B4E8: nop

    return;
    // 0x8001B4E8: nop

;}
RECOMP_FUNC void func_8001B4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B4EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B4F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B4F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B4F8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B4FC: lh          $a1, 0x32($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X32);
    // 0x8001B500: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x8001B504: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001B508: addiu       $a2, $a2, 0x7514
    ctx->r6 = ADD32(ctx->r6, 0X7514);
    // 0x8001B50C: jal         0x800147D8
    // 0x8001B510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_0;
    // 0x8001B510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8001B514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B51C: jr          $ra
    // 0x8001B520: nop

    return;
    // 0x8001B520: nop

;}
RECOMP_FUNC void func_8001B524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001B52C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B530: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001B534: lh          $a1, 0x32($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X32);
    // 0x8001B538: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x8001B53C: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x8001B540: addiu       $a2, $a2, 0x70A0
    ctx->r6 = ADD32(ctx->r6, 0X70A0);
    // 0x8001B544: jal         0x800147D8
    // 0x8001B548: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800147D8(rdram, ctx);
        goto after_0;
    // 0x8001B548: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8001B54C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B554: jr          $ra
    // 0x8001B558: nop

    return;
    // 0x8001B558: nop

;}
RECOMP_FUNC void func_8001B560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B564: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001B568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B56C: addiu       $v1, $v1, -0x5BC0
    ctx->r3 = ADD32(ctx->r3, -0X5BC0);
    // 0x8001B570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001B574: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8001B578:
    // 0x8001B578: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8001B57C: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x8001B580: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x8001B584: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8001B588: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8001B58C: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x8001B590: sh          $t7, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r15;
    // 0x8001B594: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x8001B598: bne         $v0, $a0, L_8001B578
    if (ctx->r2 != ctx->r4) {
        // 0x8001B59C: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8001B578;
    }
    // 0x8001B59C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8001B5A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001B5A4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001B5A8: sw          $zero, -0x5BB0($at)
    MEM_W(-0X5BB0, ctx->r1) = 0;
    // 0x8001B5AC: jal         0x8007A23C
    // 0x8001B5B0: addiu       $a0, $a0, -0x5BA8
    ctx->r4 = ADD32(ctx->r4, -0X5BA8);
    guMtxIdent(rdram, ctx);
        goto after_0;
    // 0x8001B5B0: addiu       $a0, $a0, -0x5BA8
    ctx->r4 = ADD32(ctx->r4, -0X5BA8);
    after_0:
    // 0x8001B5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B5BC: jr          $ra
    // 0x8001B5C0: nop

    return;
    // 0x8001B5C0: nop

;}
RECOMP_FUNC void func_8001B5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001B5CC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001B5D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001B5D4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8001B5D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B5DC: lw          $a0, -0x5BE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5BE0);
    // 0x8001B5E0: jal         0x800195C4
    // 0x8001B5E4: nop

    func_800195C4(rdram, ctx);
        goto after_0;
    // 0x8001B5E4: nop

    after_0:
    // 0x8001B5E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001B5EC: addiu       $v1, $v1, -0x5BB0
    ctx->r3 = ADD32(ctx->r3, -0X5BB0);
    // 0x8001B5F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001B5F4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001B5F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001B5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B600: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8001B604: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001B608: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001B60C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001B610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B614: jr          $ra
    // 0x8001B618: sh          $t8, -0x5BC0($at)
    MEM_H(-0X5BC0, ctx->r1) = ctx->r24;
    return;
    // 0x8001B618: sh          $t8, -0x5BC0($at)
    MEM_H(-0X5BC0, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_8001B61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B61C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8001B620: addiu       $t3, $t3, -0x5BB0
    ctx->r11 = ADD32(ctx->r11, -0X5BB0);
    // 0x8001B624: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8001B628: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001B62C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001B630: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8001B634: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8001B638: lhu         $v1, -0x5BC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5BC0);
    // 0x8001B63C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x8001B640: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8001B644: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001B648: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8001B64C: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8001B650: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x8001B654: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8001B658: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8001B65C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8001B660: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8001B664: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8001B668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001B66C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8001B670: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001B674: jal         0x80019F10
    // 0x8001B678: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_80019F10(rdram, ctx);
        goto after_0;
    // 0x8001B678: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8001B67C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B680: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001B684: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8001B688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001B68C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001B690: sw          $v0, -0x5BE0($at)
    MEM_W(-0X5BE0, ctx->r1) = ctx->r2;
    // 0x8001B694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8001B698: jr          $ra
    // 0x8001B69C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001B69C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8001B6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B6A0: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x8001B6A4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001B6A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001B6AC: bne         $t7, $zero, L_8001B750
    if (ctx->r15 != 0) {
        // 0x8001B6B0: sw          $t7, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r15;
            goto L_8001B750;
    }
    // 0x8001B6B0: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
    // 0x8001B6B4: addiu       $v1, $v1, -0x5B50
    ctx->r3 = ADD32(ctx->r3, -0X5B50);
    // 0x8001B6B8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8001B6BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001B6C0: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8001B6C4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001B6C8: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8001B6CC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8001B6D0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001B6D4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8001B6D8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8001B6DC: addiu       $v1, $v1, -0x5B4C
    ctx->r3 = ADD32(ctx->r3, -0X5B4C);
    // 0x8001B6E0: beq         $v0, $zero, L_8001B6F4
    if (ctx->r2 == 0) {
        // 0x8001B6E4: addiu       $a1, $a1, -0x5B58
        ctx->r5 = ADD32(ctx->r5, -0X5B58);
            goto L_8001B6F4;
    }
    // 0x8001B6E4: addiu       $a1, $a1, -0x5B58
    ctx->r5 = ADD32(ctx->r5, -0X5B58);
    // 0x8001B6E8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8001B6EC: nop

    // 0x8001B6F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_8001B6F4:
    // 0x8001B6F4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8001B6F8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8001B6FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001B700: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8001B704: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8001B708: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001B70C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001B710: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8001B714: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8001B718: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8001B71C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8001B720: nop

    // 0x8001B724: sw          $a0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r4;
    // 0x8001B728: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8001B72C: nop

    // 0x8001B730: beq         $v0, $zero, L_8001B740
    if (ctx->r2 == 0) {
        // 0x8001B734: nop
    
            goto L_8001B740;
    }
    // 0x8001B734: nop

    // 0x8001B738: b           L_8001B744
    // 0x8001B73C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
        goto L_8001B744;
    // 0x8001B73C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_8001B740:
    // 0x8001B740: sw          $a0, -0x5B54($at)
    MEM_W(-0X5B54, ctx->r1) = ctx->r4;
L_8001B744:
    // 0x8001B744: lw          $t8, -0x19AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19AC);
    // 0x8001B748: nop

    // 0x8001B74C: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
L_8001B750:
    // 0x8001B750: jr          $ra
    // 0x8001B754: nop

    return;
    // 0x8001B754: nop

;}
RECOMP_FUNC void func_8001B758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B758: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001B75C: lw          $t6, -0x5B5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B5C);
    // 0x8001B760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B768: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8001B76C: nop

    // 0x8001B770: beq         $a0, $zero, L_8001B7AC
    if (ctx->r4 == 0) {
        // 0x8001B774: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001B7AC;
    }
    // 0x8001B774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B778:
    // 0x8001B778: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x8001B77C: nop

    // 0x8001B780: bne         $a1, $t7, L_8001B798
    if (ctx->r5 != ctx->r15) {
        // 0x8001B784: nop
    
            goto L_8001B798;
    }
    // 0x8001B784: nop

    // 0x8001B788: jal         0x8001B6A0
    // 0x8001B78C: nop

    func_8001B6A0(rdram, ctx);
        goto after_0;
    // 0x8001B78C: nop

    after_0:
    // 0x8001B790: b           L_8001B7AC
    // 0x8001B794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001B7AC;
    // 0x8001B794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B798:
    // 0x8001B798: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8001B79C: nop

    // 0x8001B7A0: bne         $a0, $zero, L_8001B778
    if (ctx->r4 != 0) {
        // 0x8001B7A4: nop
    
            goto L_8001B778;
    }
    // 0x8001B7A4: nop

    // 0x8001B7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001B7AC:
    // 0x8001B7AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B7B0: jr          $ra
    // 0x8001B7B4: nop

    return;
    // 0x8001B7B4: nop

;}
RECOMP_FUNC void func_8001B7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B7C0: jal         0x8001B758
    // 0x8001B7C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_8001B758(rdram, ctx);
        goto after_0;
    // 0x8001B7C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
    // 0x8001B7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001B7D0: jr          $ra
    // 0x8001B7D4: nop

    return;
    // 0x8001B7D4: nop

;}
RECOMP_FUNC void func_8001B7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001B7E4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001B7E8: lw          $v1, 0x7D10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7D10);
    // 0x8001B7EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001B7F0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001B7F4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001B7F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001B7FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001B800: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001B804: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001B808: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001B80C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001B810: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001B814: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8001B818: or          $s7, $v1, $zero
    ctx->r23 = ctx->r3 | 0;
    // 0x8001B81C: beq         $t6, $zero, L_8001B994
    if (ctx->r14 == 0) {
        // 0x8001B820: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8001B994;
    }
    // 0x8001B820: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8001B824: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8001B828: lui         $s5, 0xD9FF
    ctx->r21 = S32(0XD9FF << 16);
    // 0x8001B82C: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8001B830: addiu       $fp, $fp, -0x5B5C
    ctx->r30 = ADD32(ctx->r30, -0X5B5C);
    // 0x8001B834: addiu       $s6, $zero, -0x401
    ctx->r22 = ADD32(0, -0X401);
    // 0x8001B838: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8001B83C: lui         $s3, 0xDF00
    ctx->r19 = S32(0XDF00 << 16);
L_8001B840:
    // 0x8001B840: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x8001B844: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001B848: lw          $s2, 0x4($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X4);
    // 0x8001B84C: nop

    // 0x8001B850: beq         $s2, $zero, L_8001B924
    if (ctx->r18 == 0) {
        // 0x8001B854: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001B924;
    }
    // 0x8001B854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001B858:
    // 0x8001B858: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x8001B85C: jal         0x8001A160
    // 0x8001B860: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8001A160(rdram, ctx);
        goto after_0;
    // 0x8001B860: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8001B864: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x8001B868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001B86C: lhu         $t8, 0x5A($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X5A);
    // 0x8001B870: nop

    // 0x8001B874: blez        $t8, L_8001B910
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8001B878: nop
    
            goto L_8001B910;
    }
    // 0x8001B878: nop

    // 0x8001B87C: lw          $v1, 0x3C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X3C);
    // 0x8001B880: nop

L_8001B884:
    // 0x8001B884: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8001B888: nop

    // 0x8001B88C: bne         $s1, $t9, L_8001B8F4
    if (ctx->r17 != ctx->r25) {
        // 0x8001B890: nop
    
            goto L_8001B8F4;
    }
    // 0x8001B890: nop

    // 0x8001B894: lhu         $t0, 0x58($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X58);
    // 0x8001B898: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001B89C: blez        $t0, L_8001B8E8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8001B8A0: nop
    
            goto L_8001B8E8;
    }
    // 0x8001B8A0: nop

    // 0x8001B8A4: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x8001B8A8: nop

L_8001B8AC:
    // 0x8001B8AC: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8001B8B0: nop

    // 0x8001B8B4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x8001B8B8: nop

    // 0x8001B8BC: bne         $s4, $t2, L_8001B8CC
    if (ctx->r20 != ctx->r10) {
        // 0x8001B8C0: nop
    
            goto L_8001B8CC;
    }
    // 0x8001B8C0: nop

    // 0x8001B8C4: b           L_8001B924
    // 0x8001B8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001B924;
    // 0x8001B8C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001B8CC:
    // 0x8001B8CC: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x8001B8D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001B8D4: lhu         $t4, 0x58($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X58);
    // 0x8001B8D8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001B8DC: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8001B8E0: bne         $at, $zero, L_8001B8AC
    if (ctx->r1 != 0) {
        // 0x8001B8E4: nop
    
            goto L_8001B8AC;
    }
    // 0x8001B8E4: nop

L_8001B8E8:
    // 0x8001B8E8: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8001B8EC: b           L_8001B924
    // 0x8001B8F0: nop

        goto L_8001B924;
    // 0x8001B8F0: nop

L_8001B8F4:
    // 0x8001B8F4: lw          $t5, 0x4($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X4);
    // 0x8001B8F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001B8FC: lhu         $t6, 0x5A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X5A);
    // 0x8001B900: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001B904: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001B908: bne         $at, $zero, L_8001B884
    if (ctx->r1 != 0) {
        // 0x8001B90C: nop
    
            goto L_8001B884;
    }
    // 0x8001B90C: nop

L_8001B910:
    // 0x8001B910: lw          $s2, 0x4($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X4);
    // 0x8001B914: nop

    // 0x8001B918: bne         $s2, $zero, L_8001B858
    if (ctx->r18 != 0) {
        // 0x8001B91C: nop
    
            goto L_8001B858;
    }
    // 0x8001B91C: nop

    // 0x8001B920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001B924:
    // 0x8001B924: beq         $v0, $zero, L_8001B984
    if (ctx->r2 == 0) {
        // 0x8001B928: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8001B984;
    }
    // 0x8001B928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001B92C: beq         $v0, $at, L_8001B984
    if (ctx->r2 == ctx->r1) {
        // 0x8001B930: nop
    
            goto L_8001B984;
    }
    // 0x8001B930: nop

    // 0x8001B934: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x8001B938: nop

    // 0x8001B93C: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8001B940: nop

    // 0x8001B944: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001B948: nop

    // 0x8001B94C: beq         $s3, $v0, L_8001B984
    if (ctx->r19 == ctx->r2) {
        // 0x8001B950: nop
    
            goto L_8001B984;
    }
    // 0x8001B950: nop

L_8001B954:
    // 0x8001B954: beq         $s3, $v0, L_8001B984
    if (ctx->r19 == ctx->r2) {
        // 0x8001B958: nop
    
            goto L_8001B984;
    }
    // 0x8001B958: nop

    // 0x8001B95C: bne         $s5, $v0, L_8001B974
    if (ctx->r21 != ctx->r2) {
        // 0x8001B960: nop
    
            goto L_8001B974;
    }
    // 0x8001B960: nop

    // 0x8001B964: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8001B968: nop

    // 0x8001B96C: and         $t9, $t8, $s6
    ctx->r25 = ctx->r24 & ctx->r22;
    // 0x8001B970: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8001B974:
    // 0x8001B974: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8001B978: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001B97C: bne         $s3, $v0, L_8001B954
    if (ctx->r19 != ctx->r2) {
        // 0x8001B980: nop
    
            goto L_8001B954;
    }
    // 0x8001B980: nop

L_8001B984:
    // 0x8001B984: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x8001B988: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8001B98C: bne         $v0, $zero, L_8001B840
    if (ctx->r2 != 0) {
        // 0x8001B990: nop
    
            goto L_8001B840;
    }
    // 0x8001B990: nop

L_8001B994:
    // 0x8001B994: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001B998: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001B99C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B9A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001B9A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001B9A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001B9AC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001B9B0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001B9B4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001B9B8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001B9BC: jr          $ra
    // 0x8001B9C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001B9C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001B9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B9C4: jr          $ra
    // 0x8001B9C8: nop

    return;
    // 0x8001B9C8: nop

;}
RECOMP_FUNC void func_8001B9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B9CC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001B9D0: lw          $t6, -0x5B5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B5C);
    // 0x8001B9D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001B9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B9DC: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x8001B9E0: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8001B9E4: beq         $v1, $zero, L_8001BA1C
    if (ctx->r3 == 0) {
        // 0x8001B9E8: addiu       $s6, $s6, -0x5B48
        ctx->r22 = ADD32(ctx->r22, -0X5B48);
            goto L_8001BA1C;
    }
    // 0x8001B9E8: addiu       $s6, $s6, -0x5B48
    ctx->r22 = ADD32(ctx->r22, -0X5B48);
    // 0x8001B9EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_8001B9F0:
    // 0x8001B9F0: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x8001B9F4: nop

    // 0x8001B9F8: bne         $t7, $t8, L_8001BA0C
    if (ctx->r15 != ctx->r24) {
        // 0x8001B9FC: lui         $s2, 0x800B
        ctx->r18 = S32(0X800B << 16);
            goto L_8001BA0C;
    }
    // 0x8001B9FC: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001BA00: addiu       $s2, $s2, -0x5B60
    ctx->r18 = ADD32(ctx->r18, -0X5B60);
    // 0x8001BA04: b           L_8001BA88
    // 0x8001BA08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001BA88;
    // 0x8001BA08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001BA0C:
    // 0x8001BA0C: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x8001BA10: nop

    // 0x8001BA14: bne         $v1, $zero, L_8001B9F0
    if (ctx->r3 != 0) {
        // 0x8001BA18: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_8001B9F0;
    }
    // 0x8001BA18: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_8001BA1C:
    // 0x8001BA1C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001BA20: lw          $v1, -0x5B58($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5B58);
    // 0x8001BA24: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8001BA28: beq         $v1, $zero, L_8001BA60
    if (ctx->r3 == 0) {
        // 0x8001BA2C: addiu       $s6, $s6, -0x5B48
        ctx->r22 = ADD32(ctx->r22, -0X5B48);
            goto L_8001BA60;
    }
    // 0x8001BA2C: addiu       $s6, $s6, -0x5B48
    ctx->r22 = ADD32(ctx->r22, -0X5B48);
    // 0x8001BA30: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_8001BA34:
    // 0x8001BA34: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x8001BA38: nop

    // 0x8001BA3C: bne         $t9, $t6, L_8001BA50
    if (ctx->r25 != ctx->r14) {
        // 0x8001BA40: lui         $s2, 0x800B
        ctx->r18 = S32(0X800B << 16);
            goto L_8001BA50;
    }
    // 0x8001BA40: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001BA44: addiu       $s2, $s2, -0x5B60
    ctx->r18 = ADD32(ctx->r18, -0X5B60);
    // 0x8001BA48: b           L_8001BA88
    // 0x8001BA4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001BA88;
    // 0x8001BA4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001BA50:
    // 0x8001BA50: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x8001BA54: nop

    // 0x8001BA58: bne         $v1, $zero, L_8001BA34
    if (ctx->r3 != 0) {
        // 0x8001BA5C: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_8001BA34;
    }
    // 0x8001BA5C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_8001BA60:
    // 0x8001BA60: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8001BA64: addiu       $s6, $s6, -0x5B48
    ctx->r22 = ADD32(ctx->r22, -0X5B48);
    // 0x8001BA68: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x8001BA6C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001BA70: addiu       $s2, $s2, -0x5B60
    ctx->r18 = ADD32(ctx->r18, -0X5B60);
    // 0x8001BA74: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8001BA78: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001BA7C: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x8001BA80: lw          $v0, 0x4($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4);
    // 0x8001BA84: nop

L_8001BA88:
    // 0x8001BA88: bne         $v0, $zero, L_8001BA9C
    if (ctx->r2 != 0) {
        // 0x8001BA8C: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_8001BA9C;
    }
    // 0x8001BA8C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8001BA90: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001BA94: jal         0x80000FBC
    // 0x8001BA98: addiu       $a0, $a0, 0x5250
    ctx->r4 = ADD32(ctx->r4, 0X5250);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001BA98: addiu       $a0, $a0, 0x5250
    ctx->r4 = ADD32(ctx->r4, 0X5250);
    after_0:
L_8001BA9C:
    // 0x8001BA9C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001BAA0: lw          $t7, 0x8($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X8);
    // 0x8001BAA4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x8001BAA8: beq         $t6, $t7, L_8001BCC8
    if (ctx->r14 == ctx->r15) {
        // 0x8001BAAC: nop
    
            goto L_8001BCC8;
    }
    // 0x8001BAAC: nop

    // 0x8001BAB0: lw          $t8, 0x150($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X150);
    // 0x8001BAB4: lui         $s5, 0x3
    ctx->r21 = S32(0X3 << 16);
    // 0x8001BAB8: ori         $s5, $s5, 0xE800
    ctx->r21 = ctx->r21 | 0XE800;
    // 0x8001BABC: slt         $at, $t8, $s5
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8001BAC0: bne         $at, $zero, L_8001BC0C
    if (ctx->r1 != 0) {
        // 0x8001BAC4: nop
    
            goto L_8001BC0C;
    }
    // 0x8001BAC4: nop

    // 0x8001BAC8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8001BACC: lw          $s0, -0x5B54($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5B54);
    // 0x8001BAD0: nop

    // 0x8001BAD4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8001BAD8: nop

    // 0x8001BADC: beq         $t9, $zero, L_8001BC0C
    if (ctx->r25 == 0) {
        // 0x8001BAE0: nop
    
            goto L_8001BC0C;
    }
    // 0x8001BAE0: nop

    // 0x8001BAE4: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x8001BAE8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001BAEC: addiu       $s4, $s4, -0x5B4C
    ctx->r20 = ADD32(ctx->r20, -0X5B4C);
    // 0x8001BAF0: addiu       $fp, $fp, 0x3A4
    ctx->r30 = ADD32(ctx->r30, 0X3A4);
    // 0x8001BAF4: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8001BAF8:
    // 0x8001BAF8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8001BAFC: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8001BB00: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8001BB04: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001BB08: bne         $at, $zero, L_8001BBFC
    if (ctx->r1 != 0) {
        // 0x8001BB0C: nop
    
            goto L_8001BBFC;
    }
    // 0x8001BB0C: nop

    // 0x8001BB10: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8001BB14: jal         0x8001A17C
    // 0x8001BB18: nop

    func_8001A17C(rdram, ctx);
        goto after_1;
    // 0x8001BB18: nop

    after_1:
    // 0x8001BB1C: bne         $v0, $zero, L_8001BBFC
    if (ctx->r2 != 0) {
        // 0x8001BB20: nop
    
            goto L_8001BBFC;
    }
    // 0x8001BB20: nop

    // 0x8001BB24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8001BB28: jal         0x8001A288
    // 0x8001BB2C: nop

    func_8001A288(rdram, ctx);
        goto after_2;
    // 0x8001BB2C: nop

    after_2:
    // 0x8001BB30: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x8001BB34: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x8001BB38: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8001BB3C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001BB40: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001BB44: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x8001BB48: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8001BB4C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001BB50: nop

    // 0x8001BB54: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8001BB58: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8001BB5C: nop

    // 0x8001BB60: beq         $v0, $zero, L_8001BB74
    if (ctx->r2 == 0) {
        // 0x8001BB64: nop
    
            goto L_8001BB74;
    }
    // 0x8001BB64: nop

    // 0x8001BB68: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001BB6C: b           L_8001BB80
    // 0x8001BB70: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_8001BB80;
    // 0x8001BB70: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_8001BB74:
    // 0x8001BB74: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8001BB78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BB7C: sw          $t9, -0x5B54($at)
    MEM_W(-0X5B54, ctx->r1) = ctx->r25;
L_8001BB80:
    // 0x8001BB80: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8001BB84: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8001BB88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001BB8C: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    // 0x8001BB90: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8001BB94: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8001BB98: nop

    // 0x8001BB9C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8001BBA0: nop

    // 0x8001BBA4: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x8001BBA8: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8001BBAC: nop

    // 0x8001BBB0: sw          $s0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r16;
    // 0x8001BBB4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8001BBB8: nop

    // 0x8001BBBC: beq         $v0, $zero, L_8001BBC8
    if (ctx->r2 == 0) {
        // 0x8001BBC0: nop
    
            goto L_8001BBC8;
    }
    // 0x8001BBC0: nop

    // 0x8001BBC4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_8001BBC8:
    // 0x8001BBC8: lw          $v1, 0x150($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X150);
    // 0x8001BBCC: nop

    // 0x8001BBD0: slt         $at, $v1, $s5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8001BBD4: bne         $at, $zero, L_8001BBF4
    if (ctx->r1 != 0) {
        // 0x8001BBD8: slt         $at, $v1, $s5
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_8001BBF4;
    }
    // 0x8001BBD8: slt         $at, $v1, $s5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8001BBDC: jal         0x80002E14
    // 0x8001BBE0: nop

    func_80002E14(rdram, ctx);
        goto after_3;
    // 0x8001BBE0: nop

    after_3:
    // 0x8001BBE4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001BBE8: lw          $v1, 0x150($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X150);
    // 0x8001BBEC: nop

    // 0x8001BBF0: slt         $at, $v1, $s5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r21) ? 1 : 0;
L_8001BBF4:
    // 0x8001BBF4: bne         $at, $zero, L_8001BC0C
    if (ctx->r1 != 0) {
        // 0x8001BBF8: nop
    
            goto L_8001BC0C;
    }
    // 0x8001BBF8: nop

L_8001BBFC:
    // 0x8001BBFC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001BC00: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8001BC04: bne         $t8, $zero, L_8001BAF8
    if (ctx->r24 != 0) {
        // 0x8001BC08: nop
    
            goto L_8001BAF8;
    }
    // 0x8001BC08: nop

L_8001BC0C:
    // 0x8001BC0C: lw          $t9, 0x4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X4);
    // 0x8001BC10: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x8001BC14: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001BC18: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8001BC1C: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x8001BC20: addiu       $v1, $v1, -0x5B50
    ctx->r3 = ADD32(ctx->r3, -0X5B50);
    // 0x8001BC24: beq         $v0, $zero, L_8001BC38
    if (ctx->r2 == 0) {
        // 0x8001BC28: nop
    
            goto L_8001BC38;
    }
    // 0x8001BC28: nop

    // 0x8001BC2C: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x8001BC30: nop

    // 0x8001BC34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8001BC38:
    // 0x8001BC38: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8001BC3C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001BC40: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001BC44: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8001BC48: lw          $t6, -0x5B5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B5C);
    // 0x8001BC4C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001BC50: sw          $t6, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r14;
    // 0x8001BC54: lw          $t7, -0x5B5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B5C);
    // 0x8001BC58: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001BC5C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8001BC60: nop

    // 0x8001BC64: sw          $t8, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r24;
    // 0x8001BC68: lw          $t9, -0x5B5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B5C);
    // 0x8001BC6C: nop

    // 0x8001BC70: sw          $s7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r23;
    // 0x8001BC74: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x8001BC78: nop

    // 0x8001BC7C: beq         $v0, $zero, L_8001BC8C
    if (ctx->r2 == 0) {
        // 0x8001BC80: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_8001BC8C;
    }
    // 0x8001BC80: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001BC84: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x8001BC88: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
L_8001BC8C:
    // 0x8001BC8C: nop

    // 0x8001BC90: sw          $t6, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r14;
    // 0x8001BC94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001BC98: jal         0x8001A2A8
    // 0x8001BC9C: nop

    func_8001A2A8(rdram, ctx);
        goto after_4;
    // 0x8001BC9C: nop

    after_4:
    // 0x8001BCA0: sw          $v0, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->r2;
    // 0x8001BCA4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8001BCA8: lw          $t7, -0x15C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X15C0);
    // 0x8001BCAC: nop

    // 0x8001BCB0: beq         $t7, $zero, L_8001BD78
    if (ctx->r15 == 0) {
        // 0x8001BCB4: nop
    
            goto L_8001BD78;
    }
    // 0x8001BCB4: nop

    // 0x8001BCB8: jal         0x8001B7E0
    // 0x8001BCBC: nop

    func_8001B7E0(rdram, ctx);
        goto after_5;
    // 0x8001BCBC: nop

    after_5:
    // 0x8001BCC0: b           L_8001BD7C
    // 0x8001BCC4: lw          $t9, 0x10($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X10);
        goto L_8001BD7C;
    // 0x8001BCC4: lw          $t9, 0x10($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X10);
L_8001BCC8:
    // 0x8001BCC8: lw          $t8, 0x10($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X10);
    // 0x8001BCCC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001BCD0: bne         $t8, $zero, L_8001BD78
    if (ctx->r24 != 0) {
        // 0x8001BCD4: addiu       $v1, $v1, -0x5B50
        ctx->r3 = ADD32(ctx->r3, -0X5B50);
            goto L_8001BD78;
    }
    // 0x8001BCD4: addiu       $v1, $v1, -0x5B50
    ctx->r3 = ADD32(ctx->r3, -0X5B50);
    // 0x8001BCD8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001BCDC: addiu       $s4, $s4, -0x5B4C
    ctx->r20 = ADD32(ctx->r20, -0X5B4C);
    // 0x8001BCE0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8001BCE4: nop

    // 0x8001BCE8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8001BCEC: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x8001BCF0: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8001BCF4: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x8001BCF8: nop

    // 0x8001BCFC: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8001BD00: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x8001BD04: nop

    // 0x8001BD08: beq         $v0, $zero, L_8001BD1C
    if (ctx->r2 == 0) {
        // 0x8001BD0C: nop
    
            goto L_8001BD1C;
    }
    // 0x8001BD0C: nop

    // 0x8001BD10: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x8001BD14: b           L_8001BD28
    // 0x8001BD18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_8001BD28;
    // 0x8001BD18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_8001BD1C:
    // 0x8001BD1C: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x8001BD20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BD24: sw          $t6, -0x5B54($at)
    MEM_W(-0X5B54, ctx->r1) = ctx->r14;
L_8001BD28:
    // 0x8001BD28: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001BD2C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001BD30: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8001BD34: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001BD38: lw          $t9, -0x5B5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5B5C);
    // 0x8001BD3C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001BD40: sw          $t9, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r25;
    // 0x8001BD44: lw          $t6, -0x5B5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5B5C);
    // 0x8001BD48: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001BD4C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8001BD50: nop

    // 0x8001BD54: sw          $t7, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r15;
    // 0x8001BD58: lw          $t8, -0x5B5C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5B5C);
    // 0x8001BD5C: nop

    // 0x8001BD60: sw          $s7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r23;
    // 0x8001BD64: lw          $v0, 0x4($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X4);
    // 0x8001BD68: nop

    // 0x8001BD6C: beq         $v0, $zero, L_8001BD78
    if (ctx->r2 == 0) {
        // 0x8001BD70: nop
    
            goto L_8001BD78;
    }
    // 0x8001BD70: nop

    // 0x8001BD74: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
L_8001BD78:
    // 0x8001BD78: lw          $t9, 0x10($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X10);
L_8001BD7C:
    // 0x8001BD7C: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x8001BD80: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8001BD84: sw          $t6, 0x10($s7)
    MEM_W(0X10, ctx->r23) = ctx->r14;
    // 0x8001BD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001BD90: jr          $ra
    // 0x8001BD94: nop

    return;
    // 0x8001BD94: nop

;}
RECOMP_FUNC void func_8001BD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001BD9C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001BDA0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001BDA4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001BDA8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001BDAC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001BDB0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001BDB4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001BDB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001BDBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001BDC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001BDC4: jal         0x8001B9CC
    // 0x8001BDC8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001BDC8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001BDCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001BDD0: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x8001BDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001BDD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BDDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001BDE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001BDE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001BDE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BDEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001BDF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001BDF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001BDF8: jr          $ra
    // 0x8001BDFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001BDFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001BE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001BE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BE08: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8001BE0C: addiu       $a1, $a1, -0xDE0
    ctx->r5 = ADD32(ctx->r5, -0XDE0);
    // 0x8001BE10: jal         0x80073EF0
    // 0x8001BE14: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8001BE14: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x8001BE18: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8001BE1C: addiu       $a3, $t6, -0x4C90
    ctx->r7 = ADD32(ctx->r14, -0X4C90);
    // 0x8001BE20: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8001BE24: addiu       $t0, $t0, -0x90
    ctx->r8 = ADD32(ctx->r8, -0X90);
    // 0x8001BE28: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8001BE2C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8001BE30: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_8001BE34:
    // 0x8001BE34: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8001BE38: sw          $zero, 0x44($a2)
    MEM_W(0X44, ctx->r6) = 0;
    // 0x8001BE3C: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x8001BE40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001BE44: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8001BE48:
    // 0x8001BE48: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001BE4C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8001BE50: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x8001BE54: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8001BE58: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    // 0x8001BE5C: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x8001BE60: sw          $a0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r4;
    // 0x8001BE64: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8001BE68: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x8001BE6C: bne         $v1, $a1, L_8001BE48
    if (ctx->r3 != ctx->r5) {
        // 0x8001BE70: sw          $a0, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r4;
            goto L_8001BE48;
    }
    // 0x8001BE70: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x8001BE74: addiu       $a3, $a3, 0x4C
    ctx->r7 = ADD32(ctx->r7, 0X4C);
    // 0x8001BE78: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x8001BE7C: bne         $at, $zero, L_8001BE34
    if (ctx->r1 != 0) {
        // 0x8001BE80: addiu       $a2, $a2, 0x4C
        ctx->r6 = ADD32(ctx->r6, 0X4C);
            goto L_8001BE34;
    }
    // 0x8001BE80: addiu       $a2, $a2, 0x4C
    ctx->r6 = ADD32(ctx->r6, 0X4C);
    // 0x8001BE84: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8001BE88: addiu       $a1, $a1, -0x4C90
    ctx->r5 = ADD32(ctx->r5, -0X4C90);
    // 0x8001BE8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001BE90: sw          $a1, -0x4C98($at)
    MEM_W(-0X4C98, ctx->r1) = ctx->r5;
    // 0x8001BE94: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8001BE98: addiu       $t7, $t7, -0x4C44
    ctx->r15 = ADD32(ctx->r15, -0X4C44);
    // 0x8001BE9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8001BEA0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8001BEA4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8001BEA8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8001BEAC: sw          $t7, -0x4C94($at)
    MEM_W(-0X4C94, ctx->r1) = ctx->r15;
    // 0x8001BEB0: addiu       $v1, $v1, -0x44
    ctx->r3 = ADD32(ctx->r3, -0X44);
    // 0x8001BEB4: addiu       $v0, $v0, -0x4BAC
    ctx->r2 = ADD32(ctx->r2, -0X4BAC);
    // 0x8001BEB8: addiu       $a2, $a2, -0x4BF8
    ctx->r6 = ADD32(ctx->r6, -0X4BF8);
L_8001BEBC:
    // 0x8001BEBC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8001BEC0: addiu       $v0, $v0, 0x4C
    ctx->r2 = ADD32(ctx->r2, 0X4C);
    // 0x8001BEC4: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8001BEC8: bne         $at, $zero, L_8001BEBC
    if (ctx->r1 != 0) {
        // 0x8001BECC: addiu       $a2, $a2, 0x4C
        ctx->r6 = ADD32(ctx->r6, 0X4C);
            goto L_8001BEBC;
    }
    // 0x8001BECC: addiu       $a2, $a2, 0x4C
    ctx->r6 = ADD32(ctx->r6, 0X4C);
    // 0x8001BED0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8001BED4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8001BED8: addiu       $t8, $t8, -0x4BF8
    ctx->r24 = ADD32(ctx->r24, -0X4BF8);
    // 0x8001BEDC: addiu       $a2, $a2, -0x5B40
    ctx->r6 = ADD32(ctx->r6, -0X5B40);
    // 0x8001BEE0: sw          $zero, 0x4BB4($a1)
    MEM_W(0X4BB4, ctx->r5) = 0;
    // 0x8001BEE4: sw          $t8, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->r24;
    // 0x8001BEE8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8001BEEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BEF0: sw          $a2, -0x59C0($at)
    MEM_W(-0X59C0, ctx->r1) = ctx->r6;
    // 0x8001BEF4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001BEF8: addiu       $t9, $t9, -0x5B34
    ctx->r25 = ADD32(ctx->r25, -0X5B34);
    // 0x8001BEFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BF00: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001BF04: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001BF08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001BF0C: sw          $t9, -0x59BC($at)
    MEM_W(-0X59BC, ctx->r1) = ctx->r25;
    // 0x8001BF10: addiu       $v0, $v0, -0x5B1C
    ctx->r2 = ADD32(ctx->r2, -0X5B1C);
    // 0x8001BF14: addiu       $v1, $v1, -0x5B28
    ctx->r3 = ADD32(ctx->r3, -0X5B28);
    // 0x8001BF18: addiu       $a1, $a1, -0x59B4
    ctx->r5 = ADD32(ctx->r5, -0X59B4);
L_8001BF1C:
    // 0x8001BF1C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8001BF20: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8001BF24: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8001BF28: bne         $at, $zero, L_8001BF1C
    if (ctx->r1 != 0) {
        // 0x8001BF2C: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8001BF1C;
    }
    // 0x8001BF2C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8001BF30: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8001BF34: addiu       $t3, $t3, -0x5B28
    ctx->r11 = ADD32(ctx->r11, -0X5B28);
    // 0x8001BF38: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8001BF3C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8001BF40: sw          $zero, 0x174($a2)
    MEM_W(0X174, ctx->r6) = 0;
    // 0x8001BF44: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x8001BF48: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8001BF4C: addiu       $v1, $v1, -0x4C98
    ctx->r3 = ADD32(ctx->r3, -0X4C98);
    // 0x8001BF50: addiu       $v0, $v0, -0x5598
    ctx->r2 = ADD32(ctx->r2, -0X5598);
L_8001BF54:
    // 0x8001BF54: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8001BF58: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8001BF5C: sw          $a0, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r4;
    // 0x8001BF60: sw          $a0, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r4;
    // 0x8001BF64: bne         $at, $zero, L_8001BF54
    if (ctx->r1 != 0) {
        // 0x8001BF68: sw          $zero, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = 0;
            goto L_8001BF54;
    }
    // 0x8001BF68: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x8001BF6C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8001BF70: addiu       $t1, $t1, -0x5598
    ctx->r9 = ADD32(ctx->r9, -0X5598);
    // 0x8001BF74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BF78: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8001BF7C: sw          $t1, -0x5B5C($at)
    MEM_W(-0X5B5C, ctx->r1) = ctx->r9;
    // 0x8001BF80: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8001BF84: addiu       $t2, $t2, -0x5B54
    ctx->r10 = ADD32(ctx->r10, -0X5B54);
    // 0x8001BF88: addiu       $t4, $t4, -0x5580
    ctx->r12 = ADD32(ctx->r12, -0X5580);
    // 0x8001BF8C: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8001BF90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BF94: sw          $t4, -0x5B58($at)
    MEM_W(-0X5B58, ctx->r1) = ctx->r12;
    // 0x8001BF98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BF9C: sw          $zero, -0x5B4C($at)
    MEM_W(-0X5B4C, ctx->r1) = 0;
    // 0x8001BFA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8001BFA4: addiu       $a2, $t6, -0x5568
    ctx->r6 = ADD32(ctx->r14, -0X5568);
    // 0x8001BFA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BFAC: sw          $a2, -0x5B60($at)
    MEM_W(-0X5B60, ctx->r1) = ctx->r6;
    // 0x8001BFB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001BFB4: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x8001BFB8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8001BFBC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8001BFC0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8001BFC4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8001BFC8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8001BFCC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8001BFD0: sw          $t7, -0x5B48($at)
    MEM_W(-0X5B48, ctx->r1) = ctx->r15;
    // 0x8001BFD4: addiu       $t0, $t0, -0x4C50
    ctx->r8 = ADD32(ctx->r8, -0X4C50);
    // 0x8001BFD8: addiu       $a1, $a1, -0x54F0
    ctx->r5 = ADD32(ctx->r5, -0X54F0);
    // 0x8001BFDC: addiu       $a3, $a3, -0x5508
    ctx->r7 = ADD32(ctx->r7, -0X5508);
    // 0x8001BFE0: addiu       $a0, $a0, -0x5520
    ctx->r4 = ADD32(ctx->r4, -0X5520);
    // 0x8001BFE4: addiu       $v1, $v1, -0x5538
    ctx->r3 = ADD32(ctx->r3, -0X5538);
    // 0x8001BFE8: addiu       $v0, $v0, -0x5550
    ctx->r2 = ADD32(ctx->r2, -0X5550);
L_8001BFEC:
    // 0x8001BFEC: sw          $a1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r5;
    // 0x8001BFF0: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x8001BFF4: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x8001BFF8: sw          $v0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r2;
    // 0x8001BFFC: sw          $a3, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r7;
    // 0x8001C000: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    // 0x8001C004: sw          $a0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r4;
    // 0x8001C008: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8001C00C: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8001C010: addiu       $a2, $a2, 0x60
    ctx->r6 = ADD32(ctx->r6, 0X60);
    // 0x8001C014: addiu       $v1, $v1, 0x60
    ctx->r3 = ADD32(ctx->r3, 0X60);
    // 0x8001C018: addiu       $a0, $a0, 0x60
    ctx->r4 = ADD32(ctx->r4, 0X60);
    // 0x8001C01C: addiu       $a3, $a3, 0x60
    ctx->r7 = ADD32(ctx->r7, 0X60);
    // 0x8001C020: bne         $a1, $t0, L_8001BFEC
    if (ctx->r5 != ctx->r8) {
        // 0x8001C024: addiu       $v0, $v0, 0x60
        ctx->r2 = ADD32(ctx->r2, 0X60);
            goto L_8001BFEC;
    }
    // 0x8001C024: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x8001C028: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8001C02C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8001C030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C034: addiu       $t9, $t9, -0x5550
    ctx->r25 = ADD32(ctx->r25, -0X5550);
    // 0x8001C038: addiu       $t3, $t3, -0x4CC8
    ctx->r11 = ADD32(ctx->r11, -0X4CC8);
    // 0x8001C03C: sw          $zero, 0x8EC($t1)
    MEM_W(0X8EC, ctx->r9) = 0;
    // 0x8001C040: sw          $zero, 0x30($t1)
    MEM_W(0X30, ctx->r9) = 0;
    // 0x8001C044: sw          $t9, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->r25;
    // 0x8001C048: sw          $t3, 0x8E8($t1)
    MEM_W(0X8E8, ctx->r9) = ctx->r11;
    // 0x8001C04C: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x8001C050: sw          $zero, 0x18($t1)
    MEM_W(0X18, ctx->r9) = 0;
    // 0x8001C054: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8001C058: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x8001C05C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001C060: sw          $zero, -0x5B50($at)
    MEM_W(-0X5B50, ctx->r1) = 0;
    // 0x8001C064: jr          $ra
    // 0x8001C068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001C068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8001C06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C06C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C070: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8001C074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C078: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8001C07C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001C080: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_8001C084:
    // 0x8001C084: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x8001C088: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001C08C: bne         $a0, $t6, L_8001C0A0
    if (ctx->r4 != ctx->r14) {
        // 0x8001C090: nop
    
            goto L_8001C0A0;
    }
    // 0x8001C090: nop

    // 0x8001C094: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
    // 0x8001C098: b           L_8001C0B4
    // 0x8001C09C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
        goto L_8001C0B4;
    // 0x8001C09C: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
L_8001C0A0:
    // 0x8001C0A0: bne         $v1, $a1, L_8001C084
    if (ctx->r3 != ctx->r5) {
        // 0x8001C0A4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8001C084;
    }
    // 0x8001C0A4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8001C0A8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001C0AC: jal         0x80000FBC
    // 0x8001C0B0: addiu       $a0, $a0, 0x528C
    ctx->r4 = ADD32(ctx->r4, 0X528C);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001C0B0: addiu       $a0, $a0, 0x528C
    ctx->r4 = ADD32(ctx->r4, 0X528C);
    after_0:
L_8001C0B4:
    // 0x8001C0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C0BC: jr          $ra
    // 0x8001C0C0: nop

    return;
    // 0x8001C0C0: nop

;}
RECOMP_FUNC void func_8001C0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C0C4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8001C0C8: lw          $t6, -0x4C98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C98);
    // 0x8001C0CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C0D4: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8001C0D8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001C0DC: beq         $v1, $zero, L_8001C10C
    if (ctx->r3 == 0) {
        // 0x8001C0E0: nop
    
            goto L_8001C10C;
    }
    // 0x8001C0E0: nop

L_8001C0E4:
    // 0x8001C0E4: lw          $t7, 0x48($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X48);
    // 0x8001C0E8: nop

    // 0x8001C0EC: bne         $a1, $t7, L_8001C0FC
    if (ctx->r5 != ctx->r15) {
        // 0x8001C0F0: nop
    
            goto L_8001C0FC;
    }
    // 0x8001C0F0: nop

    // 0x8001C0F4: b           L_8001C118
    // 0x8001C0F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001C118;
    // 0x8001C0F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001C0FC:
    // 0x8001C0FC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8001C100: nop

    // 0x8001C104: bne         $v1, $zero, L_8001C0E4
    if (ctx->r3 != 0) {
        // 0x8001C108: nop
    
            goto L_8001C0E4;
    }
    // 0x8001C108: nop

L_8001C10C:
    // 0x8001C10C: jal         0x80000FBC
    // 0x8001C110: addiu       $a0, $a0, 0x5200
    ctx->r4 = ADD32(ctx->r4, 0X5200);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001C110: addiu       $a0, $a0, 0x5200
    ctx->r4 = ADD32(ctx->r4, 0X5200);
    after_0:
    // 0x8001C114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C118:
    // 0x8001C118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C120: jr          $ra
    // 0x8001C124: nop

    return;
    // 0x8001C124: nop

    // 0x8001C128: jr          $ra
    // 0x8001C12C: nop

    return;
    // 0x8001C12C: nop

;}
RECOMP_FUNC void func_8001C130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C130: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001C134: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001C138: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8001C13C: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8001C140: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001C144: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8001C148: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001C14C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001C150: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001C154: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001C158: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001C15C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001C160: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001C164: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001C168: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001C16C: jal         0x8001C0C4
    // 0x8001C170: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_8001C0C4(rdram, ctx);
        goto after_0;
    // 0x8001C170: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001C174: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8001C178: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8001C17C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x8001C180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001C184: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001C188: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
L_8001C18C:
    // 0x8001C18C: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x8001C190: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8001C194: bne         $t0, $t6, L_8001C1BC
    if (ctx->r8 != ctx->r14) {
        // 0x8001C198: nop
    
            goto L_8001C1BC;
    }
    // 0x8001C198: nop

    // 0x8001C19C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x8001C1A0: nop

    // 0x8001C1A4: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8001C1A8: nop

    // 0x8001C1AC: bne         $a2, $t8, L_8001C1BC
    if (ctx->r6 != ctx->r24) {
        // 0x8001C1B0: nop
    
            goto L_8001C1BC;
    }
    // 0x8001C1B0: nop

    // 0x8001C1B4: b           L_8001C1F4
    // 0x8001C1B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C1F4;
    // 0x8001C1B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001C1BC:
    // 0x8001C1BC: bne         $a0, $a1, L_8001C18C
    if (ctx->r4 != ctx->r5) {
        // 0x8001C1C0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8001C18C;
    }
    // 0x8001C1C0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001C1C4: sw          $a2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r6;
    // 0x8001C1C8: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x8001C1CC: jal         0x8001B9CC
    // 0x8001C1D0: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    func_8001B9CC(rdram, ctx);
        goto after_1;
    // 0x8001C1D0: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    after_1:
    // 0x8001C1D4: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x8001C1D8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8001C1DC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8001C1E0: jal         0x8001C06C
    // 0x8001C1E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8001C06C(rdram, ctx);
        goto after_2;
    // 0x8001C1E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_2:
    // 0x8001C1E8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8001C1EC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8001C1F0: nop

L_8001C1F4:
    // 0x8001C1F4: bne         $v0, $zero, L_8001C204
    if (ctx->r2 != 0) {
        // 0x8001C1F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001C204;
    }
    // 0x8001C1F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001C1FC: b           L_8001C214
    // 0x8001C200: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8001C214;
    // 0x8001C200: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8001C204:
    // 0x8001C204: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8001C208: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x8001C20C: jal         0x80018CD4
    // 0x8001C210: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_80018CD4(rdram, ctx);
        goto after_3;
    // 0x8001C210: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_3:
L_8001C214:
    // 0x8001C214: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C218: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C21C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C220: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C224: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001C228: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001C22C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C230: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001C234: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001C238: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001C23C: jr          $ra
    // 0x8001C240: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8001C240: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001C244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C244: jr          $ra
    // 0x8001C248: nop

    return;
    // 0x8001C248: nop

;}
RECOMP_FUNC void func_8001C254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C254: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001C258: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C25C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001C260: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001C264: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001C268: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001C26C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001C270: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001C274: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001C278: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001C27C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001C280: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001C284: bne         $a1, $at, L_8001C294
    if (ctx->r5 != ctx->r1) {
        // 0x8001C288: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8001C294;
    }
    // 0x8001C288: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001C28C: b           L_8001C394
    // 0x8001C290: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8001C394;
    // 0x8001C290: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8001C294:
    // 0x8001C294: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001C298: lw          $t6, -0x59C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X59C0);
    // 0x8001C29C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C2A0: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8001C2A4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001C2A8: beq         $v1, $zero, L_8001C2F0
    if (ctx->r3 == 0) {
        // 0x8001C2AC: nop
    
            goto L_8001C2F0;
    }
    // 0x8001C2AC: nop

L_8001C2B0:
    // 0x8001C2B0: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8001C2B4: nop

    // 0x8001C2B8: bne         $a2, $t7, L_8001C2E0
    if (ctx->r6 != ctx->r15) {
        // 0x8001C2BC: nop
    
            goto L_8001C2E0;
    }
    // 0x8001C2BC: nop

    // 0x8001C2C0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8001C2C4: nop

    // 0x8001C2C8: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8001C2CC: nop

    // 0x8001C2D0: bne         $a1, $t9, L_8001C2E0
    if (ctx->r5 != ctx->r25) {
        // 0x8001C2D4: nop
    
            goto L_8001C2E0;
    }
    // 0x8001C2D4: nop

    // 0x8001C2D8: b           L_8001C2F0
    // 0x8001C2DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001C2F0;
    // 0x8001C2DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001C2E0:
    // 0x8001C2E0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8001C2E4: nop

    // 0x8001C2E8: bne         $v1, $zero, L_8001C2B0
    if (ctx->r3 != 0) {
        // 0x8001C2EC: nop
    
            goto L_8001C2B0;
    }
    // 0x8001C2EC: nop

L_8001C2F0:
    // 0x8001C2F0: bne         $v0, $zero, L_8001C384
    if (ctx->r2 != 0) {
        // 0x8001C2F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001C384;
    }
    // 0x8001C2F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001C2F8: lw          $t6, -0x59BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X59BC);
    // 0x8001C2FC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001C300: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8001C304: addiu       $a0, $a0, 0x5268
    ctx->r4 = ADD32(ctx->r4, 0X5268);
    // 0x8001C308: bne         $v1, $zero, L_8001C330
    if (ctx->r3 != 0) {
        // 0x8001C30C: nop
    
            goto L_8001C330;
    }
    // 0x8001C30C: nop

    // 0x8001C310: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x8001C314: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8001C318: jal         0x80000FBC
    // 0x8001C31C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001C31C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    after_0:
    // 0x8001C320: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8001C324: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x8001C328: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8001C32C: nop

L_8001C330:
    // 0x8001C330: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x8001C334: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8001C338: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x8001C33C: jal         0x8001B9CC
    // 0x8001C340: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    func_8001B9CC(rdram, ctx);
        goto after_1;
    // 0x8001C340: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    after_1:
    // 0x8001C344: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8001C348: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8001C34C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001C350: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8001C354: lw          $t8, -0x59BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X59BC);
    // 0x8001C358: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001C35C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001C360: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8001C364: lw          $t9, -0x59C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59C0);
    // 0x8001C368: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001C36C: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8001C370: nop

    // 0x8001C374: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001C378: lw          $t7, -0x59C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X59C0);
    // 0x8001C37C: nop

    // 0x8001C380: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
L_8001C384:
    // 0x8001C384: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x8001C388: nop

    // 0x8001C38C: lw          $a1, 0xC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC);
    // 0x8001C390: nop

L_8001C394:
    // 0x8001C394: jal         0x8001952C
    // 0x8001C398: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8001952C(rdram, ctx);
        goto after_2;
    // 0x8001C398: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x8001C39C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C3A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C3A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C3A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C3AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001C3B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001C3B4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C3B8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001C3BC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001C3C0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001C3C4: jr          $ra
    // 0x8001C3C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8001C3C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8001C3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C3CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C3D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C3D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001C3D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8001C3DC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8001C3E0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_8001C3E4:
    // 0x8001C3E4: lw          $t6, 0x24($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X24);
    // 0x8001C3E8: nop

    // 0x8001C3EC: bne         $t0, $t6, L_8001C408
    if (ctx->r8 != ctx->r14) {
        // 0x8001C3F0: nop
    
            goto L_8001C408;
    }
    // 0x8001C3F0: nop

    // 0x8001C3F4: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8001C3F8: jal         0x8001B6A0
    // 0x8001C3FC: nop

    func_8001B6A0(rdram, ctx);
        goto after_0;
    // 0x8001C3FC: nop

    after_0:
    // 0x8001C400: sw          $t1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r9;
    // 0x8001C404: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_8001C408:
    // 0x8001C408: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8001C40C: bne         $a3, $t2, L_8001C3E4
    if (ctx->r7 != ctx->r10) {
        // 0x8001C410: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8001C3E4;
    }
    // 0x8001C410: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8001C414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C41C: jr          $ra
    // 0x8001C420: nop

    return;
    // 0x8001C420: nop

;}
RECOMP_FUNC void func_8001C424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C42C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001C430: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C434: jal         0x8001C0C4
    // 0x8001C438: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_8001C0C4(rdram, ctx);
        goto after_0;
    // 0x8001C438: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_0:
    // 0x8001C43C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001C444: jal         0x8001C3CC
    // 0x8001C448: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    func_8001C3CC(rdram, ctx);
        goto after_1;
    // 0x8001C448: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    after_1:
    // 0x8001C44C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001C450: jal         0x80019774
    // 0x8001C454: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_80019774(rdram, ctx);
        goto after_2;
    // 0x8001C454: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_2:
    // 0x8001C458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C460: jr          $ra
    // 0x8001C464: nop

    return;
    // 0x8001C464: nop

;}
RECOMP_FUNC void func_8001C468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C468: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8001C46C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001C470: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001C474: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001C478: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001C47C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001C480: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001C484: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001C488: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001C48C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001C490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001C494: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8001C498: jal         0x8001B9CC
    // 0x8001C49C: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001C49C: sw          $a1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r5;
    after_0:
    // 0x8001C4A0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8001C4A4: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x8001C4A8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8001C4AC: jal         0x8001A04C
    // 0x8001C4B0: nop

    func_8001A04C(rdram, ctx);
        goto after_1;
    // 0x8001C4B0: nop

    after_1:
    // 0x8001C4B4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8001C4B8: jal         0x8001C0C4
    // 0x8001C4BC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8001C0C4(rdram, ctx);
        goto after_2;
    // 0x8001C4BC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_2:
    // 0x8001C4C0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8001C4C4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8001C4C8: jal         0x8001C06C
    // 0x8001C4CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001C06C(rdram, ctx);
        goto after_3;
    // 0x8001C4CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8001C4D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001C4D4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8001C4D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C4DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C4E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C4E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001C4E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001C4EC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C4F0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001C4F4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001C4F8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001C4FC: jr          $ra
    // 0x8001C500: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8001C500: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8001C504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C504: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001C508: lw          $t6, -0x59C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X59C0);
    // 0x8001C50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C510: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8001C514: nop

    // 0x8001C518: beq         $v1, $zero, L_8001C548
    if (ctx->r3 == 0) {
        // 0x8001C51C: nop
    
            goto L_8001C548;
    }
    // 0x8001C51C: nop

L_8001C520:
    // 0x8001C520: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8001C524: nop

    // 0x8001C528: bne         $a0, $t7, L_8001C538
    if (ctx->r4 != ctx->r15) {
        // 0x8001C52C: nop
    
            goto L_8001C538;
    }
    // 0x8001C52C: nop

    // 0x8001C530: jr          $ra
    // 0x8001C534: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001C534: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001C538:
    // 0x8001C538: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8001C53C: nop

    // 0x8001C540: bne         $v1, $zero, L_8001C520
    if (ctx->r3 != 0) {
        // 0x8001C544: nop
    
            goto L_8001C520;
    }
    // 0x8001C544: nop

L_8001C548:
    // 0x8001C548: jr          $ra
    // 0x8001C54C: nop

    return;
    // 0x8001C54C: nop

    // 0x8001C550: jr          $ra
    // 0x8001C554: nop

    return;
    // 0x8001C554: nop

    // 0x8001C558: jr          $ra
    // 0x8001C55C: nop

    return;
    // 0x8001C55C: nop

    // 0x8001C560: jr          $ra
    // 0x8001C564: nop

    return;
    // 0x8001C564: nop

;}
RECOMP_FUNC void func_8001C568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C568: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001C56C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C570: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001C574: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8001C578: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8001C57C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001C580: jal         0x8001C0C4
    // 0x8001C584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8001C0C4(rdram, ctx);
        goto after_0;
    // 0x8001C584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8001C588: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x8001C58C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8001C590: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8001C594: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x8001C598: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_8001C59C:
    // 0x8001C59C: lw          $t0, 0x24($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X24);
    // 0x8001C5A0: nop

    // 0x8001C5A4: beq         $s0, $t0, L_8001C5B4
    if (ctx->r16 == ctx->r8) {
        // 0x8001C5A8: nop
    
            goto L_8001C5B4;
    }
    // 0x8001C5A8: nop

    // 0x8001C5AC: jal         0x8001C3CC
    // 0x8001C5B0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8001C3CC(rdram, ctx);
        goto after_1;
    // 0x8001C5B0: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_1:
L_8001C5B4:
    // 0x8001C5B4: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x8001C5B8: bne         $t3, $s1, L_8001C59C
    if (ctx->r11 != ctx->r17) {
        // 0x8001C5BC: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_8001C59C;
    }
    // 0x8001C5BC: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x8001C5C0: lw          $a0, 0x44($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X44);
    // 0x8001C5C4: jal         0x8001B6A0
    // 0x8001C5C8: nop

    func_8001B6A0(rdram, ctx);
        goto after_2;
    // 0x8001C5C8: nop

    after_2:
    // 0x8001C5CC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8001C5D0: lw          $v1, -0x4C98($a1)
    ctx->r3 = MEM_W(ctx->r5, -0X4C98);
    // 0x8001C5D4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8001C5D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8001C5DC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8001C5E0: beq         $v0, $t5, L_8001C5FC
    if (ctx->r2 == ctx->r13) {
        // 0x8001C5E4: nop
    
            goto L_8001C5FC;
    }
    // 0x8001C5E4: nop

L_8001C5E8:
    // 0x8001C5E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001C5EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8001C5F0: nop

    // 0x8001C5F4: bne         $v0, $a0, L_8001C5E8
    if (ctx->r2 != ctx->r4) {
        // 0x8001C5F8: nop
    
            goto L_8001C5E8;
    }
    // 0x8001C5F8: nop

L_8001C5FC:
    // 0x8001C5FC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001C600: addiu       $a1, $a1, -0x4C94
    ctx->r5 = ADD32(ctx->r5, -0X4C94);
    // 0x8001C604: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8001C608: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x8001C60C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8001C610: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001C614: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8001C618: nop

    // 0x8001C61C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8001C620: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001C624: jal         0x800195C4
    // 0x8001C628: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    func_800195C4(rdram, ctx);
        goto after_3;
    // 0x8001C628: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    after_3:
    // 0x8001C62C: jal         0x8001C504
    // 0x8001C630: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001C504(rdram, ctx);
        goto after_4;
    // 0x8001C630: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x8001C634: beq         $v0, $zero, L_8001C6BC
    if (ctx->r2 == 0) {
        // 0x8001C638: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001C6BC;
    }
    // 0x8001C638: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001C63C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8001C640: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8001C644: addiu       $t0, $t0, -0x59BC
    ctx->r8 = ADD32(ctx->r8, -0X59BC);
    // 0x8001C648: addiu       $t1, $t1, -0x59C0
    ctx->r9 = ADD32(ctx->r9, -0X59C0);
L_8001C64C:
    // 0x8001C64C: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x8001C650: nop

    // 0x8001C654: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x8001C658: nop

    // 0x8001C65C: beq         $a2, $v0, L_8001C678
    if (ctx->r6 == ctx->r2) {
        // 0x8001C660: nop
    
            goto L_8001C678;
    }
    // 0x8001C660: nop

L_8001C664:
    // 0x8001C664: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8001C668: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x8001C66C: nop

    // 0x8001C670: bne         $a2, $v1, L_8001C664
    if (ctx->r6 != ctx->r3) {
        // 0x8001C674: nop
    
            goto L_8001C664;
    }
    // 0x8001C674: nop

L_8001C678:
    // 0x8001C678: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8001C67C: jal         0x8001B6A0
    // 0x8001C680: nop

    func_8001B6A0(rdram, ctx);
        goto after_5;
    // 0x8001C680: nop

    after_5:
    // 0x8001C684: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8001C688: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8001C68C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8001C690: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x8001C694: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x8001C698: nop

    // 0x8001C69C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8001C6A0: nop

    // 0x8001C6A4: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8001C6A8: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8001C6AC: jal         0x8001C504
    // 0x8001C6B0: sw          $a2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r6;
    func_8001C504(rdram, ctx);
        goto after_6;
    // 0x8001C6B0: sw          $a2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r6;
    after_6:
    // 0x8001C6B4: bne         $v0, $zero, L_8001C64C
    if (ctx->r2 != 0) {
        // 0x8001C6B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001C64C;
    }
    // 0x8001C6B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8001C6BC:
    // 0x8001C6BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C6C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001C6C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C6C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001C6CC: jr          $ra
    // 0x8001C6D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001C6D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001C6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C6D4: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8001C6D8: addiu       $s2, $s2, -0x4C94
    ctx->r18 = ADD32(ctx->r18, -0X4C94);
    // 0x8001C6DC: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8001C6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C6E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C6E8: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x8001C6EC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001C6F0: bne         $s0, $zero, L_8001C700
    if (ctx->r16 != 0) {
        // 0x8001C6F4: nop
    
            goto L_8001C700;
    }
    // 0x8001C6F4: nop

    // 0x8001C6F8: jal         0x80000FBC
    // 0x8001C6FC: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001C6FC: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    after_0:
L_8001C700:
    // 0x8001C700: sw          $s1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r17;
    // 0x8001C704: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8001C708: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001C70C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8001C710: addiu       $v1, $v1, -0x4C98
    ctx->r3 = ADD32(ctx->r3, -0X4C98);
    // 0x8001C714: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8001C718: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8001C71C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8001C720: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8001C724: nop

    // 0x8001C728: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8001C72C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001C730: nop

    // 0x8001C734: sw          $s0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r16;
    // 0x8001C738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C740: jr          $ra
    // 0x8001C744: nop

    return;
    // 0x8001C744: nop

    // 0x8001C748: jr          $ra
    // 0x8001C74C: nop

    return;
    // 0x8001C74C: nop

;}
RECOMP_FUNC void func_8001C750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C750: addiu       $sp, $sp, -0x1B8
    ctx->r29 = ADD32(ctx->r29, -0X1B8);
    // 0x8001C754: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001C758: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8001C75C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8001C760: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8001C764: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8001C768: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8001C76C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8001C770: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8001C774: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8001C778: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8001C77C: sw          $a0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r4;
    // 0x8001C780: sw          $a1, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r5;
    // 0x8001C784: sw          $a2, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r6;
    // 0x8001C788: sw          $a3, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r7;
    // 0x8001C78C: beq         $a0, $zero, L_8001D084
    if (ctx->r4 == 0) {
        // 0x8001C790: addiu       $s0, $sp, 0x1BC
        ctx->r16 = ADD32(ctx->r29, 0X1BC);
            goto L_8001D084;
    }
    // 0x8001C790: addiu       $s0, $sp, 0x1BC
    ctx->r16 = ADD32(ctx->r29, 0X1BC);
    // 0x8001C794: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
L_8001C798:
    // 0x8001C798: lw          $t7, 0x1B8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001C79C: nop

    // 0x8001C7A0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001C7A4: sltiu       $at, $t8, 0x28
    ctx->r1 = ctx->r24 < 0X28 ? 1 : 0;
    // 0x8001C7A8: beq         $at, $zero, L_8001D05C
    if (ctx->r1 == 0) {
        // 0x8001C7AC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8001D05C;
    }
    // 0x8001C7AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001C7B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001C7B4: addu        $at, $at, $t8
    gpr jr_addend_8001C7C0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001C7B8: lw          $t8, 0x52E8($at)
    ctx->r24 = ADD32(ctx->r1, 0X52E8);
    // 0x8001C7BC: nop

    // 0x8001C7C0: jr          $t8
    // 0x8001C7C4: nop

    switch (jr_addend_8001C7C0 >> 2) {
        case 0: goto L_8001C7C8; break;
        case 1: goto L_8001C80C; break;
        case 2: goto L_8001C828; break;
        case 3: goto L_8001C858; break;
        case 4: goto L_8001C8F0; break;
        case 5: goto L_8001C90C; break;
        case 6: goto L_8001C948; break;
        case 7: goto L_8001C998; break;
        case 8: goto L_8001C9E8; break;
        case 9: goto L_8001CA10; break;
        case 10: goto L_8001CA38; break;
        case 11: goto L_8001CA6C; break;
        case 12: goto L_8001CA94; break;
        case 13: goto L_8001CABC; break;
        case 14: goto L_8001CABC; break;
        case 15: goto L_8001CABC; break;
        case 16: goto L_8001CC08; break;
        case 17: goto L_8001CC08; break;
        case 18: goto L_8001CC08; break;
        case 19: goto L_8001CC70; break;
        case 20: goto L_8001CC70; break;
        case 21: goto L_8001CC70; break;
        case 22: goto L_8001C9C0; break;
        case 23: goto L_8001CCD8; break;
        case 24: goto L_8001CD14; break;
        case 25: goto L_8001CD50; break;
        case 26: goto L_8001CDD0; break;
        case 27: goto L_8001CE50; break;
        case 28: goto L_8001D05C; break;
        case 29: goto L_8001CE84; break;
        case 30: goto L_8001CEB0; break;
        case 31: goto L_8001CECC; break;
        case 32: goto L_8001CECC; break;
        case 33: goto L_8001CF14; break;
        case 34: goto L_8001CF3C; break;
        case 35: goto L_8001CF64; break;
        case 36: goto L_8001CF8C; break;
        case 37: goto L_8001CFD8; break;
        case 38: goto L_8001D00C; break;
        case 39: goto L_8001D034; break;
        default: switch_error(__func__, 0x8001C7C0, 0x800952E8);
    }
    // 0x8001C7C4: nop

L_8001C7C8:
    // 0x8001C7C8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001C7CC: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C7D0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8001C7D4: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001C7D8: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C7DC: sw          $t6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r14;
    // 0x8001C7E0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001C7E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001C7E8: sw          $s0, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r16;
    // 0x8001C7EC: jal         0x8001B9CC
    // 0x8001C7F0: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001C7F0: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    after_0:
    // 0x8001C7F4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8001C7F8: lw          $t9, 0x1B0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B0);
    // 0x8001C7FC: lw          $s0, 0x1B4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1B4);
    // 0x8001C800: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x8001C804: b           L_8001D06C
    // 0x8001C808: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_8001D06C;
    // 0x8001C808: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_8001C80C:
    // 0x8001C80C: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001C810: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001C814: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001C818: jal         0x8001B758
    // 0x8001C81C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001B758(rdram, ctx);
        goto after_1;
    // 0x8001C81C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x8001C820: b           L_8001D070
    // 0x8001C824: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001C824: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001C828:
    // 0x8001C828: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001C82C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C830: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001C834: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001C838: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C83C: sw          $t8, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r24;
    // 0x8001C840: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C844: jal         0x8001A160
    // 0x8001C848: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001A160(rdram, ctx);
        goto after_2;
    // 0x8001C848: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x8001C84C: lw          $t6, 0x1A4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A4);
    // 0x8001C850: b           L_8001D06C
    // 0x8001C854: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
        goto L_8001D06C;
    // 0x8001C854: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
L_8001C858:
    // 0x8001C858: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001C85C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C860: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001C864: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001C868: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C86C: sw          $t8, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r24;
    // 0x8001C870: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001C874: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001C878: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001C87C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001C880: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001C884: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001C888: sw          $t7, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r15;
    // 0x8001C88C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8001C890: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001C894: sw          $s0, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r16;
    // 0x8001C898: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8001C89C: jal         0x8001B9CC
    // 0x8001C8A0: sw          $t9, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r25;
    func_8001B9CC(rdram, ctx);
        goto after_3;
    // 0x8001C8A0: sw          $t9, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r25;
    after_3:
    // 0x8001C8A4: lw          $s0, 0x1B4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1B4);
    // 0x8001C8A8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8001C8AC: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x8001C8B0: lw          $a0, 0x19C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X19C);
    // 0x8001C8B4: lw          $a2, 0x194($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X194);
    // 0x8001C8B8: lw          $a3, 0x190($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X190);
    // 0x8001C8BC: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x8001C8C0: jal         0x80019890
    // 0x8001C8C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80019890(rdram, ctx);
        goto after_4;
    // 0x8001C8C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_4:
    // 0x8001C8C8: lw          $t6, 0x19C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X19C);
    // 0x8001C8CC: nop

    // 0x8001C8D0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8001C8D4: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8001C8D8: jal         0x8001C6D4
    // 0x8001C8DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_8001C6D4(rdram, ctx);
        goto after_5;
    // 0x8001C8DC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_5:
    // 0x8001C8E0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8001C8E4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x8001C8E8: b           L_8001D06C
    // 0x8001C8EC: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
        goto L_8001D06C;
    // 0x8001C8EC: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
L_8001C8F0:
    // 0x8001C8F0: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001C8F4: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001C8F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C8FC: jal         0x8001C568
    // 0x8001C900: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x8001C900: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_6:
    // 0x8001C904: b           L_8001D070
    // 0x8001C908: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001C908: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001C90C:
    // 0x8001C90C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001C910: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C914: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8001C918: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001C91C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C920: sw          $t6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r14;
    // 0x8001C924: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C928: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001C92C: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001C930: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001C934: jal         0x8001C468
    // 0x8001C938: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x8001C938: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_7:
    // 0x8001C93C: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x8001C940: b           L_8001D06C
    // 0x8001C944: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
        goto L_8001D06C;
    // 0x8001C944: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
L_8001C948:
    // 0x8001C948: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001C94C: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001C950: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001C954: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001C958: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C95C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8001C960: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001C964: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    // 0x8001C968: jal         0x8001C0C4
    // 0x8001C96C: sw          $t4, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r12;
    func_8001C0C4(rdram, ctx);
        goto after_8;
    // 0x8001C96C: sw          $t4, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r12;
    after_8:
    // 0x8001C970: lw          $t4, 0x178($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X178);
    // 0x8001C974: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x8001C978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8001C97C: jal         0x8001C3CC
    // 0x8001C980: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    func_8001C3CC(rdram, ctx);
        goto after_9;
    // 0x8001C980: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    after_9:
    // 0x8001C984: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8001C988: jal         0x80019774
    // 0x8001C98C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_80019774(rdram, ctx);
        goto after_10;
    // 0x8001C98C: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_10:
    // 0x8001C990: b           L_8001D070
    // 0x8001C994: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001C994: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001C998:
    // 0x8001C998: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001C99C: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001C9A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C9A4: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001C9A8: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C9AC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001C9B0: jal         0x8001C254
    // 0x8001C9B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001C254(rdram, ctx);
        goto after_11;
    // 0x8001C9B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_11:
    // 0x8001C9B8: b           L_8001D070
    // 0x8001C9BC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001C9BC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001C9C0:
    // 0x8001C9C0: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001C9C4: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001C9C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C9CC: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001C9D0: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001C9D4: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8001C9D8: jal         0x800194C8
    // 0x8001C9DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_800194C8(rdram, ctx);
        goto after_12;
    // 0x8001C9DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_12:
    // 0x8001C9E0: b           L_8001D070
    // 0x8001C9E4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001C9E4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001C9E8:
    // 0x8001C9E8: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001C9EC: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001C9F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001C9F4: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001C9F8: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001C9FC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA00: jal         0x8001942C
    // 0x8001CA04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001942C(rdram, ctx);
        goto after_13;
    // 0x8001CA04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_13:
    // 0x8001CA08: b           L_8001D070
    // 0x8001CA0C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CA0C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CA10:
    // 0x8001CA10: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CA14: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CA18: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA1C: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CA20: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CA24: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA28: jal         0x80019390
    // 0x8001CA2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80019390(rdram, ctx);
        goto after_14;
    // 0x8001CA2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_14:
    // 0x8001CA30: b           L_8001D070
    // 0x8001CA34: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CA34: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CA38:
    // 0x8001CA38: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001CA3C: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CA40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA44: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CA48: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CA4C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA50: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CA54: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CA58: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA5C: jal         0x800192E8
    // 0x8001CA60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_800192E8(rdram, ctx);
        goto after_15;
    // 0x8001CA60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_15:
    // 0x8001CA64: b           L_8001D070
    // 0x8001CA68: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CA68: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CA6C:
    // 0x8001CA6C: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CA70: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CA74: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA78: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CA7C: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CA80: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CA84: jal         0x800191E8
    // 0x8001CA88: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_800191E8(rdram, ctx);
        goto after_16;
    // 0x8001CA88: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_16:
    // 0x8001CA8C: b           L_8001D070
    // 0x8001CA90: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CA90: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CA94:
    // 0x8001CA94: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001CA98: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CA9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CAA0: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CAA4: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CAA8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CAAC: jal         0x8001918C
    // 0x8001CAB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001918C(rdram, ctx);
        goto after_17;
    // 0x8001CAB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_17:
    // 0x8001CAB4: b           L_8001D070
    // 0x8001CAB8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CAB8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CABC:
    // 0x8001CABC: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CAC0: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CAC4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CAC8: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x8001CACC: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8001CAD0: beq         $t8, $zero, L_8001CAE4
    if (ctx->r24 == 0) {
        // 0x8001CAD4: andi        $t9, $s0, 0x2
        ctx->r25 = ctx->r16 & 0X2;
            goto L_8001CAE4;
    }
    // 0x8001CAD4: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x8001CAD8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CADC: b           L_8001CB0C
    // 0x8001CAE0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8001CB0C;
    // 0x8001CAE0: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8001CAE4:
    // 0x8001CAE4: beq         $t9, $zero, L_8001CAF8
    if (ctx->r25 == 0) {
        // 0x8001CAE8: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001CAF8;
    }
    // 0x8001CAE8: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001CAEC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8001CAF0: b           L_8001CB08
    // 0x8001CAF4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8001CB08;
    // 0x8001CAF4: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8001CAF8:
    // 0x8001CAF8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CAFC: and         $t6, $s0, $at
    ctx->r14 = ctx->r16 & ctx->r1;
    // 0x8001CB00: addiu       $s0, $t6, 0x8
    ctx->r16 = ADD32(ctx->r14, 0X8);
    // 0x8001CB04: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8001CB08:
    // 0x8001CB08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001CB0C:
    // 0x8001CB0C: lwc1        $f5, -0x8($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001CB10: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001CB14: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8001CB18: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8001CB1C: beq         $t7, $zero, L_8001CB30
    if (ctx->r15 == 0) {
        // 0x8001CB20: swc1        $f6, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
            goto L_8001CB30;
    }
    // 0x8001CB20: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    // 0x8001CB24: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CB28: b           L_8001CB5C
    // 0x8001CB2C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8001CB5C;
    // 0x8001CB2C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8001CB30:
    // 0x8001CB30: andi        $t8, $s0, 0x2
    ctx->r24 = ctx->r16 & 0X2;
    // 0x8001CB34: beq         $t8, $zero, L_8001CB48
    if (ctx->r24 == 0) {
        // 0x8001CB38: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001CB48;
    }
    // 0x8001CB38: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001CB3C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8001CB40: b           L_8001CB58
    // 0x8001CB44: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8001CB58;
    // 0x8001CB44: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8001CB48:
    // 0x8001CB48: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CB4C: and         $t9, $s0, $at
    ctx->r25 = ctx->r16 & ctx->r1;
    // 0x8001CB50: addiu       $s0, $t9, 0x8
    ctx->r16 = ADD32(ctx->r25, 0X8);
    // 0x8001CB54: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8001CB58:
    // 0x8001CB58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001CB5C:
    // 0x8001CB5C: lwc1        $f9, -0x8($v0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001CB60: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001CB64: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x8001CB68: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8001CB6C: beq         $t6, $zero, L_8001CB80
    if (ctx->r14 == 0) {
        // 0x8001CB70: swc1        $f10, 0x130($sp)
        MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
            goto L_8001CB80;
    }
    // 0x8001CB70: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    // 0x8001CB74: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CB78: b           L_8001CBAC
    // 0x8001CB7C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8001CBAC;
    // 0x8001CB7C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8001CB80:
    // 0x8001CB80: andi        $t7, $s0, 0x2
    ctx->r15 = ctx->r16 & 0X2;
    // 0x8001CB84: beq         $t7, $zero, L_8001CB98
    if (ctx->r15 == 0) {
        // 0x8001CB88: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001CB98;
    }
    // 0x8001CB88: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001CB8C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8001CB90: b           L_8001CBA8
    // 0x8001CB94: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8001CBA8;
    // 0x8001CB94: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8001CB98:
    // 0x8001CB98: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CB9C: and         $t8, $s0, $at
    ctx->r24 = ctx->r16 & ctx->r1;
    // 0x8001CBA0: addiu       $s0, $t8, 0x8
    ctx->r16 = ADD32(ctx->r24, 0X8);
    // 0x8001CBA4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8001CBA8:
    // 0x8001CBA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001CBAC:
    // 0x8001CBAC: lwc1        $f5, -0x8($v0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001CBB0: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001CBB4: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CBB8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8001CBBC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8001CBC0: bne         $t9, $at, L_8001CBD8
    if (ctx->r25 != ctx->r1) {
        // 0x8001CBC4: swc1        $f6, 0x134($sp)
        MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
            goto L_8001CBD8;
    }
    // 0x8001CBC4: swc1        $f6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
    // 0x8001CBC8: jal         0x80019164
    // 0x8001CBCC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    func_80019164(rdram, ctx);
        goto after_18;
    // 0x8001CBCC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    after_18:
    // 0x8001CBD0: b           L_8001D070
    // 0x8001CBD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CBD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CBD8:
    // 0x8001CBD8: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CBDC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8001CBE0: bne         $t6, $at, L_8001CBF8
    if (ctx->r14 != ctx->r1) {
        // 0x8001CBE4: nop
    
            goto L_8001CBF8;
    }
    // 0x8001CBE4: nop

    // 0x8001CBE8: jal         0x8001913C
    // 0x8001CBEC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    func_8001913C(rdram, ctx);
        goto after_19;
    // 0x8001CBEC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    after_19:
    // 0x8001CBF0: b           L_8001D070
    // 0x8001CBF4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CBF4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CBF8:
    // 0x8001CBF8: jal         0x80019114
    // 0x8001CBFC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    func_80019114(rdram, ctx);
        goto after_20;
    // 0x8001CBFC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    after_20:
    // 0x8001CC00: b           L_8001D070
    // 0x8001CC04: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CC04: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CC08:
    // 0x8001CC08: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CC0C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CC10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CC14: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CC18: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CC1C: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CC20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CC24: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8001CC28: bne         $t9, $at, L_8001CC40
    if (ctx->r25 != ctx->r1) {
        // 0x8001CC2C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8001CC40;
    }
    // 0x8001CC2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CC30: jal         0x80019164
    // 0x8001CC34: nop

    func_80019164(rdram, ctx);
        goto after_21;
    // 0x8001CC34: nop

    after_21:
    // 0x8001CC38: b           L_8001D070
    // 0x8001CC3C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CC3C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CC40:
    // 0x8001CC40: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CC44: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8001CC48: bne         $t6, $at, L_8001CC60
    if (ctx->r14 != ctx->r1) {
        // 0x8001CC4C: nop
    
            goto L_8001CC60;
    }
    // 0x8001CC4C: nop

    // 0x8001CC50: jal         0x8001913C
    // 0x8001CC54: nop

    func_8001913C(rdram, ctx);
        goto after_22;
    // 0x8001CC54: nop

    after_22:
    // 0x8001CC58: b           L_8001D070
    // 0x8001CC5C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CC5C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CC60:
    // 0x8001CC60: jal         0x80019114
    // 0x8001CC64: nop

    func_80019114(rdram, ctx);
        goto after_23;
    // 0x8001CC64: nop

    after_23:
    // 0x8001CC68: b           L_8001D070
    // 0x8001CC6C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CC6C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CC70:
    // 0x8001CC70: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CC74: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CC78: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CC7C: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CC80: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CC84: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CC88: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CC8C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8001CC90: bne         $t9, $at, L_8001CCA8
    if (ctx->r25 != ctx->r1) {
        // 0x8001CC94: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8001CCA8;
    }
    // 0x8001CC94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CC98: jal         0x800190F0
    // 0x8001CC9C: nop

    func_800190F0(rdram, ctx);
        goto after_24;
    // 0x8001CC9C: nop

    after_24:
    // 0x8001CCA0: b           L_8001D070
    // 0x8001CCA4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CCA4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CCA8:
    // 0x8001CCA8: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CCAC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8001CCB0: bne         $t6, $at, L_8001CCC8
    if (ctx->r14 != ctx->r1) {
        // 0x8001CCB4: nop
    
            goto L_8001CCC8;
    }
    // 0x8001CCB4: nop

    // 0x8001CCB8: jal         0x800190CC
    // 0x8001CCBC: nop

    func_800190CC(rdram, ctx);
        goto after_25;
    // 0x8001CCBC: nop

    after_25:
    // 0x8001CCC0: b           L_8001D070
    // 0x8001CCC4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CCC4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CCC8:
    // 0x8001CCC8: jal         0x800190A8
    // 0x8001CCCC: nop

    func_800190A8(rdram, ctx);
        goto after_26;
    // 0x8001CCCC: nop

    after_26:
    // 0x8001CCD0: b           L_8001D070
    // 0x8001CCD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CCD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CCD8:
    // 0x8001CCD8: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CCDC: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CCE0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001CCE4: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CCE8: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CCEC: sw          $t8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r24;
    // 0x8001CCF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CCF4: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CCF8: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CCFC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8001CD00: jal         0x80019098
    // 0x8001CD04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80019098(rdram, ctx);
        goto after_27;
    // 0x8001CD04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_27:
    // 0x8001CD08: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x8001CD0C: b           L_8001D06C
    // 0x8001CD10: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
        goto L_8001D06C;
    // 0x8001CD10: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
L_8001CD14:
    // 0x8001CD14: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001CD18: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CD1C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8001CD20: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CD24: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CD28: sw          $t9, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r25;
    // 0x8001CD2C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CD30: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CD34: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CD38: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CD3C: jal         0x80019078
    // 0x8001CD40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80019078(rdram, ctx);
        goto after_28;
    // 0x8001CD40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_28:
    // 0x8001CD44: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x8001CD48: b           L_8001D06C
    // 0x8001CD4C: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
        goto L_8001D06C;
    // 0x8001CD4C: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_8001CD50:
    // 0x8001CD50: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001CD54: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CD58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CD5C: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CD60: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CD64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CD68: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x8001CD6C: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8001CD70: beq         $t7, $zero, L_8001CD84
    if (ctx->r15 == 0) {
        // 0x8001CD74: andi        $t8, $s0, 0x2
        ctx->r24 = ctx->r16 & 0X2;
            goto L_8001CD84;
    }
    // 0x8001CD74: andi        $t8, $s0, 0x2
    ctx->r24 = ctx->r16 & 0X2;
    // 0x8001CD78: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CD7C: b           L_8001CDAC
    // 0x8001CD80: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8001CDAC;
    // 0x8001CD80: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8001CD84:
    // 0x8001CD84: beq         $t8, $zero, L_8001CD98
    if (ctx->r24 == 0) {
        // 0x8001CD88: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001CD98;
    }
    // 0x8001CD88: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001CD8C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8001CD90: b           L_8001CDA8
    // 0x8001CD94: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8001CDA8;
    // 0x8001CD94: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8001CD98:
    // 0x8001CD98: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CD9C: and         $t9, $s0, $at
    ctx->r25 = ctx->r16 & ctx->r1;
    // 0x8001CDA0: addiu       $s0, $t9, 0x8
    ctx->r16 = ADD32(ctx->r25, 0X8);
    // 0x8001CDA4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8001CDA8:
    // 0x8001CDA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001CDAC:
    // 0x8001CDAC: lwc1        $f9, -0x8($v0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001CDB0: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001CDB4: nop

    // 0x8001CDB8: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8001CDBC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001CDC0: jal         0x80018EF8
    // 0x8001CDC4: nop

    func_80018EF8(rdram, ctx);
        goto after_29;
    // 0x8001CDC4: nop

    after_29:
    // 0x8001CDC8: b           L_8001D070
    // 0x8001CDCC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CDCC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CDD0:
    // 0x8001CDD0: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CDD4: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CDD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CDDC: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CDE0: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CDE4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CDE8: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x8001CDEC: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8001CDF0: beq         $t8, $zero, L_8001CE04
    if (ctx->r24 == 0) {
        // 0x8001CDF4: andi        $t9, $s0, 0x2
        ctx->r25 = ctx->r16 & 0X2;
            goto L_8001CE04;
    }
    // 0x8001CDF4: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x8001CDF8: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CDFC: b           L_8001CE2C
    // 0x8001CE00: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_8001CE2C;
    // 0x8001CE00: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_8001CE04:
    // 0x8001CE04: beq         $t9, $zero, L_8001CE18
    if (ctx->r25 == 0) {
        // 0x8001CE08: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_8001CE18;
    }
    // 0x8001CE08: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8001CE0C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x8001CE10: b           L_8001CE28
    // 0x8001CE14: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_8001CE28;
    // 0x8001CE14: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_8001CE18:
    // 0x8001CE18: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8001CE1C: and         $t6, $s0, $at
    ctx->r14 = ctx->r16 & ctx->r1;
    // 0x8001CE20: addiu       $s0, $t6, 0x8
    ctx->r16 = ADD32(ctx->r14, 0X8);
    // 0x8001CE24: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_8001CE28:
    // 0x8001CE28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001CE2C:
    // 0x8001CE2C: lwc1        $f11, -0x8($v0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r2, -0X8);
    // 0x8001CE30: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8001CE34: nop

    // 0x8001CE38: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8001CE3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8001CE40: jal         0x80018D78
    // 0x8001CE44: nop

    func_80018D78(rdram, ctx);
        goto after_30;
    // 0x8001CE44: nop

    after_30:
    // 0x8001CE48: b           L_8001D070
    // 0x8001CE4C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CE4C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CE50:
    // 0x8001CE50: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001CE54: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CE58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CE5C: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CE60: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CE64: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CE68: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CE6C: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CE70: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8001CE74: jal         0x8001C130
    // 0x8001CE78: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001C130(rdram, ctx);
        goto after_31;
    // 0x8001CE78: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_31:
    // 0x8001CE7C: b           L_8001D070
    // 0x8001CE80: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CE80: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CE84:
    // 0x8001CE84: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CE88: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CE8C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CE90: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CE94: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CE98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001CE9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CEA0: jal         0x800188F0
    // 0x8001CEA4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_800188F0(rdram, ctx);
        goto after_32;
    // 0x8001CEA4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_32:
    // 0x8001CEA8: b           L_8001D070
    // 0x8001CEAC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CEAC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CEB0:
    // 0x8001CEB0: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001CEB4: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CEB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CEBC: jal         0x800188B4
    // 0x8001CEC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_800188B4(rdram, ctx);
        goto after_33;
    // 0x8001CEC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_33:
    // 0x8001CEC4: b           L_8001D070
    // 0x8001CEC8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CEC8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CECC:
    // 0x8001CECC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001CED0: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CED4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CED8: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001CEDC: lw          $t7, 0x1B8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001CEE0: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CEE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CEE8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8001CEEC: bne         $t7, $at, L_8001CF04
    if (ctx->r15 != ctx->r1) {
        // 0x8001CEF0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8001CF04;
    }
    // 0x8001CEF0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001CEF4: jal         0x80018894
    // 0x8001CEF8: nop

    func_80018894(rdram, ctx);
        goto after_34;
    // 0x8001CEF8: nop

    after_34:
    // 0x8001CEFC: b           L_8001D070
    // 0x8001CF00: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CF00: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CF04:
    // 0x8001CF04: jal         0x80018848
    // 0x8001CF08: nop

    func_80018848(rdram, ctx);
        goto after_35;
    // 0x8001CF08: nop

    after_35:
    // 0x8001CF0C: b           L_8001D070
    // 0x8001CF10: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CF10: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CF14:
    // 0x8001CF14: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001CF18: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CF1C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF20: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CF24: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CF28: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF2C: jal         0x80018810
    // 0x8001CF30: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80018810(rdram, ctx);
        goto after_36;
    // 0x8001CF30: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_36:
    // 0x8001CF34: b           L_8001D070
    // 0x8001CF38: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CF38: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CF3C:
    // 0x8001CF3C: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CF40: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CF44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF48: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CF4C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CF50: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF54: jal         0x800187D8
    // 0x8001CF58: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_800187D8(rdram, ctx);
        goto after_37;
    // 0x8001CF58: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_37:
    // 0x8001CF5C: b           L_8001D070
    // 0x8001CF60: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CF60: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CF64:
    // 0x8001CF64: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x8001CF68: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CF6C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF70: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CF74: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CF78: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF7C: jal         0x80018794
    // 0x8001CF80: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80018794(rdram, ctx);
        goto after_38;
    // 0x8001CF80: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_38:
    // 0x8001CF84: b           L_8001D070
    // 0x8001CF88: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CF88: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CF8C:
    // 0x8001CF8C: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CF90: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CF94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CF98: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CF9C: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CFA0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8001CFA4: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CFA8: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CFAC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8001CFB0: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8001CFB4: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001CFB8: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8001CFBC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8001CFC0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x8001CFC4: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x8001CFC8: jal         0x8001873C
    // 0x8001CFCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8001873C(rdram, ctx);
        goto after_39;
    // 0x8001CFCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_39:
    // 0x8001CFD0: b           L_8001D070
    // 0x8001CFD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001CFD4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001CFD8:
    // 0x8001CFD8: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x8001CFDC: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001CFE0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001CFE4: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x8001CFE8: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001CFEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001CFF0: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001CFF4: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001CFF8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x8001CFFC: jal         0x80018658
    // 0x8001D000: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80018658(rdram, ctx);
        goto after_40;
    // 0x8001D000: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_40:
    // 0x8001D004: b           L_8001D070
    // 0x8001D008: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001D008: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001D00C:
    // 0x8001D00C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x8001D010: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001D014: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001D018: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x8001D01C: and         $s0, $t6, $s3
    ctx->r16 = ctx->r14 & ctx->r19;
    // 0x8001D020: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8001D024: jal         0x80018628
    // 0x8001D028: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80018628(rdram, ctx);
        goto after_41;
    // 0x8001D028: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_41:
    // 0x8001D02C: b           L_8001D070
    // 0x8001D030: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001D030: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001D034:
    // 0x8001D034: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x8001D038: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x8001D03C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001D040: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x8001D044: and         $s0, $t8, $s3
    ctx->r16 = ctx->r24 & ctx->r19;
    // 0x8001D048: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8001D04C: jal         0x80018604
    // 0x8001D050: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_80018604(rdram, ctx);
        goto after_42;
    // 0x8001D050: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_42:
    // 0x8001D054: b           L_8001D070
    // 0x8001D058: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_8001D070;
    // 0x8001D058: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001D05C:
    // 0x8001D05C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001D060: lw          $a1, 0x1B8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001D064: jal         0x80000FBC
    // 0x8001D068: addiu       $a0, $a0, 0x52B4
    ctx->r4 = ADD32(ctx->r4, 0X52B4);
    func_80000FBC(rdram, ctx);
        goto after_43;
    // 0x8001D068: addiu       $a0, $a0, 0x52B4
    ctx->r4 = ADD32(ctx->r4, 0X52B4);
    after_43:
L_8001D06C:
    // 0x8001D06C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8001D070:
    // 0x8001D070: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x8001D074: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8001D078: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001D07C: bne         $t6, $zero, L_8001C798
    if (ctx->r14 != 0) {
        // 0x8001D080: sw          $t6, 0x1B8($sp)
        MEM_W(0X1B8, ctx->r29) = ctx->r14;
            goto L_8001C798;
    }
    // 0x8001D080: sw          $t6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r14;
L_8001D084:
    // 0x8001D084: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8001D088: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001D08C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8001D090: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8001D094: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D098: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8001D09C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8001D0A0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8001D0A4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8001D0A8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8001D0AC: jr          $ra
    // 0x8001D0B0: addiu       $sp, $sp, 0x1B8
    ctx->r29 = ADD32(ctx->r29, 0X1B8);
    return;
    // 0x8001D0B0: addiu       $sp, $sp, 0x1B8
    ctx->r29 = ADD32(ctx->r29, 0X1B8);
;}
RECOMP_FUNC void func_8001D0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D0B4: jr          $ra
    // 0x8001D0B8: nop

    return;
    // 0x8001D0B8: nop

;}
RECOMP_FUNC void func_8001D0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D0BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001D0C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001D0C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001D0C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001D0CC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8001D0D0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x8001D0D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8001D0D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_8001D0DC:
    // 0x8001D0DC: jal         0x8001C0C4
    // 0x8001D0E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001C0C4(rdram, ctx);
        goto after_0;
    // 0x8001D0E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8001D0E4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8001D0E8: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x8001D0EC: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
L_8001D0F0:
    // 0x8001D0F0: lw          $t0, 0x24($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X24);
    // 0x8001D0F4: nop

    // 0x8001D0F8: beq         $s0, $t0, L_8001D108
    if (ctx->r16 == ctx->r8) {
        // 0x8001D0FC: nop
    
            goto L_8001D108;
    }
    // 0x8001D0FC: nop

    // 0x8001D100: jal         0x8001C3CC
    // 0x8001D104: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8001C3CC(rdram, ctx);
        goto after_1;
    // 0x8001D104: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_1:
L_8001D108:
    // 0x8001D108: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x8001D10C: bne         $t3, $s1, L_8001D0F0
    if (ctx->r11 != ctx->r17) {
        // 0x8001D110: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_8001D0F0;
    }
    // 0x8001D110: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x8001D114: b           L_8001D0DC
    // 0x8001D118: nop

        goto L_8001D0DC;
    // 0x8001D118: nop

    // 0x8001D11C: nop

    // 0x8001D120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001D124: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001D128: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D12C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001D130: jr          $ra
    // 0x8001D134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001D134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001D138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D138: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8001D13C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001D140: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001D144: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001D148: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001D14C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001D150: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001D154: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001D158: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001D15C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001D160: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001D164: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8001D168: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8001D16C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8001D170: jal         0x8001B9CC
    // 0x8001D174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    func_8001B9CC(rdram, ctx);
        goto after_0;
    // 0x8001D174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001D178: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8001D17C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x8001D180: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8001D184: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x8001D188: jal         0x80019F10
    // 0x8001D18C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_80019F10(rdram, ctx);
        goto after_1;
    // 0x8001D18C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_1:
    // 0x8001D190: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8001D194: jal         0x8001C6D4
    // 0x8001D198: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8001C6D4(rdram, ctx);
        goto after_2;
    // 0x8001D198: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_2:
    // 0x8001D19C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8001D1A0: nop

    // 0x8001D1A4: sw          $t6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r14;
    // 0x8001D1A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001D1AC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001D1B0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001D1B4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001D1B8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D1BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001D1C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001D1C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001D1C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D1CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001D1D0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8001D1D4: jr          $ra
    // 0x8001D1D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8001D1D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8001D1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D1DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001D1E0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001D1E4: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8001D1E8: addiu       $s6, $s6, -0x5B54
    ctx->r22 = ADD32(ctx->r22, -0X5B54);
    // 0x8001D1EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001D1F0: lw          $s0, 0x0($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X0);
    // 0x8001D1F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001D1F8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001D1FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001D200: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001D204: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001D208: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001D20C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8001D210: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8001D214: beq         $t6, $zero, L_8001D2C8
    if (ctx->r14 == 0) {
        // 0x8001D218: addiu       $s5, $s5, -0x5B48
        ctx->r21 = ADD32(ctx->r21, -0X5B48);
            goto L_8001D2C8;
    }
    // 0x8001D218: addiu       $s5, $s5, -0x5B48
    ctx->r21 = ADD32(ctx->r21, -0X5B48);
    // 0x8001D21C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001D220: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001D224: addiu       $s2, $s2, -0x5B60
    ctx->r18 = ADD32(ctx->r18, -0X5B60);
    // 0x8001D228: addiu       $s4, $s4, -0x5B4C
    ctx->r20 = ADD32(ctx->r20, -0X5B4C);
    // 0x8001D22C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8001D230:
    // 0x8001D230: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8001D234: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8001D238: jal         0x8001A288
    // 0x8001D23C: nop

    func_8001A288(rdram, ctx);
        goto after_0;
    // 0x8001D23C: nop

    after_0:
    // 0x8001D240: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x8001D244: sw          $s3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r19;
    // 0x8001D248: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8001D24C: nop

    // 0x8001D250: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001D254: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x8001D258: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8001D25C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8001D260: nop

    // 0x8001D264: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8001D268: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x8001D26C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8001D270: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8001D274: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001D278: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x8001D27C: sw          $t1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r9;
    // 0x8001D280: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8001D284: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x8001D288: nop

    // 0x8001D28C: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8001D290: nop

    // 0x8001D294: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x8001D298: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8001D29C: nop

    // 0x8001D2A0: sw          $s0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r16;
    // 0x8001D2A4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8001D2A8: nop

    // 0x8001D2AC: beq         $v0, $zero, L_8001D2B8
    if (ctx->r2 == 0) {
        // 0x8001D2B0: nop
    
            goto L_8001D2B8;
    }
    // 0x8001D2B0: nop

    // 0x8001D2B4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_8001D2B8:
    // 0x8001D2B8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8001D2BC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8001D2C0: bne         $t8, $zero, L_8001D230
    if (ctx->r24 != 0) {
        // 0x8001D2C4: nop
    
            goto L_8001D230;
    }
    // 0x8001D2C4: nop

L_8001D2C8:
    // 0x8001D2C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001D2CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001D2D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D2D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001D2D8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001D2DC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001D2E0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001D2E4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001D2E8: jr          $ra
    // 0x8001D2EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001D2EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001D2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D2F0: jr          $ra
    // 0x8001D2F4: nop

    return;
    // 0x8001D2F4: nop

;}
RECOMP_FUNC void func_8001D300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D300: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001D304: lw          $t8, -0x48E4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48E4);
    // 0x8001D308: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D30C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001D310: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8001D314: bne         $t9, $zero, L_8001D324
    if (ctx->r25 != 0) {
        // 0x8001D318: sra         $a0, $t6, 16
        ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8001D324;
    }
    // 0x8001D318: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001D31C: jr          $ra
    // 0x8001D320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8001D320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001D324:
    // 0x8001D324: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001D328: lw          $v0, -0x48F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48F8);
    // 0x8001D32C: nop

    // 0x8001D330: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x8001D334: nop

    // 0x8001D338: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001D33C: beq         $at, $zero, L_8001D34C
    if (ctx->r1 == 0) {
        // 0x8001D340: nop
    
            goto L_8001D34C;
    }
    // 0x8001D340: nop

    // 0x8001D344: bgez        $a0, L_8001D354
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8001D348: nop
    
            goto L_8001D354;
    }
    // 0x8001D348: nop

L_8001D34C:
    // 0x8001D34C: jr          $ra
    // 0x8001D350: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8001D350: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001D354:
    // 0x8001D354: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8001D358: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x8001D35C: beq         $a1, $at, L_8001D378
    if (ctx->r5 == ctx->r1) {
        // 0x8001D360: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001D378;
    }
    // 0x8001D360: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001D364: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x8001D368: beq         $a1, $at, L_8001D39C
    if (ctx->r5 == ctx->r1) {
        // 0x8001D36C: lui         $t4, 0x800B
        ctx->r12 = S32(0X800B << 16);
            goto L_8001D39C;
    }
    // 0x8001D36C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8001D370: b           L_8001D3B4
    // 0x8001D374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001D3B4;
    // 0x8001D374: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001D378:
    // 0x8001D378: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x8001D37C: addu        $a1, $v0, $t1
    ctx->r5 = ADD32(ctx->r2, ctx->r9);
    // 0x8001D380: lhu         $t2, 0x8($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X8);
    // 0x8001D384: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8001D388: andi        $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 & 0X2000;
    // 0x8001D38C: beq         $t3, $zero, L_8001D3B4
    if (ctx->r11 == 0) {
        // 0x8001D390: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8001D3B4;
    }
    // 0x8001D390: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001D394: b           L_8001D3B0
    // 0x8001D398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8001D3B0;
    // 0x8001D398: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8001D39C:
    // 0x8001D39C: lw          $t4, -0x48F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X48F0);
    // 0x8001D3A0: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x8001D3A4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x8001D3A8: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x8001D3AC: nop

L_8001D3B0:
    // 0x8001D3B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001D3B4:
    // 0x8001D3B4: jr          $ra
    // 0x8001D3B8: nop

    return;
    // 0x8001D3B8: nop

;}
RECOMP_FUNC void func_8001D3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D3C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D3C4: jr          $ra
    // 0x8001D3C8: sb          $a0, -0x48CD($at)
    MEM_B(-0X48CD, ctx->r1) = ctx->r4;
    return;
    // 0x8001D3C8: sb          $a0, -0x48CD($at)
    MEM_B(-0X48CD, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8001D3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D3D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001D3D4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001D3D8: jr          $ra
    // 0x8001D3DC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    return;
    // 0x8001D3DC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
;}
RECOMP_FUNC void func_8001D3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3E0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001D3E4: lb          $v0, -0x48CE($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X48CE);
    // 0x8001D3E8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001D3F4: lh          $v0, -0x48D4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X48D4);
    // 0x8001D3F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D400: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001D404: lbu         $v0, -0x48CF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X48CF);
    // 0x8001D408: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001D410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D410: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001D414: lb          $v0, -0x48D0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X48D0);
    // 0x8001D418: jr          $ra
    return;
;}
