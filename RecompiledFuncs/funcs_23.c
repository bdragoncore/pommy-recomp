#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004BA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BA08: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004BA0C: addiu       $a1, $a1, 0x1A78
    ctx->r5 = ADD32(ctx->r5, 0X1A78);
    // 0x8004BA10: jal         0x80073EF0
    // 0x8004BA14: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8004BA14: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x8004BA18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004BA1C: jal         0x8005954C
    // 0x8004BA20: sw          $zero, 0x1A64($at)
    MEM_W(0X1A64, ctx->r1) = 0;
    func_8005954C(rdram, ctx);
        goto after_1;
    // 0x8004BA20: sw          $zero, 0x1A64($at)
    MEM_W(0X1A64, ctx->r1) = 0;
    after_1:
    // 0x8004BA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BA2C: jr          $ra
    // 0x8004BA30: nop

    return;
    // 0x8004BA30: nop

;}
RECOMP_FUNC void func_8004BA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BA34: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8004BA38: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004BA3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004BA40: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004BA44: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004BA48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004BA4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004BA50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004BA54: addiu       $t6, $t6, 0x1A68
    ctx->r14 = ADD32(ctx->r14, 0X1A68);
    // 0x8004BA58: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8004BA5C: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x8004BA60: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x8004BA64: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8004BA68: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8004BA6C: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x8004BA70: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8004BA74: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8004BA78: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x8004BA7C: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8004BA80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004BA84: blez        $a0, L_8004BACC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8004BA88: sw          $t9, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->r25;
            goto L_8004BACC;
    }
    // 0x8004BA88: sw          $t9, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r25;
    // 0x8004BA8C: addiu       $s4, $sp, 0x34
    ctx->r20 = ADD32(ctx->r29, 0X34);
L_8004BA90:
    // 0x8004BA90: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8004BA94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004BA98: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8004BA9C: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8004BAA0: nop

    // 0x8004BAA4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8004BAA8: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x8004BAAC: jal         0x800590F0
    // 0x8004BAB0: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    func_800590F0(rdram, ctx);
        goto after_0;
    // 0x8004BAB0: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    after_0:
    // 0x8004BAB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8004BAB8: jal         0x80057CA0
    // 0x8004BABC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8004BABC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8004BAC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004BAC4: bne         $s1, $s2, L_8004BA90
    if (ctx->r17 != ctx->r18) {
        // 0x8004BAC8: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8004BA90;
    }
    // 0x8004BAC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8004BACC:
    // 0x8004BACC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004BAD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004BAD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BAD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004BADC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004BAE0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004BAE4: jr          $ra
    // 0x8004BAE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8004BAE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8004BAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BAEC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8004BAF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004BAF4: addiu       $v0, $v0, 0x2310
    ctx->r2 = ADD32(ctx->r2, 0X2310);
    // 0x8004BAF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004BAFC: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x8004BB00: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004BB04: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_8004BB08:
    // 0x8004BB08: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x8004BB0C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8004BB10: beq         $t0, $t6, L_8004BB4C
    if (ctx->r8 == ctx->r14) {
        // 0x8004BB14: nop
    
            goto L_8004BB4C;
    }
    // 0x8004BB14: nop

    // 0x8004BB18: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8004BB1C: nop

    // 0x8004BB20: bne         $a1, $t7, L_8004BB4C
    if (ctx->r5 != ctx->r15) {
        // 0x8004BB24: nop
    
            goto L_8004BB4C;
    }
    // 0x8004BB24: nop

    // 0x8004BB28: beq         $a2, $t1, L_8004BB3C
    if (ctx->r6 == ctx->r9) {
        // 0x8004BB2C: addiu       $t9, $v0, 0x18
        ctx->r25 = ADD32(ctx->r2, 0X18);
            goto L_8004BB3C;
    }
    // 0x8004BB2C: addiu       $t9, $v0, 0x18
    ctx->r25 = ADD32(ctx->r2, 0X18);
    // 0x8004BB30: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8004BB34: nop

    // 0x8004BB38: bne         $a2, $t8, L_8004BB4C
    if (ctx->r6 != ctx->r24) {
        // 0x8004BB3C: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_8004BB4C;
    }
L_8004BB3C:
    // 0x8004BB3C: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004BB40: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8004BB44: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x8004BB48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8004BB4C:
    // 0x8004BB4C: lw          $t5, 0xF8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XF8);
    // 0x8004BB50: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x8004BB54: beq         $t0, $t5, L_8004BB90
    if (ctx->r8 == ctx->r13) {
        // 0x8004BB58: nop
    
            goto L_8004BB90;
    }
    // 0x8004BB58: nop

    // 0x8004BB5C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8004BB60: nop

    // 0x8004BB64: bne         $a1, $t6, L_8004BB90
    if (ctx->r5 != ctx->r14) {
        // 0x8004BB68: nop
    
            goto L_8004BB90;
    }
    // 0x8004BB68: nop

    // 0x8004BB6C: beq         $a2, $t1, L_8004BB80
    if (ctx->r6 == ctx->r9) {
        // 0x8004BB70: addiu       $t8, $v0, 0x18
        ctx->r24 = ADD32(ctx->r2, 0X18);
            goto L_8004BB80;
    }
    // 0x8004BB70: addiu       $t8, $v0, 0x18
    ctx->r24 = ADD32(ctx->r2, 0X18);
    // 0x8004BB74: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8004BB78: nop

    // 0x8004BB7C: bne         $a2, $t7, L_8004BB90
    if (ctx->r6 != ctx->r15) {
        // 0x8004BB80: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_8004BB90;
    }
L_8004BB80:
    // 0x8004BB80: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004BB84: addu        $t9, $a0, $t3
    ctx->r25 = ADD32(ctx->r4, ctx->r11);
    // 0x8004BB88: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8004BB8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8004BB90:
    // 0x8004BB90: lw          $t4, 0xF8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XF8);
    // 0x8004BB94: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x8004BB98: beq         $t0, $t4, L_8004BBD4
    if (ctx->r8 == ctx->r12) {
        // 0x8004BB9C: nop
    
            goto L_8004BBD4;
    }
    // 0x8004BB9C: nop

    // 0x8004BBA0: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x8004BBA4: nop

    // 0x8004BBA8: bne         $a1, $t5, L_8004BBD4
    if (ctx->r5 != ctx->r13) {
        // 0x8004BBAC: nop
    
            goto L_8004BBD4;
    }
    // 0x8004BBAC: nop

    // 0x8004BBB0: beq         $a2, $t1, L_8004BBC4
    if (ctx->r6 == ctx->r9) {
        // 0x8004BBB4: addiu       $t7, $v0, 0x18
        ctx->r15 = ADD32(ctx->r2, 0X18);
            goto L_8004BBC4;
    }
    // 0x8004BBB4: addiu       $t7, $v0, 0x18
    ctx->r15 = ADD32(ctx->r2, 0X18);
    // 0x8004BBB8: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8004BBBC: nop

    // 0x8004BBC0: bne         $a2, $t6, L_8004BBD4
    if (ctx->r6 != ctx->r14) {
        // 0x8004BBC4: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_8004BBD4;
    }
L_8004BBC4:
    // 0x8004BBC4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004BBC8: addu        $t8, $a0, $t3
    ctx->r24 = ADD32(ctx->r4, ctx->r11);
    // 0x8004BBCC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8004BBD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8004BBD4:
    // 0x8004BBD4: lw          $t9, 0xF8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XF8);
    // 0x8004BBD8: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x8004BBDC: beq         $t0, $t9, L_8004BC18
    if (ctx->r8 == ctx->r25) {
        // 0x8004BBE0: nop
    
            goto L_8004BC18;
    }
    // 0x8004BBE0: nop

    // 0x8004BBE4: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x8004BBE8: nop

    // 0x8004BBEC: bne         $a1, $t4, L_8004BC18
    if (ctx->r5 != ctx->r12) {
        // 0x8004BBF0: nop
    
            goto L_8004BC18;
    }
    // 0x8004BBF0: nop

    // 0x8004BBF4: beq         $a2, $t1, L_8004BC08
    if (ctx->r6 == ctx->r9) {
        // 0x8004BBF8: addiu       $t6, $v0, 0x18
        ctx->r14 = ADD32(ctx->r2, 0X18);
            goto L_8004BC08;
    }
    // 0x8004BBF8: addiu       $t6, $v0, 0x18
    ctx->r14 = ADD32(ctx->r2, 0X18);
    // 0x8004BBFC: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x8004BC00: nop

    // 0x8004BC04: bne         $a2, $t5, L_8004BC18
    if (ctx->r6 != ctx->r13) {
        // 0x8004BC08: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_8004BC18;
    }
L_8004BC08:
    // 0x8004BC08: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004BC0C: addu        $t7, $a0, $t3
    ctx->r15 = ADD32(ctx->r4, ctx->r11);
    // 0x8004BC10: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8004BC14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8004BC18:
    // 0x8004BC18: bne         $a3, $t2, L_8004BB08
    if (ctx->r7 != ctx->r10) {
        // 0x8004BC1C: addiu       $v0, $v0, 0xDC
        ctx->r2 = ADD32(ctx->r2, 0XDC);
            goto L_8004BB08;
    }
    // 0x8004BC1C: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x8004BC20: jr          $ra
    // 0x8004BC24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004BC24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004BC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC28: jr          $ra
    // 0x8004BC2C: nop

    return;
    // 0x8004BC2C: nop

;}
RECOMP_FUNC void func_8004BC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BC34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_8004BC38:
    // 0x8004BC38: jal         0x80007AB0
    // 0x8004BC3C: nop

    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x8004BC3C: nop

    after_0:
    // 0x8004BC40: b           L_8004BC38
    // 0x8004BC44: nop

        goto L_8004BC38;
    // 0x8004BC44: nop

    // 0x8004BC48: nop

    // 0x8004BC4C: nop

    // 0x8004BC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BC58: jr          $ra
    // 0x8004BC5C: nop

    return;
    // 0x8004BC5C: nop

;}
RECOMP_FUNC void func_8004BC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BC68: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BC6C: addiu       $a0, $a0, -0x43D0
    ctx->r4 = ADD32(ctx->r4, -0X43D0);
    // 0x8004BC70: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x8004BC74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004BC78: jal         0x80007C3C
    // 0x8004BC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x8004BC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8004BC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BC88: jr          $ra
    // 0x8004BC8C: nop

    return;
    // 0x8004BC8C: nop

;}
RECOMP_FUNC void func_8004BC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC90: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004BC94: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8004BC98: jr          $ra
    // 0x8004BC9C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    return;
    // 0x8004BC9C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004BCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BCA0: jr          $ra
    // 0x8004BCA4: nop

    return;
    // 0x8004BCA4: nop

;}
RECOMP_FUNC void func_8004BCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BCA8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8004BCAC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8004BCB0: addiu       $v0, $v0, -0x5FE8
    ctx->r2 = ADD32(ctx->r2, -0X5FE8);
    // 0x8004BCB4: addiu       $v1, $v1, -0x61E8
    ctx->r3 = ADD32(ctx->r3, -0X61E8);
L_8004BCB8:
    // 0x8004BCB8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8004BCBC: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x8004BCC0: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x8004BCC4: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8004BCC8: bne         $v1, $v0, L_8004BCB8
    if (ctx->r3 != ctx->r2) {
        // 0x8004BCCC: sw          $zero, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = 0;
            goto L_8004BCB8;
    }
    // 0x8004BCCC: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x8004BCD0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004BCD4: jr          $ra
    // 0x8004BCD8: sw          $zero, 0x1B00($at)
    MEM_W(0X1B00, ctx->r1) = 0;
    return;
    // 0x8004BCD8: sw          $zero, 0x1B00($at)
    MEM_W(0X1B00, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8004BCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BCDC: jr          $ra
    // 0x8004BCE0: nop

    return;
    // 0x8004BCE0: nop

;}
RECOMP_FUNC void func_8004BCE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BCE4: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8004BCE8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004BCEC: addiu       $a3, $a3, 0x1B00
    ctx->r7 = ADD32(ctx->r7, 0X1B00);
    // 0x8004BCF0: sw          $zero, 0x1B20($at)
    MEM_W(0X1B20, ctx->r1) = 0;
    // 0x8004BCF4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8004BCF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004BCFC: blez        $v1, L_8004BD78
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8004BD00: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_8004BD78;
    }
    // 0x8004BD00: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004BD04: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8004BD08: lui         $t0, 0xFFFF
    ctx->r8 = S32(0XFFFF << 16);
    // 0x8004BD0C: ori         $t0, $t0, 0x3FFF
    ctx->r8 = ctx->r8 | 0X3FFF;
    // 0x8004BD10: addiu       $t1, $t1, -0x61E8
    ctx->r9 = ADD32(ctx->r9, -0X61E8);
    // 0x8004BD14: addiu       $a0, $a0, -0x61E8
    ctx->r4 = ADD32(ctx->r4, -0X61E8);
L_8004BD18:
    // 0x8004BD18: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x8004BD1C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8004BD20: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8004BD24: nop

    // 0x8004BD28: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8004BD2C: beq         $t7, $zero, L_8004BD68
    if (ctx->r15 == 0) {
        // 0x8004BD30: nop
    
            goto L_8004BD68;
    }
    // 0x8004BD30: nop

    // 0x8004BD34: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x8004BD38: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x8004BD3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004BD40: and         $t2, $t9, $t0
    ctx->r10 = ctx->r25 & ctx->r8;
    // 0x8004BD44: sw          $t2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r10;
    // 0x8004BD48: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8004BD4C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8004BD50: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8004BD54: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    // 0x8004BD58: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x8004BD5C: nop

    // 0x8004BD60: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x8004BD64: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_8004BD68:
    // 0x8004BD68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004BD6C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004BD70: bne         $at, $zero, L_8004BD18
    if (ctx->r1 != 0) {
        // 0x8004BD74: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8004BD18;
    }
    // 0x8004BD74: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_8004BD78:
    // 0x8004BD78: jr          $ra
    // 0x8004BD7C: nop

    return;
    // 0x8004BD7C: nop

    // 0x8004BD80: jr          $ra
    // 0x8004BD84: nop

    return;
    // 0x8004BD84: nop

    // 0x8004BD88: jr          $ra
    // 0x8004BD8C: nop

    return;
    // 0x8004BD8C: nop

    // 0x8004BD90: jr          $ra
    // 0x8004BD94: nop

    return;
    // 0x8004BD94: nop

;}
RECOMP_FUNC void func_8004BD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BD98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BDA0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004BDA4: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004BDA8: nop

    // 0x8004BDAC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004BDB0: nop

    // 0x8004BDB4: bc1t        L_8004BDE4
    if (c1cs) {
        // 0x8004BDB8: nop
    
            goto L_8004BDE4;
    }
    // 0x8004BDB8: nop

    // 0x8004BDBC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004BDC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BDC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BDC8: jal         0x80028248
    // 0x8004BDCC: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    func_80028248(rdram, ctx);
        goto after_0;
    // 0x8004BDCC: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    after_0:
    // 0x8004BDD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BDD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BDD8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004BDDC: b           L_8004BDE8
    // 0x8004BDE0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
        goto L_8004BDE8;
    // 0x8004BDE0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_8004BDE4:
    // 0x8004BDE4: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_8004BDE8:
    // 0x8004BDE8: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x8004BDEC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004BDF0: nop

    // 0x8004BDF4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004BDF8: nop

    // 0x8004BDFC: bc1f        L_8004BE24
    if (!c1cs) {
        // 0x8004BE00: nop
    
            goto L_8004BE24;
    }
    // 0x8004BE00: nop

    // 0x8004BE04: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004BE08: nop

    // 0x8004BE0C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x8004BE10: nop

    // 0x8004BE14: bc1f        L_8004BE24
    if (!c1cs) {
        // 0x8004BE18: nop
    
            goto L_8004BE24;
    }
    // 0x8004BE18: nop

    // 0x8004BE1C: b           L_8004BE60
    // 0x8004BE20: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
        goto L_8004BE60;
    // 0x8004BE20: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
L_8004BE24:
    // 0x8004BE24: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004BE28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BE2C: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004BE30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BE34: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004BE38: jal         0x8007A500
    // 0x8004BE3C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8004BE3C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x8004BE40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BE44: nop

    // 0x8004BE48: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004BE4C: jal         0x80028248
    // 0x8004BE50: div.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    func_80028248(rdram, ctx);
        goto after_2;
    // 0x8004BE50: div.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    after_2:
    // 0x8004BE54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BE58: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x8004BE5C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
L_8004BE60:
    // 0x8004BE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BE64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BE68: jr          $ra
    // 0x8004BE6C: nop

    return;
    // 0x8004BE6C: nop

;}
RECOMP_FUNC void func_8004BE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BE70: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004BE74: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004BE78: nop

    // 0x8004BE7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004BE80: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8004BE84: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004BE88: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004BE8C: nop

    // 0x8004BE90: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004BE94: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8004BE98: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004BE9C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004BEA0: nop

    // 0x8004BEA4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004BEA8: jr          $ra
    // 0x8004BEAC: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x8004BEAC: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8004BEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BEB0: jr          $ra
    // 0x8004BEB4: nop

    return;
    // 0x8004BEB4: nop

