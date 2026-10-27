#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8000676C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000676C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006770: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80006774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80006778: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x8000677C: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
L_80006780:
    // 0x80006780: jal         0x80006358
    // 0x80006784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006358(rdram, ctx);
        goto after_0;
    // 0x80006784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80006788: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x8000678C: nop

    // 0x80006790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006794: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80006798: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000679C: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800067A0: bne         $at, $zero, L_80006780
    if (ctx->r1 != 0) {
        // 0x800067A4: sh          $t7, 0x24($sp)
        MEM_H(0X24, ctx->r29) = ctx->r15;
            goto L_80006780;
    }
    // 0x800067A4: sh          $t7, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r15;
    // 0x800067A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800067AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800067B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800067B4: jr          $ra
    // 0x800067B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800067B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800067BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800067BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800067C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800067C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800067C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800067CC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800067D0: sh          $t6, 0x574C($at)
    MEM_H(0X574C, ctx->r1) = ctx->r14;
    // 0x800067D4: addiu       $a1, $a1, 0x676C
    ctx->r5 = ADD32(ctx->r5, 0X676C);
    // 0x800067D8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800067DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800067E0: jal         0x80004F80
    // 0x800067E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x800067E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800067E8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800067EC: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x800067F0: addiu       $a2, $a2, 0x64C0
    ctx->r6 = ADD32(ctx->r6, 0X64C0);
    // 0x800067F4: addiu       $a0, $a0, 0x5730
    ctx->r4 = ADD32(ctx->r4, 0X5730);
    // 0x800067F8: jal         0x80005344
    // 0x800067FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80005344(rdram, ctx);
        goto after_1;
    // 0x800067FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80006800: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006804: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80006808: addiu       $a2, $a2, 0x6450
    ctx->r6 = ADD32(ctx->r6, 0X6450);
    // 0x8000680C: addiu       $a0, $a0, 0x5740
    ctx->r4 = ADD32(ctx->r4, 0X5740);
    // 0x80006810: jal         0x80005344
    // 0x80006814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80005344(rdram, ctx);
        goto after_2;
    // 0x80006814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80006818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000681C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006820: jr          $ra
    // 0x80006824: nop

    return;
    // 0x80006824: nop

;}
RECOMP_FUNC void func_80006830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006830: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80006834: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80006838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000683C: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x80006840: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006844: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006848: jal         0x800792B0
    // 0x8000684C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    osGbpakInit(rdram, ctx);
        goto after_0;
    // 0x8000684C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80006850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006854: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80006858: jr          $ra
    // 0x8000685C: nop

    return;
    // 0x8000685C: nop

;}
RECOMP_FUNC void func_80006860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006860: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80006864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006868: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000686C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80006870: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80006874: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80006878: addiu       $a1, $a1, 0x6830
    ctx->r5 = ADD32(ctx->r5, 0X6830);
    // 0x8000687C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80006880: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80006884: jal         0x80004F80
    // 0x80006888: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006888: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8000688C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006890: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80006894: jr          $ra
    // 0x80006898: nop

    return;
    // 0x80006898: nop

;}
RECOMP_FUNC void func_800068A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800068A0: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x800068A4: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x800068A8: addiu       $a2, $t7, -0x1
    ctx->r6 = ADD32(ctx->r15, -0X1);
    // 0x800068AC: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x800068B0: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x800068B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800068B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800068BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800068C0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800068C4: beq         $t7, $zero, L_80006910
    if (ctx->r15 == 0) {
        // 0x800068C8: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_80006910;
    }
    // 0x800068C8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800068CC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800068D0: addiu       $a1, $a1, 0x5750
    ctx->r5 = ADD32(ctx->r5, 0X5750);
L_800068D4:
    // 0x800068D4: addu        $t0, $a1, $v0
    ctx->r8 = ADD32(ctx->r5, ctx->r2);
    // 0x800068D8: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x800068DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800068E0: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x800068E4: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x800068E8: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x800068EC: slti        $at, $t3, 0x200
    ctx->r1 = SIGNED(ctx->r11) < 0X200 ? 1 : 0;
    // 0x800068F0: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x800068F4: beq         $at, $zero, L_80006910
    if (ctx->r1 == 0) {
        // 0x800068F8: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_80006910;
    }
    // 0x800068F8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x800068FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80006900: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80006904: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x80006908: bne         $a0, $zero, L_800068D4
    if (ctx->r4 != 0) {
        // 0x8000690C: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_800068D4;
    }
    // 0x8000690C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
L_80006910:
    // 0x80006910: jr          $ra
    // 0x80006914: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80006914: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80006918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006918: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000691C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006920: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80006924: addiu       $a1, $a1, 0x69E8
    ctx->r5 = ADD32(ctx->r5, 0X69E8);
    // 0x80006928: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8000692C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80006930: jal         0x80004F80
    // 0x80006934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000693C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006940: jr          $ra
    // 0x80006944: nop

    return;
    // 0x80006944: nop

;}
RECOMP_FUNC void func_80006948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006948: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000694C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80006950: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80006954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006958: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000695C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80006960: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x80006964: addiu       $t6, $t0, 0x8
    ctx->r14 = ADD32(ctx->r8, 0X8);
    // 0x80006968: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x8000696C: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x80006970: sh          $t2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r10;
    // 0x80006974: addiu       $a1, $a1, 0x6A28
    ctx->r5 = ADD32(ctx->r5, 0X6A28);
    // 0x80006978: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x8000697C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80006980: jal         0x80004F80
    // 0x80006984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000698C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80006990: jr          $ra
    // 0x80006994: nop

    return;
    // 0x80006994: nop

;}
RECOMP_FUNC void func_80006998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006998: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000699C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800069A0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x800069A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800069A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800069AC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800069B0: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x800069B4: addiu       $t6, $t0, 0x8
    ctx->r14 = ADD32(ctx->r8, 0X8);
    // 0x800069B8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800069BC: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x800069C0: sh          $t2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r10;
    // 0x800069C4: addiu       $a1, $a1, 0x6A94
    ctx->r5 = ADD32(ctx->r5, 0X6A94);
    // 0x800069C8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800069CC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800069D0: jal         0x80004F80
    // 0x800069D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x800069D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800069D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800069DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800069E0: jr          $ra
    // 0x800069E4: nop

    return;
    // 0x800069E4: nop

;}
RECOMP_FUNC void func_800069E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800069E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800069EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800069F0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800069F4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800069F8: addiu       $a2, $a2, -0x161F
    ctx->r6 = ADD32(ctx->r6, -0X161F);
    // 0x800069FC: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006A00: jal         0x800796F0
    // 0x80006A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osEepromWrite_recomp(rdram, ctx);
        goto after_0;
    // 0x80006A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80006A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006A0C: beq         $v0, $zero, L_80006A20
    if (ctx->r2 == 0) {
        // 0x80006A10: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80006A20;
    }
    // 0x80006A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006A14: b           L_80006A20
    // 0x80006A18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006A20;
    // 0x80006A18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80006A1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006A20:
    // 0x80006A20: jr          $ra
    // 0x80006A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80006A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80006A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006A28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006A2C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80006A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006A34: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006A38: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80006A3C: addiu       $a2, $a2, 0x5750
    ctx->r6 = ADD32(ctx->r6, 0X5750);
    // 0x80006A40: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006A44: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80006A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80006A4C: jal         0x80079550
    // 0x80006A50: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    osEepromLongRead_recomp(rdram, ctx);
        goto after_0;
    // 0x80006A50: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x80006A54: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80006A58: beq         $v0, $zero, L_80006A68
    if (ctx->r2 == 0) {
        // 0x80006A5C: lui         $t7, 0x800A
        ctx->r15 = S32(0X800A << 16);
            goto L_80006A68;
    }
    // 0x80006A5C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80006A60: b           L_80006A84
    // 0x80006A64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006A84;
    // 0x80006A64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006A68:
    // 0x80006A68: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x80006A6C: addiu       $t7, $t7, 0x5750
    ctx->r15 = ADD32(ctx->r15, 0X5750);
    // 0x80006A70: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x80006A74: lhu         $a2, 0x8($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X8);
    // 0x80006A78: jal         0x80077EC0
    // 0x80006A7C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    _bcopy(rdram, ctx);
        goto after_1;
    // 0x80006A7C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x80006A80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006A84:
    // 0x80006A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006A8C: jr          $ra
    // 0x80006A90: nop

    return;
    // 0x80006A90: nop

