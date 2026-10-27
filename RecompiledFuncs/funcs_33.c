#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void strlen_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076BD0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80076BD4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80076BD8: beq         $t6, $zero, L_80076BF0
    if (ctx->r14 == 0) {
        // 0x80076BDC: nop
    
            goto L_80076BF0;
    }
    // 0x80076BDC: nop

    // 0x80076BE0: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
L_80076BE4:
    // 0x80076BE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80076BE8: bnel        $t7, $zero, L_80076BE4
    if (ctx->r15 != 0) {
        // 0x80076BEC: lbu         $t7, 0x1($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X1);
            goto L_80076BE4;
    }
    goto skip_0;
    // 0x80076BEC: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    skip_0:
L_80076BF0:
    // 0x80076BF0: jr          $ra
    // 0x80076BF4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    return;
    // 0x80076BF4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076BF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80076BFC: beq         $a2, $zero, L_80076C1C
    if (ctx->r6 == 0) {
        // 0x80076C00: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80076C1C;
    }
    // 0x80076C00: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_80076C04:
    // 0x80076C04: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80076C08: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80076C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80076C10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80076C14: bne         $a2, $zero, L_80076C04
    if (ctx->r6 != 0) {
        // 0x80076C18: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_80076C04;
    }
    // 0x80076C18: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
L_80076C1C:
    // 0x80076C1C: jr          $ra
    // 0x80076C20: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80076C20: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void osSpReset(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80077158: jal         0x800804F0
    // 0x8007715C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSpSetPc_recomp(rdram, ctx);
        goto after_0;
    // 0x8007715C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80077160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80077164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80077168: jr          $ra
    // 0x8007716C: nop

    return;
    // 0x8007716C: nop

;}
RECOMP_FUNC void _bzero(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077310: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80077314: bne         $at, $zero, L_8007738C
    if (ctx->r1 != 0) {
        // 0x80077318: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_8007738C;
    }
    // 0x80077318: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8007731C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80077320: beq         $v1, $zero, L_80077330
    if (ctx->r3 == 0) {
        // 0x80077324: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80077330;
    }
    // 0x80077324: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80077328: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8007732C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80077330:
    // 0x80077330: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80077334: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80077338: beq         $a3, $zero, L_8007736C
    if (ctx->r7 == 0) {
        // 0x8007733C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8007736C;
    }
    // 0x8007733C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x80077340: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80077344:
    // 0x80077344: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80077348: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x8007734C: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80077350: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80077354: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80077358: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8007735C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80077360: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80077364: bne         $a0, $a3, L_80077344
    if (ctx->r4 != ctx->r7) {
        // 0x80077368: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80077344;
    }
    // 0x80077368: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8007736C:
    // 0x8007736C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80077370: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80077374: beq         $a3, $zero, L_8007738C
    if (ctx->r7 == 0) {
        // 0x80077378: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8007738C;
    }
    // 0x80077378: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8007737C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80077380:
    // 0x80077380: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80077384: bne         $a0, $a3, L_80077380
    if (ctx->r4 != ctx->r7) {
        // 0x80077388: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80077380;
    }
    // 0x80077388: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8007738C:
    // 0x8007738C: blez        $a1, L_800773A4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80077390: nop
    
            goto L_800773A4;
    }
    // 0x80077390: nop

    // 0x80077394: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_80077398:
    // 0x80077398: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007739C: bne         $a0, $a1, L_80077398
    if (ctx->r4 != ctx->r5) {
        // 0x800773A0: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_80077398;
    }
    // 0x800773A0: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_800773A4:
    // 0x800773A4: jr          $ra
    // 0x800773A8: nop

    return;
    // 0x800773A8: nop

;}
RECOMP_FUNC void __osPfsCheckRamA(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800778A8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800778AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800778B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800778B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800778B8: jal         0x80081B40
    // 0x800778BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x800778BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800778C0: beq         $v0, $zero, L_800778D0
    if (ctx->r2 == 0) {
        // 0x800778C4: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_800778D0;
    }
    // 0x800778C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800778C8: b           L_8007799C
    // 0x800778CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8007799C;
    // 0x800778CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800778D0:
    // 0x800778D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800778D4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x800778D8: jal         0x80081BC0
    // 0x800778DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x800778DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800778E0: beq         $v0, $zero, L_800778F0
    if (ctx->r2 == 0) {
        // 0x800778E4: addiu       $v1, $sp, 0x70
        ctx->r3 = ADD32(ctx->r29, 0X70);
            goto L_800778F0;
    }
    // 0x800778E4: addiu       $v1, $sp, 0x70
    ctx->r3 = ADD32(ctx->r29, 0X70);
    // 0x800778E8: b           L_8007799C
    // 0x800778EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8007799C;
    // 0x800778EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800778F0:
    // 0x800778F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800778F4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_800778F8:
    // 0x800778F8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800778FC: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x80077900: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x80077904: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80077908: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007790C: sb          $t8, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r24;
    // 0x80077910: sb          $t7, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r15;
    // 0x80077914: sb          $t6, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r14;
    // 0x80077918: bne         $v0, $a0, L_800778F8
    if (ctx->r2 != ctx->r4) {
        // 0x8007791C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800778F8;
    }
    // 0x8007791C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80077920: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80077924: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80077928: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8007792C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077930: jal         0x80083320
    // 0x80077934: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_2;
    // 0x80077934: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x80077938: beq         $v0, $zero, L_80077948
    if (ctx->r2 == 0) {
        // 0x8007793C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80077948;
    }
    // 0x8007793C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80077940: b           L_8007799C
    // 0x80077944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8007799C;
    // 0x80077944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80077948:
    // 0x80077948: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007794C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80077950: jal         0x80081BC0
    // 0x80077954: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    __osContRamRead_recomp(rdram, ctx);
        goto after_3;
    // 0x80077954: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x80077958: beq         $v0, $zero, L_80077968
    if (ctx->r2 == 0) {
        // 0x8007795C: addiu       $a0, $sp, 0x70
        ctx->r4 = ADD32(ctx->r29, 0X70);
            goto L_80077968;
    }
    // 0x8007795C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80077960: b           L_8007799C
    // 0x80077964: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8007799C;
    // 0x80077964: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80077968:
    // 0x80077968: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8007796C: jal         0x80083570
    // 0x80077970: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    _bcmp(rdram, ctx);
        goto after_4;
    // 0x80077970: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_4:
    // 0x80077974: beq         $v0, $zero, L_80077984
    if (ctx->r2 == 0) {
        // 0x80077978: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80077984;
    }
    // 0x80077978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007797C: b           L_80077998
    // 0x80077980: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80077998;
    // 0x80077980: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80077984:
    // 0x80077984: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80077988: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8007798C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80077990: jal         0x80083320
    // 0x80077994: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_5;
    // 0x80077994: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_5:
L_80077998:
    // 0x80077998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8007799C:
    // 0x8007799C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800779A0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x800779A4: jr          $ra
    // 0x800779A8: nop

    return;
    // 0x800779A8: nop

;}
RECOMP_FUNC void _bcopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077EC0: beq         $a2, $zero, L_80077F2C
    if (ctx->r6 == 0) {
        // 0x80077EC4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_80077F2C;
    }
    // 0x80077EC4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80077EC8: beq         $a0, $a1, L_80077F2C
    if (ctx->r4 == ctx->r5) {
        // 0x80077ECC: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80077F2C;
    }
    // 0x80077ECC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80077ED0: bnel        $at, $zero, L_80077EF4
    if (ctx->r1 != 0) {
        // 0x80077ED4: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80077EF4;
    }
    goto skip_0;
    // 0x80077ED4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x80077ED8: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x80077EDC: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80077EE0: beql        $at, $zero, L_80077EF4
    if (ctx->r1 == 0) {
        // 0x80077EE4: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80077EF4;
    }
    goto skip_1;
    // 0x80077EE4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x80077EE8: b           L_80078058
    // 0x80077EEC: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_80078058;
    // 0x80077EEC: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80077EF0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80077EF4:
    // 0x80077EF4: bne         $at, $zero, L_80077F0C
    if (ctx->r1 != 0) {
        // 0x80077EF8: nop
    
            goto L_80077F0C;
    }
    // 0x80077EF8: nop

    // 0x80077EFC: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80077F00: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x80077F04: beq         $v0, $v1, L_80077F34
    if (ctx->r2 == ctx->r3) {
        // 0x80077F08: nop
    
            goto L_80077F34;
    }
    // 0x80077F08: nop

L_80077F0C:
    // 0x80077F0C: beq         $a2, $zero, L_80077F2C
    if (ctx->r6 == 0) {
        // 0x80077F10: nop
    
            goto L_80077F2C;
    }
    // 0x80077F10: nop

    // 0x80077F14: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_80077F18:
    // 0x80077F18: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80077F1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80077F20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80077F24: bne         $a0, $v1, L_80077F18
    if (ctx->r4 != ctx->r3) {
        // 0x80077F28: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_80077F18;
    }
    // 0x80077F28: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_80077F2C:
    // 0x80077F2C: jr          $ra
    // 0x80077F30: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x80077F30: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80077F34:
    // 0x80077F34: beq         $v0, $zero, L_80077F98
    if (ctx->r2 == 0) {
        // 0x80077F38: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80077F98;
    }
    // 0x80077F38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80077F3C: beq         $v0, $at, L_80077F7C
    if (ctx->r2 == ctx->r1) {
        // 0x80077F40: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80077F7C;
    }
    // 0x80077F40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80077F44: beql        $v0, $at, L_80077F68
    if (ctx->r2 == ctx->r1) {
        // 0x80077F48: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_80077F68;
    }
    goto skip_2;
    // 0x80077F48: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x80077F4C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80077F50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80077F54: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80077F58: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80077F5C: b           L_80077F98
    // 0x80077F60: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_80077F98;
    // 0x80077F60: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x80077F64: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_80077F68:
    // 0x80077F68: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80077F6C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80077F70: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80077F74: b           L_80077F98
    // 0x80077F78: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_80077F98;
    // 0x80077F78: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_80077F7C:
    // 0x80077F7C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80077F80: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x80077F84: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80077F88: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80077F8C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80077F90: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x80077F94: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_80077F98:
    // 0x80077F98: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80077F9C: bnel        $at, $zero, L_80077FF8
    if (ctx->r1 != 0) {
        // 0x80077FA0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80077FF8;
    }
    goto skip_3;
    // 0x80077FA0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x80077FA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80077FA8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80077FAC: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80077FB0: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80077FB4: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x80077FB8: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x80077FBC: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x80077FC0: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x80077FC4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80077FC8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80077FCC: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80077FD0: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x80077FD4: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x80077FD8: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x80077FDC: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x80077FE0: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x80077FE4: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x80077FE8: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x80077FEC: b           L_80077F98
    // 0x80077FF0: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_80077F98;
    // 0x80077FF0: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_80077FF4:
    // 0x80077FF4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80077FF8:
    // 0x80077FF8: bnel        $at, $zero, L_80078034
    if (ctx->r1 != 0) {
        // 0x80077FFC: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_80078034;
    }
    goto skip_4;
    // 0x80077FFC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x80078000: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80078004: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80078008: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8007800C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80078010: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80078014: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80078018: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8007801C: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x80078020: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x80078024: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x80078028: b           L_80077FF4
    // 0x8007802C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_80077FF4;
    // 0x8007802C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_80078030:
    // 0x80078030: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_80078034:
    // 0x80078034: bne         $at, $zero, L_80077F0C
    if (ctx->r1 != 0) {
        // 0x80078038: nop
    
            goto L_80077F0C;
    }
    // 0x80078038: nop

    // 0x8007803C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80078040: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80078044: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80078048: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8007804C: b           L_80078030
    // 0x80078050: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_80078030;
    // 0x80078050: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x80078054: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80078058:
    // 0x80078058: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8007805C: bne         $at, $zero, L_80078074
    if (ctx->r1 != 0) {
        // 0x80078060: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_80078074;
    }
    // 0x80078060: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80078064: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80078068: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x8007806C: beq         $v0, $v1, L_800780A4
    if (ctx->r2 == ctx->r3) {
        // 0x80078070: nop
    
            goto L_800780A4;
    }
    // 0x80078070: nop

L_80078074:
    // 0x80078074: beq         $a2, $zero, L_80077F2C
    if (ctx->r6 == 0) {
        // 0x80078078: nop
    
            goto L_80077F2C;
    }
    // 0x80078078: nop

    // 0x8007807C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80078080: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80078084: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_80078088:
    // 0x80078088: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8007808C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80078090: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80078094: bne         $a0, $v1, L_80078088
    if (ctx->r4 != ctx->r3) {
        // 0x80078098: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_80078088;
    }
    // 0x80078098: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x8007809C: jr          $ra
    // 0x800780A0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x800780A0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_800780A4:
    // 0x800780A4: beq         $v0, $zero, L_80078108
    if (ctx->r2 == 0) {
        // 0x800780A8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80078108;
    }
    // 0x800780A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800780AC: beq         $v0, $at, L_800780EC
    if (ctx->r2 == ctx->r1) {
        // 0x800780B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800780EC;
    }
    // 0x800780B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800780B4: beql        $v0, $at, L_800780D8
    if (ctx->r2 == ctx->r1) {
        // 0x800780B8: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_800780D8;
    }
    goto skip_5;
    // 0x800780B8: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x800780BC: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x800780C0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800780C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800780C8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800780CC: b           L_80078108
    // 0x800780D0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_80078108;
    // 0x800780D0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x800780D4: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_800780D8:
    // 0x800780D8: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x800780DC: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x800780E0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x800780E4: b           L_80078108
    // 0x800780E8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80078108;
    // 0x800780E8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_800780EC:
    // 0x800780EC: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x800780F0: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x800780F4: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x800780F8: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x800780FC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x80078100: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80078104: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_80078108:
    // 0x80078108: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x8007810C: bnel        $at, $zero, L_80078168
    if (ctx->r1 != 0) {
        // 0x80078110: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_80078168;
    }
    goto skip_6;
    // 0x80078110: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x80078114: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80078118: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x8007811C: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x80078120: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80078124: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x80078128: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x8007812C: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x80078130: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x80078134: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x80078138: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x8007813C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x80078140: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80078144: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80078148: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x8007814C: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x80078150: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x80078154: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x80078158: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x8007815C: b           L_80078108
    // 0x80078160: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_80078108;
    // 0x80078160: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_80078164:
    // 0x80078164: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_80078168:
    // 0x80078168: bnel        $at, $zero, L_800781A4
    if (ctx->r1 != 0) {
        // 0x8007816C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_800781A4;
    }
    goto skip_7;
    // 0x8007816C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x80078170: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x80078174: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x80078178: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x8007817C: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x80078180: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80078184: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x80078188: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8007818C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80078190: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80078194: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80078198: b           L_80078164
    // 0x8007819C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_80078164;
    // 0x8007819C: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_800781A0:
    // 0x800781A0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_800781A4:
    // 0x800781A4: bne         $at, $zero, L_80078074
    if (ctx->r1 != 0) {
        // 0x800781A8: nop
    
            goto L_80078074;
    }
    // 0x800781A8: nop

    // 0x800781AC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x800781B0: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800781B4: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x800781B8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800781BC: b           L_800781A0
    // 0x800781C0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_800781A0;
    // 0x800781C0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void __osPfsDeclearPage(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800786D4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800786D8: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x800786DC: lbu         $s0, 0x23($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X23);
    // 0x800786E0: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x800786E4: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x800786E8: blez        $s0, L_800786F8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800786EC: addiu       $t3, $zero, 0x80
        ctx->r11 = ADD32(0, 0X80);
            goto L_800786F8;
    }
    // 0x800786EC: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x800786F0: b           L_800786FC
    // 0x800786F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800786FC;
    // 0x800786F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800786F8:
    // 0x800786F8: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
L_800786FC:
    // 0x800786FC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80078700: beq         $at, $zero, L_8007872C
    if (ctx->r1 == 0) {
        // 0x80078704: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8007872C;
    }
    // 0x80078704: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80078708: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8007870C: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x80078710: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_80078714:
    // 0x80078714: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80078718: beql        $t2, $t7, L_80078730
    if (ctx->r10 == ctx->r15) {
        // 0x8007871C: addiu       $t3, $zero, 0x80
        ctx->r11 = ADD32(0, 0X80);
            goto L_80078730;
    }
    goto skip_0;
    // 0x8007871C: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    skip_0:
    // 0x80078720: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078724: bne         $v1, $t3, L_80078714
    if (ctx->r3 != ctx->r11) {
        // 0x80078728: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80078714;
    }
    // 0x80078728: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8007872C:
    // 0x8007872C: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
L_80078730:
    // 0x80078730: bne         $v1, $t3, L_80078748
    if (ctx->r3 != ctx->r11) {
        // 0x80078734: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_80078748;
    }
    // 0x80078734: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80078738: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8007873C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80078740: b           L_80078804
    // 0x80078744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80078804;
    // 0x80078744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80078748:
    // 0x80078748: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8007874C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80078750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80078754: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80078758: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8007875C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078760: bne         $at, $zero, L_800787C4
    if (ctx->r1 != 0) {
        // 0x80078764: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_800787C4;
    }
    // 0x80078764: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80078768: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8007876C: beq         $at, $zero, L_800787C4
    if (ctx->r1 == 0) {
        // 0x80078770: sll         $t4, $v1, 1
        ctx->r12 = S32(ctx->r3 << 1);
            goto L_800787C4;
    }
    // 0x80078770: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x80078774: addu        $v0, $a1, $t4
    ctx->r2 = ADD32(ctx->r5, ctx->r12);
    // 0x80078778: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
L_8007877C:
    // 0x8007877C: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x80078780: addu        $t1, $a1, $t6
    ctx->r9 = ADD32(ctx->r5, ctx->r14);
    // 0x80078784: bnel        $t2, $t5, L_800787A8
    if (ctx->r10 != ctx->r13) {
        // 0x80078788: lw          $t9, 0x0($a2)
        ctx->r25 = MEM_W(ctx->r6, 0X0);
            goto L_800787A8;
    }
    goto skip_1;
    // 0x80078788: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x8007878C: sb          $s0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r16;
    // 0x80078790: sb          $v1, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r3;
    // 0x80078794: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80078798: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8007879C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800787A0: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800787A4: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
L_800787A8:
    // 0x800787A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800787AC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800787B0: slt         $at, $t9, $s1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800787B4: beq         $at, $zero, L_800787C4
    if (ctx->r1 == 0) {
        // 0x800787B8: slti        $at, $v1, 0x80
        ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
            goto L_800787C4;
    }
    // 0x800787B8: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x800787BC: bnel        $at, $zero, L_8007877C
    if (ctx->r1 != 0) {
        // 0x800787C0: lhu         $t5, 0x0($v0)
        ctx->r13 = MEM_HU(ctx->r2, 0X0);
            goto L_8007877C;
    }
    goto skip_2;
    // 0x800787C0: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    skip_2:
L_800787C4:
    // 0x800787C4: bne         $v1, $t3, L_800787E8
    if (ctx->r3 != ctx->r11) {
        // 0x800787C8: sw          $a0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r4;
            goto L_800787E8;
    }
    // 0x800787C8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x800787CC: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x800787D0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800787D4: slt         $at, $t4, $s1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x800787D8: beql        $at, $zero, L_800787EC
    if (ctx->r1 == 0) {
        // 0x800787DC: sll         $t7, $t0, 1
        ctx->r15 = S32(ctx->r8 << 1);
            goto L_800787EC;
    }
    goto skip_3;
    // 0x800787DC: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    skip_3:
    // 0x800787E0: b           L_80078800
    // 0x800787E4: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
        goto L_80078800;
    // 0x800787E4: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