;}
RECOMP_FUNC void func_8004BEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BEC8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004BECC: nop

    // 0x8004BED0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8004BED4: nop

    // 0x8004BED8: bc1t        L_8004BF10
    if (c1cs) {
        // 0x8004BEDC: nop
    
            goto L_8004BF10;
    }
    // 0x8004BEDC: nop

    // 0x8004BEE0: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004BEE4: nop

    // 0x8004BEE8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8004BEEC: nop

    // 0x8004BEF0: bc1t        L_8004BF10
    if (c1cs) {
        // 0x8004BEF4: nop
    
            goto L_8004BF10;
    }
    // 0x8004BEF4: nop

    // 0x8004BEF8: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004BEFC: nop

    // 0x8004BF00: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8004BF04: nop

    // 0x8004BF08: bc1f        L_8004BF18
    if (!c1cs) {
        // 0x8004BF0C: nop
    
            goto L_8004BF18;
    }
    // 0x8004BF0C: nop

L_8004BF10:
    // 0x8004BF10: jr          $ra
    // 0x8004BF14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8004BF14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004BF18:
    // 0x8004BF18: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004BF1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004BF20: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004BF24: nop

    // 0x8004BF28: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8004BF2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004BF30: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8004BF34: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004BF38: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8004BF3C: nop

    // 0x8004BF40: bc1f        L_8004BF50
    if (!c1cs) {
        // 0x8004BF44: nop
    
            goto L_8004BF50;
    }
    // 0x8004BF44: nop

    // 0x8004BF48: jr          $ra
    // 0x8004BF4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8004BF4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004BF50:
    // 0x8004BF50: jr          $ra
    // 0x8004BF54: nop

    return;
    // 0x8004BF54: nop

;}
RECOMP_FUNC void func_8004BF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BF58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004BF5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BF60: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8004BF64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004BF68: bne         $v1, $at, L_8004BFD0
    if (ctx->r3 != ctx->r1) {
        // 0x8004BF6C: sll         $v0, $t0, 2
        ctx->r2 = S32(ctx->r8 << 2);
            goto L_8004BFD0;
    }
    // 0x8004BF6C: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x8004BF70: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
    // 0x8004BF74: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8004BF78: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004BF7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004BF80: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8004BF84: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8004BF88: nop

    // 0x8004BF8C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8004BF90: lw          $t9, 0x20($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X20);
    // 0x8004BF94: nop

    // 0x8004BF98: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004BF9C: nop

    // 0x8004BFA0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8004BFA4: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8004BFA8: nop

    // 0x8004BFAC: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8004BFB0: lw          $t8, 0x20($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X20);
    // 0x8004BFB4: nop

    // 0x8004BFB8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004BFBC: nop

    // 0x8004BFC0: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x8004BFC4: lwc1        $f8, 0xC($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8004BFC8: b           L_8004C010
    // 0x8004BFCC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
        goto L_8004C010;
    // 0x8004BFCC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
L_8004BFD0:
    // 0x8004BFD0: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004BFD4: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8004BFD8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8004BFDC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004BFE0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8004BFE4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8004BFE8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004BFEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004BFF0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8004BFF4: lw          $t7, 0x20($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X20);
    // 0x8004BFF8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8004BFFC: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8004C000: nop

    // 0x8004C004: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8004C008: jal         0x8004BE70
    // 0x8004C00C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_8004BE70(rdram, ctx);
        goto after_0;
    // 0x8004C00C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_0:
L_8004C010:
    // 0x8004C010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C014: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8004C018: jr          $ra
    // 0x8004C01C: nop

    return;
    // 0x8004C01C: nop

;}
RECOMP_FUNC void func_8004C020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C020: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004C024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C028: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8004C02C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004C030: bne         $v1, $at, L_8004C158
    if (ctx->r3 != ctx->r1) {
        // 0x8004C034: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8004C158;
    }
    // 0x8004C034: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004C038: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004C03C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8004C040: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8004C044: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    // 0x8004C048: lw          $t6, 0x20($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X20);
    // 0x8004C04C: addiu       $v1, $v1, -0xC
    ctx->r3 = ADD32(ctx->r3, -0XC);
    // 0x8004C050: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004C054: beq         $a3, $v1, L_8004C0E0
    if (ctx->r7 == ctx->r3) {
        // 0x8004C058: addu        $t8, $t7, $t0
        ctx->r24 = ADD32(ctx->r15, ctx->r8);
            goto L_8004C0E0;
    }
    // 0x8004C058: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
L_8004C05C:
    // 0x8004C05C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004C060: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8004C064: addu        $t6, $t9, $a3
    ctx->r14 = ADD32(ctx->r25, ctx->r7);
    // 0x8004C068: lwc1        $f18, 0xC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8004C06C: nop

    // 0x8004C070: swc1        $f18, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f18.u32l;
    // 0x8004C074: lw          $t7, 0x20($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X20);
    // 0x8004C078: nop

    // 0x8004C07C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8004C080: nop

    // 0x8004C084: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x8004C088: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8004C08C: nop

    // 0x8004C090: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8004C094: lwc1        $f18, 0x10($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8004C098: nop

    // 0x8004C09C: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x8004C0A0: lw          $t8, 0x20($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X20);
    // 0x8004C0A4: nop

    // 0x8004C0A8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004C0AC: nop

    // 0x8004C0B0: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x8004C0B4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004C0B8: nop

    // 0x8004C0BC: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8004C0C0: lwc1        $f18, 0x14($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8004C0C4: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8004C0C8: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x8004C0CC: lw          $t6, 0x20($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X20);
    // 0x8004C0D0: nop

    // 0x8004C0D4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004C0D8: bne         $a3, $v1, L_8004C05C
    if (ctx->r7 != ctx->r3) {
        // 0x8004C0DC: addu        $t8, $t7, $t0
        ctx->r24 = ADD32(ctx->r15, ctx->r8);
            goto L_8004C05C;
    }
    // 0x8004C0DC: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
L_8004C0E0:
    // 0x8004C0E0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004C0E4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8004C0E8: addu        $t6, $t9, $a3
    ctx->r14 = ADD32(ctx->r25, ctx->r7);
    // 0x8004C0EC: lwc1        $f18, 0xC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8004C0F0: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8004C0F4: swc1        $f18, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f18.u32l;
    // 0x8004C0F8: lw          $t7, 0x20($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X20);
    // 0x8004C0FC: nop

    // 0x8004C100: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8004C104: nop

    // 0x8004C108: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x8004C10C: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8004C110: nop

    // 0x8004C114: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8004C118: lwc1        $f18, 0x10($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8004C11C: nop

    // 0x8004C120: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x8004C124: lw          $t8, 0x20($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X20);
    // 0x8004C128: nop

    // 0x8004C12C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004C130: nop

    // 0x8004C134: addu        $t6, $t9, $t0
    ctx->r14 = ADD32(ctx->r25, ctx->r8);
    // 0x8004C138: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004C13C: nop

    // 0x8004C140: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8004C144: lwc1        $f18, 0x14($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8004C148: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8004C14C: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x8004C150: b           L_8004C1B8
    // 0x8004C154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004C1B8;
    // 0x8004C154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C158:
    // 0x8004C158: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004C15C: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x8004C160: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8004C164: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004C168: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8004C16C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8004C170: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004C174: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x8004C178: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x8004C17C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
L_8004C180:
    // 0x8004C180: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    // 0x8004C184: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8004C188: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004C18C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004C190: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x8004C194: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8004C198: nop

    // 0x8004C19C: addu        $a2, $t8, $a3
    ctx->r6 = ADD32(ctx->r24, ctx->r7);
    // 0x8004C1A0: jal         0x8004BE70
    // 0x8004C1A4: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    func_8004BE70(rdram, ctx);
        goto after_0;
    // 0x8004C1A4: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    after_0:
    // 0x8004C1A8: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8004C1AC: bne         $a3, $t4, L_8004C180
    if (ctx->r7 != ctx->r12) {
        // 0x8004C1B0: addiu       $t1, $t1, 0xC
        ctx->r9 = ADD32(ctx->r9, 0XC);
            goto L_8004C180;
    }
    // 0x8004C1B0: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x8004C1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C1B8:
    // 0x8004C1B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8004C1BC: jr          $ra
    // 0x8004C1C0: nop

    return;
    // 0x8004C1C0: nop

;}
RECOMP_FUNC void func_8004C1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C1C4: andi        $v0, $a0, 0xC00
    ctx->r2 = ctx->r4 & 0XC00;
    // 0x8004C1C8: bne         $v0, $zero, L_8004C1D8
    if (ctx->r2 != 0) {
        // 0x8004C1CC: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_8004C1D8;
    }
    // 0x8004C1CC: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x8004C1D0: jr          $ra
    // 0x8004C1D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004C1D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C1D8:
    // 0x8004C1D8: bne         $v0, $at, L_8004C1F8
    if (ctx->r2 != ctx->r1) {
        // 0x8004C1DC: andi        $t6, $a1, 0xF00
        ctx->r14 = ctx->r5 & 0XF00;
            goto L_8004C1F8;
    }
    // 0x8004C1DC: andi        $t6, $a1, 0xF00
    ctx->r14 = ctx->r5 & 0XF00;
    // 0x8004C1E0: bne         $t6, $zero, L_8004C1F0
    if (ctx->r14 != 0) {
        // 0x8004C1E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004C1F0;
    }
    // 0x8004C1E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004C1E8: b           L_8004C250
    // 0x8004C1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8004C250;
    // 0x8004C1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8004C1F0:
    // 0x8004C1F0: b           L_8004C250
    // 0x8004C1F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_8004C250;
    // 0x8004C1F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8004C1F8:
    // 0x8004C1F8: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x8004C1FC: bne         $v0, $at, L_8004C220
    if (ctx->r2 != ctx->r1) {
        // 0x8004C200: andi        $t7, $a1, 0xF00
        ctx->r15 = ctx->r5 & 0XF00;
            goto L_8004C220;
    }
    // 0x8004C200: andi        $t7, $a1, 0xF00
    ctx->r15 = ctx->r5 & 0XF00;
    // 0x8004C204: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x8004C208: bne         $t7, $at, L_8004C218
    if (ctx->r15 != ctx->r1) {
        // 0x8004C20C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004C218;
    }
    // 0x8004C20C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004C210: b           L_8004C24C
    // 0x8004C214: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8004C24C;
    // 0x8004C214: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004C218:
    // 0x8004C218: b           L_8004C24C
    // 0x8004C21C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004C24C;
    // 0x8004C21C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C220:
    // 0x8004C220: andi        $v0, $a1, 0xF00
    ctx->r2 = ctx->r5 & 0XF00;
    // 0x8004C224: bne         $v0, $zero, L_8004C234
    if (ctx->r2 != 0) {
        // 0x8004C228: addiu       $at, $zero, 0x300
        ctx->r1 = ADD32(0, 0X300);
            goto L_8004C234;
    }
    // 0x8004C228: addiu       $at, $zero, 0x300
    ctx->r1 = ADD32(0, 0X300);
    // 0x8004C22C: b           L_8004C248
    // 0x8004C230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004C248;
    // 0x8004C230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004C234:
    // 0x8004C234: bne         $v0, $at, L_8004C244
    if (ctx->r2 != ctx->r1) {
        // 0x8004C238: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8004C244;
    }
    // 0x8004C238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004C23C: b           L_8004C244
    // 0x8004C240: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8004C244;
    // 0x8004C240: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004C244:
    // 0x8004C244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8004C248:
    // 0x8004C248: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C24C:
    // 0x8004C24C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8004C250:
    // 0x8004C250: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8004C254: jr          $ra
    // 0x8004C258: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004C258: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004C25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C25C: jr          $ra
    // 0x8004C260: nop

    return;
    // 0x8004C260: nop

;}
RECOMP_FUNC void func_8004C26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C26C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004C270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C274: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8004C278: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004C27C: bne         $v1, $at, L_8004C2D0
    if (ctx->r3 != ctx->r1) {
        // 0x8004C280: sll         $v0, $t0, 2
        ctx->r2 = S32(ctx->r8 << 2);
            goto L_8004C2D0;
    }
    // 0x8004C280: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x8004C284: lw          $t6, 0x1C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1C);
    // 0x8004C288: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8004C28C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C290: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8004C294: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8004C298: nop

    // 0x8004C29C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8004C2A0: lw          $t8, 0x1C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X1C);
    // 0x8004C2A4: nop

    // 0x8004C2A8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8004C2AC: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8004C2B0: nop

    // 0x8004C2B4: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x8004C2B8: lw          $t6, 0x1C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1C);
    // 0x8004C2BC: nop

    // 0x8004C2C0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8004C2C4: lwc1        $f8, 0xC($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8004C2C8: b           L_8004C308
    // 0x8004C2CC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
        goto L_8004C308;
    // 0x8004C2CC: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
L_8004C2D0:
    // 0x8004C2D0: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004C2D4: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8004C2D8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8004C2DC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004C2E0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8004C2E4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8004C2E8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004C2EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004C2F0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8004C2F4: lw          $t8, 0x1C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X1C);
    // 0x8004C2F8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8004C2FC: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8004C300: jal         0x8004BE70
    // 0x8004C304: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_8004BE70(rdram, ctx);
        goto after_0;
    // 0x8004C304: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_0:
L_8004C308:
    // 0x8004C308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C30C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8004C310: jr          $ra
    // 0x8004C314: nop

    return;
    // 0x8004C314: nop

;}
RECOMP_FUNC void func_8004C318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C318: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x8004C31C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C320: lw          $t0, 0x16C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X16C);
    // 0x8004C324: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8004C328: addiu       $a0, $sp, 0x154
    ctx->r4 = ADD32(ctx->r29, 0X154);
    // 0x8004C32C: jal         0x8004C26C
    // 0x8004C330: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_8004C26C(rdram, ctx);
        goto after_0;
    // 0x8004C330: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_0:
    // 0x8004C334: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C338: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C33C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004C340: blez        $a0, L_8004CA48
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8004C344: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004CA48;
    }
    // 0x8004C344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C348: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8004C34C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8004C350: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x8004C354: addiu       $s4, $sp, 0x124
    ctx->r20 = ADD32(ctx->r29, 0X124);
    // 0x8004C358: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8004C35C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8004C360: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8004C364: addiu       $s2, $s2, -0x5A18
    ctx->r18 = ADD32(ctx->r18, -0X5A18);
    // 0x8004C368: or          $s6, $s4, $zero
    ctx->r22 = ctx->r20 | 0;
    // 0x8004C36C: addiu       $s7, $s7, -0x61E8
    ctx->r23 = ADD32(ctx->r23, -0X61E8);
    // 0x8004C370: addiu       $s5, $sp, 0x64
    ctx->r21 = ADD32(ctx->r29, 0X64);
L_8004C374:
    // 0x8004C374: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C378: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8004C37C: bne         $fp, $t2, L_8004C390
    if (ctx->r30 != ctx->r10) {
        // 0x8004C380: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_8004C390;
    }
    // 0x8004C380: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004C384: addiu       $t8, $t8, -0x61E8
    ctx->r24 = ADD32(ctx->r24, -0X61E8);
    // 0x8004C388: b           L_8004CA34
    // 0x8004C38C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_8004CA34;
    // 0x8004C38C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8004C390:
    // 0x8004C390: lw          $v0, 0x8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X8);
    // 0x8004C394: nop

    // 0x8004C398: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x8004C39C: beq         $t9, $zero, L_8004CA24
    if (ctx->r25 == 0) {
        // 0x8004C3A0: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_8004CA24;
    }
    // 0x8004C3A0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8004C3A4: beq         $t6, $zero, L_8004C678
    if (ctx->r14 == 0) {
        // 0x8004C3A8: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_8004C678;
    }
    // 0x8004C3A8: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8004C3AC: lw          $v1, 0x24($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X24);
    // 0x8004C3B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004C3B4: bne         $v1, $at, L_8004C3C4
    if (ctx->r3 != ctx->r1) {
        // 0x8004C3B8: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_8004C3C4;
    }
    // 0x8004C3B8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8004C3BC: b           L_8004C4A4
    // 0x8004C3C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004C4A4;
    // 0x8004C3C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004C3C4:
    // 0x8004C3C4: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8004C3C8: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8004C3CC: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x8004C3D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8004C3D4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8004C3D8: nop

    // 0x8004C3DC: bc1f        L_8004C3EC
    if (!c1cs) {
        // 0x8004C3E0: nop
    
            goto L_8004C3EC;
    }
    // 0x8004C3E0: nop

    // 0x8004C3E4: b           L_8004C4A4
    // 0x8004C3E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C3E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C3EC:
    // 0x8004C3EC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004C3F0: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8004C3F4: sub.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x8004C3F8: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8004C3FC: nop

    // 0x8004C400: bc1f        L_8004C410
    if (!c1cs) {
        // 0x8004C404: nop
    
            goto L_8004C410;
    }
    // 0x8004C404: nop

    // 0x8004C408: b           L_8004C4A4
    // 0x8004C40C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C40C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C410:
    // 0x8004C410: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004C414: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8004C418: add.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x8004C41C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x8004C420: nop

    // 0x8004C424: bc1f        L_8004C434
    if (!c1cs) {
        // 0x8004C428: nop
    
            goto L_8004C434;
    }
    // 0x8004C428: nop

    // 0x8004C42C: b           L_8004C4A4
    // 0x8004C430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C434:
    // 0x8004C434: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004C438: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8004C43C: sub.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f24.fl;
    // 0x8004C440: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8004C444: nop

    // 0x8004C448: bc1f        L_8004C458
    if (!c1cs) {
        // 0x8004C44C: nop
    
            goto L_8004C458;
    }
    // 0x8004C44C: nop

    // 0x8004C450: b           L_8004C4A4
    // 0x8004C454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C458:
    // 0x8004C458: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004C45C: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8004C460: add.s       $f8, $f10, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x8004C464: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8004C468: nop

    // 0x8004C46C: bc1f        L_8004C47C
    if (!c1cs) {
        // 0x8004C470: nop
    
            goto L_8004C47C;
    }
    // 0x8004C470: nop

    // 0x8004C474: b           L_8004C4A4
    // 0x8004C478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C47C:
    // 0x8004C47C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004C480: lwc1        $f4, 0x158($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8004C484: sub.s       $f8, $f10, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x8004C488: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004C48C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8004C490: nop

    // 0x8004C494: bc1f        L_8004C4A4
    if (!c1cs) {
        // 0x8004C498: nop
    
            goto L_8004C4A4;
    }
    // 0x8004C498: nop

    // 0x8004C49C: b           L_8004C4A4
    // 0x8004C4A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004C4A4;
    // 0x8004C4A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004C4A4:
    // 0x8004C4A4: blez        $v0, L_8004C4B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004C4A8: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_8004C4B8;
    }
    // 0x8004C4A8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004C4AC: addiu       $t8, $t8, -0x61E8
    ctx->r24 = ADD32(ctx->r24, -0X61E8);
    // 0x8004C4B0: b           L_8004CA34
    // 0x8004C4B4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_8004CA34;
    // 0x8004C4B4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8004C4B8:
    // 0x8004C4B8: lw          $v0, 0x20($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X20);
    // 0x8004C4BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004C4C0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8004C4C4: nop

    // 0x8004C4C8: blez        $t9, L_8004CA24
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004C4CC: nop
    
            goto L_8004CA24;
    }
    // 0x8004C4CC: nop

    // 0x8004C4D0: lw          $s3, 0x16C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X16C);
    // 0x8004C4D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004C4D8: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x8004C4DC: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8004C4E0: sll         $s3, $t6, 2
    ctx->r19 = S32(ctx->r14 << 2);