;}
RECOMP_FUNC void func_80006A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006A9C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80006AA0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80006AA4: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x80006AA8: beq         $at, $zero, L_80006AB8
    if (ctx->r1 == 0) {
        // 0x80006AAC: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_80006AB8;
    }
    // 0x80006AAC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006AB0: b           L_80006B6C
    // 0x80006AB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006B6C;
    // 0x80006AB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006AB8:
    // 0x80006AB8: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x80006ABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006AC0: blez        $t1, L_80006B24
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80006AC4: addiu       $a0, $a0, 0x47A0
        ctx->r4 = ADD32(ctx->r4, 0X47A0);
            goto L_80006B24;
    }
    // 0x80006AC4: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006AC8: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x80006ACC: beq         $at, $zero, L_80006B24
    if (ctx->r1 == 0) {
        // 0x80006AD0: lui         $t2, 0x800A
        ctx->r10 = S32(0X800A << 16);
            goto L_80006B24;
    }
    // 0x80006AD0: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80006AD4: addiu       $t2, $t2, 0x5750
    ctx->r10 = ADD32(ctx->r10, 0X5750);
L_80006AD8:
    // 0x80006AD8: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80006ADC: addu        $t9, $t2, $v1
    ctx->r25 = ADD32(ctx->r10, ctx->r3);
    // 0x80006AE0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80006AE4: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80006AE8: addu        $t3, $t9, $v0
    ctx->r11 = ADD32(ctx->r25, ctx->r2);
    // 0x80006AEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006AF0: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
    // 0x80006AF4: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x80006AF8: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80006AFC: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80006B00: slt         $at, $t5, $t1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80006B04: beq         $at, $zero, L_80006B24
    if (ctx->r1 == 0) {
        // 0x80006B08: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_80006B24;
    }
    // 0x80006B08: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80006B0C: lhu         $v1, 0x0($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X0);
    // 0x80006B10: nop

    // 0x80006B14: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80006B18: slti        $at, $t6, 0x200
    ctx->r1 = SIGNED(ctx->r14) < 0X200 ? 1 : 0;
    // 0x80006B1C: bne         $at, $zero, L_80006AD8
    if (ctx->r1 != 0) {
        // 0x80006B20: nop
    
            goto L_80006AD8;
    }
    // 0x80006B20: nop

L_80006B24:
    // 0x80006B24: lhu         $v1, 0x0($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X0);
    // 0x80006B28: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80006B2C: sra         $a1, $v1, 3
    ctx->r5 = S32(SIGNED(ctx->r3) >> 3);
    // 0x80006B30: andi        $t9, $v1, 0x7
    ctx->r25 = ctx->r3 & 0X7;
    // 0x80006B34: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80006B38: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x80006B3C: addiu       $t2, $t2, 0x5750
    ctx->r10 = ADD32(ctx->r10, 0X5750);
    // 0x80006B40: addiu       $t8, $v0, 0x7
    ctx->r24 = ADD32(ctx->r2, 0X7);
    // 0x80006B44: sll         $t4, $t7, 3
    ctx->r12 = S32(ctx->r15 << 3);
    // 0x80006B48: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80006B4C: andi        $a3, $t8, 0xF8
    ctx->r7 = ctx->r24 & 0XF8;
    // 0x80006B50: jal         0x800795E0
    // 0x80006B54: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    osEepromLongWrite_recomp(rdram, ctx);
        goto after_0;
    // 0x80006B54: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    after_0:
    // 0x80006B58: beq         $v0, $zero, L_80006B6C
    if (ctx->r2 == 0) {
        // 0x80006B5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80006B6C;
    }
    // 0x80006B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006B60: b           L_80006B6C
    // 0x80006B64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006B6C;
    // 0x80006B64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80006B68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006B6C:
    // 0x80006B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006B74: jr          $ra
    // 0x80006B78: nop

    return;
    // 0x80006B78: nop

;}
RECOMP_FUNC void func_80006B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006B7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80006B80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80006B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006B88: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006B8C: sb          $zero, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = 0;
    // 0x80006B90: jal         0x800794E0
    // 0x80006B94: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    osEepromProbe_recomp(rdram, ctx);
        goto after_0;
    // 0x80006B94: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    after_0:
    // 0x80006B98: bne         $v0, $zero, L_80006BA8
    if (ctx->r2 != 0) {
        // 0x80006B9C: lui         $t0, 0x800A
        ctx->r8 = S32(0X800A << 16);
            goto L_80006BA8;
    }
    // 0x80006B9C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80006BA0: b           L_80006CDC
    // 0x80006BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80006CDC;
    // 0x80006BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80006BA8:
    // 0x80006BA8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006BAC: addiu       $a2, $t0, 0x5750
    ctx->r6 = ADD32(ctx->r8, 0X5750);
    // 0x80006BB0: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80006BB8: jal         0x80079550
    // 0x80006BBC: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    osEepromLongRead_recomp(rdram, ctx);
        goto after_1;
    // 0x80006BBC: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_1:
    // 0x80006BC0: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80006BC4: beq         $v0, $zero, L_80006BD4
    if (ctx->r2 == 0) {
        // 0x80006BC8: addiu       $t0, $t0, 0x5750
        ctx->r8 = ADD32(ctx->r8, 0X5750);
            goto L_80006BD4;
    }
    // 0x80006BC8: addiu       $t0, $t0, 0x5750
    ctx->r8 = ADD32(ctx->r8, 0X5750);
    // 0x80006BCC: b           L_80006CDC
    // 0x80006BD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006CDC;
    // 0x80006BD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006BD4:
    // 0x80006BD4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80006BD8: addiu       $a0, $a0, -0x1620
    ctx->r4 = ADD32(ctx->r4, -0X1620);
    // 0x80006BDC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80006BE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006BE4: beq         $t6, $zero, L_80006CC8
    if (ctx->r14 == 0) {
        // 0x80006BE8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80006CC8;
    }
    // 0x80006BE8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80006BEC: addiu       $t7, $t7, -0x1620
    ctx->r15 = ADD32(ctx->r15, -0X1620);
    // 0x80006BF0: lbu         $v1, 0x0($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X0);
    // 0x80006BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80006BF8: addu        $t8, $t0, $v0
    ctx->r24 = ADD32(ctx->r8, ctx->r2);
L_80006BFC:
    // 0x80006BFC: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80006C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006C04: beq         $t9, $v1, L_80006CB0
    if (ctx->r25 == ctx->r3) {
        // 0x80006C08: sll         $t1, $v0, 16
        ctx->r9 = S32(ctx->r2 << 16);
            goto L_80006CB0;
    }
    // 0x80006C08: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80006C0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80006C10: sb          $t1, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r9;
    // 0x80006C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006C18:
    // 0x80006C18: addu        $t2, $a0, $v0
    ctx->r10 = ADD32(ctx->r4, ctx->r2);
    // 0x80006C1C: addu        $t4, $t0, $v0
    ctx->r12 = ADD32(ctx->r8, ctx->r2);
    // 0x80006C20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006C24: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x80006C28: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80006C2C: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80006C30: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80006C34: bne         $at, $zero, L_80006C18
    if (ctx->r1 != 0) {
        // 0x80006C38: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_80006C18;
    }
    // 0x80006C38: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x80006C3C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80006C40:
    // 0x80006C40: addu        $t7, $t0, $v0
    ctx->r15 = ADD32(ctx->r8, ctx->r2);
    // 0x80006C44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80006C48: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80006C4C: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80006C50: slti        $at, $v0, 0x200
    ctx->r1 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80006C54: bne         $at, $zero, L_80006C40
    if (ctx->r1 != 0) {
        // 0x80006C58: sb          $zero, 0x0($t7)
        MEM_B(0X0, ctx->r15) = 0;
            goto L_80006C40;
    }
    // 0x80006C58: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80006C5C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006C60: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80006C64: addiu       $a2, $a2, 0x5758
    ctx->r6 = ADD32(ctx->r6, 0X5758);
    // 0x80006C68: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006C6C: jal         0x800795E0
    // 0x80006C70: addiu       $a3, $zero, 0x1F8
    ctx->r7 = ADD32(0, 0X1F8);
    osEepromLongWrite_recomp(rdram, ctx);
        goto after_2;
    // 0x80006C70: addiu       $a3, $zero, 0x1F8
    ctx->r7 = ADD32(0, 0X1F8);
    after_2:
    // 0x80006C74: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80006C78: beq         $v0, $zero, L_80006C88
    if (ctx->r2 == 0) {
        // 0x80006C7C: addiu       $t0, $t0, 0x5750
        ctx->r8 = ADD32(ctx->r8, 0X5750);
            goto L_80006C88;
    }
    // 0x80006C7C: addiu       $t0, $t0, 0x5750
    ctx->r8 = ADD32(ctx->r8, 0X5750);
    // 0x80006C80: b           L_80006CDC
    // 0x80006C84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006CDC;
    // 0x80006C84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006C88:
    // 0x80006C88: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006C8C: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80006C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80006C94: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80006C98: jal         0x800795E0
    // 0x80006C9C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    osEepromLongWrite_recomp(rdram, ctx);
        goto after_3;
    // 0x80006C9C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_3:
    // 0x80006CA0: beq         $v0, $zero, L_80006CCC
    if (ctx->r2 == 0) {
        // 0x80006CA4: lw          $t5, 0x20($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X20);
            goto L_80006CCC;
    }
    // 0x80006CA4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80006CA8: b           L_80006CDC
    // 0x80006CAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006CDC;
    // 0x80006CAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006CB0:
    // 0x80006CB0: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80006CB4: addu        $t3, $a0, $v0
    ctx->r11 = ADD32(ctx->r4, ctx->r2);
    // 0x80006CB8: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x80006CBC: nop

    // 0x80006CC0: bne         $v1, $zero, L_80006BFC
    if (ctx->r3 != 0) {
        // 0x80006CC4: addu        $t8, $t0, $v0
        ctx->r24 = ADD32(ctx->r8, ctx->r2);
            goto L_80006BFC;
    }
    // 0x80006CC4: addu        $t8, $t0, $v0
    ctx->r24 = ADD32(ctx->r8, ctx->r2);