L_800787E8:
    // 0x800787E8: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
L_800787EC:
    // 0x800787EC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800787F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800787F4: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x800787F8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800787FC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
L_80078800:
    // 0x80078800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80078804:
    // 0x80078804: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x80078808: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8007880C: jr          $ra
    // 0x80078810: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80078810: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void __osPfsReleasePages(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800789F8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800789FC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x80078A00: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80078A04: sll         $t8, $v0, 8
    ctx->r24 = S32(ctx->r2 << 8);
    // 0x80078A08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80078A0C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80078A10: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80078A14: sh          $t9, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r25;
    // 0x80078A18: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80078A1C: addiu       $a2, $sp, 0xC
    ctx->r6 = ADD32(ctx->r29, 0XC);
    // 0x80078A20: addiu       $v1, $sp, 0x8
    ctx->r3 = ADD32(ctx->r29, 0X8);
    // 0x80078A24: lhu         $at, 0x0($a2)
    ctx->r1 = MEM_HU(ctx->r6, 0X0);
L_80078A28:
    // 0x80078A28: sh          $at, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r1;
    // 0x80078A2C: lbu         $t3, 0xD($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XD);
    // 0x80078A30: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80078A34: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x80078A38: lhu         $at, 0x0($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X0);
    // 0x80078A3C: sh          $at, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r1;
    // 0x80078A40: lbu         $t9, 0x9($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9);
    // 0x80078A44: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80078A48: addu        $t0, $a1, $t1
    ctx->r8 = ADD32(ctx->r5, ctx->r9);
    // 0x80078A4C: sh          $a3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r7;
    // 0x80078A50: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x80078A54: lhu         $t2, 0xC($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XC);
    // 0x80078A58: lbu         $t4, 0xC($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XC);
    // 0x80078A5C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80078A60: bnel        $at, $zero, L_80078A74
    if (ctx->r1 != 0) {
        // 0x80078A64: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_80078A74;
    }
    goto skip_0;
    // 0x80078A64: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80078A68: beql        $v0, $t4, L_80078A28
    if (ctx->r2 == ctx->r12) {
        // 0x80078A6C: lhu         $at, 0x0($a2)
        ctx->r1 = MEM_HU(ctx->r6, 0X0);
            goto L_80078A28;
    }
    goto skip_1;
    // 0x80078A6C: lhu         $at, 0x0($a2)
    ctx->r1 = MEM_HU(ctx->r6, 0X0);
    skip_1:
    // 0x80078A70: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_80078A74:
    // 0x80078A74: lhu         $at, 0x0($a2)
    ctx->r1 = MEM_HU(ctx->r6, 0X0);
    // 0x80078A78: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x80078A7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80078A80: jr          $ra
    // 0x80078A84: sh          $at, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r1;
    return;
    // 0x80078A84: sh          $at, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r1;
;}
RECOMP_FUNC void __osMakeMotorData(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079048: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007904C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079050: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80079054: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80079058: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x8007905C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80079060: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80079064: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x80079068: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x8007906C: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    // 0x80079070: sb          $t8, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r24;
    // 0x80079074: sb          $t9, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r25;
    // 0x80079078: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x8007907C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80079080: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    // 0x80079084: jal         0x80083690
    // 0x80079088: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    __osContAddressCrc_recomp(rdram, ctx);
        goto after_0;
    // 0x80079088: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8007908C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80079090: ori         $t1, $v0, 0xC000
    ctx->r9 = ctx->r2 | 0XC000;
    // 0x80079094: sb          $t1, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r9;
    // 0x80079098: beq         $a2, $zero, L_800790E4
    if (ctx->r6 == 0) {
        // 0x8007909C: lw          $v1, 0x4C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X4C);
            goto L_800790E4;
    }
    // 0x8007909C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800790A0: blez        $a2, L_800790E4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800790A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800790E4;
    }
    // 0x800790A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800790A8: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x800790AC: beq         $a1, $zero, L_800790C8
    if (ctx->r5 == 0) {
        // 0x800790B0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800790C8;
    }
    // 0x800790B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_800790B4:
    // 0x800790B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800790B8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x800790BC: bne         $a0, $v0, L_800790B4
    if (ctx->r4 != ctx->r2) {
        // 0x800790C0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800790B4;
    }
    // 0x800790C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800790C4: beq         $v0, $a2, L_800790E4
    if (ctx->r2 == ctx->r6) {
        // 0x800790C8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800790E4;
    }
L_800790C8:
    // 0x800790C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800790CC: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x800790D0: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x800790D4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x800790D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800790DC: bne         $v0, $a2, L_800790C8
    if (ctx->r2 != ctx->r6) {
        // 0x800790E0: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_800790C8;
    }
    // 0x800790E0: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_800790E4:
    // 0x800790E4: addiu       $t2, $sp, 0x24
    ctx->r10 = ADD32(ctx->r29, 0X24);
    // 0x800790E8: addiu       $t4, $t2, 0x24
    ctx->r12 = ADD32(ctx->r10, 0X24);
    // 0x800790EC: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
L_800790F0:
    // 0x800790F0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800790F4: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800790F8: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x800790FC: swl         $at, -0xC($t5)
    do_swl(rdram, -0XC, ctx->r13, ctx->r1);
    // 0x80079100: swr         $at, -0x9($t5)
    do_swr(rdram, -0X9, ctx->r13, ctx->r1);
    // 0x80079104: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80079108: swl         $at, -0x8($t5)
    do_swl(rdram, -0X8, ctx->r13, ctx->r1);
    // 0x8007910C: swr         $at, -0x5($t5)
    do_swr(rdram, -0X5, ctx->r13, ctx->r1);
    // 0x80079110: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80079114: swl         $at, -0x4($t5)
    do_swl(rdram, -0X4, ctx->r13, ctx->r1);
    // 0x80079118: bne         $t2, $t4, L_800790F0
    if (ctx->r10 != ctx->r12) {
        // 0x8007911C: swr         $at, -0x1($t5)
        do_swr(rdram, -0X1, ctx->r13, ctx->r1);
            goto L_800790F0;
    }
    // 0x8007911C: swr         $at, -0x1($t5)
    do_swr(rdram, -0X1, ctx->r13, ctx->r1);
    // 0x80079120: lbu         $at, 0x0($t2)
    ctx->r1 = MEM_BU(ctx->r10, 0X0);
    // 0x80079124: addiu       $t6, $zero, 0xFE
    ctx->r14 = ADD32(0, 0XFE);
    // 0x80079128: addiu       $v1, $v1, 0x27
    ctx->r3 = ADD32(ctx->r3, 0X27);
    // 0x8007912C: sb          $at, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r1;
    // 0x80079130: lbu         $t4, 0x1($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1);
    // 0x80079134: sb          $t4, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r12;
    // 0x80079138: lbu         $at, 0x2($t2)
    ctx->r1 = MEM_BU(ctx->r10, 0X2);
    // 0x8007913C: sb          $at, 0x2($t5)
    MEM_B(0X2, ctx->r13) = ctx->r1;
    // 0x80079140: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x80079144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079148: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8007914C: jr          $ra
    // 0x80079150: nop

    return;
    // 0x80079150: nop

;}
RECOMP_FUNC void osGbpakInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800792B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800792B4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800792B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800792BC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x800792C0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800792C4: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x800792C8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800792CC: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x800792D0: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
L_800792D4:
    // 0x800792D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800792D8: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800792DC: bne         $at, $zero, L_800792D4
    if (ctx->r1 != 0) {
        // 0x800792E0: sb          $v1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r3;
            goto L_800792D4;
    }
    // 0x800792E0: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x800792E4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800792E8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800792EC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x800792F0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x800792F4: jal         0x80083320
    // 0x800792F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    __osContRamWrite_recomp(rdram, ctx);
        goto after_0;
    // 0x800792F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800792FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079300: bne         $v0, $at, L_80079324
    if (ctx->r2 != ctx->r1) {
        // 0x80079304: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80079324;
    }
    // 0x80079304: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80079308: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8007930C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80079310: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80079314: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x80079318: jal         0x80083320
    // 0x8007931C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    __osContRamWrite_recomp(rdram, ctx);
        goto after_1;
    // 0x8007931C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80079320: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80079324:
    // 0x80079324: beq         $v0, $zero, L_80079334
    if (ctx->r2 == 0) {
        // 0x80079328: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_80079334;
    }
    // 0x80079328: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8007932C: b           L_800794D0
    // 0x80079330: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800794D0;
    // 0x80079330: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80079334:
    // 0x80079334: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80079338: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8007933C: jal         0x80081BC0
    // 0x80079340: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    __osContRamRead_recomp(rdram, ctx);
        goto after_2;
    // 0x80079340: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80079344: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079348: bne         $v0, $at, L_80079354
    if (ctx->r2 != ctx->r1) {
        // 0x8007934C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80079354;
    }
    // 0x8007934C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80079350: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80079354:
    // 0x80079354: beq         $v1, $zero, L_80079364
    if (ctx->r3 == 0) {
        // 0x80079358: lbu         $t7, 0x4F($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X4F);
            goto L_80079364;
    }
    // 0x80079358: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x8007935C: b           L_800794D0
    // 0x80079360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800794D0;
    // 0x80079360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80079364:
    // 0x80079364: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80079368: bne         $t7, $at, L_80079378
    if (ctx->r15 != ctx->r1) {
        // 0x8007936C: addiu       $v0, $sp, 0x30
        ctx->r2 = ADD32(ctx->r29, 0X30);
            goto L_80079378;
    }
    // 0x8007936C: addiu       $v0, $sp, 0x30
    ctx->r2 = ADD32(ctx->r29, 0X30);
    // 0x80079370: b           L_800794D0
    // 0x80079374: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_800794D0;
    // 0x80079374: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80079378:
    // 0x80079378: addiu       $t0, $zero, 0x84
    ctx->r8 = ADD32(0, 0X84);
    // 0x8007937C: addiu       $v1, $sp, 0x50
    ctx->r3 = ADD32(ctx->r29, 0X50);
L_80079380:
    // 0x80079380: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80079384: sb          $t0, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r8;
    // 0x80079388: sb          $t0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r8;
    // 0x8007938C: sb          $t0, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r8;
    // 0x80079390: bne         $v0, $v1, L_80079380
    if (ctx->r2 != ctx->r3) {
        // 0x80079394: sb          $t0, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r8;
            goto L_80079380;
    }
    // 0x80079394: sb          $t0, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r8;
    // 0x80079398: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8007939C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800793A0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x800793A4: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x800793A8: jal         0x80083320
    // 0x800793AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    __osContRamWrite_recomp(rdram, ctx);
        goto after_3;
    // 0x800793AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800793B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800793B4: bne         $v0, $at, L_800793C0
    if (ctx->r2 != ctx->r1) {
        // 0x800793B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800793C0;
    }
    // 0x800793B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800793BC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_800793C0:
    // 0x800793C0: beq         $v1, $zero, L_800793D0
    if (ctx->r3 == 0) {
        // 0x800793C4: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_800793D0;
    }
    // 0x800793C4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800793C8: b           L_800794D0
    // 0x800793CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800794D0;
    // 0x800793CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800793D0:
    // 0x800793D0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800793D4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x800793D8: jal         0x80081BC0
    // 0x800793DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    __osContRamRead_recomp(rdram, ctx);
        goto after_4;
    // 0x800793DC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x800793E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800793E4: bne         $v0, $at, L_800793F0
    if (ctx->r2 != ctx->r1) {
        // 0x800793E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800793F0;
    }
    // 0x800793E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800793EC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_800793F0:
    // 0x800793F0: beq         $v1, $zero, L_80079400
    if (ctx->r3 == 0) {
        // 0x800793F4: lbu         $t8, 0x4F($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X4F);
            goto L_80079400;
    }
    // 0x800793F4: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x800793F8: b           L_800794D0
    // 0x800793FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800794D0;
    // 0x800793FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80079400:
    // 0x80079400: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x80079404: beq         $t8, $at, L_80079414
    if (ctx->r24 == ctx->r1) {
        // 0x80079408: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_80079414;
    }
    // 0x80079408: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8007940C: b           L_800794D0
    // 0x80079410: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_800794D0;
    // 0x80079410: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80079414:
    // 0x80079414: jal         0x80081910
    // 0x80079418: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    __osPfsGetStatus_recomp(rdram, ctx);
        goto after_5;
    // 0x80079418: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_5:
    // 0x8007941C: beq         $v0, $zero, L_8007942C
    if (ctx->r2 == 0) {
        // 0x80079420: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_8007942C;
    }
    // 0x80079420: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80079424: b           L_800794D4
    // 0x80079428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800794D4;
    // 0x80079428: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8007942C:
    // 0x8007942C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80079430: addiu       $a1, $a1, 0x178
    ctx->r5 = ADD32(ctx->r5, 0X178);
    // 0x80079434: addiu       $a0, $a0, 0x160
    ctx->r4 = ADD32(ctx->r4, 0X160);
    // 0x80079438: jal         0x80075300
    // 0x8007943C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_6;
    // 0x8007943C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80079440: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80079444: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80079448: addiu       $t1, $t1, 0x178
    ctx->r9 = ADD32(ctx->r9, 0X178);
    // 0x8007944C: addiu       $t9, $t9, 0x160
    ctx->r25 = ADD32(ctx->r25, 0X160);
    // 0x80079450: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80079454: lui         $a3, 0x89
    ctx->r7 = S32(0X89 << 16);
    // 0x80079458: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8007945C: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x80079460: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80079464: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80079468: ori         $a3, $a3, 0x5440
    ctx->r7 = ctx->r7 | 0X5440;
    // 0x8007946C: addiu       $a0, $a0, 0x140
    ctx->r4 = ADD32(ctx->r4, 0X140);
    // 0x80079470: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80079474: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80079478: jal         0x800816C0
    // 0x8007947C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    osSetTimer_recomp(rdram, ctx);
        goto after_7;
    // 0x8007947C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x80079480: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80079484: addiu       $a0, $a0, 0x160
    ctx->r4 = ADD32(ctx->r4, 0X160);
    // 0x80079488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007948C: jal         0x80075330
    // 0x80079490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x80079490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80079494: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80079498: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x8007949C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x800794A0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x800794A4: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x800794A8: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800794AC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800794B0: addiu       $t0, $zero, 0x84
    ctx->r8 = ADD32(0, 0X84);
    // 0x800794B4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x800794B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800794BC: sb          $t0, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r8;
    // 0x800794C0: sb          $t7, 0x64($a0)
    MEM_B(0X64, ctx->r4) = ctx->r15;
    // 0x800794C4: sw          $v1, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r3;
    // 0x800794C8: sw          $v1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r3;
    // 0x800794CC: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
L_800794D0:
    // 0x800794D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800794D4:
    // 0x800794D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800794D8: jr          $ra
    // 0x800794DC: nop

    return;
    // 0x800794DC: nop

;}
RECOMP_FUNC void guLookAtF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079AC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80079AC4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80079AC8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80079ACC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80079AD0: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80079AD4: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80079AD8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80079ADC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80079AE0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80079AE4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80079AE8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80079AEC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80079AF0: jal         0x8007A1B4
    // 0x80079AF4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80079AF4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80079AF8: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80079AFC: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80079B00: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80079B04: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80079B08: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80079B0C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80079B10: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80079B14: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80079B18: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80079B1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80079B20: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80079B24: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80079B28: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80079B2C: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80079B30: jal         0x8007A500
    // 0x80079B34: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80079B34: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80079B38: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80079B3C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80079B40: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80079B44: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80079B48: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80079B4C: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80079B50: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80079B54: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80079B58: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80079B5C: nop

    // 0x80079B60: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80079B64: nop

    // 0x80079B68: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80079B6C: nop

    // 0x80079B70: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80079B74: nop

    // 0x80079B78: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80079B7C: sub.s       $f26, $f8, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80079B80: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80079B84: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80079B88: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80079B8C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80079B90: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80079B94: nop

    // 0x80079B98: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80079B9C: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80079BA0: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80079BA4: nop

    // 0x80079BA8: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x80079BAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80079BB0: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x80079BB4: jal         0x8007A500
    // 0x80079BB8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x80079BB8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x80079BBC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80079BC0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80079BC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80079BC8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80079BCC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80079BD0: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80079BD4: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x80079BD8: nop

    // 0x80079BDC: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80079BE0: nop

    // 0x80079BE4: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80079BE8: nop

    // 0x80079BEC: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x80079BF0: nop

    // 0x80079BF4: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80079BF8: nop

    // 0x80079BFC: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x80079C00: nop

    // 0x80079C04: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80079C08: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80079C0C: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x80079C10: nop

    // 0x80079C14: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x80079C18: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80079C1C: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80079C20: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80079C24: nop

    // 0x80079C28: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80079C2C: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x80079C30: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80079C34: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80079C38: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80079C3C: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x80079C40: jal         0x8007A500
    // 0x80079C44: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80079C44: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x80079C48: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80079C4C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80079C50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80079C54: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80079C58: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80079C5C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80079C60: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80079C64: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80079C68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80079C6C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80079C70: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80079C74: nop

    // 0x80079C78: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80079C7C: nop

    // 0x80079C80: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80079C84: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80079C88: swc1        $f26, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f26.u32l;
    // 0x80079C8C: swc1        $f28, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f28.u32l;
    // 0x80079C90: swc1        $f30, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f30.u32l;
    // 0x80079C94: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80079C98: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80079C9C: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80079CA0: nop

    // 0x80079CA4: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x80079CA8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80079CAC: swc1        $f14, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f14.u32l;
    // 0x80079CB0: swc1        $f12, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f12.u32l;
    // 0x80079CB4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80079CB8: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x80079CBC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80079CC0: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80079CC4: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x80079CC8: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80079CCC: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x80079CD0: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80079CD4: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80079CD8: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80079CDC: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80079CE0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x80079CE4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80079CE8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80079CEC: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x80079CF0: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80079CF4: swc1        $f22, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f22.u32l;
    // 0x80079CF8: swc1        $f24, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f24.u32l;
    // 0x80079CFC: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80079D00: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80079D04: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80079D08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80079D0C: nop

    // 0x80079D10: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x80079D14: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80079D18: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x80079D1C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80079D20: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80079D24: nop

    // 0x80079D28: mul.s       $f6, $f12, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x80079D2C: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80079D30: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x80079D34: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x80079D38: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80079D3C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80079D40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80079D44: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80079D48: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x80079D4C: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x80079D50: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80079D54: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80079D58: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x80079D5C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80079D60: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80079D64: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80079D68: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80079D6C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80079D70: jr          $ra
    // 0x80079D74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80079D74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void guLookAt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079D78: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80079D7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80079D80: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80079D84: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80079D88: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80079D8C: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80079D90: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80079D94: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80079D98: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80079D9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80079DA0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80079DA4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80079DA8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80079DAC: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x80079DB0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80079DB4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80079DB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80079DBC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80079DC0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80079DC4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80079DC8: jal         0x80079AC0
    // 0x80079DCC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    guLookAtF(rdram, ctx);
        goto after_0;
    // 0x80079DCC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80079DD0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80079DD4: jal         0x8007A000
    // 0x80079DD8: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80079DD8: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x80079DDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80079DE0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80079DE4: jr          $ra
    // 0x80079DE8: nop

    return;
    // 0x80079DE8: nop