L_8004C4E4:
    // 0x8004C4E4: lw          $t7, 0x1C($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X1C);
    // 0x8004C4E8: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8004C4EC: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x8004C4F0: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8004C4F4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004C4F8: lw          $a1, 0x10($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X10);
    // 0x8004C4FC: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    // 0x8004C500: jal         0x8004C1C4
    // 0x8004C504: nop

    func_8004C1C4(rdram, ctx);
        goto after_1;
    // 0x8004C504: nop

    after_1:
    // 0x8004C508: beq         $v0, $zero, L_8004C668
    if (ctx->r2 == 0) {
        // 0x8004C50C: nop
    
            goto L_8004C668;
    }
    // 0x8004C50C: nop

    // 0x8004C510: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C514: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8004C518: lw          $t8, 0x20($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X20);
    // 0x8004C51C: addiu       $a1, $sp, 0x124
    ctx->r5 = ADD32(ctx->r29, 0X124);
    // 0x8004C520: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004C524: nop

    // 0x8004C528: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8004C52C: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x8004C530: jal         0x8004C020
    // 0x8004C534: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    func_8004C020(rdram, ctx);
        goto after_2;
    // 0x8004C534: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    after_2:
    // 0x8004C538: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8004C53C: lwc1        $f10, 0x154($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8004C540: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8004C544: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8004C548: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8004C54C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8004C550: lwc1        $f8, 0x158($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8004C554: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x8004C558: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004C55C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8004C560: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8004C564: nop

    // 0x8004C568: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004C56C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8004C570: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004C574: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8004C578: nop

    // 0x8004C57C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004C580: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8004C584: nop

    // 0x8004C588: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8004C58C: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8004C590: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x8004C594: nop

    // 0x8004C598: bc1f        L_8004C5B0
    if (!c1cs) {
        // 0x8004C59C: nop
    
            goto L_8004C5B0;
    }
    // 0x8004C59C: nop

    // 0x8004C5A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C5A4: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C5A8: b           L_8004CA24
    // 0x8004C5AC: nop

        goto L_8004CA24;
    // 0x8004C5AC: nop

L_8004C5B0:
    // 0x8004C5B0: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C5B4: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
    // 0x8004C5B8: lw          $v0, 0x20($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X20);
    // 0x8004C5BC: nop

    // 0x8004C5C0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8004C5C4: nop

    // 0x8004C5C8: bne         $t7, $v1, L_8004C648
    if (ctx->r15 != ctx->r3) {
        // 0x8004C5CC: nop
    
            goto L_8004C648;
    }
    // 0x8004C5CC: nop

    // 0x8004C5D0: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8004C5D4: lw          $t6, 0x1C($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X1C);
    // 0x8004C5D8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004C5DC: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x8004C5E0: lw          $a3, 0x10($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X10);
    // 0x8004C5E4: lw          $v1, 0x4($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X4);
    // 0x8004C5E8: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    // 0x8004C5EC: lw          $a1, 0x30($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X30);
    // 0x8004C5F0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8004C5F4: addiu       $t8, $t8, 0x1B04
    ctx->r24 = ADD32(ctx->r24, 0X1B04);
    // 0x8004C5F8: sw          $t8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r24;
    // 0x8004C5FC: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x8004C600: swc1        $f22, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f22.u32l;
    // 0x8004C604: swc1        $f20, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f20.u32l;
    // 0x8004C608: sw          $a3, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r7;
    // 0x8004C60C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    // 0x8004C610: sw          $a2, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r6;
    // 0x8004C614: jal         0x8004AF68
    // 0x8004C618: sw          $a1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r5;
    func_8004AF68(rdram, ctx);
        goto after_3;
    // 0x8004C618: sw          $a1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r5;
    after_3:
    // 0x8004C61C: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x8004C620: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x8004C624: lw          $v0, 0x20($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X20);
    // 0x8004C628: nop

    // 0x8004C62C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8004C630: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8004C634: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004C638: nop

    // 0x8004C63C: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x8004C640: nop

    // 0x8004C644: or          $t3, $t3, $t8
    ctx->r11 = ctx->r11 | ctx->r24;
L_8004C648:
    // 0x8004C648: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004C64C: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004C650: bne         $at, $zero, L_8004C4E4
    if (ctx->r1 != 0) {
        // 0x8004C654: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8004C4E4;
    }
    // 0x8004C654: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8004C658: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C65C: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C660: b           L_8004CA24
    // 0x8004C664: nop

        goto L_8004CA24;
    // 0x8004C664: nop

L_8004C668:
    // 0x8004C668: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C66C: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C670: b           L_8004CA24
    // 0x8004C674: nop

        goto L_8004CA24;
    // 0x8004C674: nop

L_8004C678:
    // 0x8004C678: beq         $t9, $zero, L_8004C7CC
    if (ctx->r25 == 0) {
        // 0x8004C67C: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_8004C7CC;
    }
    // 0x8004C67C: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x8004C680: lw          $t6, 0x20($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X20);
    // 0x8004C684: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004C688: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004C68C: nop

    // 0x8004C690: blez        $t7, L_8004CA24
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8004C694: nop
    
            goto L_8004CA24;
    }
    // 0x8004C694: nop

    // 0x8004C698: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004C69C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
L_8004C6A0:
    // 0x8004C6A0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8004C6A4: jal         0x8004BF58
    // 0x8004C6A8: addiu       $a0, $sp, 0x148
    ctx->r4 = ADD32(ctx->r29, 0X148);
    func_8004BF58(rdram, ctx);
        goto after_4;
    // 0x8004C6A8: addiu       $a0, $sp, 0x148
    ctx->r4 = ADD32(ctx->r29, 0X148);
    after_4:
    // 0x8004C6AC: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8004C6B0: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x8004C6B4: lwc1        $f10, 0x158($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8004C6B8: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004C6BC: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x8004C6C0: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x8004C6C4: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8004C6C8: lwc1        $f10, 0x150($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X150);
    // 0x8004C6CC: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8004C6D0: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x8004C6D4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8004C6D8: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x8004C6DC: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x8004C6E0: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x8004C6E4: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x8004C6E8: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004C6EC: nop

    // 0x8004C6F0: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x8004C6F4: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8004C6F8: jal         0x8004BEC8
    // 0x8004C6FC: nop

    func_8004BEC8(rdram, ctx);
        goto after_5;
    // 0x8004C6FC: nop

    after_5:
    // 0x8004C700: blez        $v0, L_8004C798
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004C704: nop
    
            goto L_8004C798;
    }
    // 0x8004C704: nop

    // 0x8004C708: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C70C: lw          $t7, 0x1C($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X1C);
    // 0x8004C710: lw          $t8, 0x20($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X20);
    // 0x8004C714: lw          $a1, 0x4($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X4);
    // 0x8004C718: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004C71C: lw          $t8, 0x16C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X16C);
    // 0x8004C720: addu        $t6, $t9, $s1
    ctx->r14 = ADD32(ctx->r25, ctx->r17);
    // 0x8004C724: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8004C728: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004C72C: lw          $v1, 0x10($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X10);
    // 0x8004C730: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004C734: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8004C738: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x8004C73C: lw          $v0, 0x4($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X4);
    // 0x8004C740: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8004C744: addiu       $t8, $t8, 0x1B04
    ctx->r24 = ADD32(ctx->r24, 0X1B04);
    // 0x8004C748: sw          $t8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r24;
    // 0x8004C74C: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x8004C750: swc1        $f22, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f22.u32l;
    // 0x8004C754: swc1        $f20, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f20.u32l;
    // 0x8004C758: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004C75C: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x8004C760: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x8004C764: sw          $a2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r6;
    // 0x8004C768: jal         0x8004AF68
    // 0x8004C76C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_8004AF68(rdram, ctx);
        goto after_6;
    // 0x8004C76C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_6:
    // 0x8004C770: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x8004C774: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x8004C778: lw          $t9, 0x20($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X20);
    // 0x8004C77C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C780: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004C784: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C788: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x8004C78C: lw          $t7, 0x10($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X10);
    // 0x8004C790: b           L_8004CA24
    // 0x8004C794: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
        goto L_8004CA24;
    // 0x8004C794: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
L_8004C798:
    // 0x8004C798: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C79C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004C7A0: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    // 0x8004C7A4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x8004C7A8: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8004C7AC: nop

    // 0x8004C7B0: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8004C7B4: bne         $at, $zero, L_8004C6A0
    if (ctx->r1 != 0) {
        // 0x8004C7B8: or          $a3, $t2, $zero
        ctx->r7 = ctx->r10 | 0;
            goto L_8004C6A0;
    }
    // 0x8004C7B8: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004C7BC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004C7C0: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004C7C4: b           L_8004CA24
    // 0x8004C7C8: nop

        goto L_8004CA24;
    // 0x8004C7C8: nop

L_8004C7CC:
    // 0x8004C7CC: beq         $t8, $zero, L_8004CA24
    if (ctx->r24 == 0) {
        // 0x8004C7D0: nop
    
            goto L_8004CA24;
    }
    // 0x8004C7D0: nop

    // 0x8004C7D4: lw          $t7, 0x20($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X20);
    // 0x8004C7D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004C7DC: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8004C7E0: nop

    // 0x8004C7E4: blez        $t9, L_8004CA24
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004C7E8: nop
    
            goto L_8004CA24;
    }
    // 0x8004C7E8: nop

L_8004C7EC:
    // 0x8004C7EC: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x8004C7F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004C7F4: bne         $v1, $at, L_8004C884
    if (ctx->r3 != ctx->r1) {
        // 0x8004C7F8: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_8004C884;
    }
    // 0x8004C7F8: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x8004C7FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004C800: addiu       $v0, $sp, 0x10C
    ctx->r2 = ADD32(ctx->r29, 0X10C);
L_8004C804:
    // 0x8004C804: lw          $t6, 0x20($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X20);
    // 0x8004C808: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x8004C80C: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8004C810: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x8004C814: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004C818: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004C81C: addu        $t6, $t9, $a3
    ctx->r14 = ADD32(ctx->r25, ctx->r7);
    // 0x8004C820: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8004C824: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x8004C828: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8004C82C: lw          $t8, 0x20($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X20);
    // 0x8004C830: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x8004C834: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x8004C838: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004C83C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8004C840: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x8004C844: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8004C848: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x8004C84C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8004C850: lw          $t7, 0x20($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X20);
    // 0x8004C854: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x8004C858: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8004C85C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004C860: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x8004C864: addu        $t7, $t8, $a3
    ctx->r15 = ADD32(ctx->r24, ctx->r7);
    // 0x8004C868: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8004C86C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8004C870: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8004C874: bne         $v0, $s4, L_8004C804
    if (ctx->r2 != ctx->r20) {
        // 0x8004C878: swc1        $f10, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
            goto L_8004C804;
    }
    // 0x8004C878: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8004C87C: b           L_8004C8E0
    // 0x8004C880: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
        goto L_8004C8E0;
    // 0x8004C880: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
L_8004C884:
    // 0x8004C884: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004C888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004C88C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x8004C890: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004C894: addiu       $t0, $sp, 0x10C
    ctx->r8 = ADD32(ctx->r29, 0X10C);
    // 0x8004C898: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8004C89C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004C8A0: nop

    // 0x8004C8A4: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
L_8004C8A8:
    // 0x8004C8A8: lw          $t9, 0x20($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X20);
    // 0x8004C8AC: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x8004C8B0: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004C8B4: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x8004C8B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004C8BC: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8004C8C0: addu        $a2, $t7, $a3
    ctx->r6 = ADD32(ctx->r15, ctx->r7);
    // 0x8004C8C4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8004C8C8: jal         0x8004BE70
    // 0x8004C8CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_8004BE70(rdram, ctx);
        goto after_7;
    // 0x8004C8CC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_7:
    // 0x8004C8D0: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8004C8D4: bne         $t0, $s6, L_8004C8A8
    if (ctx->r8 != ctx->r22) {
        // 0x8004C8D8: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_8004C8A8;
    }
    // 0x8004C8D8: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8004C8DC: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
L_8004C8E0:
    // 0x8004C8E0: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x8004C8E4: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8004C8E8: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8004C8EC: nop

    // 0x8004C8F0: bc1t        L_8004C958
    if (c1cs) {
        // 0x8004C8F4: nop
    
            goto L_8004C958;
    }
    // 0x8004C8F4: nop

    // 0x8004C8F8: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8004C8FC: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8004C900: bc1t        L_8004C958
    if (c1cs) {
        // 0x8004C904: nop
    
            goto L_8004C958;
    }
    // 0x8004C904: nop

    // 0x8004C908: lwc1        $f10, 0x158($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8004C90C: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8004C910: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8004C914: nop

    // 0x8004C918: bc1t        L_8004C958
    if (c1cs) {
        // 0x8004C91C: nop
    
            goto L_8004C958;
    }
    // 0x8004C91C: nop

    // 0x8004C920: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8004C924: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8004C928: bc1t        L_8004C958
    if (c1cs) {
        // 0x8004C92C: nop
    
            goto L_8004C958;
    }
    // 0x8004C92C: nop

    // 0x8004C930: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x8004C934: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8004C938: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8004C93C: nop

    // 0x8004C940: bc1t        L_8004C958
    if (c1cs) {
        // 0x8004C944: nop
    
            goto L_8004C958;
    }
    // 0x8004C944: nop

    // 0x8004C948: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8004C94C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004C950: bc1f        L_8004C96C
    if (!c1cs) {
        // 0x8004C954: nop
    
            goto L_8004C96C;
    }
    // 0x8004C954: nop

L_8004C958:
    // 0x8004C958: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C95C: nop

    // 0x8004C960: lw          $v0, 0x20($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X20);
    // 0x8004C964: b           L_8004CA08
    // 0x8004C968: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
        goto L_8004CA08;
    // 0x8004C968: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
L_8004C96C:
    // 0x8004C96C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C970: sll         $s1, $s0, 3
    ctx->r17 = S32(ctx->r16 << 3);
    // 0x8004C974: lw          $t9, 0x20($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X20);
    // 0x8004C978: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x8004C97C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004C980: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x8004C984: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8004C988: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x8004C98C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8004C990: lw          $t7, 0x1C($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X1C);
    // 0x8004C994: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8004C998: lw          $v1, 0x18($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X18);
    // 0x8004C99C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004C9A0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8004C9A4: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    // 0x8004C9A8: lw          $a1, 0x4($fp)
    ctx->r5 = MEM_W(ctx->r30, 0X4);
    // 0x8004C9AC: lw          $v0, 0x4($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X4);
    // 0x8004C9B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8004C9B4: addiu       $t9, $t9, 0x1B04
    ctx->r25 = ADD32(ctx->r25, 0X1B04);
    // 0x8004C9B8: sw          $t9, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r25;
    // 0x8004C9BC: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x8004C9C0: swc1        $f22, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f22.u32l;
    // 0x8004C9C4: swc1        $f20, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f20.u32l;
    // 0x8004C9C8: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x8004C9CC: sw          $a2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r6;
    // 0x8004C9D0: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x8004C9D4: jal         0x8004AF68
    // 0x8004C9D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_8004AF68(rdram, ctx);
        goto after_8;
    // 0x8004C9D8: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_8:
    // 0x8004C9DC: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x8004C9E0: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x8004C9E4: lw          $v0, 0x20($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X20);
    // 0x8004C9E8: nop

    // 0x8004C9EC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8004C9F0: nop

    // 0x8004C9F4: addu        $t6, $t7, $s1
    ctx->r14 = ADD32(ctx->r15, ctx->r17);
    // 0x8004C9F8: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x8004C9FC: nop

    // 0x8004CA00: or          $t3, $t3, $t8
    ctx->r11 = ctx->r11 | ctx->r24;
    // 0x8004CA04: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
L_8004CA08:
    // 0x8004CA08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004CA0C: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004CA10: bne         $at, $zero, L_8004C7EC
    if (ctx->r1 != 0) {
        // 0x8004CA14: nop
    
            goto L_8004C7EC;
    }
    // 0x8004CA14: nop

    // 0x8004CA18: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004CA1C: lw          $a0, 0x1B00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B00);
    // 0x8004CA20: nop