L_80006CC8:
    // 0x80006CC8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
L_80006CCC:
    // 0x80006CCC: lbu         $t4, 0x1D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1D);
    // 0x80006CD0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80006CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006CD8: sb          $t4, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r12;
L_80006CDC:
    // 0x80006CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80006CE4: jr          $ra
    // 0x80006CE8: nop

    return;
    // 0x80006CE8: nop

;}
RECOMP_FUNC void func_80006CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006CEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80006CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006CF4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80006CF8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80006CFC: addiu       $a1, $a1, 0x6B7C
    ctx->r5 = ADD32(ctx->r5, 0X6B7C);
    // 0x80006D00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80006D04: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80006D08: jal         0x80004F80
    // 0x80006D0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80006D0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80006D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006D14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80006D18: jr          $ra
    // 0x80006D1C: nop

    return;
    // 0x80006D1C: nop

;}
RECOMP_FUNC void func_80006D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006D20: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80006D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006D28: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006D30: lw          $a0, 0x5950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5950);
    // 0x80006D34: jal         0x80006E70
    // 0x80006D38: nop

    func_80006E70(rdram, ctx);
        goto after_0;
    // 0x80006D38: nop

    after_0:
    // 0x80006D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006D44: jr          $ra
    // 0x80006D48: nop

    return;
    // 0x80006D48: nop

;}
RECOMP_FUNC void func_80006D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006D50: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006D58: lw          $a0, 0x5950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5950);
    // 0x80006D5C: jal         0x80006ED4
    // 0x80006D60: nop

    func_80006ED4(rdram, ctx);
        goto after_0;
    // 0x80006D60: nop

    after_0:
    // 0x80006D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006D6C: jr          $ra
    // 0x80006D70: nop

    return;
    // 0x80006D70: nop

;}
RECOMP_FUNC void func_80006D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006D7C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80006D80: beq         $a0, $zero, L_80006DA0
    if (ctx->r4 == 0) {
        // 0x80006D84: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80006DA0;
    }
    // 0x80006D84: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80006D88: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006D8C: lw          $a0, 0x5950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5950);
    // 0x80006D90: jal         0x800070F4
    // 0x80006D94: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800070F4(rdram, ctx);
        goto after_0;
    // 0x80006D94: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x80006D98: b           L_80006DB4
    // 0x80006D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80006DB4;
    // 0x80006D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80006DA0:
    // 0x80006DA0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006DA4: lw          $a0, 0x5950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5950);
    // 0x80006DA8: jal         0x8000701C
    // 0x80006DAC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8000701C(rdram, ctx);
        goto after_1;
    // 0x80006DAC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80006DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80006DB4:
    // 0x80006DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006DB8: jr          $ra
    // 0x80006DBC: nop

    return;
    // 0x80006DBC: nop

;}
RECOMP_FUNC void func_80006DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006DC4: beq         $a0, $zero, L_80006DEC
    if (ctx->r4 == 0) {
        // 0x80006DC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80006DEC;
    }
    // 0x80006DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006DCC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80006DD0: addiu       $v0, $v0, -0x1610
    ctx->r2 = ADD32(ctx->r2, -0X1610);
    // 0x80006DD4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80006DD8: lw          $t7, -0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, -0X10);
    // 0x80006DDC: nop

    // 0x80006DE0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80006DE4: jal         0x80006F14
    // 0x80006DE8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80006F14(rdram, ctx);
        goto after_0;
    // 0x80006DE8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_0:
L_80006DEC:
    // 0x80006DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006DF4: jr          $ra
    // 0x80006DF8: nop

    return;
    // 0x80006DF8: nop

;}
RECOMP_FUNC void func_80006DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006DFC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80006E00: addiu       $v0, $v0, -0x1610
    ctx->r2 = ADD32(ctx->r2, -0X1610);
    // 0x80006E04: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80006E08: addiu       $t7, $a0, 0x17
    ctx->r15 = ADD32(ctx->r4, 0X17);
    // 0x80006E0C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80006E10: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80006E14: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80006E18: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80006E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006E20: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80006E24: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80006E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006E2C: lw          $a0, 0x5950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5950);
    // 0x80006E30: jal         0x8000701C
    // 0x80006E34: nop

    func_8000701C(rdram, ctx);
        goto after_0;
    // 0x80006E34: nop

    after_0:
    // 0x80006E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006E40: jr          $ra
    // 0x80006E44: nop

    return;
    // 0x80006E44: nop

;}
RECOMP_FUNC void func_80006E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80006E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006E50: jal         0x80007214
    // 0x80006E54: nop

    func_80007214(rdram, ctx);
        goto after_0;
    // 0x80006E54: nop

    after_0:
    // 0x80006E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80006E60: sw          $v0, 0x5950($at)
    MEM_W(0X5950, ctx->r1) = ctx->r2;
    // 0x80006E64: jr          $ra
    // 0x80006E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80006E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80006E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006E70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80006E74: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
L_80006E78:
    // 0x80006E78: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x80006E7C: addiu       $t8, $a1, 0x17
    ctx->r24 = ADD32(ctx->r5, 0X17);
    // 0x80006E80: bne         $t6, $zero, L_80006EA4
    if (ctx->r14 != 0) {
        // 0x80006E84: nop
    
            goto L_80006EA4;
    }
    // 0x80006E84: nop

    // 0x80006E88: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80006E8C: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x80006E90: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80006E94: bne         $at, $zero, L_80006EA4
    if (ctx->r1 != 0) {
        // 0x80006E98: nop
    
            goto L_80006EA4;
    }
    // 0x80006E98: nop

    // 0x80006E9C: jr          $ra
    // 0x80006EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80006EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80006EA4:
    // 0x80006EA4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80006EA8: nop

    // 0x80006EAC: bne         $a0, $v0, L_80006E78
    if (ctx->r4 != ctx->r2) {
        // 0x80006EB0: nop
    
            goto L_80006E78;
    }
    // 0x80006EB0: nop

    // 0x80006EB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006EB8: jr          $ra
    // 0x80006EBC: nop

    return;
    // 0x80006EBC: nop

;}
RECOMP_FUNC void func_80006EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006EC0: addiu       $v0, $a0, 0x17
    ctx->r2 = ADD32(ctx->r4, 0X17);
    // 0x80006EC4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80006EC8: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x80006ECC: jr          $ra
    // 0x80006ED0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80006ED0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80006ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006ED4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80006ED8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80006EDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80006EE0:
    // 0x80006EE0: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x80006EE4: nop

    // 0x80006EE8: bne         $a1, $t6, L_80006EFC
    if (ctx->r5 != ctx->r14) {
        // 0x80006EEC: nop
    
            goto L_80006EFC;
    }
    // 0x80006EEC: nop

    // 0x80006EF0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80006EF4: nop

    // 0x80006EF8: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