;}
RECOMP_FUNC void guMtxCatF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079DF0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80079DF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80079DF8: addiu       $v1, $sp, 0x1C
    ctx->r3 = ADD32(ctx->r29, 0X1C);
    // 0x80079DFC: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x80079E00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80079E04: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80079E08: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_80079E0C:
    // 0x80079E0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80079E10: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80079E14: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80079E18: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80079E1C: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80079E20: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80079E24: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80079E28: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80079E2C: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80079E30: beql        $a0, $t2, L_80079EB4
    if (ctx->r4 == ctx->r10) {
        // 0x80079E34: add.s       $f14, $f16, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_80079EB4;
    }
    goto skip_0;
    // 0x80079E34: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    skip_0:
    // 0x80079E38: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
L_80079E3C:
    // 0x80079E3C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80079E40: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80079E44: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80079E48: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x80079E4C: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80079E50: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80079E54: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079E58: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80079E5C: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80079E60: swc1        $f12, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f12.u32l;
    // 0x80079E64: lwc1        $f12, 0x8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80079E68: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80079E6C: lwc1        $f14, -0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079E70: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80079E74: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80079E78: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80079E7C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80079E80: lwc1        $f14, 0x2C($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80079E84: lwc1        $f12, -0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079E88: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80079E8C: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80079E90: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80079E94: add.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80079E98: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x80079E9C: lwc1        $f14, 0x0($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80079EA0: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80079EA4: mul.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80079EA8: bnel        $a0, $t2, L_80079E3C
    if (ctx->r4 != ctx->r10) {
        // 0x80079EAC: add.s       $f14, $f16, $f18
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_80079E3C;
    }
    goto skip_1;
    // 0x80079EAC: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
    skip_1:
    // 0x80079EB0: add.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f18.fl;
L_80079EB4:
    // 0x80079EB4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80079EB8: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80079EBC: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x80079EC0: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80079EC4: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80079EC8: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079ECC: mul.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80079ED0: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80079ED4: swc1        $f12, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f12.u32l;
    // 0x80079ED8: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80079EDC: lwc1        $f12, 0x8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80079EE0: lwc1        $f14, -0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079EE4: mul.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80079EE8: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80079EEC: swc1        $f10, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80079EF0: lwc1        $f14, 0x2C($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80079EF4: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80079EF8: lwc1        $f12, -0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, -0X4);
    // 0x80079EFC: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80079F00: add.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x80079F04: swc1        $f14, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f14.u32l;
    // 0x80079F08: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80079F0C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x80079F10: bne         $at, $zero, L_80079E0C
    if (ctx->r1 != 0) {
        // 0x80079F14: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80079E0C;
    }
    // 0x80079F14: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80079F18: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80079F1C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80079F20: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
L_80079F24:
    // 0x80079F24: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80079F28: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80079F2C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80079F30: swc1        $f6, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->f6.u32l;
    // 0x80079F34: lwc1        $f8, -0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, -0XC);
    // 0x80079F38: swc1        $f8, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80079F3C: lwc1        $f16, -0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, -0X8);
    // 0x80079F40: swc1        $f16, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f16.u32l;
    // 0x80079F44: lwc1        $f10, -0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, -0X4);
    // 0x80079F48: bne         $a0, $v0, L_80079F24
    if (ctx->r4 != ctx->r2) {
        // 0x80079F4C: swc1        $f10, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f10.u32l;
            goto L_80079F24;
    }
    // 0x80079F4C: swc1        $f10, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f10.u32l;
    // 0x80079F50: jr          $ra
    // 0x80079F54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80079F54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void guMtxXFMF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079F58: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80079F5C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80079F60: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80079F64: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80079F68: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80079F6C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80079F70: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80079F74: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80079F78: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80079F7C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80079F80: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80079F84: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80079F88: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80079F8C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80079F90: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80079F94: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80079F98: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80079F9C: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80079FA0: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80079FA4: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x80079FA8: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80079FAC: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80079FB0: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80079FB4: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80079FB8: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80079FBC: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80079FC0: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80079FC4: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
    // 0x80079FC8: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80079FCC: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80079FD0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80079FD4: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x80079FD8: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80079FDC: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x80079FE0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80079FE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80079FE8: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80079FEC: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x80079FF0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80079FF4: jr          $ra
    // 0x80079FF8: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    return;
    // 0x80079FF8: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
;}
RECOMP_FUNC void guMtxF2L(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A000: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8007A004: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007A008: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8007A00C: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x8007A010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007A014: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007A018: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007A01C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8007A020: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_8007A024:
    // 0x8007A024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007A028: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x8007A02C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007A030: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007A034: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8007A038: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007A03C: beq         $a0, $t3, L_8007A0A4
    if (ctx->r4 == ctx->r11) {
        // 0x8007A040: nop
    
            goto L_8007A0A4;
    }
    // 0x8007A040: nop

L_8007A044:
    // 0x8007A044: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007A048: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007A04C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007A050: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007A054: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8007A058: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8007A05C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8007A060: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x8007A064: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8007A068: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8007A06C: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x8007A070: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x8007A074: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007A078: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8007A07C: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x8007A080: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x8007A084: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x8007A088: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8007A08C: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x8007A090: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007A094: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8007A098: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007A09C: bne         $a0, $t3, L_8007A044
    if (ctx->r4 != ctx->r11) {
        // 0x8007A0A0: nop
    
            goto L_8007A044;
    }
    // 0x8007A0A0: nop

L_8007A0A4:
    // 0x8007A0A4: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007A0A8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8007A0AC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007A0B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007A0B4: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8007A0B8: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8007A0BC: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x8007A0C0: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8007A0C4: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8007A0C8: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x8007A0CC: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x8007A0D0: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007A0D4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8007A0D8: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x8007A0DC: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x8007A0E0: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x8007A0E4: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8007A0E8: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x8007A0EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007A0F0: bne         $a2, $t4, L_8007A024
    if (ctx->r6 != ctx->r12) {
        // 0x8007A0F4: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_8007A024;
    }
    // 0x8007A0F4: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8007A0F8: jr          $ra
    // 0x8007A0FC: nop

    return;
    // 0x8007A0FC: nop

;}
RECOMP_FUNC void guMtxL2F(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A100: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x8007A104: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007A108: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007A10C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8007A110: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x8007A114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007A118: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8007A11C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007A120: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8007A124: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_8007A128:
    // 0x8007A128: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007A12C: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_8007A130:
    // 0x8007A130: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8007A134: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8007A138: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007A13C: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x8007A140: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8007A144: and         $t5, $t9, $t2
    ctx->r13 = ctx->r25 & ctx->r10;
    // 0x8007A148: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007A14C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8007A150: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8007A154: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8007A158: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8007A15C: sll         $t5, $t8, 16
    ctx->r13 = S32(ctx->r24 << 16);
    // 0x8007A160: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8007A164: and         $t6, $t5, $t2
    ctx->r14 = ctx->r13 & ctx->r10;
    // 0x8007A168: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8007A16C: or          $a3, $t9, $t6
    ctx->r7 = ctx->r25 | ctx->r14;
    // 0x8007A170: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007A174: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x8007A178: sw          $a3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r7;
    // 0x8007A17C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8007A180: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007A184: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8007A188: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8007A18C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007A190: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007A194: swc1        $f8, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->f8.u32l;
    // 0x8007A198: bne         $a0, $t3, L_8007A130
    if (ctx->r4 != ctx->r11) {
        // 0x8007A19C: swc1        $f18, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->f18.u32l;
            goto L_8007A130;
    }
    // 0x8007A19C: swc1        $f18, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->f18.u32l;
    // 0x8007A1A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007A1A4: bne         $a2, $t4, L_8007A128
    if (ctx->r6 != ctx->r12) {
        // 0x8007A1A8: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8007A128;
    }
    // 0x8007A1A8: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8007A1AC: jr          $ra
    // 0x8007A1B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007A1B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void guMtxIdentF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A1B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007A1B8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007A1BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007A1C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8007A1C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007A1C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007A1CC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8007A1D0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007A1D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8007A1D8:
    // 0x8007A1D8: bnel        $v0, $zero, L_8007A1EC
    if (ctx->r2 != 0) {
        // 0x8007A1DC: swc1        $f2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
            goto L_8007A1EC;
    }
    goto skip_0;
    // 0x8007A1DC: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    skip_0:
    // 0x8007A1E0: b           L_8007A1EC
    // 0x8007A1E4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
        goto L_8007A1EC;
    // 0x8007A1E4: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8007A1E8: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_8007A1EC:
    // 0x8007A1EC: bnel        $v0, $a0, L_8007A200
    if (ctx->r2 != ctx->r4) {
        // 0x8007A1F0: swc1        $f2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
            goto L_8007A200;
    }
    goto skip_1;
    // 0x8007A1F0: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x8007A1F4: b           L_8007A200
    // 0x8007A1F8: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
        goto L_8007A200;
    // 0x8007A1F8: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x8007A1FC: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_8007A200:
    // 0x8007A200: bnel        $v0, $a1, L_8007A214
    if (ctx->r2 != ctx->r5) {
        // 0x8007A204: swc1        $f2, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
            goto L_8007A214;
    }
    goto skip_2;
    // 0x8007A204: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    skip_2:
    // 0x8007A208: b           L_8007A214
    // 0x8007A20C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_8007A214;
    // 0x8007A20C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x8007A210: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
L_8007A214:
    // 0x8007A214: bnel        $v0, $a2, L_8007A228
    if (ctx->r2 != ctx->r6) {
        // 0x8007A218: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_8007A228;
    }
    goto skip_3;
    // 0x8007A218: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x8007A21C: b           L_8007A228
    // 0x8007A220: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_8007A228;
    // 0x8007A220: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x8007A224: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_8007A228:
    // 0x8007A228: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A22C: bne         $v0, $a3, L_8007A1D8
    if (ctx->r2 != ctx->r7) {
        // 0x8007A230: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8007A1D8;
    }
    // 0x8007A230: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8007A234: jr          $ra
    // 0x8007A238: nop

    return;
    // 0x8007A238: nop

;}
RECOMP_FUNC void guMtxIdent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A23C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007A240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A244: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8007A248: jal         0x8007A1B4
    // 0x8007A24C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8007A24C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8007A250: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007A254: jal         0x8007A000
    // 0x8007A258: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8007A258: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x8007A25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A260: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8007A264: jr          $ra
    // 0x8007A268: nop

    return;
    // 0x8007A268: nop

;}
RECOMP_FUNC void guPerspectiveF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A270: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007A274: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007A278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A27C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8007A280: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007A284: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007A288: jal         0x8007A1B4
    // 0x8007A28C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8007A28C: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8007A290: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007A294: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A298: ldc1        $f6, 0x6630($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X6630);
    // 0x8007A29C: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8007A2A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007A2A4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007A2A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007A2AC: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8007A2B0: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8007A2B4: jal         0x8007A800
    // 0x8007A2B8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007A2B8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8007A2BC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007A2C0: jal         0x8007A640
    // 0x8007A2C4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8007A2C4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8007A2C8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007A2CC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007A2D0: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007A2D4: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8007A2D8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007A2DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007A2E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007A2E4: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x8007A2E8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8007A2EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007A2F0: sub.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x8007A2F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8007A2F8: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x8007A2FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007A300: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8007A304: div.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8007A308: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8007A30C: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8007A310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007A314: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x8007A318: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8007A31C: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8007A320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007A324: nop

    // 0x8007A328: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x8007A32C: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8007A330: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8007A334: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x8007A338: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007A33C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007A340: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007A344: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8007A348: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8007A34C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007A350: beq         $v1, $a0, L_8007A394
    if (ctx->r3 == ctx->r4) {
        // 0x8007A354: lwc1        $f14, 0xC($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8007A394;
    }
    // 0x8007A354: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
L_8007A358:
    // 0x8007A358: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007A35C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8007A360: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8007A364: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007A368: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8007A36C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007A370: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007A374: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8007A378: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8007A37C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8007A380: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8007A384: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8007A388: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007A38C: bne         $v1, $a0, L_8007A358
    if (ctx->r3 != ctx->r4) {
        // 0x8007A390: swc1        $f2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
            goto L_8007A358;
    }
    // 0x8007A390: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
L_8007A394:
    // 0x8007A394: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007A398: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007A39C: swc1        $f10, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8007A3A0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007A3A4: nop

    // 0x8007A3A8: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007A3AC: swc1        $f8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f8.u32l;
    // 0x8007A3B0: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8007A3B4: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
    // 0x8007A3B8: beq         $a1, $zero, L_8007A490
    if (ctx->r5 == 0) {
        // 0x8007A3BC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8007A490;
    }
    // 0x8007A3BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007A3C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007A3C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007A3C8: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x8007A3CC: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8007A3D0: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x8007A3D4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8007A3D8: bc1fl       L_8007A3EC
    if (!c1cs) {
        // 0x8007A3DC: mtc1        $at, $f11
        ctx->f_odd[(11 - 1) * 2] = ctx->r1;
            goto L_8007A3EC;
    }
    goto skip_0;
    // 0x8007A3DC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x8007A3E0: b           L_8007A490
    // 0x8007A3E4: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_8007A490;
    // 0x8007A3E4: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8007A3E8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
L_8007A3EC:
    // 0x8007A3EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007A3F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007A3F4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007A3F8: div.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8007A3FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007A400: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007A404: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007A408: nop

    // 0x8007A40C: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8007A410: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007A414: nop

    // 0x8007A418: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007A41C: beql        $t8, $zero, L_8007A470
    if (ctx->r24 == 0) {
        // 0x8007A420: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8007A470;
    }
    goto skip_1;
    // 0x8007A420: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x8007A424: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007A428: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007A42C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007A430: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x8007A434: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007A438: nop

    // 0x8007A43C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x8007A440: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007A444: nop

    // 0x8007A448: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007A44C: bne         $t8, $zero, L_8007A464
    if (ctx->r24 != 0) {
        // 0x8007A450: nop
    
            goto L_8007A464;
    }
    // 0x8007A450: nop

    // 0x8007A454: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8007A458: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007A45C: b           L_8007A47C
    // 0x8007A460: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007A47C;
    // 0x8007A460: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007A464:
    // 0x8007A464: b           L_8007A47C
    // 0x8007A468: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007A47C;
    // 0x8007A468: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8007A46C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8007A470:
    // 0x8007A470: nop

    // 0x8007A474: bltz        $t8, L_8007A464
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007A478: nop
    
            goto L_8007A464;
    }
    // 0x8007A478: nop

L_8007A47C:
    // 0x8007A47C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007A480: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8007A484: bgtz        $t9, L_8007A490
    if (SIGNED(ctx->r25) > 0) {
        // 0x8007A488: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_8007A490;
    }
    // 0x8007A488: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8007A48C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_8007A490:
    // 0x8007A490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007A498: jr          $ra
    // 0x8007A49C: nop

    return;
    // 0x8007A49C: nop

;}
RECOMP_FUNC void guPerspective(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A4A0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007A4A4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8007A4A8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8007A4AC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8007A4B0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8007A4B4: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8007A4B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007A4BC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8007A4C0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8007A4C4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8007A4C8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007A4CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8007A4D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8007A4D4: jal         0x8007A270
    // 0x8007A4D8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x8007A4D8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8007A4DC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007A4E0: jal         0x8007A000
    // 0x8007A4E4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8007A4E4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x8007A4E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007A4EC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8007A4F0: jr          $ra
    // 0x8007A4F4: nop

    return;
    // 0x8007A4F4: nop

;}
RECOMP_FUNC void sqrtf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A500: jr          $ra
    // 0x8007A504: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    // 0x8007A504: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void guScaleF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A518: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007A51C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007A520: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8007A524: jal         0x8007A1B4
    // 0x8007A528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8007A528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007A52C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007A530: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007A534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007A538: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007A53C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8007A540: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007A544: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x8007A548: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007A54C: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x8007A550: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x8007A554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A55C: jr          $ra
    // 0x8007A560: nop

    return;
    // 0x8007A560: nop

;}
RECOMP_FUNC void guScale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A564: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007A568: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007A56C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007A570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A574: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8007A578: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8007A57C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8007A580: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8007A584: jal         0x8007A510
    // 0x8007A588: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guScaleF(rdram, ctx);
        goto after_0;
    // 0x8007A588: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8007A58C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007A590: jal         0x8007A000
    // 0x8007A594: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8007A594: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x8007A598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A59C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8007A5A0: jr          $ra
    // 0x8007A5A4: nop

    return;
    // 0x8007A5A4: nop

;}
RECOMP_FUNC void guNormalize(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A5B8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8007A5BC: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8007A5C0: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8007A5C4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8007A5C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007A5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007A5D0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8007A5D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A5D8: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8007A5DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007A5E0: jal         0x8007A500
    // 0x8007A5E4: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007A5E4: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x8007A5E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007A5EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007A5F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007A5F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A5F8: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007A5FC: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8007A600: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8007A604: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8007A608: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8007A60C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8007A610: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8007A614: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x8007A618: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8007A61C: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8007A620: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x8007A624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A62C: jr          $ra
    // 0x8007A630: nop

    return;
    // 0x8007A630: nop

;}
RECOMP_FUNC void __sinf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A640: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8007A644: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8007A648: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A64C: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8007A650: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x8007A654: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x8007A658: beq         $at, $zero, L_8007A6C0
    if (ctx->r1 == 0) {
        // 0x8007A65C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8007A6C0;
    }
    // 0x8007A65C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8007A660: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x8007A664: bne         $at, $zero, L_8007A6B8
    if (ctx->r1 != 0) {
        // 0x8007A668: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_8007A6B8;
    }
    // 0x8007A668: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8007A66C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8007A670: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007A674: addiu       $v1, $v1, 0x6640
    ctx->r3 = ADD32(ctx->r3, 0X6640);
    // 0x8007A678: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8007A67C: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x8007A680: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x8007A684: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8007A688: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8007A68C: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x8007A690: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x8007A694: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8007A698: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8007A69C: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x8007A6A0: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8007A6A4: nop

    // 0x8007A6A8: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x8007A6AC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x8007A6B0: jr          $ra
    // 0x8007A6B4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8007A6B4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_8007A6B8:
    // 0x8007A6B8: jr          $ra
    // 0x8007A6BC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    // 0x8007A6BC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_8007A6C0:
    // 0x8007A6C0: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x8007A6C4: beq         $at, $zero, L_8007A7D8
    if (ctx->r1 == 0) {
        // 0x8007A6C8: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_8007A7D8;
    }
    // 0x8007A6C8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A6CC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A6D0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A6D4: ldc1        $f10, 0x6668($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X6668);
    // 0x8007A6D8: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8007A6DC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8007A6E0: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x8007A6E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007A6E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007A6EC: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x8007A6F0: nop

    // 0x8007A6F4: bc1fl       L_8007A724
    if (!c1cs) {
        // 0x8007A6F8: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_8007A724;
    }
    goto skip_0;
    // 0x8007A6F8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x8007A6FC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007A700: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007A704: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007A708: nop

    // 0x8007A70C: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x8007A710: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x8007A714: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8007A718: b           L_8007A740
    // 0x8007A71C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_8007A740;
    // 0x8007A71C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8007A720: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_8007A724:
    // 0x8007A724: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007A728: nop

    // 0x8007A72C: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x8007A730: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x8007A734: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8007A738: nop

    // 0x8007A73C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_8007A740:
    // 0x8007A740: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A744: ldc1        $f18, 0x6670($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X6670);
    // 0x8007A748: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x8007A74C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A750: ldc1        $f6, 0x6678($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X6678);
    // 0x8007A754: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007A758: addiu       $v1, $v1, 0x6640
    ctx->r3 = ADD32(ctx->r3, 0X6640);
    // 0x8007A75C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x8007A760: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x8007A764: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x8007A768: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8007A76C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8007A770: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x8007A774: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x8007A778: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x8007A77C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8007A780: nop

    // 0x8007A784: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8007A788: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8007A78C: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x8007A790: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x8007A794: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8007A798: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8007A79C: bne         $t9, $zero, L_8007A7BC
    if (ctx->r25 != 0) {
        // 0x8007A7A0: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_8007A7BC;
    }
    // 0x8007A7A0: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x8007A7A4: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8007A7A8: nop

    // 0x8007A7AC: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8007A7B0: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x8007A7B4: jr          $ra
    // 0x8007A7B8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x8007A7B8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8007A7BC:
    // 0x8007A7BC: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8007A7C0: nop

    // 0x8007A7C4: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8007A7C8: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x8007A7CC: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8007A7D0: jr          $ra
    // 0x8007A7D4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8007A7D4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8007A7D8:
    // 0x8007A7D8: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x8007A7DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A7E0: bc1t        L_8007A7F4
    if (c1cs) {
        // 0x8007A7E4: nop
    
            goto L_8007A7F4;
    }
    // 0x8007A7E4: nop

    // 0x8007A7E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A7EC: jr          $ra
    // 0x8007A7F0: lwc1        $f0, 0x6B00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B00);
    return;
    // 0x8007A7F0: lwc1        $f0, 0x6B00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B00);