L_8004CA24:
    // 0x8004CA24: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004CA28: addiu       $t6, $t6, -0x61E8
    ctx->r14 = ADD32(ctx->r14, -0X61E8);
    // 0x8004CA2C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8004CA30: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
L_8004CA34:
    // 0x8004CA34: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8004CA38: sltu        $at, $s7, $v0
    ctx->r1 = ctx->r23 < ctx->r2 ? 1 : 0;
    // 0x8004CA3C: bne         $at, $zero, L_8004C374
    if (ctx->r1 != 0) {
        // 0x8004CA40: nop
    
            goto L_8004C374;
    }
    // 0x8004CA40: nop

    // 0x8004CA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004CA48:
    // 0x8004CA48: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    // 0x8004CA4C: jr          $ra
    // 0x8004CA50: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8004CA50: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_8004CA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CA54: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004CA58: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004CA5C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004CA60: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004CA64: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004CA68: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004CA6C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004CA70: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004CA74: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004CA78: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004CA7C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8004CA80: nop

    // 0x8004CA84: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004CA88: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004CA8C: jr          $ra
    // 0x8004CA90: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    return;
    // 0x8004CA90: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
;}
RECOMP_FUNC void func_8004CA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CA94: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004CA98: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004CA9C: nop

    // 0x8004CAA0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8004CAA4: nop

    // 0x8004CAA8: bc1f        L_8004CAF0
    if (!c1cs) {
        // 0x8004CAAC: nop
    
            goto L_8004CAF0;
    }
    // 0x8004CAAC: nop

    // 0x8004CAB0: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004CAB4: nop

    // 0x8004CAB8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8004CABC: nop

    // 0x8004CAC0: bc1f        L_8004CAD0
    if (!c1cs) {
        // 0x8004CAC4: nop
    
            goto L_8004CAD0;
    }
    // 0x8004CAC4: nop

    // 0x8004CAC8: jr          $ra
    // 0x8004CACC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CACC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CAD0:
    // 0x8004CAD0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8004CAD4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CAD8: bc1f        L_8004CAE8
    if (!c1cs) {
        // 0x8004CADC: nop
    
            goto L_8004CAE8;
    }
    // 0x8004CADC: nop

    // 0x8004CAE0: jr          $ra
    // 0x8004CAE4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8004CAE4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CAE8:
    // 0x8004CAE8: jr          $ra
    // 0x8004CAEC: nop

    return;
    // 0x8004CAEC: nop

L_8004CAF0:
    // 0x8004CAF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8004CAF4: nop

    // 0x8004CAF8: bc1f        L_8004CB40
    if (!c1cs) {
        // 0x8004CAFC: nop
    
            goto L_8004CB40;
    }
    // 0x8004CAFC: nop

    // 0x8004CB00: lwc1        $f12, 0x0($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004CB04: nop

    // 0x8004CB08: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8004CB0C: nop

    // 0x8004CB10: bc1f        L_8004CB20
    if (!c1cs) {
        // 0x8004CB14: nop
    
            goto L_8004CB20;
    }
    // 0x8004CB14: nop

    // 0x8004CB18: jr          $ra
    // 0x8004CB1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CB1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CB20:
    // 0x8004CB20: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8004CB24: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CB28: bc1f        L_8004CB38
    if (!c1cs) {
        // 0x8004CB2C: nop
    
            goto L_8004CB38;
    }
    // 0x8004CB2C: nop

    // 0x8004CB30: jr          $ra
    // 0x8004CB34: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8004CB34: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CB38:
    // 0x8004CB38: jr          $ra
    // 0x8004CB3C: nop

    return;
    // 0x8004CB3C: nop

L_8004CB40:
    // 0x8004CB40: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004CB44: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004CB48: nop

    // 0x8004CB4C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8004CB50: nop

    // 0x8004CB54: bc1f        L_8004CB9C
    if (!c1cs) {
        // 0x8004CB58: nop
    
            goto L_8004CB9C;
    }
    // 0x8004CB58: nop

    // 0x8004CB5C: lwc1        $f12, 0x4($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004CB60: nop

    // 0x8004CB64: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8004CB68: nop

    // 0x8004CB6C: bc1f        L_8004CB7C
    if (!c1cs) {
        // 0x8004CB70: nop
    
            goto L_8004CB7C;
    }
    // 0x8004CB70: nop

    // 0x8004CB74: jr          $ra
    // 0x8004CB78: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CB78: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CB7C:
    // 0x8004CB7C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8004CB80: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CB84: bc1f        L_8004CB94
    if (!c1cs) {
        // 0x8004CB88: nop
    
            goto L_8004CB94;
    }
    // 0x8004CB88: nop

    // 0x8004CB8C: jr          $ra
    // 0x8004CB90: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8004CB90: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CB94:
    // 0x8004CB94: jr          $ra
    // 0x8004CB98: nop

    return;
    // 0x8004CB98: nop

L_8004CB9C:
    // 0x8004CB9C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8004CBA0: nop

    // 0x8004CBA4: bc1f        L_8004CBEC
    if (!c1cs) {
        // 0x8004CBA8: nop
    
            goto L_8004CBEC;
    }
    // 0x8004CBA8: nop

    // 0x8004CBAC: lwc1        $f12, 0x4($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004CBB0: nop

    // 0x8004CBB4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8004CBB8: nop

    // 0x8004CBBC: bc1f        L_8004CBCC
    if (!c1cs) {
        // 0x8004CBC0: nop
    
            goto L_8004CBCC;
    }
    // 0x8004CBC0: nop

    // 0x8004CBC4: jr          $ra
    // 0x8004CBC8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CBC8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CBCC:
    // 0x8004CBCC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8004CBD0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CBD4: bc1f        L_8004CBE4
    if (!c1cs) {
        // 0x8004CBD8: nop
    
            goto L_8004CBE4;
    }
    // 0x8004CBD8: nop

    // 0x8004CBDC: jr          $ra
    // 0x8004CBE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8004CBE0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CBE4:
    // 0x8004CBE4: jr          $ra
    // 0x8004CBE8: nop

    return;
    // 0x8004CBE8: nop

L_8004CBEC:
    // 0x8004CBEC: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004CBF0: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004CBF4: nop

    // 0x8004CBF8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8004CBFC: nop

    // 0x8004CC00: bc1f        L_8004CC48
    if (!c1cs) {
        // 0x8004CC04: nop
    
            goto L_8004CC48;
    }
    // 0x8004CC04: nop

    // 0x8004CC08: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004CC0C: nop

    // 0x8004CC10: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8004CC14: nop

    // 0x8004CC18: bc1f        L_8004CC28
    if (!c1cs) {
        // 0x8004CC1C: nop
    
            goto L_8004CC28;
    }
    // 0x8004CC1C: nop

    // 0x8004CC20: jr          $ra
    // 0x8004CC24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CC24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CC28:
    // 0x8004CC28: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8004CC2C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CC30: bc1f        L_8004CC40
    if (!c1cs) {
        // 0x8004CC34: nop
    
            goto L_8004CC40;
    }
    // 0x8004CC34: nop

    // 0x8004CC38: jr          $ra
    // 0x8004CC3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x8004CC3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CC40:
    // 0x8004CC40: jr          $ra
    // 0x8004CC44: nop

    return;
    // 0x8004CC44: nop

L_8004CC48:
    // 0x8004CC48: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004CC4C: nop

    // 0x8004CC50: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8004CC54: nop

    // 0x8004CC58: bc1f        L_8004CC68
    if (!c1cs) {
        // 0x8004CC5C: nop
    
            goto L_8004CC68;
    }
    // 0x8004CC5C: nop

    // 0x8004CC60: jr          $ra
    // 0x8004CC64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004CC64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8004CC68:
    // 0x8004CC68: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8004CC6C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004CC70: bc1f        L_8004CC80
    if (!c1cs) {
        // 0x8004CC74: nop
    
            goto L_8004CC80;
    }
    // 0x8004CC74: nop

    // 0x8004CC78: b           L_8004CC80
    // 0x8004CC7C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_8004CC80;
    // 0x8004CC7C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8004CC80:
    // 0x8004CC80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004CC84: jr          $ra
    // 0x8004CC88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004CC88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004CC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CC8C: jr          $ra
    // 0x8004CC90: nop

    return;
    // 0x8004CC90: nop

;}
RECOMP_FUNC void func_8004CC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CC94: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x8004CC98: addiu       $a2, $a0, 0xA8
    ctx->r6 = ADD32(ctx->r4, 0XA8);
    // 0x8004CC9C: addiu       $v0, $zero, 0x540
    ctx->r2 = ADD32(0, 0X540);
L_8004CCA0:
    // 0x8004CCA0: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8004CCA4: nop

    // 0x8004CCA8: bne         $t6, $zero, L_8004CE88
    if (ctx->r14 != 0) {
        // 0x8004CCAC: nop
    
            goto L_8004CE88;
    }
    // 0x8004CCAC: nop

    // 0x8004CCB0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x8004CCB4: sw          $s4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r20;
    // 0x8004CCB8: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x8004CCBC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8004CCC0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8004CCC4: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x8004CCC8: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8004CCCC: nop

    // 0x8004CCD0: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x8004CCD4: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x8004CCD8: nop

    // 0x8004CCDC: sw          $t7, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r15;
    // 0x8004CCE0: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8004CCE4: nop

    // 0x8004CCE8: swc1        $f8, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f8.u32l;
    // 0x8004CCEC: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8004CCF0: nop

    // 0x8004CCF4: swc1        $f10, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f10.u32l;
    // 0x8004CCF8: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8004CCFC: sw          $t4, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r12;
    // 0x8004CD00: swc1        $f4, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f4.u32l;
    // 0x8004CD04: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x8004CD08: nop

    // 0x8004CD0C: sw          $t8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r24;
    // 0x8004CD10: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004CD14: nop

    // 0x8004CD18: sw          $t9, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r25;
    // 0x8004CD1C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8004CD20: nop

    // 0x8004CD24: sw          $t6, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r14;
    // 0x8004CD28: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8004CD2C: nop

    // 0x8004CD30: swc1        $f6, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f6.u32l;
    // 0x8004CD34: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8004CD38: nop

    // 0x8004CD3C: swc1        $f8, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f8.u32l;
    // 0x8004CD40: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8004CD44: nop

    // 0x8004CD48: swc1        $f10, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f10.u32l;
    // 0x8004CD4C: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8004CD50: nop

    // 0x8004CD54: swc1        $f4, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f4.u32l;
    // 0x8004CD58: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8004CD5C: nop

    // 0x8004CD60: swc1        $f6, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f6.u32l;
    // 0x8004CD64: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8004CD68: nop

    // 0x8004CD6C: swc1        $f8, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f8.u32l;
L_8004CD70:
    // 0x8004CD70: lw          $a3, 0x50($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X50);
    // 0x8004CD74: nop

    // 0x8004CD78: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8004CD7C: nop

    // 0x8004CD80: beq         $s4, $t7, L_8004CDAC
    if (ctx->r20 == ctx->r15) {
        // 0x8004CD84: nop
    
            goto L_8004CDAC;
    }
    // 0x8004CD84: nop

    // 0x8004CD88: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
    // 0x8004CD8C: lw          $t8, 0x50($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X50);
    // 0x8004CD90: addu        $a3, $a1, $a0
    ctx->r7 = ADD32(ctx->r5, ctx->r4);
    // 0x8004CD94: sw          $t8, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r24;
    // 0x8004CD98: lw          $t9, 0x50($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X50);
    // 0x8004CD9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004CDA0: sw          $a3, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r7;
    // 0x8004CDA4: jr          $ra
    // 0x8004CDA8: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
    return;
    // 0x8004CDA8: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
L_8004CDAC:
    // 0x8004CDAC: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8004CDB0: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8004CDB4: nop

    // 0x8004CDB8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8004CDBC: nop

    // 0x8004CDC0: bc1f        L_8004CDEC
    if (!c1cs) {
        // 0x8004CDC4: nop
    
            goto L_8004CDEC;
    }
    // 0x8004CDC4: nop

    // 0x8004CDC8: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
    // 0x8004CDCC: lw          $t6, 0x50($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X50);
    // 0x8004CDD0: addu        $a3, $a1, $a0
    ctx->r7 = ADD32(ctx->r5, ctx->r4);
    // 0x8004CDD4: sw          $t6, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r14;
    // 0x8004CDD8: lw          $t7, 0x50($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X50);
    // 0x8004CDDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004CDE0: sw          $a3, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r7;
    // 0x8004CDE4: jr          $ra
    // 0x8004CDE8: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
    return;
    // 0x8004CDE8: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
L_8004CDEC:
    // 0x8004CDEC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004CDF0: nop

    // 0x8004CDF4: bc1f        L_8004CE80
    if (!c1cs) {
        // 0x8004CDF8: nop
    
            goto L_8004CE80;
    }
    // 0x8004CDF8: nop

    // 0x8004CDFC: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x8004CE00: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x8004CE04: nop

    // 0x8004CE08: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004CE0C: beq         $at, $zero, L_8004CE38
    if (ctx->r1 == 0) {
        // 0x8004CE10: nop
    
            goto L_8004CE38;
    }
    // 0x8004CE10: nop

    // 0x8004CE14: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
    // 0x8004CE18: lw          $t8, 0x50($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X50);
    // 0x8004CE1C: addu        $a3, $a1, $a0
    ctx->r7 = ADD32(ctx->r5, ctx->r4);
    // 0x8004CE20: sw          $t8, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r24;
    // 0x8004CE24: lw          $t9, 0x50($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X50);
    // 0x8004CE28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004CE2C: sw          $a3, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r7;
    // 0x8004CE30: jr          $ra
    // 0x8004CE34: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
    return;
    // 0x8004CE34: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
L_8004CE38:
    // 0x8004CE38: bne         $t3, $v0, L_8004CE80
    if (ctx->r11 != ctx->r2) {
        // 0x8004CE3C: nop
    
            goto L_8004CE80;
    }
    // 0x8004CE3C: nop

    // 0x8004CE40: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8004CE44: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x8004CE48: nop

    // 0x8004CE4C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8004CE50: nop

    // 0x8004CE54: bc1f        L_8004CE80
    if (!c1cs) {
        // 0x8004CE58: nop
    
            goto L_8004CE80;
    }
    // 0x8004CE58: nop

    // 0x8004CE5C: sw          $v1, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r3;
    // 0x8004CE60: lw          $t6, 0x50($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X50);
    // 0x8004CE64: addu        $a3, $a1, $a0
    ctx->r7 = ADD32(ctx->r5, ctx->r4);
    // 0x8004CE68: sw          $t6, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->r14;
    // 0x8004CE6C: lw          $t7, 0x50($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X50);
    // 0x8004CE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004CE74: sw          $a3, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r7;
    // 0x8004CE78: jr          $ra
    // 0x8004CE7C: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
    return;
    // 0x8004CE7C: sw          $a3, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r7;
L_8004CE80:
    // 0x8004CE80: b           L_8004CD70
    // 0x8004CE84: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
        goto L_8004CD70;
    // 0x8004CE84: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8004CE88:
    // 0x8004CE88: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    // 0x8004CE8C: bne         $a1, $v0, L_8004CCA0
    if (ctx->r5 != ctx->r2) {
        // 0x8004CE90: addiu       $a2, $a2, 0x54
        ctx->r6 = ADD32(ctx->r6, 0X54);
            goto L_8004CCA0;
    }
    // 0x8004CE90: addiu       $a2, $a2, 0x54
    ctx->r6 = ADD32(ctx->r6, 0X54);
    // 0x8004CE94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004CE98: jr          $ra
    // 0x8004CE9C: nop

    return;
    // 0x8004CE9C: nop

;}
RECOMP_FUNC void func_8004CEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CEA0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004CEA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004CEA8: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x8004CEAC: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004CEB0: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004CEB4: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8004CEB8: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
    // 0x8004CEBC: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004CEC0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004CEC4: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004CEC8: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8004CECC: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x8004CED0: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004CED4: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004CED8: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8004CEDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004CEE0: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8004CEE4: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8004CEE8: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x8004CEEC: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8004CEF0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8004CEF4: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8004CEF8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8004CEFC: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8004CF00: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8004CF04: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004CF08: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8004CF0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8004CF10: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8004CF14: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004CF18: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8004CF1C: nop

    // 0x8004CF20: bc1t        L_8004CF44
    if (c1cs) {
        // 0x8004CF24: nop
    
            goto L_8004CF44;
    }
    // 0x8004CF24: nop

    // 0x8004CF28: mul.s       $f8, $f18, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8004CF2C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8004CF30: nop

    // 0x8004CF34: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8004CF38: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8004CF3C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004CF40: add.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f8.fl;
L_8004CF44:
    // 0x8004CF44: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004CF48: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004CF4C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8004CF50: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8004CF54: nop

    // 0x8004CF58: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8004CF5C: nop

    // 0x8004CF60: bc1t        L_8004CF80
    if (c1cs) {
        // 0x8004CF64: nop
    
            goto L_8004CF80;
    }
    // 0x8004CF64: nop

    // 0x8004CF68: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8004CF6C: nop

    // 0x8004CF70: mul.s       $f6, $f16, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8004CF74: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8004CF78: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004CF7C: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
L_8004CF80:
    // 0x8004CF80: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004CF84: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8004CF88: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8004CF8C: nop

    // 0x8004CF90: bc1t        L_8004CFB4
    if (c1cs) {
        // 0x8004CF94: nop
    
            goto L_8004CFB4;
    }
    // 0x8004CF94: nop

    // 0x8004CF98: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8004CF9C: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004CFA0: nop

    // 0x8004CFA4: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8004CFA8: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8004CFAC: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8004CFB0: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