L_80006EFC:
    // 0x80006EFC: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80006F00: nop

    // 0x80006F04: bne         $a0, $v0, L_80006EE0
    if (ctx->r4 != ctx->r2) {
        // 0x80006F08: nop
    
            goto L_80006EE0;
    }
    // 0x80006F08: nop

    // 0x80006F0C: jr          $ra
    // 0x80006F10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80006F10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80006F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80006F18: beq         $a0, $zero, L_8000700C
    if (ctx->r4 == 0) {
        // 0x80006F1C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000700C;
    }
    // 0x80006F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006F20: lbu         $t6, -0xC($a0)
    ctx->r14 = MEM_BU(ctx->r4, -0XC);
    // 0x80006F24: addiu       $v1, $a0, -0x10
    ctx->r3 = ADD32(ctx->r4, -0X10);
    // 0x80006F28: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x80006F2C: beq         $t6, $at, L_80006F54
    if (ctx->r14 == ctx->r1) {
        // 0x80006F30: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80006F54;
    }
    // 0x80006F30: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80006F34: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80006F38: addiu       $a0, $a0, 0x4BC0
    ctx->r4 = ADD32(ctx->r4, 0X4BC0);
    // 0x80006F3C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80006F40: jal         0x80000FBC
    // 0x80006F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80006F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80006F48: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80006F4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80006F50: nop

L_80006F54:
    // 0x80006F54: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80006F58: nop

    // 0x80006F5C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80006F60: beq         $at, $zero, L_80006FB4
    if (ctx->r1 == 0) {
        // 0x80006F64: nop
    
            goto L_80006FB4;
    }
    // 0x80006F64: nop

    // 0x80006F68: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x80006F6C: nop

    // 0x80006F70: bne         $t7, $zero, L_80006FB4
    if (ctx->r15 != 0) {
        // 0x80006F74: nop
    
            goto L_80006FB4;
    }
    // 0x80006F74: nop

    // 0x80006F78: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x80006F7C: nop

    // 0x80006F80: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
    // 0x80006F84: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x80006F88: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x80006F8C: nop

    // 0x80006F90: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x80006F94: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80006F98: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80006F9C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80006FA0: nop

    // 0x80006FA4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80006FA8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80006FAC: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x80006FB0: nop

L_80006FB4:
    // 0x80006FB4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x80006FB8: nop

    // 0x80006FBC: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80006FC0: beq         $at, $zero, L_80007008
    if (ctx->r1 == 0) {
        // 0x80006FC4: nop
    
            goto L_80007008;
    }
    // 0x80006FC4: nop

    // 0x80006FC8: lbu         $t4, 0x5($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5);
    // 0x80006FCC: nop

    // 0x80006FD0: bne         $t4, $zero, L_80007008
    if (ctx->r12 != 0) {
        // 0x80006FD4: nop
    
            goto L_80007008;
    }
    // 0x80006FD4: nop

    // 0x80006FD8: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x80006FDC: nop

    // 0x80006FE0: sw          $a1, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r5;
    // 0x80006FE4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x80006FE8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80006FEC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80006FF0: nop

    // 0x80006FF4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80006FF8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80006FFC: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80007000: nop

    // 0x80007004: sw          $t9, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r25;
L_80007008:
    // 0x80007008: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_8000700C:
    // 0x8000700C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80007014: jr          $ra
    // 0x80007018: nop

    return;
    // 0x80007018: nop

;}
RECOMP_FUNC void func_8000701C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000701C: addiu       $a2, $a1, 0x17
    ctx->r6 = ADD32(ctx->r5, 0X17);
    // 0x80007020: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80007024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007028: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x8000702C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007030: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80007034: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_80007038:
    // 0x80007038: lbu         $t7, 0x5($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X5);
    // 0x8000703C: nop

    // 0x80007040: bne         $t7, $zero, L_800070B0
    if (ctx->r15 != 0) {
        // 0x80007044: nop
    
            goto L_800070B0;
    }
    // 0x80007044: nop

    // 0x80007048: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000704C: nop

    // 0x80007050: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80007054: bne         $at, $zero, L_800070B0
    if (ctx->r1 != 0) {
        // 0x80007058: nop
    
            goto L_800070B0;
    }
    // 0x80007058: nop

    // 0x8000705C: subu        $a0, $v0, $a2
    ctx->r4 = SUB32(ctx->r2, ctx->r6);
    // 0x80007060: sltiu       $at, $a0, 0x21
    ctx->r1 = ctx->r4 < 0X21 ? 1 : 0;
    // 0x80007064: bne         $at, $zero, L_800070A4
    if (ctx->r1 != 0) {
        // 0x80007068: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_800070A4;
    }
    // 0x80007068: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000706C: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x80007070: addiu       $t8, $zero, 0xA5
    ctx->r24 = ADD32(0, 0XA5);
    // 0x80007074: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80007078: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x8000707C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80007080: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x80007084: nop

    // 0x80007088: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x8000708C: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x80007090: nop

    // 0x80007094: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x80007098: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8000709C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x800070A0: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
L_800070A4:
    // 0x800070A4: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x800070A8: b           L_800070E4
    // 0x800070AC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
        goto L_800070E4;
    // 0x800070AC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_800070B0:
    // 0x800070B0: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x800070B4: nop

    // 0x800070B8: bne         $a0, $v1, L_80007038
    if (ctx->r4 != ctx->r3) {
        // 0x800070BC: nop
    
            goto L_80007038;
    }
    // 0x800070BC: nop

    // 0x800070C0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800070C4: lw          $t2, -0x1610($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1610);
    // 0x800070C8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800070CC: lui         $at, 0x13
    ctx->r1 = S32(0X13 << 16);
    // 0x800070D0: subu        $a1, $a2, $t2
    ctx->r5 = SUB32(ctx->r6, ctx->r10);
    // 0x800070D4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x800070D8: jal         0x80000FBC
    // 0x800070DC: addiu       $a0, $a0, 0x4BA0
    ctx->r4 = ADD32(ctx->r4, 0X4BA0);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x800070DC: addiu       $a0, $a0, 0x4BA0
    ctx->r4 = ADD32(ctx->r4, 0X4BA0);
    after_0:
    // 0x800070E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800070E4:
    // 0x800070E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800070E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800070EC: jr          $ra
    // 0x800070F0: nop

    return;
    // 0x800070F0: nop

;}
RECOMP_FUNC void func_800070F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800070F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800070F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800070FC: lw          $t7, -0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, -0X10);
    // 0x80007100: addiu       $a3, $a2, 0x17
    ctx->r7 = ADD32(ctx->r6, 0X17);
    // 0x80007104: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80007108: and         $t6, $a3, $at
    ctx->r14 = ctx->r7 & ctx->r1;
    // 0x8000710C: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80007110: bne         $at, $zero, L_800071C0
    if (ctx->r1 != 0) {
        // 0x80007114: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_800071C0;
    }
    // 0x80007114: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80007118: addiu       $v1, $a1, -0x10
    ctx->r3 = ADD32(ctx->r5, -0X10);
    // 0x8000711C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80007120: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x80007124: subu        $a1, $t8, $t6
    ctx->r5 = SUB32(ctx->r24, ctx->r14);
    // 0x80007128: sltiu       $at, $a1, 0x21
    ctx->r1 = ctx->r5 < 0X21 ? 1 : 0;
    // 0x8000712C: bne         $at, $zero, L_800071B8
    if (ctx->r1 != 0) {
        // 0x80007130: addiu       $t9, $zero, 0xA5
        ctx->r25 = ADD32(0, 0XA5);
            goto L_800071B8;
    }
    // 0x80007130: addiu       $t9, $zero, 0xA5
    ctx->r25 = ADD32(0, 0XA5);
    // 0x80007134: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80007138: sb          $t9, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r25;
    // 0x8000713C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x80007140: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x80007144: nop

    // 0x80007148: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
    // 0x8000714C: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x80007150: nop

    // 0x80007154: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80007158: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8000715C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80007160: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80007164: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80007168: nop

    // 0x8000716C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80007170: beq         $at, $zero, L_800071B8
    if (ctx->r1 == 0) {
        // 0x80007174: nop
    
            goto L_800071B8;
    }
    // 0x80007174: nop

    // 0x80007178: lbu         $t3, 0x5($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X5);
    // 0x8000717C: nop

    // 0x80007180: bne         $t3, $zero, L_800071B8
    if (ctx->r11 != 0) {
        // 0x80007184: nop
    
            goto L_800071B8;
    }
    // 0x80007184: nop

    // 0x80007188: lw          $t4, 0xC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC);
    // 0x8000718C: nop

    // 0x80007190: sw          $v0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r2;
    // 0x80007194: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80007198: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8000719C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800071A0: nop

    // 0x800071A4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800071A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800071AC: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x800071B0: nop

    // 0x800071B4: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