L_8007A7F4:
    // 0x8007A7F4: lwc1        $f0, 0x6680($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6680);
    // 0x8007A7F8: jr          $ra
    // 0x8007A7FC: nop

    return;
    // 0x8007A7FC: nop

;}
RECOMP_FUNC void __cosf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A800: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8007A804: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8007A808: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A80C: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A810: sra         $t6, $v0, 22
    ctx->r14 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8007A814: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x8007A818: slti        $at, $t7, 0x136
    ctx->r1 = SIGNED(ctx->r15) < 0X136 ? 1 : 0;
    // 0x8007A81C: beql        $at, $zero, L_8007A944
    if (ctx->r1 == 0) {
        // 0x8007A820: c.eq.s      $f10, $f10
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
            goto L_8007A944;
    }
    goto skip_0;
    // 0x8007A820: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
    skip_0:
    // 0x8007A824: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007A828: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007A82C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007A830: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8007A834: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8007A838: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A83C: bc1fl       L_8007A850
    if (!c1cs) {
        // 0x8007A840: neg.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
            goto L_8007A850;
    }
    goto skip_1;
    // 0x8007A840: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    skip_1:
    // 0x8007A844: b           L_8007A850
    // 0x8007A848: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
        goto L_8007A850;
    // 0x8007A848: mov.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = ctx->f6.fl;
    // 0x8007A84C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8007A850:
    // 0x8007A850: ldc1        $f8, 0x66B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X66B8);
    // 0x8007A854: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x8007A858: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007A85C: mul.d       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f12.d, ctx->f8.d);
    // 0x8007A860: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8007A864: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007A868: add.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = ctx->f10.d + ctx->f18.d;
    // 0x8007A86C: c.le.d      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.d <= ctx->f14.d;
    // 0x8007A870: nop

    // 0x8007A874: bc1fl       L_8007A894
    if (!c1cs) {
        // 0x8007A878: sub.d       $f10, $f14, $f18
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
            goto L_8007A894;
    }
    goto skip_2;
    // 0x8007A878: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
    skip_2:
    // 0x8007A87C: add.d       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f14.d + ctx->f18.d;
    // 0x8007A880: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x8007A884: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8007A888: b           L_8007A8A4
    // 0x8007A88C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
        goto L_8007A8A4;
    // 0x8007A88C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8007A890: sub.d       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f14.d - ctx->f18.d;
L_8007A894:
    // 0x8007A894: trunc.w.d   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x8007A898: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8007A89C: nop

    // 0x8007A8A0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
L_8007A8A4:
    // 0x8007A8A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A8A8: ldc1        $f10, 0x66C0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X66C0);
    // 0x8007A8AC: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8007A8B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A8B4: ldc1        $f6, 0x66C8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X66C8);
    // 0x8007A8B8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007A8BC: addiu       $v1, $v1, 0x6690
    ctx->r3 = ADD32(ctx->r3, 0X6690);
    // 0x8007A8C0: sub.d       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = ctx->f8.d - ctx->f18.d;
    // 0x8007A8C4: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8007A8C8: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8007A8CC: ldc1        $f10, 0x20($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X20);
    // 0x8007A8D0: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8007A8D4: ldc1        $f6, 0x18($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X18);
    // 0x8007A8D8: sub.d       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f12.d - ctx->f4.d;
    // 0x8007A8DC: sub.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f2.d - ctx->f8.d;
    // 0x8007A8E0: mul.d       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f14.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8007A8E4: nop

    // 0x8007A8E8: mul.d       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f14.d);
    // 0x8007A8EC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x8007A8F0: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x8007A8F4: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8007A8F8: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x8007A8FC: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x8007A900: mul.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f14.d);
    // 0x8007A904: bne         $t0, $zero, L_8007A924
    if (ctx->r8 != 0) {
        // 0x8007A908: add.d       $f16, $f10, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
            goto L_8007A924;
    }
    // 0x8007A908: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x8007A90C: mul.d       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8007A910: nop

    // 0x8007A914: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x8007A918: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x8007A91C: jr          $ra
    // 0x8007A920: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x8007A920: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8007A924:
    // 0x8007A924: mul.d       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f14.d);
    // 0x8007A928: nop

    // 0x8007A92C: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8007A930: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x8007A934: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x8007A938: jr          $ra
    // 0x8007A93C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8007A93C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8007A940: c.eq.s      $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f10.fl == ctx->f10.fl;
L_8007A944:
    // 0x8007A944: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A948: bc1t        L_8007A95C
    if (c1cs) {
        // 0x8007A94C: nop
    
            goto L_8007A95C;
    }
    // 0x8007A94C: nop

    // 0x8007A950: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007A954: jr          $ra
    // 0x8007A958: lwc1        $f0, 0x6B00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B00);
    return;
    // 0x8007A958: lwc1        $f0, 0x6B00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6B00);
L_8007A95C:
    // 0x8007A95C: lwc1        $f0, 0x66D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66D0);
    // 0x8007A960: jr          $ra
    // 0x8007A964: nop

    return;
    // 0x8007A964: nop

;}
RECOMP_FUNC void guOrthoF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007A97C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007A980: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8007A984: jal         0x8007A1B4
    // 0x8007A988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8007A988: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8007A98C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007A990: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007A994: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007A998: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007A99C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007A9A0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8007A9A4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007A9A8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007A9AC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8007A9B0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007A9B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007A9B8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8007A9BC: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8007A9C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007A9C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8007A9C8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8007A9CC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007A9D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007A9D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007A9D8: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8007A9DC: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8007A9E0: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8007A9E4: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x8007A9E8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x8007A9EC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007A9F0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007A9F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007A9F8: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8007A9FC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8007AA00: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x8007AA04: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007AA08: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x8007AA0C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8007AA10: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8007AA14: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8007AA18: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8007AA1C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8007AA20: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x8007AA24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007AA28: nop

    // 0x8007AA2C: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x8007AA30: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x8007AA34: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007AA38: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007AA3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007AA40: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8007AA44: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8007AA48: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007AA4C: beq         $v1, $a0, L_8007AA90
    if (ctx->r3 == ctx->r4) {
        // 0x8007AA50: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8007AA90;
    }
    // 0x8007AA50: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_8007AA54:
    // 0x8007AA54: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007AA58: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8007AA5C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8007AA60: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007AA64: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8007AA68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007AA6C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007AA70: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8007AA74: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x8007AA78: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8007AA7C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8007AA80: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8007AA84: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007AA88: bne         $v1, $a0, L_8007AA54
    if (ctx->r3 != ctx->r4) {
        // 0x8007AA8C: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_8007AA54;
    }
    // 0x8007AA8C: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
L_8007AA90:
    // 0x8007AA90: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007AA94: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007AA98: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x8007AA9C: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007AAA0: nop

    // 0x8007AAA4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007AAA8: swc1        $f10, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f10.u32l;
    // 0x8007AAAC: swc1        $f6, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8007AAB0: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8007AAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AABC: jr          $ra
    // 0x8007AAC0: nop

    return;
    // 0x8007AAC0: nop

;}
RECOMP_FUNC void guOrtho(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AAC4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007AAC8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007AACC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007AAD0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8007AAD4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8007AAD8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8007AADC: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8007AAE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007AAE4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8007AAE8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8007AAEC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8007AAF0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8007AAF4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007AAF8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8007AAFC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8007AB00: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8007AB04: jal         0x8007A970
    // 0x8007AB08: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    guOrthoF(rdram, ctx);
        goto after_0;
    // 0x8007AB08: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8007AB0C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007AB10: jal         0x8007A000
    // 0x8007AB14: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8007AB14: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x8007AB18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007AB1C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8007AB20: jr          $ra
    // 0x8007AB24: nop

    return;
    // 0x8007AB24: nop

;}
RECOMP_FUNC void coss(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AB34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007AB38: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007AB3C: addiu       $a0, $a1, 0x4000
    ctx->r4 = ADD32(ctx->r5, 0X4000);
    // 0x8007AB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AB44: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007AB48: jal         0x8007AB60
    // 0x8007AB4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    sins(rdram, ctx);
        goto after_0;
    // 0x8007AB4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8007AB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AB58: jr          $ra
    // 0x8007AB5C: nop

    return;
    // 0x8007AB5C: nop

;}
RECOMP_FUNC void sins(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AB60: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007AB64: srl         $t7, $t6, 4
    ctx->r15 = S32(U32(ctx->r14) >> 4);
    // 0x8007AB68: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8007AB6C: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8007AB70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007AB74: beq         $t9, $zero, L_8007AB98
    if (ctx->r25 == 0) {
        // 0x8007AB78: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8007AB98;
    }
    // 0x8007AB78: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8007AB7C: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x8007AB80: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8007AB84: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8007AB88: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007AB8C: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x8007AB90: b           L_8007ABAC
    // 0x8007AB94: lh          $v1, 0x449E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X449E);
        goto L_8007ABAC;
    // 0x8007AB94: lh          $v1, 0x449E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X449E);
L_8007AB98:
    // 0x8007AB98: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x8007AB9C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8007ABA0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007ABA4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8007ABA8: lh          $v1, 0x3CA0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X3CA0);
L_8007ABAC:
    // 0x8007ABAC: andi        $t5, $v0, 0x800
    ctx->r13 = ctx->r2 & 0X800;
    // 0x8007ABB0: beq         $t5, $zero, L_8007ABC8
    if (ctx->r13 == 0) {
        // 0x8007ABB4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8007ABC8;
    }
    // 0x8007ABB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8007ABB8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8007ABBC: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8007ABC0: jr          $ra
    // 0x8007ABC4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8007ABC4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_8007ABC8:
    // 0x8007ABC8: jr          $ra
    // 0x8007ABCC: nop

    return;
    // 0x8007ABCC: nop

;}
RECOMP_FUNC void alHeapDBAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007ABD0: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8007ABD4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007ABD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007ABDC: multu       $a3, $t6
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007ABE0: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x8007ABE4: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8007ABE8: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8007ABEC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8007ABF0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007ABF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007ABF8: mflo        $v0
    ctx->r2 = lo;
    // 0x8007ABFC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x8007AC00: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x8007AC04: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x8007AC08: sltu        $at, $t0, $t1
    ctx->r1 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x8007AC0C: bne         $at, $zero, L_8007AC1C
    if (ctx->r1 != 0) {
        // 0x8007AC10: addu        $t2, $a0, $t7
        ctx->r10 = ADD32(ctx->r4, ctx->r15);
            goto L_8007AC1C;
    }
    // 0x8007AC10: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x8007AC14: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007AC18: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
L_8007AC1C:
    // 0x8007AC1C: jr          $ra
    // 0x8007AC20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8007AC20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void alCSPDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AC30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AC34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AC38: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007AC3C: jal         0x80083A50
    // 0x8007AC40: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    alSynRemovePlayer(rdram, ctx);
        goto after_0;
    // 0x8007AC40: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x8007AC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AC4C: jr          $ra
    // 0x8007AC50: nop

    return;
    // 0x8007AC50: nop

;}
RECOMP_FUNC void alSndpDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AC64: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007AC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AC6C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8007AC70: jal         0x80083A50
    // 0x8007AC74: lw          $a0, 0x44B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44B0);
    alSynRemovePlayer(rdram, ctx);
        goto after_0;
    // 0x8007AC74: lw          $a0, 0x44B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44B0);
    after_0:
    // 0x8007AC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AC7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AC80: jr          $ra
    // 0x8007AC84: nop

    return;
    // 0x8007AC84: nop

;}
RECOMP_FUNC void alHeapInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AC90: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8007AC94: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x8007AC98: subu        $v0, $v1, $t6
    ctx->r2 = SUB32(ctx->r3, ctx->r14);
    // 0x8007AC9C: beq         $v1, $v0, L_8007ACAC
    if (ctx->r3 == ctx->r2) {
        // 0x8007ACA0: addu        $t7, $a1, $v0
        ctx->r15 = ADD32(ctx->r5, ctx->r2);
            goto L_8007ACAC;
    }
    // 0x8007ACA0: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x8007ACA4: b           L_8007ACB0
    // 0x8007ACA8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
        goto L_8007ACB0;
    // 0x8007ACA8: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_8007ACAC:
    // 0x8007ACAC: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_8007ACB0:
    // 0x8007ACB0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8007ACB4: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8007ACB8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8007ACBC: jr          $ra
    // 0x8007ACC0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x8007ACC0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void alCSPNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007ACD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007ACD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007ACD8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8007ACDC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8007ACE0: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x8007ACE4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8007ACE8: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8007ACEC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8007ACF0: lw          $t6, 0x44B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X44B0);
    // 0x8007ACF4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8007ACF8: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x8007ACFC: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x8007AD00: addiu       $t0, $zero, 0x3E80
    ctx->r8 = ADD32(0, 0X3E80);
    // 0x8007AD04: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x8007AD08: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x8007AD0C: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8007AD10: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8007AD14: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x8007AD18: sw          $t0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r8;
    // 0x8007AD1C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8007AD20: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8007AD24: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x8007AD28: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x8007AD2C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8007AD30: sw          $t1, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r9;
    // 0x8007AD34: lw          $t2, 0x14($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X14);
    // 0x8007AD38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007AD3C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8007AD40: sw          $t2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r10;
    // 0x8007AD44: lw          $t3, 0x18($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X18);
    // 0x8007AD48: sh          $t4, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r12;
    // 0x8007AD4C: sw          $t3, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r11;
    // 0x8007AD50: lbu         $t5, 0x8($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X8);
    // 0x8007AD54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007AD58: sb          $t5, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r13;
    // 0x8007AD5C: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x8007AD60: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8007AD64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007AD68: jal         0x8007ABD0
    // 0x8007AD6C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8007AD6C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8007AD70: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x8007AD74: jal         0x800852CC
    // 0x8007AD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __initChanState(rdram, ctx);
        goto after_1;
    // 0x8007AD78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8007AD7C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8007AD80: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x8007AD84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007AD88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007AD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007AD90: jal         0x8007ABD0
    // 0x8007AD94: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8007AD94: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x8007AD98: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x8007AD9C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8007ADA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007ADA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007ADA8: blez        $t8, L_8007ADD8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8007ADAC: addiu       $t1, $zero, 0x1C
        ctx->r9 = ADD32(0, 0X1C);
            goto L_8007ADD8;
    }
    // 0x8007ADAC: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x8007ADB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8007ADB4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
L_8007ADB8:
    // 0x8007ADB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007ADBC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8007ADC0: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x8007ADC4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8007ADC8: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x8007ADCC: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8007ADD0: bnel        $at, $zero, L_8007ADB8
    if (ctx->r1 != 0) {
        // 0x8007ADD4: lw          $t9, 0x6C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X6C);
            goto L_8007ADB8;
    }
    goto skip_0;
    // 0x8007ADD4: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_8007ADD8:
    // 0x8007ADD8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8007ADDC: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x8007ADE0: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x8007ADE4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8007ADE8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8007ADEC: jal         0x8007ABD0
    // 0x8007ADF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8007ADF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8007ADF4: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x8007ADF8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8007ADFC: jal         0x80085480
    // 0x8007AE00: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    alEvtqNew(rdram, ctx);
        goto after_4;
    // 0x8007AE00: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x8007AE04: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x8007AE08: addiu       $t2, $t2, -0x51C4
    ctx->r10 = ADD32(ctx->r10, -0X51C4);
    // 0x8007AE0C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8007AE10: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    // 0x8007AE14: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x8007AE18: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8007AE1C: lw          $a0, 0x44B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44B0);
    // 0x8007AE20: jal         0x800857C0
    // 0x8007AE24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynAddPlayer(rdram, ctx);
        goto after_5;
    // 0x8007AE24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8007AE28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007AE2C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AE30: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8007AE34: jr          $ra
    // 0x8007AE38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8007AE38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007AE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AE3C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8007AE40: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8007AE44: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8007AE48: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007AE4C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007AE50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007AE54: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8007AE58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8007AE5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007AE60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007AE64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007AE68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007AE6C: addiu       $s5, $a0, 0x48
    ctx->r21 = ADD32(ctx->r4, 0X48);
    // 0x8007AE70: addiu       $s6, $sp, 0x6C
    ctx->r22 = ADD32(ctx->r29, 0X6C);
    // 0x8007AE74: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8007AE78: addiu       $fp, $a0, 0x38
    ctx->r30 = ADD32(ctx->r4, 0X38);
L_8007AE7C:
    // 0x8007AE7C: lhu         $t6, 0x38($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X38);
    // 0x8007AE80: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x8007AE84: beq         $at, $zero, L_8007B32C
    if (ctx->r1 == 0) {
        // 0x8007AE88: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8007B32C;
    }
    // 0x8007AE88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007AE8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007AE90: addu        $at, $at, $t6
    gpr jr_addend_8007AE98 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007AE94: lw          $t6, 0x66E0($at)
    ctx->r14 = ADD32(ctx->r1, 0X66E0);
    // 0x8007AE98: jr          $t6
    // 0x8007AE9C: nop

    switch (jr_addend_8007AE98 >> 2) {
        case 0: goto L_8007AEA0; break;
        case 1: goto L_8007B32C; break;
        case 2: goto L_8007B114; break;
        case 3: goto L_8007B32C; break;
        case 4: goto L_8007B32C; break;
        case 5: goto L_8007AED0; break;
        case 6: goto L_8007AF1C; break;
        case 7: goto L_8007B128; break;
        case 8: goto L_8007B32C; break;
        case 9: goto L_8007AEB0; break;
        case 10: goto L_8007B13C; break;
        case 11: goto L_8007B32C; break;
        case 12: goto L_8007B2CC; break;
        case 13: goto L_8007B2E8; break;
        case 14: goto L_8007B31C; break;
        case 15: goto L_8007B1A0; break;
        case 16: goto L_8007B1C0; break;
        case 17: goto L_8007B230; break;
        case 18: goto L_8007B32C; break;
        case 19: goto L_8007B32C; break;
        case 20: goto L_8007B32C; break;
        case 21: goto L_8007B114; break;
        case 22: goto L_8007AF80; break;
        case 23: goto L_8007B08C; break;
        default: switch_error(__func__, 0x8007AE98, 0x800966E0);
    }
    // 0x8007AE9C: nop