L_8004CFB4:
    // 0x8004CFB4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8004CFB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8004CFBC: bc1f        L_8004CFE0
    if (!c1cs) {
        // 0x8004CFC0: nop
    
            goto L_8004CFE0;
    }
    // 0x8004CFC0: nop

    // 0x8004CFC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004CFC8: nop

    // 0x8004CFCC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8004CFD0: nop

    // 0x8004CFD4: bc1f        L_8004CFE0
    if (!c1cs) {
        // 0x8004CFD8: nop
    
            goto L_8004CFE0;
    }
    // 0x8004CFD8: nop

    // 0x8004CFDC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8004CFE0:
    // 0x8004CFE0: jr          $ra
    // 0x8004CFE4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8004CFE4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8004CFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CFE8: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004CFEC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004CFF0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004CFF4: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004CFF8: sub.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8004CFFC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004D000: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8004D004: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D00C: sub.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8004D010: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x8004D014: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8004D018: sub.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8004D01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D020: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8004D024: nop

    // 0x8004D028: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8004D02C: jr          $ra
    // 0x8004D030: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    return;
    // 0x8004D030: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
;}
RECOMP_FUNC void func_8004D034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D034: jr          $ra
    // 0x8004D038: nop

    return;
    // 0x8004D038: nop

;}
RECOMP_FUNC void func_8004D03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D03C: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004D040: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004D044: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D048: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D04C: sub.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8004D050: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D054: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8004D058: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004D05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D060: sub.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8004D064: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8004D068: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8004D06C: sub.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8004D070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D074: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8004D078: nop

    // 0x8004D07C: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8004D080: jr          $ra
    // 0x8004D084: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    return;
    // 0x8004D084: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
;}
RECOMP_FUNC void func_8004D088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D088: jr          $ra
    // 0x8004D08C: nop

    return;
    // 0x8004D08C: nop

;}
RECOMP_FUNC void func_8004D090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D090: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004D094: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004D098: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D09C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D0A0: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D0A4: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D0A8: sub.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8004D0AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D0B0: sub.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8004D0B4: sub.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8004D0B8: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8004D0BC: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8004D0C0: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8004D0C4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8004D0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D0CC: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8004D0D0: jr          $ra
    // 0x8004D0D4: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
    return;
    // 0x8004D0D4: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
;}
RECOMP_FUNC void func_8004D0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D0D8: jr          $ra
    // 0x8004D0DC: nop

    return;
    // 0x8004D0DC: nop

;}
RECOMP_FUNC void func_8004D0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D0E0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004D0E4: lw          $t6, 0x1B10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1B10);
    // 0x8004D0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D0EC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8004D0F0: beq         $t7, $zero, L_8004D3A0
    if (ctx->r15 == 0) {
        // 0x8004D0F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004D3A0;
    }
    // 0x8004D0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D0F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004D0FC: lwc1        $f0, 0x4($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8004D100: nop

    // 0x8004D104: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8004D108: nop

    // 0x8004D10C: bc1f        L_8004D11C
    if (!c1cs) {
        // 0x8004D110: nop
    
            goto L_8004D11C;
    }
    // 0x8004D110: nop

    // 0x8004D114: b           L_8004D120
    // 0x8004D118: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8004D120;
    // 0x8004D118: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_8004D11C:
    // 0x8004D11C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8004D120:
    // 0x8004D120: lwc1        $f14, 0x0($s6)
    ctx->f14.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8004D124: nop

    // 0x8004D128: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8004D12C: nop

    // 0x8004D130: bc1f        L_8004D140
    if (!c1cs) {
        // 0x8004D134: nop
    
            goto L_8004D140;
    }
    // 0x8004D134: nop

    // 0x8004D138: b           L_8004D144
    // 0x8004D13C: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
        goto L_8004D144;
    // 0x8004D13C: neg.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = -ctx->f14.fl;
L_8004D140:
    // 0x8004D140: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_8004D144:
    // 0x8004D144: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8004D148: nop

    // 0x8004D14C: bc1f        L_8004D234
    if (!c1cs) {
        // 0x8004D150: nop
    
            goto L_8004D234;
    }
    // 0x8004D150: nop

    // 0x8004D154: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8004D158: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D15C: bc1f        L_8004D16C
    if (!c1cs) {
        // 0x8004D160: addiu       $a1, $s4, 0x18
        ctx->r5 = ADD32(ctx->r20, 0X18);
            goto L_8004D16C;
    }
    // 0x8004D160: addiu       $a1, $s4, 0x18
    ctx->r5 = ADD32(ctx->r20, 0X18);
    // 0x8004D164: b           L_8004D170
    // 0x8004D168: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_8004D170;
    // 0x8004D168: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_8004D16C:
    // 0x8004D16C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8004D170:
    // 0x8004D170: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8004D174: nop

    // 0x8004D178: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8004D17C: nop

    // 0x8004D180: bc1f        L_8004D190
    if (!c1cs) {
        // 0x8004D184: nop
    
            goto L_8004D190;
    }
    // 0x8004D184: nop

    // 0x8004D188: b           L_8004D194
    // 0x8004D18C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8004D194;
    // 0x8004D18C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8004D190:
    // 0x8004D190: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8004D194:
    // 0x8004D194: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8004D198: nop

    // 0x8004D19C: bc1f        L_8004D234
    if (!c1cs) {
        // 0x8004D1A0: nop
    
            goto L_8004D234;
    }
    // 0x8004D1A0: nop

    // 0x8004D1A4: jal         0x8004D090
    // 0x8004D1A8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004D090(rdram, ctx);
        goto after_0;
    // 0x8004D1A8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x8004D1AC: lwc1        $f4, 0x4($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8004D1B0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004D1B4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004D1B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8004D1BC: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x8004D1C0: nop

    // 0x8004D1C4: bc1f        L_8004D1D4
    if (!c1cs) {
        // 0x8004D1C8: nop
    
            goto L_8004D1D4;
    }
    // 0x8004D1C8: nop

    // 0x8004D1CC: b           L_8004D41C
    // 0x8004D1D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D1D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D1D4:
    // 0x8004D1D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D1D8: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004D1DC: addiu       $s2, $s4, 0xC
    ctx->r18 = ADD32(ctx->r20, 0XC);
    // 0x8004D1E0: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
L_8004D1E4:
    // 0x8004D1E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D1E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004D1EC: jal         0x8004D090
    // 0x8004D1F0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004D090(rdram, ctx);
        goto after_1;
    // 0x8004D1F0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x8004D1F4: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8004D1F8: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x8004D1FC: nop

    // 0x8004D200: bc1f        L_8004D210
    if (!c1cs) {
        // 0x8004D204: nop
    
            goto L_8004D210;
    }
    // 0x8004D204: nop

    // 0x8004D208: b           L_8004D41C
    // 0x8004D20C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D20C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D210:
    // 0x8004D210: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8004D214: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8004D218: bc1f        L_8004D224
    if (!c1cs) {
        // 0x8004D21C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004D224;
    }
    // 0x8004D21C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004D220: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8004D224:
    // 0x8004D224: bne         $s1, $s3, L_8004D1E4
    if (ctx->r17 != ctx->r19) {
        // 0x8004D228: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8004D1E4;
    }
    // 0x8004D228: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8004D22C: b           L_8004D41C
    // 0x8004D230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D41C;
    // 0x8004D230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D234:
    // 0x8004D234: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8004D238: lwc1        $f0, 0x8($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8004D23C: bc1f        L_8004D24C
    if (!c1cs) {
        // 0x8004D240: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8004D24C;
    }
    // 0x8004D240: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D244: b           L_8004D250
    // 0x8004D248: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_8004D250;
    // 0x8004D248: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
L_8004D24C:
    // 0x8004D24C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_8004D250:
    // 0x8004D250: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8004D254: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8004D258: bc1f        L_8004D268
    if (!c1cs) {
        // 0x8004D25C: addiu       $a1, $s4, 0x18
        ctx->r5 = ADD32(ctx->r20, 0X18);
            goto L_8004D268;
    }
    // 0x8004D25C: addiu       $a1, $s4, 0x18
    ctx->r5 = ADD32(ctx->r20, 0X18);
    // 0x8004D260: b           L_8004D26C
    // 0x8004D264: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8004D26C;
    // 0x8004D264: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8004D268:
    // 0x8004D268: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8004D26C:
    // 0x8004D26C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8004D270: nop

    // 0x8004D274: bc1f        L_8004D310
    if (!c1cs) {
        // 0x8004D278: nop
    
            goto L_8004D310;
    }
    // 0x8004D278: nop

    // 0x8004D27C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D280: jal         0x8004D03C
    // 0x8004D284: addiu       $a1, $s4, 0x18
    ctx->r5 = ADD32(ctx->r20, 0X18);
    func_8004D03C(rdram, ctx);
        goto after_2;
    // 0x8004D284: addiu       $a1, $s4, 0x18
    ctx->r5 = ADD32(ctx->r20, 0X18);
    after_2:
    // 0x8004D288: lwc1        $f10, 0x0($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8004D28C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004D290: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8004D294: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8004D298: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x8004D29C: nop

    // 0x8004D2A0: bc1f        L_8004D2B0
    if (!c1cs) {
        // 0x8004D2A4: nop
    
            goto L_8004D2B0;
    }
    // 0x8004D2A4: nop

    // 0x8004D2A8: b           L_8004D41C
    // 0x8004D2AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D2AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D2B0:
    // 0x8004D2B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D2B4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004D2B8: addiu       $s2, $s4, 0xC
    ctx->r18 = ADD32(ctx->r20, 0XC);
    // 0x8004D2BC: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
L_8004D2C0:
    // 0x8004D2C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D2C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004D2C8: jal         0x8004D03C
    // 0x8004D2CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004D03C(rdram, ctx);
        goto after_3;
    // 0x8004D2CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x8004D2D0: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8004D2D4: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x8004D2D8: nop

    // 0x8004D2DC: bc1f        L_8004D2EC
    if (!c1cs) {
        // 0x8004D2E0: nop
    
            goto L_8004D2EC;
    }
    // 0x8004D2E0: nop

    // 0x8004D2E4: b           L_8004D41C
    // 0x8004D2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D2EC:
    // 0x8004D2EC: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8004D2F0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8004D2F4: bc1f        L_8004D300
    if (!c1cs) {
        // 0x8004D2F8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004D300;
    }
    // 0x8004D2F8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004D2FC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8004D300:
    // 0x8004D300: bne         $s1, $s3, L_8004D2C0
    if (ctx->r17 != ctx->r19) {
        // 0x8004D304: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8004D2C0;
    }
    // 0x8004D304: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8004D308: b           L_8004D41C
    // 0x8004D30C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D41C;
    // 0x8004D30C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D310:
    // 0x8004D310: jal         0x8004CFE8
    // 0x8004D314: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004CFE8(rdram, ctx);
        goto after_4;
    // 0x8004D314: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_4:
    // 0x8004D318: lwc1        $f8, 0x8($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8004D31C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004D320: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8004D324: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8004D328: c.lt.s      $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f10.fl < ctx->f22.fl;
    // 0x8004D32C: nop

    // 0x8004D330: bc1f        L_8004D340
    if (!c1cs) {
        // 0x8004D334: nop
    
            goto L_8004D340;
    }
    // 0x8004D334: nop

    // 0x8004D338: b           L_8004D41C
    // 0x8004D33C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D33C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D340:
    // 0x8004D340: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D344: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004D348: addiu       $s2, $s4, 0xC
    ctx->r18 = ADD32(ctx->r20, 0XC);
    // 0x8004D34C: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
L_8004D350:
    // 0x8004D350: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004D358: jal         0x8004CFE8
    // 0x8004D35C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004CFE8(rdram, ctx);
        goto after_5;
    // 0x8004D35C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x8004D360: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8004D364: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x8004D368: nop

    // 0x8004D36C: bc1f        L_8004D37C
    if (!c1cs) {
        // 0x8004D370: nop
    
            goto L_8004D37C;
    }
    // 0x8004D370: nop

    // 0x8004D374: b           L_8004D41C
    // 0x8004D378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D378: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D37C:
    // 0x8004D37C: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8004D380: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8004D384: bc1f        L_8004D390
    if (!c1cs) {
        // 0x8004D388: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004D390;
    }
    // 0x8004D388: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004D38C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8004D390:
    // 0x8004D390: bne         $s1, $s3, L_8004D350
    if (ctx->r17 != ctx->r19) {
        // 0x8004D394: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8004D350;
    }
    // 0x8004D394: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8004D398: b           L_8004D41C
    // 0x8004D39C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D41C;
    // 0x8004D39C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D3A0:
    // 0x8004D3A0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D3A4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8004D3A8: addiu       $a2, $s4, 0x18
    ctx->r6 = ADD32(ctx->r20, 0X18);
    // 0x8004D3AC: jal         0x8004CEA0
    // 0x8004D3B0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_8004CEA0(rdram, ctx);
        goto after_6;
    // 0x8004D3B0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_6:
    // 0x8004D3B4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004D3B8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8004D3BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D3C0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004D3C4: addiu       $s2, $s4, 0xC
    ctx->r18 = ADD32(ctx->r20, 0XC);
    // 0x8004D3C8: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
L_8004D3CC:
    // 0x8004D3CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004D3D0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8004D3D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8004D3D8: jal         0x8004CEA0
    // 0x8004D3DC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8004CEA0(rdram, ctx);
        goto after_7;
    // 0x8004D3DC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_7:
    // 0x8004D3E0: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8004D3E4: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x8004D3E8: nop

    // 0x8004D3EC: bc1f        L_8004D3FC
    if (!c1cs) {
        // 0x8004D3F0: nop
    
            goto L_8004D3FC;
    }
    // 0x8004D3F0: nop

    // 0x8004D3F4: b           L_8004D41C
    // 0x8004D3F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D41C;
    // 0x8004D3F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D3FC:
    // 0x8004D3FC: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8004D400: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8004D404: bc1f        L_8004D410
    if (!c1cs) {
        // 0x8004D408: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004D410;
    }
    // 0x8004D408: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004D40C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8004D410:
    // 0x8004D410: bne         $s1, $s3, L_8004D3CC
    if (ctx->r17 != ctx->r19) {
        // 0x8004D414: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8004D3CC;
    }
    // 0x8004D414: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8004D418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D41C:
    // 0x8004D41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D424: jr          $ra
    // 0x8004D428: nop

    return;
    // 0x8004D428: nop

;}
RECOMP_FUNC void func_8004D42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D42C: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004D430: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004D434: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004D438: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004D43C: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004D440: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004D444: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8004D448: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D44C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D450: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x8004D454: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D458: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8004D45C: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8004D460: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8004D464: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D468: nop

    // 0x8004D46C: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004D470: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8004D474: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8004D478: add.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8004D47C: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x8004D480: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004D484: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004D488: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004D48C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8004D490: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
    // 0x8004D494: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D498: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D49C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8004D4A0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8004D4A4: jr          $ra
    // 0x8004D4A8: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
    return;
    // 0x8004D4A8: swc1        $f6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8004D4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D4AC: jr          $ra
    // 0x8004D4B0: nop

    return;
    // 0x8004D4B0: nop

;}
RECOMP_FUNC void func_8004D4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D4B4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004D4B8: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D4BC: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004D4C0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004D4C4: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004D4C8: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8004D4CC: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004D4D0: nop

    // 0x8004D4D4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8004D4D8: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004D4DC: nop

    // 0x8004D4E0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004D4E4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D4E8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8004D4EC: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D4F0: nop

    // 0x8004D4F4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004D4F8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D4FC: nop

    // 0x8004D500: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004D504: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004D508: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004D50C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8004D510: nop

    // 0x8004D514: bc1f        L_8004D528
    if (!c1cs) {
        // 0x8004D518: nop
    
            goto L_8004D528;
    }
    // 0x8004D518: nop

    // 0x8004D51C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8004D520: jr          $ra
    // 0x8004D524: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8004D524: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8004D528:
    // 0x8004D528: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8004D52C: jr          $ra
    // 0x8004D530: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8004D530: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8004D534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D534: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004D538: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004D53C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D540: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D544: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D548: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D54C: sub.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8004D550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D554: sub.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8004D558: sub.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x8004D55C: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8004D560: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8004D564: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8004D568: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8004D56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D570: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8004D574: jr          $ra
    // 0x8004D578: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
    return;
    // 0x8004D578: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
;}
RECOMP_FUNC void func_8004D57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D57C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D584: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004D588: addiu       $a1, $s3, 0x18
    ctx->r5 = ADD32(ctx->r19, 0X18);
    // 0x8004D58C: jal         0x8004D534
    // 0x8004D590: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004D534(rdram, ctx);
        goto after_0;
    // 0x8004D590: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x8004D594: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8004D598: addiu       $s2, $s3, 0xC
    ctx->r18 = ADD32(ctx->r19, 0XC);
    // 0x8004D59C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8004D5A0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8004D5A4: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x8004D5A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8004D5AC:
    // 0x8004D5AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004D5B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004D5B4: jal         0x8004D534
    // 0x8004D5B8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004D534(rdram, ctx);
        goto after_1;
    // 0x8004D5B8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x8004D5BC: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8004D5C0: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x8004D5C4: nop

    // 0x8004D5C8: bc1f        L_8004D5D8
    if (!c1cs) {
        // 0x8004D5CC: nop
    
            goto L_8004D5D8;
    }
    // 0x8004D5CC: nop

    // 0x8004D5D0: b           L_8004D5F8
    // 0x8004D5D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004D5F8;
    // 0x8004D5D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004D5D8:
    // 0x8004D5D8: c.eq.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl == ctx->f22.fl;
    // 0x8004D5DC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8004D5E0: bc1f        L_8004D5EC
    if (!c1cs) {
        // 0x8004D5E4: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004D5EC;
    }
    // 0x8004D5E4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004D5E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8004D5EC:
    // 0x8004D5EC: bne         $s1, $s3, L_8004D5AC
    if (ctx->r17 != ctx->r19) {
        // 0x8004D5F0: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8004D5AC;
    }
    // 0x8004D5F0: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8004D5F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D5F8:
    // 0x8004D5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D600: jr          $ra
    // 0x8004D604: nop

    return;
    // 0x8004D604: nop