L_800071B8:
    // 0x800071B8: b           L_80007204
    // 0x800071BC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
        goto L_80007204;
    // 0x800071BC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_800071C0:
    // 0x800071C0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800071C4: jal         0x8000701C
    // 0x800071C8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_8000701C(rdram, ctx);
        goto after_0;
    // 0x800071C8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_0:
    // 0x800071CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800071D0: beq         $v0, $zero, L_800071FC
    if (ctx->r2 == 0) {
        // 0x800071D4: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_800071FC;
    }
    // 0x800071D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800071D8: lw          $a2, -0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, -0X10);
    // 0x800071DC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800071E0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800071E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800071E8: jal         0x80077EC0
    // 0x800071EC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    _bcopy(rdram, ctx);
        goto after_1;
    // 0x800071EC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    after_1:
    // 0x800071F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800071F4: jal         0x80006F14
    // 0x800071F8: nop

    func_80006F14(rdram, ctx);
        goto after_2;
    // 0x800071F8: nop

    after_2:
L_800071FC:
    // 0x800071FC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80007200: nop

L_80007204:
    // 0x80007204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007208: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000720C: jr          $ra
    // 0x80007210: nop

    return;
    // 0x80007210: nop

;}
RECOMP_FUNC void func_80007214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007214: addiu       $t6, $zero, 0xA5
    ctx->r14 = ADD32(0, 0XA5);
    // 0x80007218: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x8000721C: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x80007220: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80007224: sw          $a0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r4;
    // 0x80007228: sw          $a0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r4;
    // 0x8000722C: jr          $ra
    // 0x80007230: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80007230: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80007240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007248: jal         0x80073FC0
    // 0x8000724C: nop

    func_80073FC0(rdram, ctx);
        goto after_0;
    // 0x8000724C: nop

    after_0:
    // 0x80007250: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80007254: lw          $t6, 0x59C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X59C0);
    // 0x80007258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000725C: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80007260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007264: jr          $ra
    // 0x80007268: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    return;
    // 0x80007268: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
;}
RECOMP_FUNC void func_8000726C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000726C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007274: jal         0x80073FC0
    // 0x80007278: nop

    func_80073FC0(rdram, ctx);
        goto after_0;
    // 0x80007278: nop

    after_0:
    // 0x8000727C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80007280: lw          $t6, 0x59C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X59C0);
    // 0x80007284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007288: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x8000728C: nop

    // 0x80007290: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x80007294: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x80007298: beq         $at, $zero, L_800072A8
    if (ctx->r1 == 0) {
        // 0x8000729C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800072A8;
    }
    // 0x8000729C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800072A0: b           L_800072A8
    // 0x800072A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800072A8;
    // 0x800072A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800072A8:
    // 0x800072A8: jr          $ra
    // 0x800072AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800072AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800072B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800072B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800072B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800072B8: jal         0x80073FC0
    // 0x800072BC: nop

    func_80073FC0(rdram, ctx);
        goto after_0;
    // 0x800072BC: nop

    after_0:
    // 0x800072C0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800072C4: lw          $a1, 0x59C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X59C0);
    // 0x800072C8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800072CC: lw          $a3, 0x30($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X30);
    // 0x800072D0: addiu       $a0, $a0, 0x4D08
    ctx->r4 = ADD32(ctx->r4, 0X4D08);
    // 0x800072D4: subu        $t6, $v0, $a3
    ctx->r14 = SUB32(ctx->r2, ctx->r7);
    // 0x800072D8: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x800072DC: beq         $at, $zero, L_80007300
    if (ctx->r1 == 0) {
        // 0x800072E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80007300;
    }
    // 0x800072E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800072E4: lw          $t7, 0x34($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X34);
    // 0x800072E8: lw          $a2, 0x20($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X20);
    // 0x800072EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800072F0: lw          $t8, 0x18($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X18);
    // 0x800072F4: jal         0x80000FBC
    // 0x800072F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_80000FBC(rdram, ctx);
        goto after_1;
    // 0x800072F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_1:
    // 0x800072FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80007300:
    // 0x80007300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80007304: jr          $ra
    // 0x80007308: nop

    return;
    // 0x80007308: nop

;}
RECOMP_FUNC void func_8000730C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000730C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80007310: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007314: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000731C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80007320: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80007324: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007328: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8000732C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80007330: lw          $s1, 0x59C0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X59C0);
    // 0x80007334: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80007338: addiu       $s0, $s0, 0x59C8
    ctx->r16 = ADD32(ctx->r16, 0X59C8);
    // 0x8000733C: addiu       $s3, $s3, 0x4CE4
    ctx->r19 = ADD32(ctx->r19, 0X4CE4);
    // 0x80007340: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80007344: addiu       $s4, $zero, 0x94
    ctx->r20 = ADD32(0, 0X94);
L_80007348:
    // 0x80007348: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x8000734C: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x80007350: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80007354: beq         $t6, $t7, L_80007364
    if (ctx->r14 == ctx->r15) {
        // 0x80007358: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80007364;
    }
    // 0x80007358: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000735C: jal         0x80000FBC
    // 0x80007360: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80007360: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
L_80007364:
    // 0x80007364: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80007368: bne         $s2, $s4, L_80007348
    if (ctx->r18 != ctx->r20) {
        // 0x8000736C: nop
    
            goto L_80007348;
    }
    // 0x8000736C: nop

    // 0x80007370: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80007374: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007378: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000737C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007380: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80007384: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80007388: jr          $ra
    // 0x8000738C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000738C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80007390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007394: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80007398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000739C: lw          $a1, 0x59C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X59C0);
    // 0x800073A0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800073A4: addiu       $a0, $a0, 0x59C8
    ctx->r4 = ADD32(ctx->r4, 0X59C8);
    // 0x800073A8: jal         0x80076BF8
    // 0x800073AC: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800073AC: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    after_0:
    // 0x800073B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800073B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800073B8: jr          $ra
    // 0x800073BC: nop

    return;
    // 0x800073BC: nop

;}
RECOMP_FUNC void func_800073C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800073C0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x800073C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800073C8: bne         $v1, $v0, L_800073D8
    if (ctx->r3 != ctx->r2) {
        // 0x800073CC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800073D8;
    }
    // 0x800073CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800073D0: jr          $ra
    // 0x800073D4: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    return;
    // 0x800073D4: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
L_800073D8:
    // 0x800073D8: bne         $v0, $at, L_800073FC
    if (ctx->r2 != ctx->r1) {
        // 0x800073DC: nop
    
            goto L_800073FC;
    }
    // 0x800073DC: nop

    // 0x800073E0: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x800073E4: nop

    // 0x800073E8: beq         $t6, $zero, L_800073F8
    if (ctx->r14 == 0) {
        // 0x800073EC: nop
    
            goto L_800073F8;
    }
    // 0x800073EC: nop

    // 0x800073F0: jr          $ra
    // 0x800073F4: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
    return;
    // 0x800073F4: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
L_800073F8:
    // 0x800073F8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
L_800073FC:
    // 0x800073FC: jr          $ra
    // 0x80007400: nop

    return;
    // 0x80007400: nop

;}
RECOMP_FUNC void func_80007404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007404: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007408: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000740C: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80007410: lw          $s0, 0x59BC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X59BC);
    // 0x80007414: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007418: andi        $s2, $a1, 0xFFFF
    ctx->r18 = ctx->r5 & 0XFFFF;
    // 0x8000741C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80007420: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007424: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80007428: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000742C: beq         $s0, $zero, L_8000746C
    if (ctx->r16 == 0) {
        // 0x80007430: andi        $t6, $a0, 0xFFFF
        ctx->r14 = ctx->r4 & 0XFFFF;
            goto L_8000746C;
    }
    // 0x80007430: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80007434: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_80007438:
    // 0x80007438: lhu         $v0, 0x28($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X28);
    // 0x8000743C: nop

    // 0x80007440: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80007444: bne         $at, $zero, L_8000745C
    if (ctx->r1 != 0) {
        // 0x80007448: slt         $at, $s2, $v0
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8000745C;
    }
    // 0x80007448: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000744C: bne         $at, $zero, L_8000745C
    if (ctx->r1 != 0) {
        // 0x80007450: nop
    
            goto L_8000745C;
    }
    // 0x80007450: nop

    // 0x80007454: jal         0x800073C0
    // 0x80007458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800073C0(rdram, ctx);
        goto after_0;
    // 0x80007458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_8000745C:
    // 0x8000745C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80007460: nop

    // 0x80007464: bne         $s0, $zero, L_80007438
    if (ctx->r16 != 0) {
        // 0x80007468: nop
    
            goto L_80007438;
    }
    // 0x80007468: nop