L_8007AEA0:
    // 0x8007AEA0: jal         0x8007B3EC
    // 0x8007AEA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8007B3EC(rdram, ctx);
        goto after_0;
    // 0x8007AEA4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x8007AEA8: b           L_8007B330
    // 0x8007AEAC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007AEAC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007AEB0:
    // 0x8007AEB0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8007AEB4: sh          $t7, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r15;
    // 0x8007AEB8: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x8007AEBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007AEC0: jal         0x80085580
    // 0x8007AEC4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x8007AEC4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_1:
    // 0x8007AEC8: b           L_8007B330
    // 0x8007AECC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007AECC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007AED0:
    // 0x8007AED0: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x8007AED4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007AED8: jal         0x80085810
    // 0x8007AEDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_2;
    // 0x8007AEDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8007AEE0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007AEE4: jal         0x80085890
    // 0x8007AEE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_3;
    // 0x8007AEE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8007AEEC: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x8007AEF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007AEF4: lbu         $t8, 0x37($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X37);
    // 0x8007AEF8: beql        $t8, $zero, L_8007AF0C
    if (ctx->r24 == 0) {
        // 0x8007AEFC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8007AF0C;
    }
    goto skip_0;
    // 0x8007AEFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x8007AF00: jal         0x8008533C
    // 0x8007AF04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_4;
    // 0x8007AF04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8007AF08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8007AF0C:
    // 0x8007AF0C: jal         0x80084C94
    // 0x8007AF10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_5;
    // 0x8007AF10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8007AF14: b           L_8007B330
    // 0x8007AF18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007AF18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007AF1C:
    // 0x8007AF1C: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x8007AF20: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007AF24: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x8007AF28: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x8007AF2C: bnel        $t9, $zero, L_8007AF3C
    if (ctx->r25 != 0) {
        // 0x8007AF30: lw          $s3, 0x40($s2)
        ctx->r19 = MEM_W(ctx->r18, 0X40);
            goto L_8007AF3C;
    }
    goto skip_1;
    // 0x8007AF30: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    skip_1:
    // 0x8007AF34: sb          $t0, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r8;
    // 0x8007AF38: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
L_8007AF3C:
    // 0x8007AF3C: lw          $t1, 0x1C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X1C);
    // 0x8007AF40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007AF44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8007AF48: addu        $t2, $t1, $s3
    ctx->r10 = ADD32(ctx->r9, ctx->r19);
    // 0x8007AF4C: sw          $t2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r10;
    // 0x8007AF50: lbu         $t3, 0x44($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X44);
    // 0x8007AF54: jal         0x80084E80
    // 0x8007AF58: sb          $t3, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r11;
    __vsVol(rdram, ctx);
        goto after_6;
    // 0x8007AF58: sb          $t3, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r11;
    after_6:
    // 0x8007AF5C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8007AF60: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8007AF64: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8007AF68: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007AF6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007AF70: jal         0x80085940
    // 0x8007AF74: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    alSynSetVol(rdram, ctx);
        goto after_7;
    // 0x8007AF74: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_7:
    // 0x8007AF78: b           L_8007B330
    // 0x8007AF7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007AF7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007AF80:
    // 0x8007AF80: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x8007AF84: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x8007AF88: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x8007AF8C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8007AF90: jalr        $t9
    // 0x8007AF94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8007AF94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_8:
    // 0x8007AF98: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8007AF9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007AFA0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8007AFA4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007AFA8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8007AFAC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007AFB0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007AFB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007AFB8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8007AFBC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8007AFC0: nop

    // 0x8007AFC4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8007AFC8: beql        $t6, $zero, L_8007B018
    if (ctx->r14 == 0) {
        // 0x8007AFCC: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_8007B018;
    }
    goto skip_2;
    // 0x8007AFCC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x8007AFD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007AFD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007AFD8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007AFDC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8007AFE0: nop

    // 0x8007AFE4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8007AFE8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8007AFEC: nop

    // 0x8007AFF0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8007AFF4: bne         $t6, $zero, L_8007B00C
    if (ctx->r14 != 0) {
        // 0x8007AFF8: nop
    
            goto L_8007B00C;
    }
    // 0x8007AFF8: nop

    // 0x8007AFFC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8007B000: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007B004: b           L_8007B024
    // 0x8007B008: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8007B024;
    // 0x8007B008: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8007B00C:
    // 0x8007B00C: b           L_8007B024
    // 0x8007B010: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8007B024;
    // 0x8007B010: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8007B014: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_8007B018:
    // 0x8007B018: nop

    // 0x8007B01C: bltz        $t6, L_8007B00C
    if (SIGNED(ctx->r14) < 0) {
        // 0x8007B020: nop
    
            goto L_8007B00C;
    }
    // 0x8007B020: nop

L_8007B024:
    // 0x8007B024: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8007B028: jal         0x80084E80
    // 0x8007B02C: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    __vsVol(rdram, ctx);
        goto after_9;
    // 0x8007B02C: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    after_9:
    // 0x8007B030: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8007B034: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8007B038: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8007B03C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B040: jal         0x80084F08
    // 0x8007B044: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_10;
    // 0x8007B044: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_10:
    // 0x8007B048: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x8007B04C: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8007B050: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8007B054: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007B058: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x8007B05C: jal         0x80085940
    // 0x8007B060: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_11;
    // 0x8007B060: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_11:
    // 0x8007B064: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x8007B068: sh          $t0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r8;
    // 0x8007B06C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8007B070: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x8007B074: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B078: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8007B07C: jal         0x80085580
    // 0x8007B080: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_12;
    // 0x8007B080: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_12:
    // 0x8007B084: b           L_8007B330
    // 0x8007B088: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B088: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B08C:
    // 0x8007B08C: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x8007B090: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x8007B094: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x8007B098: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x8007B09C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8007B0A0: jalr        $t9
    // 0x8007B0A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x8007B0A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_13:
    // 0x8007B0A8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007B0AC: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x8007B0B0: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
    // 0x8007B0B4: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x8007B0B8: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x8007B0BC: lw          $t1, 0x60($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X60);
    // 0x8007B0C0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8007B0C4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007B0C8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007B0CC: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x8007B0D0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007B0D4: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x8007B0D8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8007B0DC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8007B0E0: jal         0x800859E0
    // 0x8007B0E4: nop

    alSynSetPitch(rdram, ctx);
        goto after_14;
    // 0x8007B0E4: nop

    after_14:
    // 0x8007B0E8: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x8007B0EC: sh          $t4, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r12;
    // 0x8007B0F0: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8007B0F4: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x8007B0F8: sb          $s0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r16;
    // 0x8007B0FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B100: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8007B104: jal         0x80085580
    // 0x8007B108: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_15;
    // 0x8007B108: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x8007B10C: b           L_8007B330
    // 0x8007B110: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B110: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B114:
    // 0x8007B114: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B118: jal         0x8007B4B4
    // 0x8007B11C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8007B4B4(rdram, ctx);
        goto after_16;
    // 0x8007B11C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_16:
    // 0x8007B120: b           L_8007B330
    // 0x8007B124: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B124: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B128:
    // 0x8007B128: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B12C: jal         0x8007BD3C
    // 0x8007B130: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    __handleCSPMetaMsg(rdram, ctx);
        goto after_17;
    // 0x8007B130: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_17:
    // 0x8007B134: b           L_8007B330
    // 0x8007B138: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B138: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B13C:
    // 0x8007B13C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x8007B140: lh          $t5, 0x3C($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X3C);
    // 0x8007B144: beq         $s1, $zero, L_8007B32C
    if (ctx->r17 == 0) {
        // 0x8007B148: sh          $t5, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r13;
            goto L_8007B32C;
    }
    // 0x8007B148: sh          $t5, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r13;
    // 0x8007B14C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8007B150:
    // 0x8007B150: jal         0x80084E80
    // 0x8007B154: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_18;
    // 0x8007B154: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_18:
    // 0x8007B158: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8007B15C: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8007B160: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8007B164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B168: jal         0x80084F08
    // 0x8007B16C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_19;
    // 0x8007B16C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_19:
    // 0x8007B170: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x8007B174: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8007B178: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8007B17C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007B180: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x8007B184: jal         0x80085940
    // 0x8007B188: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_20;
    // 0x8007B188: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_20:
    // 0x8007B18C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8007B190: bnel        $s1, $zero, L_8007B150
    if (ctx->r17 != 0) {
        // 0x8007B194: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8007B150;
    }
    goto skip_3;
    // 0x8007B194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
    // 0x8007B198: b           L_8007B330
    // 0x8007B19C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B19C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B1A0:
    // 0x8007B1A0: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x8007B1A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B1A8: beql        $s7, $t8, L_8007B330
    if (ctx->r23 == ctx->r24) {
        // 0x8007B1AC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8007B330;
    }
    goto skip_4;
    // 0x8007B1AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_4:
    // 0x8007B1B0: jal         0x8007B37C
    // 0x8007B1B4: sw          $s7, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r23;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_21;
    // 0x8007B1B4: sw          $s7, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r23;
    after_21:
    // 0x8007B1B8: b           L_8007B330
    // 0x8007B1BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B1BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B1C0:
    // 0x8007B1C0: lw          $t0, 0x2C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X2C);
    // 0x8007B1C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007B1C8: bnel        $t0, $at, L_8007B330
    if (ctx->r8 != ctx->r1) {
        // 0x8007B1CC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8007B330;
    }
    goto skip_5;
    // 0x8007B1CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_5:
    // 0x8007B1D0: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x8007B1D4: beq         $s1, $zero, L_8007B228
    if (ctx->r17 == 0) {
        // 0x8007B1D8: nop
    
            goto L_8007B228;
    }
    // 0x8007B1D8: nop

    // 0x8007B1DC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_8007B1E0:
    // 0x8007B1E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007B1E4: jal         0x80085810
    // 0x8007B1E8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    alSynStopVoice(rdram, ctx);
        goto after_22;
    // 0x8007B1E8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_22:
    // 0x8007B1EC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x8007B1F0: jal         0x80085890
    // 0x8007B1F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_23;
    // 0x8007B1F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_23:
    // 0x8007B1F8: lbu         $t9, 0x37($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X37);
    // 0x8007B1FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B200: beql        $t9, $zero, L_8007B214
    if (ctx->r25 == 0) {
        // 0x8007B204: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8007B214;
    }
    goto skip_6;
    // 0x8007B204: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
    // 0x8007B208: jal         0x8008533C
    // 0x8007B20C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_24;
    // 0x8007B20C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_24:
    // 0x8007B210: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8007B214:
    // 0x8007B214: jal         0x80084C94
    // 0x8007B218: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_25;
    // 0x8007B218: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_25:
    // 0x8007B21C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x8007B220: bnel        $s1, $zero, L_8007B1E0
    if (ctx->r17 != 0) {
        // 0x8007B224: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_8007B1E0;
    }
    goto skip_7;
    // 0x8007B224: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_7:
L_8007B228:
    // 0x8007B228: b           L_8007B32C
    // 0x8007B22C: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_8007B32C;
    // 0x8007B22C: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_8007B230:
    // 0x8007B230: lw          $t1, 0x2C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X2C);
    // 0x8007B234: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B238: bnel        $s7, $t1, L_8007B330
    if (ctx->r23 != ctx->r9) {
        // 0x8007B23C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8007B330;
    }
    goto skip_8;
    // 0x8007B23C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_8:
    // 0x8007B240: jal         0x80085710
    // 0x8007B244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alEvtqFlushType(rdram, ctx);
        goto after_26;
    // 0x8007B244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x8007B248: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B24C: jal         0x80085710
    // 0x8007B250: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    alEvtqFlushType(rdram, ctx);
        goto after_27;
    // 0x8007B250: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_27:
    // 0x8007B254: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B258: jal         0x80085710
    // 0x8007B25C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    alEvtqFlushType(rdram, ctx);
        goto after_28;
    // 0x8007B25C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_28:
    // 0x8007B260: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x8007B264: beql        $s1, $zero, L_8007B2A4
    if (ctx->r17 == 0) {
        // 0x8007B268: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_8007B2A4;
    }
    goto skip_9;
    // 0x8007B268: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    skip_9:
    // 0x8007B26C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_8007B270:
    // 0x8007B270: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007B274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B278: jal         0x800850A0
    // 0x8007B27C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __voiceNeedsNoteKill(rdram, ctx);
        goto after_29;
    // 0x8007B27C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_29:
    // 0x8007B280: beq         $v0, $zero, L_8007B294
    if (ctx->r2 == 0) {
        // 0x8007B284: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8007B294;
    }
    // 0x8007B284: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B288: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007B28C: jal         0x80084F74
    // 0x8007B290: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __seqpReleaseVoice(rdram, ctx);
        goto after_30;
    // 0x8007B290: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_30:
L_8007B294:
    // 0x8007B294: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8007B298: bnel        $s1, $zero, L_8007B270
    if (ctx->r17 != 0) {
        // 0x8007B29C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_8007B270;
    }
    goto skip_10;
    // 0x8007B29C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_10:
    // 0x8007B2A0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_8007B2A4:
    // 0x8007B2A4: sw          $t2, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r10;
    // 0x8007B2A8: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x8007B2AC: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x8007B2B0: sh          $t3, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r11;
    // 0x8007B2B4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8007B2B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8007B2BC: jal         0x80085580
    // 0x8007B2C0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_31;
    // 0x8007B2C0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_31:
    // 0x8007B2C4: b           L_8007B330
    // 0x8007B2C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B2C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B2CC:
    // 0x8007B2CC: lbu         $s0, 0x3C($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3C);
    // 0x8007B2D0: lw          $t5, 0x60($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X60);
    // 0x8007B2D4: lbu         $t4, 0x3D($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X3D);
    // 0x8007B2D8: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8007B2DC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8007B2E0: b           L_8007B32C
    // 0x8007B2E4: sb          $t4, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r12;
        goto L_8007B32C;
    // 0x8007B2E4: sb          $t4, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r12;
L_8007B2E8:
    // 0x8007B2E8: lw          $t8, 0x3C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X3C);
    // 0x8007B2EC: lui         $a1, 0x48F4
    ctx->r5 = S32(0X48F4 << 16);
    // 0x8007B2F0: ori         $a1, $a1, 0x2400
    ctx->r5 = ctx->r5 | 0X2400;
    // 0x8007B2F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B2F8: jal         0x8007BF6C
    // 0x8007B2FC: sw          $t8, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r24;
    __setCUsptFromTempo(rdram, ctx);
        goto after_32;
    // 0x8007B2FC: sw          $t8, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r24;
    after_32:
    // 0x8007B300: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x8007B304: beql        $a1, $zero, L_8007B330
    if (ctx->r5 == 0) {
        // 0x8007B308: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_8007B330;
    }
    goto skip_11;
    // 0x8007B308: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_11:
    // 0x8007B30C: jal         0x80085144
    // 0x8007B310: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __initFromBank(rdram, ctx);
        goto after_33;
    // 0x8007B310: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_33:
    // 0x8007B314: b           L_8007B330
    // 0x8007B318: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_8007B330;
    // 0x8007B318: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B31C:
    // 0x8007B31C: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x8007B320: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007B324: jal         0x80085144
    // 0x8007B328: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    __initFromBank(rdram, ctx);
        goto after_34;
    // 0x8007B328: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_34:
L_8007B32C:
    // 0x8007B32C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8007B330:
    // 0x8007B330: jal         0x800854F4
    // 0x8007B334: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    alEvtqNextEvent(rdram, ctx);
        goto after_35;
    // 0x8007B334: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_35:
    // 0x8007B338: beq         $v0, $zero, L_8007AE7C
    if (ctx->r2 == 0) {
        // 0x8007B33C: sw          $v0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r2;
            goto L_8007AE7C;
    }
    // 0x8007B33C: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x8007B340: lw          $t0, 0x1C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X1C);
    // 0x8007B344: addu        $t9, $t0, $v0
    ctx->r25 = ADD32(ctx->r8, ctx->r2);
    // 0x8007B348: sw          $t9, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r25;
    // 0x8007B34C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8007B350: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8007B354: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8007B358: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007B35C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B360: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007B364: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007B368: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007B36C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B370: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007B374: jr          $ra
    // 0x8007B378: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8007B378: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void __CSPPostNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B37C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007B380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B384: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8007B388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B38C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007B390: bnel        $t6, $at, L_8007B3E0
    if (ctx->r14 != ctx->r1) {
        // 0x8007B394: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007B3E0;
    }
    goto skip_0;
    // 0x8007B394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007B398: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x8007B39C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8007B3A0: beql        $a0, $zero, L_8007B3E0
    if (ctx->r4 == 0) {
        // 0x8007B3A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007B3E0;
    }
    goto skip_1;
    // 0x8007B3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8007B3A8: jal         0x8007C508
    // 0x8007B3AC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    __alCSeqNextDelta(rdram, ctx);
        goto after_0;
    // 0x8007B3AC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x8007B3B0: beq         $v0, $zero, L_8007B3DC
    if (ctx->r2 == 0) {
        // 0x8007B3B4: lw          $a3, 0x30($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X30);
            goto L_8007B3DC;
    }
    // 0x8007B3B4: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8007B3B8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8007B3BC: lw          $t7, 0x24($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X24);
    // 0x8007B3C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B3C4: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8007B3C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007B3CC: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B3D0: mflo        $a2
    ctx->r6 = lo;
    // 0x8007B3D4: jal         0x80085580
    // 0x8007B3D8: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x8007B3D8: nop

    after_1:
L_8007B3DC:
    // 0x8007B3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B3E0:
    // 0x8007B3E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007B3E4: jr          $ra
    // 0x8007B3E8: nop

    return;
    // 0x8007B3E8: nop

;}
RECOMP_FUNC void func_8007B3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B3EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007B3F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007B3F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007B3F8: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8007B3FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007B400: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8007B404: beql        $a2, $zero, L_8007B4A4
    if (ctx->r6 == 0) {
        // 0x8007B408: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007B4A4;
    }
    goto skip_0;
    // 0x8007B408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8007B40C: jal         0x8007C404
    // 0x8007B410: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    alCSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x8007B410: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x8007B414: lh          $t6, 0x28($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X28);
    // 0x8007B418: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8007B41C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007B420: sltiu       $at, $t7, 0x14
    ctx->r1 = ctx->r15 < 0X14 ? 1 : 0;
    // 0x8007B424: beq         $at, $zero, L_8007B4A0
    if (ctx->r1 == 0) {
        // 0x8007B428: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8007B4A0;
    }
    // 0x8007B428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B42C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007B430: addu        $at, $at, $t7
    gpr jr_addend_8007B438 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007B434: lw          $t7, 0x6740($at)
    ctx->r15 = ADD32(ctx->r1, 0X6740);
    // 0x8007B438: jr          $t7
    // 0x8007B43C: nop

    switch (jr_addend_8007B438 >> 2) {
        case 0: goto L_8007B440; break;
        case 1: goto L_8007B4A0; break;
        case 2: goto L_8007B458; break;
        case 3: goto L_8007B470; break;
        case 4: goto L_8007B4A0; break;
        case 5: goto L_8007B4A0; break;
        case 6: goto L_8007B4A0; break;
        case 7: goto L_8007B4A0; break;
        case 8: goto L_8007B4A0; break;
        case 9: goto L_8007B4A0; break;
        case 10: goto L_8007B4A0; break;
        case 11: goto L_8007B4A0; break;
        case 12: goto L_8007B4A0; break;
        case 13: goto L_8007B4A0; break;
        case 14: goto L_8007B4A0; break;
        case 15: goto L_8007B4A0; break;
        case 16: goto L_8007B4A0; break;
        case 17: goto L_8007B498; break;
        case 18: goto L_8007B498; break;
        case 19: goto L_8007B498; break;
        default: switch_error(__func__, 0x8007B438, 0x80096740);
    }
    // 0x8007B43C: nop