;}
RECOMP_FUNC void func_8004D608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D608: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004D60C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004D610: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004D614: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004D618: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004D61C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8004D620: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8004D624: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004D628: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8004D62C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004D630: nop

    // 0x8004D634: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004D638: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004D63C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8004D640: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8004D644: nop

    // 0x8004D648: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004D64C: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004D650: nop

    // 0x8004D654: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004D658: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004D65C: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8004D660: nop

    // 0x8004D664: bc1f        L_8004D674
    if (!c1cs) {
        // 0x8004D668: nop
    
            goto L_8004D674;
    }
    // 0x8004D668: nop

    // 0x8004D66C: jr          $ra
    // 0x8004D670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004D670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004D674:
    // 0x8004D674: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8004D678: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004D67C: bc1f        L_8004D68C
    if (!c1cs) {
        // 0x8004D680: nop
    
            goto L_8004D68C;
    }
    // 0x8004D680: nop

    // 0x8004D684: b           L_8004D68C
    // 0x8004D688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004D68C;
    // 0x8004D688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D68C:
    // 0x8004D68C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004D690: jr          $ra
    // 0x8004D694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004D694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004D698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D698: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8004D69C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004D6A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004D6A4: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x8004D6A8: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x8004D6AC: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x8004D6B0: jal         0x8004C26C
    // 0x8004D6B4: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    func_8004C26C(rdram, ctx);
        goto after_0;
    // 0x8004D6B4: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    after_0:
    // 0x8004D6B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004D6BC: lwc1        $f6, 0x5DD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5DD0);
    // 0x8004D6C0: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8004D6C4: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D6C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004D6CC: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x8004D6D0: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x8004D6D4: lw          $v1, 0x20($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X20);
    // 0x8004D6D8: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8004D6DC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8004D6E0: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8004D6E4: blez        $t8, L_8004DA40
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8004D6E8: addu        $t9, $t9, $a2
        ctx->r25 = ADD32(ctx->r25, ctx->r6);
            goto L_8004DA40;
    }
    // 0x8004D6E8: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8004D6EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004D6F0: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x8004D6F4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8004D6F8: addiu       $s7, $s7, -0x5A78
    ctx->r23 = ADD32(ctx->r23, -0X5A78);
    // 0x8004D6FC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8004D700: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8004D704: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x8004D708: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_8004D70C:
    // 0x8004D70C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8004D710: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D714: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8004D718: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x8004D71C: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x8004D720: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8004D724: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004D728: lw          $a1, 0x10($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X10);
    // 0x8004D72C: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    // 0x8004D730: jal         0x8004C1C4
    // 0x8004D734: nop

    func_8004C1C4(rdram, ctx);
        goto after_1;
    // 0x8004D734: nop

    after_1:
    // 0x8004D738: beq         $v0, $zero, L_8004DA08
    if (ctx->r2 == 0) {
        // 0x8004D73C: lw          $t6, 0xC0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XC0);
            goto L_8004DA08;
    }
    // 0x8004D73C: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D740: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D744: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x8004D748: jal         0x8004C020
    // 0x8004D74C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8004C020(rdram, ctx);
        goto after_2;
    // 0x8004D74C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8004D750: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D754: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8004D758: lw          $v1, 0x20($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X20);
    // 0x8004D75C: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8004D760: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8004D764: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8004D768: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004D76C: lw          $fp, 0x0($t7)
    ctx->r30 = MEM_W(ctx->r15, 0X0);
    // 0x8004D770: nop

    // 0x8004D774: lwc1        $f10, 0x4($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004D778: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8004D77C: c.le.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl <= ctx->f24.fl;
    // 0x8004D780: nop

    // 0x8004D784: bc1t        L_8004DA18
    if (c1cs) {
        // 0x8004D788: lw          $t7, 0xA4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA4);
            goto L_8004DA18;
    }
    // 0x8004D788: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8004D78C: jal         0x8004D608
    // 0x8004D790: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_8004D608(rdram, ctx);
        goto after_3;
    // 0x8004D790: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_3:
    // 0x8004D794: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8004D798: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004D79C: nop

    // 0x8004D7A0: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x8004D7A4: nop

    // 0x8004D7A8: bc1f        L_8004D918
    if (!c1cs) {
        // 0x8004D7AC: addiu       $a2, $sp, 0xAC
        ctx->r6 = ADD32(ctx->r29, 0XAC);
            goto L_8004D918;
    }
    // 0x8004D7AC: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x8004D7B0: addiu       $s4, $sp, 0xAC
    ctx->r20 = ADD32(ctx->r29, 0XAC);
    // 0x8004D7B4: jal         0x8004D57C
    // 0x8004D7B8: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    func_8004D57C(rdram, ctx);
        goto after_4;
    // 0x8004D7B8: or          $s3, $s2, $zero
    ctx->r19 = ctx->r18 | 0;
    after_4:
    // 0x8004D7BC: blez        $v0, L_8004D914
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004D7C0: addiu       $s2, $sp, 0x80
        ctx->r18 = ADD32(ctx->r29, 0X80);
            goto L_8004D914;
    }
    // 0x8004D7C0: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x8004D7C4: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004D7C8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8004D7CC: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8004D7D0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004D7D4: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004D7D8: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8004D7DC: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8004D7E0: lwc1        $f0, 0x4($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004D7E4: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004D7E8: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8004D7EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004D7F0: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8004D7F4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004D7F8: nop

    // 0x8004D7FC: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004D800: lwc1        $f8, 0x8($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8004D804: nop

    // 0x8004D808: mul.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004D80C: add.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8004D810: nop

    // 0x8004D814: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8004D818: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x8004D81C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004D820: nop

    // 0x8004D824: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004D828: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8004D82C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8004D830: bc1f        L_8004D918
    if (!c1cs) {
        // 0x8004D834: addiu       $a2, $sp, 0xAC
        ctx->r6 = ADD32(ctx->r29, 0XAC);
            goto L_8004D918;
    }
    // 0x8004D834: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x8004D838: lwc1        $f8, 0xC($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0XC);
    // 0x8004D83C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8004D840: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8004D844: nop

    // 0x8004D848: bc1f        L_8004D918
    if (!c1cs) {
        // 0x8004D84C: addiu       $a2, $sp, 0xAC
        ctx->r6 = ADD32(ctx->r29, 0XAC);
            goto L_8004D918;
    }
    // 0x8004D84C: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x8004D850: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8004D854: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004D858: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8004D85C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004D860: swc1        $f6, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->f6.u32l;
    // 0x8004D864: swc1        $f4, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->f4.u32l;
    // 0x8004D868: swc1        $f8, 0x10($s7)
    MEM_W(0X10, ctx->r23) = ctx->f8.u32l;
    // 0x8004D86C: swc1        $f10, 0x20($s7)
    MEM_W(0X20, ctx->r23) = ctx->f10.u32l;
    // 0x8004D870: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004D874: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004D878: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004D87C: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8004D880: swc1        $f6, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->f6.u32l;
    // 0x8004D884: swc1        $f4, 0x28($s7)
    MEM_W(0X28, ctx->r23) = ctx->f4.u32l;
    // 0x8004D888: swc1        $f8, 0x2C($s7)
    MEM_W(0X2C, ctx->r23) = ctx->f8.u32l;
    // 0x8004D88C: swc1        $f10, 0x30($s7)
    MEM_W(0X30, ctx->r23) = ctx->f10.u32l;
    // 0x8004D890: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x8004D894: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8004D898: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8004D89C: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8004D8A0: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8004D8A4: sw          $t8, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r24;
    // 0x8004D8A8: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x8004D8AC: swc1        $f6, 0x34($s7)
    MEM_W(0X34, ctx->r23) = ctx->f6.u32l;
    // 0x8004D8B0: swc1        $f4, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->f4.u32l;
    // 0x8004D8B4: swc1        $f8, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->f8.u32l;
    // 0x8004D8B8: swc1        $f10, 0x40($s7)
    MEM_W(0X40, ctx->r23) = ctx->f10.u32l;
    // 0x8004D8BC: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8004D8C0: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D8C4: swc1        $f6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->f6.u32l;
    // 0x8004D8C8: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004D8CC: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D8D0: swc1        $f4, 0x48($s7)
    MEM_W(0X48, ctx->r23) = ctx->f4.u32l;
    // 0x8004D8D4: lwc1        $f8, 0x8($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8004D8D8: nop

    // 0x8004D8DC: swc1        $f8, 0x4C($s7)
    MEM_W(0X4C, ctx->r23) = ctx->f8.u32l;
    // 0x8004D8E0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004D8E4: nop

    // 0x8004D8E8: sw          $t7, 0x50($s7)
    MEM_W(0X50, ctx->r23) = ctx->r15;
    // 0x8004D8EC: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x8004D8F0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8004D8F4: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004D8F8: nop

    // 0x8004D8FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004D900: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8004D904: nop

    // 0x8004D908: lw          $t6, 0x30($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X30);
    // 0x8004D90C: nop

    // 0x8004D910: sw          $t6, 0x58($s7)
    MEM_W(0X58, ctx->r23) = ctx->r14;
L_8004D914:
    // 0x8004D914: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
L_8004D918:
    // 0x8004D918: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8004D91C: jal         0x8004D4B4
    // 0x8004D920: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8004D4B4(rdram, ctx);
        goto after_5;
    // 0x8004D920: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_5:
    // 0x8004D924: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x8004D928: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8004D92C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D930: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8004D934: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004D938: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8004D93C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004D940: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D944: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8004D948: nop

    // 0x8004D94C: bc1f        L_8004D958
    if (!c1cs) {
        // 0x8004D950: nop
    
            goto L_8004D958;
    }
    // 0x8004D950: nop

    // 0x8004D954: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
L_8004D958:
    // 0x8004D958: bne         $s5, $zero, L_8004D96C
    if (ctx->r21 != 0) {
        // 0x8004D95C: andi        $t7, $s5, 0x2
        ctx->r15 = ctx->r21 & 0X2;
            goto L_8004D96C;
    }
    // 0x8004D95C: andi        $t7, $s5, 0x2
    ctx->r15 = ctx->r21 & 0X2;
    // 0x8004D960: lw          $v1, 0x20($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X20);
    // 0x8004D964: b           L_8004DA18
    // 0x8004D968: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
        goto L_8004DA18;
    // 0x8004D968: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
L_8004D96C:
    // 0x8004D96C: beq         $t7, $zero, L_8004DA04
    if (ctx->r15 == 0) {
        // 0x8004D970: addiu       $a0, $sp, 0xAC
        ctx->r4 = ADD32(ctx->r29, 0XAC);
            goto L_8004DA04;
    }
    // 0x8004D970: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x8004D974: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8004D978: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8004D97C: jal         0x8004D42C
    // 0x8004D980: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_8004D42C(rdram, ctx);
        goto after_6;
    // 0x8004D980: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_6:
    // 0x8004D984: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8004D988: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x8004D98C: jal         0x8004D0E0
    // 0x8004D990: or          $s6, $fp, $zero
    ctx->r22 = ctx->r30 | 0;
    func_8004D0E0(rdram, ctx);
        goto after_7;
    // 0x8004D990: or          $s6, $fp, $zero
    ctx->r22 = ctx->r30 | 0;
    after_7:
    // 0x8004D994: blez        $v0, L_8004DA04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004D998: addiu       $s2, $sp, 0x80
        ctx->r18 = ADD32(ctx->r29, 0X80);
            goto L_8004DA04;
    }
    // 0x8004D998: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x8004D99C: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D9A0: swc1        $f24, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f24.u32l;
    // 0x8004D9A4: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x8004D9A8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8004D9AC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004D9B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004D9B4: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004D9B8: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8004D9BC: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8004D9C0: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    // 0x8004D9C4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x8004D9C8: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x8004D9CC: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x8004D9D0: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x8004D9D4: addiu       $t3, $sp, 0x74
    ctx->r11 = ADD32(ctx->r29, 0X74);
    // 0x8004D9D8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004D9DC: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8004D9E0: addiu       $t5, $v0, 0x4
    ctx->r13 = ADD32(ctx->r2, 0X4);
    // 0x8004D9E4: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8004D9E8: jal         0x8004CC94
    // 0x8004D9EC: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    func_8004CC94(rdram, ctx);
        goto after_8;
    // 0x8004D9EC: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    after_8:
    // 0x8004D9F0: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8004D9F4: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x8004D9F8: lw          $v1, 0x20($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X20);
    // 0x8004D9FC: b           L_8004DA18
    // 0x8004DA00: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
        goto L_8004DA18;
    // 0x8004DA00: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
L_8004DA04:
    // 0x8004DA04: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
L_8004DA08:
    // 0x8004DA08: nop

    // 0x8004DA0C: lw          $v1, 0x20($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X20);
    // 0x8004DA10: nop

    // 0x8004DA14: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
L_8004DA18:
    // 0x8004DA18: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8004DA1C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004DA20: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x8004DA24: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8004DA28: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x8004DA2C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8004DA30: nop

    // 0x8004DA34: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8004DA38: bne         $at, $zero, L_8004D70C
    if (ctx->r1 != 0) {
        // 0x8004DA3C: lw          $t6, 0xB8($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB8);
            goto L_8004D70C;
    }
    // 0x8004DA3C: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_8004DA40:
    // 0x8004DA40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004DA44: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8004DA48: jr          $ra
    // 0x8004DA4C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8004DA4C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8004DA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DA50: jr          $ra
    // 0x8004DA54: nop

    return;
    // 0x8004DA54: nop

;}
RECOMP_FUNC void func_8004DA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DA58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004DA5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004DA60: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8004DA64: nop

    // 0x8004DA68: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8004DA6C: beq         $at, $zero, L_8004DC40
    if (ctx->r1 == 0) {
        // 0x8004DA70: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8004DC40;
    }
    // 0x8004DA70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004DA74: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004DA78: addu        $at, $at, $t6
    gpr jr_addend_8004DA84 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004DA7C: lw          $t6, 0x5DD4($at)
    ctx->r14 = ADD32(ctx->r1, 0X5DD4);
    // 0x8004DA80: nop

    // 0x8004DA84: jr          $t6
    // 0x8004DA88: nop

    switch (jr_addend_8004DA84 >> 2) {
        case 0: goto L_8004DA8C; break;
        case 1: goto L_8004DAB0; break;
        case 2: goto L_8004DADC; break;
        case 3: goto L_8004DB08; break;
        case 4: goto L_8004DB38; break;
        case 5: goto L_8004DB68; break;
        case 6: goto L_8004DB8C; break;
        case 7: goto L_8004DBB8; break;
        case 8: goto L_8004DBE4; break;
        case 9: goto L_8004DC14; break;
        default: switch_error(__func__, 0x8004DA84, 0x80095DD4);
    }
    // 0x8004DA88: nop

L_8004DA8C:
    // 0x8004DA8C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004DA90: nop

    // 0x8004DA94: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8004DA98: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004DA9C: nop

    // 0x8004DAA0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8004DAA4: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004DAA8: b           L_8004DC40
    // 0x8004DAAC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
        goto L_8004DC40;
    // 0x8004DAAC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8004DAB0:
    // 0x8004DAB0: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DAB4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004DAB8: nop

    // 0x8004DABC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004DAC0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8004DAC4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004DAC8: nop

    // 0x8004DACC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8004DAD0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004DAD4: b           L_8004DC40
    // 0x8004DAD8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_8004DC40;
    // 0x8004DAD8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8004DADC:
    // 0x8004DADC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004DAE0: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DAE4: nop

    // 0x8004DAE8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004DAEC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8004DAF0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004DAF4: nop

    // 0x8004DAF8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8004DAFC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004DB00: b           L_8004DC40
    // 0x8004DB04: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_8004DC40;
    // 0x8004DB04: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8004DB08:
    // 0x8004DB08: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004DB0C: nop

    // 0x8004DB10: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8004DB14: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004DB18: nop

    // 0x8004DB1C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8004DB20: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004DB24: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DB28: nop

    // 0x8004DB2C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004DB30: b           L_8004DC40
    // 0x8004DB34: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
        goto L_8004DC40;
    // 0x8004DB34: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8004DB38:
    // 0x8004DB38: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004DB3C: nop

    // 0x8004DB40: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8004DB44: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004DB48: nop

    // 0x8004DB4C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8004DB50: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DB54: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004DB58: nop

    // 0x8004DB5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004DB60: b           L_8004DC40
    // 0x8004DB64: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
        goto L_8004DC40;
    // 0x8004DB64: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8004DB68:
    // 0x8004DB68: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004DB6C: nop

    // 0x8004DB70: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8004DB74: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004DB78: nop

    // 0x8004DB7C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8004DB80: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004DB84: b           L_8004DC40
    // 0x8004DB88: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
        goto L_8004DC40;
    // 0x8004DB88: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8004DB8C:
    // 0x8004DB8C: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DB90: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004DB94: nop

    // 0x8004DB98: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004DB9C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8004DBA0: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004DBA4: nop

    // 0x8004DBA8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8004DBAC: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004DBB0: b           L_8004DC40
    // 0x8004DBB4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
        goto L_8004DC40;
    // 0x8004DBB4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8004DBB8:
    // 0x8004DBB8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004DBBC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DBC0: nop

    // 0x8004DBC4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004DBC8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8004DBCC: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004DBD0: nop

    // 0x8004DBD4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8004DBD8: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004DBDC: b           L_8004DC40
    // 0x8004DBE0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_8004DC40;
    // 0x8004DBE0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8004DBE4:
    // 0x8004DBE4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004DBE8: nop

    // 0x8004DBEC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8004DBF0: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004DBF4: nop

    // 0x8004DBF8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8004DBFC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004DC00: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DC04: nop

    // 0x8004DC08: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004DC0C: b           L_8004DC40
    // 0x8004DC10: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_8004DC40;
    // 0x8004DC10: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8004DC14:
    // 0x8004DC14: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004DC18: nop

    // 0x8004DC1C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8004DC20: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004DC24: nop

    // 0x8004DC28: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8004DC2C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8004DC30: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004DC34: nop

    // 0x8004DC38: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004DC3C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8004DC40:
    // 0x8004DC40: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004DC44: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8004DC48: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8004DC4C: jal         0x8002F32C
    // 0x8004DC50: nop

    func_8002F32C(rdram, ctx);
        goto after_0;
    // 0x8004DC50: nop

    after_0:
    // 0x8004DC54: beq         $v0, $zero, L_8004DCA4
    if (ctx->r2 == 0) {
        // 0x8004DC58: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_8004DCA4;
    }
    // 0x8004DC58: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8004DC5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004DC60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004DC64: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