L_8000746C:
    // 0x8000746C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80007470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007474: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007478: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000747C: jr          $ra
    // 0x80007480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80007480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80007484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000748C: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x80007490: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x80007494: beq         $s1, $t6, L_800074B0
    if (ctx->r17 == ctx->r14) {
        // 0x80007498: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800074B0;
    }
    // 0x80007498: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8000749C: jal         0x800073C0
    // 0x800074A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800073C0(rdram, ctx);
        goto after_0;
    // 0x800074A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800074A4: sw          $s1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r17;
    // 0x800074A8: b           L_800074B0
    // 0x800074AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800074B0;
    // 0x800074AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800074B0:
    // 0x800074B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800074B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800074B8: jr          $ra
    // 0x800074BC: nop

    return;
    // 0x800074BC: nop

;}
RECOMP_FUNC void func_800074C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800074C0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x800074C4: nop

    // 0x800074C8: beq         $t6, $zero, L_8000751C
    if (ctx->r14 == 0) {
        // 0x800074CC: nop
    
            goto L_8000751C;
    }
    // 0x800074CC: nop

    // 0x800074D0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800074D4: nop

    // 0x800074D8: beq         $v0, $zero, L_800074F4
    if (ctx->r2 == 0) {
        // 0x800074DC: nop
    
            goto L_800074F4;
    }
    // 0x800074DC: nop

    // 0x800074E0: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x800074E4: nop

    // 0x800074E8: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x800074EC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800074F0: nop

L_800074F4:
    // 0x800074F4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800074F8: nop

    // 0x800074FC: beq         $v1, $zero, L_8000750C
    if (ctx->r3 == 0) {
        // 0x80007500: nop
    
            goto L_8000750C;
    }
    // 0x80007500: nop

    // 0x80007504: b           L_80007518
    // 0x80007508: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
        goto L_80007518;
    // 0x80007508: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_8000750C:
    // 0x8000750C: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x80007510: nop

    // 0x80007514: sw          $v0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r2;
L_80007518:
    // 0x80007518: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
L_8000751C:
    // 0x8000751C: jr          $ra
    // 0x80007520: nop

    return;
    // 0x80007520: nop

;}
RECOMP_FUNC void func_80007524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007528: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000752C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007530: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007534: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007538: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000753C: lw          $s2, 0x8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X8);
    // 0x80007540: nop

    // 0x80007544: beq         $s2, $zero, L_80007580
    if (ctx->r18 == 0) {
        // 0x80007548: lw          $t8, 0x28($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X28);
            goto L_80007580;
    }
    // 0x80007548: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_8000754C:
    // 0x8000754C: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80007550: nop

    // 0x80007554: beq         $t7, $zero, L_80007564
    if (ctx->r15 == 0) {
        // 0x80007558: nop
    
            goto L_80007564;
    }
    // 0x80007558: nop

    // 0x8000755C: jal         0x80007524
    // 0x80007560: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007524(rdram, ctx);
        goto after_0;
    // 0x80007560: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
L_80007564:
    // 0x80007564: jal         0x80007484
    // 0x80007568: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    func_80007484(rdram, ctx);
        goto after_1;
    // 0x80007568: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    after_1:
    // 0x8000756C: lw          $s2, 0x10($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X10);
    // 0x80007570: nop

    // 0x80007574: bne         $s2, $zero, L_8000754C
    if (ctx->r18 != 0) {
        // 0x80007578: nop
    
            goto L_8000754C;
    }
    // 0x80007578: nop

    // 0x8000757C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_80007580:
    // 0x80007580: nop

    // 0x80007584: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    // 0x80007588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000758C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007598: jr          $ra
    // 0x8000759C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000759C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800075A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800075A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800075A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800075A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800075AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800075B0: jal         0x80007524
    // 0x800075B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80007524(rdram, ctx);
        goto after_0;
    // 0x800075B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800075B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800075BC: jal         0x800074C0
    // 0x800075C0: nop

    func_800074C0(rdram, ctx);
        goto after_1;
    // 0x800075C0: nop

    after_1:
    // 0x800075C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800075C8: jal         0x80007484
    // 0x800075CC: nop

    func_80007484(rdram, ctx);
        goto after_2;
    // 0x800075CC: nop

    after_2:
    // 0x800075D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800075D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800075D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800075DC: jr          $ra
    // 0x800075E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800075E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800075E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800075E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800075E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800075EC: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x800075F0: lw          $s2, 0x59BC($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X59BC);
    // 0x800075F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800075F8: andi        $s4, $a1, 0xFFFF
    ctx->r20 = ctx->r5 & 0XFFFF;
    // 0x800075FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80007600: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007604: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007608: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000760C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80007610: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80007614: beq         $s2, $zero, L_80007664
    if (ctx->r18 == 0) {
        // 0x80007618: andi        $t6, $a0, 0xFFFF
        ctx->r14 = ctx->r4 & 0XFFFF;
            goto L_80007664;
    }
    // 0x80007618: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8000761C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
L_80007620:
    // 0x80007620: lhu         $v0, 0x28($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X28);
    // 0x80007624: nop

    // 0x80007628: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8000762C: bne         $at, $zero, L_80007654
    if (ctx->r1 != 0) {
        // 0x80007630: slt         $at, $s4, $v0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80007654;
    }
    // 0x80007630: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80007634: bne         $at, $zero, L_80007654
    if (ctx->r1 != 0) {
        // 0x80007638: nop
    
            goto L_80007654;
    }
    // 0x80007638: nop

    // 0x8000763C: jal         0x80007524
    // 0x80007640: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80007524(rdram, ctx);
        goto after_0;
    // 0x80007640: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80007644: jal         0x800074C0
    // 0x80007648: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800074C0(rdram, ctx);
        goto after_1;
    // 0x80007648: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8000764C: jal         0x80007484
    // 0x80007650: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    func_80007484(rdram, ctx);
        goto after_2;
    // 0x80007650: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    after_2:
L_80007654:
    // 0x80007654: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x80007658: nop

    // 0x8000765C: bne         $s2, $zero, L_80007620
    if (ctx->r18 != 0) {
        // 0x80007660: nop
    
            goto L_80007620;
    }
    // 0x80007660: nop

L_80007664:
    // 0x80007664: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80007668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000766C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007670: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007674: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80007678: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000767C: jr          $ra
    // 0x80007680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80007680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80007684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007684: beq         $a1, $zero, L_800076B8
    if (ctx->r5 == 0) {
        // 0x80007688: nop
    
            goto L_800076B8;
    }
    // 0x80007688: nop

    // 0x8000768C: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80007690: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80007694: beq         $t6, $at, L_800076B8
    if (ctx->r14 == ctx->r1) {
        // 0x80007698: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_800076B8;
    }
    // 0x80007698: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000769C: bne         $a1, $at, L_800076B0
    if (ctx->r5 != ctx->r1) {
        // 0x800076A0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800076B0;
    }
    // 0x800076A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800076A4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800076A8: jr          $ra
    // 0x800076AC: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x800076AC: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
L_800076B0:
    // 0x800076B0: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x800076B4: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
L_800076B8:
    // 0x800076B8: jr          $ra
    // 0x800076BC: nop

    return;
    // 0x800076BC: nop

;}
RECOMP_FUNC void func_800076C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800076C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800076C4: lw          $v0, 0x59BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59BC);
    // 0x800076C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800076CC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800076D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800076D4: beq         $v0, $zero, L_8000774C
    if (ctx->r2 == 0) {
        // 0x800076D8: andi        $a3, $a1, 0xFFFF
        ctx->r7 = ctx->r5 & 0XFFFF;
            goto L_8000774C;
    }
    // 0x800076D8: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x800076DC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800076E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800076E4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800076E8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800076EC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_800076F0:
    // 0x800076F0: lhu         $v1, 0x28($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X28);
    // 0x800076F4: nop

    // 0x800076F8: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800076FC: bne         $at, $zero, L_8000773C
    if (ctx->r1 != 0) {
        // 0x80007700: slt         $at, $a3, $v1
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8000773C;
    }
    // 0x80007700: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80007704: bne         $at, $zero, L_8000773C
    if (ctx->r1 != 0) {
        // 0x80007708: nop
    
            goto L_8000773C;
    }
    // 0x80007708: nop

    // 0x8000770C: beq         $a2, $zero, L_8000773C
    if (ctx->r6 == 0) {
        // 0x80007710: nop
    
            goto L_8000773C;
    }
    // 0x80007710: nop

    // 0x80007714: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x80007718: nop

    // 0x8000771C: beq         $a0, $t7, L_8000773C
    if (ctx->r4 == ctx->r15) {
        // 0x80007720: nop
    
            goto L_8000773C;
    }
    // 0x80007720: nop

    // 0x80007724: bne         $a2, $t0, L_80007734
    if (ctx->r6 != ctx->r8) {
        // 0x80007728: nop
    
            goto L_80007734;
    }
    // 0x80007728: nop

    // 0x8000772C: b           L_8000773C
    // 0x80007730: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
        goto L_8000773C;
    // 0x80007730: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