L_8007B440:
    // 0x8007B440: jal         0x8007B4B4
    // 0x8007B444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007B4B4(rdram, ctx);
        goto after_1;
    // 0x8007B444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8007B448: jal         0x8007B37C
    // 0x8007B44C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_2;
    // 0x8007B44C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8007B450: b           L_8007B4A4
    // 0x8007B454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007B4A4;
    // 0x8007B454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007B458:
    // 0x8007B458: jal         0x8007BD3C
    // 0x8007B45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __handleCSPMetaMsg(rdram, ctx);
        goto after_3;
    // 0x8007B45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8007B460: jal         0x8007B37C
    // 0x8007B464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_4;
    // 0x8007B464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8007B468: b           L_8007B4A4
    // 0x8007B46C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007B4A4;
    // 0x8007B46C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007B470:
    // 0x8007B470: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8007B474: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    // 0x8007B478: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8007B47C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x8007B480: sh          $t9, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r25;
    // 0x8007B484: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8007B488: jal         0x80085580
    // 0x8007B48C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x8007B48C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    after_5:
    // 0x8007B490: b           L_8007B4A4
    // 0x8007B494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007B4A4;
    // 0x8007B494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007B498:
    // 0x8007B498: jal         0x8007B37C
    // 0x8007B49C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_6;
    // 0x8007B49C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8007B4A0:
    // 0x8007B4A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007B4A4:
    // 0x8007B4A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007B4A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8007B4AC: jr          $ra
    // 0x8007B4B0: nop

    return;
    // 0x8007B4B0: nop

;}
RECOMP_FUNC void func_8007B4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B4B4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8007B4B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007B4BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8007B4C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8007B4C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007B4C8: lbu         $a3, 0x8($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X8);
    // 0x8007B4CC: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x8007B4D0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8007B4D4: andi        $v1, $a3, 0xF0
    ctx->r3 = ctx->r7 & 0XF0;
    // 0x8007B4D8: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
    // 0x8007B4DC: lbu         $t8, 0xA($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XA);
    // 0x8007B4E0: addiu       $t9, $v1, -0x80
    ctx->r25 = ADD32(ctx->r3, -0X80);
    // 0x8007B4E4: sltiu       $at, $t9, 0x61
    ctx->r1 = ctx->r25 < 0X61 ? 1 : 0;
    // 0x8007B4E8: andi        $t6, $a3, 0xF
    ctx->r14 = ctx->r7 & 0XF;
    // 0x8007B4EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007B4F0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8007B4F4: beq         $at, $zero, L_8007BD24
    if (ctx->r1 == 0) {
        // 0x8007B4F8: sb          $t8, 0xB9($sp)
        MEM_B(0XB9, ctx->r29) = ctx->r24;
            goto L_8007BD24;
    }
    // 0x8007B4F8: sb          $t8, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r24;
    // 0x8007B4FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8007B500: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007B504: addu        $at, $at, $t9
    gpr jr_addend_8007B50C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8007B508: lw          $t9, 0x6790($at)
    ctx->r25 = ADD32(ctx->r1, 0X6790);
    // 0x8007B50C: jr          $t9
    // 0x8007B510: nop

    switch (jr_addend_8007B50C >> 2) {
        case 0: goto L_8007B8F8; break;
        case 1: goto L_8007BD24; break;
        case 2: goto L_8007BD24; break;
        case 3: goto L_8007BD24; break;
        case 4: goto L_8007BD24; break;
        case 5: goto L_8007BD24; break;
        case 6: goto L_8007BD24; break;
        case 7: goto L_8007BD24; break;
        case 8: goto L_8007BD24; break;
        case 9: goto L_8007BD24; break;
        case 10: goto L_8007BD24; break;
        case 11: goto L_8007BD24; break;
        case 12: goto L_8007BD24; break;
        case 13: goto L_8007BD24; break;
        case 14: goto L_8007BD24; break;
        case 15: goto L_8007BD24; break;
        case 16: goto L_8007B514; break;
        case 17: goto L_8007BD24; break;
        case 18: goto L_8007BD24; break;
        case 19: goto L_8007BD24; break;
        case 20: goto L_8007BD24; break;
        case 21: goto L_8007BD24; break;
        case 22: goto L_8007BD24; break;
        case 23: goto L_8007BD24; break;
        case 24: goto L_8007BD24; break;
        case 25: goto L_8007BD24; break;
        case 26: goto L_8007BD24; break;
        case 27: goto L_8007BD24; break;
        case 28: goto L_8007BD24; break;
        case 29: goto L_8007BD24; break;
        case 30: goto L_8007BD24; break;
        case 31: goto L_8007BD24; break;
        case 32: goto L_8007B950; break;
        case 33: goto L_8007BD24; break;
        case 34: goto L_8007BD24; break;
        case 35: goto L_8007BD24; break;
        case 36: goto L_8007BD24; break;
        case 37: goto L_8007BD24; break;
        case 38: goto L_8007BD24; break;
        case 39: goto L_8007BD24; break;
        case 40: goto L_8007BD24; break;
        case 41: goto L_8007BD24; break;
        case 42: goto L_8007BD24; break;
        case 43: goto L_8007BD24; break;
        case 44: goto L_8007BD24; break;
        case 45: goto L_8007BD24; break;
        case 46: goto L_8007BD24; break;
        case 47: goto L_8007BD24; break;
        case 48: goto L_8007BA0C; break;
        case 49: goto L_8007BD24; break;
        case 50: goto L_8007BD24; break;
        case 51: goto L_8007BD24; break;
        case 52: goto L_8007BD24; break;
        case 53: goto L_8007BD24; break;
        case 54: goto L_8007BD24; break;
        case 55: goto L_8007BD24; break;
        case 56: goto L_8007BD24; break;
        case 57: goto L_8007BD24; break;
        case 58: goto L_8007BD24; break;
        case 59: goto L_8007BD24; break;
        case 60: goto L_8007BD24; break;
        case 61: goto L_8007BD24; break;
        case 62: goto L_8007BD24; break;
        case 63: goto L_8007BD24; break;
        case 64: goto L_8007BC40; break;
        case 65: goto L_8007BD24; break;
        case 66: goto L_8007BD24; break;
        case 67: goto L_8007BD24; break;
        case 68: goto L_8007BD24; break;
        case 69: goto L_8007BD24; break;
        case 70: goto L_8007BD24; break;
        case 71: goto L_8007BD24; break;
        case 72: goto L_8007BD24; break;
        case 73: goto L_8007BD24; break;
        case 74: goto L_8007BD24; break;
        case 75: goto L_8007BD24; break;
        case 76: goto L_8007BD24; break;
        case 77: goto L_8007BD24; break;
        case 78: goto L_8007BD24; break;
        case 79: goto L_8007BD24; break;
        case 80: goto L_8007B9A8; break;
        case 81: goto L_8007BD24; break;
        case 82: goto L_8007BD24; break;
        case 83: goto L_8007BD24; break;
        case 84: goto L_8007BD24; break;
        case 85: goto L_8007BD24; break;
        case 86: goto L_8007BD24; break;
        case 87: goto L_8007BD24; break;
        case 88: goto L_8007BD24; break;
        case 89: goto L_8007BD24; break;
        case 90: goto L_8007BD24; break;
        case 91: goto L_8007BD24; break;
        case 92: goto L_8007BD24; break;
        case 93: goto L_8007BD24; break;
        case 94: goto L_8007BD24; break;
        case 95: goto L_8007BD24; break;
        case 96: goto L_8007BC74; break;
        default: switch_error(__func__, 0x8007B50C, 0x80096790);
    }
    // 0x8007B510: nop

L_8007B514:
    // 0x8007B514: lbu         $t0, 0xB9($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007B518: beql        $t0, $zero, L_8007B8FC
    if (ctx->r8 == 0) {
        // 0x8007B51C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8007B8FC;
    }
    goto skip_0;
    // 0x8007B51C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x8007B520: lw          $t1, 0x2C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X2C);
    // 0x8007B524: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B52C: bne         $t1, $at, L_8007BD24
    if (ctx->r9 != ctx->r1) {
        // 0x8007B530: lbu         $a1, 0xBA($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0XBA);
            goto L_8007BD24;
    }
    // 0x8007B530: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B534: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    // 0x8007B538: sb          $a3, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r7;
    // 0x8007B53C: jal         0x80084D78
    // 0x8007B540: sw          $s0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r16;
    __lookupSoundQuick(rdram, ctx);
        goto after_0;
    // 0x8007B540: sw          $s0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007B544: beq         $v0, $zero, L_8007BD24
    if (ctx->r2 == 0) {
        // 0x8007B548: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_8007BD24;
    }
    // 0x8007B548: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x8007B54C: lbu         $a3, 0xBB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBB);
    // 0x8007B550: lw          $t2, 0x60($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X60);
    // 0x8007B554: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B558: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x8007B55C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8007B560: lbu         $t4, 0x8($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8);
    // 0x8007B564: sh          $zero, 0x86($sp)
    MEM_H(0X86, ctx->r29) = 0;
    // 0x8007B568: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x8007B56C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8007B570: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B574: lbu         $a2, 0xB9($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007B578: jal         0x80084C24
    // 0x8007B57C: sh          $t4, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r12;
    __mapVoice(rdram, ctx);
        goto after_1;
    // 0x8007B57C: sh          $t4, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r12;
    after_1:
    // 0x8007B580: beq         $v0, $zero, L_8007BD24
    if (ctx->r2 == 0) {
        // 0x8007B584: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8007BD24;
    }
    // 0x8007B584: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007B588: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007B58C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x8007B590: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8007B594: jal         0x80085A70
    // 0x8007B598: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    alSynAllocVoice(rdram, ctx);
        goto after_2;
    // 0x8007B598: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_2:
    // 0x8007B59C: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8007B5A0: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
    // 0x8007B5A4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007B5A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8007B5AC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8007B5B0: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x8007B5B4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8007B5B8: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x8007B5BC: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x8007B5C0: bnel        $at, $zero, L_8007B5D4
    if (ctx->r1 != 0) {
        // 0x8007B5C4: sb          $zero, 0x35($s0)
        MEM_B(0X35, ctx->r16) = 0;
            goto L_8007B5D4;
    }
    goto skip_1;
    // 0x8007B5C4: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    skip_1:
    // 0x8007B5C8: b           L_8007B5D4
    // 0x8007B5CC: sb          $t9, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r25;
        goto L_8007B5D4;
    // 0x8007B5CC: sb          $t9, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r25;
    // 0x8007B5D0: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_8007B5D4:
    // 0x8007B5D4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8007B5D8: lbu         $t0, 0xBA($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B5DC: lbu         $t1, 0x4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4);
    // 0x8007B5E0: lb          $t4, 0x5($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X5);
    // 0x8007B5E4: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8007B5E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007B5EC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007B5F0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8007B5F4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007B5F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007B5FC: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8007B600: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x8007B604: jal         0x8007D100
    // 0x8007B608: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    func_8007D100(rdram, ctx);
        goto after_3;
    // 0x8007B608: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    after_3:
    // 0x8007B60C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x8007B610: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8007B614: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8007B618: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007B61C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8007B620: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x8007B624: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x8007B628: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8007B62C: lw          $t0, 0x1C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1C);
    // 0x8007B630: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8007B634: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8007B638: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x8007B63C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8007B640: sw          $t4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r12;
    // 0x8007B644: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8007B648: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x8007B64C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8007B650: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x8007B654: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8007B658: lbu         $a2, 0x4($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X4);
    // 0x8007B65C: beql        $a2, $zero, L_8007B6C8
    if (ctx->r6 == 0) {
        // 0x8007B660: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_8007B6C8;
    }
    goto skip_2;
    // 0x8007B660: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_2:
    // 0x8007B664: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x8007B668: beql        $v0, $zero, L_8007B6C8
    if (ctx->r2 == 0) {
        // 0x8007B66C: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_8007B6C8;
    }
    goto skip_3;
    // 0x8007B66C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_3:
    // 0x8007B670: lbu         $t8, 0x6($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6);
    // 0x8007B674: lbu         $a3, 0x5($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X5);
    // 0x8007B678: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8007B67C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8007B680: lbu         $t9, 0x7($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X7);
    // 0x8007B684: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8007B688: jalr        $v0
    // 0x8007B68C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8007B68C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_4:
    // 0x8007B690: beq         $v0, $zero, L_8007B6C4
    if (ctx->r2 == 0) {
        // 0x8007B694: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8007B6C4;
    }
    // 0x8007B694: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8007B698: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8007B69C: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x8007B6A0: sh          $t1, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r9;
    // 0x8007B6A4: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x8007B6A8: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x8007B6AC: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8007B6B0: jal         0x80085580
    // 0x8007B6B4: sw          $t2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x8007B6B4: sw          $t2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r10;
    after_5:
    // 0x8007B6B8: lbu         $t0, 0x37($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X37);
    // 0x8007B6BC: ori         $t3, $t0, 0x1
    ctx->r11 = ctx->r8 | 0X1;
    // 0x8007B6C0: sb          $t3, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r11;
L_8007B6C4:
    // 0x8007B6C4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_8007B6C8:
    // 0x8007B6C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007B6CC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8007B6D0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8007B6D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007B6D8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8007B6DC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8007B6E0: nop

    // 0x8007B6E4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8007B6E8: beql        $t5, $zero, L_8007B738
    if (ctx->r13 == 0) {
        // 0x8007B6EC: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_8007B738;
    }
    goto skip_4;
    // 0x8007B6EC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x8007B6F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007B6F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007B6F8: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8007B6FC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8007B700: nop

    // 0x8007B704: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8007B708: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8007B70C: nop

    // 0x8007B710: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8007B714: bne         $t5, $zero, L_8007B72C
    if (ctx->r13 != 0) {
        // 0x8007B718: nop
    
            goto L_8007B72C;
    }
    // 0x8007B718: nop

    // 0x8007B71C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8007B720: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007B724: b           L_8007B744
    // 0x8007B728: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8007B744;
    // 0x8007B728: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8007B72C:
    // 0x8007B72C: b           L_8007B744
    // 0x8007B730: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8007B744;
    // 0x8007B730: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8007B734: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_8007B738:
    // 0x8007B738: nop

    // 0x8007B73C: bltz        $t5, L_8007B72C
    if (SIGNED(ctx->r13) < 0) {
        // 0x8007B740: nop
    
            goto L_8007B72C;
    }
    // 0x8007B740: nop

L_8007B744:
    // 0x8007B744: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007B748: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007B74C: sb          $t5, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r13;
    // 0x8007B750: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8007B754: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8007B758: lbu         $a2, 0x8($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X8);
    // 0x8007B75C: addiu       $t6, $s1, 0x48
    ctx->r14 = ADD32(ctx->r17, 0X48);
    // 0x8007B760: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8007B764: beql        $a2, $zero, L_8007B7D8
    if (ctx->r6 == 0) {
        // 0x8007B768: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_8007B7D8;
    }
    goto skip_5;
    // 0x8007B768: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    skip_5:
    // 0x8007B76C: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x8007B770: beql        $v0, $zero, L_8007B7D8
    if (ctx->r2 == 0) {
        // 0x8007B774: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_8007B7D8;
    }
    goto skip_6;
    // 0x8007B774: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    skip_6:
    // 0x8007B778: lbu         $t7, 0xA($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XA);
    // 0x8007B77C: lbu         $a3, 0x9($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X9);
    // 0x8007B780: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8007B784: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007B788: lbu         $t8, 0xB($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XB);
    // 0x8007B78C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8007B790: jalr        $v0
    // 0x8007B794: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8007B794: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_6:
    // 0x8007B798: beq         $v0, $zero, L_8007B7D4
    if (ctx->r2 == 0) {
        // 0x8007B79C: addiu       $t9, $zero, 0x17
        ctx->r25 = ADD32(0, 0X17);
            goto L_8007B7D4;
    }
    // 0x8007B79C: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x8007B7A0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007B7A4: lbu         $t2, 0xBB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBB);
    // 0x8007B7A8: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x8007B7AC: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x8007B7B0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8007B7B4: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8007B7B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8007B7BC: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x8007B7C0: jal         0x80085580
    // 0x8007B7C4: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x8007B7C4: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    after_7:
    // 0x8007B7C8: lbu         $t0, 0x37($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X37);
    // 0x8007B7CC: ori         $t3, $t0, 0x2
    ctx->r11 = ctx->r8 | 0X2;
    // 0x8007B7D0: sb          $t3, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r11;
L_8007B7D4:
    // 0x8007B7D4: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