L_8004DC68:
    // 0x8004DC68: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8004DC6C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8004DC70: beq         $a0, $zero, L_8004DC90
    if (ctx->r4 == 0) {
        // 0x8004DC74: nop
    
            goto L_8004DC90;
    }
    // 0x8004DC74: nop

    // 0x8004DC78: bne         $v0, $a0, L_8004DC88
    if (ctx->r2 != ctx->r4) {
        // 0x8004DC7C: nop
    
            goto L_8004DC88;
    }
    // 0x8004DC7C: nop

    // 0x8004DC80: b           L_8004DCA8
    // 0x8004DC84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004DCA8;
    // 0x8004DC84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004DC88:
    // 0x8004DC88: bne         $v1, $a2, L_8004DC68
    if (ctx->r3 != ctx->r6) {
        // 0x8004DC8C: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8004DC68;
    }
    // 0x8004DC8C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8004DC90:
    // 0x8004DC90: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8004DC94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DC98: sw          $a3, -0x5A88($at)
    MEM_W(-0X5A88, ctx->r1) = ctx->r7;
    // 0x8004DC9C: b           L_8004DCA8
    // 0x8004DCA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004DCA8;
    // 0x8004DCA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DCA4:
    // 0x8004DCA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004DCA8:
    // 0x8004DCA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004DCAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8004DCB0: jr          $ra
    // 0x8004DCB4: nop

    return;
    // 0x8004DCB4: nop

;}
RECOMP_FUNC void func_8004DCB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DCB8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8004DCBC: addiu       $v0, $v0, -0x5AA8
    ctx->r2 = ADD32(ctx->r2, -0X5AA8);
    // 0x8004DCC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004DCC4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8004DCC8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004DCCC: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x8004DCD0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8004DCD4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8004DCD8: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8004DCDC: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8004DCE0: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8004DCE4: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8004DCE8: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x8004DCEC: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8004DCF0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x8004DCF4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x8004DCF8: jr          $ra
    // 0x8004DCFC: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x8004DCFC: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8004DD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DD00: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8004DD04: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8004DD08: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8004DD0C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8004DD10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8004DD14:
    // 0x8004DD14: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8004DD18: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8004DD1C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x8004DD20: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8004DD24: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8004DD28: bne         $v0, $a0, L_8004DD14
    if (ctx->r2 != ctx->r4) {
        // 0x8004DD2C: sw          $zero, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = 0;
            goto L_8004DD14;
    }
    // 0x8004DD2C: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x8004DD30: jr          $ra
    // 0x8004DD34: nop

    return;
    // 0x8004DD34: nop

;}
RECOMP_FUNC void func_8004DD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DD38: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8004DD3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004DD40: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004DD44: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x8004DD48: jal         0x8004DD00
    // 0x8004DD4C: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    func_8004DD00(rdram, ctx);
        goto after_0;
    // 0x8004DD4C: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    after_0:
    // 0x8004DD50: jal         0x8004DCB8
    // 0x8004DD54: nop

    func_8004DCB8(rdram, ctx);
        goto after_1;
    // 0x8004DD54: nop

    after_1:
    // 0x8004DD58: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8004DD5C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8004DD60: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x8004DD64: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x8004DD68: sll         $s5, $t6, 2
    ctx->r21 = S32(ctx->r14 << 2);
    // 0x8004DD6C: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x8004DD70: addiu       $s3, $s2, 0xC
    ctx->r19 = ADD32(ctx->r18, 0XC);
L_8004DD74:
    // 0x8004DD74: lw          $t7, 0x1C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X1C);
    // 0x8004DD78: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004DD7C: addiu       $s0, $s0, -0x2E38
    ctx->r16 = ADD32(ctx->r16, -0X2E38);
    // 0x8004DD80: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8004DD84: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x8004DD88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004DD8C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004DD90: jal         0x8004DA58
    // 0x8004DD94: addu        $a2, $t7, $s5
    ctx->r6 = ADD32(ctx->r15, ctx->r21);
    func_8004DA58(rdram, ctx);
        goto after_2;
    // 0x8004DD94: addu        $a2, $t7, $s5
    ctx->r6 = ADD32(ctx->r15, ctx->r21);
    after_2:
    // 0x8004DD98: bltz        $v0, L_8004DDF4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004DD9C: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_8004DDF4;
    }
    // 0x8004DD9C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004DDA0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8004DDA4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8004DDA8: addiu       $t9, $t9, -0x5AA8
    ctx->r25 = ADD32(ctx->r25, -0X5AA8);
    // 0x8004DDAC: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8004DDB0: sw          $s2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r18;
    // 0x8004DDB4: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x8004DDB8: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8004DDBC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8004DDC0: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004DDC4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004DDC8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8004DDCC: jal         0x8004D698
    // 0x8004DDD0: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    func_8004D698(rdram, ctx);
        goto after_3;
    // 0x8004DDD0: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    after_3:
    // 0x8004DDD4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8004DDD8: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x8004DDDC: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8004DDE0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8004DDE4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004DDE8: bgez        $s4, L_8004DDF8
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8004DDEC: lw          $t7, 0x6C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X6C);
            goto L_8004DDF8;
    }
    // 0x8004DDEC: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8004DDF0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8004DDF4:
    // 0x8004DDF4: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
L_8004DDF8:
    // 0x8004DDF8: nop

    // 0x8004DDFC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004DE00: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x8004DE04: bne         $at, $zero, L_8004DD74
    if (ctx->r1 != 0) {
        // 0x8004DE08: sw          $t8, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r24;
            goto L_8004DD74;
    }
    // 0x8004DE08: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x8004DE0C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004DE10: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004DE14: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x8004DE18: blez        $a1, L_8004DF90
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8004DE1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8004DF90;
    }
    // 0x8004DE1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004DE20:
    // 0x8004DE20: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8004DE24: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004DE28: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8004DE2C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8004DE30: lw          $a0, -0x61E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X61E8);
    // 0x8004DE34: nop

    // 0x8004DE38: beq         $s2, $a0, L_8004DF78
    if (ctx->r18 == ctx->r4) {
        // 0x8004DE3C: lw          $t6, 0x6C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X6C);
            goto L_8004DF78;
    }
    // 0x8004DE3C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8004DE40: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8004DE44: nop

    // 0x8004DE48: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8004DE4C: bne         $t7, $zero, L_8004DF74
    if (ctx->r15 != 0) {
        // 0x8004DE50: andi        $t8, $v0, 0x400
        ctx->r24 = ctx->r2 & 0X400;
            goto L_8004DF74;
    }
    // 0x8004DE50: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x8004DE54: bne         $t8, $zero, L_8004DF74
    if (ctx->r24 != 0) {
        // 0x8004DE58: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_8004DF74;
    }
    // 0x8004DE58: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x8004DE5C: beq         $t9, $zero, L_8004DF68
    if (ctx->r25 == 0) {
        // 0x8004DE60: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8004DF68;
    }
    // 0x8004DE60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004DE64: lw          $t6, 0x1C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1C);
    // 0x8004DE68: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8004DE6C: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x8004DE70: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8004DE74: bne         $v1, $at, L_8004DE84
    if (ctx->r3 != ctx->r1) {
        // 0x8004DE78: nop
    
            goto L_8004DE84;
    }
    // 0x8004DE78: nop

    // 0x8004DE7C: b           L_8004DF18
    // 0x8004DE80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004DF18;
    // 0x8004DE80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004DE84:
    // 0x8004DE84: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8004DE88: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8004DE8C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8004DE90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8004DE94: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8004DE98: nop

    // 0x8004DE9C: bc1f        L_8004DEAC
    if (!c1cs) {
        // 0x8004DEA0: nop
    
            goto L_8004DEAC;
    }
    // 0x8004DEA0: nop

    // 0x8004DEA4: b           L_8004DF18
    // 0x8004DEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004DF18;
    // 0x8004DEA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DEAC:
    // 0x8004DEAC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004DEB0: nop

    // 0x8004DEB4: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8004DEB8: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8004DEBC: nop

    // 0x8004DEC0: bc1f        L_8004DED0
    if (!c1cs) {
        // 0x8004DEC4: nop
    
            goto L_8004DED0;
    }
    // 0x8004DEC4: nop

    // 0x8004DEC8: b           L_8004DF18
    // 0x8004DECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004DF18;
    // 0x8004DECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DED0:
    // 0x8004DED0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004DED4: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8004DED8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8004DEDC: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8004DEE0: nop

    // 0x8004DEE4: bc1f        L_8004DEF4
    if (!c1cs) {
        // 0x8004DEE8: nop
    
            goto L_8004DEF4;
    }
    // 0x8004DEE8: nop

    // 0x8004DEEC: b           L_8004DF18
    // 0x8004DEF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004DF18;
    // 0x8004DEF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DEF4:
    // 0x8004DEF4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004DEF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004DEFC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8004DF00: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8004DF04: nop

    // 0x8004DF08: bc1f        L_8004DF18
    if (!c1cs) {
        // 0x8004DF0C: nop
    
            goto L_8004DF18;
    }
    // 0x8004DF0C: nop

    // 0x8004DF10: b           L_8004DF18
    // 0x8004DF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004DF18;
    // 0x8004DF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DF18:
    // 0x8004DF18: bgtz        $v0, L_8004DF78
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004DF1C: lw          $t6, 0x6C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X6C);
            goto L_8004DF78;
    }
    // 0x8004DF1C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8004DF20: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8004DF24: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8004DF28: sw          $s2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r18;
    // 0x8004DF2C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8004DF30: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x8004DF34: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8004DF38: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004DF3C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004DF40: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8004DF44: jal         0x8004D698
    // 0x8004DF48: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    func_8004D698(rdram, ctx);
        goto after_4;
    // 0x8004DF48: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    after_4:
    // 0x8004DF4C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8004DF50: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x8004DF54: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8004DF58: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004DF5C: bgez        $s4, L_8004DF68
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8004DF60: nop
    
            goto L_8004DF68;
    }
    // 0x8004DF60: nop

    // 0x8004DF64: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8004DF68:
    // 0x8004DF68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004DF6C: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004DF70: nop

L_8004DF74:
    // 0x8004DF74: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
L_8004DF78:
    // 0x8004DF78: nop

    // 0x8004DF7C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004DF80: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004DF84: bne         $at, $zero, L_8004DE20
    if (ctx->r1 != 0) {
        // 0x8004DF88: sw          $t7, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r15;
            goto L_8004DE20;
    }
    // 0x8004DF88: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x8004DF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004DF90:
    // 0x8004DF90: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8004DF94: jr          $ra
    // 0x8004DF98: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    return;
    // 0x8004DF98: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
;}
RECOMP_FUNC void func_8004DF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DF9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004DFA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004DFA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004DFA8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8004DFAC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004DFB0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004DFB4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8004DFB8: addiu       $a2, $zero, 0x540
    ctx->r6 = ADD32(0, 0X540);
    // 0x8004DFBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004DFC0:
    // 0x8004DFC0: addiu       $v1, $v1, 0x54
    ctx->r3 = ADD32(ctx->r3, 0X54);
    // 0x8004DFC4: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    // 0x8004DFC8: sw          $zero, -0x54($a1)
    MEM_W(-0X54, ctx->r5) = 0;
    // 0x8004DFCC: sw          $v0, -0x50($a1)
    MEM_W(-0X50, ctx->r5) = ctx->r2;
    // 0x8004DFD0: swc1        $f0, -0x4C($a1)
    MEM_W(-0X4C, ctx->r5) = ctx->f0.u32l;
    // 0x8004DFD4: swc1        $f0, -0x48($a1)
    MEM_W(-0X48, ctx->r5) = ctx->f0.u32l;
    // 0x8004DFD8: sw          $v0, -0x44($a1)
    MEM_W(-0X44, ctx->r5) = ctx->r2;
    // 0x8004DFDC: swc1        $f2, -0x40($a1)
    MEM_W(-0X40, ctx->r5) = ctx->f2.u32l;
    // 0x8004DFE0: swc1        $f2, -0x3C($a1)
    MEM_W(-0X3C, ctx->r5) = ctx->f2.u32l;
    // 0x8004DFE4: swc1        $f2, -0x38($a1)
    MEM_W(-0X38, ctx->r5) = ctx->f2.u32l;
    // 0x8004DFE8: sw          $zero, -0x34($a1)
    MEM_W(-0X34, ctx->r5) = 0;
    // 0x8004DFEC: sw          $v0, -0x30($a1)
    MEM_W(-0X30, ctx->r5) = ctx->r2;
    // 0x8004DFF0: sw          $v0, -0x28($a1)
    MEM_W(-0X28, ctx->r5) = ctx->r2;
    // 0x8004DFF4: swc1        $f2, -0x24($a1)
    MEM_W(-0X24, ctx->r5) = ctx->f2.u32l;
    // 0x8004DFF8: swc1        $f2, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->f2.u32l;
    // 0x8004DFFC: swc1        $f2, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->f2.u32l;
    // 0x8004E000: swc1        $f2, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->f2.u32l;
    // 0x8004E004: swc1        $f12, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->f12.u32l;
    // 0x8004E008: swc1        $f2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->f2.u32l;
    // 0x8004E00C: sw          $zero, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = 0;
    // 0x8004E010: sw          $zero, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = 0;
    // 0x8004E014: bne         $v1, $a2, L_8004DFC0
    if (ctx->r3 != ctx->r6) {
        // 0x8004E018: sw          $zero, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = 0;
            goto L_8004DFC0;
    }
    // 0x8004E018: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
    // 0x8004E01C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004E020: addiu       $t7, $a0, 0x54
    ctx->r15 = ADD32(ctx->r4, 0X54);
    // 0x8004E024: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8004E028: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8004E02C: sw          $t7, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r15;
    // 0x8004E030: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x8004E034: jr          $ra
    // 0x8004E038: sw          $a0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r4;
    return;
    // 0x8004E038: sw          $a0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r4;
;}
RECOMP_FUNC void func_8004E03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E03C: jr          $ra
    // 0x8004E040: nop

    return;
    // 0x8004E040: nop

;}
RECOMP_FUNC void func_8004E044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E044: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004E048: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004E04C: nop

    // 0x8004E050: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004E054: nop

    // 0x8004E058: bc1f        L_8004E068
    if (!c1cs) {
        // 0x8004E05C: nop
    
            goto L_8004E068;
    }
    // 0x8004E05C: nop

    // 0x8004E060: jr          $ra
    // 0x8004E064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004E064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004E068:
    // 0x8004E068: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8004E06C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004E070: bc1f        L_8004E080
    if (!c1cs) {
        // 0x8004E074: nop
    
            goto L_8004E080;
    }
    // 0x8004E074: nop

    // 0x8004E078: b           L_8004E080
    // 0x8004E07C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E080;
    // 0x8004E07C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E080:
    // 0x8004E080: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004E084: jr          $ra
    // 0x8004E088: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004E088: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004E08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E08C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8004E090: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004E094: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004E098: lw          $a3, 0xE0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE0);
    // 0x8004E09C: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x8004E0A0: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8004E0A4: jal         0x8004C26C
    // 0x8004E0A8: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    func_8004C26C(rdram, ctx);
        goto after_0;
    // 0x8004E0A8: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    after_0:
    // 0x8004E0AC: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
    // 0x8004E0B0: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8004E0B4: addiu       $fp, $t1, 0xC
    ctx->r30 = ADD32(ctx->r9, 0XC);
    // 0x8004E0B8: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8004E0BC: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E0C0: add.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004E0C4: lw          $t7, 0x8($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X8);
    // 0x8004E0C8: lwc1        $f8, 0x4($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004E0CC: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8004E0D0: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8004E0D4: lwc1        $f4, 0x8($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8004E0D8: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8004E0DC: add.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E0E0: beq         $t8, $zero, L_8004E100
    if (ctx->r24 == 0) {
        // 0x8004E0E4: add.s       $f20, $f4, $f6
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f6.fl;
            goto L_8004E100;
    }
    // 0x8004E0E4: add.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004E0E8: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8004E0EC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8004E0F0: jal         0x8004C26C
    // 0x8004E0F4: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    func_8004C26C(rdram, ctx);
        goto after_1;
    // 0x8004E0F4: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    after_1:
    // 0x8004E0F8: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E0FC: nop