L_80007734:
    // 0x80007734: sw          $t2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r10;
    // 0x80007738: sw          $a2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r6;
L_8000773C:
    // 0x8000773C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80007740: nop

    // 0x80007744: bne         $v0, $zero, L_800076F0
    if (ctx->r2 != 0) {
        // 0x80007748: nop
    
            goto L_800076F0;
    }
    // 0x80007748: nop

L_8000774C:
    // 0x8000774C: jr          $ra
    // 0x80007750: nop

    return;
    // 0x80007750: nop

;}
RECOMP_FUNC void func_80007754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000775C: jal         0x80006F14
    // 0x80007760: nop

    func_80006F14(rdram, ctx);
        goto after_0;
    // 0x80007760: nop

    after_0:
    // 0x80007764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000776C: jr          $ra
    // 0x80007770: nop

    return;
    // 0x80007770: nop

;}
RECOMP_FUNC void func_80007774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007774: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007778: lw          $v0, 0x59C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C0);
    // 0x8000777C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80007784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007784: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007788: lw          $v0, 0x59C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C0);
    // 0x8000778C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007794: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80007798: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8000779C: jal         0x8000701C
    // 0x800077A0: nop

    func_8000701C(rdram, ctx);
        goto after_0;
    // 0x800077A0: nop

    after_0:
    // 0x800077A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800077A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800077AC: jr          $ra
    // 0x800077B0: nop

    return;
    // 0x800077B0: nop

;}
RECOMP_FUNC void func_800077B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800077B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800077B8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800077BC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800077C0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800077C4: lw          $t6, 0x59BC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X59BC);
    // 0x800077C8: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x800077CC: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x800077D0: addiu       $fp, $fp, 0x59C0
    ctx->r30 = ADD32(ctx->r30, 0X59C0);
    // 0x800077D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800077D8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800077DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800077E0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800077E4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800077E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800077EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800077F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800077F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800077F8: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x800077FC: jal         0x80073DE0
    // 0x80007800: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    setjmp_recomp(rdram, ctx);
        goto after_0;
    // 0x80007800: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    after_0:
    // 0x80007804: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80007808: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x8000780C: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80007810: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80007814: addiu       $s4, $s4, 0x7AE0
    ctx->r20 = ADD32(ctx->r20, 0X7AE0);
    // 0x80007818: addiu       $s6, $s6, 0x4CB8
    ctx->r22 = ADD32(ctx->r22, 0X4CB8);
    // 0x8000781C: addiu       $s5, $zero, 0xA5
    ctx->r21 = ADD32(0, 0XA5);
    // 0x80007820: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x80007824: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80007828:
    // 0x80007828: beq         $s1, $s2, L_80007854
    if (ctx->r17 == ctx->r18) {
        // 0x8000782C: nop
    
            goto L_80007854;
    }
    // 0x8000782C: nop

    // 0x80007830: beq         $s1, $s3, L_80007840
    if (ctx->r17 == ctx->r19) {
        // 0x80007834: nop
    
            goto L_80007840;
    }
    // 0x80007834: nop

    // 0x80007838: b           L_8000788C
    // 0x8000783C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8000788C;
    // 0x8000783C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80007840:
    // 0x80007840: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80007844: jal         0x80006DC0
    // 0x80007848: nop

    func_80006DC0(rdram, ctx);
        goto after_1;
    // 0x80007848: nop

    after_1:
    // 0x8000784C: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80007850: nop

L_80007854:
    // 0x80007854: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x80007858: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8000785C: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x80007860: nop

    // 0x80007864: beq         $s5, $t8, L_8000787C
    if (ctx->r21 == ctx->r24) {
        // 0x80007868: nop
    
            goto L_8000787C;
    }
    // 0x80007868: nop

    // 0x8000786C: jal         0x80000FBC
    // 0x80007870: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x80007870: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80007874: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80007878: nop

L_8000787C:
    // 0x8000787C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007880: nop

    // 0x80007884: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x80007888: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8000788C:
    // 0x8000788C: beq         $v0, $zero, L_80007940
    if (ctx->r2 == 0) {
        // 0x80007890: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80007940;
    }
    // 0x80007890: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80007894: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x80007898: nop

    // 0x8000789C: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x800078A0: beq         $at, $zero, L_80007828
    if (ctx->r1 == 0) {
        // 0x800078A4: nop
    
            goto L_80007828;
    }
    // 0x800078A4: nop

    // 0x800078A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800078AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800078B0: addu        $at, $at, $t0
    gpr jr_addend_800078BC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800078B4: lw          $t0, 0x4D54($at)
    ctx->r8 = ADD32(ctx->r1, 0X4D54);
    // 0x800078B8: nop

    // 0x800078BC: jr          $t0
    // 0x800078C0: nop

    switch (jr_addend_800078BC >> 2) {
        case 0: goto L_80007924; break;
        case 1: goto L_800078CC; break;
        case 2: goto L_800078F8; break;
        case 3: goto L_80007920; break;
        case 4: goto L_800078C4; break;
        default: switch_error(__func__, 0x800078BC, 0x80094D54);
    }
    // 0x800078C0: nop

L_800078C4:
    // 0x800078C4: b           L_80007828
    // 0x800078C8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
        goto L_80007828;
    // 0x800078C8: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_800078CC:
    // 0x800078CC: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x800078D0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800078D4: blez        $v1, L_800078EC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800078D8: subu        $t1, $v1, $s7
        ctx->r9 = SUB32(ctx->r3, ctx->r23);
            goto L_800078EC;
    }
    // 0x800078D8: subu        $t1, $v1, $s7
    ctx->r9 = SUB32(ctx->r3, ctx->r23);
    // 0x800078DC: bgtz        $t1, L_800078EC
    if (SIGNED(ctx->r9) > 0) {
        // 0x800078E0: sw          $t1, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->r9;
            goto L_800078EC;
    }
    // 0x800078E0: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x800078E4: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x800078E8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
L_800078EC:
    // 0x800078EC: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x800078F0: b           L_80007828
    // 0x800078F4: nop

        goto L_80007828;
    // 0x800078F4: nop

L_800078F8:
    // 0x800078F8: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x800078FC: nop

    // 0x80007900: beq         $t3, $zero, L_80007910
    if (ctx->r11 == 0) {
        // 0x80007904: nop
    
            goto L_80007910;
    }
    // 0x80007904: nop

    // 0x80007908: b           L_80007828
    // 0x8000790C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
        goto L_80007828;
    // 0x8000790C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80007910:
    // 0x80007910: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80007914: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80007918: b           L_80007828
    // 0x8000791C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_80007828;
    // 0x8000791C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80007920:
    // 0x80007920: sw          $s4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r20;
L_80007924:
    // 0x80007924: addiu       $a0, $v0, 0x34
    ctx->r4 = ADD32(ctx->r2, 0X34);
    // 0x80007928: jal         0x80073E44
    // 0x8000792C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    longjmp_recomp(rdram, ctx);
        goto after_3;
    // 0x8000792C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80007930: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80007934: b           L_80007828
    // 0x80007938: nop

        goto L_80007828;
    // 0x80007938: nop

    // 0x8000793C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80007940:
    // 0x80007940: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007944: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007948: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000794C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80007950: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80007954: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80007958: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000795C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80007960: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80007964: jr          $ra
    // 0x80007968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80007968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000796C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000796C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007970: lw          $v0, 0x59C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C0);
    // 0x80007974: jr          $ra
    // 0x80007978: sw          $a0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r4;
    return;
    // 0x80007978: sw          $a0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_8000797C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000797C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007980: lw          $v0, 0x59C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C0);
    // 0x80007984: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80007988: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000798C: beq         $a0, $zero, L_800079AC
    if (ctx->r4 == 0) {
        // 0x80007990: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800079AC;
    }
    // 0x80007990: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80007994: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x80007998: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000799C: beq         $t6, $at, L_800079AC
    if (ctx->r14 == ctx->r1) {
        // 0x800079A0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_800079AC;
    }
    // 0x800079A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800079A4: sw          $t7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r15;
    // 0x800079A8: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