L_8007B7D8:
    // 0x8007B7D8: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8007B7DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007B7E0: swc1        $f16, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f16.u32l;
    // 0x8007B7E4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8007B7E8: lw          $t4, 0x60($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X60);
    // 0x8007B7EC: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8007B7F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007B7F4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x8007B7F8: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8007B7FC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8007B800: nop

    // 0x8007B804: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007B808: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x8007B80C: lbu         $t6, 0xA($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA);
    // 0x8007B810: jal         0x80084F2C
    // 0x8007B814: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    __vsPan(rdram, ctx);
        goto after_8;
    // 0x8007B814: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    after_8:
    // 0x8007B818: sb          $v0, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r2;
    // 0x8007B81C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007B820: jal         0x80084E80
    // 0x8007B824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsVol(rdram, ctx);
        goto after_9;
    // 0x8007B824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x8007B828: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8007B82C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007B830: lbu         $t9, 0x93($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X93);
    // 0x8007B834: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8007B838: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x8007B83C: lbu         $t1, 0x73($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X73);
    // 0x8007B840: lw          $s2, 0x0($t8)
    ctx->r18 = MEM_W(ctx->r24, 0X0);
    // 0x8007B844: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007B848: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8007B84C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8007B850: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8007B854: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007B858: jal         0x80074F10
    // 0x8007B85C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    alSeqpPostEvent(rdram, ctx);
        goto after_10;
    // 0x8007B85C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x8007B860: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8007B864: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x8007B868: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8007B86C: sh          $t2, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r10;
    // 0x8007B870: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x8007B874: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8007B878: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8007B87C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8007B880: lbu         $t5, 0xD($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XD);
    // 0x8007B884: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8007B888: sb          $t5, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r13;
    // 0x8007B88C: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x8007B890: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x8007B894: jal         0x80085580
    // 0x8007B898: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    alEvtqPostEvent(rdram, ctx);
        goto after_11;
    // 0x8007B898: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    after_11:
    // 0x8007B89C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    // 0x8007B8A0: addiu       $t9, $zero, 0x15
    ctx->r25 = ADD32(0, 0X15);
    // 0x8007B8A4: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8007B8A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007B8AC: beql        $t7, $zero, L_8007BD28
    if (ctx->r15 == 0) {
        // 0x8007B8B0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_7;
    // 0x8007B8B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_7:
    // 0x8007B8B4: lbu         $t1, 0xBB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBB);
    // 0x8007B8B8: lbu         $t0, 0xBA($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B8BC: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x8007B8C0: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x8007B8C4: sb          $t2, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r10;
    // 0x8007B8C8: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x8007B8CC: sb          $t0, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r8;
    // 0x8007B8D0: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x8007B8D4: lw          $t4, 0x24($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X24);
    // 0x8007B8D8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8007B8DC: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x8007B8E0: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B8E4: mflo        $a2
    ctx->r6 = lo;
    // 0x8007B8E8: jal         0x80085580
    // 0x8007B8EC: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_12;
    // 0x8007B8EC: nop

    after_12:
    // 0x8007B8F0: b           L_8007BD28
    // 0x8007B8F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007B8F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007B8F8:
    // 0x8007B8F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_8007B8FC:
    // 0x8007B8FC: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B900: jal         0x80084D04
    // 0x8007B904: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_13;
    // 0x8007B904: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    after_13:
    // 0x8007B908: beq         $v0, $zero, L_8007BD24
    if (ctx->r2 == 0) {
        // 0x8007B90C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8007BD24;
    }
    // 0x8007B90C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007B910: lbu         $t3, 0x35($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X35);
    // 0x8007B914: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007B918: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007B91C: bne         $t3, $at, L_8007B92C
    if (ctx->r11 != ctx->r1) {
        // 0x8007B920: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_8007B92C;
    }
    // 0x8007B920: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8007B924: b           L_8007BD24
    // 0x8007B928: sb          $t6, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r14;
        goto L_8007BD24;
    // 0x8007B928: sb          $t6, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r14;
L_8007B92C:
    // 0x8007B92C: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x8007B930: sb          $t8, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r24;
    // 0x8007B934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B938: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8007B93C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007B940: jal         0x80084F74
    // 0x8007B944: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_14;
    // 0x8007B944: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    after_14:
    // 0x8007B948: b           L_8007BD28
    // 0x8007B94C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007B94C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007B950:
    // 0x8007B950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007B954: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B958: jal         0x80084D04
    // 0x8007B95C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_15;
    // 0x8007B95C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    after_15:
    // 0x8007B960: beq         $v0, $zero, L_8007BD24
    if (ctx->r2 == 0) {
        // 0x8007B964: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8007BD24;
    }
    // 0x8007B964: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007B968: lbu         $t1, 0xB9($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007B96C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007B970: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007B974: jal         0x80084E80
    // 0x8007B978: sb          $t1, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r9;
    __vsVol(rdram, ctx);
        goto after_16;
    // 0x8007B978: sb          $t1, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r9;
    after_16:
    // 0x8007B97C: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x8007B980: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8007B984: jal         0x80084F08
    // 0x8007B988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_17;
    // 0x8007B988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8007B98C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007B990: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007B994: lh          $a2, 0x52($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X52);
    // 0x8007B998: jal         0x80085940
    // 0x8007B99C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_18;
    // 0x8007B99C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_18:
    // 0x8007B9A0: b           L_8007BD28
    // 0x8007B9A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007B9A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007B9A8:
    // 0x8007B9A8: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007B9AC: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8007B9B0: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007B9B4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_8;
    // 0x8007B9B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_8:
    // 0x8007B9B8: lbu         $t2, 0x31($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X31);
L_8007B9BC:
    // 0x8007B9BC: lbu         $t0, 0xBA($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007B9C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007B9C4: bne         $s2, $t2, L_8007B9F8
    if (ctx->r18 != ctx->r10) {
        // 0x8007B9C8: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8007B9F8;
    }
    // 0x8007B9C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007B9CC: jal         0x80084E80
    // 0x8007B9D0: sb          $t0, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r8;
    __vsVol(rdram, ctx);
        goto after_19;
    // 0x8007B9D0: sb          $t0, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r8;
    after_19:
    // 0x8007B9D4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x8007B9D8: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8007B9DC: jal         0x80084F08
    // 0x8007B9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_20;
    // 0x8007B9E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8007B9E4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007B9E8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007B9EC: lh          $a2, 0x52($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X52);
    // 0x8007B9F0: jal         0x80085940
    // 0x8007B9F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_21;
    // 0x8007B9F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_21:
L_8007B9F8:
    // 0x8007B9F8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8007B9FC: bnel        $s0, $zero, L_8007B9BC
    if (ctx->r16 != 0) {
        // 0x8007BA00: lbu         $t2, 0x31($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X31);
            goto L_8007B9BC;
    }
    goto skip_9;
    // 0x8007BA00: lbu         $t2, 0x31($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X31);
    skip_9:
    // 0x8007BA04: b           L_8007BD28
    // 0x8007BA08: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BA08: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BA0C:
    // 0x8007BA0C: lbu         $v0, 0xBA($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007BA10: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8007BA14: beq         $v0, $at, L_8007BAA4
    if (ctx->r2 == ctx->r1) {
        // 0x8007BA18: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8007BAA4;
    }
    // 0x8007BA18: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8007BA1C: beq         $v0, $at, L_8007BA44
    if (ctx->r2 == ctx->r1) {
        // 0x8007BA20: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8007BA44;
    }
    // 0x8007BA20: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8007BA24: beq         $v0, $at, L_8007BB28
    if (ctx->r2 == ctx->r1) {
        // 0x8007BA28: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_8007BB28;
    }
    // 0x8007BA28: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8007BA2C: beq         $v0, $at, L_8007BB40
    if (ctx->r2 == ctx->r1) {
        // 0x8007BA30: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_8007BB40;
    }
    // 0x8007BA30: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x8007BA34: beql        $v0, $at, L_8007BBF0
    if (ctx->r2 == ctx->r1) {
        // 0x8007BA38: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_8007BBF0;
    }
    goto skip_10;
    // 0x8007BA38: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_10:
    // 0x8007BA3C: b           L_8007BD28
    // 0x8007BA40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BA40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BA44:
    // 0x8007BA44: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x8007BA48: lbu         $t4, 0xB9($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BA4C: sll         $t3, $a3, 4
    ctx->r11 = S32(ctx->r7 << 4);
    // 0x8007BA50: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x8007BA54: sb          $t4, 0x7($t6)
    MEM_B(0X7, ctx->r14) = ctx->r12;
    // 0x8007BA58: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007BA5C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8007BA60: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007BA64: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_11;
    // 0x8007BA64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_11:
    // 0x8007BA68: lbu         $t8, 0x31($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X31);
L_8007BA6C:
    // 0x8007BA6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007BA70: bnel        $s2, $t8, L_8007BA94
    if (ctx->r18 != ctx->r24) {
        // 0x8007BA74: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BA94;
    }
    goto skip_12;
    // 0x8007BA74: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x8007BA78: jal         0x80084F2C
    // 0x8007BA7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsPan(rdram, ctx);
        goto after_22;
    // 0x8007BA7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x8007BA80: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007BA84: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007BA88: jal         0x80075020
    // 0x8007BA8C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    alSynSetPan(rdram, ctx);
        goto after_23;
    // 0x8007BA8C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_23:
    // 0x8007BA90: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007BA94:
    // 0x8007BA94: bnel        $s0, $zero, L_8007BA6C
    if (ctx->r16 != 0) {
        // 0x8007BA98: lbu         $t8, 0x31($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X31);
            goto L_8007BA6C;
    }
    goto skip_13;
    // 0x8007BA98: lbu         $t8, 0x31($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X31);
    skip_13:
    // 0x8007BA9C: b           L_8007BD28
    // 0x8007BAA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BAA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BAA4:
    // 0x8007BAA4: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x8007BAA8: lbu         $t7, 0xB9($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BAAC: sll         $t1, $a3, 4
    ctx->r9 = S32(ctx->r7 << 4);
    // 0x8007BAB0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8007BAB4: sb          $t7, 0x9($t2)
    MEM_B(0X9, ctx->r10) = ctx->r15;
    // 0x8007BAB8: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007BABC: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8007BAC0: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007BAC4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_14;
    // 0x8007BAC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_14:
    // 0x8007BAC8: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_8007BACC:
    // 0x8007BACC: bnel        $s2, $t0, L_8007BB18
    if (ctx->r18 != ctx->r8) {
        // 0x8007BAD0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BB18;
    }
    goto skip_15;
    // 0x8007BAD0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_15:
    // 0x8007BAD4: lbu         $t5, 0x34($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X34);
    // 0x8007BAD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007BADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007BAE0: beql        $t5, $at, L_8007BB18
    if (ctx->r13 == ctx->r1) {
        // 0x8007BAE4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BB18;
    }
    goto skip_16;
    // 0x8007BAE4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x8007BAE8: jal         0x80084E80
    // 0x8007BAEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsVol(rdram, ctx);
        goto after_24;
    // 0x8007BAEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_24:
    // 0x8007BAF0: sh          $v0, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r2;
    // 0x8007BAF4: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8007BAF8: jal         0x80084F08
    // 0x8007BAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_25;
    // 0x8007BAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x8007BB00: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007BB04: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007BB08: lh          $a2, 0xAE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XAE);
    // 0x8007BB0C: jal         0x80085940
    // 0x8007BB10: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_26;
    // 0x8007BB10: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_26:
    // 0x8007BB14: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007BB18:
    // 0x8007BB18: bnel        $s0, $zero, L_8007BACC
    if (ctx->r16 != 0) {
        // 0x8007BB1C: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_8007BACC;
    }
    goto skip_17;
    // 0x8007BB1C: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_17:
    // 0x8007BB20: b           L_8007BD28
    // 0x8007BB24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BB24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BB28:
    // 0x8007BB28: lw          $t4, 0x60($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X60);
    // 0x8007BB2C: lbu         $t3, 0xB9($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BB30: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x8007BB34: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x8007BB38: b           L_8007BD24
    // 0x8007BB3C: sb          $t3, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r11;
        goto L_8007BD24;
    // 0x8007BB3C: sb          $t3, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r11;
L_8007BB40:
    // 0x8007BB40: lw          $t1, 0x60($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X60);
    // 0x8007BB44: lbu         $t9, 0xB9($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BB48: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x8007BB4C: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x8007BB50: sb          $t9, 0xB($t2)
    MEM_B(0XB, ctx->r10) = ctx->r25;
    // 0x8007BB54: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007BB58: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8007BB5C: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007BB60: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_18;
    // 0x8007BB60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_18:
    // 0x8007BB64: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_8007BB68:
    // 0x8007BB68: bnel        $s2, $t0, L_8007BBDC
    if (ctx->r18 != ctx->r8) {
        // 0x8007BB6C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BBDC;
    }
    goto skip_19;
    // 0x8007BB6C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_19:
    // 0x8007BB70: lbu         $v0, 0x35($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35);
    // 0x8007BB74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007BB78: lbu         $t5, 0xB9($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BB7C: beq         $v0, $at, L_8007BBD8
    if (ctx->r2 == ctx->r1) {
        // 0x8007BB80: slti        $at, $t5, 0x40
        ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
            goto L_8007BBD8;
    }
    // 0x8007BB80: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x8007BB84: bnel        $at, $zero, L_8007BBA0
    if (ctx->r1 != 0) {
        // 0x8007BB88: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007BBA0;
    }
    goto skip_20;
    // 0x8007BB88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_20:
    // 0x8007BB8C: bne         $v0, $zero, L_8007BBD8
    if (ctx->r2 != 0) {
        // 0x8007BB90: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_8007BBD8;
    }
    // 0x8007BB90: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8007BB94: b           L_8007BBD8
    // 0x8007BB98: sb          $t4, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r12;
        goto L_8007BBD8;
    // 0x8007BB98: sb          $t4, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r12;
    // 0x8007BB9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8007BBA0:
    // 0x8007BBA0: bnel        $v0, $at, L_8007BBB4
    if (ctx->r2 != ctx->r1) {
        // 0x8007BBA4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8007BBB4;
    }
    goto skip_21;
    // 0x8007BBA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_21:
    // 0x8007BBA8: b           L_8007BBD8
    // 0x8007BBAC: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
        goto L_8007BBD8;
    // 0x8007BBAC: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    // 0x8007BBB0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8007BBB4:
    // 0x8007BBB4: bne         $v0, $at, L_8007BBD8
    if (ctx->r2 != ctx->r1) {
        // 0x8007BBB8: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_8007BBD8;
    }
    // 0x8007BBB8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8007BBBC: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x8007BBC0: sb          $t6, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r14;
    // 0x8007BBC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007BBC8: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x8007BBCC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007BBD0: jal         0x80084F74
    // 0x8007BBD4: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_27;
    // 0x8007BBD4: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    after_27:
L_8007BBD8:
    // 0x8007BBD8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007BBDC:
    // 0x8007BBDC: bnel        $s0, $zero, L_8007BB68
    if (ctx->r16 != 0) {
        // 0x8007BBE0: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_8007BB68;
    }
    goto skip_22;
    // 0x8007BBE0: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_22:
    // 0x8007BBE4: b           L_8007BD28
    // 0x8007BBE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BBE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007BBEC: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_8007BBF0:
    // 0x8007BBF0: lbu         $t1, 0xB9($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BBF4: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x8007BBF8: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x8007BBFC: sb          $t1, 0xA($t2)
    MEM_B(0XA, ctx->r10) = ctx->r9;
    // 0x8007BC00: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007BC04: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x8007BC08: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007BC0C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_23;
    // 0x8007BC0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_23:
    // 0x8007BC10: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_8007BC14:
    // 0x8007BC14: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007BC18: lbu         $a2, 0xB9($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BC1C: bnel        $s2, $t0, L_8007BC30
    if (ctx->r18 != ctx->r8) {
        // 0x8007BC20: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BC30;
    }
    goto skip_24;
    // 0x8007BC20: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_24:
    // 0x8007BC24: jal         0x80085C90
    // 0x8007BC28: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    alSynSetFXMix(rdram, ctx);
        goto after_28;
    // 0x8007BC28: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_28:
    // 0x8007BC2C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007BC30:
    // 0x8007BC30: bnel        $s0, $zero, L_8007BC14
    if (ctx->r16 != 0) {
        // 0x8007BC34: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_8007BC14;
    }
    goto skip_25;
    // 0x8007BC34: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_25:
    // 0x8007BC38: b           L_8007BD28
    // 0x8007BC3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BC3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BC40:
    // 0x8007BC40: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x8007BC44: lbu         $t5, 0xBA($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007BC48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007BC4C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x8007BC50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007BC54: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8007BC58: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8007BC5C: beq         $at, $zero, L_8007BD24
    if (ctx->r1 == 0) {
        // 0x8007BC60: addu        $t3, $v0, $t6
        ctx->r11 = ADD32(ctx->r2, ctx->r14);
            goto L_8007BD24;
    }
    // 0x8007BC60: addu        $t3, $v0, $t6
    ctx->r11 = ADD32(ctx->r2, ctx->r14);
    // 0x8007BC64: jal         0x800851F8
    // 0x8007BC68: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    __setInstChanState(rdram, ctx);
        goto after_29;
    // 0x8007BC68: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    after_29:
    // 0x8007BC6C: b           L_8007BD28
    // 0x8007BC70: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8007BD28;
    // 0x8007BC70: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BC74:
    // 0x8007BC74: lw          $t0, 0x60($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X60);
    // 0x8007BC78: lbu         $t8, 0xB9($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XB9);
    // 0x8007BC7C: lbu         $t9, 0xBA($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBA);
    // 0x8007BC80: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x8007BC84: addu        $t4, $t0, $v0
    ctx->r12 = ADD32(ctx->r8, ctx->r2);
    // 0x8007BC88: lh          $t5, 0x4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X4);
    // 0x8007BC8C: sll         $t7, $t8, 7
    ctx->r15 = S32(ctx->r24 << 7);
    // 0x8007BC90: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8007BC94: addiu       $t2, $t1, -0x2000
    ctx->r10 = ADD32(ctx->r9, -0X2000);
    // 0x8007BC98: multu       $t5, $t2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BC9C: sb          $a3, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r7;
    // 0x8007BCA0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8007BCA4: mflo        $a0
    ctx->r4 = lo;
    // 0x8007BCA8: bgez        $a0, L_8007BCB8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007BCAC: sra         $t6, $a0, 13
        ctx->r14 = S32(SIGNED(ctx->r4) >> 13);
            goto L_8007BCB8;
    }
    // 0x8007BCAC: sra         $t6, $a0, 13
    ctx->r14 = S32(SIGNED(ctx->r4) >> 13);
    // 0x8007BCB0: addiu       $at, $a0, 0x1FFF
    ctx->r1 = ADD32(ctx->r4, 0X1FFF);
    // 0x8007BCB4: sra         $t6, $at, 13
    ctx->r14 = S32(SIGNED(ctx->r1) >> 13);
L_8007BCB8:
    // 0x8007BCB8: jal         0x8007D100
    // 0x8007BCBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8007D100(rdram, ctx);
        goto after_30;
    // 0x8007BCBC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_30:
    // 0x8007BCC0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8007BCC4: lw          $t3, 0x60($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X60);
    // 0x8007BCC8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8007BCCC: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x8007BCD0: swc1        $f0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f0.u32l;
    // 0x8007BCD4: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x8007BCD8: lbu         $s2, 0xBB($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0XBB);
    // 0x8007BCDC: beql        $s0, $zero, L_8007BD28
    if (ctx->r16 == 0) {
        // 0x8007BCE0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BD28;
    }
    goto skip_26;
    // 0x8007BCE0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_26:
    // 0x8007BCE4: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
L_8007BCE8:
    // 0x8007BCE8: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007BCEC: bnel        $s2, $t9, L_8007BD1C
    if (ctx->r18 != ctx->r25) {
        // 0x8007BCF0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8007BD1C;
    }
    goto skip_27;
    // 0x8007BCF0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_27:
    // 0x8007BCF4: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8007BCF8: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8007BCFC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8007BD00: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007BD04: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8007BD08: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8007BD0C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8007BD10: jal         0x800859E0
    // 0x8007BD14: nop

    alSynSetPitch(rdram, ctx);
        goto after_31;
    // 0x8007BD14: nop

    after_31:
    // 0x8007BD18: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8007BD1C:
    // 0x8007BD1C: bnel        $s0, $zero, L_8007BCE8
    if (ctx->r16 != 0) {
        // 0x8007BD20: lbu         $t9, 0x31($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X31);
            goto L_8007BCE8;
    }
    goto skip_28;
    // 0x8007BD20: lbu         $t9, 0x31($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X31);
    skip_28:
L_8007BD24:
    // 0x8007BD24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BD28:
    // 0x8007BD28: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007BD2C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8007BD30: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8007BD34: jr          $ra
    // 0x8007BD38: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8007BD38: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void __handleCSPMetaMsg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BD3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007BD40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007BD44: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007BD48: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007BD4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007BD50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007BD54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007BD58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007BD5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007BD60: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x8007BD64: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8007BD68: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8007BD6C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8007BD70: bne         $t6, $at, L_8007BEA4
    if (ctx->r14 != ctx->r1) {
        // 0x8007BD74: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_8007BEA4;
    }
    // 0x8007BD74: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8007BD78: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x8007BD7C: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x8007BD80: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x8007BD84: bnel        $t7, $at, L_8007BEA8
    if (ctx->r15 != ctx->r1) {
        // 0x8007BD88: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007BEA8;
    }
    goto skip_0;
    // 0x8007BD88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x8007BD8C: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x8007BD90: lbu         $t0, 0x8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8);
    // 0x8007BD94: lbu         $t3, 0x9($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X9);
    // 0x8007BD98: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8007BD9C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8007BDA0: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8007BDA4: or          $v1, $t2, $t3
    ctx->r3 = ctx->r10 | ctx->r11;
    // 0x8007BDA8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8007BDAC: lw          $s6, 0x24($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X24);
    // 0x8007BDB0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007BDB4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8007BDB8: jal         0x8007BF6C
    // 0x8007BDBC: nop

    __setCUsptFromTempo(rdram, ctx);
        goto after_0;
    // 0x8007BDBC: nop

    after_0:
    // 0x8007BDC0: lw          $s0, 0x50($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X50);
    // 0x8007BDC4: beq         $s0, $zero, L_8007BE3C
    if (ctx->r16 == 0) {
        // 0x8007BDC8: nop
    
            goto L_8007BE3C;
    }
    // 0x8007BDC8: nop

    // 0x8007BDCC: addiu       $s4, $zero, 0x15
    ctx->r20 = ADD32(0, 0X15);