L_8004E100:
    // 0x8004E100: lw          $v0, 0x20($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X20);
    // 0x8004E104: lw          $a3, 0xE4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE4);
    // 0x8004E108: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8004E10C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004E110: blez        $t9, L_8004E3D4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004E114: sll         $t6, $a3, 2
        ctx->r14 = S32(ctx->r7 << 2);
            goto L_8004E3D4;
    }
    // 0x8004E114: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x8004E118: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8004E11C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004E120: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x8004E124: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8004E128: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x8004E12C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8004E130: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
L_8004E134:
    // 0x8004E134: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E138: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8004E13C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8004E140: lw          $t7, 0x1C($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X1C);
    // 0x8004E144: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x8004E148: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8004E14C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8004E150: lw          $a1, 0x10($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X10);
    // 0x8004E154: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    // 0x8004E158: jal         0x8004C1C4
    // 0x8004E15C: nop

    func_8004C1C4(rdram, ctx);
        goto after_2;
    // 0x8004E15C: nop

    after_2:
    // 0x8004E160: beq         $v0, $zero, L_8004E3A8
    if (ctx->r2 == 0) {
        // 0x8004E164: addiu       $a1, $sp, 0x90
        ctx->r5 = ADD32(ctx->r29, 0X90);
            goto L_8004E3A8;
    }
    // 0x8004E164: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x8004E168: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E16C: jal         0x8004C020
    // 0x8004E170: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    func_8004C020(rdram, ctx);
        goto after_3;
    // 0x8004E170: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    after_3:
    // 0x8004E174: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E178: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E17C: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x8004E180: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8004E184: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8004E188: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8004E18C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004E190: lw          $s7, 0x0($t8)
    ctx->r23 = MEM_W(ctx->r24, 0X0);
    // 0x8004E194: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004E198: lwc1        $f6, 0x0($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8004E19C: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8004E1A0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004E1A4: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8004E1A8: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x8004E1AC: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8004E1B0: lwc1        $f10, 0x4($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8004E1B4: nop

    // 0x8004E1B8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004E1BC: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8004E1C0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004E1C4: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8004E1C8: nop

    // 0x8004E1CC: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8004E1D0: lwc1        $f4, 0x8($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8004E1D4: nop

    // 0x8004E1D8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004E1DC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E1E0: c.lt.s      $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f6.fl < ctx->f24.fl;
    // 0x8004E1E4: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x8004E1E8: bc1f        L_8004E1FC
    if (!c1cs) {
        // 0x8004E1EC: nop
    
            goto L_8004E1FC;
    }
    // 0x8004E1EC: nop

    // 0x8004E1F0: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8004E1F4: b           L_8004E208
    // 0x8004E1F8: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
        goto L_8004E208;
    // 0x8004E1F8: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
L_8004E1FC:
    // 0x8004E1FC: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004E200: nop

    // 0x8004E204: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_8004E208:
    // 0x8004E208: jal         0x8004E044
    // 0x8004E20C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    func_8004E044(rdram, ctx);
        goto after_4;
    // 0x8004E20C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    after_4:
    // 0x8004E210: bltz        $v0, L_8004E3A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E214: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_8004E3A8;
    }
    // 0x8004E214: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8004E218: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8004E21C: lwc1        $f10, 0x0($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8004E220: sub.s       $f4, $f6, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f28.fl;
    // 0x8004E224: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8004E228: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004E22C: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8004E230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004E234: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8004E238: sub.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x8004E23C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004E240: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8004E244: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E248: lwc1        $f10, 0x8($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8004E24C: sub.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x8004E250: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004E254: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004E258: jal         0x8004E044
    // 0x8004E25C: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_8004E044(rdram, ctx);
        goto after_5;
    // 0x8004E25C: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8004E260: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8004E264: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8004E268: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E26C: mflo        $t6
    ctx->r14 = lo;
    // 0x8004E270: bgtz        $t6, L_8004E280
    if (SIGNED(ctx->r14) > 0) {
        // 0x8004E274: andi        $t7, $a1, 0x1
        ctx->r15 = ctx->r5 & 0X1;
            goto L_8004E280;
    }
    // 0x8004E274: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x8004E278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004E27C: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
L_8004E280:
    // 0x8004E280: beq         $t7, $zero, L_8004E3AC
    if (ctx->r15 == 0) {
        // 0x8004E284: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_8004E3AC;
    }
    // 0x8004E284: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E288: lwc1        $f10, 0x0($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8004E28C: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8004E290: lwc1        $f8, 0x4($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8004E294: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004E298: lwc1        $f10, 0x4($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004E29C: nop

    // 0x8004E2A0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004E2A4: lwc1        $f10, 0x8($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8004E2A8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004E2AC: lwc1        $f6, 0x8($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8004E2B0: nop

    // 0x8004E2B4: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8004E2B8: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004E2BC: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8004E2C0: c.eq.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl == ctx->f26.fl;
    // 0x8004E2C4: nop

    // 0x8004E2C8: bc1t        L_8004E3A8
    if (c1cs) {
        // 0x8004E2CC: nop
    
            goto L_8004E3A8;
    }
    // 0x8004E2CC: nop

    // 0x8004E2D0: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8004E2D4: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    // 0x8004E2D8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x8004E2DC: bc1t        L_8004E3AC
    if (c1cs) {
        // 0x8004E2E0: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_8004E3AC;
    }
    // 0x8004E2E0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E2E4: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8004E2E8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8004E2EC: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8004E2F0: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004E2F4: addiu       $s5, $sp, 0x84
    ctx->r21 = ADD32(ctx->r29, 0X84);
    // 0x8004E2F8: addiu       $s4, $sp, 0x90
    ctx->r20 = ADD32(ctx->r29, 0X90);
    // 0x8004E2FC: or          $s6, $s7, $zero
    ctx->r22 = ctx->r23 | 0;
    // 0x8004E300: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8004E304: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x8004E308: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8004E30C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8004E310: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8004E314: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004E318: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8004E31C: lwc1        $f10, 0x8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8004E320: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x8004E324: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8004E328: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x8004E32C: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    // 0x8004E330: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004E334: jal         0x8004D0E0
    // 0x8004E338: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    func_8004D0E0(rdram, ctx);
        goto after_6;
    // 0x8004E338: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8004E33C: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x8004E340: lwc1        $f20, 0xD0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x8004E344: blez        $v0, L_8004E3A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004E348: addiu       $t0, $sp, 0x5C
        ctx->r8 = ADD32(ctx->r29, 0X5C);
            goto L_8004E3A8;
    }
    // 0x8004E348: addiu       $t0, $sp, 0x5C
    ctx->r8 = ADD32(ctx->r29, 0X5C);
    // 0x8004E34C: lw          $v0, 0xE8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E350: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E354: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x8004E358: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x8004E35C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004E360: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004E364: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004E368: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8004E36C: lw          $a3, 0xE4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE4);
    // 0x8004E370: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    // 0x8004E374: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x8004E378: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x8004E37C: addiu       $t2, $sp, 0x70
    ctx->r10 = ADD32(ctx->r29, 0X70);
    // 0x8004E380: addiu       $t3, $sp, 0x84
    ctx->r11 = ADD32(ctx->r29, 0X84);
    // 0x8004E384: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8004E388: addiu       $s2, $sp, 0x90
    ctx->r18 = ADD32(ctx->r29, 0X90);
    // 0x8004E38C: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8004E390: addiu       $t5, $v0, 0x4
    ctx->r13 = ADD32(ctx->r2, 0X4);
    // 0x8004E394: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8004E398: jal         0x8004CC94
    // 0x8004E39C: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    func_8004CC94(rdram, ctx);
        goto after_7;
    // 0x8004E39C: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    after_7:
    // 0x8004E3A0: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x8004E3A4: nop

L_8004E3A8:
    // 0x8004E3A8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_8004E3AC:
    // 0x8004E3AC: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x8004E3B0: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x8004E3B4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8004E3B8: lw          $v0, 0x20($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X20);
    // 0x8004E3BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8004E3C0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8004E3C4: nop

    // 0x8004E3C8: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8004E3CC: bne         $at, $zero, L_8004E134
    if (ctx->r1 != 0) {
        // 0x8004E3D0: lw          $t1, 0xE0($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XE0);
            goto L_8004E134;
    }
    // 0x8004E3D0: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
L_8004E3D4:
    // 0x8004E3D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004E3D8: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x8004E3DC: jr          $ra
    // 0x8004E3E0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8004E3E0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_8004E3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E3E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8004E3E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004E3EC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004E3F0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8004E3F4: jal         0x8004DD00
    // 0x8004E3F8: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    func_8004DD00(rdram, ctx);
        goto after_0;
    // 0x8004E3F8: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    after_0:
    // 0x8004E3FC: jal         0x8004DCB8
    // 0x8004E400: nop

    func_8004DCB8(rdram, ctx);
        goto after_1;
    // 0x8004E400: nop

    after_1:
    // 0x8004E404: lwc1        $f2, 0xC($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004E408: lwc1        $f14, 0x10($s4)
    ctx->f14.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004E40C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004E410: lwc1        $f16, 0x14($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004E414: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004E418: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004E41C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004E420: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8004E424: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x8004E428: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8004E42C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8004E430: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004E434: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004E438: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E43C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004E440: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8004E444: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E448: jal         0x8007A500
    // 0x8004E44C: nop

    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x8004E44C: nop

    after_2:
    // 0x8004E450: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x8004E454: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004E458: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8004E45C: addu        $t7, $t7, $s2
    ctx->r15 = ADD32(ctx->r15, ctx->r18);
    // 0x8004E460: swc1        $f0, -0x2E3C($at)
    MEM_W(-0X2E3C, ctx->r1) = ctx->f0.u32l;
    // 0x8004E464: sll         $s2, $t7, 2
    ctx->r18 = S32(ctx->r15 << 2);
    // 0x8004E468: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8004E46C: addiu       $s3, $s4, 0xC
    ctx->r19 = ADD32(ctx->r20, 0XC);
L_8004E470:
    // 0x8004E470: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x8004E474: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004E478: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8004E47C: addiu       $s0, $s0, -0x2E38
    ctx->r16 = ADD32(ctx->r16, -0X2E38);
    // 0x8004E480: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8004E484: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x8004E488: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004E48C: jal         0x8004DA58
    // 0x8004E490: addu        $a2, $t8, $s2
    ctx->r6 = ADD32(ctx->r24, ctx->r18);
    func_8004DA58(rdram, ctx);
        goto after_3;
    // 0x8004E490: addu        $a2, $t8, $s2
    ctx->r6 = ADD32(ctx->r24, ctx->r18);
    after_3:
    // 0x8004E494: bltz        $v0, L_8004E4F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E498: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_8004E4F0;
    }
    // 0x8004E498: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004E49C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8004E4A0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8004E4A4: addiu       $t6, $t6, -0x5AA8
    ctx->r14 = ADD32(ctx->r14, -0X5AA8);
    // 0x8004E4A8: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8004E4AC: sw          $s4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r20;
    // 0x8004E4B0: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x8004E4B4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8004E4B8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004E4BC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004E4C0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8004E4C4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8004E4C8: jal         0x8004E08C
    // 0x8004E4CC: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    func_8004E08C(rdram, ctx);
        goto after_4;
    // 0x8004E4CC: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    after_4:
    // 0x8004E4D0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8004E4D4: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x8004E4D8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8004E4DC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004E4E0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8004E4E4: bgez        $s5, L_8004E4F4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8004E4E8: lw          $t8, 0x5C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X5C);
            goto L_8004E4F4;
    }
    // 0x8004E4E8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E4EC: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_8004E4F0:
    // 0x8004E4F0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
L_8004E4F4:
    // 0x8004E4F4: nop

    // 0x8004E4F8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8004E4FC: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8004E500: bne         $at, $zero, L_8004E470
    if (ctx->r1 != 0) {
        // 0x8004E504: sw          $t9, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r25;
            goto L_8004E470;
    }
    // 0x8004E504: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x8004E508: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004E50C: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004E510: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8004E514: blez        $a1, L_8004E6C8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8004E518: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8004E6C8;
    }
    // 0x8004E518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004E51C:
    // 0x8004E51C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E520: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004E524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004E528: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8004E52C: lw          $a0, -0x61E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X61E8);
    // 0x8004E530: nop

    // 0x8004E534: beq         $s4, $a0, L_8004E6B0
    if (ctx->r20 == ctx->r4) {
        // 0x8004E538: lw          $t9, 0x5C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X5C);
            goto L_8004E6B0;
    }
    // 0x8004E538: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E53C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8004E540: nop

    // 0x8004E544: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8004E548: bne         $t8, $zero, L_8004E6AC
    if (ctx->r24 != 0) {
        // 0x8004E54C: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_8004E6AC;
    }
    // 0x8004E54C: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x8004E550: bne         $t9, $zero, L_8004E6AC
    if (ctx->r25 != 0) {
        // 0x8004E554: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_8004E6AC;
    }
    // 0x8004E554: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8004E558: beq         $t6, $zero, L_8004E6A0
    if (ctx->r14 == 0) {
        // 0x8004E55C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8004E6A0;
    }
    // 0x8004E55C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004E560: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8004E564: lwc1        $f0, -0x2E3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x8004E568: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E56C: bne         $v1, $at, L_8004E57C
    if (ctx->r3 != ctx->r1) {
        // 0x8004E570: nop
    
            goto L_8004E57C;
    }
    // 0x8004E570: nop

    // 0x8004E574: b           L_8004E658
    // 0x8004E578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004E658;
    // 0x8004E578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004E57C:
    // 0x8004E57C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8004E580: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8004E584: add.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8004E588: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8004E58C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8004E590: nop

    // 0x8004E594: bc1f        L_8004E5A4
    if (!c1cs) {
        // 0x8004E598: nop
    
            goto L_8004E5A4;
    }
    // 0x8004E598: nop

    // 0x8004E59C: b           L_8004E658
    // 0x8004E5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E5A4:
    // 0x8004E5A4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E5A8: nop

    // 0x8004E5AC: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8004E5B0: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8004E5B4: nop

    // 0x8004E5B8: bc1f        L_8004E5C8
    if (!c1cs) {
        // 0x8004E5BC: nop
    
            goto L_8004E5C8;
    }
    // 0x8004E5BC: nop

    // 0x8004E5C0: b           L_8004E658
    // 0x8004E5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E5C8:
    // 0x8004E5C8: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004E5CC: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8004E5D0: add.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8004E5D4: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8004E5D8: nop

    // 0x8004E5DC: bc1f        L_8004E5EC
    if (!c1cs) {
        // 0x8004E5E0: nop
    
            goto L_8004E5EC;
    }
    // 0x8004E5E0: nop

    // 0x8004E5E4: b           L_8004E658
    // 0x8004E5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E5EC:
    // 0x8004E5EC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004E5F0: nop

    // 0x8004E5F4: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8004E5F8: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8004E5FC: nop

    // 0x8004E600: bc1f        L_8004E610
    if (!c1cs) {
        // 0x8004E604: nop
    
            goto L_8004E610;
    }
    // 0x8004E604: nop

    // 0x8004E608: b           L_8004E658
    // 0x8004E60C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E60C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E610:
    // 0x8004E610: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004E614: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8004E618: add.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8004E61C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8004E620: nop

    // 0x8004E624: bc1f        L_8004E634
    if (!c1cs) {
        // 0x8004E628: nop
    
            goto L_8004E634;
    }
    // 0x8004E628: nop

    // 0x8004E62C: b           L_8004E658
    // 0x8004E630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E634:
    // 0x8004E634: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004E638: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004E63C: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8004E640: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8004E644: nop

    // 0x8004E648: bc1f        L_8004E658
    if (!c1cs) {
        // 0x8004E64C: nop
    
            goto L_8004E658;
    }
    // 0x8004E64C: nop

    // 0x8004E650: b           L_8004E658
    // 0x8004E654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004E658;
    // 0x8004E654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E658:
    // 0x8004E658: bgtz        $v0, L_8004E6B0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004E65C: lw          $t9, 0x5C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X5C);
            goto L_8004E6B0;
    }
    // 0x8004E65C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E660: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8004E664: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8004E668: sw          $s4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r20;
    // 0x8004E66C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8004E670: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x8004E674: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004E678: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8004E67C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8004E680: jal         0x8004E08C
    // 0x8004E684: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    func_8004E08C(rdram, ctx);
        goto after_5;
    // 0x8004E684: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    after_5:
    // 0x8004E688: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8004E68C: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x8004E690: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8004E694: bgez        $s5, L_8004E6A0
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8004E698: nop
    
            goto L_8004E6A0;
    }
    // 0x8004E698: nop

    // 0x8004E69C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_8004E6A0:
    // 0x8004E6A0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004E6A4: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004E6A8: nop

L_8004E6AC:
    // 0x8004E6AC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
L_8004E6B0:
    // 0x8004E6B0: nop

    // 0x8004E6B4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8004E6B8: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E6BC: bne         $at, $zero, L_8004E51C
    if (ctx->r1 != 0) {
        // 0x8004E6C0: sw          $t6, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r14;
            goto L_8004E51C;
    }
    // 0x8004E6C0: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x8004E6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004E6C8:
    // 0x8004E6C8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8004E6CC: jr          $ra
    // 0x8004E6D0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    return;
    // 0x8004E6D0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
;}