L_800079AC:
    // 0x800079AC: addiu       $t0, $a1, 0x34
    ctx->r8 = ADD32(ctx->r5, 0X34);
    // 0x800079B0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800079B4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800079B8: jal         0x80073DE0
    // 0x800079BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    setjmp_recomp(rdram, ctx);
        goto after_0;
    // 0x800079BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800079C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800079C4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800079C8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x800079CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800079D0: sll         $t8, $v1, 0
    ctx->r24 = S32(ctx->r3 << 0);
    // 0x800079D4: bgez        $t8, L_800079F8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800079D8: lui         $a0, 0x8000
        ctx->r4 = S32(0X8000 << 16);
            goto L_800079F8;
    }
    // 0x800079D8: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x800079DC: lw          $a3, 0x30($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X30);
    // 0x800079E0: and         $t1, $t0, $a0
    ctx->r9 = ctx->r8 & ctx->r4;
    // 0x800079E4: and         $t9, $a3, $a0
    ctx->r25 = ctx->r7 & ctx->r4;
    // 0x800079E8: beq         $t9, $zero, L_800079F8
    if (ctx->r25 == 0) {
        // 0x800079EC: nop
    
            goto L_800079F8;
    }
    // 0x800079EC: nop

    // 0x800079F0: bne         $t1, $zero, L_80007A2C
    if (ctx->r9 != 0) {
        // 0x800079F4: nop
    
            goto L_80007A2C;
    }
    // 0x800079F4: nop

L_800079F8:
    // 0x800079F8: lw          $a2, 0x20($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X20);
    // 0x800079FC: lw          $a3, 0x30($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X30);
    // 0x80007A00: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80007A04: addiu       $a0, $a0, 0x4C00
    ctx->r4 = ADD32(ctx->r4, 0X4C00);
    // 0x80007A08: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80007A0C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80007A10: jal         0x80000FBC
    // 0x80007A14: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80000FBC(rdram, ctx);
        goto after_1;
    // 0x80007A14: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80007A18: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80007A1C: nop

    // 0x80007A20: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80007A24: lw          $a3, 0x30($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X30);
    // 0x80007A28: nop

L_80007A2C:
    // 0x80007A2C: lw          $v0, 0x34($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X34);
    // 0x80007A30: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80007A34: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x80007A38: beq         $at, $zero, L_80007A64
    if (ctx->r1 == 0) {
        // 0x80007A3C: nop
    
            goto L_80007A64;
    }
    // 0x80007A3C: nop

    // 0x80007A40: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80007A44: lui         $at, 0xDBDB
    ctx->r1 = S32(0XDBDB << 16);
    // 0x80007A48: ori         $at, $at, 0x7272
    ctx->r1 = ctx->r1 | 0X7272;
    // 0x80007A4C: bne         $t2, $at, L_80007A64
    if (ctx->r10 != ctx->r1) {
        // 0x80007A50: nop
    
            goto L_80007A64;
    }
    // 0x80007A50: nop

    // 0x80007A54: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x80007A58: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x80007A5C: beq         $t3, $at, L_80007A8C
    if (ctx->r11 == ctx->r1) {
        // 0x80007A60: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_80007A8C;
    }
    // 0x80007A60: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_80007A64:
    // 0x80007A64: lw          $a2, 0x20($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X20);
    // 0x80007A68: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x80007A6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80007A70: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80007A74: addiu       $a0, $a0, 0x4C50
    ctx->r4 = ADD32(ctx->r4, 0X4C50);
    // 0x80007A78: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80007A7C: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
    // 0x80007A80: jal         0x80000FBC
    // 0x80007A84: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x80007A84: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_2:
    // 0x80007A88: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_80007A8C:
    // 0x80007A8C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007A90: bne         $t6, $zero, L_80007AA0
    if (ctx->r14 != 0) {
        // 0x80007A94: addiu       $a0, $a0, 0x5960
        ctx->r4 = ADD32(ctx->r4, 0X5960);
            goto L_80007AA0;
    }
    // 0x80007A94: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x80007A98: jal         0x80073E44
    // 0x80007A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    longjmp_recomp(rdram, ctx);
        goto after_3;
    // 0x80007A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80007AA0:
    // 0x80007AA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80007AA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80007AA8: jr          $ra
    // 0x80007AAC: nop

    return;
    // 0x80007AAC: nop

;}
RECOMP_FUNC void func_80007AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007AB8: jal         0x8000797C
    // 0x80007ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80007ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80007AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007AC8: jr          $ra
    // 0x80007ACC: nop

    return;
    // 0x80007ACC: nop

;}
RECOMP_FUNC void func_80007AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80007AE4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007AE8: lw          $a0, 0x59C0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X59C0);
    // 0x80007AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80007AF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007AF4: jal         0x80007524
    // 0x80007AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80007524(rdram, ctx);
        goto after_0;
    // 0x80007AF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80007AFC: jal         0x800074C0
    // 0x80007B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800074C0(rdram, ctx);
        goto after_1;
    // 0x80007B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80007B04: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x80007B08: nop

    // 0x80007B0C: beq         $v0, $zero, L_80007B1C
    if (ctx->r2 == 0) {
        // 0x80007B10: nop
    
            goto L_80007B1C;
    }
    // 0x80007B10: nop

    // 0x80007B14: jalr        $v0
    // 0x80007B18: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80007B18: nop

    after_2:
L_80007B1C:
    // 0x80007B1C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007B20: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007B24: beq         $v0, $zero, L_80007B40
    if (ctx->r2 == 0) {
        // 0x80007B28: addiu       $a0, $a0, 0x5960
        ctx->r4 = ADD32(ctx->r4, 0X5960);
            goto L_80007B40;
    }
    // 0x80007B28: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x80007B2C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80007B30: nop

    // 0x80007B34: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80007B38: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007B3C: nop

L_80007B40:
    // 0x80007B40: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80007B44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80007B48: beq         $v1, $zero, L_80007B58
    if (ctx->r3 == 0) {
        // 0x80007B4C: nop
    
            goto L_80007B58;
    }
    // 0x80007B4C: nop

    // 0x80007B50: b           L_80007B5C
    // 0x80007B54: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_80007B5C;
    // 0x80007B54: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80007B58:
    // 0x80007B58: sw          $v0, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r2;
L_80007B5C:
    // 0x80007B5C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007B60: addiu       $v0, $v0, 0x59C4
    ctx->r2 = ADD32(ctx->r2, 0X59C4);
    // 0x80007B64: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80007B68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80007B6C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80007B70: jal         0x80073E44
    // 0x80007B74: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    longjmp_recomp(rdram, ctx);
        goto after_3;
    // 0x80007B74: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    after_3:
    // 0x80007B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80007B7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007B80: jr          $ra
    // 0x80007B84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80007B84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80007B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007B88: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007B8C: lw          $v0, 0x59C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X59C0);
    // 0x80007B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007B98: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x80007B9C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80007BA0: beq         $t6, $zero, L_80007BC4
    if (ctx->r14 == 0) {
        // 0x80007BA4: addiu       $a0, $v0, 0x34
        ctx->r4 = ADD32(ctx->r2, 0X34);
            goto L_80007BC4;
    }
    // 0x80007BA4: addiu       $a0, $v0, 0x34
    ctx->r4 = ADD32(ctx->r2, 0X34);
    // 0x80007BA8: jal         0x80073DE0
    // 0x80007BAC: sw          $t7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r15;
    setjmp_recomp(rdram, ctx);
        goto after_0;
    // 0x80007BAC: sw          $t7, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r15;
    after_0:
    // 0x80007BB0: bne         $v0, $zero, L_80007BC4
    if (ctx->r2 != 0) {
        // 0x80007BB4: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_80007BC4;
    }
    // 0x80007BB4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007BB8: addiu       $a0, $a0, 0x5960
    ctx->r4 = ADD32(ctx->r4, 0X5960);
    // 0x80007BBC: jal         0x80073E44
    // 0x80007BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    longjmp_recomp(rdram, ctx);
        goto after_1;
    // 0x80007BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80007BC4:
    // 0x80007BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007BCC: jr          $ra
    // 0x80007BD0: nop

    return;
    // 0x80007BD0: nop

;}
RECOMP_FUNC void func_80007BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80007BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007BDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80007BE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80007BE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80007BE8: jal         0x800074C0
    // 0x80007BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800074C0(rdram, ctx);
        goto after_0;
    // 0x80007BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80007BF0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80007BF4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80007BF8: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x80007BFC: nop

    // 0x80007C00: beq         $v0, $zero, L_80007C14
    if (ctx->r2 == 0) {
        // 0x80007C04: nop
    
            goto L_80007C14;
    }
    // 0x80007C04: nop

    // 0x80007C08: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x80007C0C: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x80007C10: nop

L_80007C14:
    // 0x80007C14: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80007C18: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x80007C1C: sw          $a1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r5;
    // 0x80007C20: sw          $a2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r6;
    // 0x80007C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80007C2C: jr          $ra
    // 0x80007C30: nop

    return;
    // 0x80007C30: nop

;}