L_8007BDD0:
    // 0x8007BDD0: lh          $t5, 0xC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC);
    // 0x8007BDD4: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x8007BDD8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8007BDDC: bne         $s4, $t5, L_8007BE34
    if (ctx->r20 != ctx->r13) {
        // 0x8007BDE0: addu        $s2, $s2, $t4
        ctx->r18 = ADD32(ctx->r18, ctx->r12);
            goto L_8007BE34;
    }
    // 0x8007BDE0: addu        $s2, $s2, $t4
    ctx->r18 = ADD32(ctx->r18, ctx->r12);
    // 0x8007BDE4: jal         0x8007DE20
    // 0x8007BDE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8007BDE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8007BDEC: beql        $s3, $zero, L_8007BE0C
    if (ctx->r19 == 0) {
        // 0x8007BDF0: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_8007BE0C;
    }
    goto skip_1;
    // 0x8007BDF0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
    // 0x8007BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007BDF8: jal         0x8007DDFC
    // 0x8007BDFC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8007BDFC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8007BE00: b           L_8007BE14
    // 0x8007BE04: nop

        goto L_8007BE14;
    // 0x8007BE04: nop

    // 0x8007BE08: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8007BE0C:
    // 0x8007BE0C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x8007BE10: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_8007BE14:
    // 0x8007BE14: beq         $s1, $zero, L_8007BE30
    if (ctx->r17 == 0) {
        // 0x8007BE18: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_8007BE30;
    }
    // 0x8007BE18: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x8007BE1C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007BE20: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    // 0x8007BE24: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x8007BE28: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8007BE2C: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
L_8007BE30:
    // 0x8007BE30: sw          $v1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r3;
L_8007BE34:
    // 0x8007BE34: bne         $s1, $zero, L_8007BDD0
    if (ctx->r17 != 0) {
        // 0x8007BE38: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8007BDD0;
    }
    // 0x8007BE38: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8007BE3C:
    // 0x8007BE3C: beq         $s3, $zero, L_8007BEA4
    if (ctx->r19 == 0) {
        // 0x8007BE40: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_8007BEA4;
    }
    // 0x8007BE40: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8007BE44: addiu       $s2, $s5, 0x48
    ctx->r18 = ADD32(ctx->r21, 0X48);
L_8007BE48:
    // 0x8007BE48: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8007BE4C: lw          $t0, 0x24($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X24);
    // 0x8007BE50: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8007BE54: div         $zero, $t8, $s6
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r22)));
    // 0x8007BE58: mflo        $v0
    ctx->r2 = lo;
    // 0x8007BE5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007BE60: bne         $s6, $zero, L_8007BE6C
    if (ctx->r22 != 0) {
        // 0x8007BE64: nop
    
            goto L_8007BE6C;
    }
    // 0x8007BE64: nop

    // 0x8007BE68: break       7
    do_break(2147991144);
L_8007BE6C:
    // 0x8007BE6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007BE70: bne         $s6, $at, L_8007BE84
    if (ctx->r22 != ctx->r1) {
        // 0x8007BE74: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007BE84;
    }
    // 0x8007BE74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007BE78: bne         $t8, $at, L_8007BE84
    if (ctx->r24 != ctx->r1) {
        // 0x8007BE7C: nop
    
            goto L_8007BE84;
    }
    // 0x8007BE7C: nop

    // 0x8007BE80: break       6
    do_break(2147991168);
L_8007BE84:
    // 0x8007BE84: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BE88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007BE8C: mflo        $t9
    ctx->r25 = lo;
    // 0x8007BE90: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
    // 0x8007BE94: jal         0x8007BECC
    // 0x8007BE98: nop

    alEvtqInsert(rdram, ctx);
        goto after_3;
    // 0x8007BE98: nop

    after_3:
    // 0x8007BE9C: bne         $s1, $zero, L_8007BE48
    if (ctx->r17 != 0) {
        // 0x8007BEA0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8007BE48;
    }
    // 0x8007BEA0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8007BEA4:
    // 0x8007BEA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007BEA8:
    // 0x8007BEA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007BEAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BEB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007BEB4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007BEB8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007BEBC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007BEC0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007BEC4: jr          $ra
    // 0x8007BEC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007BEC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alEvtqInsert(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BED4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007BED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007BEDC: jal         0x80075ED0
    // 0x8007BEE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8007BEE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8007BEE4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8007BEE8: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8007BEEC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8007BEF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007BEF4: beq         $v1, $at, L_8007BF54
    if (ctx->r3 == ctx->r1) {
        // 0x8007BEF8: addiu       $a1, $v1, 0x8
        ctx->r5 = ADD32(ctx->r3, 0X8);
            goto L_8007BF54;
    }
    // 0x8007BEF8: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x8007BEFC: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_8007BF00:
    // 0x8007BF00: bnel        $a0, $zero, L_8007BF1C
    if (ctx->r4 != 0) {
        // 0x8007BF04: lw          $v0, 0x8($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X8);
            goto L_8007BF1C;
    }
    goto skip_0;
    // 0x8007BF04: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    skip_0:
    // 0x8007BF08: jal         0x8007DDFC
    // 0x8007BF0C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x8007BF0C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x8007BF10: b           L_8007BF54
    // 0x8007BF14: nop

        goto L_8007BF54;
    // 0x8007BF14: nop

    // 0x8007BF18: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
L_8007BF1C:
    // 0x8007BF1C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8007BF20: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007BF24: beq         $at, $zero, L_8007BF44
    if (ctx->r1 == 0) {
        // 0x8007BF28: subu        $t7, $v0, $v1
        ctx->r15 = SUB32(ctx->r2, ctx->r3);
            goto L_8007BF44;
    }
    // 0x8007BF28: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x8007BF2C: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x8007BF30: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x8007BF34: jal         0x8007DDFC
    // 0x8007BF38: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8007BF38: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8007BF3C: b           L_8007BF54
    // 0x8007BF40: nop

        goto L_8007BF54;
    // 0x8007BF40: nop

L_8007BF44:
    // 0x8007BF44: sw          $t7, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r15;
    // 0x8007BF48: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8007BF4C: bnel        $a1, $zero, L_8007BF00
    if (ctx->r5 != 0) {
        // 0x8007BF50: lw          $a0, 0x0($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X0);
            goto L_8007BF00;
    }
    goto skip_1;
    // 0x8007BF50: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    skip_1:
L_8007BF54:
    // 0x8007BF54: jal         0x80075ED0
    // 0x8007BF58: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8007BF58: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8007BF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BF60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007BF64: jr          $ra
    // 0x8007BF68: nop

    return;
    // 0x8007BF68: nop

;}
RECOMP_FUNC void __setCUsptFromTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BF6C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8007BF70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007BF74: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x8007BF78: beql        $v0, $zero, L_8007BF9C
    if (ctx->r2 == 0) {
        // 0x8007BF7C: sw          $t8, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r24;
            goto L_8007BF9C;
    }
    goto skip_0;
    // 0x8007BF7C: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    skip_0:
    // 0x8007BF80: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007BF84: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8007BF88: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8007BF8C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8007BF90: jr          $ra
    // 0x8007BF94: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x8007BF94: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x8007BF98: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
L_8007BF9C:
    // 0x8007BF9C: jr          $ra
    // 0x8007BFA0: nop

    return;
    // 0x8007BFA0: nop

;}
RECOMP_FUNC void alSeqFileNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BFB0: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8007BFB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007BFB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007BFBC: blez        $t6, L_8007BFE8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8007BFC0: nop
    
            goto L_8007BFE8;
    }
    // 0x8007BFC0: nop

    // 0x8007BFC4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
L_8007BFC8:
    // 0x8007BFC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007BFCC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8007BFD0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8007BFD4: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x8007BFD8: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8007BFDC: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8007BFE0: bnel        $at, $zero, L_8007BFC8
    if (ctx->r1 != 0) {
        // 0x8007BFE4: lw          $t7, 0x4($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X4);
            goto L_8007BFC8;
    }
    goto skip_0;
    // 0x8007BFE4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_8007BFE8:
    // 0x8007BFE8: jr          $ra
    // 0x8007BFEC: nop

    return;
    // 0x8007BFEC: nop

;}
RECOMP_FUNC void alBnkfNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BFF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007BFF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007BFF8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8007BFFC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8007C000: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007C004: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007C008: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8007C00C: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x8007C010: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007C014: bne         $t6, $at, L_8007C064
    if (ctx->r14 != ctx->r1) {
        // 0x8007C018: or          $s3, $a1, $zero
        ctx->r19 = ctx->r5 | 0;
            goto L_8007C064;
    }
    // 0x8007C018: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8007C01C: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8007C020: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8007C024: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007C028: blezl       $t7, L_8007C068
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8007C02C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8007C068;
    }
    goto skip_0;
    // 0x8007C02C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x8007C030: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
L_8007C034:
    // 0x8007C034: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007C038: addu        $a0, $t8, $s1
    ctx->r4 = ADD32(ctx->r24, ctx->r17);
    // 0x8007C03C: beq         $a0, $zero, L_8007C04C
    if (ctx->r4 == 0) {
        // 0x8007C040: sw          $a0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r4;
            goto L_8007C04C;
    }
    // 0x8007C040: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    // 0x8007C044: jal         0x8007C080
    // 0x8007C048: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alBnkfBankFixup(rdram, ctx);
        goto after_0;
    // 0x8007C048: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
L_8007C04C:
    // 0x8007C04C: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x8007C050: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8007C054: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007C058: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8007C05C: bnel        $at, $zero, L_8007C034
    if (ctx->r1 != 0) {
        // 0x8007C060: lw          $t8, 0x4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X4);
            goto L_8007C034;
    }
    goto skip_1;
    // 0x8007C060: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    skip_1:
L_8007C064:
    // 0x8007C064: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8007C068:
    // 0x8007C068: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007C06C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007C070: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C074: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007C078: jr          $ra
    // 0x8007C07C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007C07C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alBnkfBankFixup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C080: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C084: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007C088: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007C08C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007C090: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C094: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C098: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C09C: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8007C0A0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8007C0A4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8007C0A8: bne         $t6, $zero, L_8007C118
    if (ctx->r14 != 0) {
        // 0x8007C0AC: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_8007C118;
    }
    // 0x8007C0AC: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8007C0B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8007C0B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007C0B8: sb          $t7, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r15;
    // 0x8007C0BC: beq         $v0, $zero, L_8007C0D0
    if (ctx->r2 == 0) {
        // 0x8007C0C0: addu        $t8, $v0, $a1
        ctx->r24 = ADD32(ctx->r2, ctx->r5);
            goto L_8007C0D0;
    }
    // 0x8007C0C0: addu        $t8, $v0, $a1
    ctx->r24 = ADD32(ctx->r2, ctx->r5);
    // 0x8007C0C4: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8007C0C8: jal         0x8007C138
    // 0x8007C0CC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    alBnkfInstrumentFixup(rdram, ctx);
        goto after_0;
    // 0x8007C0CC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
L_8007C0D0:
    // 0x8007C0D0: lh          $t9, 0x0($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X0);
    // 0x8007C0D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8007C0D8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8007C0DC: blezl       $t9, L_8007C11C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8007C0E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8007C11C;
    }
    goto skip_0;
    // 0x8007C0E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8007C0E4: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
L_8007C0E8:
    // 0x8007C0E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8007C0EC: addu        $a0, $t0, $s2
    ctx->r4 = ADD32(ctx->r8, ctx->r18);
    // 0x8007C0F0: beq         $a0, $zero, L_8007C100
    if (ctx->r4 == 0) {
        // 0x8007C0F4: sw          $a0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r4;
            goto L_8007C100;
    }
    // 0x8007C0F4: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x8007C0F8: jal         0x8007C138
    // 0x8007C0FC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    alBnkfInstrumentFixup(rdram, ctx);
        goto after_1;
    // 0x8007C0FC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
L_8007C100:
    // 0x8007C100: lh          $t2, 0x0($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X0);
    // 0x8007C104: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8007C108: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007C10C: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8007C110: bnel        $at, $zero, L_8007C0E8
    if (ctx->r1 != 0) {
        // 0x8007C114: lw          $t0, 0xC($s0)
        ctx->r8 = MEM_W(ctx->r16, 0XC);
            goto L_8007C0E8;
    }
    goto skip_1;
    // 0x8007C114: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    skip_1:
L_8007C118:
    // 0x8007C118: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8007C11C:
    // 0x8007C11C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C120: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C124: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C128: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007C12C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007C130: jr          $ra
    // 0x8007C134: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007C134: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alBnkfInstrumentFixup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C138: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C13C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007C140: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007C144: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007C148: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C14C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C154: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x8007C158: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8007C15C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8007C160: bne         $t6, $zero, L_8007C1B0
    if (ctx->r14 != 0) {
        // 0x8007C164: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_8007C1B0;
    }
    // 0x8007C164: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8007C168: lh          $t8, 0xE($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XE);
    // 0x8007C16C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007C170: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
    // 0x8007C174: blez        $t8, L_8007C1B0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8007C178: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8007C1B0;
    }
    // 0x8007C178: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8007C17C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007C180: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
L_8007C184:
    // 0x8007C184: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8007C188: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8007C18C: addu        $a0, $t9, $s2
    ctx->r4 = ADD32(ctx->r25, ctx->r18);
    // 0x8007C190: jal         0x8007C1D0
    // 0x8007C194: sw          $a0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r4;
    alBnkfSoundFixup(rdram, ctx);
        goto after_0;
    // 0x8007C194: sw          $a0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r4;
    after_0:
    // 0x8007C198: lh          $t1, 0xE($s3)
    ctx->r9 = MEM_H(ctx->r19, 0XE);
    // 0x8007C19C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8007C1A0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007C1A4: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8007C1A8: bnel        $at, $zero, L_8007C184
    if (ctx->r1 != 0) {
        // 0x8007C1AC: lw          $t9, 0x10($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X10);
            goto L_8007C184;
    }
    goto skip_0;
    // 0x8007C1AC: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    skip_0:
L_8007C1B0:
    // 0x8007C1B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C1B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C1B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C1BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C1C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007C1C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007C1C8: jr          $ra
    // 0x8007C1CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8007C1CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alBnkfSoundFixup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C1D8: lbu         $t6, 0xE($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XE);
    // 0x8007C1DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007C1E0: bnel        $t6, $zero, L_8007C21C
    if (ctx->r14 != 0) {
        // 0x8007C1E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007C21C;
    }
    goto skip_0;
    // 0x8007C1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007C1E8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8007C1EC: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x8007C1F0: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x8007C1F4: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8007C1F8: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8007C1FC: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x8007C200: sb          $t7, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r15;
    // 0x8007C204: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8007C208: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x8007C20C: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x8007C210: jal         0x8007C228
    // 0x8007C214: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    alBnkfWavetableFixup(rdram, ctx);
        goto after_0;
    // 0x8007C214: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x8007C218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007C21C:
    // 0x8007C21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C220: jr          $ra
    // 0x8007C224: nop

    return;
    // 0x8007C224: nop

;}
RECOMP_FUNC void alBnkfWavetableFixup(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C228: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    // 0x8007C22C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007C230: bne         $t6, $zero, L_8007C28C
    if (ctx->r14 != 0) {
        // 0x8007C234: nop
    
            goto L_8007C28C;
    }
    // 0x8007C234: nop

    // 0x8007C238: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8007C23C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007C240: sb          $t7, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r15;
    // 0x8007C244: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8007C248: bne         $v0, $zero, L_8007C270
    if (ctx->r2 != 0) {
        // 0x8007C24C: sw          $t9, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r25;
            goto L_8007C270;
    }
    // 0x8007C24C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8007C250: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x8007C254: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8007C258: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8007C25C: beq         $v0, $zero, L_8007C28C
    if (ctx->r2 == 0) {
        // 0x8007C260: sw          $t1, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r9;
            goto L_8007C28C;
    }
    // 0x8007C260: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x8007C264: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x8007C268: jr          $ra
    // 0x8007C26C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
    return;
    // 0x8007C26C: sw          $t2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r10;
L_8007C270:
    // 0x8007C270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007C274: bne         $v0, $at, L_8007C28C
    if (ctx->r2 != ctx->r1) {
        // 0x8007C278: nop
    
            goto L_8007C28C;
    }
    // 0x8007C278: nop

    // 0x8007C27C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8007C280: beq         $v0, $zero, L_8007C28C
    if (ctx->r2 == 0) {
        // 0x8007C284: addu        $t3, $v0, $a1
        ctx->r11 = ADD32(ctx->r2, ctx->r5);
            goto L_8007C28C;
    }
    // 0x8007C284: addu        $t3, $v0, $a1
    ctx->r11 = ADD32(ctx->r2, ctx->r5);
    // 0x8007C288: sw          $t3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r11;
L_8007C28C:
    // 0x8007C28C: jr          $ra
    // 0x8007C290: nop

    return;
    // 0x8007C290: nop

;}
RECOMP_FUNC void alSeqpSetBank(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C2A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007C2A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C2A8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007C2AC: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8007C2B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007C2B4: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007C2B8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007C2BC: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007C2C0: jal         0x80085580
    // 0x8007C2C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007C2C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C2CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007C2D0: jr          $ra
    // 0x8007C2D4: nop

    return;
    // 0x8007C2D4: nop

;}
RECOMP_FUNC void alCSeqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C2E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007C2E4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007C2E8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007C2EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007C2F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007C2F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C2F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C2FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C300: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007C304: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007C308: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8007C30C: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x8007C310: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x8007C314: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8007C318: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8007C31C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8007C320: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x8007C324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007C328: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8007C32C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8007C330: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8007C334: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
L_8007C338:
    // 0x8007C338: sb          $zero, 0xA8($s3)
    MEM_B(0XA8, ctx->r19) = 0;
    // 0x8007C33C: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8007C340: sb          $zero, 0x98($s3)
    MEM_B(0X98, ctx->r19) = 0;
    // 0x8007C344: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8007C348: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007C34C: sllv        $t1, $t0, $s1
    ctx->r9 = S32(ctx->r8 << (ctx->r17 & 31));
    // 0x8007C350: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x8007C354: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8007C358: beq         $v0, $zero, L_8007C384
    if (ctx->r2 == 0) {
        // 0x8007C35C: addu        $t3, $s6, $v0
        ctx->r11 = ADD32(ctx->r22, ctx->r2);
            goto L_8007C384;
    }
    // 0x8007C35C: addu        $t3, $s6, $v0
    ctx->r11 = ADD32(ctx->r22, ctx->r2);
    // 0x8007C360: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x8007C364: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007C368: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007C36C: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8007C370: sw          $t2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r10;
    // 0x8007C374: jal         0x8007CDA4
    // 0x8007C378: sw          $t3, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r11;
    __alCSeqGetVarLen(rdram, ctx);
        goto after_0;
    // 0x8007C378: sw          $t3, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r11;
    after_0:
    // 0x8007C37C: b           L_8007C388
    // 0x8007C380: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
        goto L_8007C388;
    // 0x8007C380: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
L_8007C384:
    // 0x8007C384: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
L_8007C388:
    // 0x8007C388: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8007C38C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8007C390: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8007C394: bne         $s1, $s5, L_8007C338
    if (ctx->r17 != ctx->r21) {
        // 0x8007C398: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8007C338;
    }
    // 0x8007C398: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007C39C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x8007C3A0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007C3A4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007C3A8: lw          $t5, 0x40($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X40);
    // 0x8007C3AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007C3B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8007C3B4: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8007C3B8: bgez        $t5, L_8007C3CC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8007C3BC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8007C3CC;
    }
    // 0x8007C3BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8007C3C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007C3C4: nop

    // 0x8007C3C8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8007C3CC:
    // 0x8007C3CC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8007C3D0: div.d       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f4.d, ctx->f16.d);
    // 0x8007C3D4: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x8007C3D8: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x8007C3DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007C3E0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007C3E4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C3E8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007C3EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007C3F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C3F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C3F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C3FC: jr          $ra
    // 0x8007C400: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007C400: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
